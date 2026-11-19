#include "recomp.h"
#include "rec_mod.h"

void f_d88f11(void) {
  LOAD_REGS();
L_d88f11: /* d88f11: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d88f14: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d88f19: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d88f1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d88f1d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d88f20: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd88f25u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d88f25(); return;
}

void f_d88f25(void) {
  LOAD_REGS();
L_d88f25: /* d88f25: push 0xdbfdec */
  { uint32_t v = 0xdbfdecu; esp -= 4; W32(esp, v); }
/* d88f2a: push 0xde17c4 */
  { uint32_t v = 0xde17c4u; esp -= 4; W32(esp, v); }
/* d88f2f: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd88f35u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d88f35: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d88f38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d88f3a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d88f3c: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd88f41u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d88f41: guest_badaddr(0xd88f41); return;
}

void f_d88fa0(void) {
  LOAD_REGS();
L_d88fa0: /* d88fa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d88fa1: mov ebp, esp */
  ebp = esp;
/* d88fa3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d88fa5: push 0xdb8d20 */
  { uint32_t v = 0xdb8d20u; esp -= 4; W32(esp, v); }
/* d88faa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d88fb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d88fb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d88fb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d88fbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d88fbc: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* d88fbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d88fc0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d88fc1: mov esi, ecx */
  esi = ecx;
/* d88fc3: mov ecx, dword ptr [0xde5034] */
  ecx = R32((uint32_t)(0xde5034u));
/* d88fc9: movzx edx, word ptr [esi + 0xc] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0xcu)));
/* d88fcd: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* d88fd0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d88fd3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d88fd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d88fd7: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* d88fda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d88fdb: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* d88fde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d88fdf: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* d88fe2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d88fe3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d88fe6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d88fe7: xor ecx, ecx */
  ecx = 0;
/* d88fe9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d88feb: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d88fee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d88fef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d88ff0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d88ff7: or ecx, 0x40000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* d88ffd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d88ffe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89000: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89002: mov ecx, esi */
  ecx = esi;
/* d89004: call 0xd81852 */
  esp -= 4; W32(esp, 0xd89009u); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* d89009: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* d8900f: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d89012: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* d89015: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89017: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* d89019: je 0xd8902d */
  if (zf) goto L_d8902d;
L_d8901b: /* d8901b: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xd89021u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* d89021: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89022: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* d89024: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d89025: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8902bu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8902b: jmp 0xd8903d */
  goto L_d8903d;
L_d8902d: /* d8902d: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xd89033u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* d89033: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89034: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* d89036: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d89037: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8903du); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_d8903d: /* d8903d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d89040: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d89042: je 0xd89050 */
  if (zf) goto L_d89050;
L_d89044: /* d89044: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d89047: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d89049: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8904a: call dword ptr [0xde8ef4] */
  esp -= 4; W32(esp, 0xd89050u); SPILL(); call_ind(R32(0xde8ef4u)); if (g_unwind) return; /* USER32!ShowWindow */ RELOAD();
L_d89050: /* d89050: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d89053: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d89054: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d89055: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8905c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8905d: mov esp, ebp */
  esp = ebp;
/* d8905f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d89060: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_d89063(void) {
  LOAD_REGS();
L_d89063: /* d89063: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d89066: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8906b: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d8906e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8906f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d89072: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd89077u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d89077(); return;
}

void f_d89077(void) {
  LOAD_REGS();
L_d89077: /* d89077: push 0xdbfe20 */
  { uint32_t v = 0xdbfe20u; esp -= 4; W32(esp, v); }
/* d8907c: push 0xde17e4 */
  { uint32_t v = 0xde17e4u; esp -= 4; W32(esp, v); }
/* d89081: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd89087u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d89087: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8908a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8908c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8908e: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd89093u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d89093: guest_badaddr(0xd89093); return;
}

void f_d890e0(void) {
  LOAD_REGS();
L_d890e0: /* d890e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d890e1: mov ebp, esp */
  ebp = esp;
/* d890e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d890e5: push 0xdb8d30 */
  { uint32_t v = 0xdb8d30u; esp -= 4; W32(esp, v); }
/* d890ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d890f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d890f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d890f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d890fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d890fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d890fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d890fe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d89101: mov esi, ecx */
  esi = ecx;
/* d89103: mov ecx, dword ptr [0xde5034] */
  ecx = R32((uint32_t)(0xde5034u));
/* d89109: movzx edx, word ptr [esi + 0xc] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0xcu)));
/* d8910d: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* d89110: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d89113: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d89114: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* d89117: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d89118: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* d8911b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8911c: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* d8911f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89120: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d89123: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d89124: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* d89127: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d89128: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89129: or ecx, 0x40000037 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000037u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* d8912f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d89130: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89132: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* d89137: mov ecx, esi */
  ecx = esi;
/* d89139: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d89140: call 0xd81852 */
  esp -= 4; W32(esp, 0xd89145u); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* d89145: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* d8914b: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8914e: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* d89151: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89153: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* d89155: je 0xd89169 */
  if (zf) goto L_d89169;
L_d89157: /* d89157: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xd8915du); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* d8915d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8915e: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* d89160: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d89161: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd89167u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d89167: jmp 0xd89179 */
  goto L_d89179;
L_d89169: /* d89169: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xd8916fu); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* d8916f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89170: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* d89172: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d89173: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd89179u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_d89179: /* d89179: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d8917c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8917e: je 0xd8918c */
  if (zf) goto L_d8918c;
L_d89180: /* d89180: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d89183: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d89185: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89186: call dword ptr [0xde8ef4] */
  esp -= 4; W32(esp, 0xd8918cu); SPILL(); call_ind(R32(0xde8ef4u)); if (g_unwind) return; /* USER32!ShowWindow */ RELOAD();
L_d8918c: /* d8918c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8918f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d89190: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d89191: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d89198: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d89199: mov esp, ebp */
  esp = ebp;
/* d8919b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8919c: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_d8919f(void) {
  LOAD_REGS();
L_d8919f: /* d8919f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d891a2: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d891a7: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d891aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d891ab: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d891ae: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd891b3u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d891b3(); return;
}

void f_d891b3(void) {
  LOAD_REGS();
L_d891b3: /* d891b3: push 0xdbfe58 */
  { uint32_t v = 0xdbfe58u; esp -= 4; W32(esp, v); }
/* d891b8: push 0xde17ec */
  { uint32_t v = 0xde17ecu; esp -= 4; W32(esp, v); }
/* d891bd: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd891c3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d891c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d891c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d891c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d891ca: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd891cfu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d891cf: guest_badaddr(0xd891cf); return;
}

void f_d89210(void) {
  LOAD_REGS();
L_d89210: /* d89210: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d89215: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d89218: push 0xffff0000 */
  { uint32_t v = 0xffff0000u; esp -= 4; W32(esp, v); }
/* d8921d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8921f: push 0x1101 */
  { uint32_t v = 0x1101u; esp -= 4; W32(esp, v); }
/* d89224: je 0xd89231 */
  if (zf) goto L_d89231;
L_d89226: /* d89226: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d89229: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8922a: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd89230u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d89230: ret  */
  esp += 4; SPILL(); return;
L_d89231: /* d89231: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* d89234: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d89235: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8923bu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8923b: ret  */
  esp += 4; SPILL(); return;
}

void f_d89250(void) {
  LOAD_REGS();
L_d89250: /* d89250: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d89251: mov ebp, esp */
  ebp = esp;
/* d89253: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d89255: push 0xdb8d40 */
  { uint32_t v = 0xdb8d40u; esp -= 4; W32(esp, v); }
/* d8925a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d89260: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89261: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d89268: sub esp, 0x23c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x23cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8926e: mov eax, dword ptr [0xde4f08] */
  eax = R32((uint32_t)(0xde4f08u));
/* d89273: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d89274: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d89275: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d89276: mov esi, ecx */
  esi = ecx;
/* d89278: mov dword ptr [ebp - 0x248], eax */
  W32((uint32_t)(ebp + 0xfffffdb8u), eax);
/* d8927e: xor eax, eax */
  eax = 0;
/* d89280: mov ecx, 0x7f */
  ecx = 0x7fu;
/* d89285: lea edi, [ebp - 0x244] */
  edi = (uint32_t)(ebp + 0xfffffdbcu);
/* d8928b: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* d8928d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d89290: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d89293: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d89294: lea edx, [ebp - 0x248] */
  edx = (uint32_t)(ebp + 0xfffffdb8u);
/* d8929a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8929b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d892a2: call dword ptr [0xde88b4] */
  esp -= 4; W32(esp, 0xd892a8u); SPILL(); f_4e27d9(); if (g_unwind) return; /* Core!?appStrcpy@@YAPAGPAGPBG@Z */ RELOAD();
/* d892a8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d892ab: lea ecx, [ebp - 0x248] */
  ecx = (uint32_t)(ebp + 0xfffffdb8u);
/* d892b1: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* d892b4: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* d892b7: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* d892ba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d892bd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d892bf: mov eax, 1 */
  eax = 0x1u;
/* d892c4: mov dword ptr [ebp - 0x44], 0xffff0003 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0xffff0003u);
/* d892cb: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* d892ce: je 0xd892da */
  if (zf) goto L_d892da;
L_d892d0: /* d892d0: mov dword ptr [ebp - 0x40], 0x41 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x41u);
/* d892d7: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_d892da: /* d892da: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* d892e0: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d892e3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d892e6: je 0xd8930d */
  if (zf) goto L_d8930d;
L_d892e8: /* d892e8: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* d892eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d892ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d892ee: push 0x1132 */
  { uint32_t v = 0x1132u; esp -= 4; W32(esp, v); }
/* d892f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d892f4: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd892fau); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d892fa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d892fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d89304: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d89305: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d89306: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d89307: mov esp, ebp */
  esp = ebp;
/* d89309: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8930a: ret 0xc */
  esp += 16; SPILL(); return;
L_d8930d: /* d8930d: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* d89310: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d89311: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89313: push 0x1132 */
  { uint32_t v = 0x1132u; esp -= 4; W32(esp, v); }
/* d89318: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89319: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8931fu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8931f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d89322: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d89323: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d89324: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8932b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8932c: mov esp, ebp */
  esp = ebp;
/* d8932e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8932f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d89332(void) {
  LOAD_REGS();
L_d89332: /* d89332: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d89335: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8933a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8933d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8933e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d89341: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd89346u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d89346(); return;
}

void f_d89346(void) {
  LOAD_REGS();
L_d89346: /* d89346: push 0xdbfe8c */
  { uint32_t v = 0xdbfe8cu; esp -= 4; W32(esp, v); }
/* d8934b: push 0xde17fc */
  { uint32_t v = 0xde17fcu; esp -= 4; W32(esp, v); }
/* d89350: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd89356u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d89356: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d89359: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8935b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8935d: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd89362u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d89362: guest_badaddr(0xd89362); return;
}

void f_d893c0(void) {
  LOAD_REGS();
L_d893c0: /* d893c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d893c1: mov ebp, esp */
  ebp = esp;
/* d893c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d893c5: push 0xdb8d50 */
  { uint32_t v = 0xdb8d50u; esp -= 4; W32(esp, v); }
/* d893ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d893d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d893d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d893d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d893db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d893dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d893dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d893de: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d893e1: mov esi, ecx */
  esi = ecx;
/* d893e3: mov ecx, dword ptr [0xde5034] */
  ecx = R32((uint32_t)(0xde5034u));
/* d893e9: movzx edx, word ptr [esi + 0xc] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0xcu)));
/* d893ed: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* d893f0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d893f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d893f4: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* d893f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d893f8: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* d893fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d893fc: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* d893ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89400: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d89403: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d89404: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d89405: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89406: push 0x50000000 */
  { uint32_t v = 0x50000000u; esp -= 4; W32(esp, v); }
/* d8940b: push 0xde1814 */
  { uint32_t v = 0xde1814u; esp -= 4; W32(esp, v); }
/* d89410: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89412: mov ecx, esi */
  ecx = esi;
/* d89414: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8941b: call 0xd81852 */
  esp -= 4; W32(esp, 0xd89420u); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* d89420: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* d89423: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d89425: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89426: mov ecx, esi */
  ecx = esi;
/* d89428: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0xd8942bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8942b: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* d89431: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d89434: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* d89437: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89439: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* d8943b: je 0xd8944f */
  if (zf) goto L_d8944f;
L_d8943d: /* d8943d: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xd89443u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* d89443: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89444: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* d89446: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d89447: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8944du); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8944d: jmp 0xd8945f */
  goto L_d8945f;
L_d8944f: /* d8944f: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xd89455u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* d89455: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89456: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* d89458: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d89459: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8945fu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_d8945f: /* d8945f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d89462: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d89464: je 0xd89472 */
  if (zf) goto L_d89472;
L_d89466: /* d89466: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* d89469: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d8946b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8946c: call dword ptr [0xde8ef4] */
  esp -= 4; W32(esp, 0xd89472u); SPILL(); call_ind(R32(0xde8ef4u)); if (g_unwind) return; /* USER32!ShowWindow */ RELOAD();
L_d89472: /* d89472: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d89475: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d89476: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d89477: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8947e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8947f: mov esp, ebp */
  esp = ebp;
/* d89481: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d89482: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_d89485(void) {
  LOAD_REGS();
L_d89485: /* d89485: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d89488: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8948d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d89490: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d89491: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d89494: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd89499u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d89499(); return;
}

void f_d89499(void) {
  LOAD_REGS();
L_d89499: /* d89499: push 0xdbfebc */
  { uint32_t v = 0xdbfebcu; esp -= 4; W32(esp, v); }
/* d8949e: push 0xde1824 */
  { uint32_t v = 0xde1824u; esp -= 4; W32(esp, v); }
/* d894a3: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd894a9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d894a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d894ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d894ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d894b0: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd894b5u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d894b5: guest_badaddr(0xd894b5); return;
}

void f_d89500(void) {
  LOAD_REGS();
L_d89500: /* d89500: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d89501: mov ebp, esp */
  ebp = esp;
/* d89503: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d89505: push 0xdb8d60 */
  { uint32_t v = 0xdb8d60u; esp -= 4; W32(esp, v); }
/* d8950a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d89510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89511: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d89518: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8951b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8951c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8951d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8951e: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* d89521: mov esi, ecx */
  esi = ecx;
/* d89523: mov ecx, dword ptr [0xde5034] */
  ecx = R32((uint32_t)(0xde5034u));
/* d89529: movzx edx, word ptr [esi + 0xc] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0xcu)));
/* d8952d: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* d89530: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d89533: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d89536: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d89537: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d8953a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8953b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8953c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d8953f: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d89541: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d89543: and eax, 0x10000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d89548: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* d8954a: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* d8954c: push 0x180 */
  { uint32_t v = 0x180u; esp -= 4; W32(esp, v); }
/* d89551: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* d89553: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* d89559: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d8955b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8955d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8955f: or eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d89561: or eax, 0x40200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40200000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d89566: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89567: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89569: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8956b: mov ecx, esi */
  ecx = esi;
/* d8956d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d89574: call 0xd81852 */
  esp -= 4; W32(esp, 0xd89579u); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* d89579: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* d8957f: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d89582: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* d89585: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89587: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* d89589: je 0xd895ae */
  if (zf) goto L_d895ae;
L_d8958b: /* d8958b: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xd89591u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* d89591: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89592: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* d89594: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d89595: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8959bu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8959b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8959e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d895a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d895a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d895a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d895a8: mov esp, ebp */
  esp = ebp;
/* d895aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d895ab: ret 0xc */
  esp += 16; SPILL(); return;
L_d895ae: /* d895ae: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xd895b4u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* d895b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d895b5: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* d895b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d895b8: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd895beu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d895be: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d895c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d895c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d895c3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d895ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d895cb: mov esp, ebp */
  esp = ebp;
/* d895cd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d895ce: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d895d1(void) {
  LOAD_REGS();
L_d895d1: /* d895d1: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d895d4: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d895d9: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d895dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d895dd: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d895e0: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd895e5u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d895e5(); return;
}

void f_d895e5(void) {
  LOAD_REGS();
L_d895e5: /* d895e5: push 0xdbfef8 */
  { uint32_t v = 0xdbfef8u; esp -= 4; W32(esp, v); }
/* d895ea: push 0xde1870 */
  { uint32_t v = 0xde1870u; esp -= 4; W32(esp, v); }
/* d895ef: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd895f5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d895f5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d895f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d895fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d895fc: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd89601u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d89601: guest_badaddr(0xd89601); return;
}

void f_d89660(void) {
  LOAD_REGS();
L_d89660: /* d89660: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d89661: mov ebp, esp */
  ebp = esp;
/* d89663: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d89665: push 0xdb8d70 */
  { uint32_t v = 0xdb8d70u; esp -= 4; W32(esp, v); }
/* d8966a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d89670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89671: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d89678: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8967b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d8967e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8967f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d89680: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d89683: cmp ax, 2 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* d89687: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d89688: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8968b: mov esi, ecx */
  esi = ecx;
/* d8968d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d89694: jne 0xd896b6 */
  if (!zf) goto L_d896b6;
L_d89696: /* d89696: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* d89699: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* d8969c: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xd8969eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8969e: mov eax, 1 */
  eax = 0x1u;
/* d896a3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d896a6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d896ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d896ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d896af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d896b0: mov esp, ebp */
  esp = ebp;
/* d896b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d896b3: ret 0xc */
  esp += 16; SPILL(); return;
L_d896b6: /* d896b6: cmp ax, 7 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* d896ba: jne 0xd89745 */
  if (!zf) goto L_d89745;
L_d896c0: /* d896c0: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d896c3: mov edi, dword ptr [0xde8f70] */
  edi = R32((uint32_t)(0xde8f70u));
/* d896c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d896cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d896cd: push 0x154 */
  { uint32_t v = 0x154u; esp -= 4; W32(esp, v); }
/* d896d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d896d3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd896d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d896d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d896d7: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d896d9: mov ebx, eax */
  ebx = eax;
/* d896db: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d896de: push 0x154 */
  { uint32_t v = 0x154u; esp -= 4; W32(esp, v); }
/* d896e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d896e4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd896e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d896e6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d896e8: mov ecx, esi */
  ecx = esi;
/* d896ea: mov edi, eax */
  edi = eax;
/* d896ec: call dword ptr [edx + 0xf0] */
  { uint32_t t = R32((uint32_t)(edx + 0xf0u)); esp -= 4; W32(esp, 0xd896f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d896f2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d896f3: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* d896f6: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d896f8: cmp eax, 0x180 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x180u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d896fd: mov edi, eax */
  edi = eax;
/* d896ff: jle 0xd89706 */
  if ((zf || sf != of)) goto L_d89706;
L_d89701: /* d89701: mov edi, 0x180 */
  edi = 0x180u;
L_d89706: /* d89706: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d89708: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* d8970b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8970c: mov ecx, esi */
  ecx = esi;
/* d8970e: call 0xd82202 */
  esp -= 4; W32(esp, 0xd89713u); SPILL(); f_d82202(); if (g_unwind) return; RELOAD();
/* d89713: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* d89716: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d89718: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8971a: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d8971c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8971d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8971e: mov ecx, esi */
  ecx = esi;
/* d89720: call 0xd815aa */
  esp -= 4; W32(esp, 0xd89725u); SPILL(); f_d815aa(); if (g_unwind) return; RELOAD();
/* d89725: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* d89728: lea ecx, [esi + 0x4c] */
  ecx = (uint32_t)(esi + 0x4cu);
/* d8972b: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd8972du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8972d: mov eax, 1 */
  eax = 0x1u;
/* d89732: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d89735: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8973c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8973d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8973e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8973f: mov esp, ebp */
  esp = ebp;
/* d89741: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d89742: ret 0xc */
  esp += 16; SPILL(); return;
L_d89745: /* d89745: cmp ax, 8 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x8u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* d89749: jne 0xd8976b */
  if (!zf) goto L_d8976b;
L_d8974b: /* d8974b: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* d8974e: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* d89751: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xd89753u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d89753: mov eax, 1 */
  eax = 0x1u;
/* d89758: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8975b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d89762: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d89763: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d89764: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d89765: mov esp, ebp */
  esp = ebp;
/* d89767: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d89768: ret 0xc */
  esp += 16; SPILL(); return;
L_d8976b: /* d8976b: cmp ax, 5 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* d8976f: jne 0xd89791 */
  if (!zf) goto L_d89791;
L_d89771: /* d89771: mov edx, dword ptr [esi + 0x64] */
  edx = R32((uint32_t)(esi + 0x64u));
/* d89774: lea ecx, [esi + 0x64] */
  ecx = (uint32_t)(esi + 0x64u);
/* d89777: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd89779u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d89779: mov eax, 1 */
  eax = 0x1u;
/* d8977e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d89781: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d89788: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d89789: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8978a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8978b: mov esp, ebp */
  esp = ebp;
/* d8978d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8978e: ret 0xc */
  esp += 16; SPILL(); return;
L_d89791: /* d89791: cmp ax, 6 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x6u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* d89795: jne 0xd897b7 */
  if (!zf) goto L_d897b7;
L_d89797: /* d89797: mov eax, dword ptr [esi + 0x70] */
  eax = R32((uint32_t)(esi + 0x70u));
/* d8979a: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* d8979d: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xd8979fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8979f: mov eax, 1 */
  eax = 0x1u;
/* d897a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d897a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d897ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d897af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d897b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d897b1: mov esp, ebp */
  esp = ebp;
/* d897b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d897b4: ret 0xc */
  esp += 16; SPILL(); return;
L_d897b7: /* d897b7: cmp ax, 3 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* d897bb: jne 0xd897dd */
  if (!zf) goto L_d897dd;
L_d897bd: /* d897bd: mov edx, dword ptr [esi + 0x7c] */
  edx = R32((uint32_t)(esi + 0x7cu));
/* d897c0: lea ecx, [esi + 0x7c] */
  ecx = (uint32_t)(esi + 0x7cu);
/* d897c3: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd897c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d897c5: mov eax, 1 */
  eax = 0x1u;
/* d897ca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d897cd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d897d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d897d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d897d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d897d7: mov esp, ebp */
  esp = ebp;
/* d897d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d897da: ret 0xc */
  esp += 16; SPILL(); return;
L_d897dd: /* d897dd: cmp ax, 4 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x4u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* d897e1: jne 0xd89809 */
  if (!zf) goto L_d89809;
L_d897e3: /* d897e3: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* d897e9: lea ecx, [esi + 0x88] */
  ecx = (uint32_t)(esi + 0x88u);
/* d897ef: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xd897f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d897f1: mov eax, 1 */
  eax = 0x1u;
/* d897f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d897f9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d89800: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d89801: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d89802: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d89803: mov esp, ebp */
  esp = ebp;
/* d89805: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d89806: ret 0xc */
  esp += 16; SPILL(); return;
L_d89809: /* d89809: cmp ax, 1 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x1u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* d8980d: jne 0xd89835 */
  if (!zf) goto L_d89835;
L_d8980f: /* d8980f: mov edx, dword ptr [esi + 0x94] */
  edx = R32((uint32_t)(esi + 0x94u));
/* d89815: lea ecx, [esi + 0x94] */
  ecx = (uint32_t)(esi + 0x94u);
/* d8981b: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd8981du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8981d: mov eax, 1 */
  eax = 0x1u;
/* d89822: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d89825: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8982c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8982d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8982e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8982f: mov esp, ebp */
  esp = ebp;
/* d89831: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d89832: ret 0xc */
  esp += 16; SPILL(); return;
L_d89835: /* d89835: cmp ax, 9 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x9u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* d89839: jne 0xd89861 */
  if (!zf) goto L_d89861;
L_d8983b: /* d8983b: mov eax, dword ptr [esi + 0xa0] */
  eax = R32((uint32_t)(esi + 0xa0u));
/* d89841: lea ecx, [esi + 0xa0] */
  ecx = (uint32_t)(esi + 0xa0u);
/* d89847: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xd89849u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d89849: mov eax, 1 */
  eax = 0x1u;
/* d8984e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d89851: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d89858: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d89859: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8985a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8985b: mov esp, ebp */
  esp = ebp;
/* d8985d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8985e: ret 0xc */
  esp += 16; SPILL(); return;
L_d89861: /* d89861: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* d89865: jne 0xd898bd */
  if (!zf) goto L_d898bd;
L_d89867: /* d89867: mov edx, dword ptr [esi + 0xac] */
  edx = R32((uint32_t)(esi + 0xacu));
/* d8986d: lea ecx, [esi + 0xac] */
  ecx = (uint32_t)(esi + 0xacu);
/* d89873: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd89875u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d89875: mov eax, 1 */
  eax = 0x1u;
/* d8987a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8987d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d89884: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d89885: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d89886: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d89887: mov esp, ebp */
  esp = ebp;
/* d89889: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8988a: ret 0xc */
  esp += 16; SPILL(); return;
L_d898bd: /* d898bd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d898c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d898c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d898c2: xor eax, eax */
  eax = 0;
/* d898c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d898cb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d898cc: mov esp, ebp */
  esp = ebp;
/* d898ce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d898cf: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d8988d(void) {
  LOAD_REGS();
L_d8988d: /* d8988d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d89890: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d89895: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d89898: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d89899: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8989c: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd898a1u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d898a1(); return;
}

void f_d898a1(void) {
  LOAD_REGS();
L_d898a1: /* d898a1: push 0xdbff30 */
  { uint32_t v = 0xdbff30u; esp -= 4; W32(esp, v); }
/* d898a6: push 0xde1878 */
  { uint32_t v = 0xde1878u; esp -= 4; W32(esp, v); }
/* d898ab: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd898b1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d898b1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d898b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d898b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d898b8: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd898bdu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
/* d898bd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d898c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d898c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d898c2: xor eax, eax */
  eax = 0;
/* d898c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d898cb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d898cc: mov esp, ebp */
  esp = ebp;
/* d898ce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d898cf: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d89980(void) {
  LOAD_REGS();
L_d89980: /* d89980: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d89981: mov ebp, esp */
  ebp = esp;
/* d89983: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d89985: push 0xdb8d80 */
  { uint32_t v = 0xdb8d80u; esp -= 4; W32(esp, v); }
/* d8998a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d89990: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89991: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d89998: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8999b: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d899a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d899a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d899a2: mov ebx, ecx */
  ebx = ecx;
/* d899a4: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d899a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d899a8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d899ab: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d899b2: je 0xd899df */
  if (zf) goto L_d899df;
L_d899b4: /* d899b4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d899b7: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* d899ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d899bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d899bd: push 0x143 */
  { uint32_t v = 0x143u; esp -= 4; W32(esp, v); }
/* d899c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d899c3: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd899c9u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
L_d899c9: /* d899c9: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* d899cc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d899cf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d899d6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d899d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d899d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d899d9: mov esp, ebp */
  esp = ebp;
/* d899db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d899dc: ret 4 */
  esp += 8; SPILL(); return;
L_d899df: /* d899df: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d899e2: mov edi, dword ptr [0xde88c8] */
  edi = R32((uint32_t)(0xde88c8u));
/* d899e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d899e9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd899ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d899eb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d899ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d899f0: jne 0xd899f7 */
  if (!zf) goto L_d899f7;
L_d899f2: /* d899f2: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* d899f5: jmp 0xd89a14 */
  goto L_d89a14;
L_d899f7: /* d899f7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d899f8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd899fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d899fa: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d899fd: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d89a00: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d89a03: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d89a06: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d89a09: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd89a0eu); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d89a0e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d89a11: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
L_d89a14: /* d89a14: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* d89a17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d89a18: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd89a1au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d89a1a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d89a1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89a1e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d89a21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d89a22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89a23: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xd89a29u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* d89a29: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d89a2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89a2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89a2f: push 0x143 */
  { uint32_t v = 0x143u; esp -= 4; W32(esp, v); }
/* d89a34: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d89a35: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd89a3bu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d89a3b: jmp 0xd899c9 */
  goto L_d899c9;
}

void f_d89a3d(void) {
  LOAD_REGS();
L_d89a3d: /* d89a3d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d89a40: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d89a45: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d89a48: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d89a49: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d89a4c: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd89a51u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d89a51(); return;
}

void f_d89a51(void) {
  LOAD_REGS();
L_d89a51: /* d89a51: push 0xdbff84 */
  { uint32_t v = 0xdbff84u; esp -= 4; W32(esp, v); }
/* d89a56: push 0xde1880 */
  { uint32_t v = 0xde1880u; esp -= 4; W32(esp, v); }
/* d89a5b: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd89a61u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d89a61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d89a64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89a66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89a68: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd89a6du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d89a6d: guest_badaddr(0xd89a6d); return;
}

void f_d89ab0(void) {
  LOAD_REGS();
L_d89ab0: /* d89ab0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d89ab1: mov ebp, esp */
  ebp = esp;
/* d89ab3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d89ab5: push 0xdb8d90 */
  { uint32_t v = 0xdb8d90u; esp -= 4; W32(esp, v); }
/* d89aba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d89ac0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89ac1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d89ac8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d89acb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d89acc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d89acd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d89ace: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* d89ad1: xor ebx, ebx */
  ebx = 0;
/* d89ad3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d89ad6: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* d89ad9: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d89ade: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d89adf: mov esi, ecx */
  esi = ecx;
/* d89ae1: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d89ae3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d89ae6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d89ae7: push 0x149 */
  { uint32_t v = 0x149u; esp -= 4; W32(esp, v); }
/* d89aec: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* d89aef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89af0: je 0xd89afa */
  if (zf) goto L_d89afa;
L_d89af2: /* d89af2: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd89af8u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d89af8: jmp 0xd89b00 */
  goto L_d89b00;
L_d89afa: /* d89afa: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd89b00u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_d89b00: /* d89b00: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d89b03: jne 0xd89b2d */
  if (!zf) goto L_d89b2d;
L_d89b05: /* d89b05: push 0xde4f34 */
  { uint32_t v = 0xde4f34u; esp -= 4; W32(esp, v); }
L_d89b0a: /* d89b0a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d89b0d: mov ecx, esi */
  ecx = esi;
/* d89b0f: call dword ptr [0xde88e4] */
  esp -= 4; W32(esp, 0xd89b15u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* d89b15: mov eax, esi */
  eax = esi;
/* d89b17: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* d89b1a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d89b1d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d89b24: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d89b25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d89b26: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d89b27: mov esp, ebp */
  esp = ebp;
/* d89b29: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d89b2a: ret 8 */
  esp += 12; SPILL(); return;
L_d89b2d: /* d89b2d: mov ecx, dword ptr [0xde88f8] */
  ecx = R32((uint32_t)(0xde88f8u));
/* d89b33: cmp dword ptr [ecx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d89b35: je 0xd89b7e */
  if (zf) goto L_d89b7e;
L_d89b37: /* d89b37: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* d89b3d: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d89b3f: jne 0xd89b7e */
  if (!zf) goto L_d89b7e;
L_d89b41: /* d89b41: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* d89b44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d89b46: je 0xd89b5e */
  if (zf) goto L_d89b5e;
L_d89b48: /* d89b48: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d89b4b: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d89b4e: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d89b51: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d89b54: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd89b59u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d89b59: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d89b5c: mov ebx, esp */
  ebx = esp;
L_d89b5e: /* d89b5e: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* d89b61: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d89b62: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d89b63: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* d89b68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d89b69: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd89b6fu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d89b6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89b71: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d89b72: call dword ptr [0xde88ec] */
  esp -= 4; W32(esp, 0xd89b78u); SPILL(); f_4e161d(); if (g_unwind) return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */ RELOAD();
/* d89b78: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d89b7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89b7c: jmp 0xd89b0a */
  goto L_d89b0a;
L_d89b7e: /* d89b7e: lea edx, [eax + eax + 2] */
  edx = (uint32_t)(eax + eax + 0x2u);
/* d89b82: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d89b84: je 0xd89b9d */
  if (zf) goto L_d89b9d;
L_d89b86: /* d89b86: lea eax, [eax + eax + 9] */
  eax = (uint32_t)(eax + eax + 0x9u);
/* d89b8a: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d89b8d: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d89b90: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d89b93: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd89b98u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d89b98: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d89b9b: mov ebx, esp */
  ebx = esp;
L_d89b9d: /* d89b9d: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* d89ba0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d89ba1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d89ba2: push 0x148 */
  { uint32_t v = 0x148u; esp -= 4; W32(esp, v); }
/* d89ba7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d89ba8: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd89baeu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d89bae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d89baf: jmp 0xd89b0a */
  goto L_d89b0a;
}

void f_d89bb4(void) {
  LOAD_REGS();
L_d89bb4: /* d89bb4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d89bb7: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d89bbc: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d89bbf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d89bc0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d89bc3: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd89bc8u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d89bc8(); return;
}

void f_d89bc8(void) {
  LOAD_REGS();
L_d89bc8: /* d89bc8: push 0xdbffb8 */
  { uint32_t v = 0xdbffb8u; esp -= 4; W32(esp, v); }
/* d89bcd: push 0xde1888 */
  { uint32_t v = 0xde1888u; esp -= 4; W32(esp, v); }
/* d89bd2: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd89bd8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d89bd8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d89bdb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89bdd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89bdf: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd89be4u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d89be4: guest_badaddr(0xd89be4); return;
}

void f_d89c40(void) {
  LOAD_REGS();
L_d89c40: /* d89c40: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d89c45: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d89c48: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d89c4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89c4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89c4f: push 0x146 */
  { uint32_t v = 0x146u; esp -= 4; W32(esp, v); }
/* d89c54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d89c55: je 0xd89c5e */
  if (zf) goto L_d89c5e;
L_d89c57: /* d89c57: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd89c5du); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d89c5d: ret  */
  esp += 4; SPILL(); return;
L_d89c5e: /* d89c5e: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd89c64u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d89c64: ret  */
  esp += 4; SPILL(); return;
}

void f_d89c80(void) {
  LOAD_REGS();
L_d89c80: /* d89c80: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d89c85: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d89c87: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d89c8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89c8c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d89c8e: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d89c92: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d89c93: push 0x14e */
  { uint32_t v = 0x14eu; esp -= 4; W32(esp, v); }
/* d89c98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89c99: je 0xd89ca4 */
  if (zf) goto L_d89ca4;
L_d89c9b: /* d89c9b: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd89ca1u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d89ca1: ret 4 */
  esp += 8; SPILL(); return;
L_d89ca4: /* d89ca4: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd89caau); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d89caa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d89cc0(void) {
  LOAD_REGS();
L_d89cc0: /* d89cc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d89cc1: mov ebp, esp */
  ebp = esp;
/* d89cc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d89cc5: push 0xdb8da0 */
  { uint32_t v = 0xdb8da0u; esp -= 4; W32(esp, v); }
/* d89cca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d89cd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89cd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d89cd8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d89cdb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d89cdc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d89cdd: mov esi, ecx */
  esi = ecx;
/* d89cdf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d89ce2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d89ce4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d89ce5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d89ce8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d89ce9: mov ecx, esi */
  ecx = esi;
/* d89ceb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d89cf2: call dword ptr [eax + 0x104] */
  { uint32_t t = R32((uint32_t)(eax + 0x104u)); esp -= 4; W32(esp, 0xd89cf8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d89cf8: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* d89cfe: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d89d01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89d03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89d04: push 0x14e */
  { uint32_t v = 0x14eu; esp -= 4; W32(esp, v); }
/* d89d09: je 0xd89d28 */
  if (zf) goto L_d89d28;
L_d89d0b: /* d89d0b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d89d0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89d0f: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd89d15u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d89d15: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d89d18: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d89d1f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d89d20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d89d21: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d89d22: mov esp, ebp */
  esp = ebp;
/* d89d24: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d89d25: ret 4 */
  esp += 8; SPILL(); return;
L_d89d28: /* d89d28: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d89d2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d89d2c: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd89d32u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d89d32: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d89d35: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d89d36: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d89d37: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d89d3e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d89d3f: mov esp, ebp */
  esp = ebp;
/* d89d41: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d89d42: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d89d45(void) {
  LOAD_REGS();
L_d89d45: /* d89d45: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d89d48: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d89d4d: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* d89d50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89d51: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* d89d54: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd89d59u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d89d59(); return;
}

void f_d89d59(void) {
  LOAD_REGS();
L_d89d59: /* d89d59: push 0xdbffec */
  { uint32_t v = 0xdbffecu; esp -= 4; W32(esp, v); }
/* d89d5e: push 0xde18a0 */
  { uint32_t v = 0xde18a0u; esp -= 4; W32(esp, v); }
/* d89d63: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd89d69u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d89d69: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d89d6c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89d6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89d70: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd89d75u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d89d75: guest_badaddr(0xd89d75); return;
}

void f_d89db0(void) {
  LOAD_REGS();
L_d89db0: /* d89db0: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d89db5: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d89db8: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d89dbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89dbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89dbf: push 0x147 */
  { uint32_t v = 0x147u; esp -= 4; W32(esp, v); }
/* d89dc4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d89dc5: je 0xd89dce */
  if (zf) goto L_d89dce;
L_d89dc7: /* d89dc7: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd89dcdu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d89dcd: ret  */
  esp += 4; SPILL(); return;
L_d89dce: /* d89dce: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd89dd4u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d89dd4: ret  */
  esp += 4; SPILL(); return;
}

void f_d89df0(void) {
  LOAD_REGS();
L_d89df0: /* d89df0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d89df1: mov ebp, esp */
  ebp = esp;
/* d89df3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d89df5: push 0xdb8db0 */
  { uint32_t v = 0xdb8db0u; esp -= 4; W32(esp, v); }
/* d89dfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d89e00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89e01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d89e08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d89e0b: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d89e10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d89e11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d89e12: mov ebx, ecx */
  ebx = ecx;
/* d89e14: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d89e17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d89e18: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d89e1b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d89e22: je 0xd89e3b */
  if (zf) goto L_d89e3b;
L_d89e24: /* d89e24: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d89e27: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* d89e2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d89e2b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d89e2d: push 0x14c */
  { uint32_t v = 0x14cu; esp -= 4; W32(esp, v); }
/* d89e32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89e33: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd89e39u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d89e39: jmp 0xd89e97 */
  goto L_d89e97;
L_d89e3b: /* d89e3b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d89e3e: mov edi, dword ptr [0xde88c8] */
  edi = R32((uint32_t)(0xde88c8u));
/* d89e44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d89e45: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd89e47u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d89e47: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d89e4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d89e4c: jne 0xd89e53 */
  if (!zf) goto L_d89e53;
L_d89e4e: /* d89e4e: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* d89e51: jmp 0xd89e70 */
  goto L_d89e70;
L_d89e53: /* d89e53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d89e54: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd89e56u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d89e56: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d89e59: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d89e5c: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d89e5f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d89e62: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d89e65: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd89e6au); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d89e6a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d89e6d: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
L_d89e70: /* d89e70: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* d89e73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d89e74: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd89e76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d89e76: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d89e79: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d89e7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89e7d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d89e7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d89e7f: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xd89e85u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* d89e85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d89e88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89e89: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d89e8b: push 0x14c */
  { uint32_t v = 0x14cu; esp -= 4; W32(esp, v); }
/* d89e90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d89e91: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd89e97u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_d89e97: /* d89e97: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d89e9a: jne 0xd89e9e */
  if (!zf) goto L_d89e9e;
L_d89e9c: /* d89e9c: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_d89e9e: /* d89e9e: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* d89ea1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d89ea4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d89eab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d89eac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d89ead: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d89eae: mov esp, ebp */
  esp = ebp;
/* d89eb0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d89eb1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d89eb4(void) {
  LOAD_REGS();
L_d89eb4: /* d89eb4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d89eb7: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d89ebc: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d89ebf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d89ec0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d89ec3: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd89ec8u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d89ec8(); return;
}

void f_d89ec8(void) {
  LOAD_REGS();
L_d89ec8: /* d89ec8: push 0xdc0020 */
  { uint32_t v = 0xdc0020u; esp -= 4; W32(esp, v); }
/* d89ecd: push 0xde18b0 */
  { uint32_t v = 0xde18b0u; esp -= 4; W32(esp, v); }
/* d89ed2: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd89ed8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d89ed8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d89edb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89edd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d89edf: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd89ee4u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d89ee4: guest_badaddr(0xd89ee4); return;
}

void f_d89f30(void) {
  LOAD_REGS();
L_d89f30: /* d89f30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d89f31: mov ebp, esp */
  ebp = esp;
/* d89f33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d89f35: push 0xdb8dc0 */
  { uint32_t v = 0xdb8dc0u; esp -= 4; W32(esp, v); }
/* d89f3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d89f40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89f41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d89f48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d89f4b: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d89f50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d89f51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d89f52: mov ebx, ecx */
  ebx = ecx;
/* d89f54: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d89f57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d89f58: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d89f5b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d89f62: je 0xd89f7b */
  if (zf) goto L_d89f7b;
L_d89f64: /* d89f64: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d89f67: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* d89f6a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d89f6b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d89f6d: push 0x158 */
  { uint32_t v = 0x158u; esp -= 4; W32(esp, v); }
/* d89f72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89f73: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd89f79u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d89f79: jmp 0xd89fd7 */
  goto L_d89fd7;
L_d89f7b: /* d89f7b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d89f7e: mov edi, dword ptr [0xde88c8] */
  edi = R32((uint32_t)(0xde88c8u));
/* d89f84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d89f85: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd89f87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d89f87: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d89f8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d89f8c: jne 0xd89f93 */
  if (!zf) goto L_d89f93;
L_d89f8e: /* d89f8e: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* d89f91: jmp 0xd89fb0 */
  goto L_d89fb0;
L_d89f93: /* d89f93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d89f94: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd89f96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d89f96: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d89f99: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d89f9c: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d89f9f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d89fa2: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d89fa5: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd89faau); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d89faa: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d89fad: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
L_d89fb0: /* d89fb0: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* d89fb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d89fb4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd89fb6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d89fb6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d89fb9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d89fbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89fbd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d89fbe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d89fbf: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xd89fc5u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* d89fc5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d89fc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d89fc9: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d89fcb: push 0x158 */
  { uint32_t v = 0x158u; esp -= 4; W32(esp, v); }
/* d89fd0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d89fd1: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd89fd7u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_d89fd7: /* d89fd7: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d89fda: jne 0xd89fde */
  if (!zf) goto L_d89fde;
L_d89fdc: /* d89fdc: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_d89fde: /* d89fde: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* d89fe1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d89fe4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d89feb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d89fec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d89fed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d89fee: mov esp, ebp */
  esp = ebp;
/* d89ff0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d89ff1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d89ff4(void) {
  LOAD_REGS();
L_d89ff4: /* d89ff4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d89ff7: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d89ffc: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d89fff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8a000: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8a003: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8a008u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8a008(); return;
}

void f_d8a008(void) {
  LOAD_REGS();
L_d8a008: /* d8a008: push 0xdc0054 */
  { uint32_t v = 0xdc0054u; esp -= 4; W32(esp, v); }
/* d8a00d: push 0xde18b8 */
  { uint32_t v = 0xde18b8u; esp -= 4; W32(esp, v); }
/* d8a012: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8a018u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8a018: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8a01b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a01d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a01f: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8a024u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8a024: guest_badaddr(0xd8a024); return;
}

void f_d8a070(void) {
  LOAD_REGS();
L_d8a070: /* d8a070: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8a071: mov ebp, esp */
  ebp = esp;
/* d8a073: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8a075: push 0xdb8dd0 */
  { uint32_t v = 0xdb8dd0u; esp -= 4; W32(esp, v); }
/* d8a07a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8a080: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a081: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8a088: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8a08b: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8a090: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8a091: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8a092: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8a093: xor ebx, ebx */
  ebx = 0;
/* d8a095: mov edi, ecx */
  edi = ecx;
/* d8a097: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8a099: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8a09c: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* d8a09f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8a0a0: je 0xd8a0c6 */
  if (zf) goto L_d8a0c6;
L_d8a0a2: /* d8a0a2: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* d8a0a5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8a0a6: push 0x14b */
  { uint32_t v = 0x14bu; esp -= 4; W32(esp, v); }
/* d8a0ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8a0ac: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8a0b2u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8a0b2: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* d8a0b5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a0b8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a0bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a0c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a0c1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a0c2: mov esp, ebp */
  esp = ebp;
/* d8a0c4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a0c5: ret  */
  esp += 4; SPILL(); return;
L_d8a0c6: /* d8a0c6: mov esi, dword ptr [0xde88c8] */
  esi = R32((uint32_t)(0xde88c8u));
/* d8a0cc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd8a0ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8a0ce: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8a0d1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8a0d3: je 0xd8a0f1 */
  if (zf) goto L_d8a0f1;
L_d8a0d5: /* d8a0d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8a0d6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd8a0d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8a0d8: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d8a0db: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8a0de: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d8a0e1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8a0e4: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8a0e7: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd8a0ecu); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d8a0ec: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8a0ef: mov ebx, esp */
  ebx = esp;
L_d8a0f1: /* d8a0f1: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* d8a0f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a0f6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd8a0f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8a0f8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8a0fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a0fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a0fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8a0ff: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xd8a105u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* d8a105: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8a108: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a109: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a10b: push 0x14b */
  { uint32_t v = 0x14bu; esp -= 4; W32(esp, v); }
/* d8a110: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8a111: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8a117u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8a117: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* d8a11a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a11d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a124: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a125: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a126: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a127: mov esp, ebp */
  esp = ebp;
/* d8a129: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a12a: ret  */
  esp += 4; SPILL(); return;
}

void f_d8a12b(void) {
  LOAD_REGS();
L_d8a12b: /* d8a12b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8a12e: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8a133: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* d8a136: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a137: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* d8a13a: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8a13fu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8a13f(); return;
}

void f_d8a13f(void) {
  LOAD_REGS();
L_d8a13f: /* d8a13f: push 0xdc0088 */
  { uint32_t v = 0xdc0088u; esp -= 4; W32(esp, v); }
/* d8a144: push 0xde18c0 */
  { uint32_t v = 0xde18c0u; esp -= 4; W32(esp, v); }
/* d8a149: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8a14fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8a14f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8a152: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a154: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a156: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8a15bu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8a15b: guest_badaddr(0xd8a15b); return;
}

void f_d8a1a0(void) {
  LOAD_REGS();
L_d8a1a0: /* d8a1a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8a1a1: mov ebp, esp */
  ebp = esp;
/* d8a1a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8a1a5: push 0xdb8de0 */
  { uint32_t v = 0xdb8de0u; esp -= 4; W32(esp, v); }
/* d8a1aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8a1b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a1b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8a1b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8a1bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8a1bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8a1bd: mov esi, ecx */
  esi = ecx;
/* d8a1bf: mov ecx, dword ptr [0xde5034] */
  ecx = R32((uint32_t)(0xde5034u));
/* d8a1c5: movzx edx, word ptr [esi + 0xc] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0xcu)));
/* d8a1c9: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* d8a1cc: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d8a1cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8a1d0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8a1d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8a1d4: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* d8a1d7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8a1d8: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* d8a1db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a1dc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d8a1df: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d8a1e1: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d8a1e3: and eax, 0x10000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8a1e8: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* d8a1ea: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* d8a1ec: and ecx, 0x800 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* d8a1f2: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d8a1f4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d8a1f7: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* d8a1f9: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* d8a1fb: and edx, 0x100 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* d8a201: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d8a203: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* d8a206: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* d8a208: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* d8a20a: and ecx, 0x200004 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200004u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* d8a210: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d8a212: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a214: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* d8a216: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a218: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* d8a21a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a21c: and edx, 0x100000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* d8a222: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a224: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d8a226: or eax, 0x400000c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400000c0u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d8a22b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a22c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a22e: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* d8a233: mov ecx, esi */
  ecx = esi;
/* d8a235: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8a23c: call 0xd81852 */
  esp -= 4; W32(esp, 0xd8a241u); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* d8a241: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8a246: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8a249: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* d8a24c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a24e: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* d8a250: je 0xd8a275 */
  if (zf) goto L_d8a275;
L_d8a252: /* d8a252: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xd8a258u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* d8a258: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a259: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* d8a25b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8a25c: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8a262u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8a262: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a265: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a26c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a26d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a26e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a26f: mov esp, ebp */
  esp = ebp;
/* d8a271: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a272: ret 0x14 */
  esp += 24; SPILL(); return;
L_d8a275: /* d8a275: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xd8a27bu); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* d8a27b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a27c: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* d8a27e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8a27f: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8a285u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8a285: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a288: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a289: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a28a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a291: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a292: mov esp, ebp */
  esp = ebp;
/* d8a294: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a295: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_d8a298(void) {
  LOAD_REGS();
L_d8a298: /* d8a298: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8a29b: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8a2a0: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d8a2a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8a2a4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d8a2a7: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8a2acu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8a2ac(); return;
}

void f_d8a2ac(void) {
  LOAD_REGS();
L_d8a2ac: /* d8a2ac: push 0xdc00b0 */
  { uint32_t v = 0xdc00b0u; esp -= 4; W32(esp, v); }
/* d8a2b1: push 0xde18c8 */
  { uint32_t v = 0xde18c8u; esp -= 4; W32(esp, v); }
/* d8a2b6: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8a2bcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8a2bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8a2bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a2c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a2c3: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8a2c8u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8a2c8: guest_badaddr(0xd8a2c8); return;
}

void f_d8a320(void) {
  LOAD_REGS();
L_d8a320: /* d8a320: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8a321: mov ebp, esp */
  ebp = esp;
/* d8a323: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8a325: push 0xdb8df0 */
  { uint32_t v = 0xdb8df0u; esp -= 4; W32(esp, v); }
/* d8a32a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8a330: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a331: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8a338: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8a33b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8a33c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8a33d: mov esi, ecx */
  esi = ecx;
/* d8a33f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8a342: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8a344: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8a345: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8a348: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8a34f: jne 0xd8a369 */
  if (!zf) goto L_d8a369;
L_d8a351: /* d8a351: push 0x5e4 */
  { uint32_t v = 0x5e4u; esp -= 4; W32(esp, v); }
/* d8a356: push 0xde18d8 */
  { uint32_t v = 0xde18d8u; esp -= 4; W32(esp, v); }
/* d8a35b: push 0xde18e8 */
  { uint32_t v = 0xde18e8u; esp -= 4; W32(esp, v); }
/* d8a360: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8a366u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8a366: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8a369: /* d8a369: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* d8a36f: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8a372: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* d8a375: push -0x10 */
  { uint32_t v = 0xfffffff0u; esp -= 4; W32(esp, v); }
/* d8a377: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8a378: je 0xd8a3b2 */
  if (zf) goto L_d8a3b2;
L_d8a37a: /* d8a37a: call dword ptr [0xde8f28] */
  esp -= 4; W32(esp, 0xd8a380u); SPILL(); call_ind(R32(0xde8f28u)); if (g_unwind) return; /* USER32!GetWindowLongW */ RELOAD();
/* d8a380: jmp 0xd8a3b8 */
  goto L_d8a3b8;
L_d8a3b2: /* d8a3b2: call dword ptr [0xde8f44] */
  esp -= 4; W32(esp, 0xd8a3b8u); SPILL(); call_ind(R32(0xde8f44u)); if (g_unwind) return; /* USER32!GetWindowLongA */ RELOAD();
L_d8a3b8: /* d8a3b8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a3bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a3bc: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d8a3bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a3c0: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8a3c3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a3ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a3cb: mov esp, ebp */
  esp = ebp;
/* d8a3cd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a3ce: ret  */
  esp += 4; SPILL(); return;
}

void f_d8a382(void) {
  LOAD_REGS();
L_d8a382: /* d8a382: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8a385: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8a38a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8a38d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8a38e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8a391: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8a396u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8a396(); return;
}

void f_d8a396(void) {
  LOAD_REGS();
L_d8a396: /* d8a396: push 0xdc00dc */
  { uint32_t v = 0xdc00dcu; esp -= 4; W32(esp, v); }
/* d8a39b: push 0xde18f0 */
  { uint32_t v = 0xde18f0u; esp -= 4; W32(esp, v); }
/* d8a3a0: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8a3a6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8a3a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8a3a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a3ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a3ad: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8a3b2u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
/* d8a3b2: call dword ptr [0xde8f44] */
  esp -= 4; W32(esp, 0xd8a3b8u); SPILL(); call_ind(R32(0xde8f44u)); if (g_unwind) return; /* USER32!GetWindowLongA */ RELOAD();
/* d8a3b8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a3bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a3bc: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d8a3bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a3c0: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8a3c3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a3ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a3cb: mov esp, ebp */
  esp = ebp;
/* d8a3cd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a3ce: ret  */
  esp += 4; SPILL(); return;
}

void f_d8a400(void) {
  LOAD_REGS();
L_d8a400: /* d8a400: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8a401: mov ebp, esp */
  ebp = esp;
/* d8a403: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8a405: push 0xdb8e00 */
  { uint32_t v = 0xdb8e00u; esp -= 4; W32(esp, v); }
/* d8a40a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8a410: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a411: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8a418: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8a41b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8a41c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8a41d: mov esi, ecx */
  esi = ecx;
/* d8a41f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8a422: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8a424: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8a425: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8a428: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8a42f: jne 0xd8a449 */
  if (!zf) goto L_d8a449;
L_d8a431: /* d8a431: push 0x5ec */
  { uint32_t v = 0x5ecu; esp -= 4; W32(esp, v); }
/* d8a436: push 0xde18f8 */
  { uint32_t v = 0xde18f8u; esp -= 4; W32(esp, v); }
/* d8a43b: push 0xde1908 */
  { uint32_t v = 0xde1908u; esp -= 4; W32(esp, v); }
/* d8a440: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8a446u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8a446: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8a449: /* d8a449: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* d8a44f: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8a452: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a454: je 0xd8a4ac */
  if (zf) goto L_d8a4ac;
L_d8a456: /* d8a456: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d8a459: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d8a45c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a45d: push 0xcf */
  { uint32_t v = 0xcfu; esp -= 4; W32(esp, v); }
/* d8a462: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8a463: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8a469u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8a469: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a46c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a473: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a474: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a475: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a476: mov esp, ebp */
  esp = ebp;
/* d8a478: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a479: ret 4 */
  esp += 8; SPILL(); return;
L_d8a4ac: /* d8a4ac: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d8a4af: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8a4b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8a4b3: push 0xcf */
  { uint32_t v = 0xcfu; esp -= 4; W32(esp, v); }
/* d8a4b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a4b9: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8a4bfu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8a4bf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a4c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a4c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a4c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a4cb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a4cc: mov esp, ebp */
  esp = ebp;
/* d8a4ce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a4cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8a47c(void) {
  LOAD_REGS();
L_d8a47c: /* d8a47c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8a47f: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8a484: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8a487: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8a488: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8a48b: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8a490u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8a490(); return;
}

void f_d8a490(void) {
  LOAD_REGS();
L_d8a490: /* d8a490: push 0xdc010c */
  { uint32_t v = 0xdc010cu; esp -= 4; W32(esp, v); }
/* d8a495: push 0xde1910 */
  { uint32_t v = 0xde1910u; esp -= 4; W32(esp, v); }
/* d8a49a: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8a4a0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8a4a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8a4a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a4a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a4a7: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8a4acu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
/* d8a4ac: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d8a4af: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8a4b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8a4b3: push 0xcf */
  { uint32_t v = 0xcfu; esp -= 4; W32(esp, v); }
/* d8a4b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a4b9: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8a4bfu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8a4bf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a4c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a4c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a4c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a4cb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a4cc: mov esp, ebp */
  esp = ebp;
/* d8a4ce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a4cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8a520(void) {
  LOAD_REGS();
L_d8a520: /* d8a520: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8a521: mov ebp, esp */
  ebp = esp;
/* d8a523: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8a525: push 0xdb8e10 */
  { uint32_t v = 0xdb8e10u; esp -= 4; W32(esp, v); }
/* d8a52a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8a530: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a531: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8a538: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8a53b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8a53c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8a53d: mov esi, ecx */
  esi = ecx;
/* d8a53f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8a542: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8a544: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8a545: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8a548: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8a54f: jne 0xd8a569 */
  if (!zf) goto L_d8a569;
L_d8a551: /* d8a551: push 0x5f4 */
  { uint32_t v = 0x5f4u; esp -= 4; W32(esp, v); }
/* d8a556: push 0xde1918 */
  { uint32_t v = 0xde1918u; esp -= 4; W32(esp, v); }
/* d8a55b: push 0xde1928 */
  { uint32_t v = 0xde1928u; esp -= 4; W32(esp, v); }
/* d8a560: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8a566u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8a566: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8a569: /* d8a569: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* d8a56f: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8a572: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* d8a575: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a577: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a579: push 0xba */
  { uint32_t v = 0xbau; esp -= 4; W32(esp, v); }
/* d8a57e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8a57f: je 0xd8a5c8 */
  if (zf) goto L_d8a5c8;
L_d8a581: /* d8a581: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8a587u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8a587: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a58a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a591: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a592: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a593: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a594: mov esp, ebp */
  esp = ebp;
/* d8a596: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a597: ret  */
  esp += 4; SPILL(); return;
L_d8a5c8: /* d8a5c8: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8a5ceu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8a5ce: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a5d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a5d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a5d3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a5da: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a5db: mov esp, ebp */
  esp = ebp;
/* d8a5dd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a5de: ret  */
  esp += 4; SPILL(); return;
}

void f_d8a598(void) {
  LOAD_REGS();
L_d8a598: /* d8a598: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8a59b: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8a5a0: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8a5a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8a5a4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8a5a7: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8a5acu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8a5ac(); return;
}

void f_d8a5ac(void) {
  LOAD_REGS();
L_d8a5ac: /* d8a5ac: push 0xdc013c */
  { uint32_t v = 0xdc013cu; esp -= 4; W32(esp, v); }
/* d8a5b1: push 0xde1930 */
  { uint32_t v = 0xde1930u; esp -= 4; W32(esp, v); }
/* d8a5b6: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8a5bcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8a5bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8a5bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a5c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a5c3: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8a5c8u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
/* d8a5c8: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8a5ceu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8a5ce: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a5d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a5d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a5d3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a5da: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a5db: mov esp, ebp */
  esp = ebp;
/* d8a5dd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a5de: ret  */
  esp += 4; SPILL(); return;
}

void f_d8a610(void) {
  LOAD_REGS();
L_d8a610: /* d8a610: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8a611: mov ebp, esp */
  ebp = esp;
/* d8a613: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8a615: push 0xdb8e20 */
  { uint32_t v = 0xdb8e20u; esp -= 4; W32(esp, v); }
/* d8a61a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8a620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a621: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8a628: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8a62b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8a62c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8a62d: mov esi, ecx */
  esi = ecx;
/* d8a62f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8a632: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8a634: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8a635: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8a638: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8a63f: jne 0xd8a659 */
  if (!zf) goto L_d8a659;
L_d8a641: /* d8a641: push 0x5fc */
  { uint32_t v = 0x5fcu; esp -= 4; W32(esp, v); }
/* d8a646: push 0xde1938 */
  { uint32_t v = 0xde1938u; esp -= 4; W32(esp, v); }
/* d8a64b: push 0xde1948 */
  { uint32_t v = 0xde1948u; esp -= 4; W32(esp, v); }
/* d8a650: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8a656u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8a656: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8a659: /* d8a659: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* d8a65f: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8a662: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* d8a665: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a667: je 0xd8a6bc */
  if (zf) goto L_d8a6bc;
L_d8a669: /* d8a669: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d8a66c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a66d: push 0xbb */
  { uint32_t v = 0xbbu; esp -= 4; W32(esp, v); }
/* d8a672: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8a673: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8a679u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8a679: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a67c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a683: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a684: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a685: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a686: mov esp, ebp */
  esp = ebp;
/* d8a688: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a689: ret 4 */
  esp += 8; SPILL(); return;
L_d8a6bc: /* d8a6bc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d8a6bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8a6c0: push 0xbb */
  { uint32_t v = 0xbbu; esp -= 4; W32(esp, v); }
/* d8a6c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8a6c6: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8a6ccu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8a6cc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a6cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a6d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a6d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a6d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a6d9: mov esp, ebp */
  esp = ebp;
/* d8a6db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a6dc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8a68c(void) {
  LOAD_REGS();
L_d8a68c: /* d8a68c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8a68f: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8a694: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8a697: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8a698: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8a69b: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8a6a0u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8a6a0(); return;
}

void f_d8a6a0(void) {
  LOAD_REGS();
L_d8a6a0: /* d8a6a0: push 0xdc016c */
  { uint32_t v = 0xdc016cu; esp -= 4; W32(esp, v); }
/* d8a6a5: push 0xde1950 */
  { uint32_t v = 0xde1950u; esp -= 4; W32(esp, v); }
/* d8a6aa: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8a6b0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8a6b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8a6b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a6b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a6b7: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8a6bcu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
/* d8a6bc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d8a6bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8a6c0: push 0xbb */
  { uint32_t v = 0xbbu; esp -= 4; W32(esp, v); }
/* d8a6c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8a6c6: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8a6ccu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8a6cc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a6cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a6d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a6d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a6d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a6d9: mov esp, ebp */
  esp = ebp;
/* d8a6db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a6dc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8a720(void) {
  LOAD_REGS();
L_d8a720: /* d8a720: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8a721: mov ebp, esp */
  ebp = esp;
/* d8a723: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8a725: push 0xdb8e30 */
  { uint32_t v = 0xdb8e30u; esp -= 4; W32(esp, v); }
/* d8a72a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8a730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a731: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8a738: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8a73b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8a73c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8a73d: mov esi, ecx */
  esi = ecx;
/* d8a73f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8a742: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8a744: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8a745: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8a748: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8a74f: jne 0xd8a769 */
  if (!zf) goto L_d8a769;
L_d8a751: /* d8a751: push 0x604 */
  { uint32_t v = 0x604u; esp -= 4; W32(esp, v); }
/* d8a756: push 0xde1958 */
  { uint32_t v = 0xde1958u; esp -= 4; W32(esp, v); }
/* d8a75b: push 0xde1968 */
  { uint32_t v = 0xde1968u; esp -= 4; W32(esp, v); }
/* d8a760: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8a766u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8a766: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8a769: /* d8a769: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* d8a76f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* d8a771: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d8a774: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* d8a777: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8a779: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d8a77c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a77d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8a77e: push 0xb0 */
  { uint32_t v = 0xb0u; esp -= 4; W32(esp, v); }
/* d8a783: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8a784: je 0xd8a7cf */
  if (zf) goto L_d8a7cf;
L_d8a786: /* d8a786: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8a78cu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8a78c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a78f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a796: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a797: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a798: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a799: mov esp, ebp */
  esp = ebp;
/* d8a79b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a79c: ret 8 */
  esp += 12; SPILL(); return;
L_d8a7cf: /* d8a7cf: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8a7d5u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8a7d5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a7d8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a7d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a7da: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a7e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a7e2: mov esp, ebp */
  esp = ebp;
/* d8a7e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a7e5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8a79f(void) {
  LOAD_REGS();
L_d8a79f: /* d8a79f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8a7a2: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8a7a7: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8a7aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8a7ab: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8a7ae: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8a7b3u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8a7b3(); return;
}

void f_d8a7b3(void) {
  LOAD_REGS();
L_d8a7b3: /* d8a7b3: push 0xdc019c */
  { uint32_t v = 0xdc019cu; esp -= 4; W32(esp, v); }
/* d8a7b8: push 0xde1970 */
  { uint32_t v = 0xde1970u; esp -= 4; W32(esp, v); }
/* d8a7bd: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8a7c3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8a7c3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8a7c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a7c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a7ca: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8a7cfu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
/* d8a7cf: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8a7d5u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8a7d5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a7d8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a7d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a7da: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a7e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a7e2: mov esp, ebp */
  esp = ebp;
/* d8a7e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a7e5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8a830(void) {
  LOAD_REGS();
L_d8a830: /* d8a830: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8a831: mov ebp, esp */
  ebp = esp;
/* d8a833: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8a835: push 0xdb8e40 */
  { uint32_t v = 0xdb8e40u; esp -= 4; W32(esp, v); }
/* d8a83a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8a840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a841: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8a848: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8a84b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8a84c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8a84d: mov esi, ecx */
  esi = ecx;
/* d8a84f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8a852: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8a854: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8a855: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8a858: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8a85f: jne 0xd8a879 */
  if (!zf) goto L_d8a879;
L_d8a861: /* d8a861: push 0x60c */
  { uint32_t v = 0x60cu; esp -= 4; W32(esp, v); }
/* d8a866: push 0xde1978 */
  { uint32_t v = 0xde1978u; esp -= 4; W32(esp, v); }
/* d8a86b: push 0xde1988 */
  { uint32_t v = 0xde1988u; esp -= 4; W32(esp, v); }
/* d8a870: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8a876u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8a876: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8a879: /* d8a879: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* d8a87f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* d8a881: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d8a884: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* d8a887: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8a889: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d8a88c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a88d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8a88e: push 0xb1 */
  { uint32_t v = 0xb1u; esp -= 4; W32(esp, v); }
/* d8a893: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8a894: je 0xd8a8df */
  if (zf) goto L_d8a8df;
L_d8a896: /* d8a896: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8a89cu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8a89c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a89f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a8a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a8a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a8a8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a8a9: mov esp, ebp */
  esp = ebp;
/* d8a8ab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a8ac: ret 8 */
  esp += 12; SPILL(); return;
L_d8a8df: /* d8a8df: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8a8e5u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8a8e5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a8e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a8e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a8ea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a8f1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a8f2: mov esp, ebp */
  esp = ebp;
/* d8a8f4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a8f5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8a8af(void) {
  LOAD_REGS();
L_d8a8af: /* d8a8af: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8a8b2: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8a8b7: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8a8ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8a8bb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8a8be: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8a8c3u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8a8c3(); return;
}

void f_d8a8c3(void) {
  LOAD_REGS();
L_d8a8c3: /* d8a8c3: push 0xdc01cc */
  { uint32_t v = 0xdc01ccu; esp -= 4; W32(esp, v); }
/* d8a8c8: push 0xde1990 */
  { uint32_t v = 0xde1990u; esp -= 4; W32(esp, v); }
/* d8a8cd: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8a8d3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8a8d3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8a8d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a8d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8a8da: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8a8dfu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
/* d8a8df: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8a8e5u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8a8e5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a8e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a8e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a8ea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a8f1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a8f2: mov esp, ebp */
  esp = ebp;
/* d8a8f4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a8f5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8a940(void) {
  LOAD_REGS();
L_d8a940: /* d8a940: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8a941: mov ebp, esp */
  ebp = esp;
/* d8a943: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8a945: push 0xdb8e50 */
  { uint32_t v = 0xdb8e50u; esp -= 4; W32(esp, v); }
/* d8a94a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8a950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8a951: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8a958: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8a95b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8a95c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8a95d: mov esi, ecx */
  esi = ecx;
/* d8a95f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8a962: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8a964: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8a965: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8a968: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* d8a96b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8a972: jne 0xd8a98c */
  if (!zf) goto L_d8a98c;
L_d8a974: /* d8a974: push 0x614 */
  { uint32_t v = 0x614u; esp -= 4; W32(esp, v); }
/* d8a979: push 0xde1998 */
  { uint32_t v = 0xde1998u; esp -= 4; W32(esp, v); }
/* d8a97e: push 0xde19a8 */
  { uint32_t v = 0xde19a8u; esp -= 4; W32(esp, v); }
/* d8a983: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8a989u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8a989: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8a98c: /* d8a98c: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8a991: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8a994: je 0xd8a9c1 */
  if (zf) goto L_d8a9c1;
L_d8a996: /* d8a996: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d8a999: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* d8a99c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8a99d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8a99f: push 0xc2 */
  { uint32_t v = 0xc2u; esp -= 4; W32(esp, v); }
/* d8a9a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8a9a5: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8a9abu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
L_d8a9ab: /* d8a9ab: lea esp, [ebp - 0x28] */
  esp = (uint32_t)(ebp + 0xffffffd8u);
/* d8a9ae: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8a9b1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8a9b8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8a9b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8a9ba: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8a9bb: mov esp, ebp */
  esp = ebp;
/* d8a9bd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8a9be: ret 4 */
  esp += 8; SPILL(); return;
L_d8a9c1: /* d8a9c1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d8a9c4: mov edi, dword ptr [0xde88c8] */
  edi = R32((uint32_t)(0xde88c8u));
/* d8a9ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8a9cb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd8a9cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8a9cd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8a9d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8a9d2: jne 0xd8a9d8 */
  if (!zf) goto L_d8a9d8;
L_d8a9d4: /* d8a9d4: xor ebx, ebx */
  ebx = 0;
/* d8a9d6: jmp 0xd8a9f4 */
  goto L_d8a9f4;
L_d8a9d8: /* d8a9d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8a9d9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd8a9dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8a9db: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d8a9de: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8a9e1: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d8a9e4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8a9e7: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8a9ea: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd8a9efu); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d8a9ef: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8a9f2: mov ebx, esp */
  ebx = esp;
L_d8a9f4: /* d8a9f4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d8a9f7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* d8a9fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8a9fb: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* d8a9fe: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd8aa00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8aa00: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8aa03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8aa04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8aa05: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8aa06: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xd8aa0cu); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* d8aa0c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d8aa0f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8aa12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8aa13: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8aa15: push 0xc2 */
  { uint32_t v = 0xc2u; esp -= 4; W32(esp, v); }
/* d8aa1a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8aa1b: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8aa21u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8aa21: jmp 0xd8a9ab */
  goto L_d8a9ab;
}

void f_d8aa23(void) {
  LOAD_REGS();
L_d8aa23: /* d8aa23: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d8aa26: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8aa2b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d8aa2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8aa2f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d8aa32: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8aa37u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8aa37(); return;
}

void f_d8aa37(void) {
  LOAD_REGS();
L_d8aa37: /* d8aa37: push 0xdc01fc */
  { uint32_t v = 0xdc01fcu; esp -= 4; W32(esp, v); }
/* d8aa3c: push 0xde19b0 */
  { uint32_t v = 0xde19b0u; esp -= 4; W32(esp, v); }
/* d8aa41: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8aa47u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8aa47: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8aa4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8aa4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8aa4e: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8aa53u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8aa53: guest_badaddr(0xd8aa53); return;
}

void f_d8aab0(void) {
  LOAD_REGS();
L_d8aab0: /* d8aab0: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8aab5: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8aab8: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8aabb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8aabd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8aabf: push 0xb8 */
  { uint32_t v = 0xb8u; esp -= 4; W32(esp, v); }
/* d8aac4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8aac5: je 0xd8aad7 */
  if (zf) goto L_d8aad7;
L_d8aac7: /* d8aac7: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8aacdu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8aacd: xor ecx, ecx */
  ecx = 0;
/* d8aacf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8aad1: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d8aad4: mov eax, ecx */
  eax = ecx;
/* d8aad6: ret  */
  esp += 4; SPILL(); return;
L_d8aad7: /* d8aad7: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8aaddu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8aadd: xor ecx, ecx */
  ecx = 0;
/* d8aadf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8aae1: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d8aae4: mov eax, ecx */
  eax = ecx;
/* d8aae6: ret  */
  esp += 4; SPILL(); return;
}

void f_d8ab00(void) {
  LOAD_REGS();
L_d8ab00: /* d8ab00: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8ab05: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d8ab07: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d8ab0a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ab0c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8ab0e: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d8ab12: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8ab13: push 0xb9 */
  { uint32_t v = 0xb9u; esp -= 4; W32(esp, v); }
/* d8ab18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ab19: je 0xd8ab24 */
  if (zf) goto L_d8ab24;
L_d8ab1b: /* d8ab1b: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8ab21u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8ab21: ret 4 */
  esp += 8; SPILL(); return;
L_d8ab24: /* d8ab24: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8ab2au); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8ab2a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8ab40(void) {
  LOAD_REGS();
L_d8ab40: /* d8ab40: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8ab45: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8ab48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ab4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ab4c: push 0xb7 */
  { uint32_t v = 0xb7u; esp -= 4; W32(esp, v); }
/* d8ab51: je 0xd8ab5e */
  if (zf) goto L_d8ab5e;
L_d8ab53: /* d8ab53: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8ab56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8ab57: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8ab5du); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8ab5d: ret  */
  esp += 4; SPILL(); return;
L_d8ab5e: /* d8ab5e: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* d8ab61: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8ab62: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8ab68u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8ab68: ret  */
  esp += 4; SPILL(); return;
}

void f_d8ab80(void) {
  LOAD_REGS();
L_d8ab80: /* d8ab80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8ab81: mov ebp, esp */
  ebp = esp;
/* d8ab83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8ab85: push 0xdb8e60 */
  { uint32_t v = 0xdb8e60u; esp -= 4; W32(esp, v); }
/* d8ab8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8ab90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ab91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8ab98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8ab9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8ab9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8ab9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8ab9e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8aba1: mov esi, ecx */
  esi = ecx;
/* d8aba3: mov ecx, dword ptr [0xde5034] */
  ecx = R32((uint32_t)(0xde5034u));
/* d8aba9: movzx edx, word ptr [esi + 0xc] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0xcu)));
/* d8abad: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* d8abb0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d8abb3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8abb4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8abb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8abb6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d8abb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8abbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8abbd: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d8abbf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8abc1: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d8abc3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8abc5: and eax, 0x10000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8abca: or eax, 0x4030c104 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4030c104u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d8abcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8abd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8abd2: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* d8abd7: mov ecx, esi */
  ecx = esi;
/* d8abd9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8abe0: call 0xd81852 */
  esp -= 4; W32(esp, 0xd8abe5u); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* d8abe5: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* d8abeb: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8abee: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* d8abf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8abf3: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* d8abf5: je 0xd8ac1a */
  if (zf) goto L_d8ac1a;
L_d8abf7: /* d8abf7: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xd8abfdu); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* d8abfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8abfe: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* d8ac00: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8ac01: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8ac07u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8ac07: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8ac0a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8ac11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8ac12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8ac13: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8ac14: mov esp, ebp */
  esp = ebp;
/* d8ac16: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8ac17: ret 8 */
  esp += 12; SPILL(); return;
L_d8ac1a: /* d8ac1a: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xd8ac20u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* d8ac20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ac21: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* d8ac23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8ac24: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8ac2au); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8ac2a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8ac2d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8ac2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8ac2f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8ac36: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8ac37: mov esp, ebp */
  esp = ebp;
/* d8ac39: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8ac3a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8ac3d(void) {
  LOAD_REGS();
L_d8ac3d: /* d8ac3d: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8ac40: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8ac45: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* d8ac48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ac49: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* d8ac4c: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8ac51u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8ac51(); return;
}

void f_d8ac51(void) {
  LOAD_REGS();
L_d8ac51: /* d8ac51: push 0xdc0234 */
  { uint32_t v = 0xdc0234u; esp -= 4; W32(esp, v); }
/* d8ac56: push 0xde1a20 */
  { uint32_t v = 0xde1a20u; esp -= 4; W32(esp, v); }
/* d8ac5b: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8ac61u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8ac61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8ac64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ac66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ac68: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8ac6du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8ac6d: guest_badaddr(0xd8ac6d); return;
}

void f_d8acb0(void) {
  LOAD_REGS();
L_d8acb0: /* d8acb0: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8acb5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d8acb7: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d8acba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8acbc: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8acbe: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d8acc2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8acc3: push 0x435 */
  { uint32_t v = 0x435u; esp -= 4; W32(esp, v); }
/* d8acc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8acc9: je 0xd8acd4 */
  if (zf) goto L_d8acd4;
L_d8accb: /* d8accb: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8acd1u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8acd1: ret 4 */
  esp += 8; SPILL(); return;
L_d8acd4: /* d8acd4: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8acdau); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8acda: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8acf0(void) {
  LOAD_REGS();
L_d8acf0: /* d8acf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8acf1: mov ebp, esp */
  ebp = esp;
/* d8acf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8acf5: push 0xdb8e70 */
  { uint32_t v = 0xdb8e70u; esp -= 4; W32(esp, v); }
/* d8acfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8ad00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ad01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8ad08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8ad0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8ad0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8ad0d: mov esi, ecx */
  esi = ecx;
/* d8ad0f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8ad12: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8ad14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8ad15: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8ad18: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8ad1f: jne 0xd8ad39 */
  if (!zf) goto L_d8ad39;
L_d8ad21: /* d8ad21: push 0x6a1 */
  { uint32_t v = 0x6a1u; esp -= 4; W32(esp, v); }
/* d8ad26: push 0xde1a38 */
  { uint32_t v = 0xde1a38u; esp -= 4; W32(esp, v); }
/* d8ad2b: push 0xde1a48 */
  { uint32_t v = 0xde1a48u; esp -= 4; W32(esp, v); }
/* d8ad30: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8ad36u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8ad36: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8ad39: /* d8ad39: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* d8ad3f: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8ad42: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ad44: je 0xd8ad9c */
  if (zf) goto L_d8ad9c;
L_d8ad46: /* d8ad46: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d8ad49: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d8ad4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ad4d: push 0xcf */
  { uint32_t v = 0xcfu; esp -= 4; W32(esp, v); }
/* d8ad52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8ad53: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8ad59u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8ad59: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8ad5c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8ad63: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8ad64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8ad65: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8ad66: mov esp, ebp */
  esp = ebp;
/* d8ad68: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8ad69: ret 4 */
  esp += 8; SPILL(); return;
L_d8ad9c: /* d8ad9c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d8ad9f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8ada2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8ada3: push 0xcf */
  { uint32_t v = 0xcfu; esp -= 4; W32(esp, v); }
/* d8ada8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ada9: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8adafu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8adaf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8adb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8adb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8adb4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8adbb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8adbc: mov esp, ebp */
  esp = ebp;
/* d8adbe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8adbf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8ad6c(void) {
  LOAD_REGS();
L_d8ad6c: /* d8ad6c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8ad6f: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8ad74: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8ad77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8ad78: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8ad7b: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8ad80u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8ad80(); return;
}

void f_d8ad80(void) {
  LOAD_REGS();
L_d8ad80: /* d8ad80: push 0xdc0268 */
  { uint32_t v = 0xdc0268u; esp -= 4; W32(esp, v); }
/* d8ad85: push 0xde1a50 */
  { uint32_t v = 0xde1a50u; esp -= 4; W32(esp, v); }
/* d8ad8a: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8ad90u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8ad90: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8ad93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ad95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ad97: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8ad9cu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
/* d8ad9c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d8ad9f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8ada2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8ada3: push 0xcf */
  { uint32_t v = 0xcfu; esp -= 4; W32(esp, v); }
/* d8ada8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ada9: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8adafu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8adaf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8adb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8adb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8adb4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8adbb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8adbc: mov esp, ebp */
  esp = ebp;
/* d8adbe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8adbf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8ae10(void) {
  LOAD_REGS();
L_d8ae10: /* d8ae10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8ae11: mov ebp, esp */
  ebp = esp;
/* d8ae13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8ae15: push 0xdb8e80 */
  { uint32_t v = 0xdb8e80u; esp -= 4; W32(esp, v); }
/* d8ae1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8ae20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ae21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8ae28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8ae2b: mov edx, dword ptr [0xde5034] */
  edx = R32((uint32_t)(0xde5034u));
/* d8ae31: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* d8ae34: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d8ae37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8ae38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8ae39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8ae3a: mov edi, dword ptr [ecx + 0x40] */
  edi = R32((uint32_t)(ecx + 0x40u));
/* d8ae3d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8ae40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8ae41: movzx edx, word ptr [ecx + 0xc] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0xcu)));
/* d8ae45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8ae46: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d8ae49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ae4a: xor eax, eax */
  eax = 0;
/* d8ae4c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8ae4e: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* d8ae51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ae53: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* d8ae55: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* d8ae57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ae59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ae5b: and edx, 0x10000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* d8ae61: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d8ae63: or eax, 0x40000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d8ae68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ae6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ae6b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d8ae6e: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d8ae70: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d8ae72: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ae74: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8ae79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ae7a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8ae81: call 0xd81852 */
  esp -= 4; W32(esp, 0xd8ae86u); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* d8ae86: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8ae89: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8ae8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8ae8b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8ae92: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8ae93: mov esp, ebp */
  esp = ebp;
/* d8ae95: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8ae96: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8ae99(void) {
  LOAD_REGS();
L_d8ae99: /* d8ae99: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8ae9c: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8aea1: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d8aea4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8aea5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d8aea8: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8aeadu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8aead(); return;
}

void f_d8aead(void) {
  LOAD_REGS();
L_d8aead: /* d8aead: push 0xdc02a0 */
  { uint32_t v = 0xdc02a0u; esp -= 4; W32(esp, v); }
/* d8aeb2: push 0xde1a58 */
  { uint32_t v = 0xde1a58u; esp -= 4; W32(esp, v); }
/* d8aeb7: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8aebdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8aebd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8aec0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8aec2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8aec4: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8aec9u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8aec9: guest_badaddr(0xd8aec9); return;
}

void f_d8af00(void) {
  LOAD_REGS();
L_d8af00: /* d8af00: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8af05: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d8af07: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d8af0a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8af0c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8af0e: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d8af12: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8af13: push 0x414 */
  { uint32_t v = 0x414u; esp -= 4; W32(esp, v); }
/* d8af18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8af19: je 0xd8af24 */
  if (zf) goto L_d8af24;
L_d8af1b: /* d8af1b: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8af21u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8af21: ret 4 */
  esp += 8; SPILL(); return;
L_d8af24: /* d8af24: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8af2au); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8af2a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8af40(void) {
  LOAD_REGS();
L_d8af40: /* d8af40: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8af45: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8af46: mov ebp, dword ptr [0xde8f30] */
  ebp = R32((uint32_t)(0xde8f30u));
/* d8af4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8af4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8af4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8af50: mov edi, ecx */
  edi = ecx;
/* d8af52: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8af55: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8af57: push 0x409 */
  { uint32_t v = 0x409u; esp -= 4; W32(esp, v); }
/* d8af5c: je 0xd8af6a */
  if (zf) goto L_d8af6a;
L_d8af5e: /* d8af5e: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* d8af61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8af62: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8af68u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8af68: jmp 0xd8af70 */
  goto L_d8af70;
L_d8af6a: /* d8af6a: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* d8af6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8af6e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd8af70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d8af70: /* d8af70: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* d8af74: xor esi, esi */
  esi = 0;
/* d8af76: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d8af78: jle 0xd8afbc */
  if ((zf || sf != of)) goto L_d8afbc;
L_d8af7a: /* d8af7a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8af7b: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* d8af7f: nop  */
L_d8af80: /* d8af80: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8af85: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8af88: je 0xd8afa1 */
  if (zf) goto L_d8afa1;
L_d8af8a: /* d8af8a: mov ecx, dword ptr [ebx + esi*4] */
  ecx = R32((uint32_t)(ebx + esi*4));
/* d8af8d: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* d8af90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8af91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8af93: push 0x404 */
  { uint32_t v = 0x404u; esp -= 4; W32(esp, v); }
/* d8af98: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8af99: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8af9fu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8af9f: jmp 0xd8afb2 */
  goto L_d8afb2;
L_d8afa1: /* d8afa1: mov eax, dword ptr [ebx + esi*4] */
  eax = R32((uint32_t)(ebx + esi*4));
/* d8afa4: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* d8afa7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8afa8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8afaa: push 0x404 */
  { uint32_t v = 0x404u; esp -= 4; W32(esp, v); }
/* d8afaf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8afb0: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd8afb2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d8afb2: /* d8afb2: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* d8afb6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* d8afb7: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8afb9: jl 0xd8af80 */
  if ((sf != of)) goto L_d8af80;
L_d8afbb: /* d8afbb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_d8afbc: /* d8afbc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8afbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8afbe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8afbf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8b000(void) {
  LOAD_REGS();
L_d8b000: /* d8b000: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8b005: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d8b007: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8b00a: movzx eax, word ptr [esp + 4] */
  eax = (uint32_t)(R16((uint32_t)(esp + 0x4u)));
/* d8b00f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8b011: movzx edx, word ptr [esp + 8] */
  edx = (uint32_t)(R16((uint32_t)(esp + 0x8u)));
/* d8b016: je 0xd8b02f */
  if (zf) goto L_d8b02f;
L_d8b018: /* d8b018: shl edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* d8b01b: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* d8b01d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b01e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8b020: push 0x406 */
  { uint32_t v = 0x406u; esp -= 4; W32(esp, v); }
/* d8b025: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b026: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b02cu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b02c: ret 8 */
  esp += 12; SPILL(); return;
L_d8b02f: /* d8b02f: shl edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* d8b032: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* d8b034: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b035: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8b037: push 0x406 */
  { uint32_t v = 0x406u; esp -= 4; W32(esp, v); }
/* d8b03c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b03d: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b043u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8b043: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8b070(void) {
  LOAD_REGS();
L_d8b070: /* d8b070: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8b075: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d8b077: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d8b07a: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8b07c: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* d8b080: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b081: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8b083: push 0x405 */
  { uint32_t v = 0x405u; esp -= 4; W32(esp, v); }
/* d8b088: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b089: je 0xd8b094 */
  if (zf) goto L_d8b094;
L_d8b08b: /* d8b08b: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b091u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b091: ret 4 */
  esp += 8; SPILL(); return;
L_d8b094: /* d8b094: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b09au); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8b09a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8b0b0(void) {
  LOAD_REGS();
L_d8b0b0: /* d8b0b0: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8b0b5: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8b0b8: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8b0bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b0bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b0bf: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* d8b0c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b0c5: je 0xd8b0ce */
  if (zf) goto L_d8b0ce;
L_d8b0c7: /* d8b0c7: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b0cdu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b0cd: ret  */
  esp += 4; SPILL(); return;
L_d8b0ce: /* d8b0ce: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b0d4u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8b0d4: ret  */
  esp += 4; SPILL(); return;
}

void f_d8b0f0(void) {
  LOAD_REGS();
L_d8b0f0: /* d8b0f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8b0f1: mov ebp, esp */
  ebp = esp;
/* d8b0f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8b0f5: push 0xdb8e90 */
  { uint32_t v = 0xdb8e90u; esp -= 4; W32(esp, v); }
/* d8b0fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8b100: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b101: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8b108: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8b10b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8b10c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8b10d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8b10e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8b111: mov esi, ecx */
  esi = ecx;
/* d8b113: mov ecx, dword ptr [0xde5034] */
  ecx = R32((uint32_t)(0xde5034u));
/* d8b119: movzx edx, word ptr [esi + 0xc] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0xcu)));
/* d8b11d: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* d8b120: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d8b123: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b124: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b125: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b126: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d8b129: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b12b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b12d: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d8b12f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b131: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d8b133: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b135: and eax, 0x10000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8b13a: or eax, 0x40000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d8b13f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b140: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b142: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* d8b147: mov ecx, esi */
  ecx = esi;
/* d8b149: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8b150: call 0xd81852 */
  esp -= 4; W32(esp, 0xd8b155u); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* d8b155: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* d8b15b: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8b15e: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* d8b160: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b162: push 0x401 */
  { uint32_t v = 0x401u; esp -= 4; W32(esp, v); }
/* d8b167: je 0xd8b186 */
  if (zf) goto L_d8b186;
L_d8b169: /* d8b169: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* d8b16c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b16d: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b173u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b173: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8b176: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8b17d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8b17e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8b17f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8b180: mov esp, ebp */
  esp = ebp;
/* d8b182: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8b183: ret 4 */
  esp += 8; SPILL(); return;
L_d8b186: /* d8b186: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8b189: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b18a: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b190u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8b190: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8b193: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8b194: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8b195: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8b19c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8b19d: mov esp, ebp */
  esp = ebp;
/* d8b19f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8b1a0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8b1a3(void) {
  LOAD_REGS();
L_d8b1a3: /* d8b1a3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8b1a6: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8b1ab: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d8b1ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b1af: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d8b1b2: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8b1b7u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8b1b7(); return;
}

void f_d8b1b7(void) {
  LOAD_REGS();
L_d8b1b7: /* d8b1b7: push 0xdc02d4 */
  { uint32_t v = 0xdc02d4u; esp -= 4; W32(esp, v); }
/* d8b1bc: push 0xde1a90 */
  { uint32_t v = 0xde1a90u; esp -= 4; W32(esp, v); }
/* d8b1c1: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8b1c7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8b1c7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8b1ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b1cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b1ce: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8b1d3u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8b1d3: guest_badaddr(0xd8b1d3); return;
}

void f_d8b220(void) {
  LOAD_REGS();
L_d8b220: /* d8b220: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8b221: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* d8b225: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d8b227: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8b228: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8b229: mov edi, ecx */
  edi = ecx;
/* d8b22b: jl 0xd8b238 */
  if ((sf != of)) goto L_d8b238;
L_d8b22d: /* d8b22d: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* d8b231: jg 0xd8b23f */
  if ((!zf && sf == of)) goto L_d8b23f;
L_d8b233: /* d8b233: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d8b236: jae 0xd8b23f */
  if (!cf) goto L_d8b23f;
L_d8b238: /* d8b238: mov esi, 1 */
  esi = 0x1u;
/* d8b23d: xor ebx, ebx */
  ebx = 0;
L_d8b23f: /* d8b23f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* d8b243: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d8b247: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b249: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* d8b24b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b24c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b24d: call 0xdb7cd0 */
  esp -= 4; W32(esp, 0xd8b252u); SPILL(); f_db7cd0(); if (g_unwind) return; RELOAD();
/* d8b252: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8b253: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8b254: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b255: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b256: call 0xdb7c20 */
  esp -= 4; W32(esp, 0xd8b25bu); SPILL(); f_db7c20(); if (g_unwind) return; RELOAD();
/* d8b25b: mov esi, eax */
  esi = eax;
/* d8b25d: cmp esi, dword ptr [edi + 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8b260: je 0xd8b292 */
  if (zf) goto L_d8b292;
L_d8b262: /* d8b262: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* d8b268: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8b26b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b26d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8b26e: push 0x402 */
  { uint32_t v = 0x402u; esp -= 4; W32(esp, v); }
/* d8b273: je 0xd8b288 */
  if (zf) goto L_d8b288;
L_d8b275: /* d8b275: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* d8b278: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b279: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b27fu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b27f: mov dword ptr [edi + 0x40], esi */
  W32((uint32_t)(edi + 0x40u), esi);
/* d8b282: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8b283: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8b284: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8b285: ret 0x10 */
  esp += 20; SPILL(); return;
L_d8b288: /* d8b288: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* d8b28b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b28c: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b292u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_d8b292: /* d8b292: mov dword ptr [edi + 0x40], esi */
  W32((uint32_t)(edi + 0x40u), esi);
/* d8b295: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8b296: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8b297: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8b298: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_d8b2c0(void) {
  LOAD_REGS();
L_d8b2c0: /* d8b2c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8b2c1: mov ebp, esp */
  ebp = esp;
/* d8b2c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8b2c5: push 0xdb8ea0 */
  { uint32_t v = 0xdb8ea0u; esp -= 4; W32(esp, v); }
/* d8b2ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8b2d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b2d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8b2d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8b2db: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* d8b2de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8b2df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8b2e0: mov esi, ecx */
  esi = ecx;
/* d8b2e2: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* d8b2e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8b2e6: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* d8b2ec: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8b2ef: mov edx, dword ptr [0xde5034] */
  edx = R32((uint32_t)(0xde5034u));
/* d8b2f5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8b2f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b2f9: movzx edx, word ptr [esi + 0xc] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0xcu)));
/* d8b2fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b2fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b2ff: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d8b302: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* d8b304: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* d8b306: and ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* d8b30c: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d8b30e: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d8b310: and eax, 0x808 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x808u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8b315: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* d8b317: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d8b31a: xor edx, edx */
  edx = 0;
/* d8b31c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8b31e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* d8b321: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d8b324: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* d8b327: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b329: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b32b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b32d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b32f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8b336: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* d8b337: and edx, 0x100 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* d8b33d: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* d8b33f: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* d8b342: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d8b344: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d8b346: and eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8b349: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* d8b34b: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* d8b34d: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* d8b34f: and edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* d8b352: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* d8b354: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* d8b356: or ecx, 0x42a00001 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x42a00001u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* d8b35c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b35d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b35f: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* d8b364: mov ecx, esi */
  ecx = esi;
/* d8b366: call 0xd81852 */
  esp -= 4; W32(esp, 0xd8b36bu); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* d8b36b: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8b370: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8b373: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* d8b376: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b378: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* d8b37a: je 0xd8b39f */
  if (zf) goto L_d8b39f;
L_d8b37c: /* d8b37c: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xd8b382u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* d8b382: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b383: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* d8b385: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8b386: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b38cu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b38c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8b38f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8b396: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8b397: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8b398: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8b399: mov esp, ebp */
  esp = ebp;
/* d8b39b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8b39c: ret 0x18 */
  esp += 28; SPILL(); return;
L_d8b39f: /* d8b39f: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xd8b3a5u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* d8b3a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b3a6: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* d8b3a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8b3a9: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b3afu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8b3af: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8b3b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8b3b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8b3b4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8b3bb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8b3bc: mov esp, ebp */
  esp = ebp;
/* d8b3be: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8b3bf: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_d8b3c2(void) {
  LOAD_REGS();
L_d8b3c2: /* d8b3c2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8b3c5: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8b3ca: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d8b3cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b3ce: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d8b3d1: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8b3d6u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8b3d6(); return;
}

void f_d8b3d6(void) {
  LOAD_REGS();
L_d8b3d6: /* d8b3d6: push 0xdc0310 */
  { uint32_t v = 0xdc0310u; esp -= 4; W32(esp, v); }
/* d8b3db: push 0xde1a98 */
  { uint32_t v = 0xde1a98u; esp -= 4; W32(esp, v); }
/* d8b3e0: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8b3e6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8b3e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8b3e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b3eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b3ed: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8b3f2u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8b3f2: guest_badaddr(0xd8b3f2); return;
}

void f_d8b450(void) {
  LOAD_REGS();
L_d8b450: /* d8b450: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8b451: mov ebp, esp */
  ebp = esp;
/* d8b453: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8b455: push 0xdb8eb0 */
  { uint32_t v = 0xdb8eb0u; esp -= 4; W32(esp, v); }
/* d8b45a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8b460: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b461: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8b468: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8b46b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8b46c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8b46d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8b46e: xor edi, edi */
  edi = 0;
/* d8b470: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* d8b473: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8b478: mov ebx, ecx */
  ebx = ecx;
/* d8b47a: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8b47c: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* d8b47f: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8b482: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* d8b485: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8b486: je 0xd8b49a */
  if (zf) goto L_d8b49a;
L_d8b488: /* d8b488: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d8b48b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b48c: push 0x18a */
  { uint32_t v = 0x18au; esp -= 4; W32(esp, v); }
/* d8b491: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b492: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b498u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b498: jmp 0xd8b4aa */
  goto L_d8b4aa;
L_d8b49a: /* d8b49a: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* d8b49d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b49e: push 0x18a */
  { uint32_t v = 0x18au; esp -= 4; W32(esp, v); }
/* d8b4a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b4a4: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b4aau); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_d8b4aa: /* d8b4aa: mov esi, eax */
  esi = eax;
/* d8b4ac: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8b4af: jne 0xd8b4d9 */
  if (!zf) goto L_d8b4d9;
L_d8b4b1: /* d8b4b1: push 0xde4f38 */
  { uint32_t v = 0xde4f38u; esp -= 4; W32(esp, v); }
L_d8b4b6: /* d8b4b6: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d8b4b9: mov ecx, esi */
  ecx = esi;
/* d8b4bb: call dword ptr [0xde88e4] */
  esp -= 4; W32(esp, 0xd8b4c1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* d8b4c1: mov eax, esi */
  eax = esi;
/* d8b4c3: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* d8b4c6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8b4c9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8b4d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8b4d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8b4d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8b4d3: mov esp, ebp */
  esp = ebp;
/* d8b4d5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8b4d6: ret 8 */
  esp += 12; SPILL(); return;
L_d8b4d9: /* d8b4d9: mov eax, dword ptr [0xde88f8] */
  eax = R32((uint32_t)(0xde88f8u));
/* d8b4de: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8b4e0: je 0xd8b530 */
  if (zf) goto L_d8b530;
L_d8b4e2: /* d8b4e2: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* d8b4e8: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8b4ea: jne 0xd8b530 */
  if (!zf) goto L_d8b530;
L_d8b4ec: /* d8b4ec: lea edx, [esi + 1] */
  edx = (uint32_t)(esi + 0x1u);
/* d8b4ef: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8b4f1: je 0xd8b509 */
  if (zf) goto L_d8b509;
L_d8b4f3: /* d8b4f3: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* d8b4f6: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8b4f9: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d8b4fc: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8b4ff: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd8b504u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d8b504: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8b507: mov edi, esp */
  edi = esp;
L_d8b509: /* d8b509: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d8b50c: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* d8b50f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8b510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b511: push 0x189 */
  { uint32_t v = 0x189u; esp -= 4; W32(esp, v); }
/* d8b516: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8b517: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b51du); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8b51d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b51f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8b520: mov byte ptr [edi + esi], 0 */
  W8((uint32_t)(edi + esi), 0x0u);
/* d8b524: call dword ptr [0xde88ec] */
  esp -= 4; W32(esp, 0xd8b52au); SPILL(); f_4e161d(); if (g_unwind) return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */ RELOAD();
/* d8b52a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8b52d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b52e: jmp 0xd8b4b6 */
  goto L_d8b4b6;
L_d8b530: /* d8b530: lea ecx, [esi + esi + 2] */
  ecx = (uint32_t)(esi + esi + 0x2u);
/* d8b534: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8b536: je 0xd8b54f */
  if (zf) goto L_d8b54f;
L_d8b538: /* d8b538: lea eax, [esi + esi + 9] */
  eax = (uint32_t)(esi + esi + 0x9u);
/* d8b53c: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8b53f: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d8b542: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8b545: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd8b54au); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d8b54a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8b54d: mov edi, esp */
  edi = esp;
L_d8b54f: /* d8b54f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* d8b552: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* d8b555: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8b556: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b557: push 0x189 */
  { uint32_t v = 0x189u; esp -= 4; W32(esp, v); }
/* d8b55c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8b55d: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b563u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b563: mov word ptr [edi + esi*2], 0 */
  W16((uint32_t)(edi + esi*2), 0x0u);
/* d8b569: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8b56a: jmp 0xd8b4b6 */
  goto L_d8b4b6;
}

void f_d8b56f(void) {
  LOAD_REGS();
L_d8b56f: /* d8b56f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8b572: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8b577: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8b57a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b57b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8b57e: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8b583u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8b583(); return;
}

void f_d8b583(void) {
  LOAD_REGS();
L_d8b583: /* d8b583: push 0xdc0344 */
  { uint32_t v = 0xdc0344u; esp -= 4; W32(esp, v); }
/* d8b588: push 0xde1aa8 */
  { uint32_t v = 0xde1aa8u; esp -= 4; W32(esp, v); }
/* d8b58d: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8b593u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8b593: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8b596: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b598: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b59a: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8b59fu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8b59f: guest_badaddr(0xd8b59f); return;
}

void f_d8b600(void) {
  LOAD_REGS();
L_d8b600: /* d8b600: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8b605: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8b608: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8b60b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b60d: je 0xd8b623 */
  if (zf) goto L_d8b623;
L_d8b60f: /* d8b60f: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d8b613: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b614: push 0x199 */
  { uint32_t v = 0x199u; esp -= 4; W32(esp, v); }
/* d8b619: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b61a: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b620u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b620: ret 4 */
  esp += 8; SPILL(); return;
L_d8b623: /* d8b623: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d8b627: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b628: push 0x199 */
  { uint32_t v = 0x199u; esp -= 4; W32(esp, v); }
/* d8b62d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b62e: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b634u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8b634: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8b650(void) {
  LOAD_REGS();
L_d8b650: /* d8b650: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8b655: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d8b657: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d8b65b: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8b65e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8b660: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d8b664: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b665: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b666: push 0x19a */
  { uint32_t v = 0x19au; esp -= 4; W32(esp, v); }
/* d8b66b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b66c: je 0xd8b677 */
  if (zf) goto L_d8b677;
L_d8b66e: /* d8b66e: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b674u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b674: ret 8 */
  esp += 12; SPILL(); return;
L_d8b677: /* d8b677: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b67du); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8b67d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8b690(void) {
  LOAD_REGS();
L_d8b690: /* d8b690: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8b695: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d8b697: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d8b69b: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8b69e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8b6a0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d8b6a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b6a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b6a6: push 0x19a */
  { uint32_t v = 0x19au; esp -= 4; W32(esp, v); }
/* d8b6ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b6ac: je 0xd8b6b7 */
  if (zf) goto L_d8b6b7;
L_d8b6ae: /* d8b6ae: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b6b4u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b6b4: ret 8 */
  esp += 12; SPILL(); return;
L_d8b6b7: /* d8b6b7: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b6bdu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8b6bd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8b6d0(void) {
  LOAD_REGS();
L_d8b6d0: /* d8b6d0: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8b6d5: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8b6d8: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8b6db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b6dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b6df: push 0x19f */
  { uint32_t v = 0x19fu; esp -= 4; W32(esp, v); }
/* d8b6e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b6e5: je 0xd8b6ee */
  if (zf) goto L_d8b6ee;
L_d8b6e7: /* d8b6e7: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b6edu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b6ed: ret  */
  esp += 4; SPILL(); return;
L_d8b6ee: /* d8b6ee: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b6f4u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8b6f4: ret  */
  esp += 4; SPILL(); return;
}

void f_d8b710(void) {
  LOAD_REGS();
L_d8b710: /* d8b710: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8b715: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8b718: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8b71a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b71c: push 0x185 */
  { uint32_t v = 0x185u; esp -= 4; W32(esp, v); }
/* d8b721: je 0xd8b72e */
  if (zf) goto L_d8b72e;
L_d8b723: /* d8b723: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8b726: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b727: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b72du); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b72d: ret  */
  esp += 4; SPILL(); return;
L_d8b72e: /* d8b72e: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* d8b731: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b732: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b738u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8b738: ret  */
  esp += 4; SPILL(); return;
}

void f_d8b750(void) {
  LOAD_REGS();
L_d8b750: /* d8b750: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8b751: mov ebp, esp */
  ebp = esp;
/* d8b753: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8b755: push 0xdb8ec0 */
  { uint32_t v = 0xdb8ec0u; esp -= 4; W32(esp, v); }
/* d8b75a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8b760: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b761: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8b768: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8b76b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8b76c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8b76d: mov esi, ecx */
  esi = ecx;
/* d8b76f: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* d8b775: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8b777: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8b778: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8b77b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8b782: je 0xd8b81d */
  if (zf) goto L_d8b81d;
L_d8b788: /* d8b788: call 0xd81780 */
  esp -= 4; W32(esp, 0xd8b78du); SPILL(); f_d81780(); if (g_unwind) return; RELOAD();
/* d8b78d: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* d8b790: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8b795: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8b798: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8b79b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8b79c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8b79e: push 0x185 */
  { uint32_t v = 0x185u; esp -= 4; W32(esp, v); }
/* d8b7a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b7a4: je 0xd8b7ae */
  if (zf) goto L_d8b7ae;
L_d8b7a6: /* d8b7a6: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b7acu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b7ac: jmp 0xd8b7b4 */
  goto L_d8b7b4;
L_d8b7ae: /* d8b7ae: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b7b4u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_d8b7b4: /* d8b7b4: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* d8b7ba: mov edi, eax */
  edi = eax;
/* d8b7bc: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8b7bf: je 0xd8b7da */
  if (zf) goto L_d8b7da;
L_d8b7c1: /* d8b7c1: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* d8b7c4: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8b7c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b7c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8b7c9: push 0x19e */
  { uint32_t v = 0x19eu; esp -= 4; W32(esp, v); }
/* d8b7ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b7cf: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b7d5u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b7d5: jmp 0xd8b87c */
  goto L_d8b87c;
L_d8b7da: /* d8b7da: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d8b7dd: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* d8b7e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b7e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8b7e2: push 0x19e */
  { uint32_t v = 0x19eu; esp -= 4; W32(esp, v); }
/* d8b7e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b7e8: jmp 0xd8b876 */
  goto L_d8b876;
L_d8b81d: /* d8b81d: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* d8b823: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* d8b825: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* d8b828: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b82a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8b82b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8b82d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8b830: push 0x186 */
  { uint32_t v = 0x186u; esp -= 4; W32(esp, v); }
/* d8b835: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b836: je 0xd8b840 */
  if (zf) goto L_d8b840;
L_d8b838: /* d8b838: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b83eu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b83e: jmp 0xd8b846 */
  goto L_d8b846;
L_d8b840: /* d8b840: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b846u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_d8b846: /* d8b846: mov edi, eax */
  edi = eax;
/* d8b848: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8b84d: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8b850: je 0xd8b868 */
  if (zf) goto L_d8b868;
L_d8b852: /* d8b852: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d8b855: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* d8b858: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b859: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8b85a: push 0x19e */
  { uint32_t v = 0x19eu; esp -= 4; W32(esp, v); }
/* d8b85f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b860: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b866u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b866: jmp 0xd8b87c */
  goto L_d8b87c;
L_d8b868: /* d8b868: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d8b86b: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d8b86e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b86f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8b870: push 0x19e */
  { uint32_t v = 0x19eu; esp -= 4; W32(esp, v); }
/* d8b875: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_d8b876: /* d8b876: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b87cu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_d8b87c: /* d8b87c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8b87f: mov eax, edi */
  eax = edi;
/* d8b881: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8b882: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8b883: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8b88a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8b88b: mov esp, ebp */
  esp = ebp;
/* d8b88d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8b88e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8b7ed(void) {
  LOAD_REGS();
L_d8b7ed: /* d8b7ed: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8b7f0: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8b7f5: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8b7f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b7f9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8b7fc: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8b801u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8b801(); return;
}

void f_d8b801(void) {
  LOAD_REGS();
L_d8b801: /* d8b801: push 0xdc0370 */
  { uint32_t v = 0xdc0370u; esp -= 4; W32(esp, v); }
/* d8b806: push 0xde1ad8 */
  { uint32_t v = 0xde1ad8u; esp -= 4; W32(esp, v); }
/* d8b80b: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8b811u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8b811: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8b814: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b816: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b818: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8b81du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
/* d8b81d: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* d8b823: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* d8b825: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* d8b828: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b82a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8b82b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8b82d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8b830: push 0x186 */
  { uint32_t v = 0x186u; esp -= 4; W32(esp, v); }
/* d8b835: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b836: je 0xd8b840 */
  if (zf) goto L_d8b840;
L_d8b838: /* d8b838: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b83eu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b83e: jmp 0xd8b846 */
  goto L_d8b846;
L_d8b840: /* d8b840: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b846u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_d8b846: /* d8b846: mov edi, eax */
  edi = eax;
/* d8b848: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8b84d: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8b850: je 0xd8b868 */
  if (zf) goto L_d8b868;
L_d8b852: /* d8b852: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d8b855: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* d8b858: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b859: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8b85a: push 0x19e */
  { uint32_t v = 0x19eu; esp -= 4; W32(esp, v); }
/* d8b85f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b860: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b866u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b866: jmp 0xd8b87c */
  goto L_d8b87c;
L_d8b868: /* d8b868: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d8b86b: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d8b86e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b86f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8b870: push 0x19e */
  { uint32_t v = 0x19eu; esp -= 4; W32(esp, v); }
/* d8b875: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b876: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b87cu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_d8b87c: /* d8b87c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8b87f: mov eax, edi */
  eax = edi;
/* d8b881: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8b882: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8b883: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8b88a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8b88b: mov esp, ebp */
  esp = ebp;
/* d8b88d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8b88e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8b900(void) {
  LOAD_REGS();
L_d8b900: /* d8b900: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8b905: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8b908: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8b90b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b90d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b90f: push 0x18e */
  { uint32_t v = 0x18eu; esp -= 4; W32(esp, v); }
/* d8b914: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b915: je 0xd8b91e */
  if (zf) goto L_d8b91e;
L_d8b917: /* d8b917: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b91du); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b91d: ret  */
  esp += 4; SPILL(); return;
L_d8b91e: /* d8b91e: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b924u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8b924: ret  */
  esp += 4; SPILL(); return;
}

void f_d8b940(void) {
  LOAD_REGS();
L_d8b940: /* d8b940: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8b945: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d8b947: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d8b94a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b94c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8b94e: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d8b952: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b953: push 0x197 */
  { uint32_t v = 0x197u; esp -= 4; W32(esp, v); }
/* d8b958: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b959: je 0xd8b964 */
  if (zf) goto L_d8b964;
L_d8b95b: /* d8b95b: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b961u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b961: ret 4 */
  esp += 8; SPILL(); return;
L_d8b964: /* d8b964: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b96au); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8b96a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8b980(void) {
  LOAD_REGS();
L_d8b980: /* d8b980: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8b985: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d8b987: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d8b98a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b98c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8b98e: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d8b992: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8b993: push 0x182 */
  { uint32_t v = 0x182u; esp -= 4; W32(esp, v); }
/* d8b998: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8b999: je 0xd8b9a4 */
  if (zf) goto L_d8b9a4;
L_d8b99b: /* d8b99b: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b9a1u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b9a1: ret 4 */
  esp += 8; SPILL(); return;
L_d8b9a4: /* d8b9a4: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b9aau); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8b9aa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8b9c0(void) {
  LOAD_REGS();
L_d8b9c0: /* d8b9c0: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8b9c5: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8b9c8: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8b9cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b9cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8b9cf: push 0x18b */
  { uint32_t v = 0x18bu; esp -= 4; W32(esp, v); }
/* d8b9d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8b9d5: je 0xd8b9de */
  if (zf) goto L_d8b9de;
L_d8b9d7: /* d8b9d7: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8b9ddu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8b9dd: ret  */
  esp += 4; SPILL(); return;
L_d8b9de: /* d8b9de: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8b9e4u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8b9e4: ret  */
  esp += 4; SPILL(); return;
}

void f_d8ba00(void) {
  LOAD_REGS();
L_d8ba00: /* d8ba00: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8ba05: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8ba08: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8ba0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ba0d: je 0xd8ba23 */
  if (zf) goto L_d8ba23;
L_d8ba0f: /* d8ba0f: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d8ba13: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8ba14: push 0x1a1 */
  { uint32_t v = 0x1a1u; esp -= 4; W32(esp, v); }
/* d8ba19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8ba1a: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8ba20u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8ba20: ret 4 */
  esp += 8; SPILL(); return;
L_d8ba23: /* d8ba23: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d8ba27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ba28: push 0x1a1 */
  { uint32_t v = 0x1a1u; esp -= 4; W32(esp, v); }
/* d8ba2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8ba2e: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8ba34u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8ba34: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8ba50(void) {
  LOAD_REGS();
L_d8ba50: /* d8ba50: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8ba55: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d8ba57: movzx eax, word ptr [esp + 4] */
  eax = (uint32_t)(R16((uint32_t)(esp + 0x4u)));
/* d8ba5c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8ba5f: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8ba61: movzx edx, word ptr [esp + 8] */
  edx = (uint32_t)(R16((uint32_t)(esp + 0x8u)));
/* d8ba66: je 0xd8ba7e */
  if (zf) goto L_d8ba7e;
L_d8ba68: /* d8ba68: shl edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* d8ba6b: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* d8ba6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8ba6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ba70: push 0x1a9 */
  { uint32_t v = 0x1a9u; esp -= 4; W32(esp, v); }
/* d8ba75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8ba76: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8ba7cu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8ba7c: jmp 0xd8ba92 */
  goto L_d8ba92;
L_d8ba7e: /* d8ba7e: shl edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* d8ba81: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* d8ba83: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8ba84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8ba86: push 0x1a9 */
  { uint32_t v = 0x1a9u; esp -= 4; W32(esp, v); }
/* d8ba8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8ba8c: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8ba92u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_d8ba92: /* d8ba92: mov ecx, eax */
  ecx = eax;
/* d8ba94: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d8ba97: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8ba99: je 0xd8baa1 */
  if (zf) goto L_d8baa1;
L_d8ba9b: /* d8ba9b: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d8ba9e: ret 8 */
  esp += 12; SPILL(); return;
L_d8baa1: /* d8baa1: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* d8baa4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8bad0(void) {
  LOAD_REGS();
L_d8bad0: /* d8bad0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8bad3: mov edx, dword ptr [0xde88ac] */
  edx = R32((uint32_t)(0xde88acu));
/* d8bad9: xor eax, eax */
  eax = 0;
/* d8badb: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* d8badf: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* d8bae3: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* d8bae7: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* d8baeb: cmp dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8baed: je 0xd8bb0a */
  if (zf) goto L_d8bb0a;
L_d8baef: /* d8baef: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* d8baf3: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* d8baf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8baf8: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d8bafb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8bafc: push 0x198 */
  { uint32_t v = 0x198u; esp -= 4; W32(esp, v); }
/* d8bb01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8bb02: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8bb08u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8bb08: jmp 0xd8bb23 */
  goto L_d8bb23;
L_d8bb0a: /* d8bb0a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* d8bb0e: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8bb11: lea edx, [esp] */
  edx = (uint32_t)(esp);
/* d8bb15: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8bb16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8bb17: push 0x198 */
  { uint32_t v = 0x198u; esp -= 4; W32(esp, v); }
/* d8bb1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8bb1d: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8bb23u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_d8bb23: /* d8bb23: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* d8bb27: mov edx, dword ptr [esp] */
  edx = R32((uint32_t)(esp));
/* d8bb2b: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d8bb2f: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d8bb31: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d8bb35: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d8bb38: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* d8bb3c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* d8bb3f: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* d8bb42: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8bb45: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8bb70(void) {
  LOAD_REGS();
L_d8bb70: /* d8bb70: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8bb75: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8bb78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8bb7a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8bb7c: push 0x184 */
  { uint32_t v = 0x184u; esp -= 4; W32(esp, v); }
/* d8bb81: je 0xd8bb8e */
  if (zf) goto L_d8bb8e;
L_d8bb83: /* d8bb83: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8bb86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8bb87: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8bb8du); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8bb8d: ret  */
  esp += 4; SPILL(); return;
L_d8bb8e: /* d8bb8e: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* d8bb91: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8bb92: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8bb98u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8bb98: ret  */
  esp += 4; SPILL(); return;
}

void f_d8bbb0(void) {
  LOAD_REGS();
L_d8bbb0: /* d8bbb0: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8bbb5: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8bbb8: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8bbbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8bbbd: je 0xd8bbd3 */
  if (zf) goto L_d8bbd3;
L_d8bbbf: /* d8bbbf: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d8bbc3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8bbc4: push 0x187 */
  { uint32_t v = 0x187u; esp -= 4; W32(esp, v); }
/* d8bbc9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8bbca: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8bbd0u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8bbd0: ret 4 */
  esp += 8; SPILL(); return;
L_d8bbd3: /* d8bbd3: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d8bbd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8bbd8: push 0x187 */
  { uint32_t v = 0x187u; esp -= 4; W32(esp, v); }
/* d8bbdd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8bbde: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8bbe4u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8bbe4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8bc00(void) {
  LOAD_REGS();
L_d8bc00: /* d8bc00: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8bc05: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d8bc07: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d8bc0b: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8bc0e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8bc10: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d8bc14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8bc15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8bc16: push 0x191 */
  { uint32_t v = 0x191u; esp -= 4; W32(esp, v); }
/* d8bc1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8bc1c: je 0xd8bc27 */
  if (zf) goto L_d8bc27;
L_d8bc1e: /* d8bc1e: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8bc24u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8bc24: ret 8 */
  esp += 12; SPILL(); return;
L_d8bc27: /* d8bc27: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8bc2du); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8bc2d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8bc40(void) {
  LOAD_REGS();
L_d8bc40: /* d8bc40: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8bc45: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8bc48: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8bc4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8bc4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8bc4f: push 0x190 */
  { uint32_t v = 0x190u; esp -= 4; W32(esp, v); }
/* d8bc54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8bc55: je 0xd8bc5e */
  if (zf) goto L_d8bc5e;
L_d8bc57: /* d8bc57: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8bc5du); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8bc5d: ret  */
  esp += 4; SPILL(); return;
L_d8bc5e: /* d8bc5e: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8bc64u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8bc64: ret  */
  esp += 4; SPILL(); return;
}

void f_d8bc80(void) {
  LOAD_REGS();
L_d8bc80: /* d8bc80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8bc81: mov ebp, esp */
  ebp = esp;
/* d8bc83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8bc85: push 0xdb8ed0 */
  { uint32_t v = 0xdb8ed0u; esp -= 4; W32(esp, v); }
/* d8bc8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8bc90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8bc91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8bc98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8bc9b: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8bca0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8bca1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8bca2: mov ebx, ecx */
  ebx = ecx;
/* d8bca4: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8bca7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8bca8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8bcab: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8bcb2: je 0xd8bcdf */
  if (zf) goto L_d8bcdf;
L_d8bcb4: /* d8bcb4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d8bcb7: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* d8bcba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8bcbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8bcbd: push 0x180 */
  { uint32_t v = 0x180u; esp -= 4; W32(esp, v); }
/* d8bcc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8bcc3: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8bcc9u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
L_d8bcc9: /* d8bcc9: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* d8bccc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8bccf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8bcd6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8bcd7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8bcd8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8bcd9: mov esp, ebp */
  esp = ebp;
/* d8bcdb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8bcdc: ret 4 */
  esp += 8; SPILL(); return;
L_d8bcdf: /* d8bcdf: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d8bce2: mov edi, dword ptr [0xde88c8] */
  edi = R32((uint32_t)(0xde88c8u));
/* d8bce8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8bce9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd8bcebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8bceb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8bcee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8bcf0: jne 0xd8bcf7 */
  if (!zf) goto L_d8bcf7;
L_d8bcf2: /* d8bcf2: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* d8bcf5: jmp 0xd8bd14 */
  goto L_d8bd14;
L_d8bcf7: /* d8bcf7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8bcf8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd8bcfau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8bcfa: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d8bcfd: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8bd00: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d8bd03: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8bd06: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8bd09: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd8bd0eu); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d8bd0e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8bd11: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
L_d8bd14: /* d8bd14: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* d8bd17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8bd18: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd8bd1au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8bd1a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d8bd1d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8bd20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8bd21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8bd22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8bd23: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xd8bd29u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* d8bd29: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8bd2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8bd2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8bd2f: push 0x180 */
  { uint32_t v = 0x180u; esp -= 4; W32(esp, v); }
/* d8bd34: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8bd35: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8bd3bu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8bd3b: jmp 0xd8bcc9 */
  goto L_d8bcc9;
}

void f_d8bd3d(void) {
  LOAD_REGS();
L_d8bd3d: /* d8bd3d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8bd40: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8bd45: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8bd48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8bd49: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8bd4c: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8bd51u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8bd51(); return;
}

void f_d8bd51(void) {
  LOAD_REGS();
L_d8bd51: /* d8bd51: push 0xdc03a4 */
  { uint32_t v = 0xdc03a4u; esp -= 4; W32(esp, v); }
/* d8bd56: push 0xde1b38 */
  { uint32_t v = 0xde1b38u; esp -= 4; W32(esp, v); }
/* d8bd5b: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8bd61u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8bd61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8bd64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8bd66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8bd68: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8bd6du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8bd6d: guest_badaddr(0xd8bd6d); return;
}

void f_d8bdb0(void) {
  LOAD_REGS();
L_d8bdb0: /* d8bdb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8bdb1: mov ebp, esp */
  ebp = esp;
/* d8bdb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8bdb5: push 0xdb8ee0 */
  { uint32_t v = 0xdb8ee0u; esp -= 4; W32(esp, v); }
/* d8bdba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8bdc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8bdc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8bdc8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8bdcb: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8bdd0: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8bdd3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8bdd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8bdd5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8bdd6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8bdd9: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d8bddc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8bde3: je 0xd8be12 */
  if (zf) goto L_d8be12;
L_d8bde5: /* d8bde5: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* d8bde8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d8bdeb: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8bdee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8bdef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8bdf0: push 0x181 */
  { uint32_t v = 0x181u; esp -= 4; W32(esp, v); }
/* d8bdf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8bdf6: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8bdfcu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
L_d8bdfc: /* d8bdfc: lea esp, [ebp - 0x28] */
  esp = (uint32_t)(ebp + 0xffffffd8u);
/* d8bdff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8be02: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8be09: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8be0a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8be0b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8be0c: mov esp, ebp */
  esp = ebp;
/* d8be0e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8be0f: ret 8 */
  esp += 12; SPILL(); return;
L_d8be12: /* d8be12: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* d8be15: mov edi, dword ptr [0xde88c8] */
  edi = R32((uint32_t)(0xde88c8u));
/* d8be1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8be1c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd8be1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8be1e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8be21: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8be23: jne 0xd8be29 */
  if (!zf) goto L_d8be29;
L_d8be25: /* d8be25: xor ebx, ebx */
  ebx = 0;
/* d8be27: jmp 0xd8be45 */
  goto L_d8be45;
L_d8be29: /* d8be29: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8be2a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd8be2cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8be2c: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d8be2f: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8be32: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d8be35: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8be38: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8be3b: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd8be40u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d8be40: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8be43: mov ebx, esp */
  ebx = esp;
L_d8be45: /* d8be45: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* d8be48: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* d8be4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8be4c: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* d8be4f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd8be51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8be51: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8be54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8be55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8be56: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8be57: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xd8be5du); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* d8be5d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d8be60: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* d8be63: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8be66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8be67: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8be68: push 0x181 */
  { uint32_t v = 0x181u; esp -= 4; W32(esp, v); }
/* d8be6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8be6e: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8be74u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8be74: jmp 0xd8bdfc */
  goto L_d8bdfc;
}

void f_d8be76(void) {
  LOAD_REGS();
L_d8be76: /* d8be76: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d8be79: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8be7e: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d8be81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8be82: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d8be85: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8be8au); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8be8a(); return;
}

void f_d8be8a(void) {
  LOAD_REGS();
L_d8be8a: /* d8be8a: push 0xdc03d4 */
  { uint32_t v = 0xdc03d4u; esp -= 4; W32(esp, v); }
/* d8be8f: push 0xde1b40 */
  { uint32_t v = 0xde1b40u; esp -= 4; W32(esp, v); }
/* d8be94: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8be9au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8be9a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8be9d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8be9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8bea1: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8bea6u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8bea6: guest_badaddr(0xd8bea6); return;
}

void f_d8bef0(void) {
  LOAD_REGS();
L_d8bef0: /* d8bef0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8bef1: mov ebp, esp */
  ebp = esp;
/* d8bef3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8bef5: push 0xdb8ef0 */
  { uint32_t v = 0xdb8ef0u; esp -= 4; W32(esp, v); }
/* d8befa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8bf00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8bf01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8bf08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8bf0b: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8bf10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8bf11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8bf12: mov ebx, ecx */
  ebx = ecx;
/* d8bf14: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8bf17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8bf18: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8bf1b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8bf22: je 0xd8bf4f */
  if (zf) goto L_d8bf4f;
L_d8bf24: /* d8bf24: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d8bf27: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* d8bf2a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8bf2b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8bf2d: push 0x1a2 */
  { uint32_t v = 0x1a2u; esp -= 4; W32(esp, v); }
/* d8bf32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8bf33: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8bf39u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
L_d8bf39: /* d8bf39: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* d8bf3c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8bf3f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8bf46: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8bf47: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8bf48: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8bf49: mov esp, ebp */
  esp = ebp;
/* d8bf4b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8bf4c: ret 4 */
  esp += 8; SPILL(); return;
L_d8bf4f: /* d8bf4f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d8bf52: mov edi, dword ptr [0xde88c8] */
  edi = R32((uint32_t)(0xde88c8u));
/* d8bf58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8bf59: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd8bf5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8bf5b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8bf5e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8bf60: jne 0xd8bf67 */
  if (!zf) goto L_d8bf67;
L_d8bf62: /* d8bf62: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* d8bf65: jmp 0xd8bf84 */
  goto L_d8bf84;
L_d8bf67: /* d8bf67: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8bf68: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd8bf6au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8bf6a: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d8bf6d: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8bf70: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d8bf73: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8bf76: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8bf79: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd8bf7eu); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d8bf7e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8bf81: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
L_d8bf84: /* d8bf84: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* d8bf87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8bf88: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd8bf8au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8bf8a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d8bf8d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8bf90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8bf91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8bf92: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8bf93: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xd8bf99u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* d8bf99: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8bf9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8bf9d: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8bf9f: push 0x1a2 */
  { uint32_t v = 0x1a2u; esp -= 4; W32(esp, v); }
/* d8bfa4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8bfa5: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8bfabu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8bfab: jmp 0xd8bf39 */
  goto L_d8bf39;
}

void f_d8bfad(void) {
  LOAD_REGS();
L_d8bfad: /* d8bfad: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8bfb0: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8bfb5: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8bfb8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8bfb9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8bfbc: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8bfc1u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8bfc1(); return;
}

void f_d8bfc1(void) {
  LOAD_REGS();
L_d8bfc1: /* d8bfc1: push 0xdc040c */
  { uint32_t v = 0xdc040cu; esp -= 4; W32(esp, v); }
/* d8bfc6: push 0xde1b48 */
  { uint32_t v = 0xde1b48u; esp -= 4; W32(esp, v); }
/* d8bfcb: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8bfd1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8bfd1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8bfd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8bfd6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8bfd8: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8bfddu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8bfdd: guest_badaddr(0xd8bfdd); return;
}

void f_d8c020(void) {
  LOAD_REGS();
L_d8c020: /* d8c020: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8c021: mov ebp, esp */
  ebp = esp;
/* d8c023: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8c025: push 0xdb8f00 */
  { uint32_t v = 0xdb8f00u; esp -= 4; W32(esp, v); }
/* d8c02a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8c030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c031: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8c038: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8c03b: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8c040: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8c041: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8c042: mov ebx, ecx */
  ebx = ecx;
/* d8c044: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8c047: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8c048: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8c04b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8c052: je 0xd8c07f */
  if (zf) goto L_d8c07f;
L_d8c054: /* d8c054: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d8c057: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* d8c05a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c05b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8c05d: push 0x18f */
  { uint32_t v = 0x18fu; esp -= 4; W32(esp, v); }
/* d8c062: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c063: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8c069u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
L_d8c069: /* d8c069: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* d8c06c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8c06f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8c076: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8c077: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8c078: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8c079: mov esp, ebp */
  esp = ebp;
/* d8c07b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8c07c: ret 4 */
  esp += 8; SPILL(); return;
L_d8c07f: /* d8c07f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d8c082: mov edi, dword ptr [0xde88c8] */
  edi = R32((uint32_t)(0xde88c8u));
/* d8c088: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8c089: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd8c08bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8c08b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8c08e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8c090: jne 0xd8c097 */
  if (!zf) goto L_d8c097;
L_d8c092: /* d8c092: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* d8c095: jmp 0xd8c0b4 */
  goto L_d8c0b4;
L_d8c097: /* d8c097: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8c098: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd8c09au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8c09a: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d8c09d: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8c0a0: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d8c0a3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8c0a6: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8c0a9: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd8c0aeu); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d8c0ae: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8c0b1: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
L_d8c0b4: /* d8c0b4: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* d8c0b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8c0b8: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd8c0bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8c0ba: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d8c0bd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8c0c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c0c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8c0c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8c0c3: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xd8c0c9u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* d8c0c9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8c0cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c0cd: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8c0cf: push 0x18f */
  { uint32_t v = 0x18fu; esp -= 4; W32(esp, v); }
/* d8c0d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8c0d5: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8c0dbu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8c0db: jmp 0xd8c069 */
  goto L_d8c069;
}

void f_d8c0dd(void) {
  LOAD_REGS();
L_d8c0dd: /* d8c0dd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8c0e0: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8c0e5: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8c0e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c0e9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8c0ec: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8c0f1u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8c0f1(); return;
}

void f_d8c0f1(void) {
  LOAD_REGS();
L_d8c0f1: /* d8c0f1: push 0xdc044c */
  { uint32_t v = 0xdc044cu; esp -= 4; W32(esp, v); }
/* d8c0f6: push 0xde1b50 */
  { uint32_t v = 0xde1b50u; esp -= 4; W32(esp, v); }
/* d8c0fb: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8c101u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8c101: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8c104: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c106: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c108: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8c10du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8c10d: guest_badaddr(0xd8c10d); return;
}

void f_d8c150(void) {
  LOAD_REGS();
L_d8c150: /* d8c150: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8c151: mov ebp, esp */
  ebp = esp;
/* d8c153: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8c155: push 0xdb8f10 */
  { uint32_t v = 0xdb8f10u; esp -= 4; W32(esp, v); }
/* d8c15a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8c160: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c161: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8c168: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8c16b: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8c170: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8c171: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8c172: mov ebx, ecx */
  ebx = ecx;
/* d8c174: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8c177: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8c178: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8c17b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8c182: je 0xd8c19b */
  if (zf) goto L_d8c19b;
L_d8c184: /* d8c184: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d8c187: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* d8c18a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c18b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8c18d: push 0x18f */
  { uint32_t v = 0x18fu; esp -= 4; W32(esp, v); }
/* d8c192: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c193: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8c199u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8c199: jmp 0xd8c1f7 */
  goto L_d8c1f7;
L_d8c19b: /* d8c19b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d8c19e: mov edi, dword ptr [0xde88c8] */
  edi = R32((uint32_t)(0xde88c8u));
/* d8c1a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8c1a5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd8c1a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8c1a7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8c1aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8c1ac: jne 0xd8c1b3 */
  if (!zf) goto L_d8c1b3;
L_d8c1ae: /* d8c1ae: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* d8c1b1: jmp 0xd8c1d0 */
  goto L_d8c1d0;
L_d8c1b3: /* d8c1b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8c1b4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd8c1b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8c1b6: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d8c1b9: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8c1bc: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d8c1bf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8c1c2: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8c1c5: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd8c1cau); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d8c1ca: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8c1cd: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
L_d8c1d0: /* d8c1d0: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* d8c1d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8c1d4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd8c1d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8c1d6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d8c1d9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8c1dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c1dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8c1de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8c1df: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xd8c1e5u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* d8c1e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8c1e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c1e9: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8c1eb: push 0x18f */
  { uint32_t v = 0x18fu; esp -= 4; W32(esp, v); }
/* d8c1f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8c1f1: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8c1f7u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_d8c1f7: /* d8c1f7: mov esi, eax */
  esi = eax;
/* d8c1f9: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8c1fc: jne 0xd8c216 */
  if (!zf) goto L_d8c216;
L_d8c1fe: /* d8c1fe: push 0x7f4 */
  { uint32_t v = 0x7f4u; esp -= 4; W32(esp, v); }
/* d8c203: push 0xde1b58 */
  { uint32_t v = 0xde1b58u; esp -= 4; W32(esp, v); }
/* d8c208: push 0xde1b68 */
  { uint32_t v = 0xde1b68u; esp -= 4; W32(esp, v); }
/* d8c20d: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8c213u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8c213: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8c216: /* d8c216: mov eax, esi */
  eax = esi;
/* d8c218: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* d8c21b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8c21e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8c225: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8c226: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8c227: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8c228: mov esp, ebp */
  esp = ebp;
/* d8c22a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8c22b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8c22e(void) {
  LOAD_REGS();
L_d8c22e: /* d8c22e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8c231: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8c236: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8c239: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c23a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8c23d: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8c242u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8c242(); return;
}

void f_d8c242(void) {
  LOAD_REGS();
L_d8c242: /* d8c242: push 0xdc0480 */
  { uint32_t v = 0xdc0480u; esp -= 4; W32(esp, v); }
/* d8c247: push 0xde1b78 */
  { uint32_t v = 0xde1b78u; esp -= 4; W32(esp, v); }
/* d8c24c: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8c252u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8c252: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8c255: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c257: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c259: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8c25eu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8c25e: guest_badaddr(0xd8c25e); return;
}

void f_d8c2b0(void) {
  LOAD_REGS();
L_d8c2b0: /* d8c2b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8c2b1: mov ebp, esp */
  ebp = esp;
/* d8c2b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8c2b5: push 0xdb8f20 */
  { uint32_t v = 0xdb8f20u; esp -= 4; W32(esp, v); }
/* d8c2ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8c2c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c2c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8c2c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8c2cb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d8c2ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8c2cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8c2d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8c2d1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8c2d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c2d5: mov esi, ecx */
  esi = ecx;
/* d8c2d7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8c2de: call 0xd81767 */
  esp -= 4; W32(esp, 0xd8c2e3u); SPILL(); f_d81767(); if (g_unwind) return; RELOAD();
/* d8c2e3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d8c2e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c2e7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d8c2e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c2e9: mov ecx, esi */
  ecx = esi;
/* d8c2eb: call 0xd82185 */
  esp -= 4; W32(esp, 0xd8c2f0u); SPILL(); f_d82185(); if (g_unwind) return; RELOAD();
/* d8c2f0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8c2f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8c2f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8c2f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8c2fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8c2fd: mov esp, ebp */
  esp = ebp;
/* d8c2ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8c300: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8c303(void) {
  LOAD_REGS();
L_d8c303: /* d8c303: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8c306: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8c30b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* d8c30e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c30f: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* d8c312: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8c317u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8c317(); return;
}

void f_d8c317(void) {
  LOAD_REGS();
L_d8c317: /* d8c317: push 0xdc04c4 */
  { uint32_t v = 0xdc04c4u; esp -= 4; W32(esp, v); }
/* d8c31c: push 0xde1b80 */
  { uint32_t v = 0xde1b80u; esp -= 4; W32(esp, v); }
/* d8c321: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8c327u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8c327: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8c32a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c32c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c32e: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8c333u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8c333: guest_badaddr(0xd8c333); return;
}

void f_d8c370(void) {
  LOAD_REGS();
L_d8c370: /* d8c370: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8c375: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8c378: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8c37b: je 0xd8c393 */
  if (zf) goto L_d8c393;
L_d8c37d: /* d8c37d: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* d8c381: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8c382: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c384: push 0x180 */
  { uint32_t v = 0x180u; esp -= 4; W32(esp, v); }
/* d8c389: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c38a: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8c390u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8c390: ret 4 */
  esp += 8; SPILL(); return;
L_d8c393: /* d8c393: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d8c397: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c398: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c39a: push 0x180 */
  { uint32_t v = 0x180u; esp -= 4; W32(esp, v); }
/* d8c39f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c3a0: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8c3a6u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8c3a6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8c3c0(void) {
  LOAD_REGS();
L_d8c3c0: /* d8c3c0: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8c3c5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d8c3c7: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d8c3cb: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8c3ce: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8c3d0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d8c3d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8c3d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c3d6: push 0x181 */
  { uint32_t v = 0x181u; esp -= 4; W32(esp, v); }
/* d8c3db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c3dc: je 0xd8c3e7 */
  if (zf) goto L_d8c3e7;
L_d8c3de: /* d8c3de: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8c3e4u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8c3e4: ret 8 */
  esp += 12; SPILL(); return;
L_d8c3e7: /* d8c3e7: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8c3edu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8c3ed: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8c400(void) {
  LOAD_REGS();
L_d8c400: /* d8c400: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8c405: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8c408: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8c40b: je 0xd8c423 */
  if (zf) goto L_d8c423;
L_d8c40d: /* d8c40d: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* d8c411: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8c412: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8c414: push 0x18f */
  { uint32_t v = 0x18fu; esp -= 4; W32(esp, v); }
/* d8c419: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c41a: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8c420u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8c420: ret 4 */
  esp += 8; SPILL(); return;
L_d8c423: /* d8c423: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d8c427: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c428: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8c42a: push 0x18f */
  { uint32_t v = 0x18fu; esp -= 4; W32(esp, v); }
/* d8c42f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c430: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8c436u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8c436: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8c450(void) {
  LOAD_REGS();
L_d8c450: /* d8c450: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8c451: mov ebp, esp */
  ebp = esp;
/* d8c453: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8c455: push 0xdb8f30 */
  { uint32_t v = 0xdb8f30u; esp -= 4; W32(esp, v); }
/* d8c45a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8c460: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c461: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8c468: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8c46b: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8c470: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8c473: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8c476: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8c477: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8c478: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8c479: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8c47c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8c483: je 0xd8c499 */
  if (zf) goto L_d8c499;
L_d8c485: /* d8c485: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d8c488: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8c489: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8c48b: push 0x18f */
  { uint32_t v = 0x18fu; esp -= 4; W32(esp, v); }
/* d8c490: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c491: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8c497u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8c497: jmp 0xd8c4ab */
  goto L_d8c4ab;
L_d8c499: /* d8c499: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d8c49c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c49d: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8c49f: push 0x18f */
  { uint32_t v = 0x18fu; esp -= 4; W32(esp, v); }
/* d8c4a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c4a5: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8c4abu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_d8c4ab: /* d8c4ab: mov esi, eax */
  esi = eax;
/* d8c4ad: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8c4b0: jne 0xd8c4ca */
  if (!zf) goto L_d8c4ca;
L_d8c4b2: /* d8c4b2: push 0x819 */
  { uint32_t v = 0x819u; esp -= 4; W32(esp, v); }
/* d8c4b7: push 0xde1ba0 */
  { uint32_t v = 0xde1ba0u; esp -= 4; W32(esp, v); }
/* d8c4bc: push 0xde1bb0 */
  { uint32_t v = 0xde1bb0u; esp -= 4; W32(esp, v); }
/* d8c4c1: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8c4c7u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8c4c7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8c4ca: /* d8c4ca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8c4cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8c4ce: mov eax, esi */
  eax = esi;
/* d8c4d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8c4d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8c4d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8c4d9: mov esp, ebp */
  esp = ebp;
/* d8c4db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8c4dc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8c4df(void) {
  LOAD_REGS();
L_d8c4df: /* d8c4df: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8c4e2: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8c4e7: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d8c4ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8c4eb: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d8c4ee: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8c4f3u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8c4f3(); return;
}

void f_d8c4f3(void) {
  LOAD_REGS();
L_d8c4f3: /* d8c4f3: push 0xdc0508 */
  { uint32_t v = 0xdc0508u; esp -= 4; W32(esp, v); }
/* d8c4f8: push 0xde1bc0 */
  { uint32_t v = 0xde1bc0u; esp -= 4; W32(esp, v); }
/* d8c4fd: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8c503u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8c503: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8c506: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c508: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c50a: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8c50fu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8c50f: guest_badaddr(0xd8c50f); return;
}

void f_d8c540(void) {
  LOAD_REGS();
L_d8c540: /* d8c540: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8c541: mov ebp, esp */
  ebp = esp;
/* d8c543: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8c545: push 0xdb8f40 */
  { uint32_t v = 0xdb8f40u; esp -= 4; W32(esp, v); }
/* d8c54a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8c550: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c551: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8c558: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8c55b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d8c55e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8c55f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8c560: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8c561: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8c564: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c565: mov esi, ecx */
  esi = ecx;
/* d8c567: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8c56e: call 0xd81375 */
  esp -= 4; W32(esp, 0xd8c573u); SPILL(); f_d81375(); if (g_unwind) return; RELOAD();
/* d8c573: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d8c576: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c577: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d8c578: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c579: mov ecx, esi */
  ecx = esi;
/* d8c57b: call 0xd81339 */
  esp -= 4; W32(esp, 0xd8c580u); SPILL(); f_d81339(); if (g_unwind) return; RELOAD();
/* d8c580: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8c583: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8c584: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8c585: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8c58c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8c58d: mov esp, ebp */
  esp = ebp;
/* d8c58f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8c590: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8c593(void) {
  LOAD_REGS();
L_d8c593: /* d8c593: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8c596: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8c59b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* d8c59e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c59f: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* d8c5a2: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8c5a7u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8c5a7(); return;
}

void f_d8c5a7(void) {
  LOAD_REGS();
L_d8c5a7: /* d8c5a7: push 0xdc0548 */
  { uint32_t v = 0xdc0548u; esp -= 4; W32(esp, v); }
/* d8c5ac: push 0xde1bc8 */
  { uint32_t v = 0xde1bc8u; esp -= 4; W32(esp, v); }
/* d8c5b1: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8c5b7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8c5b7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8c5ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c5bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c5be: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8c5c3u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8c5c3: guest_badaddr(0xd8c5c3); return;
}

void f_d8c600(void) {
  LOAD_REGS();
L_d8c600: /* d8c600: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8c601: mov ebp, esp */
  ebp = esp;
/* d8c603: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8c605: push 0xdb8f50 */
  { uint32_t v = 0xdb8f50u; esp -= 4; W32(esp, v); }
/* d8c60a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8c610: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c611: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8c618: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8c61b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* d8c61e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8c61f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8c620: mov esi, ecx */
  esi = ecx;
/* d8c622: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* d8c625: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8c626: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* d8c62c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d8c62f: mov edx, dword ptr [0xde5034] */
  edx = R32((uint32_t)(0xde5034u));
/* d8c635: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8c638: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8c639: movzx edx, word ptr [esi + 0xc] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0xcu)));
/* d8c63d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8c63e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c63f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d8c642: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* d8c644: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* d8c646: and ecx, 0x10000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* d8c64c: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d8c64e: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d8c650: and eax, 0x808 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x808u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8c655: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* d8c657: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d8c65a: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* d8c65d: xor edx, edx */
  edx = 0;
/* d8c65f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8c661: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* d8c664: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* d8c667: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c669: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c66b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c66d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c66f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8c676: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* d8c677: and edx, 0x100 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* d8c67d: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* d8c67f: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d8c681: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d8c683: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8c686: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* d8c688: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* d8c68a: or ecx, 0x42a00051 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x42a00051u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* d8c690: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c691: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c693: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* d8c698: mov ecx, esi */
  ecx = esi;
/* d8c69a: call 0xd81852 */
  esp -= 4; W32(esp, 0xd8c69fu); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* d8c69f: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* d8c6a5: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8c6a8: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* d8c6ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c6ad: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* d8c6af: je 0xd8c6d4 */
  if (zf) goto L_d8c6d4;
L_d8c6b1: /* d8c6b1: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xd8c6b7u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* d8c6b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c6b8: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* d8c6ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8c6bb: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8c6c1u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8c6c1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8c6c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8c6cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8c6cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8c6cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8c6ce: mov esp, ebp */
  esp = ebp;
/* d8c6d0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8c6d1: ret 0x14 */
  esp += 24; SPILL(); return;
L_d8c6d4: /* d8c6d4: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xd8c6dau); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* d8c6da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c6db: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* d8c6dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8c6de: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8c6e4u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8c6e4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8c6e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8c6e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8c6e9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8c6f0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8c6f1: mov esp, ebp */
  esp = ebp;
/* d8c6f3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8c6f4: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_d8c6f7(void) {
  LOAD_REGS();
L_d8c6f7: /* d8c6f7: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8c6fa: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8c6ff: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* d8c702: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c703: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* d8c706: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8c70bu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8c70b(); return;
}

void f_d8c70b(void) {
  LOAD_REGS();
L_d8c70b: /* d8c70b: push 0xdc058c */
  { uint32_t v = 0xdc058cu; esp -= 4; W32(esp, v); }
/* d8c710: push 0xde1bd0 */
  { uint32_t v = 0xde1bd0u; esp -= 4; W32(esp, v); }
/* d8c715: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8c71bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8c71b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8c71e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c720: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c722: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8c727u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8c727: guest_badaddr(0xd8c727); return;
}

void f_d8c780(void) {
  LOAD_REGS();
L_d8c780: /* d8c780: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8c781: mov ebp, esp */
  ebp = esp;
/* d8c783: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8c785: push 0xdb8f69 */
  { uint32_t v = 0xdb8f69u; esp -= 4; W32(esp, v); }
/* d8c78a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8c790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c791: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8c798: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8c79b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8c79c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8c79d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d8c7a0: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d8c7a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d8c7a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8c7a6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8c7a9: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d8c7ac: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8c7b3: jl 0xd8c922 */
  if ((sf != of)) goto L_d8c922;
L_d8c7b9: /* d8c7b9: test byte ptr [esi + 0xc], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xcu))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d8c7bd: je 0xd8c922 */
  if (zf) goto L_d8c922;
L_d8c7c3: /* d8c7c3: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d8c7c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c7c7: call dword ptr [0xde8f68] */
  esp -= 4; W32(esp, 0xd8c7cdu); SPILL(); call_ind(R32(0xde8f68u)); if (g_unwind) return; /* USER32!IsWindowEnabled */ RELOAD();
/* d8c7cd: mov ebx, dword ptr [0xde8eec] */
  ebx = R32((uint32_t)(0xde8eecu));
/* d8c7d3: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d8c7d5: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d8c7d7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  eax = r;
  }
/* d8c7d8: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* d8c7db: je 0xd8c7e4 */
  if (zf) goto L_d8c7e4;
L_d8c7dd: /* d8c7dd: mov eax, 0x808080 */
  eax = 0x808080u;
/* d8c7e2: jmp 0xd8c7e8 */
  goto L_d8c7e8;
L_d8c7e4: /* d8c7e4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* d8c7e6: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd8c7e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d8c7e8: /* d8c7e8: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* d8c7eb: mov edi, dword ptr [0xde8c94] */
  edi = R32((uint32_t)(0xde8c94u));
/* d8c7f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c7f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c7f3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd8c7f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8c7f5: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* d8c7f7: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d8c7fa: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd8c7fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8c7fc: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* d8c7ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c800: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8c801: call dword ptr [0xde8c90] */
  esp -= 4; W32(esp, 0xd8c807u); SPILL(); call_ind(R32(0xde8c90u)); if (g_unwind) return; /* GDI32!SetBkColor */ RELOAD();
/* d8c807: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* d8c80a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d8c80d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8c80f: jne 0xd8c831 */
  if (!zf) goto L_d8c831;
L_d8c811: /* d8c811: test byte ptr [esi + 0x10], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x10u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d8c815: je 0xd8c831 */
  if (zf) goto L_d8c831;
L_d8c817: /* d8c817: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* d8c819: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd8c81bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8c81b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c81c: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* d8c81f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c820: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd8c822u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8c822: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* d8c824: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd8c826u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8c826: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* d8c829: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c82a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c82b: call dword ptr [0xde8c90] */
  esp -= 4; W32(esp, 0xd8c831u); SPILL(); call_ind(R32(0xde8c90u)); if (g_unwind) return; /* GDI32!SetBkColor */ RELOAD();
L_d8c831: /* d8c831: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* d8c834: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d8c837: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8c838: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* d8c83b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c83c: call 0xd81cd5 */
  esp -= 4; W32(esp, 0xd8c841u); SPILL(); f_d81cd5(); if (g_unwind) return; RELOAD();
/* d8c841: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d8c844: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d8c848: call dword ptr [0xde88bc] */
  esp -= 4; W32(esp, 0xd8c84eu); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* d8c84e: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d8c851: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* d8c854: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd8c85au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d8c85a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c85c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c85d: call dword ptr [0xde88f0] */
  esp -= 4; W32(esp, 0xd8c863u); SPILL(); f_4e299b(); if (g_unwind) return; /* Core!?appToAnsi@@YAPBDPBGPAD@Z */ RELOAD();
/* d8c863: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d8c866: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* d8c869: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8c86c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c86e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c86f: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* d8c872: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c873: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* d8c876: lea ebx, [esi + 0x1c] */
  ebx = (uint32_t)(esi + 0x1cu);
/* d8c879: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8c87a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* d8c87c: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d8c87f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8c880: add eax, 0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d8c883: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c884: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c885: call dword ptr [0xde8c8c] */
  esp -= 4; W32(esp, 0xd8c88bu); SPILL(); call_ind(R32(0xde8c8cu)); if (g_unwind) return; /* GDI32!ExtTextOutA */ RELOAD();
/* d8c88b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8c88e: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* d8c891: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8c892: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c893: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd8c895u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8c895: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d8c898: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* d8c89b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c89c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8c89d: call dword ptr [0xde8c90] */
  esp -= 4; W32(esp, 0xd8c8a3u); SPILL(); call_ind(R32(0xde8c90u)); if (g_unwind) return; /* GDI32!SetBkColor */ RELOAD();
/* d8c8a3: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* d8c8a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c8a7: call dword ptr [0xde8c78] */
  esp -= 4; W32(esp, 0xd8c8adu); SPILL(); call_ind(R32(0xde8c78u)); if (g_unwind) return; /* GDI32!CreateCompatibleDC */ RELOAD();
/* d8c8ad: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d8c8b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c8b1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d8c8b4: mov edi, eax */
  edi = eax;
/* d8c8b6: call 0xd81d34 */
  esp -= 4; W32(esp, 0xd8c8bbu); SPILL(); f_d81d34(); if (g_unwind) return; RELOAD();
/* d8c8bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8c8bd: je 0xd8c8ca */
  if (zf) goto L_d8c8ca;
L_d8c8bf: /* d8c8bf: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* d8c8c2: mov eax, dword ptr [edx + 0x90] */
  eax = R32((uint32_t)(edx + 0x90u));
/* d8c8c8: jmp 0xd8c8d3 */
  goto L_d8c8d3;
L_d8c8ca: /* d8c8ca: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d8c8cd: mov eax, dword ptr [eax + 0x8c] */
  eax = R32((uint32_t)(eax + 0x8cu));
L_d8c8d3: /* d8c8d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c8d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8c8d5: call dword ptr [0xde8c74] */
  esp -= 4; W32(esp, 0xd8c8dbu); SPILL(); call_ind(R32(0xde8c74u)); if (g_unwind) return; /* GDI32!SelectObject */ RELOAD();
/* d8c8db: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* d8c8de: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* d8c8e0: push 0xcc0020 */
  { uint32_t v = 0xcc0020u; esp -= 4; W32(esp, v); }
/* d8c8e5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c8e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c8e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8c8ea: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* d8c8ec: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* d8c8ee: add ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d8c8f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c8f2: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d8c8f5: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* d8c8f8: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* d8c8fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8c8fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c8fd: call dword ptr [0xde8c6c] */
  esp -= 4; W32(esp, 0xd8c903u); SPILL(); call_ind(R32(0xde8c6cu)); if (g_unwind) return; /* GDI32!BitBlt */ RELOAD();
/* d8c903: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d8c906: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c907: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8c908: call dword ptr [0xde8c74] */
  esp -= 4; W32(esp, 0xd8c90eu); SPILL(); call_ind(R32(0xde8c74u)); if (g_unwind) return; /* GDI32!SelectObject */ RELOAD();
/* d8c90e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8c90f: call dword ptr [0xde8cb0] */
  esp -= 4; W32(esp, 0xd8c915u); SPILL(); call_ind(R32(0xde8cb0u)); if (g_unwind) return; /* GDI32!DeleteDC */ RELOAD();
/* d8c915: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d8c918: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8c91c: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd8c922u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_d8c922: /* d8c922: test byte ptr [esi + 0xc], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xcu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d8c926: je 0xd8c936 */
  if (zf) goto L_d8c936;
L_d8c928: /* d8c928: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* d8c92b: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* d8c92e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8c92f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8c930: call dword ptr [0xde8ef0] */
  esp -= 4; W32(esp, 0xd8c936u); SPILL(); call_ind(R32(0xde8ef0u)); if (g_unwind) return; /* USER32!DrawFocusRect */ RELOAD();
L_d8c936: /* d8c936: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8c939: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8c93a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8c93b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8c942: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8c943: mov esp, ebp */
  esp = ebp;
/* d8c945: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8c946: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8c949(void) {
  LOAD_REGS();
L_d8c949: /* d8c949: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* d8c94c: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8c951: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* d8c954: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8c955: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* d8c958: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8c95du); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8c95d(); return;
}

void f_d8c95d(void) {
  LOAD_REGS();
L_d8c95d: /* d8c95d: push 0xdc05cc */
  { uint32_t v = 0xdc05ccu; esp -= 4; W32(esp, v); }
/* d8c962: push 0xde1be0 */
  { uint32_t v = 0xde1be0u; esp -= 4; W32(esp, v); }
/* d8c967: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8c96du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8c96d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8c970: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c972: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8c974: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8c979u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8c979: guest_badaddr(0xd8c979); return;
}

void f_d8ca00(void) {
  LOAD_REGS();
L_d8ca00: /* d8ca00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8ca01: mov ebp, esp */
  ebp = esp;
/* d8ca03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8ca05: push 0xdb8f80 */
  { uint32_t v = 0xdb8f80u; esp -= 4; W32(esp, v); }
/* d8ca0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8ca10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ca11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8ca18: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8ca1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8ca1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8ca1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8ca1e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8ca21: mov esi, ecx */
  esi = ecx;
/* d8ca23: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8ca2a: call 0xd81e5b */
  esp -= 4; W32(esp, 0xd8ca2fu); SPILL(); f_d81e5b(); if (g_unwind) return; RELOAD();
/* d8ca2f: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* d8ca32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ca33: call dword ptr [0xde8ee8] */
  esp -= 4; W32(esp, 0xd8ca39u); SPILL(); call_ind(R32(0xde8ee8u)); if (g_unwind) return; /* USER32!GetCursorPos */ RELOAD();
/* d8ca39: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* d8ca3c: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* d8ca3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8ca40: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8ca41: call dword ptr [0xde8f20] */
  esp -= 4; W32(esp, 0xd8ca47u); SPILL(); call_ind(R32(0xde8f20u)); if (g_unwind) return; /* USER32!ScreenToClient */ RELOAD();
/* d8ca47: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* d8ca4a: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8ca4d: jg 0xd8ca77 */
  if ((!zf && sf == of)) goto L_d8ca77;
L_d8ca4f: /* d8ca4f: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d8ca52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8ca53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ca54: mov ecx, esi */
  ecx = esi;
/* d8ca56: call 0xd8240f */
  esp -= 4; W32(esp, 0xd8ca5bu); SPILL(); f_d8240f(); if (g_unwind) return; RELOAD();
/* d8ca5b: mov edi, eax */
  edi = eax;
/* d8ca5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8ca5e: mov ecx, esi */
  ecx = esi;
/* d8ca60: call 0xd81d34 */
  esp -= 4; W32(esp, 0xd8ca65u); SPILL(); f_d81d34(); if (g_unwind) return; RELOAD();
/* d8ca65: xor edx, edx */
  edx = 0;
/* d8ca67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8ca69: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* d8ca6c: mov ecx, esi */
  ecx = esi;
/* d8ca6e: mov eax, edx */
  eax = edx;
/* d8ca70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ca71: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8ca72: call 0xd8150a */
  esp -= 4; W32(esp, 0xd8ca77u); SPILL(); f_d8150a(); if (g_unwind) return; RELOAD();
L_d8ca77: /* d8ca77: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* d8ca7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8ca7c: jne 0xd8ca96 */
  if (!zf) goto L_d8ca96;
L_d8ca7e: /* d8ca7e: push 0x88d */
  { uint32_t v = 0x88du; esp -= 4; W32(esp, v); }
/* d8ca83: push 0xde1be8 */
  { uint32_t v = 0xde1be8u; esp -= 4; W32(esp, v); }
/* d8ca88: push 0xde1bf8 */
  { uint32_t v = 0xde1bf8u; esp -= 4; W32(esp, v); }
/* d8ca8d: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8ca93u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8ca93: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8ca96: /* d8ca96: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8ca9b: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8ca9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8caa0: push 0x8021 */
  { uint32_t v = 0x8021u; esp -= 4; W32(esp, v); }
/* d8caa5: push 0x111 */
  { uint32_t v = 0x111u; esp -= 4; W32(esp, v); }
/* d8caaa: je 0xd8cabb */
  if (zf) goto L_d8cabb;
L_d8caac: /* d8caac: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* d8caaf: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* d8cab2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8cab3: call dword ptr [0xde8f50] */
  esp -= 4; W32(esp, 0xd8cab9u); SPILL(); call_ind(R32(0xde8f50u)); if (g_unwind) return; /* USER32!PostMessageW */ RELOAD();
/* d8cab9: jmp 0xd8cac8 */
  goto L_d8cac8;
L_d8cabb: /* d8cabb: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* d8cabe: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* d8cac1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8cac2: call dword ptr [0xde8f54] */
  esp -= 4; W32(esp, 0xd8cac8u); SPILL(); call_ind(R32(0xde8f54u)); if (g_unwind) return; /* USER32!PostMessageA */ RELOAD();
L_d8cac8: /* d8cac8: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* d8cacb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8cacd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8cacf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8cad0: call dword ptr [0xde8f2c] */
  esp -= 4; W32(esp, 0xd8cad6u); SPILL(); call_ind(R32(0xde8f2cu)); if (g_unwind) return; /* USER32!InvalidateRect */ RELOAD();
/* d8cad6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8cad9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8cada: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8cadb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8cae2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8cae3: mov esp, ebp */
  esp = ebp;
/* d8cae5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8cae6: ret  */
  esp += 4; SPILL(); return;
}

void f_d8cae7(void) {
  LOAD_REGS();
L_d8cae7: /* d8cae7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8caea: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8caef: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8caf2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8caf3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8caf6: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8cafbu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8cafb(); return;
}

void f_d8cafb(void) {
  LOAD_REGS();
L_d8cafb: /* d8cafb: push 0xdc0610 */
  { uint32_t v = 0xdc0610u; esp -= 4; W32(esp, v); }
/* d8cb00: push 0xde1c04 */
  { uint32_t v = 0xde1c04u; esp -= 4; W32(esp, v); }
/* d8cb05: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8cb0bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8cb0b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8cb0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8cb10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8cb12: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8cb17u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8cb17: guest_badaddr(0xd8cb17); return;
}

void f_d8cb70(void) {
  LOAD_REGS();
L_d8cb70: /* d8cb70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8cb71: mov ebp, esp */
  ebp = esp;
/* d8cb73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8cb75: push 0xdb8f90 */
  { uint32_t v = 0xdb8f90u; esp -= 4; W32(esp, v); }
/* d8cb7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8cb80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8cb81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8cb88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8cb8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8cb8c: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* d8cb8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8cb90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8cb91: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8cb94: mov esi, ecx */
  esi = ecx;
/* d8cb96: mov ecx, dword ptr [0xde5034] */
  ecx = R32((uint32_t)(0xde5034u));
/* d8cb9c: movzx edx, word ptr [esi + 0xc] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0xcu)));
/* d8cba0: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* d8cba3: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d8cba6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8cba7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8cba8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8cba9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d8cbac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8cbae: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d8cbb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8cbb2: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d8cbb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8cbb6: and eax, 0x10000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8cbbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8cbbd: or eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d8cbbf: or eax, 0x40000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d8cbc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8cbc5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8cbc7: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* d8cbcc: mov ecx, esi */
  ecx = esi;
/* d8cbce: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8cbd5: call 0xd81852 */
  esp -= 4; W32(esp, 0xd8cbdau); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* d8cbda: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* d8cbe0: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8cbe3: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* d8cbe6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8cbe8: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* d8cbea: je 0xd8cc0f */
  if (zf) goto L_d8cc0f;
L_d8cbec: /* d8cbec: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xd8cbf2u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* d8cbf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8cbf3: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* d8cbf5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8cbf6: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8cbfcu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8cbfc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8cbff: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8cc06: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8cc07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8cc08: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8cc09: mov esp, ebp */
  esp = ebp;
/* d8cc0b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8cc0c: ret 8 */
  esp += 12; SPILL(); return;
L_d8cc0f: /* d8cc0f: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xd8cc15u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* d8cc15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8cc16: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* d8cc18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8cc19: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8cc1fu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
/* d8cc1f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8cc22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8cc23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8cc24: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8cc2b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8cc2c: mov esp, ebp */
  esp = ebp;
/* d8cc2e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8cc2f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8cc32(void) {
  LOAD_REGS();
L_d8cc32: /* d8cc32: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8cc35: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8cc3a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* d8cc3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8cc3e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* d8cc41: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8cc46u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8cc46(); return;
}

void f_d8cc46(void) {
  LOAD_REGS();
L_d8cc46: /* d8cc46: push 0xdc065c */
  { uint32_t v = 0xdc065cu; esp -= 4; W32(esp, v); }
/* d8cc4b: push 0xde1c0c */
  { uint32_t v = 0xde1c0cu; esp -= 4; W32(esp, v); }
/* d8cc50: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8cc56u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8cc56: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8cc59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8cc5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8cc5d: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8cc62u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8cc62: guest_badaddr(0xd8cc62); return;
}

void f_d8ccb0(void) {
  LOAD_REGS();
L_d8ccb0: /* d8ccb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8ccb1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d8ccb3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8ccb5: mov esi, ecx */
  esi = ecx;
/* d8ccb7: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd8ccbdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d8ccbd: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d8ccc1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d8ccc3: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* d8ccc5: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* d8ccc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8ccc9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8cce0(void) {
  LOAD_REGS();
L_d8cce0: /* d8cce0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* d8cce3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8cce4: xor eax, eax */
  eax = 0;
/* d8cce6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d8cce8: jle 0xd8ccfe */
  if ((zf || sf != of)) goto L_d8ccfe;
L_d8ccea: /* d8ccea: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d8ccee: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* d8ccf0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
L_d8ccf2: /* d8ccf2: cmp dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8ccf4: je 0xd8cd01 */
  if (zf) goto L_d8cd01;
L_d8ccf6: /* d8ccf6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d8ccf7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d8ccfa: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8ccfc: jl 0xd8ccf2 */
  if ((sf != of)) goto L_d8ccf2;
L_d8ccfe: /* d8ccfe: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_d8cd01: /* d8cd01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8cd02: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8cd20(void) {
  LOAD_REGS();
L_d8cd20: /* d8cd20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8cd21: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d8cd23: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8cd25: mov esi, ecx */
  esi = ecx;
/* d8cd27: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd8cd2du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d8cd2d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d8cd31: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d8cd33: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* d8cd35: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* d8cd38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8cd39: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8cd50(void) {
  LOAD_REGS();
L_d8cd50: /* d8cd50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8cd51: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d8cd53: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8cd55: mov esi, ecx */
  esi = ecx;
/* d8cd57: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd8cd5du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d8cd5d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d8cd61: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d8cd63: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* d8cd65: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* d8cd68: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8cd69: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8cd80(void) {
  LOAD_REGS();
L_d8cd80: /* d8cd80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8cd81: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8cd82: mov ebp, dword ptr [0xde88a8] */
  ebp = R32((uint32_t)(0xde88a8u));
/* d8cd88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8cd89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8cd8a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* d8cd8e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d8cd90: mov esi, ecx */
  esi = ecx;
/* d8cd92: jge 0xd8cda8 */
  if ((sf == of)) goto L_d8cda8;
L_d8cd94: /* d8cd94: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* d8cd99: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8cd9e: push 0xde1e64 */
  { uint32_t v = 0xde1e64u; esp -= 4; W32(esp, v); }
/* d8cda3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd8cda5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8cda5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8cda8: /* d8cda8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8cdab: jle 0xd8cdc1 */
  if ((zf || sf != of)) goto L_d8cdc1;
L_d8cdad: /* d8cdad: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* d8cdb2: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8cdb7: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* d8cdbc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd8cdbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8cdbe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8cdc1: /* d8cdc1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* d8cdc5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d8cdc8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* d8cdcb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8cdcd: jle 0xd8cde3 */
  if ((zf || sf != of)) goto L_d8cde3;
L_d8cdcf: /* d8cdcf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* d8cdd4: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8cdd9: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* d8cdde: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd8cde0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8cde0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8cde3: /* d8cde3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d8cde5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8cde6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8cde7: mov ecx, esi */
  ecx = esi;
/* d8cde9: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xd8cdefu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* d8cdef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8cdf0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8cdf1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8cdf2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8cdf3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8ce20(void) {
  LOAD_REGS();
L_d8ce20: /* d8ce20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8ce21: mov esi, ecx */
  esi = ecx;
/* d8ce23: call 0xd82545 */
  esp -= 4; W32(esp, 0xd8ce28u); SPILL(); f_d82545(); if (g_unwind) return; RELOAD();
/* d8ce28: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d8ce2d: je 0xd8ce3c */
  if (zf) goto L_d8ce3c;
L_d8ce2f: /* d8ce2f: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d8ce34: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d8ce36: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d8ce38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8ce39: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd8ce3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d8ce3c: /* d8ce3c: mov eax, esi */
  eax = esi;
/* d8ce3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8ce3f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8ce60(void) {
  LOAD_REGS();
L_d8ce60: /* d8ce60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8ce61: mov ebp, esp */
  ebp = esp;
/* d8ce63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8ce65: push 0xdb8fa9 */
  { uint32_t v = 0xdb8fa9u; esp -= 4; W32(esp, v); }
/* d8ce6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8ce70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ce71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8ce78: sub esp, 0x228 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x228u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8ce7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8ce7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8ce80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8ce81: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8ce84: mov esi, ecx */
  esi = ecx;
/* d8ce86: mov ax, word ptr [0xde4efc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xde4efcu))) & 0xffffu);
/* d8ce8c: mov word ptr [ebp - 0x234], ax */
  W16((uint32_t)(ebp + 0xfffffdccu), (eax & 0xffffu));
/* d8ce93: xor eax, eax */
  eax = 0;
/* d8ce95: mov ecx, 0x7f */
  ecx = 0x7fu;
/* d8ce9a: lea edi, [ebp - 0x232] */
  edi = (uint32_t)(ebp + 0xfffffdceu);
/* d8cea0: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* d8cea2: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8cea9: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* d8ceac: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d8ceb0: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* d8ceb2: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd8ceb8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d8ceb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ceb9: lea ecx, [ebp - 0x234] */
  ecx = (uint32_t)(ebp + 0xfffffdccu);
/* d8cebf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8cec0: call dword ptr [0xde88b4] */
  esp -= 4; W32(esp, 0xd8cec6u); SPILL(); f_4e27d9(); if (g_unwind) return; /* Core!?appStrcpy@@YAPAGPAGPBG@Z */ RELOAD();
/* d8cec6: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* d8cec9: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* d8cecf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* d8ced2: lea edx, [ebp - 0x234] */
  edx = (uint32_t)(ebp + 0xfffffdccu);
/* d8ced8: mov dword ptr [ebp - 0x34], 9 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x9u);
/* d8cedf: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* d8cee2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* d8cee5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d8cee7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8ceea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8ceec: mov ecx, esi */
  ecx = esi;
/* d8ceee: je 0xd8cf08 */
  if (zf) goto L_d8cf08;
L_d8cef0: /* d8cef0: call 0xd819b0 */
  esp -= 4; W32(esp, 0xd8cef5u); SPILL(); f_d819b0(); if (g_unwind) return; RELOAD();
/* d8cef5: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* d8cef8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8cef9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8cefa: push 0x133e */
  { uint32_t v = 0x133eu; esp -= 4; W32(esp, v); }
/* d8ceff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8cf00: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8cf06u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8cf06: jmp 0xd8cf1e */
  goto L_d8cf1e;
L_d8cf08: /* d8cf08: call 0xd819b0 */
  esp -= 4; W32(esp, 0xd8cf0du); SPILL(); f_d819b0(); if (g_unwind) return; RELOAD();
/* d8cf0d: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d8cf10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8cf11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8cf12: push 0x133e */
  { uint32_t v = 0x133eu; esp -= 4; W32(esp, v); }
/* d8cf17: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8cf18: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8cf1eu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_d8cf1e: /* d8cf1e: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* d8cf21: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* d8cf28: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd8cf2eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d8cf2e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8cf31: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8cf32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8cf33: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8cf3a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8cf3b: mov esp, ebp */
  esp = ebp;
/* d8cf3d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8cf3e: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_d8cf41(void) {
  LOAD_REGS();
L_d8cf41: /* d8cf41: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8cf44: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8cf49: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* d8cf4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8cf4d: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* d8cf50: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8cf55u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8cf55(); return;
}

void f_d8cf55(void) {
  LOAD_REGS();
L_d8cf55: /* d8cf55: push 0xdc0690 */
  { uint32_t v = 0xdc0690u; esp -= 4; W32(esp, v); }
/* d8cf5a: push 0xde1538 */
  { uint32_t v = 0xde1538u; esp -= 4; W32(esp, v); }
/* d8cf5f: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8cf65u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8cf65: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8cf68: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8cf6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8cf6c: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8cf71u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8cf71: guest_badaddr(0xd8cf71); return;
}

void f_d8cfd0(void) {
  LOAD_REGS();
L_d8cfd0: /* d8cfd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8cfd1: mov ebp, esp */
  ebp = esp;
/* d8cfd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8cfd5: push 0xdb8fc0 */
  { uint32_t v = 0xdb8fc0u; esp -= 4; W32(esp, v); }
/* d8cfda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8cfe0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8cfe1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8cfe8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8cfeb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* d8cfee: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d8cff1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8cff2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8cff3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8cff4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8cff7: mov esi, ecx */
  esi = ecx;
/* d8cff9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d8cffc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8cffd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8cffe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8cfff: mov ecx, esi */
  ecx = esi;
/* d8d001: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8d008: call 0xd828ba */
  esp -= 4; W32(esp, 0xd8d00du); SPILL(); f_d828ba(); if (g_unwind) return; RELOAD();
/* d8d00d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8d010: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* d8d013: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d014: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d015: call dword ptr [0xde8f60] */
  esp -= 4; W32(esp, 0xd8d01bu); SPILL(); call_ind(R32(0xde8f60u)); if (g_unwind) return; /* USER32!GetClientRect */ RELOAD();
/* d8d01b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d8d01e: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* d8d021: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* d8d024: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8d026: add edx, -8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d8d029: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8d02a: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* d8d02d: add eax, -8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d8d030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d031: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d8d033: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d8d035: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8d036: call dword ptr [0xde8f48] */
  esp -= 4; W32(esp, 0xd8d03cu); SPILL(); call_ind(R32(0xde8f48u)); if (g_unwind) return; /* USER32!MoveWindow */ RELOAD();
/* d8d03c: mov ecx, esi */
  ecx = esi;
/* d8d03e: call 0xd82815 */
  esp -= 4; W32(esp, 0xd8d043u); SPILL(); f_d82815(); if (g_unwind) return; RELOAD();
/* d8d043: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8d046: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8d048: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8d04a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d04b: call dword ptr [0xde8f2c] */
  esp -= 4; W32(esp, 0xd8d051u); SPILL(); call_ind(R32(0xde8f2cu)); if (g_unwind) return; /* USER32!InvalidateRect */ RELOAD();
/* d8d051: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8d054: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8d055: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8d056: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8d05d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8d05e: mov esp, ebp */
  esp = ebp;
/* d8d060: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8d061: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d8d064(void) {
  LOAD_REGS();
L_d8d064: /* d8d064: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8d067: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8d06c: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d8d06f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8d070: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d8d073: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8d078u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8d078(); return;
}

void f_d8d078(void) {
  LOAD_REGS();
L_d8d078: /* d8d078: push 0xdc06c0 */
  { uint32_t v = 0xdc06c0u; esp -= 4; W32(esp, v); }
/* d8d07d: push 0xde1654 */
  { uint32_t v = 0xde1654u; esp -= 4; W32(esp, v); }
/* d8d082: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8d088u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8d088: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8d08b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8d08d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8d08f: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8d094u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8d094: guest_badaddr(0xd8d094); return;
}

void f_d8d0e0(void) {
  LOAD_REGS();
L_d8d0e0: /* d8d0e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8d0e1: mov ebp, esp */
  ebp = esp;
/* d8d0e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8d0e5: push 0xdb8fd0 */
  { uint32_t v = 0xdb8fd0u; esp -= 4; W32(esp, v); }
/* d8d0ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8d0f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d0f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8d0f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8d0fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8d0fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8d0fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8d0fe: mov edi, ecx */
  edi = ecx;
/* d8d100: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8d103: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d8d105: lea esi, [edi + 0x44] */
  esi = (uint32_t)(edi + 0x44u);
/* d8d108: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8d10a: mov ecx, esi */
  ecx = esi;
/* d8d10c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8d113: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd8d119u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d8d119: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d8d11b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d8d11e: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* d8d121: call 0xd8121c */
  esp -= 4; W32(esp, 0xd8d126u); SPILL(); f_d8121c(); if (g_unwind) return; RELOAD();
/* d8d126: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d127: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8d12a: mov eax, esp */
  eax = esp;
/* d8d12c: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* d8d12f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d130: call 0xd812e4 */
  esp -= 4; W32(esp, 0xd8d135u); SPILL(); f_d812e4(); if (g_unwind) return; RELOAD();
/* d8d135: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
/* d8d138: call 0xd8213a */
  esp -= 4; W32(esp, 0xd8d13du); SPILL(); f_d8213a(); if (g_unwind) return; RELOAD();
/* d8d13d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8d140: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8d141: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8d142: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8d149: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8d14a: mov esp, ebp */
  esp = ebp;
/* d8d14c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8d14d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8d150(void) {
  LOAD_REGS();
L_d8d150: /* d8d150: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8d153: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8d158: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d8d15b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8d15c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d8d15f: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8d164u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8d164(); return;
}

void f_d8d164(void) {
  LOAD_REGS();
L_d8d164: /* d8d164: push 0xdc06f8 */
  { uint32_t v = 0xdc06f8u; esp -= 4; W32(esp, v); }
/* d8d169: push 0xde1690 */
  { uint32_t v = 0xde1690u; esp -= 4; W32(esp, v); }
/* d8d16e: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8d174u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8d174: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8d177: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8d179: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8d17b: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8d180u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8d180: guest_badaddr(0xd8d180); return;
}

void f_d8d1c0(void) {
  LOAD_REGS();
L_d8d1c0: /* d8d1c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8d1c1: mov ebp, esp */
  ebp = esp;
/* d8d1c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8d1c5: push 0xdb8fe0 */
  { uint32_t v = 0xdb8fe0u; esp -= 4; W32(esp, v); }
/* d8d1ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8d1d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d1d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8d1d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8d1db: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d8d1de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8d1df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8d1e0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8d1e1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8d1e4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8d1eb: xor eax, eax */
  eax = 0;
/* d8d1ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_d8d1f0: /* d8d1f0: cmp eax, dword ptr [ecx + 0x48] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8d1f3: jge 0xd8d24e */
  if ((sf == of)) goto L_d8d24e;
L_d8d1f5: /* d8d1f5: mov esi, dword ptr [ecx + 0x44] */
  esi = R32((uint32_t)(ecx + 0x44u));
/* d8d1f8: cmp dword ptr [esi + eax*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + eax*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8d1fb: je 0xd8d200 */
  if (zf) goto L_d8d200;
L_d8d1fd: /* d8d1fd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d8d1fe: jmp 0xd8d1f0 */
  goto L_d8d1f0;
L_d8d200: /* d8d200: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8d203: je 0xd8d24e */
  if (zf) goto L_d8d24e;
L_d8d205: /* d8d205: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d206: call 0xd815ff */
  esp -= 4; W32(esp, 0xd8d20bu); SPILL(); f_d815ff(); if (g_unwind) return; RELOAD();
/* d8d20b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8d20e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8d215: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8d216: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8d217: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8d218: mov esp, ebp */
  esp = ebp;
/* d8d21a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8d21b: ret 4 */
  esp += 8; SPILL(); return;
L_d8d24e: /* d8d24e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8d251: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8d252: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8d253: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d8d256: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8d25d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8d25e: mov esp, ebp */
  esp = ebp;
/* d8d260: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8d261: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8d21e(void) {
  LOAD_REGS();
L_d8d21e: /* d8d21e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8d221: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8d226: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8d229: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d22a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8d22d: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8d232u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8d232(); return;
}

void f_d8d232(void) {
  LOAD_REGS();
L_d8d232: /* d8d232: push 0xdc0734 */
  { uint32_t v = 0xdc0734u; esp -= 4; W32(esp, v); }
/* d8d237: push 0xde16a0 */
  { uint32_t v = 0xde16a0u; esp -= 4; W32(esp, v); }
/* d8d23c: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8d242u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8d242: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8d245: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8d247: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8d249: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8d24eu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
/* d8d24e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8d251: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8d252: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8d253: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d8d256: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8d25d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8d25e: mov esp, ebp */
  esp = ebp;
/* d8d260: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8d261: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8d2a0(void) {
  LOAD_REGS();
L_d8d2a0: /* d8d2a0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8d2a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8d2a4: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* d8d2a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d2a9: mov esi, ecx */
  esi = ecx;
/* d8d2ab: call 0xd81f14 */
  esp -= 4; W32(esp, 0xd8d2b0u); SPILL(); f_d81f14(); if (g_unwind) return; RELOAD();
/* d8d2b0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d8d2b4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* d8d2b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d2b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8d2ba: mov ecx, esi */
  ecx = esi;
/* d8d2bc: call 0xd8240f */
  esp -= 4; W32(esp, 0xd8d2c1u); SPILL(); f_d8240f(); if (g_unwind) return; RELOAD();
/* d8d2c1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8d2c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d2c4: mov ecx, esi */
  ecx = esi;
/* d8d2c6: call 0xd81c30 */
  esp -= 4; W32(esp, 0xd8d2cbu); SPILL(); f_d81c30(); if (g_unwind) return; RELOAD();
/* d8d2cb: mov eax, dword ptr [esi + 0x7c] */
  eax = R32((uint32_t)(esi + 0x7cu));
/* d8d2ce: lea ecx, [esi + 0x7c] */
  ecx = (uint32_t)(esi + 0x7cu);
/* d8d2d1: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0xd8d2d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8d2d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8d2d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8d2d7: ret  */
  esp += 4; SPILL(); return;
}

void f_d8d2f0(void) {
  LOAD_REGS();
L_d8d2f0: /* d8d2f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8d2f2: push 0xdb8ff9 */
  { uint32_t v = 0xdb8ff9u; esp -= 4; W32(esp, v); }
/* d8d2f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8d2fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d2fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8d305: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d306: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8d307: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8d308: mov esi, ecx */
  esi = ecx;
/* d8d30a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8d30b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* d8d30f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* d8d312: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d8d314: mov ebx, dword ptr [0xde88a8] */
  ebx = R32((uint32_t)(0xde88a8u));
/* d8d31a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* d8d322: jge 0xd8d338 */
  if ((sf == of)) goto L_d8d338;
L_d8d324: /* d8d324: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* d8d329: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8d32e: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* d8d333: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd8d335u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8d335: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8d338: /* d8d338: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8d33b: jle 0xd8d351 */
  if ((zf || sf != of)) goto L_d8d351;
L_d8d33d: /* d8d33d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* d8d342: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8d347: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* d8d34c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd8d34eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8d34e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8d351: /* d8d351: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d8d353: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8d354: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8d356: mov ecx, esi */
  ecx = esi;
/* d8d358: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xd8d35eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* d8d35e: mov ecx, esi */
  ecx = esi;
/* d8d360: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* d8d368: call dword ptr [0xde8900] */
  esp -= 4; W32(esp, 0xd8d36eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* d8d36e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d8d372: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8d373: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8d374: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8d375: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8d37c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8d37f: ret  */
  esp += 4; SPILL(); return;
}

void f_d8d3b0(void) {
  LOAD_REGS();
L_d8d3b0: /* d8d3b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8d3b1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* d8d3b5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d8d3b7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8d3b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8d3b9: mov esi, dword ptr [0xde88a8] */
  esi = R32((uint32_t)(0xde88a8u));
/* d8d3bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8d3c0: mov ebp, ecx */
  ebp = ecx;
/* d8d3c2: jge 0xd8d3d8 */
  if ((sf == of)) goto L_d8d3d8;
L_d8d3c4: /* d8d3c4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* d8d3c9: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8d3ce: push 0xde1e64 */
  { uint32_t v = 0xde1e64u; esp -= 4; W32(esp, v); }
/* d8d3d3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd8d3d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8d3d5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8d3d8: /* d8d3d8: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8d3db: jle 0xd8d3f1 */
  if ((zf || sf != of)) goto L_d8d3f1;
L_d8d3dd: /* d8d3dd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* d8d3e2: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8d3e7: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* d8d3ec: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd8d3eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8d3ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8d3f1: /* d8d3f1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* d8d3f5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* d8d3f8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8d3fb: jle 0xd8d411 */
  if ((zf || sf != of)) goto L_d8d411;
L_d8d3fd: /* d8d3fd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* d8d402: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8d407: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* d8d40c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd8d40eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8d40e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8d411: /* d8d411: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8d413: jge 0xd8d430 */
  if ((sf == of)) goto L_d8d430;
L_d8d415: /* d8d415: lea esi, [ebx + ebx*4] */
  esi = (uint32_t)(ebx + ebx*4);
/* d8d418: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* d8d41b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d8d41d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_d8d420: /* d8d420: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* d8d423: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d8d425: call 0xd82545 */
  esp -= 4; W32(esp, 0xd8d42au); SPILL(); f_d82545(); if (g_unwind) return; RELOAD();
/* d8d42a: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d8d42d: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* d8d42e: jne 0xd8d420 */
  if (!zf) goto L_d8d420;
L_d8d430: /* d8d430: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* d8d434: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* d8d436: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d437: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8d438: mov ecx, ebp */
  ecx = ebp;
/* d8d43a: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xd8d440u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* d8d440: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8d441: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8d442: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8d443: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8d444: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8d480(void) {
  LOAD_REGS();
L_d8d480: /* d8d480: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8d481: mov ebp, esp */
  ebp = esp;
/* d8d483: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8d485: push 0xdb9010 */
  { uint32_t v = 0xdb9010u; esp -= 4; W32(esp, v); }
/* d8d48a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8d490: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d491: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8d498: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8d49b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8d49c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* d8d49f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8d4a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8d4a1: xor eax, eax */
  eax = 0;
/* d8d4a3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8d4a6: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* d8d4a9: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_d8d4ac: /* d8d4ac: cmp eax, dword ptr [ecx + 0x40] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8d4af: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8d4b2: jge 0xd8d562 */
  if ((sf == of)) goto L_d8d562;
L_d8d4b8: /* d8d4b8: movzx edx, word ptr [ebx + 0xc] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0xcu)));
/* d8d4bc: lea edi, [ecx + 0x3c] */
  edi = (uint32_t)(ecx + 0x3cu);
/* d8d4bf: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* d8d4c1: lea esi, [eax + eax*4] */
  esi = (uint32_t)(eax + eax*4);
/* d8d4c4: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* d8d4c7: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d8d4c9: cmp dword ptr [ecx], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8d4cb: jne 0xd8d5a5 */
  if (!zf) goto L_d8d5a5;
L_d8d4d1: /* d8d4d1: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d8d4d4: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd8d4dau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d8d4da: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* d8d4dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d4dd: mov ecx, ebx */
  ecx = ebx;
/* d8d4df: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0xd8d4e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8d4e2: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8d4e7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d8d4e9: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* d8d4ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8d4ee: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* d8d4f0: mov edx, dword ptr [esi + ecx + 0x20] */
  edx = R32((uint32_t)(esi + ecx + 0x20u));
/* d8d4f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8d4f5: push -0x10 */
  { uint32_t v = 0xfffffff0u; esp -= 4; W32(esp, v); }
/* d8d4f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d4f8: je 0xd8d502 */
  if (zf) goto L_d8d502;
L_d8d4fa: /* d8d4fa: call dword ptr [0xde8ee0] */
  esp -= 4; W32(esp, 0xd8d500u); SPILL(); call_ind(R32(0xde8ee0u)); if (g_unwind) return; /* USER32!SetWindowLongW */ RELOAD();
/* d8d500: jmp 0xd8d508 */
  goto L_d8d508;
L_d8d502: /* d8d502: call dword ptr [0xde8ee4] */
  esp -= 4; W32(esp, 0xd8d508u); SPILL(); call_ind(R32(0xde8ee4u)); if (g_unwind) return; /* USER32!SetWindowLongA */ RELOAD();
L_d8d508: /* d8d508: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* d8d50e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d8d510: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d8d512: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* d8d515: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8d517: mov eax, dword ptr [esi + edx + 0x24] */
  eax = R32((uint32_t)(esi + edx + 0x24u));
/* d8d51b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d51c: push -0x14 */
  { uint32_t v = 0xffffffecu; esp -= 4; W32(esp, v); }
/* d8d51e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d51f: je 0xd8d529 */
  if (zf) goto L_d8d529;
L_d8d521: /* d8d521: call dword ptr [0xde8ee0] */
  esp -= 4; W32(esp, 0xd8d527u); SPILL(); call_ind(R32(0xde8ee0u)); if (g_unwind) return; /* USER32!SetWindowLongW */ RELOAD();
/* d8d527: jmp 0xd8d52f */
  goto L_d8d52f;
L_d8d529: /* d8d529: call dword ptr [0xde8ee4] */
  esp -= 4; W32(esp, 0xd8d52fu); SPILL(); call_ind(R32(0xde8ee4u)); if (g_unwind) return; /* USER32!SetWindowLongA */ RELOAD();
L_d8d52f: /* d8d52f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d8d531: mov ecx, dword ptr [esi + edx + 8] */
  ecx = R32((uint32_t)(esi + edx + 0x8u));
/* d8d535: lea eax, [esi + edx] */
  eax = (uint32_t)(esi + edx);
/* d8d538: mov esi, dword ptr [eax + 0x10] */
  esi = R32((uint32_t)(eax + 0x10u));
/* d8d53b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* d8d53e: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* d8d541: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8d543: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* d8d545: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8d546: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d8d548: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d549: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d54a: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* d8d54d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8d54e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d54f: call dword ptr [0xde8f48] */
  esp -= 4; W32(esp, 0xd8d555u); SPILL(); call_ind(R32(0xde8f48u)); if (g_unwind) return; /* USER32!MoveWindow */ RELOAD();
/* d8d555: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* d8d558: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8d55a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8d55b: mov ecx, edi */
  ecx = edi;
/* d8d55d: call 0xd82095 */
  esp -= 4; W32(esp, 0xd8d562u); SPILL(); f_d82095(); if (g_unwind) return; RELOAD();
L_d8d562: /* d8d562: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8d565: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8d566: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8d567: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8d56e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8d56f: mov esp, ebp */
  esp = ebp;
/* d8d571: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8d572: ret 4 */
  esp += 8; SPILL(); return;
L_d8d5a5: /* d8d5a5: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d8d5a8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d8d5a9: jmp 0xd8d4ac */
  goto L_d8d4ac;
}

void f_d8d575(void) {
  LOAD_REGS();
L_d8d575: /* d8d575: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* d8d578: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8d57d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d8d580: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d581: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d8d584: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8d589u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8d589(); return;
}

void f_d8d589(void) {
  LOAD_REGS();
  goto L_d8d589;
L_d8d4ac: /* d8d4ac: cmp eax, dword ptr [ecx + 0x40] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8d4af: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8d4b2: jge 0xd8d562 */
  if ((sf == of)) goto L_d8d562;
L_d8d4b8: /* d8d4b8: movzx edx, word ptr [ebx + 0xc] */
  edx = (uint32_t)(R16((uint32_t)(ebx + 0xcu)));
/* d8d4bc: lea edi, [ecx + 0x3c] */
  edi = (uint32_t)(ecx + 0x3cu);
/* d8d4bf: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* d8d4c1: lea esi, [eax + eax*4] */
  esi = (uint32_t)(eax + eax*4);
/* d8d4c4: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* d8d4c7: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d8d4c9: cmp dword ptr [ecx], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8d4cb: jne 0xd8d5a5 */
  if (!zf) goto L_d8d5a5;
L_d8d4d1: /* d8d4d1: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d8d4d4: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd8d4dau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d8d4da: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* d8d4dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d4dd: mov ecx, ebx */
  ecx = ebx;
/* d8d4df: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0xd8d4e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8d4e2: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8d4e7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d8d4e9: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* d8d4ec: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8d4ee: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* d8d4f0: mov edx, dword ptr [esi + ecx + 0x20] */
  edx = R32((uint32_t)(esi + ecx + 0x20u));
/* d8d4f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8d4f5: push -0x10 */
  { uint32_t v = 0xfffffff0u; esp -= 4; W32(esp, v); }
/* d8d4f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d4f8: je 0xd8d502 */
  if (zf) goto L_d8d502;
L_d8d4fa: /* d8d4fa: call dword ptr [0xde8ee0] */
  esp -= 4; W32(esp, 0xd8d500u); SPILL(); call_ind(R32(0xde8ee0u)); if (g_unwind) return; /* USER32!SetWindowLongW */ RELOAD();
/* d8d500: jmp 0xd8d508 */
  goto L_d8d508;
L_d8d502: /* d8d502: call dword ptr [0xde8ee4] */
  esp -= 4; W32(esp, 0xd8d508u); SPILL(); call_ind(R32(0xde8ee4u)); if (g_unwind) return; /* USER32!SetWindowLongA */ RELOAD();
L_d8d508: /* d8d508: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* d8d50e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d8d510: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d8d512: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* d8d515: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8d517: mov eax, dword ptr [esi + edx + 0x24] */
  eax = R32((uint32_t)(esi + edx + 0x24u));
/* d8d51b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d51c: push -0x14 */
  { uint32_t v = 0xffffffecu; esp -= 4; W32(esp, v); }
/* d8d51e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d51f: je 0xd8d529 */
  if (zf) goto L_d8d529;
L_d8d521: /* d8d521: call dword ptr [0xde8ee0] */
  esp -= 4; W32(esp, 0xd8d527u); SPILL(); call_ind(R32(0xde8ee0u)); if (g_unwind) return; /* USER32!SetWindowLongW */ RELOAD();
/* d8d527: jmp 0xd8d52f */
  goto L_d8d52f;
L_d8d529: /* d8d529: call dword ptr [0xde8ee4] */
  esp -= 4; W32(esp, 0xd8d52fu); SPILL(); call_ind(R32(0xde8ee4u)); if (g_unwind) return; /* USER32!SetWindowLongA */ RELOAD();
L_d8d52f: /* d8d52f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d8d531: mov ecx, dword ptr [esi + edx + 8] */
  ecx = R32((uint32_t)(esi + edx + 0x8u));
/* d8d535: lea eax, [esi + edx] */
  eax = (uint32_t)(esi + edx);
/* d8d538: mov esi, dword ptr [eax + 0x10] */
  esi = R32((uint32_t)(eax + 0x10u));
/* d8d53b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* d8d53e: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* d8d541: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8d543: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* d8d545: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8d546: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d8d548: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d549: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d54a: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* d8d54d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8d54e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d54f: call dword ptr [0xde8f48] */
  esp -= 4; W32(esp, 0xd8d555u); SPILL(); call_ind(R32(0xde8f48u)); if (g_unwind) return; /* USER32!MoveWindow */ RELOAD();
/* d8d555: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* d8d558: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8d55a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8d55b: mov ecx, edi */
  ecx = edi;
/* d8d55d: call 0xd82095 */
  esp -= 4; W32(esp, 0xd8d562u); SPILL(); f_d82095(); if (g_unwind) return; RELOAD();
L_d8d562: /* d8d562: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8d565: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8d566: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8d567: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8d56e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8d56f: mov esp, ebp */
  esp = ebp;
/* d8d571: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8d572: ret 4 */
  esp += 8; SPILL(); return;
L_d8d589: /* d8d589: push 0xdc0774 */
  { uint32_t v = 0xdc0774u; esp -= 4; W32(esp, v); }
/* d8d58e: push 0xde161c */
  { uint32_t v = 0xde161cu; esp -= 4; W32(esp, v); }
/* d8d593: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8d599u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8d599: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8d59c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8d59e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8d5a0: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8d5a5u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8d5a5: /* d8d5a5: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d8d5a8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d8d5a9: jmp 0xd8d4ac */
  goto L_d8d4ac;
}

void f_d8d600(void) {
  LOAD_REGS();
L_d8d600: /* d8d600: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d8d604: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8d605: mov esi, ecx */
  esi = ecx;
/* d8d607: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* d8d60b: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* d8d60e: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* d8d611: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8d612: xor edi, edi */
  edi = 0;
/* d8d614: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8d617: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* d8d61a: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* d8d61d: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* d8d623: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* d8d626: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* d8d62a: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* d8d630: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* d8d633: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* d8d636: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* d8d639: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xd8d63fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* d8d63f: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* d8d642: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8d643: mov eax, esi */
  eax = esi;
/* d8d645: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8d646: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d8d670(void) {
  LOAD_REGS();
L_d8d670: /* d8d670: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8d672: push 0xdb9028 */
  { uint32_t v = 0xdb9028u; esp -= 4; W32(esp, v); }
/* d8d677: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8d67d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d67e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8d685: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8d688: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8d689: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8d68a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8d68b: mov esi, ecx */
  esi = ecx;
/* d8d68d: xor edi, edi */
  edi = 0;
/* d8d68f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8d690: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d8d694: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* d8d698: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xd8d69eu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* d8d69e: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* d8d6a1: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d8d6a5: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* d8d6a9: and ecx, 0xfffffffc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* d8d6ac: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* d8d6af: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* d8d6b2: mov dword ptr [esi], 0xdc07b8 */
  W32((uint32_t)(esi), 0xdc07b8u);
/* d8d6b8: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* d8d6bb: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* d8d6be: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* d8d6c2: mov word ptr [esi + 0xe], 0x2000 */
  W16((uint32_t)(esi + 0xeu), 0x2000u);
/* d8d6c8: mov dword ptr [esi + 0x14], ebx */
  W32((uint32_t)(esi + 0x14u), ebx);
/* d8d6cb: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* d8d6ce: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* d8d6d1: call dword ptr [0xde88e0] */
  esp -= 4; W32(esp, 0xd8d6d7u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* d8d6d7: mov dword ptr [esi + 0x38], edi */
  W32((uint32_t)(esi + 0x38u), edi);
/* d8d6da: cmp dword ptr [esi + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8d6dd: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* d8d6e1: mov dword ptr [esi], 0xdc08d0 */
  W32((uint32_t)(esi), 0xdc08d0u);
/* d8d6e7: jne 0xd8d701 */
  if (!zf) goto L_d8d701;
L_d8d6e9: /* d8d6e9: push 0x302 */
  { uint32_t v = 0x302u; esp -= 4; W32(esp, v); }
/* d8d6ee: push 0xde1ed4 */
  { uint32_t v = 0xde1ed4u; esp -= 4; W32(esp, v); }
/* d8d6f3: push 0xde1ec4 */
  { uint32_t v = 0xde1ec4u; esp -= 4; W32(esp, v); }
/* d8d6f8: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8d6feu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8d6fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8d701: /* d8d701: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* d8d705: mov dword ptr [esi + 0x3c], ecx */
  W32((uint32_t)(esi + 0x3cu), ecx);
/* d8d708: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* d8d70c: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8d70e: jne 0xd8d71e */
  if (!zf) goto L_d8d71e;
L_d8d710: /* d8d710: xor eax, eax */
  eax = 0;
/* d8d712: mov ax, word ptr [ebx + 0xe] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0xeu))) & 0xffffu);
/* d8d716: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* d8d719: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d8d71a: mov word ptr [ebx + 0xe], ax */
  W16((uint32_t)(ebx + 0xeu), (eax & 0xffffu));
L_d8d71e: /* d8d71e: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* d8d721: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d8d724: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d8d726: mov word ptr [esi + 0xc], cx */
  W16((uint32_t)(esi + 0xcu), (ecx & 0xffffu));
/* d8d72a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8d72c: mov ecx, edi */
  ecx = edi;
/* d8d72e: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd8d734u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d8d734: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d8d736: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* d8d73a: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* d8d73d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8d73e: mov eax, esi */
  eax = esi;
/* d8d740: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8d741: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8d742: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8d749: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8d74c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d8d790(void) {
  LOAD_REGS();
L_d8d790: /* d8d790: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d8d794: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8d796: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8d797: mov esi, ecx */
  esi = ecx;
/* d8d799: jne 0xd8d7a0 */
  if (!zf) goto L_d8d7a0;
L_d8d79b: /* d8d79b: mov eax, dword ptr [0xde51a4] */
  eax = R32((uint32_t)(0xde51a4u));
L_d8d7a0: /* d8d7a0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d8d7a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d7a5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d8d7a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d7aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d7ab: mov ecx, esi */
  ecx = esi;
/* d8d7ad: call 0xd814e7 */
  esp -= 4; W32(esp, 0xd8d7b2u); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* d8d7b2: mov dword ptr [esi], 0xdbf600 */
  W32((uint32_t)(esi), 0xdbf600u);
/* d8d7b8: mov dword ptr [esi + 0x40], 0xdbf5f8 */
  W32((uint32_t)(esi + 0x40u), 0xdbf5f8u);
/* d8d7bf: mov dword ptr [esi + 0x44], 0 */
  W32((uint32_t)(esi + 0x44u), 0x0u);
/* d8d7c6: mov dword ptr [esi + 0x48], 0 */
  W32((uint32_t)(esi + 0x48u), 0x0u);
/* d8d7cd: mov eax, esi */
  eax = esi;
/* d8d7cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8d7d0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d8d800(void) {
  LOAD_REGS();
L_d8d800: /* d8d800: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d8d804: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8d806: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8d807: mov esi, ecx */
  esi = ecx;
/* d8d809: jne 0xd8d810 */
  if (!zf) goto L_d8d810;
L_d8d80b: /* d8d80b: mov eax, dword ptr [0xde5198] */
  eax = R32((uint32_t)(0xde5198u));
L_d8d810: /* d8d810: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d8d814: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d815: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d8d819: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d81a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d81b: mov ecx, esi */
  ecx = esi;
/* d8d81d: call 0xd814e7 */
  esp -= 4; W32(esp, 0xd8d822u); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* d8d822: mov dword ptr [esi], 0xdbf748 */
  W32((uint32_t)(esi), 0xdbf748u);
/* d8d828: mov eax, esi */
  eax = esi;
/* d8d82a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8d82b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d8d840(void) {
  LOAD_REGS();
L_d8d840: /* d8d840: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8d842: push 0xdb9048 */
  { uint32_t v = 0xdb9048u; esp -= 4; W32(esp, v); }
/* d8d847: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8d84d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d84e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8d855: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d856: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* d8d85a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8d85c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8d85d: mov esi, ecx */
  esi = ecx;
/* d8d85f: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* d8d863: jne 0xd8d86a */
  if (!zf) goto L_d8d86a;
L_d8d865: /* d8d865: mov eax, dword ptr [0xde51b4] */
  eax = R32((uint32_t)(0xde51b4u));
L_d8d86a: /* d8d86a: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* d8d86e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d86f: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* d8d873: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d874: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d875: mov ecx, esi */
  ecx = esi;
/* d8d877: call 0xd814e7 */
  esp -= 4; W32(esp, 0xd8d87cu); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* d8d87c: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* d8d87f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8d881: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d8d889: mov dword ptr [esi], 0xdbf860 */
  W32((uint32_t)(esi), 0xdbf860u);
/* d8d88f: jne 0xd8d8a9 */
  if (!zf) goto L_d8d8a9;
L_d8d891: /* d8d891: push 0x438 */
  { uint32_t v = 0x438u; esp -= 4; W32(esp, v); }
/* d8d896: push 0xde1ed4 */
  { uint32_t v = 0xde1ed4u; esp -= 4; W32(esp, v); }
/* d8d89b: push 0xde1ec4 */
  { uint32_t v = 0xde1ec4u; esp -= 4; W32(esp, v); }
/* d8d8a0: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8d8a6u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8d8a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8d8a9: /* d8d8a9: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d8d8ad: mov eax, esi */
  eax = esi;
/* d8d8af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8d8b0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8d8b7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8d8ba: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d8d8e0(void) {
  LOAD_REGS();
L_d8d8e0: /* d8d8e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8d8e1: mov ebp, esp */
  ebp = esp;
/* d8d8e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8d8e5: push 0xdb906b */
  { uint32_t v = 0xdb906bu; esp -= 4; W32(esp, v); }
/* d8d8ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8d8f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d8f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8d8f8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8d8fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8d8fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8d8fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8d8fe: xor esi, esi */
  esi = 0;
/* d8d900: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8d903: mov edi, ecx */
  edi = ecx;
/* d8d905: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* d8d908: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* d8d90b: jmp 0xd8d910 */
  goto L_d8d910;
L_d8d910: /* d8d910: cmp esi, dword ptr [edi + 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8d913: jge 0xd8da60 */
  if ((sf == of)) goto L_d8da60;
L_d8d919: /* d8d919: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d8d91e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d8d920: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d8d922: push 0xde1db0 */
  { uint32_t v = 0xde1db0u; esp -= 4; W32(esp, v); }
/* d8d927: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* d8d929: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd8d92bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8d92b: mov ebx, eax */
  ebx = eax;
/* d8d92d: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* d8d930: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8d932: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d8d936: je 0xd8d959 */
  if (zf) goto L_d8d959;
L_d8d938: /* d8d938: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* d8d93b: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* d8d93e: mov eax, dword ptr [ecx + eax*8] */
  eax = R32((uint32_t)(ecx + eax*8));
/* d8d941: mov ecx, dword ptr [0xde5198] */
  ecx = R32((uint32_t)(0xde5198u));
/* d8d947: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d948: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d949: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8d94a: mov ecx, ebx */
  ecx = ebx;
/* d8d94c: call 0xd814e7 */
  esp -= 4; W32(esp, 0xd8d951u); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* d8d951: mov dword ptr [ebx], 0xdbf748 */
  W32((uint32_t)(ebx), 0xdbf748u);
/* d8d957: jmp 0xd8d95b */
  goto L_d8d95b;
L_d8d959: /* d8d959: xor ebx, ebx */
  ebx = 0;
L_d8d95b: /* d8d95b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d8d95d: lea ecx, [edi + 0x48] */
  ecx = (uint32_t)(edi + 0x48u);
/* d8d960: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8d962: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8d966: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd8d96cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d8d96c: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* d8d96f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8d971: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8d973: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8d975: mov ecx, ebx */
  ecx = ebx;
/* d8d977: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
/* d8d97a: call 0xd81843 */
  esp -= 4; W32(esp, 0xd8d97fu); SPILL(); f_d81843(); if (g_unwind) return; RELOAD();
/* d8d97f: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* d8d982: lea esi, [esi + esi*4] */
  esi = (uint32_t)(esi + esi*4);
/* d8d985: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* d8d988: lea ecx, [eax + esi + 4] */
  ecx = (uint32_t)(eax + esi + 0x4u);
/* d8d98c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d8d98e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d8d991: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* d8d994: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* d8d997: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* d8d99a: sub ecx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d8d99d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8d99f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d9a0: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* d8d9a3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d8d9a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d9a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d9a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8d9a8: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* d8d9ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8d9ac: call dword ptr [0xde8f48] */
  esp -= 4; W32(esp, 0xd8d9b2u); SPILL(); call_ind(R32(0xde8f48u)); if (g_unwind) return; /* USER32!MoveWindow */ RELOAD();
/* d8d9b2: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* d8d9b5: lea ecx, [eax + esi + 0x14] */
  ecx = (uint32_t)(eax + esi + 0x14u);
/* d8d9b9: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd8d9bfu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d8d9bf: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* d8d9c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d9c2: mov ecx, ebx */
  ecx = ebx;
/* d8d9c4: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0xd8d9c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8d9c7: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8d9cc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d8d9ce: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* d8d9d1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8d9d3: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* d8d9d6: mov edx, dword ptr [ecx + esi + 0x20] */
  edx = R32((uint32_t)(ecx + esi + 0x20u));
/* d8d9da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8d9db: push -0x10 */
  { uint32_t v = 0xfffffff0u; esp -= 4; W32(esp, v); }
/* d8d9dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d9de: je 0xd8d9e8 */
  if (zf) goto L_d8d9e8;
L_d8d9e0: /* d8d9e0: call dword ptr [0xde8ee0] */
  esp -= 4; W32(esp, 0xd8d9e6u); SPILL(); call_ind(R32(0xde8ee0u)); if (g_unwind) return; /* USER32!SetWindowLongW */ RELOAD();
/* d8d9e6: jmp 0xd8d9ee */
  goto L_d8d9ee;
L_d8d9e8: /* d8d9e8: call dword ptr [0xde8ee4] */
  esp -= 4; W32(esp, 0xd8d9eeu); SPILL(); call_ind(R32(0xde8ee4u)); if (g_unwind) return; /* USER32!SetWindowLongA */ RELOAD();
L_d8d9ee: /* d8d9ee: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* d8d9f4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d8d9f6: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* d8d9f9: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* d8d9fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8d9fe: mov eax, dword ptr [edx + esi + 0x24] */
  eax = R32((uint32_t)(edx + esi + 0x24u));
/* d8da02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8da03: push -0x14 */
  { uint32_t v = 0xffffffecu; esp -= 4; W32(esp, v); }
/* d8da05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8da06: je 0xd8da1c */
  if (zf) goto L_d8da1c;
L_d8da08: /* d8da08: call dword ptr [0xde8ee0] */
  esp -= 4; W32(esp, 0xd8da0eu); SPILL(); call_ind(R32(0xde8ee0u)); if (g_unwind) return; /* USER32!SetWindowLongW */ RELOAD();
/* d8da0e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d8da11: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d8da12: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8da15: mov esi, eax */
  esi = eax;
/* d8da17: jmp 0xd8d910 */
  goto L_d8d910;
L_d8da1c: /* d8da1c: call dword ptr [0xde8ee4] */
  esp -= 4; W32(esp, 0xd8da22u); SPILL(); call_ind(R32(0xde8ee4u)); if (g_unwind) return; /* USER32!SetWindowLongA */ RELOAD();
/* d8da22: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d8da25: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d8da26: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8da29: mov esi, eax */
  esi = eax;
/* d8da2b: jmp 0xd8d910 */
  goto L_d8d910;
L_d8da60: /* d8da60: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8da63: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8da64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8da65: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8da6c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8da6d: mov esp, ebp */
  esp = ebp;
/* d8da6f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8da70: ret  */
  esp += 4; SPILL(); return;
}

void f_d8d90d(void) {
  LOAD_REGS();
L_d8d90d: /* d8d90d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_d8d910: /* d8d910: cmp esi, dword ptr [edi + 0x40] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8d913: jge 0xd8da60 */
  if ((sf == of)) goto L_d8da60;
L_d8d919: /* d8d919: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d8d91e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d8d920: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d8d922: push 0xde1db0 */
  { uint32_t v = 0xde1db0u; esp -= 4; W32(esp, v); }
/* d8d927: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* d8d929: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd8d92bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8d92b: mov ebx, eax */
  ebx = eax;
/* d8d92d: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* d8d930: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8d932: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d8d936: je 0xd8d959 */
  if (zf) goto L_d8d959;
L_d8d938: /* d8d938: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* d8d93b: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* d8d93e: mov eax, dword ptr [ecx + eax*8] */
  eax = R32((uint32_t)(ecx + eax*8));
/* d8d941: mov ecx, dword ptr [0xde5198] */
  ecx = R32((uint32_t)(0xde5198u));
/* d8d947: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d948: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d949: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8d94a: mov ecx, ebx */
  ecx = ebx;
/* d8d94c: call 0xd814e7 */
  esp -= 4; W32(esp, 0xd8d951u); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* d8d951: mov dword ptr [ebx], 0xdbf748 */
  W32((uint32_t)(ebx), 0xdbf748u);
/* d8d957: jmp 0xd8d95b */
  goto L_d8d95b;
L_d8d959: /* d8d959: xor ebx, ebx */
  ebx = 0;
L_d8d95b: /* d8d95b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d8d95d: lea ecx, [edi + 0x48] */
  ecx = (uint32_t)(edi + 0x48u);
/* d8d960: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8d962: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8d966: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd8d96cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d8d96c: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* d8d96f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8d971: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8d973: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8d975: mov ecx, ebx */
  ecx = ebx;
/* d8d977: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
/* d8d97a: call 0xd81843 */
  esp -= 4; W32(esp, 0xd8d97fu); SPILL(); f_d81843(); if (g_unwind) return; RELOAD();
/* d8d97f: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* d8d982: lea esi, [esi + esi*4] */
  esi = (uint32_t)(esi + esi*4);
/* d8d985: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* d8d988: lea ecx, [eax + esi + 4] */
  ecx = (uint32_t)(eax + esi + 0x4u);
/* d8d98c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d8d98e: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d8d991: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* d8d994: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* d8d997: mov ecx, dword ptr [ecx + 0xc] */
  ecx = R32((uint32_t)(ecx + 0xcu));
/* d8d99a: sub ecx, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d8d99d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8d99f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d9a0: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* d8d9a3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d8d9a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d9a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8d9a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8d9a8: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* d8d9ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8d9ac: call dword ptr [0xde8f48] */
  esp -= 4; W32(esp, 0xd8d9b2u); SPILL(); call_ind(R32(0xde8f48u)); if (g_unwind) return; /* USER32!MoveWindow */ RELOAD();
/* d8d9b2: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* d8d9b5: lea ecx, [eax + esi + 0x14] */
  ecx = (uint32_t)(eax + esi + 0x14u);
/* d8d9b9: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd8d9bfu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d8d9bf: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* d8d9c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d9c2: mov ecx, ebx */
  ecx = ebx;
/* d8d9c4: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0xd8d9c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8d9c7: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8d9cc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d8d9ce: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* d8d9d1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8d9d3: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* d8d9d6: mov edx, dword ptr [ecx + esi + 0x20] */
  edx = R32((uint32_t)(ecx + esi + 0x20u));
/* d8d9da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8d9db: push -0x10 */
  { uint32_t v = 0xfffffff0u; esp -= 4; W32(esp, v); }
/* d8d9dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8d9de: je 0xd8d9e8 */
  if (zf) goto L_d8d9e8;
L_d8d9e0: /* d8d9e0: call dword ptr [0xde8ee0] */
  esp -= 4; W32(esp, 0xd8d9e6u); SPILL(); call_ind(R32(0xde8ee0u)); if (g_unwind) return; /* USER32!SetWindowLongW */ RELOAD();
/* d8d9e6: jmp 0xd8d9ee */
  goto L_d8d9ee;
L_d8d9e8: /* d8d9e8: call dword ptr [0xde8ee4] */
  esp -= 4; W32(esp, 0xd8d9eeu); SPILL(); call_ind(R32(0xde8ee4u)); if (g_unwind) return; /* USER32!SetWindowLongA */ RELOAD();
L_d8d9ee: /* d8d9ee: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* d8d9f4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d8d9f6: mov edx, dword ptr [edi + 0x3c] */
  edx = R32((uint32_t)(edi + 0x3cu));
/* d8d9f9: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* d8d9fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8d9fe: mov eax, dword ptr [edx + esi + 0x24] */
  eax = R32((uint32_t)(edx + esi + 0x24u));
/* d8da02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8da03: push -0x14 */
  { uint32_t v = 0xffffffecu; esp -= 4; W32(esp, v); }
/* d8da05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8da06: je 0xd8da1c */
  if (zf) goto L_d8da1c;
L_d8da08: /* d8da08: call dword ptr [0xde8ee0] */
  esp -= 4; W32(esp, 0xd8da0eu); SPILL(); call_ind(R32(0xde8ee0u)); if (g_unwind) return; /* USER32!SetWindowLongW */ RELOAD();
/* d8da0e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d8da11: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d8da12: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8da15: mov esi, eax */
  esi = eax;
/* d8da17: jmp 0xd8d910 */
  goto L_d8d910;
L_d8da1c: /* d8da1c: call dword ptr [0xde8ee4] */
  esp -= 4; W32(esp, 0xd8da22u); SPILL(); call_ind(R32(0xde8ee4u)); if (g_unwind) return; /* USER32!SetWindowLongA */ RELOAD();
/* d8da22: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d8da25: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d8da26: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8da29: mov esi, eax */
  esi = eax;
/* d8da2b: jmp 0xd8d910 */
  goto L_d8d910;
L_d8da60: /* d8da60: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8da63: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8da64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8da65: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8da6c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8da6d: mov esp, ebp */
  esp = ebp;
/* d8da6f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8da70: ret  */
  esp += 4; SPILL(); return;
}

void f_d8da30(void) {
  LOAD_REGS();
L_d8da30: /* d8da30: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* d8da33: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8da38: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* d8da3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8da3c: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* d8da3f: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8da44u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8da44(); return;
}

void f_d8da44(void) {
  LOAD_REGS();
L_d8da44: /* d8da44: push 0xdc09e8 */
  { uint32_t v = 0xdc09e8u; esp -= 4; W32(esp, v); }
/* d8da49: push 0xde1624 */
  { uint32_t v = 0xde1624u; esp -= 4; W32(esp, v); }
/* d8da4e: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8da54u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8da54: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8da57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8da59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8da5b: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8da60u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
/* d8da60: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8da63: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8da64: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8da65: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8da6c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8da6d: mov esp, ebp */
  esp = ebp;
/* d8da6f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8da70: ret  */
  esp += 4; SPILL(); return;
}

void f_d8daf0(void) {
  LOAD_REGS();
L_d8daf0: /* d8daf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8daf1: mov ebp, esp */
  ebp = esp;
/* d8daf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8daf5: push 0xdb908b */
  { uint32_t v = 0xdb908bu; esp -= 4; W32(esp, v); }
/* d8dafa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8db00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8db01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8db08: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8db0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8db0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8db0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8db0e: xor ebx, ebx */
  ebx = 0;
/* d8db10: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8db13: mov edi, ecx */
  edi = ecx;
/* d8db15: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* d8db18: call 0xd81bb3 */
  esp -= 4; W32(esp, 0xd8db1du); SPILL(); f_d81bb3(); if (g_unwind) return; RELOAD();
/* d8db1d: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d8db22: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d8db24: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d8db26: push 0xde1db0 */
  { uint32_t v = 0xde1db0u; esp -= 4; W32(esp, v); }
/* d8db2b: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* d8db2d: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd8db2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8db2f: mov esi, eax */
  esi = eax;
/* d8db31: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* d8db34: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8db36: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d8db3a: je 0xd8db66 */
  if (zf) goto L_d8db66;
L_d8db3c: /* d8db3c: mov eax, dword ptr [0xde51a4] */
  eax = R32((uint32_t)(0xde51a4u));
/* d8db41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8db42: push 0x4dbc */
  { uint32_t v = 0x4dbcu; esp -= 4; W32(esp, v); }
/* d8db47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8db48: mov ecx, esi */
  ecx = esi;
/* d8db4a: call 0xd814e7 */
  esp -= 4; W32(esp, 0xd8db4fu); SPILL(); f_d814e7(); if (g_unwind) return; RELOAD();
/* d8db4f: mov dword ptr [esi], 0xdbf600 */
  W32((uint32_t)(esi), 0xdbf600u);
/* d8db55: mov dword ptr [esi + 0x40], 0xdbf5f8 */
  W32((uint32_t)(esi + 0x40u), 0xdbf5f8u);
/* d8db5c: mov dword ptr [esi + 0x44], ebx */
  W32((uint32_t)(esi + 0x44u), ebx);
/* d8db5f: mov dword ptr [esi + 0x48], ebx */
  W32((uint32_t)(esi + 0x48u), ebx);
/* d8db62: mov ecx, esi */
  ecx = esi;
/* d8db64: jmp 0xd8db68 */
  goto L_d8db68;
L_d8db66: /* d8db66: xor ecx, ecx */
  ecx = 0;
L_d8db68: /* d8db68: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* d8db6b: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d8db6d: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d8db6f: and eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8db74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8db75: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8db77: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* d8db7a: mov dword ptr [edi + 0x40], ecx */
  W32((uint32_t)(edi + 0x40u), ecx);
/* d8db7d: call 0xd828c9 */
  esp -= 4; W32(esp, 0xd8db82u); SPILL(); f_d828c9(); if (g_unwind) return; RELOAD();
/* d8db82: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* d8db85: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8db88: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d8db8b: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* d8db8e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8db8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8db90: mov dword ptr [eax + 8], 0xd8298c */
  W32((uint32_t)(eax + 0x8u), 0xd8298cu);
/* d8db97: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8db9e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8db9f: mov esp, ebp */
  esp = ebp;
/* d8dba1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8dba2: ret  */
  esp += 4; SPILL(); return;
}

void f_d8dba3(void) {
  LOAD_REGS();
L_d8dba3: /* d8dba3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d8dba6: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8dbab: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d8dbae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8dbaf: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d8dbb2: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8dbb7u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8dbb7(); return;
}

void f_d8dbb7(void) {
  LOAD_REGS();
L_d8dbb7: /* d8dbb7: push 0xdc0a24 */
  { uint32_t v = 0xdc0a24u; esp -= 4; W32(esp, v); }
/* d8dbbc: push 0xde164c */
  { uint32_t v = 0xde164cu; esp -= 4; W32(esp, v); }
/* d8dbc1: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8dbc7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8dbc7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8dbca: xor ebx, ebx */
  ebx = 0;
/* d8dbcc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8dbcd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8dbce: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8dbd3u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8dbd3: guest_badaddr(0xd8dbd3); return;
}

void f_d8dc20(void) {
  LOAD_REGS();
L_d8dc20: /* d8dc20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8dc21: mov ebp, esp */
  ebp = esp;
/* d8dc23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8dc25: push 0xdb90ab */
  { uint32_t v = 0xdb90abu; esp -= 4; W32(esp, v); }
/* d8dc2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8dc30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8dc31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8dc38: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8dc3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8dc3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8dc3d: mov esi, ecx */
  esi = ecx;
/* d8dc3f: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* d8dc42: mov eax, dword ptr [esi + 0x8c] */
  eax = R32((uint32_t)(esi + 0x8cu));
/* d8dc48: and ecx, 0xfffffffd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* d8dc4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8dc4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8dc4e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8dc51: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8dc58: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* d8dc5b: jne 0xd8dc75 */
  if (!zf) goto L_d8dc75;
L_d8dc5d: /* d8dc5d: push 0x36e */
  { uint32_t v = 0x36eu; esp -= 4; W32(esp, v); }
/* d8dc62: push 0xde1774 */
  { uint32_t v = 0xde1774u; esp -= 4; W32(esp, v); }
/* d8dc67: push 0xde1784 */
  { uint32_t v = 0xde1784u; esp -= 4; W32(esp, v); }
/* d8dc6c: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8dc72u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8dc72: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8dc75: /* d8dc75: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* d8dc78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8dc7a: je 0xd8dc81 */
  if (zf) goto L_d8dc81;
L_d8dc7c: /* d8dc7c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d8dc7f: jmp 0xd8dc83 */
  goto L_d8dc83;
L_d8dc81: /* d8dc81: xor eax, eax */
  eax = 0;
L_d8dc83: /* d8dc83: mov ecx, dword ptr [0xde5034] */
  ecx = R32((uint32_t)(0xde5034u));
/* d8dc89: mov edx, dword ptr [esi + 0x50] */
  edx = R32((uint32_t)(esi + 0x50u));
/* d8dc8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8dc8d: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* d8dc90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8dc92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8dc93: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* d8dc96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8dc97: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* d8dc9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8dc9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8dc9c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8dc9d: push 0x56000000 */
  { uint32_t v = 0x56000000u; esp -= 4; W32(esp, v); }
/* d8dca2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8dca4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8dca6: mov ecx, esi */
  ecx = esi;
/* d8dca8: call 0xd81852 */
  esp -= 4; W32(esp, 0xd8dcadu); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* d8dcad: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8dcb2: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8dcb5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8dcb7: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* d8dcb9: je 0xd8dcd0 */
  if (zf) goto L_d8dcd0;
L_d8dcbb: /* d8dcbb: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xd8dcc1u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* d8dcc1: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d8dcc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8dcc5: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* d8dcc7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8dcc8: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8dcceu); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8dcce: jmp 0xd8dce3 */
  goto L_d8dce3;
L_d8dcd0: /* d8dcd0: call dword ptr [0xde8c84] */
  esp -= 4; W32(esp, 0xd8dcd6u); SPILL(); call_ind(R32(0xde8c84u)); if (g_unwind) return; /* GDI32!GetStockObject */ RELOAD();
/* d8dcd6: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* d8dcd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8dcda: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* d8dcdc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8dcdd: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8dce3u); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_d8dce3: /* d8dce3: mov eax, dword ptr [0xde88a4] */
  eax = R32((uint32_t)(0xde88a4u));
/* d8dce8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d8dcea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d8dcec: push 0xde1db0 */
  { uint32_t v = 0xde1db0u; esp -= 4; W32(esp, v); }
/* d8dcf1: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* d8dcf3: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xd8dcf5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8dcf5: mov ecx, eax */
  ecx = eax;
/* d8dcf7: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* d8dcfa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8dcfc: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d8dd00: je 0xd8dd13 */
  if (zf) goto L_d8dd13;
L_d8dd02: /* d8dd02: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8dd04: push 0x384 */
  { uint32_t v = 0x384u; esp -= 4; W32(esp, v); }
/* d8dd09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8dd0a: call 0xd810d7 */
  esp -= 4; W32(esp, 0xd8dd0fu); SPILL(); f_d810d7(); if (g_unwind) return; RELOAD();
/* d8dd0f: mov ecx, eax */
  ecx = eax;
/* d8dd11: jmp 0xd8dd15 */
  goto L_d8dd15;
L_d8dd13: /* d8dd13: xor ecx, ecx */
  ecx = 0;
L_d8dd15: /* d8dd15: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8dd19: mov dword ptr [esi + 0x84], ecx */
  W32((uint32_t)(esi + 0x84u), ecx);
/* d8dd1f: call 0xd81a00 */
  esp -= 4; W32(esp, 0xd8dd24u); SPILL(); f_d81a00(); if (g_unwind) return; RELOAD();
/* d8dd24: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8dd27: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8dd28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8dd29: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8dd30: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8dd31: mov esp, ebp */
  esp = ebp;
/* d8dd33: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8dd34: ret  */
  esp += 4; SPILL(); return;
}

void f_d8dd35(void) {
  LOAD_REGS();
L_d8dd35: /* d8dd35: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d8dd38: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8dd3d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8dd40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8dd41: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8dd44: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8dd49u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8dd49(); return;
}

void f_d8dd49(void) {
  LOAD_REGS();
L_d8dd49: /* d8dd49: push 0xdc0a60 */
  { uint32_t v = 0xdc0a60u; esp -= 4; W32(esp, v); }
/* d8dd4e: push 0xde1794 */
  { uint32_t v = 0xde1794u; esp -= 4; W32(esp, v); }
/* d8dd53: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8dd59u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8dd59: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8dd5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8dd5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8dd60: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8dd65u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8dd65: guest_badaddr(0xd8dd65); return;
}

void f_d8ddd0(void) {
  LOAD_REGS();
L_d8ddd0: /* d8ddd0: add ecx, 0x290 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x290u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d8ddd6: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd8dddcu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d8dddc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8dddd: call dword ptr [0xde8908] */
  esp -= 4; W32(esp, 0xd8dde3u); SPILL(); f_4e15eb(); if (g_unwind) return; /* Core!?appClipboardCopy@@YAXPBG@Z */ RELOAD();
/* d8dde3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d8dde4: ret  */
  esp += 4; SPILL(); return;
}

void f_d8de00(void) {
  LOAD_REGS();
L_d8de00: /* d8de00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8de02: push 0xdb9105 */
  { uint32_t v = 0xdb9105u; esp -= 4; W32(esp, v); }
/* d8de07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8de0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8de0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8de15: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8de18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8de19: mov esi, ecx */
  esi = ecx;
/* d8de1b: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* d8de1f: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* d8de27: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xd8de2du); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* d8de2d: cmp word ptr [esi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* d8de31: mov dword ptr [esp + 0x4c], 1 */
  W32((uint32_t)(esp + 0x4cu), 0x1u);
/* d8de39: je 0xd8df28 */
  if (zf) goto L_d8df28;
L_d8de3f: /* d8de3f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8de40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8de41: mov eax, esi */
  eax = esi;
/* d8de43: mov edi, esi */
  edi = esi;
/* d8de45: mov esi, dword ptr [0xde88f4] */
  esi = R32((uint32_t)(0xde88f4u));
/* d8de4b: mov ebx, 2 */
  ebx = 0x2u;
L_d8de50: /* d8de50: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* d8de53: cmp ax, 0x61 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* d8de57: jb 0xd8de5f */
  if (cf) goto L_d8de5f;
L_d8de59: /* d8de59: cmp ax, 0x7a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d8de5d: jbe 0xd8de77 */
  if ((cf | zf)) goto L_d8de77;
L_d8de5f: /* d8de5f: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* d8de63: jb 0xd8de6b */
  if (cf) goto L_d8de6b;
L_d8de65: /* d8de65: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d8de69: jbe 0xd8de77 */
  if ((cf | zf)) goto L_d8de77;
L_d8de6b: /* d8de6b: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* d8de6f: jb 0xd8dec2 */
  if (cf) goto L_d8dec2;
L_d8de71: /* d8de71: cmp ax, 0x39 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d8de75: ja 0xd8dec2 */
  if ((!cf && !zf)) goto L_d8dec2;
L_d8de77: /* d8de77: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* d8de7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8de7b: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* d8de7f: push 0xde1f54 */
  { uint32_t v = 0xde1f54u; esp -= 4; W32(esp, v); }
/* d8de84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8de85: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd8de87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8de87: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8de8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8de8b: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* d8de8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8de90: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* d8de94: mov byte ptr [esp + 0x5c], bl */
  W8((uint32_t)(esp + 0x5cu), (ebx & 0xffu));
/* d8de98: call dword ptr [0xde890c] */
  esp -= 4; W32(esp, 0xd8de9eu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* d8de9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8de9f: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d8dea3: mov byte ptr [esp + 0x58], 3 */
  W8((uint32_t)(esp + 0x58u), 0x3u);
/* d8dea8: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd8deaeu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d8deae: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* d8deb2: mov byte ptr [esp + 0x54], bl */
  W8((uint32_t)(esp + 0x54u), (ebx & 0xffu));
/* d8deb6: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd8debcu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d8debc: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* d8dec0: jmp 0xd8df0d */
  goto L_d8df0d;
L_d8dec2: /* d8dec2: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* d8dec5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8dec6: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* d8deca: push 0xde1f5c */
  { uint32_t v = 0xde1f5cu; esp -= 4; W32(esp, v); }
/* d8decf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8ded0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd8ded2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8ded2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8ded5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ded6: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* d8deda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8dedb: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* d8dedf: mov byte ptr [esp + 0x5c], 4 */
  W8((uint32_t)(esp + 0x5cu), 0x4u);
/* d8dee4: call dword ptr [0xde890c] */
  esp -= 4; W32(esp, 0xd8deeau); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* d8deea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8deeb: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d8deef: mov byte ptr [esp + 0x58], 5 */
  W8((uint32_t)(esp + 0x58u), 0x5u);
/* d8def4: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd8defau); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d8defa: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* d8defe: mov byte ptr [esp + 0x54], 4 */
  W8((uint32_t)(esp + 0x54u), 0x4u);
/* d8df03: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd8df09u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d8df09: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
L_d8df0d: /* d8df0d: mov byte ptr [esp + 0x54], 1 */
  W8((uint32_t)(esp + 0x54u), 0x1u);
/* d8df12: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd8df18u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d8df18: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d8df1a: cmp word ptr [edi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* d8df1e: mov eax, edi */
  eax = edi;
/* d8df20: jne 0xd8de50 */
  if (!zf) goto L_d8de50;
L_d8df26: /* d8df26: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8df27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_d8df28: /* d8df28: mov esi, dword ptr [esp + 0x54] */
  esi = R32((uint32_t)(esp + 0x54u));
/* d8df2c: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* d8df30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8df31: mov ecx, esi */
  ecx = esi;
/* d8df33: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xd8df39u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* d8df39: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* d8df3d: mov dword ptr [esp + 4], 1 */
  W32((uint32_t)(esp + 0x4u), 0x1u);
/* d8df45: mov byte ptr [esp + 0x4c], 0 */
  W8((uint32_t)(esp + 0x4cu), 0x0u);
/* d8df4a: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd8df50u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d8df50: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* d8df54: mov eax, esi */
  eax = esi;
/* d8df56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8df57: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8df5e: add esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8df61: ret  */
  esp += 4; SPILL(); return;
}

void f_d8dfd0(void) {
  LOAD_REGS();
L_d8dfd0: /* d8dfd0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8dfd2: push 0xdb9142 */
  { uint32_t v = 0xdb9142u; esp -= 4; W32(esp, v); }
/* d8dfd7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8dfdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8dfde: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8dfe5: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8dfe8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8dfe9: mov esi, ecx */
  esi = ecx;
/* d8dfeb: lea ecx, [esi + 0x290] */
  ecx = (uint32_t)(esi + 0x290u);
/* d8dff1: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd8dff7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d8dff7: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d8dffb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8dffc: mov ecx, eax */
  ecx = eax;
/* d8dffe: call 0xd8de00 */
  esp -= 4; W32(esp, 0xd8e003u); SPILL(); f_d8de00(); if (g_unwind) return; RELOAD();
/* d8e003: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8e006: mov ecx, eax */
  ecx = eax;
/* d8e008: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* d8e010: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd8e016u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d8e016: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e017: push 0x8b2 */
  { uint32_t v = 0x8b2u; esp -= 4; W32(esp, v); }
/* d8e01c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8e01e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8e020: push 0xde1f6c */
  { uint32_t v = 0xde1f6cu; esp -= 4; W32(esp, v); }
/* d8e025: push 0xde1f7c */
  { uint32_t v = 0xde1f7cu; esp -= 4; W32(esp, v); }
/* d8e02a: push 0xde1f98 */
  { uint32_t v = 0xde1f98u; esp -= 4; W32(esp, v); }
/* d8e02f: call dword ptr [0xde8914] */
  esp -= 4; W32(esp, 0xd8e035u); SPILL(); f_4e43db(); if (g_unwind) return; /* Core!?Localize@@YAPBGPBG000H@Z */ RELOAD();
/* d8e035: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8e038: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e039: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* d8e03d: push 0xde1fbc */
  { uint32_t v = 0xde1fbcu; esp -= 4; W32(esp, v); }
/* d8e042: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8e043: call dword ptr [0xde88f4] */
  esp -= 4; W32(esp, 0xd8e049u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* d8e049: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8e04c: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d8e050: mov byte ptr [esp + 0x24], 2 */
  W8((uint32_t)(esp + 0x24u), 0x2u);
/* d8e055: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd8e05bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d8e05b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8e05d: push 0xde4f48 */
  { uint32_t v = 0xde4f48u; esp -= 4; W32(esp, v); }
/* d8e062: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* d8e066: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd8e06cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d8e06c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e06d: call dword ptr [0xde8910] */
  esp -= 4; W32(esp, 0xd8e073u); SPILL(); f_4e31b6(); if (g_unwind) return; /* Core!?appLaunchURL@@YAXPBG0PAVFString@@@Z */ RELOAD();
/* d8e073: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8e076: mov ecx, esi */
  ecx = esi;
/* d8e078: call 0xd81a82 */
  esp -= 4; W32(esp, 0xd8e07du); SPILL(); f_d81a82(); if (g_unwind) return; RELOAD();
/* d8e07d: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* d8e081: mov dword ptr [esp + 0x24], 0xffffffff */
  W32((uint32_t)(esp + 0x24u), 0xffffffffu);
/* d8e089: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd8e08fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d8e08f: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d8e093: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8e094: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8e09b: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8e09e: ret  */
  esp += 4; SPILL(); return;
}

void f_d8e0e0(void) {
  LOAD_REGS();
L_d8e0e0: /* d8e0e0: ret  */
  esp += 4; SPILL(); return;
}

void f_d8e100(void) {
  LOAD_REGS();
L_d8e100: /* d8e100: xor eax, eax */
  eax = 0;
/* d8e102: ret  */
  esp += 4; SPILL(); return;
}

void f_d8e120(void) {
  LOAD_REGS();
L_d8e120: /* d8e120: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8e122: push 0xde1fec */
  { uint32_t v = 0xde1fecu; esp -= 4; W32(esp, v); }
/* d8e127: push 0xde1ffc */
  { uint32_t v = 0xde1ffcu; esp -= 4; W32(esp, v); }
/* d8e12c: call dword ptr [0xde8918] */
  esp -= 4; W32(esp, 0xd8e132u); SPILL(); f_4e3242(); if (g_unwind) return; /* Core!?LocalizeGeneral@@YAPBGPBDPBG1@Z */ RELOAD();
/* d8e132: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8e135: ret  */
  esp += 4; SPILL(); return;
}

void f_d8e150(void) {
  LOAD_REGS();
L_d8e150: /* d8e150: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8e152: push 0xde2008 */
  { uint32_t v = 0xde2008u; esp -= 4; W32(esp, v); }
/* d8e157: push 0xde2018 */
  { uint32_t v = 0xde2018u; esp -= 4; W32(esp, v); }
/* d8e15c: call dword ptr [0xde8918] */
  esp -= 4; W32(esp, 0xd8e162u); SPILL(); f_4e3242(); if (g_unwind) return; /* Core!?LocalizeGeneral@@YAPBGPBDPBG1@Z */ RELOAD();
/* d8e162: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8e165: ret  */
  esp += 4; SPILL(); return;
}

void f_d8e180(void) {
  LOAD_REGS();
L_d8e180: /* d8e180: xor eax, eax */
  eax = 0;
/* d8e182: ret  */
  esp += 4; SPILL(); return;
}

void f_d8e1a0(void) {
  LOAD_REGS();
L_d8e1a0: /* d8e1a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8e1a2: push 0xde2024 */
  { uint32_t v = 0xde2024u; esp -= 4; W32(esp, v); }
/* d8e1a7: push 0xde2034 */
  { uint32_t v = 0xde2034u; esp -= 4; W32(esp, v); }
/* d8e1ac: call dword ptr [0xde8918] */
  esp -= 4; W32(esp, 0xd8e1b2u); SPILL(); f_4e3242(); if (g_unwind) return; /* Core!?LocalizeGeneral@@YAPBGPBDPBG1@Z */ RELOAD();
/* d8e1b2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8e1b5: ret  */
  esp += 4; SPILL(); return;
}

void f_d8e1d0(void) {
  LOAD_REGS();
L_d8e1d0: /* d8e1d0: mov eax, 1 */
  eax = 0x1u;
/* d8e1d5: ret  */
  esp += 4; SPILL(); return;
}

void f_d8e1f0(void) {
  LOAD_REGS();
L_d8e1f0: /* d8e1f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8e1f1: mov ebp, esp */
  ebp = esp;
/* d8e1f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8e1f5: push 0xdb9160 */
  { uint32_t v = 0xdb9160u; esp -= 4; W32(esp, v); }
/* d8e1fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8e200: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e201: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8e208: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8e20b: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* d8e20e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8e20f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8e210: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8e211: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8e214: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8e216: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8e21d: call 0xd812df */
  esp -= 4; W32(esp, 0xd8e222u); SPILL(); f_d812df(); if (g_unwind) return; RELOAD();
/* d8e222: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8e225: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8e226: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8e227: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8e22e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8e22f: mov esp, ebp */
  esp = ebp;
/* d8e231: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8e232: ret  */
  esp += 4; SPILL(); return;
}

void f_d8e233(void) {
  LOAD_REGS();
L_d8e233: /* d8e233: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8e236: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8e23b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8e23e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8e23f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8e242: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8e247u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8e247(); return;
}

void f_d8e247(void) {
  LOAD_REGS();
L_d8e247: /* d8e247: push 0xdc0aa0 */
  { uint32_t v = 0xdc0aa0u; esp -= 4; W32(esp, v); }
/* d8e24c: push 0xde2044 */
  { uint32_t v = 0xde2044u; esp -= 4; W32(esp, v); }
/* d8e251: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8e257u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8e257: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8e25a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8e25c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8e25e: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8e263u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8e263: guest_badaddr(0xd8e263); return;
}

void f_d8e290(void) {
  LOAD_REGS();
L_d8e290: /* d8e290: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8e291: mov ebp, esp */
  ebp = esp;
/* d8e293: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8e295: push 0xdb9170 */
  { uint32_t v = 0xdb9170u; esp -= 4; W32(esp, v); }
/* d8e29a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8e2a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e2a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8e2a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8e2ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8e2ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8e2ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8e2ae: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8e2b1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8e2b3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8e2ba: call 0xd812df */
  esp -= 4; W32(esp, 0xd8e2bfu); SPILL(); f_d812df(); if (g_unwind) return; RELOAD();
/* d8e2bf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8e2c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8e2c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8e2c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8e2cb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8e2cc: mov esp, ebp */
  esp = ebp;
/* d8e2ce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8e2cf: ret  */
  esp += 4; SPILL(); return;
}

void f_d8e2d0(void) {
  LOAD_REGS();
L_d8e2d0: /* d8e2d0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8e2d3: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8e2d8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8e2db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8e2dc: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8e2df: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8e2e4u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8e2e4(); return;
}

void f_d8e2e4(void) {
  LOAD_REGS();
L_d8e2e4: /* d8e2e4: push 0xdc0ad4 */
  { uint32_t v = 0xdc0ad4u; esp -= 4; W32(esp, v); }
/* d8e2e9: push 0xde2090 */
  { uint32_t v = 0xde2090u; esp -= 4; W32(esp, v); }
/* d8e2ee: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8e2f4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8e2f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8e2f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8e2f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8e2fb: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8e300u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8e300: guest_badaddr(0xd8e300); return;
}

void f_d8e330(void) {
  LOAD_REGS();
L_d8e330: /* d8e330: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8e331: mov esi, ecx */
  esi = ecx;
/* d8e333: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8e336: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8e337: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* d8e33b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8e33d: jl 0xd8e357 */
  if ((sf != of)) goto L_d8e357;
L_d8e33f: /* d8e33f: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* d8e344: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8e349: push 0xde2114 */
  { uint32_t v = 0xde2114u; esp -= 4; W32(esp, v); }
/* d8e34e: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8e354u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8e354: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8e357: /* d8e357: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8e35a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d8e35c: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d8e35e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8e35f: lea eax, [ecx + eax*4 - 4] */
  eax = (uint32_t)(ecx + eax*4 + 0xfffffffcu);
/* d8e363: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8e364: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8e380(void) {
  LOAD_REGS();
L_d8e380: /* d8e380: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d8e384: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d8e386: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e387: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd8e38du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d8e38d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8e3a0(void) {
  LOAD_REGS();
L_d8e3a0: /* d8e3a0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d8e3a2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d8e3a6: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* d8e3a9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d8e3c0(void) {
  LOAD_REGS();
L_d8e3c0: /* d8e3c0: mov eax, 1 */
  eax = 0x1u;
/* d8e3c5: ret  */
  esp += 4; SPILL(); return;
}

void f_d8e3e0(void) {
  LOAD_REGS();
L_d8e3e0: /* d8e3e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8e3e1: mov ebp, esp */
  ebp = esp;
/* d8e3e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8e3e5: push 0xdb9189 */
  { uint32_t v = 0xdb9189u; esp -= 4; W32(esp, v); }
/* d8e3ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8e3f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e3f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8e3f8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8e3fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8e3fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8e3fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8e3fe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8e401: mov esi, ecx */
  esi = ecx;
/* d8e403: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8e40a: call 0xd81492 */
  esp -= 4; W32(esp, 0xd8e40fu); SPILL(); f_d81492(); if (g_unwind) return; RELOAD();
/* d8e40f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d8e412: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e413: call dword ptr [0xde8ed0] */
  esp -= 4; W32(esp, 0xd8e419u); SPILL(); call_ind(R32(0xde8ed0u)); if (g_unwind) return; /* USER32!GetDC */ RELOAD();
/* d8e419: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d8e41c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e41d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8e41e: call dword ptr [0xde8ed4] */
  esp -= 4; W32(esp, 0xd8e424u); SPILL(); call_ind(R32(0xde8ed4u)); if (g_unwind) return; /* USER32!ReleaseDC */ RELOAD();
/* d8e424: mov edx, dword ptr [0xde51ac] */
  edx = R32((uint32_t)(0xde51acu));
/* d8e42a: lea ebx, [esi + 0x3c] */
  ebx = (uint32_t)(esi + 0x3cu);
/* d8e42d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8e42e: mov ecx, ebx */
  ecx = ebx;
/* d8e430: call 0xd81ce4 */
  esp -= 4; W32(esp, 0xd8e435u); SPILL(); f_d81ce4(); if (g_unwind) return; RELOAD();
/* d8e435: lea ecx, [esi + 0x284] */
  ecx = (uint32_t)(esi + 0x284u);
/* d8e43b: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd8e441u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d8e441: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d8e443: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e444: mov ecx, esi */
  ecx = esi;
/* d8e446: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0xd8e449u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8e449: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d8e44c: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xd8e452u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* d8e452: mov eax, dword ptr [0xde8930] */
  eax = R32((uint32_t)(0xde8930u));
/* d8e457: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e458: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d8e45b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d8e45f: call dword ptr [0xde88e8] */
  esp -= 4; W32(esp, 0xd8e465u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* d8e465: push 0xde1ee8 */
  { uint32_t v = 0xde1ee8u; esp -= 4; W32(esp, v); }
/* d8e46a: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d8e46d: call dword ptr [0xde892c] */
  esp -= 4; W32(esp, 0xd8e473u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* d8e473: push 0xde1ef4 */
  { uint32_t v = 0xde1ef4u; esp -= 4; W32(esp, v); }
/* d8e478: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d8e47b: call dword ptr [0xde892c] */
  esp -= 4; W32(esp, 0xd8e481u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* d8e481: mov ecx, dword ptr [0xde8928] */
  ecx = R32((uint32_t)(0xde8928u));
/* d8e487: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8e488: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d8e48b: call dword ptr [0xde892c] */
  esp -= 4; W32(esp, 0xd8e491u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* d8e491: push 0xde1f00 */
  { uint32_t v = 0xde1f00u; esp -= 4; W32(esp, v); }
/* d8e496: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d8e499: call dword ptr [0xde892c] */
  esp -= 4; W32(esp, 0xd8e49fu); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* d8e49f: push 0xde1f08 */
  { uint32_t v = 0xde1f08u; esp -= 4; W32(esp, v); }
/* d8e4a4: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d8e4a7: call dword ptr [0xde892c] */
  esp -= 4; W32(esp, 0xd8e4adu); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* d8e4ad: mov edx, dword ptr [0xde8924] */
  edx = R32((uint32_t)(0xde8924u));
/* d8e4b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8e4b4: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d8e4b7: call dword ptr [0xde892c] */
  esp -= 4; W32(esp, 0xd8e4bdu); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* d8e4bd: push 0xde1f14 */
  { uint32_t v = 0xde1f14u; esp -= 4; W32(esp, v); }
/* d8e4c2: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d8e4c5: call dword ptr [0xde892c] */
  esp -= 4; W32(esp, 0xd8e4cbu); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* d8e4cb: push 0xde1f1c */
  { uint32_t v = 0xde1f1cu; esp -= 4; W32(esp, v); }
/* d8e4d0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d8e4d3: call dword ptr [0xde892c] */
  esp -= 4; W32(esp, 0xd8e4d9u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* d8e4d9: mov eax, dword ptr [0xde8920] */
  eax = R32((uint32_t)(0xde8920u));
/* d8e4de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e4df: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d8e4e2: call dword ptr [0xde892c] */
  esp -= 4; W32(esp, 0xd8e4e8u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* d8e4e8: push 0xde1f2c */
  { uint32_t v = 0xde1f2cu; esp -= 4; W32(esp, v); }
/* d8e4ed: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d8e4f0: call dword ptr [0xde892c] */
  esp -= 4; W32(esp, 0xd8e4f6u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* d8e4f6: push 0xde1f34 */
  { uint32_t v = 0xde1f34u; esp -= 4; W32(esp, v); }
/* d8e4fb: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d8e4fe: call dword ptr [0xde892c] */
  esp -= 4; W32(esp, 0xd8e504u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* d8e504: lea edi, [esi + 0x290] */
  edi = (uint32_t)(esi + 0x290u);
/* d8e50a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8e50b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d8e50e: call dword ptr [0xde891c] */
  esp -= 4; W32(esp, 0xd8e514u); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d8e514: push 0xde1f3c */
  { uint32_t v = 0xde1f3cu; esp -= 4; W32(esp, v); }
/* d8e519: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d8e51c: call dword ptr [0xde892c] */
  esp -= 4; W32(esp, 0xd8e522u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* d8e522: push 0xde1f44 */
  { uint32_t v = 0xde1f44u; esp -= 4; W32(esp, v); }
/* d8e527: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d8e52a: call dword ptr [0xde892c] */
  esp -= 4; W32(esp, 0xd8e530u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* d8e530: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d8e533: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8e534: mov ecx, edi */
  ecx = edi;
/* d8e536: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd8e53cu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d8e53c: mov ecx, edi */
  ecx = edi;
/* d8e53e: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd8e544u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d8e544: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* d8e546: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e547: mov ecx, ebx */
  ecx = ebx;
/* d8e549: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0xd8e54cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8e54c: mov esi, dword ptr [esi + 0xb4] */
  esi = R32((uint32_t)(esi + 0xb4u));
/* d8e552: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8e553: call dword ptr [0xde8ed8] */
  esp -= 4; W32(esp, 0xd8e559u); SPILL(); call_ind(R32(0xde8ed8u)); if (g_unwind) return; /* USER32!SetFocus */ RELOAD();
/* d8e559: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* d8e55b: call dword ptr [0xde8edc] */
  esp -= 4; W32(esp, 0xd8e561u); SPILL(); call_ind(R32(0xde8edcu)); if (g_unwind) return; /* USER32!MessageBeep */ RELOAD();
/* d8e561: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d8e564: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8e568: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd8e56eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d8e56e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8e571: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8e572: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8e573: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8e57a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8e57b: mov esp, ebp */
  esp = ebp;
/* d8e57d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8e57e: ret  */
  esp += 4; SPILL(); return;
}

void f_d8e57f(void) {
  LOAD_REGS();
L_d8e57f: /* d8e57f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8e582: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8e587: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8e58a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8e58b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8e58e: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8e593u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8e593(); return;
}

void f_d8e593(void) {
  LOAD_REGS();
L_d8e593: /* d8e593: push 0xdc0b10 */
  { uint32_t v = 0xdc0b10u; esp -= 4; W32(esp, v); }
/* d8e598: push 0xde1f4c */
  { uint32_t v = 0xde1f4cu; esp -= 4; W32(esp, v); }
/* d8e59d: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8e5a3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8e5a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8e5a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8e5a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8e5aa: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8e5afu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8e5af: guest_badaddr(0xd8e5af); return;
}

void f_d8e630(void) {
  LOAD_REGS();
L_d8e630: /* d8e630: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8e631: mov ebp, esp */
  ebp = esp;
/* d8e633: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8e635: push 0xdb91a0 */
  { uint32_t v = 0xdb91a0u; esp -= 4; W32(esp, v); }
/* d8e63a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8e640: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e641: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8e648: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8e64b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8e64c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8e64d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8e64e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8e651: mov esi, ecx */
  esi = ecx;
/* d8e653: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8e65a: call 0xd81492 */
  esp -= 4; W32(esp, 0xd8e65fu); SPILL(); f_d81492(); if (g_unwind) return; RELOAD();
/* d8e65f: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d8e664: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d8e667: je 0xd8e6a6 */
  if (zf) goto L_d8e6a6;
L_d8e669: /* d8e669: mov ecx, dword ptr [0xde8934] */
  ecx = R32((uint32_t)(0xde8934u));
/* d8e66f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d8e671: mov ecx, dword ptr [0xde5034] */
  ecx = R32((uint32_t)(0xde5034u));
/* d8e677: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* d8e679: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* d8e67b: and edx, 0x6ed4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6ed4u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* d8e681: add edx, 0x80 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d8e687: movzx eax, dx */
  eax = (uint32_t)((edx & 0xffffu));
/* d8e68a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e68b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8e68c: call dword ptr [0xde8e44] */
  esp -= 4; W32(esp, 0xd8e692u); SPILL(); call_ind(R32(0xde8e44u)); if (g_unwind) return; /* USER32!LoadIconW */ RELOAD();
/* d8e692: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d8e695: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e696: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8e698: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* d8e69d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8e69e: call dword ptr [0xde8f70] */
  esp -= 4; W32(esp, 0xd8e6a4u); SPILL(); call_ind(R32(0xde8f70u)); if (g_unwind) return; /* USER32!SendMessageW */ RELOAD();
/* d8e6a4: jmp 0xd8e6df */
  goto L_d8e6df;
L_d8e6a6: /* d8e6a6: mov edx, dword ptr [0xde8934] */
  edx = R32((uint32_t)(0xde8934u));
/* d8e6ac: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* d8e6ae: mov edx, dword ptr [0xde5034] */
  edx = R32((uint32_t)(0xde5034u));
/* d8e6b4: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d8e6b6: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d8e6b8: and eax, 0x6ed4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6ed4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d8e6bd: add eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d8e6c2: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* d8e6c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8e6c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8e6c7: call dword ptr [0xde8ecc] */
  esp -= 4; W32(esp, 0xd8e6cdu); SPILL(); call_ind(R32(0xde8eccu)); if (g_unwind) return; /* USER32!LoadIconA */ RELOAD();
/* d8e6cd: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d8e6d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e6d1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8e6d3: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* d8e6d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8e6d9: call dword ptr [0xde8f30] */
  esp -= 4; W32(esp, 0xd8e6dfu); SPILL(); call_ind(R32(0xde8f30u)); if (g_unwind) return; /* USER32!SendMessageA */ RELOAD();
L_d8e6df: /* d8e6df: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d8e6e1: mov ecx, esi */
  ecx = esi;
/* d8e6e3: call dword ptr [eax + 0xf4] */
  { uint32_t t = R32((uint32_t)(eax + 0xf4u)); esp -= 4; W32(esp, 0xd8e6e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8e6e9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8e6ec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8e6ed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8e6ee: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8e6f5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8e6f6: mov esp, ebp */
  esp = ebp;
/* d8e6f8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8e6f9: ret  */
  esp += 4; SPILL(); return;
}

void f_d8e6fa(void) {
  LOAD_REGS();
L_d8e6fa: /* d8e6fa: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8e6fd: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8e702: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d8e705: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d8e706: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d8e709: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8e70eu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8e70e(); return;
}

void f_d8e70e(void) {
  LOAD_REGS();
L_d8e70e: /* d8e70e: push 0xdc0b58 */
  { uint32_t v = 0xdc0b58u; esp -= 4; W32(esp, v); }
/* d8e713: push 0xde204c */
  { uint32_t v = 0xde204cu; esp -= 4; W32(esp, v); }
/* d8e718: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8e71eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8e71e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8e721: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8e723: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8e725: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8e72au); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8e72a: guest_badaddr(0xd8e72a); return;
}

void f_d8e770(void) {
  LOAD_REGS();
L_d8e770: /* d8e770: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8e771: mov ebp, esp */
  ebp = esp;
/* d8e773: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8e775: push 0xdb91b0 */
  { uint32_t v = 0xdb91b0u; esp -= 4; W32(esp, v); }
/* d8e77a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8e780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e781: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8e788: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8e78b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8e78c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8e78d: mov esi, ecx */
  esi = ecx;
/* d8e78f: mov eax, dword ptr [esi + 0x2f0] */
  eax = R32((uint32_t)(esi + 0x2f0u));
/* d8e795: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8e797: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8e798: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8e79b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8e7a2: je 0xd8e8a1 */
  if (zf) goto L_d8e8a1;
L_d8e7a8: /* d8e7a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d8e7aa: jg 0xd8e7c4 */
  if ((!zf && sf == of)) goto L_d8e7c4;
L_d8e7ac: /* d8e7ac: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* d8e7b1: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8e7b6: push 0xde2114 */
  { uint32_t v = 0xde2114u; esp -= 4; W32(esp, v); }
/* d8e7bb: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8e7c1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8e7c1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8e7c4: /* d8e7c4: mov eax, dword ptr [esi + 0x2f0] */
  eax = R32((uint32_t)(esi + 0x2f0u));
/* d8e7ca: mov ecx, dword ptr [esi + 0x2ec] */
  ecx = R32((uint32_t)(esi + 0x2ecu));
/* d8e7d0: mov edi, dword ptr [ecx + eax*4 - 4] */
  edi = R32((uint32_t)(ecx + eax*4 + 0xfffffffcu));
/* d8e7d4: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* d8e7d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8e7d9: jne 0xd8e7e9 */
  if (!zf) goto L_d8e7e9;
L_d8e7db: /* d8e7db: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8e7dd: push 0x425 */
  { uint32_t v = 0x425u; esp -= 4; W32(esp, v); }
/* d8e7e2: mov ecx, edi */
  ecx = edi;
/* d8e7e4: call 0xd81456 */
  esp -= 4; W32(esp, 0xd8e7e9u); SPILL(); f_d81456(); if (g_unwind) return; RELOAD();
L_d8e7e9: /* d8e7e9: cmp dword ptr [esi + 0x2f0], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x2f0u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8e7f0: jle 0xd8e7fe */
  if ((zf || sf != of)) goto L_d8e7fe;
L_d8e7f2: /* d8e7f2: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d8e7f4: mov ecx, edi */
  ecx = edi;
/* d8e7f6: call dword ptr [edx + 0xf8] */
  { uint32_t t = R32((uint32_t)(edx + 0xf8u)); esp -= 4; W32(esp, 0xd8e7fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8e7fc: jmp 0xd8e800 */
  goto L_d8e800;
L_d8e7fe: /* d8e7fe: xor eax, eax */
  eax = 0;
L_d8e800: /* d8e800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e801: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* d8e804: call 0xd8198d */
  esp -= 4; W32(esp, 0xd8e809u); SPILL(); f_d8198d(); if (g_unwind) return; RELOAD();
/* d8e809: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* d8e80b: mov ecx, edi */
  ecx = edi;
/* d8e80d: call dword ptr [eax + 0xfc] */
  { uint32_t t = R32((uint32_t)(eax + 0xfcu)); esp -= 4; W32(esp, 0xd8e813u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8e813: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e814: lea ecx, [esi + 0xd8] */
  ecx = (uint32_t)(esi + 0xd8u);
/* d8e81a: call 0xd8198d */
  esp -= 4; W32(esp, 0xd8e81fu); SPILL(); f_d8198d(); if (g_unwind) return; RELOAD();
/* d8e81f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d8e821: mov ecx, edi */
  ecx = edi;
/* d8e823: call dword ptr [edx + 0x100] */
  { uint32_t t = R32((uint32_t)(edx + 0x100u)); esp -= 4; W32(esp, 0xd8e829u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8e829: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e82a: lea ecx, [esi + 0x174] */
  ecx = (uint32_t)(esi + 0x174u);
/* d8e830: call 0xd8198d */
  esp -= 4; W32(esp, 0xd8e835u); SPILL(); f_d8198d(); if (g_unwind) return; RELOAD();
/* d8e835: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* d8e837: mov ecx, edi */
  ecx = edi;
/* d8e839: call dword ptr [eax + 0x104] */
  { uint32_t t = R32((uint32_t)(eax + 0x104u)); esp -= 4; W32(esp, 0xd8e83fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8e83f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e840: lea ecx, [esi + 0x210] */
  ecx = (uint32_t)(esi + 0x210u);
/* d8e846: call 0xd8198d */
  esp -= 4; W32(esp, 0xd8e84bu); SPILL(); f_d8198d(); if (g_unwind) return; RELOAD();
/* d8e84b: mov eax, dword ptr [esi + 0x2f0] */
  eax = R32((uint32_t)(esi + 0x2f0u));
/* d8e851: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8e854: jle 0xd8e867 */
  if ((zf || sf != of)) goto L_d8e867;
L_d8e856: /* d8e856: mov ecx, dword ptr [esi + 0x2ec] */
  ecx = R32((uint32_t)(esi + 0x2ecu));
/* d8e85c: mov ecx, dword ptr [ecx + eax*4 - 8] */
  ecx = R32((uint32_t)(ecx + eax*4 + 0xfffffff8u));
/* d8e860: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d8e862: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8e864: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xd8e867u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d8e867: /* d8e867: mov eax, dword ptr [esi + 0x2f0] */
  eax = R32((uint32_t)(esi + 0x2f0u));
/* d8e86d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d8e86f: jg 0xd8e889 */
  if ((!zf && sf == of)) goto L_d8e889;
L_d8e871: /* d8e871: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* d8e876: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8e87b: push 0xde2114 */
  { uint32_t v = 0xde2114u; esp -= 4; W32(esp, v); }
/* d8e880: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8e886u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8e886: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8e889: /* d8e889: mov eax, dword ptr [esi + 0x2f0] */
  eax = R32((uint32_t)(esi + 0x2f0u));
/* d8e88f: mov ecx, dword ptr [esi + 0x2ec] */
  ecx = R32((uint32_t)(esi + 0x2ecu));
/* d8e895: mov ecx, dword ptr [ecx + eax*4 - 4] */
  ecx = R32((uint32_t)(ecx + eax*4 + 0xfffffffcu));
/* d8e899: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d8e89b: call dword ptr [edx + 0xf0] */
  { uint32_t t = R32((uint32_t)(edx + 0xf0u)); esp -= 4; W32(esp, 0xd8e8a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d8e8a1: /* d8e8a1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8e8a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8e8a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8e8a6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8e8ad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8e8ae: mov esp, ebp */
  esp = ebp;
/* d8e8b0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8e8b1: ret  */
  esp += 4; SPILL(); return;
}

void f_d8e8b2(void) {
  LOAD_REGS();
L_d8e8b2: /* d8e8b2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8e8b5: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8e8ba: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8e8bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8e8be: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8e8c1: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8e8c6u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8e8c6(); return;
}

void f_d8e8c6(void) {
  LOAD_REGS();
L_d8e8c6: /* d8e8c6: push 0xdc0b9c */
  { uint32_t v = 0xdc0b9cu; esp -= 4; W32(esp, v); }
/* d8e8cb: push 0xde2070 */
  { uint32_t v = 0xde2070u; esp -= 4; W32(esp, v); }
/* d8e8d0: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8e8d6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8e8d6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8e8d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8e8db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8e8dd: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8e8e2u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8e8e2: guest_badaddr(0xd8e8e2); return;
}

void f_d8e950(void) {
  LOAD_REGS();
L_d8e950: /* d8e950: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8e951: mov ebp, esp */
  ebp = esp;
/* d8e953: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8e955: push 0xdb91c0 */
  { uint32_t v = 0xdb91c0u; esp -= 4; W32(esp, v); }
/* d8e95a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8e960: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8e961: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8e968: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8e96b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8e96c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8e96d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8e96e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8e971: mov edi, ecx */
  edi = ecx;
/* d8e973: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8e97a: xor esi, esi */
  esi = 0;
/* d8e97c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_d8e980: /* d8e980: cmp esi, dword ptr [edi + 0x2f0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2f0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d8e986: jge 0xd8e99f */
  if ((sf == of)) goto L_d8e99f;
L_d8e988: /* d8e988: mov eax, dword ptr [edi + 0x2ec] */
  eax = R32((uint32_t)(edi + 0x2ecu));
/* d8e98e: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* d8e991: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8e993: je 0xd8e99c */
  if (zf) goto L_d8e99c;
L_d8e995: /* d8e995: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d8e997: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d8e999: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xd8e99cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d8e99c: /* d8e99c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* d8e99d: jmp 0xd8e980 */
  goto L_d8e980;
L_d8e99f: /* d8e99f: mov ecx, edi */
  ecx = edi;
/* d8e9a1: call 0xd81c58 */
  esp -= 4; W32(esp, 0xd8e9a6u); SPILL(); f_d81c58(); if (g_unwind) return; RELOAD();
/* d8e9a6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8e9a9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8e9aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8e9ab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8e9b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8e9b3: mov esp, ebp */
  esp = ebp;
/* d8e9b5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8e9b6: ret  */
  esp += 4; SPILL(); return;
}

void f_d8e9b7(void) {
  LOAD_REGS();
L_d8e9b7: /* d8e9b7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d8e9ba: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d8e9bf: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d8e9c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d8e9c3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d8e9c6: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8e9cbu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d8e9cb(); return;
}

void f_d8e9cb(void) {
  LOAD_REGS();
L_d8e9cb: /* d8e9cb: push 0xdc0bdc */
  { uint32_t v = 0xdc0bdcu; esp -= 4; W32(esp, v); }
/* d8e9d0: push 0xde2078 */
  { uint32_t v = 0xde2078u; esp -= 4; W32(esp, v); }
/* d8e9d5: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd8e9dbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d8e9db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d8e9de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8e9e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d8e9e2: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd8e9e7u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d8e9e7: guest_badaddr(0xd8e9e7); return;
}

void f_d8ea20(void) {
  LOAD_REGS();
L_d8ea20: /* d8ea20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d8ea21: mov ebp, esp */
  ebp = esp;
/* d8ea23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d8ea25: push 0xdb91d0 */
  { uint32_t v = 0xdb91d0u; esp -= 4; W32(esp, v); }
/* d8ea2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d8ea30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ea31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d8ea38: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d8ea3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d8ea3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d8ea3d: mov esi, ecx */
  esi = ecx;
/* d8ea3f: mov eax, dword ptr [esi + 0x2f0] */
  eax = R32((uint32_t)(esi + 0x2f0u));
/* d8ea45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8ea47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d8ea48: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d8ea4b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d8ea52: je 0xd8ead9 */
  if (zf) goto L_d8ead9;
L_d8ea58: /* d8ea58: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d8ea5a: jg 0xd8ea74 */
  if ((!zf && sf == of)) goto L_d8ea74;
L_d8ea5c: /* d8ea5c: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* d8ea61: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8ea66: push 0xde2114 */
  { uint32_t v = 0xde2114u; esp -= 4; W32(esp, v); }
/* d8ea6b: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8ea71u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8ea71: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8ea74: /* d8ea74: mov eax, dword ptr [esi + 0x2f0] */
  eax = R32((uint32_t)(esi + 0x2f0u));
/* d8ea7a: mov ecx, dword ptr [esi + 0x2ec] */
  ecx = R32((uint32_t)(esi + 0x2ecu));
/* d8ea80: mov ecx, dword ptr [ecx + eax*4 - 4] */
  ecx = R32((uint32_t)(ecx + eax*4 + 0xfffffffcu));
/* d8ea84: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d8ea86: call dword ptr [edx + 0xfc] */
  { uint32_t t = R32((uint32_t)(edx + 0xfcu)); esp -= 4; W32(esp, 0xd8ea8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8ea8c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8ea8e: je 0xd8ead9 */
  if (zf) goto L_d8ead9;
L_d8ea90: /* d8ea90: mov eax, dword ptr [esi + 0x2f0] */
  eax = R32((uint32_t)(esi + 0x2f0u));
/* d8ea96: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d8ea98: jg 0xd8eab2 */
  if ((!zf && sf == of)) goto L_d8eab2;
L_d8ea9a: /* d8ea9a: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* d8ea9f: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d8eaa4: push 0xde2114 */
  { uint32_t v = 0xde2114u; esp -= 4; W32(esp, v); }
/* d8eaa9: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd8eaafu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d8eaaf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d8eab2: /* d8eab2: mov eax, dword ptr [esi + 0x2f0] */
  eax = R32((uint32_t)(esi + 0x2f0u));
/* d8eab8: mov ecx, dword ptr [esi + 0x2ec] */
  ecx = R32((uint32_t)(esi + 0x2ecu));
/* d8eabe: mov ecx, dword ptr [ecx + eax*4 - 4] */
  ecx = R32((uint32_t)(ecx + eax*4 + 0xfffffffcu));
/* d8eac2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d8eac4: call dword ptr [edx + 0xf4] */
  { uint32_t t = R32((uint32_t)(edx + 0xf4u)); esp -= 4; W32(esp, 0xd8eacau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d8eaca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d8eacc: je 0xd8ead9 */
  if (zf) goto L_d8ead9;
L_d8eace: /* d8eace: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d8ead0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d8ead1: mov ecx, esi */
  ecx = esi;
/* d8ead3: call dword ptr [edx + 0xf0] */
  { uint32_t t = R32((uint32_t)(edx + 0xf0u)); esp -= 4; W32(esp, 0xd8ead9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d8ead9: /* d8ead9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d8eadc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d8eadd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d8eade: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d8eae5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d8eae6: mov esp, ebp */
  esp = ebp;
/* d8eae8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d8eae9: ret  */
  esp += 4; SPILL(); return;
}
