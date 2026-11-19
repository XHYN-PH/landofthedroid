#include "recomp.h"
#include "rec_mod.h"

void f_7b0e4b(void) {
  LOAD_REGS();
L_7b0e4b: /* 7b0e4b: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7b0e4e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b0e53: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 7b0e56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b0e57: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 7b0e5a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b0e5fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b0e5f(); return;
}

void f_7b0e5f(void) {
  LOAD_REGS();
L_7b0e5f: /* 7b0e5f: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 7b0e65: push 0xa0cc38 */
  { uint32_t v = 0xa0cc38u; esp -= 4; W32(esp, v); }
/* 7b0e6a: push 0xacf0f0 */
  { uint32_t v = 0xacf0f0u; esp -= 4; W32(esp, v); }
/* 7b0e6f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7b0e71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b0e71: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7b0e74: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7b0e77: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b0e7a: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 7b0e7d: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 7b0e83: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b0e86: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7b0e88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0e89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b0e8b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7b0e8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b0e8d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b0e90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0e91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b0e93: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7b0e95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b0e95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0e96: push 0xacf0f8 */
  { uint32_t v = 0xacf0f8u; esp -= 4; W32(esp, v); }
/* 7b0e9b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7b0e9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b0e9d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b0ea0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b0ea2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b0ea4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b0ea9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b0ea9: guest_badaddr(0x7b0ea9); return;
}

void f_7b0f10(void) {
  LOAD_REGS();
L_7b0f10: /* 7b0f10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b0f11: mov ebp, esp */
  ebp = esp;
/* 7b0f13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b0f15: push 0x9cede0 */
  { uint32_t v = 0x9cede0u; esp -= 4; W32(esp, v); }
/* 7b0f1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b0f20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0f21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b0f28: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b0f2b: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 7b0f30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b0f31: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 7b0f37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b0f38: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7b0f3b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b0f3e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b0f41: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b0f42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b0f43: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b0f46: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b0f49: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 7b0f4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0f4d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b0f52: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7b0f55: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b0f58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b0f59: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b0f60: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b0f63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b0f63: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 7b0f69: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7b0f6b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b0f6d: je 0x7b0f7c */
  if (zf) goto L_7b0f7c;
L_7b0f6f: /* 7b0f6f: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 7b0f74: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7b0f76: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b0f78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0f79: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x7b0f7cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b0f7c: /* 7b0f7c: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7b0f82: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b0f84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b0f86: mov ebx, eax */
  ebx = eax;
/* 7b0f88: jne 0x7b0f8d */
  if (!zf) goto L_7b0f8d;
L_7b0f8a: /* 7b0f8a: lea ebx, [ebp - 0x40] */
  ebx = (uint32_t)(ebp + 0xffffffc0u);
L_7b0f8d: /* 7b0f8d: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7b0f90: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x7b0f96u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 7b0f96: mov edx, dword ptr [0xcfa514] */
  edx = R32((uint32_t)(0xcfa514u));
/* 7b0f9c: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 7b0fa2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b0fa5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b0fa8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b0fab: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b0fac: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b0faf: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 7b0fb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0fb3: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b0fb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b0fb9: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b0fbcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b0fbc: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 7b0fc2: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7b0fc4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b0fc6: je 0x7b0fd5 */
  if (zf) goto L_7b0fd5;
L_7b0fc8: /* 7b0fc8: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 7b0fcd: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7b0fcf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b0fd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b0fd2: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x7b0fd5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b0fd5: /* 7b0fd5: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7b0fdb: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7b0fdd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b0fdf: jne 0x7b0fe4 */
  if (!zf) goto L_7b0fe4;
L_7b0fe1: /* 7b0fe1: lea edi, [ebp - 0x34] */
  edi = (uint32_t)(ebp + 0xffffffccu);
L_7b0fe4: /* 7b0fe4: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b0fe7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b0fe8: mov eax, edx */
  eax = edx;
/* 7b0fea: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7b0fed: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b0ff0: jne 0x7b1008 */
  if (!zf) goto L_7b1008;
L_7b0ff2: /* 7b0ff2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b0ff5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b0ff6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b0ff8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b0ffb: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b1001: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b1002: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b1008u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b1008: /* 7b1008: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7b100f: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7b1012: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7b1019: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7b101c: mov eax, ebx */
  eax = ebx;
/* 7b101e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7b1020: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b1022: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7b1029: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b102c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7b102f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b1031: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7b1034: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b1036: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7b1039: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x7b103fu); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 7b103f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7b1041: mov edx, edi */
  edx = edi;
/* 7b1043: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7b1045: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7b1048: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7b104b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7b104e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b1051: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7b1054: mov eax, dword ptr [ecx + 0x98] */
  eax = R32((uint32_t)(ecx + 0x98u));
/* 7b105a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b105c: je 0x7b10a3 */
  if (zf) goto L_7b10a3;
L_7b105e: /* 7b105e: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 7b1061: lea edx, [ecx + 0x170] */
  edx = (uint32_t)(ecx + 0x170u);
/* 7b1067: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 7b1069: mov eax, ebx */
  eax = ebx;
/* 7b106b: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7b106d: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 7b1070: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7b1073: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7b1076: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7b1079: lea eax, [ecx + 0x17c] */
  eax = (uint32_t)(ecx + 0x17cu);
/* 7b107f: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7b1081: mov edx, edi */
  edx = edi;
/* 7b1083: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 7b1085: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 7b1088: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 7b108b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7b108e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b108f: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7b1092: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b1093: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 7b1096: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b1097: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 7b109e: call 0x6c204a */
  esp -= 4; W32(esp, 0x7b10a3u); SPILL(); f_6c204a(); if (g_unwind) return; RELOAD();
L_7b10a3: /* 7b10a3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b10a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b10a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b10a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b10af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b10b0: mov esp, ebp */
  esp = ebp;
/* 7b10b2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b10b3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b10b6(void) {
  LOAD_REGS();
L_7b10b6: /* 7b10b6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b10b9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b10be: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7b10c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b10c2: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7b10c5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b10cau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b10ca(); return;
}

void f_7b10ca(void) {
  LOAD_REGS();
L_7b10ca: /* 7b10ca: push 0xa0cc70 */
  { uint32_t v = 0xa0cc70u; esp -= 4; W32(esp, v); }
/* 7b10cf: push 0xacf294 */
  { uint32_t v = 0xacf294u; esp -= 4; W32(esp, v); }
/* 7b10d4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b10dau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b10da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b10dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b10df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b10e1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b10e6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b10e6: guest_badaddr(0x7b10e6); return;
}

void f_7b1170(void) {
  LOAD_REGS();
L_7b1170: /* 7b1170: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b1171: mov ebp, esp */
  ebp = esp;
/* 7b1173: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b1175: push 0x9cedf0 */
  { uint32_t v = 0x9cedf0u; esp -= 4; W32(esp, v); }
/* 7b117a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b1180: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b1181: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b1188: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b118b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b118c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b118d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b118e: mov edi, ecx */
  edi = ecx;
/* 7b1190: mov eax, dword ptr [edi + 0x9c] */
  eax = R32((uint32_t)(edi + 0x9cu));
/* 7b1196: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b1198: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b119b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b11a2: je 0x7b138e */
  if (zf) goto L_7b138e;
L_7b11a8: /* 7b11a8: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7b11ab: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b11ad: je 0x7b138e */
  if (zf) goto L_7b138e;
L_7b11b3: /* 7b11b3: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 7b11b8: mov ecx, esi */
  ecx = esi;
/* 7b11ba: mov ebx, esi */
  ebx = esi;
/* 7b11bc: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b11c2u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b11c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b11c4: je 0x7b1335 */
  if (zf) goto L_7b1335;
L_7b11ca: /* 7b11ca: mov eax, dword ptr [0xb7c528] */
  eax = R32((uint32_t)(0xb7c528u));
/* 7b11cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b11d1: jne 0x7b1207 */
  if (!zf) goto L_7b1207;
L_7b11d3: /* 7b11d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b11d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b11d6: mov ecx, esp */
  ecx = esp;
/* 7b11d8: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7b11db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b11dd: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7b11e3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7b11e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b11e5: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 7b11ea: call 0x6c9e99 */
  esp -= 4; W32(esp, 0x7b11efu); SPILL(); f_6c9e99(); if (g_unwind) return; RELOAD();
/* 7b11ef: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 7b11f5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b11f8: push 0xb7c528 */
  { uint32_t v = 0xb7c528u; esp -= 4; W32(esp, v); }
/* 7b11fd: mov dword ptr [0xb7c528], eax */
  W32((uint32_t)(0xb7c528u), eax);
/* 7b1202: call 0x6c1203 */
  esp -= 4; W32(esp, 0x7b1207u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_7b1207: /* 7b1207: mov al, byte ptr [edi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x50u))) & 0xffu);
/* 7b120a: cmp al, byte ptr [0xb7c524] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(0xb7c524u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1210: jne 0x7b121a */
  if (!zf) goto L_7b121a;
L_7b1212: /* 7b1212: cmp esi, dword ptr [0xb7c520] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0xb7c520u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1218: je 0x7b1234 */
  if (zf) goto L_7b1234;
L_7b121a: /* 7b121a: mov ecx, dword ptr [edi + 0x9c] */
  ecx = R32((uint32_t)(edi + 0x9cu));
/* 7b1220: call 0x6c6a00 */
  esp -= 4; W32(esp, 0x7b1225u); SPILL(); f_6c6a00(); if (g_unwind) return; RELOAD();
/* 7b1225: mov cl, byte ptr [edi + 0x50] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x50u))) & 0xffu);
/* 7b1228: mov byte ptr [0xb7c524], cl */
  W8((uint32_t)(0xb7c524u), (ecx & 0xffu));
/* 7b122e: mov dword ptr [0xb7c520], esi */
  W32((uint32_t)(0xb7c520u), esi);
L_7b1234: /* 7b1234: mov edx, dword ptr [0xb7c528] */
  edx = R32((uint32_t)(0xb7c528u));
/* 7b123a: mov dword ptr [edx + 0x38], esi */
  W32((uint32_t)(edx + 0x38u), esi);
/* 7b123d: mov eax, dword ptr [0xb7c528] */
  eax = R32((uint32_t)(0xb7c528u));
/* 7b1242: and dword ptr [eax + 0x40], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 7b1246: mov eax, dword ptr [0xb7c528] */
  eax = R32((uint32_t)(0xb7c528u));
/* 7b124b: and dword ptr [eax + 0x40], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 7b124f: mov eax, dword ptr [0xb7c528] */
  eax = R32((uint32_t)(0xb7c528u));
/* 7b1254: and dword ptr [eax + 0x40], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 7b1258: movzx eax, byte ptr [edi + 0x50] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x50u)));
/* 7b125c: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b125f: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 7b1262: ja 0x7b12fa */
  if ((!cf && !zf)) goto L_7b12fa;
L_7b1268: /* 7b1268: jmp dword ptr [eax*4 + 0x7b13d4] */
  switch (R32((uint32_t)(eax*4 + 0x7b13d4u))) {
    case 0x7b126fu: goto L_7b126f;
    case 0x7b128du: goto L_7b128d;
    case 0x7b1299u: goto L_7b1299;
    case 0x7b12a4u: goto L_7b12a4;
    case 0x7b12c3u: goto L_7b12c3;
    case 0x7b12e1u: goto L_7b12e1;
    default: guest_badjump(0x7b1268, R32((uint32_t)(eax*4 + 0x7b13d4u))); return;
  }
L_7b126f: /* 7b126f: mov eax, dword ptr [0xb7c528] */
  eax = R32((uint32_t)(0xb7c528u));
/* 7b1274: mov byte ptr [eax + 0x3c], 0 */
  W8((uint32_t)(eax + 0x3cu), 0x0u);
/* 7b1278: mov eax, dword ptr [0xb7c528] */
  eax = R32((uint32_t)(0xb7c528u));
/* 7b127d: or dword ptr [eax + 0x40], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 7b1281: mov ecx, dword ptr [0xb7c528] */
  ecx = R32((uint32_t)(0xb7c528u));
/* 7b1287: mov byte ptr [ecx + 0x44], 0x7f */
  W8((uint32_t)(ecx + 0x44u), 0x7fu);
/* 7b128b: jmp 0x7b12f4 */
  goto L_7b12f4;
L_7b128d: /* 7b128d: mov edx, dword ptr [0xb7c528] */
  edx = R32((uint32_t)(0xb7c528u));
/* 7b1293: mov byte ptr [edx + 0x3c], 4 */
  W8((uint32_t)(edx + 0x3cu), 0x4u);
/* 7b1297: jmp 0x7b12eb */
  goto L_7b12eb;
L_7b1299: /* 7b1299: mov eax, dword ptr [0xb7c528] */
  eax = R32((uint32_t)(0xb7c528u));
/* 7b129e: mov byte ptr [eax + 0x3c], 1 */
  W8((uint32_t)(eax + 0x3cu), 0x1u);
/* 7b12a2: jmp 0x7b12eb */
  goto L_7b12eb;
L_7b12a4: /* 7b12a4: mov ecx, dword ptr [0xb7c528] */
  ecx = R32((uint32_t)(0xb7c528u));
/* 7b12aa: mov byte ptr [ecx + 0x3c], 2 */
  W8((uint32_t)(ecx + 0x3cu), 0x2u);
/* 7b12ae: mov eax, dword ptr [0xb7c528] */
  eax = R32((uint32_t)(0xb7c528u));
/* 7b12b3: or dword ptr [eax + 0x40], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 7b12b7: mov edx, dword ptr [0xb7c528] */
  edx = R32((uint32_t)(0xb7c528u));
/* 7b12bd: mov byte ptr [edx + 0x44], 0 */
  W8((uint32_t)(edx + 0x44u), 0x0u);
/* 7b12c1: jmp 0x7b12f4 */
  goto L_7b12f4;
L_7b12c3: /* 7b12c3: mov eax, dword ptr [0xb7c528] */
  eax = R32((uint32_t)(0xb7c528u));
/* 7b12c8: mov byte ptr [eax + 0x3c], 6 */
  W8((uint32_t)(eax + 0x3cu), 0x6u);
/* 7b12cc: mov eax, dword ptr [0xb7c528] */
  eax = R32((uint32_t)(0xb7c528u));
/* 7b12d1: or dword ptr [eax + 0x40], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 7b12d5: mov ecx, dword ptr [0xb7c528] */
  ecx = R32((uint32_t)(0xb7c528u));
/* 7b12db: mov byte ptr [ecx + 0x44], 0 */
  W8((uint32_t)(ecx + 0x44u), 0x0u);
/* 7b12df: jmp 0x7b12f4 */
  goto L_7b12f4;
L_7b12e1: /* 7b12e1: mov edx, dword ptr [0xb7c528] */
  edx = R32((uint32_t)(0xb7c528u));
/* 7b12e7: mov byte ptr [edx + 0x3c], 5 */
  W8((uint32_t)(edx + 0x3cu), 0x5u);
L_7b12eb: /* 7b12eb: mov eax, dword ptr [0xb7c528] */
  eax = R32((uint32_t)(0xb7c528u));
/* 7b12f0: and dword ptr [eax + 0x40], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
L_7b12f4: /* 7b12f4: mov esi, dword ptr [0xb7c528] */
  esi = R32((uint32_t)(0xb7c528u));
L_7b12fa: /* 7b12fa: cmp byte ptr [edi + 0x50], 0xff */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b12fe: je 0x7b1333 */
  if (zf) goto L_7b1333;
L_7b1300: /* 7b1300: push 0xb88550 */
  { uint32_t v = 0xb88550u; esp -= 4; W32(esp, v); }
/* 7b1305: mov ecx, ebx */
  ecx = ebx;
/* 7b1307: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b130du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b130d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b130f: jne 0x7b1333 */
  if (!zf) goto L_7b1333;
L_7b1311: /* 7b1311: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 7b1316: mov ecx, ebx */
  ecx = ebx;
/* 7b1318: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b131eu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b131e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b1320: jne 0x7b1333 */
  if (!zf) goto L_7b1333;
L_7b1322: /* 7b1322: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 7b1327: mov ecx, ebx */
  ecx = ebx;
/* 7b1329: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b132fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b132f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b1331: je 0x7b1335 */
  if (zf) goto L_7b1335;
L_7b1333: /* 7b1333: mov esi, ebx */
  esi = ebx;
L_7b1335: /* 7b1335: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b1336: lea eax, [ebp + 0x30] */
  eax = (uint32_t)(ebp + 0x30u);
/* 7b1339: mov ecx, esp */
  ecx = esp;
/* 7b133b: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7b133e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b133f: call 0x6c576d */
  esp -= 4; W32(esp, 0x7b1344u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 7b1344: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 7b1347: fadd dword ptr [ebp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x28u)));
/* 7b134a: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 7b134d: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 7b1350: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b1351: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7b1354: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b1356: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b1359: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7b135d: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 7b1360: fadd dword ptr [ebp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x24u)));
/* 7b1363: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7b1366: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b1367: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7b136a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7b136d: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* 7b1370: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b1371: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b1374: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7b1378: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 7b137b: fadd dword ptr [ebp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x14u)));
/* 7b137e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7b1381: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b1382: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b1383: mov ecx, dword ptr [edi + 0x9c] */
  ecx = R32((uint32_t)(edi + 0x9cu));
/* 7b1389: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x7b138eu); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
L_7b138e: /* 7b138e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b1391: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b1392: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b1393: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b139a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b139b: mov esp, ebp */
  esp = ebp;
/* 7b139d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b139e: ret 0x48 */
  esp += 76; SPILL(); return;
}

void f_7b13a1(void) {
  LOAD_REGS();
L_7b13a1: /* 7b13a1: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b13a4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b13a9: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7b13ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b13ad: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7b13b0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b13b5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b13b5(); return;
}

void f_7b13b5(void) {
  LOAD_REGS();
L_7b13b5: /* 7b13b5: push 0xa0ccbc */
  { uint32_t v = 0xa0ccbcu; esp -= 4; W32(esp, v); }
/* 7b13ba: push 0xacee20 */
  { uint32_t v = 0xacee20u; esp -= 4; W32(esp, v); }
/* 7b13bf: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b13c5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b13c5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b13c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b13ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b13cc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b13d1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7b13d1: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
/* 7b13d4: outsd dx, dword ptr [esi] */
  guest_unsupported(0x7b13d4); /* outsd dx, dword ptr [esi] */
/* 7b13d5: adc bh, byte ptr [ebx] */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebx)));
  uint32_t cin = cf;
  uint8_t r = (uint8_t)(a + b + cin);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = cin ? ((r) <= (a)) : ((r) < (a));
  ebx = (ebx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 7b13d8: lea edx, [edx] */
  edx = (uint32_t)(edx);
/* 7b13da: jnp 0x7b13dc */
  if (!pf) goto L_7b13dc;
L_7b13dc: /* 7b13dc: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7b13dd: adc bh, byte ptr [ebx] */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebx)));
  uint32_t cin = cf;
  uint8_t r = (uint8_t)(a + b + cin);
  cf = cin ? ((r) <= (a)) : ((r) < (a));
  ebx = (ebx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 7b13e0: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* 7b13e1: adc bh, byte ptr [ebx] */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebx)));
  uint32_t cin = cf;
  uint8_t r = (uint8_t)(a + b + cin);
  ebx = (ebx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 7b13e4: ret  */
  esp += 4; SPILL(); return;
}

void f_7b1490(void) {
  LOAD_REGS();
L_7b1490: /* 7b1490: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7b1494: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b1497: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b1498: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b1499: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b149a: mov esi, dword ptr [ecx + 0x9c] */
  esi = R32((uint32_t)(ecx + 0x9cu));
/* 7b14a0: xor edx, edx */
  edx = 0;
/* 7b14a2: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b14a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b14a5: jne 0x7b14b1 */
  if (!zf) goto L_7b14b1;
L_7b14a7: /* 7b14a7: xor eax, eax */
  eax = 0;
/* 7b14a9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b14aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b14ab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b14ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b14ad: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b14b0: ret  */
  esp += 4; SPILL(); return;
L_7b14b1: /* 7b14b1: cmp word ptr [eax], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b14b4: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 7b14b8: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 7b14bc: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* 7b14c0: je 0x7b18b7 */
  if (zf) goto L_7b18b7;
L_7b14c6: /* 7b14c6: mov ebp, eax */
  ebp = eax;
/* 7b14c8: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 7b14cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7b14d0: /* 7b14d0: mov edi, dword ptr [esp + 0x54] */
  edi = R32((uint32_t)(esp + 0x54u));
/* 7b14d4: mov ebx, dword ptr [edi + 0x54] */
  ebx = R32((uint32_t)(edi + 0x54u));
/* 7b14d7: xor esi, esi */
  esi = 0;
/* 7b14d9: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b14db: mov si, word ptr [ebp] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp))) & 0xffffu);
/* 7b14df: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 7b14e3: jne 0x7b14e9 */
  if (!zf) goto L_7b14e9;
L_7b14e5: /* 7b14e5: mov eax, esi */
  eax = esi;
/* 7b14e7: jmp 0x7b1514 */
  goto L_7b1514;
L_7b14e9: /* 7b14e9: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 7b14ec: movzx ecx, si */
  ecx = (uint32_t)((esi & 0xffffu));
/* 7b14ef: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7b14f0: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7b14f2: mov ecx, dword ptr [edi + 0x4c] */
  ecx = R32((uint32_t)(edi + 0x4cu));
/* 7b14f5: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 7b14f8: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b14fb: je 0x7b150f */
  if (zf) goto L_7b150f;
L_7b14fd: /* 7b14fd: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
L_7b1500: /* 7b1500: cmp word ptr [ecx + eax*8 + 4], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + eax*8 + 0x4u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1505: je 0x7b154a */
  if (zf) goto L_7b154a;
L_7b1507: /* 7b1507: mov eax, dword ptr [ecx + eax*8] */
  eax = R32((uint32_t)(ecx + eax*8));
/* 7b150a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b150d: jne 0x7b1500 */
  if (!zf) goto L_7b1500;
L_7b150f: /* 7b150f: mov eax, 0x20 */
  eax = 0x20u;
L_7b1514: /* 7b1514: cmp dword ptr [esp + 0x7c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x7cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1518: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 7b151b: je 0x7b15ab */
  if (zf) goto L_7b15ab;
L_7b1521: /* 7b1521: cmp dword ptr [esp + 0x18], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1525: je 0x7b155f */
  if (zf) goto L_7b155f;
L_7b1527: /* 7b1527: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1529: mov eax, 0x5f */
  eax = 0x5fu;
/* 7b152e: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 7b1532: je 0x7b155c */
  if (zf) goto L_7b155c;
L_7b1534: /* 7b1534: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* 7b1538: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b1539: lea ecx, [edi + 0x40] */
  ecx = (uint32_t)(edi + 0x40u);
/* 7b153c: call 0x6cae89 */
  esp -= 4; W32(esp, 0x7b1541u); SPILL(); f_6cae89(); if (g_unwind) return; RELOAD();
/* 7b1541: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b1543: je 0x7b1557 */
  if (zf) goto L_7b1557;
L_7b1545: /* 7b1545: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 7b1548: jmp 0x7b155c */
  goto L_7b155c;
L_7b154a: /* 7b154a: lea eax, [ecx + eax*8 + 6] */
  eax = (uint32_t)(ecx + eax*8 + 0x6u);
/* 7b154e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1550: je 0x7b150f */
  if (zf) goto L_7b150f;
L_7b1552: /* 7b1552: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 7b1555: jmp 0x7b1514 */
  goto L_7b1514;
L_7b1557: /* 7b1557: mov eax, 0x20 */
  eax = 0x20u;
L_7b155c: /* 7b155c: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
L_7b155f: /* 7b155f: cmp si, 0x26 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x26u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1563: jne 0x7b15ab */
  if (!zf) goto L_7b15ab;
L_7b1565: /* 7b1565: xor ecx, ecx */
  ecx = 0;
/* 7b1567: mov cx, word ptr [ebp + 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x2u))) & 0xffffu);
/* 7b156b: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 7b156e: je 0x7b18b7 */
  if (zf) goto L_7b18b7;
L_7b1574: /* 7b1574: cmp cx, si */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1577: je 0x7b15ab */
  if (zf) goto L_7b15ab;
L_7b1579: /* 7b1579: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b157b: mov dword ptr [esp + 0x3c], 1 */
  W32((uint32_t)(esp + 0x3cu), 0x1u);
/* 7b1583: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 7b1587: jne 0x7b158d */
  if (!zf) goto L_7b158d;
L_7b1589: /* 7b1589: mov eax, ecx */
  eax = ecx;
/* 7b158b: jmp 0x7b15a8 */
  goto L_7b15a8;
L_7b158d: /* 7b158d: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 7b1591: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b1592: lea ecx, [edi + 0x40] */
  ecx = (uint32_t)(edi + 0x40u);
/* 7b1595: call 0x6cae89 */
  esp -= 4; W32(esp, 0x7b159au); SPILL(); f_6cae89(); if (g_unwind) return; RELOAD();
/* 7b159a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b159c: je 0x7b15a3 */
  if (zf) goto L_7b15a3;
L_7b159e: /* 7b159e: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 7b15a1: jmp 0x7b15a8 */
  goto L_7b15a8;
L_7b15a3: /* 7b15a3: mov eax, 0x20 */
  eax = 0x20u;
L_7b15a8: /* 7b15a8: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
L_7b15ab: /* 7b15ab: cmp eax, dword ptr [edi + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b15ae: jge 0x7b18a0 */
  if ((sf == of)) goto L_7b18a0;
L_7b15b4: /* 7b15b4: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* 7b15b7: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 7b15ba: movzx eax, byte ptr [edx + ecx*4 + 0x10] */
  eax = (uint32_t)(R8((uint32_t)(edx + ecx*4 + 0x10u)));
/* 7b15bf: lea esi, [edx + ecx*4] */
  esi = (uint32_t)(edx + ecx*4);
/* 7b15c2: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 7b15c5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b15c7: jge 0x7b18a0 */
  if ((sf == of)) goto L_7b18a0;
L_7b15cd: /* 7b15cd: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 7b15d0: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 7b15d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b15d5: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 7b15d9: je 0x7b18a0 */
  if (zf) goto L_7b18a0;
L_7b15df: /* 7b15df: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7b15e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b15e5: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 7b15e8: je 0x7b15f4 */
  if (zf) goto L_7b15f4;
L_7b15ea: /* 7b15ea: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* 7b15ee: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b15f0: jg 0x7b15f4 */
  if ((!zf && sf == of)) goto L_7b15f4;
L_7b15f2: /* 7b15f2: mov eax, ecx */
  eax = ecx;
L_7b15f4: /* 7b15f4: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 7b15f8: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7b15fc: mov ebp, dword ptr [esp + 0x78] */
  ebp = R32((uint32_t)(esp + 0x78u));
/* 7b1600: mov ebx, dword ptr [esp + 0x64] */
  ebx = R32((uint32_t)(esp + 0x64u));
/* 7b1604: mov edi, dword ptr [esi + 0xc] */
  edi = R32((uint32_t)(esi + 0xcu));
/* 7b1607: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7b1609: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b160b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7b160d: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 7b1611: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 7b1614: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 7b1618: mov edx, eax */
  edx = eax;
/* 7b161a: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 7b161e: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 7b1622: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 7b1626: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 7b162a: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 7b162e: je 0x7b171f */
  if (zf) goto L_7b171f;
L_7b1634: /* 7b1634: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b1636: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7b1638: mov dword ptr [esp + 0x44], eax */
  W32((uint32_t)(esp + 0x44u), eax);
/* 7b163c: jle 0x7b185c */
  if ((zf || sf != of)) goto L_7b185c;
L_7b1642: /* 7b1642: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 7b1646: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 7b164a: fst dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0);
/* 7b164e: fcomp dword ptr [eax + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(eax + 0x3cu)));
  FPOP();
/* 7b1651: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b1653: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b1656: jp 0x7b185c */
  if (pf) goto L_7b185c;
L_7b165c: /* 7b165c: lea ebp, [edi + ebx] */
  ebp = (uint32_t)(edi + ebx);
/* 7b165f: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7b1661: jle 0x7b185c */
  if ((zf || sf != of)) goto L_7b185c;
L_7b1667: /* 7b1667: fild dword ptr [esp + 0x64] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 7b166b: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 7b166f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7b1671: fcomp dword ptr [eax + 0x40] */
  fpu_com(ST0, F32((uint32_t)(eax + 0x40u)));
  FPOP();
/* 7b1674: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b1676: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b1679: jp 0x7b185a */
  if (pf) goto L_7b185a;
L_7b167f: /* 7b167f: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 7b1683: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7b1689: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b168b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b168e: jp 0x7b16a8 */
  if (pf) goto L_7b16a8;
L_7b1690: /* 7b1690: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 7b1694: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 7b1698: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7b169a: xor ecx, ecx */
  ecx = 0;
/* 7b169c: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 7b16a0: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* 7b16a4: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
L_7b16a8: /* 7b16a8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7b16ae: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b16b0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b16b3: jp 0x7b16cf */
  if (pf) goto L_7b16cf;
L_7b16b5: /* 7b16b5: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* 7b16b9: mov eax, dword ptr [esp + 0x64] */
  eax = R32((uint32_t)(esp + 0x64u));
/* 7b16bd: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 7b16bf: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* 7b16c3: mov edi, ebp */
  edi = ebp;
/* 7b16c5: xor ebx, ebx */
  ebx = 0;
/* 7b16c7: mov dword ptr [esp + 0x24], edi */
  W32((uint32_t)(esp + 0x24u), edi);
/* 7b16cb: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
L_7b16cf: /* 7b16cf: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 7b16d3: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7b16d5: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 7b16d9: fild dword ptr [esp + 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 7b16dd: fcomp dword ptr [ebp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x3cu)));
  FPOP();
/* 7b16e0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b16e2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b16e5: jne 0x7b16f7 */
  if (!zf) goto L_7b16f7;
L_7b16e7: /* 7b16e7: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 7b16eb: fsubr dword ptr [ebp + 0x3c] */
  ST0 = (F32((uint32_t)(ebp + 0x3cu))) - ST0;
/* 7b16ee: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b16f3u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b16f3: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
L_7b16f7: /* 7b16f7: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7b16f9: mov dword ptr [esp + 0x44], edi */
  W32((uint32_t)(esp + 0x44u), edi);
/* 7b16fd: fild dword ptr [esp + 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 7b1701: fcomp dword ptr [ebp + 0x40] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x40u)));
  FPOP();
/* 7b1704: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b1706: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b1709: jne 0x7b171f */
  if (!zf) goto L_7b171f;
L_7b170b: /* 7b170b: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 7b170f: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 7b1713: fsubr dword ptr [ecx + 0x40] */
  ST0 = (F32((uint32_t)(ecx + 0x40u))) - ST0;
/* 7b1716: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b171bu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b171b: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
L_7b171f: /* 7b171f: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 7b1723: mov ebx, dword ptr [esp + 0x50] */
  ebx = R32((uint32_t)(esp + 0x50u));
/* 7b1727: mov edi, dword ptr [esp + 0x68] */
  edi = R32((uint32_t)(esp + 0x68u));
/* 7b172b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b172e: fadd dword ptr [ebx + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x34u)));
/* 7b1731: mov eax, esp */
  eax = esp;
/* 7b1733: xor ecx, ecx */
  ecx = 0;
/* 7b1735: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b1738: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 7b173c: fild dword ptr [esp + 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 7b1740: fadd dword ptr [ebx + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x38u)));
/* 7b1743: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7b1745: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7b1748: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7b174b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 7b174e: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 7b1752: fild dword ptr [esp + 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 7b1756: mov eax, esp */
  eax = esp;
/* 7b1758: mov edx, eax */
  edx = eax;
/* 7b175a: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7b175c: mov edi, dword ptr [esp + 0x8c] */
  edi = R32((uint32_t)(esp + 0x8cu));
/* 7b1763: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 7b1767: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 7b176b: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 7b176e: mov edi, dword ptr [esp + 0x90] */
  edi = R32((uint32_t)(esp + 0x90u));
/* 7b1775: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 7b1778: mov edx, dword ptr [esp + 0x94] */
  edx = R32((uint32_t)(esp + 0x94u));
/* 7b177f: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 7b1783: mov edi, dword ptr [0xcfa5d8] */
  edi = R32((uint32_t)(0xcfa5d8u));
/* 7b1789: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7b178c: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 7b1790: mov ebp, dword ptr [ebx] */
  ebp = R32((uint32_t)(ebx));
/* 7b1792: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b1793: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b1794: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7b1796u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b1796: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 7b179a: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 7b179e: fild dword ptr [esp + 0x6c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 7b17a2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7b17a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b17a6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7b17a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b17a8: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* 7b17ac: fild dword ptr [esp + 0x70] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 7b17b0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7b17b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b17b4: fild dword ptr [esp + 0x5c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 7b17b8: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7b17bb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7b17bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b17bd: mov dword ptr [esp + 0x74], eax */
  W32((uint32_t)(esp + 0x74u), eax);
/* 7b17c1: fild dword ptr [esp + 0x74] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 7b17c5: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7b17c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b17c9: fild dword ptr [esp + 0x64] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 7b17cd: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7b17d0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7b17d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b17d2: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 7b17d6: fild dword ptr [esp + 0x78] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* 7b17da: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7b17dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b17de: fld dword ptr [esp + 0x70] */
  { double v = F32((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* 7b17e2: fmul dword ptr [esp + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x94u)));
/* 7b17e9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7b17ec: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7b17eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b17ee: mov dword ptr [esp + 0x7c], eax */
  W32((uint32_t)(esp + 0x7cu), eax);
/* 7b17f2: fild dword ptr [esp + 0x7c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x7cu)); FPUSH(v); }
/* 7b17f6: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7b17f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b17fa: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 7b17fe: fmul dword ptr [esp + 0x94] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x94u)));
/* 7b1805: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7b1808: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7b180au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b180a: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 7b180e: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* 7b1815: fild dword ptr [esp + 0x80] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* 7b181c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7b181f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b1820: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7b1822u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b1822: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* 7b1829: fild dword ptr [esp + 0x84] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x84u)); FPUSH(v); }
/* 7b1830: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 7b1834: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7b1837: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b1838: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7b183au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b183a: mov ecx, dword ptr [esp + 0x8c] */
  ecx = R32((uint32_t)(esp + 0x8cu));
/* 7b1841: mov dword ptr [esp + 0x88], eax */
  W32((uint32_t)(esp + 0x88u), eax);
/* 7b1848: fild dword ptr [esp + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 7b184f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7b1852: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b1853: mov ecx, ebx */
  ecx = ebx;
/* 7b1855: call dword ptr [ebp + 0x70] */
  { uint32_t t = R32((uint32_t)(ebp + 0x70u)); esp -= 4; W32(esp, 0x7b1858u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b1858: jmp 0x7b185c */
  goto L_7b185c;
L_7b185a: /* 7b185a: fstp st(0) */
  STI(0) = ST0; FPOP();
L_7b185c: /* 7b185c: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7b1860: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b1862: je 0x7b186c */
  if (zf) goto L_7b186c;
L_7b1864: /* 7b1864: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 7b1868: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
L_7b186c: /* 7b186c: mov edi, dword ptr [esp + 0x3c] */
  edi = R32((uint32_t)(esp + 0x3cu));
/* 7b1870: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b1872: jne 0x7b1895 */
  if (!zf) goto L_7b1895;
L_7b1874: /* 7b1874: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 7b1878: fild dword ptr [eax + 0x58] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x58u)); FPUSH(v); }
/* 7b187b: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 7b187f: fadd dword ptr [ecx + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x2cu)));
/* 7b1882: fiadd dword ptr [esp + 0x14] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(esp + 0x14u)));
/* 7b1886: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 7b188a: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b188fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b188f: add dword ptr [esp + 0x1c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x1cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x1cu), r);
  }
/* 7b1893: jmp 0x7b189c */
  goto L_7b189c;
L_7b1895: /* 7b1895: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 7b1898: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
L_7b189c: /* 7b189c: mov dword ptr [esp + 0x18], edi */
  W32((uint32_t)(esp + 0x18u), edi);
L_7b18a0: /* 7b18a0: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 7b18a4: add ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 7b18a7: xor edx, edx */
  edx = 0;
/* 7b18a9: cmp word ptr [ebp], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b18ad: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 7b18b1: jne 0x7b14d0 */
  if (!zf) goto L_7b14d0;
L_7b18b7: /* 7b18b7: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 7b18bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b18bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b18bd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b18be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b18bf: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b18c2: ret  */
  esp += 4; SPILL(); return;
}

void f_7b19e0(void) {
  LOAD_REGS();
L_7b19e0: /* 7b19e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b19e1: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 7b19e7: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* 7b19ed: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 7b19f0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b19f2: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 7b19f6: je 0x7b1a13 */
  if (zf) goto L_7b1a13;
L_7b19f8: /* 7b19f8: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 7b19fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b19fd: lea ecx, [esi + 0x40] */
  ecx = (uint32_t)(esi + 0x40u);
/* 7b1a00: call 0x6cae89 */
  esp -= 4; W32(esp, 0x7b1a05u); SPILL(); f_6cae89(); if (g_unwind) return; RELOAD();
/* 7b1a05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b1a07: je 0x7b1a0e */
  if (zf) goto L_7b1a0e;
L_7b1a09: /* 7b1a09: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 7b1a0c: jmp 0x7b1a13 */
  goto L_7b1a13;
L_7b1a0e: /* 7b1a0e: mov eax, 0x20 */
  eax = 0x20u;
L_7b1a13: /* 7b1a13: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 7b1a16: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 7b1a19: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b1a1b: jge 0x7b1a30 */
  if ((sf == of)) goto L_7b1a30;
L_7b1a1d: /* 7b1a1d: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 7b1a20: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 7b1a23: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 7b1a26: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7b1a29: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 7b1a2b: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7b1a2e: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
L_7b1a30: /* 7b1a30: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7b1a31: ret  */
  esp += 4; SPILL(); return;
}

void f_7b1a60(void) {
  LOAD_REGS();
L_7b1a60: /* 7b1a60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b1a62: push 0x9cee51 */
  { uint32_t v = 0x9cee51u; esp -= 4; W32(esp, v); }
/* 7b1a67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b1a6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b1a6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b1a75: sub esp, 0x90 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b1a7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b1a7c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b1a7d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b1a7e: mov esi, dword ptr [0xcfa2fc] */
  esi = R32((uint32_t)(0xcfa2fcu));
/* 7b1a84: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b1a85: mov edi, dword ptr [esp + 0xb0] */
  edi = R32((uint32_t)(esp + 0xb0u));
/* 7b1a8c: xor ebx, ebx */
  ebx = 0;
/* 7b1a8e: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1a90: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 7b1a94: jne 0x7b1aaa */
  if (!zf) goto L_7b1aaa;
L_7b1a96: /* 7b1a96: push 0x132 */
  { uint32_t v = 0x132u; esp -= 4; W32(esp, v); }
/* 7b1a9b: push 0xacee40 */
  { uint32_t v = 0xacee40u; esp -= 4; W32(esp, v); }
/* 7b1aa0: push 0xacee50 */
  { uint32_t v = 0xacee50u; esp -= 4; W32(esp, v); }
/* 7b1aa5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7b1aa7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b1aa7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7b1aaa: /* 7b1aaa: mov ebp, dword ptr [esp + 0xb4] */
  ebp = R32((uint32_t)(esp + 0xb4u));
/* 7b1ab1: cmp ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1ab3: jne 0x7b1ac9 */
  if (!zf) goto L_7b1ac9;
L_7b1ab5: /* 7b1ab5: push 0x133 */
  { uint32_t v = 0x133u; esp -= 4; W32(esp, v); }
/* 7b1aba: push 0xacee60 */
  { uint32_t v = 0xacee60u; esp -= 4; W32(esp, v); }
/* 7b1abf: push 0xacee70 */
  { uint32_t v = 0xacee70u; esp -= 4; W32(esp, v); }
/* 7b1ac4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7b1ac6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b1ac6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7b1ac9: /* 7b1ac9: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 7b1acc: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1acf: je 0x7b1eea */
  if (zf) goto L_7b1eea;
L_7b1ad5: /* 7b1ad5: cmp dword ptr [esp + 0xbc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xbcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1adc: jne 0x7b1aec */
  if (!zf) goto L_7b1aec;
L_7b1ade: /* 7b1ade: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7b1ae2: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 7b1ae5: mov dword ptr [esp + 0xbc], edx */
  W32((uint32_t)(esp + 0xbcu), edx);
L_7b1aec: /* 7b1aec: mov word ptr [esp + 0x28], bx */
  W16((uint32_t)(esp + 0x28u), (ebx & 0xffffu));
/* 7b1af1: mov word ptr [esp + 0x2a], bx */
  W16((uint32_t)(esp + 0x2au), (ebx & 0xffffu));
/* 7b1af6: mov word ptr [esp + 0x2c], bx */
  W16((uint32_t)(esp + 0x2cu), (ebx & 0xffffu));
/* 7b1afb: mov word ptr [esp + 0x2e], bx */
  W16((uint32_t)(esp + 0x2eu), (ebx & 0xffffu));
/* 7b1b00: mov word ptr [esp + 0x30], bx */
  W16((uint32_t)(esp + 0x30u), (ebx & 0xffffu));
/* 7b1b05: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* 7b1b09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7b1b10: /* 7b1b10: mov bx, word ptr [esp + 0xc0] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0xc0u))) & 0xffffu);
/* 7b1b18: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1b1b: jne 0x7b1b75 */
  if (!zf) goto L_7b1b75;
L_7b1b1d: /* 7b1b1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7b1b20: /* 7b1b20: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7b1b22: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7b1b24: mov ecx, ebp */
  ecx = ebp;
/* 7b1b26: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x7b1b2cu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 7b1b2c: push 0xb7bec8 */
  { uint32_t v = 0xb7bec8u; esp -= 4; W32(esp, v); }
/* 7b1b31: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 7b1b35: mov esi, eax */
  esi = eax;
/* 7b1b37: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7b1b3du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7b1b3d: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 7b1b40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b1b41: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 7b1b44: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 7b1b47: mov dword ptr [esp + 0xac], 0 */
  W32((uint32_t)(esp + 0xacu), 0x0u);
/* 7b1b52: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7b1b58u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7b1b58: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* 7b1b5c: mov dword ptr [esp + 0xa8], 0xffffffff */
  W32((uint32_t)(esp + 0xa8u), 0xffffffffu);
/* 7b1b67: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b1b6du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b1b6d: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7b1b70: cmp word ptr [edi], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1b73: je 0x7b1b20 */
  if (zf) goto L_7b1b20;
L_7b1b75: /* 7b1b75: xor ebx, ebx */
  ebx = 0;
/* 7b1b77: cmp word ptr [edi], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1b7a: je 0x7b1eea */
  if (zf) goto L_7b1eea;
L_7b1b80: /* 7b1b80: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 7b1b84: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7b1b8au); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7b1b8a: cmp dword ptr [esp + 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1b8e: mov dword ptr [esp + 0xa8], 1 */
  W32((uint32_t)(esp + 0xa8u), 0x1u);
/* 7b1b99: je 0x7b1bc9 */
  if (zf) goto L_7b1bc9;
L_7b1b9b: /* 7b1b9b: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 7b1b9f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b1ba0: lea ecx, [esp + 0x8c] */
  ecx = (uint32_t)(esp + 0x8cu);
/* 7b1ba7: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7b1badu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7b1bad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b1bae: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 7b1bb2: mov byte ptr [esp + 0xac], 2 */
  W8((uint32_t)(esp + 0xacu), 0x2u);
/* 7b1bba: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7b1bc0u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7b1bc0: lea ecx, [esp + 0x88] */
  ecx = (uint32_t)(esp + 0x88u);
/* 7b1bc7: jmp 0x7b1bef */
  goto L_7b1bef;
L_7b1bc9: /* 7b1bc9: push 0xb7becc */
  { uint32_t v = 0xb7beccu; esp -= 4; W32(esp, v); }
/* 7b1bce: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 7b1bd2: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7b1bd8u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7b1bd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b1bd9: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* 7b1bdd: mov byte ptr [esp + 0xac], 3 */
  W8((uint32_t)(esp + 0xacu), 0x3u);
/* 7b1be5: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7b1bebu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7b1beb: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
L_7b1bef: /* 7b1bef: mov byte ptr [esp + 0xa8], 1 */
  W8((uint32_t)(esp + 0xa8u), 0x1u);
/* 7b1bf7: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b1bfdu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b1bfd: xor ecx, ecx */
  ecx = 0;
/* 7b1bff: mov cx, word ptr [edi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 7b1c02: xor esi, esi */
  esi = 0;
/* 7b1c04: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 7b1c07: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 7b1c0b: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* 7b1c0f: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 7b1c13: je 0x7b1ea0 */
  if (zf) goto L_7b1ea0;
L_7b1c19: /* 7b1c19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7b1c20: /* 7b1c20: cmp cx, word ptr [esp + 0xc0] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(esp + 0xc0u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1c28: je 0x7b1d76 */
  if (zf) goto L_7b1d76;
L_7b1c2e: /* 7b1c2e: cmp cx, 0x1b */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x1bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1c32: jne 0x7b1ca7 */
  if (!zf) goto L_7b1ca7;
L_7b1c34: /* 7b1c34: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
L_7b1c3c: /* 7b1c3c: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7b1c40: lea eax, [edx + edx] */
  eax = (uint32_t)(edx + edx);
/* 7b1c43: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 7b1c47: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7b1c49: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7b1c4d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7b1c4e: mov word ptr [edx], cx */
  W16((uint32_t)(edx), (ecx & 0xffffu));
/* 7b1c51: mov dword ptr [esp + 0x20], 1 */
  W32((uint32_t)(esp + 0x20u), 0x1u);
/* 7b1c59: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_7b1c5d: /* 7b1c5d: mov cx, word ptr [edi + ebx*2 + 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + ebx*2 + 0x2u))) & 0xffffu);
/* 7b1c62: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7b1c63: cmp cx, 0x20 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1c67: je 0x7b1d5e */
  if (zf) goto L_7b1d5e;
L_7b1c6d: /* 7b1c6d: cmp cx, word ptr [esp + 0xc0] */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(esp + 0xc0u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1c75: je 0x7b1d5e */
  if (zf) goto L_7b1d5e;
L_7b1c7b: /* 7b1c7b: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 7b1c7e: je 0x7b1d5e */
  if (zf) goto L_7b1d5e;
L_7b1c84: /* 7b1c84: xor eax, eax */
  eax = 0;
/* 7b1c86: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b1c88: jne 0x7b1d6d */
  if (!zf) goto L_7b1d6d;
L_7b1c8e: /* 7b1c8e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b1c90: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 7b1c94: jne 0x7b1d68 */
  if (!zf) goto L_7b1d68;
L_7b1c9a: /* 7b1c9a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b1c9c: jne 0x7b1d68 */
  if (!zf) goto L_7b1d68;
L_7b1ca2: /* 7b1ca2: jmp 0x7b1d6d */
  goto L_7b1d6d;
L_7b1ca7: /* 7b1ca7: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7b1cab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b1cad: jne 0x7b1c3c */
  if (!zf) goto L_7b1c3c;
L_7b1caf: /* 7b1caf: mov edx, dword ptr [esp + 0xbc] */
  edx = R32((uint32_t)(esp + 0xbcu));
/* 7b1cb6: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 7b1cb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b1cbb: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 7b1cc3: je 0x7b1d0b */
  if (zf) goto L_7b1d0b;
L_7b1cc5: /* 7b1cc5: mov eax, dword ptr [edx + 0x50] */
  eax = R32((uint32_t)(edx + 0x50u));
/* 7b1cc8: movzx edx, cx */
  edx = (uint32_t)((ecx & 0xffffu));
/* 7b1ccb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 7b1ccc: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7b1cce: mov edx, dword ptr [esp + 0xbc] */
  edx = R32((uint32_t)(esp + 0xbcu));
/* 7b1cd5: mov edx, dword ptr [edx + 0x4c] */
  edx = R32((uint32_t)(edx + 0x4cu));
/* 7b1cd8: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 7b1cdb: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1cde: je 0x7b1cff */
  if (zf) goto L_7b1cff;
L_7b1ce0: /* 7b1ce0: mov edx, dword ptr [esp + 0xbc] */
  edx = R32((uint32_t)(esp + 0xbcu));
/* 7b1ce7: mov edx, dword ptr [edx + 0x40] */
  edx = R32((uint32_t)(edx + 0x40u));
/* 7b1cea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7b1cf0: /* 7b1cf0: cmp word ptr [edx + eax*8 + 4], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + eax*8 + 0x4u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1cf5: je 0x7b1d51 */
  if (zf) goto L_7b1d51;
L_7b1cf7: /* 7b1cf7: mov eax, dword ptr [edx + eax*8] */
  eax = R32((uint32_t)(edx + eax*8));
/* 7b1cfa: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1cfd: jne 0x7b1cf0 */
  if (!zf) goto L_7b1cf0;
L_7b1cff: /* 7b1cff: mov ecx, 0x20 */
  ecx = 0x20u;
L_7b1d04: /* 7b1d04: mov edx, dword ptr [esp + 0xbc] */
  edx = R32((uint32_t)(esp + 0xbcu));
L_7b1d0b: /* 7b1d0b: movzx eax, cx */
  eax = (uint32_t)((ecx & 0xffffu));
/* 7b1d0e: cmp eax, dword ptr [edx + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b1d11: jge 0x7b1d23 */
  if ((sf == of)) goto L_7b1d23;
L_7b1d13: /* 7b1d13: mov ecx, dword ptr [edx + 0x28] */
  ecx = R32((uint32_t)(edx + 0x28u));
/* 7b1d16: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7b1d19: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7b1d1c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7b1d1f: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
L_7b1d23: /* 7b1d23: fild dword ptr [edx + 0x58] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x58u)); FPUSH(v); }
/* 7b1d26: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7b1d2a: fadd dword ptr [ecx + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x2cu)));
/* 7b1d2d: fiadd dword ptr [esp + 0x24] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(esp + 0x24u)));
/* 7b1d31: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b1d36u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b1d36: add dword ptr [esp + 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* 7b1d3a: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 7b1d3e: fcomp dword ptr [esp + 0xb8] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xb8u)));
  FPOP();
/* 7b1d45: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b1d47: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b1d4a: je 0x7b1d76 */
  if (zf) goto L_7b1d76;
L_7b1d4c: /* 7b1d4c: jmp 0x7b1c5d */
  goto L_7b1c5d;
L_7b1d51: /* 7b1d51: lea eax, [edx + eax*8 + 6] */
  eax = (uint32_t)(edx + eax*8 + 0x6u);
/* 7b1d55: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b1d57: je 0x7b1cff */
  if (zf) goto L_7b1cff;
L_7b1d59: /* 7b1d59: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 7b1d5c: jmp 0x7b1d04 */
  goto L_7b1d04;
L_7b1d5e: /* 7b1d5e: mov eax, 1 */
  eax = 0x1u;
/* 7b1d63: jmp 0x7b1c8e */
  goto L_7b1c8e;
L_7b1d68: /* 7b1d68: mov esi, 1 */
  esi = 0x1u;
L_7b1d6d: /* 7b1d6d: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 7b1d70: jne 0x7b1c20 */
  if (!zf) goto L_7b1c20;
L_7b1d76: /* 7b1d76: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7b1d7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b1d7c: jne 0x7b1dfc */
  if (!zf) goto L_7b1dfc;
L_7b1d7e: /* 7b1d7e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7b1d80: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7b1d82: mov ecx, ebp */
  ecx = ebp;
/* 7b1d84: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x7b1d8au); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 7b1d8a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b1d8b: mov esi, eax */
  esi = eax;
/* 7b1d8d: lea eax, [esp + 0x68] */
  eax = (uint32_t)(esp + 0x68u);
/* 7b1d91: push 0xacee84 */
  { uint32_t v = 0xacee84u; esp -= 4; W32(esp, v); }
/* 7b1d96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b1d97: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x7b1d9du); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 7b1d9d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b1da0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b1da1: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* 7b1da5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b1da6: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 7b1daa: mov byte ptr [esp + 0xb0], 4 */
  W8((uint32_t)(esp + 0xb0u), 0x4u);
/* 7b1db2: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7b1db8u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7b1db8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b1db9: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 7b1dbc: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 7b1dbf: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 7b1dc2: mov byte ptr [esp + 0xac], 5 */
  W8((uint32_t)(esp + 0xacu), 0x5u);
/* 7b1dca: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7b1dd0u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7b1dd0: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 7b1dd4: mov byte ptr [esp + 0xa8], 4 */
  W8((uint32_t)(esp + 0xa8u), 0x4u);
/* 7b1ddc: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b1de2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b1de2: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 7b1de6: mov byte ptr [esp + 0xa8], 1 */
  W8((uint32_t)(esp + 0xa8u), 0x1u);
/* 7b1dee: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b1df4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b1df4: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7b1df7: jmp 0x7b1ea0 */
  goto L_7b1ea0;
L_7b1dfc: /* 7b1dfc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b1dfd: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 7b1e01: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7b1e07u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7b1e07: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7b1e09: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 7b1e0b: mov ecx, ebp */
  ecx = ebp;
/* 7b1e0d: mov byte ptr [esp + 0xb0], 7 */
  W8((uint32_t)(esp + 0xb0u), 0x7u);
/* 7b1e15: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x7b1e1bu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 7b1e1b: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7b1e1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b1e20: lea edx, [esp + 0x98] */
  edx = (uint32_t)(esp + 0x98u);
/* 7b1e27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b1e28: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 7b1e2c: mov esi, eax */
  esi = eax;
/* 7b1e2e: call dword ptr [0xcfa7c8] */
  esp -= 4; W32(esp, 0x7b1e34u); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* 7b1e34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b1e35: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 7b1e3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b1e3d: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 7b1e41: mov byte ptr [esp + 0xb0], 8 */
  W8((uint32_t)(esp + 0xb0u), 0x8u);
/* 7b1e49: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x7b1e4fu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 7b1e4f: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 7b1e52: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 7b1e55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b1e56: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 7b1e59: mov byte ptr [esp + 0xac], 9 */
  W8((uint32_t)(esp + 0xacu), 0x9u);
/* 7b1e61: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x7b1e67u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 7b1e67: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 7b1e6b: mov byte ptr [esp + 0xa8], 8 */
  W8((uint32_t)(esp + 0xa8u), 0x8u);
/* 7b1e73: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b1e79u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b1e79: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* 7b1e80: mov byte ptr [esp + 0xa8], 7 */
  W8((uint32_t)(esp + 0xa8u), 0x7u);
/* 7b1e88: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b1e8eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b1e8e: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 7b1e92: mov byte ptr [esp + 0xa8], 1 */
  W8((uint32_t)(esp + 0xa8u), 0x1u);
/* 7b1e9a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b1ea0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_7b1ea0: /* 7b1ea0: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7b1ea4: cmp word ptr [edi + eax*2], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi + eax*2))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1ea9: lea edi, [edi + eax*2] */
  edi = (uint32_t)(edi + eax*2);
/* 7b1eac: jne 0x7b1eb9 */
  if (!zf) goto L_7b1eb9;
L_7b1eae: /* 7b1eae: mov edi, edi */
  edi = edi;
L_7b1eb0: /* 7b1eb0: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7b1eb3: cmp word ptr [edi], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1eb7: je 0x7b1eb0 */
  if (zf) goto L_7b1eb0;
L_7b1eb9: /* 7b1eb9: mov cx, word ptr [esp + 0xc0] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0xc0u))) & 0xffffu);
/* 7b1ec1: cmp word ptr [edi], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b1ec4: jne 0x7b1ec9 */
  if (!zf) goto L_7b1ec9;
L_7b1ec6: /* 7b1ec6: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7b1ec9: /* 7b1ec9: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 7b1ecd: mov dword ptr [esp + 0xa8], 0xffffffff */
  W32((uint32_t)(esp + 0xa8u), 0xffffffffu);
/* 7b1ed8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b1edeu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b1ede: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 7b1ee1: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 7b1ee4: jne 0x7b1b10 */
  if (!zf) goto L_7b1b10;
L_7b1eea: /* 7b1eea: mov ecx, dword ptr [esp + 0xa0] */
  ecx = R32((uint32_t)(esp + 0xa0u));
/* 7b1ef1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b1ef2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b1ef3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b1ef4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b1ef5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b1efc: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b1f02: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7b2040(void) {
  LOAD_REGS();
L_7b2040: /* 7b2040: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b2041: mov ebp, esp */
  ebp = esp;
/* 7b2043: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b2045: push 0x9cee9a */
  { uint32_t v = 0x9cee9au; esp -= 4; W32(esp, v); }
/* 7b204a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b2050: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2051: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b2058: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b205b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b205c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b205d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b205e: mov ebx, ecx */
  ebx = ecx;
/* 7b2060: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7b2063: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b2066: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b206d: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7b2073u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7b2073: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7b2076: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b2079: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b207c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b207f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b2080: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b2083: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 7b2086: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2087: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b208c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b208d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7b2091: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b2094u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b2094: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7b2097: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7b209du); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7b209d: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7b20a3: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 7b20a9: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b20ac: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b20af: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b20b2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b20b3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b20b6: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 7b20b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b20ba: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b20bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b20c0: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7b20c4: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b20c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b20c7: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 7b20cd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 7b20cf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b20d1: je 0x7b20e0 */
  if (zf) goto L_7b20e0;
L_7b20d3: /* 7b20d3: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 7b20d8: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7b20da: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b20dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b20dd: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x7b20e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b20e0: /* 7b20e0: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7b20e6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b20e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b20ea: mov edi, eax */
  edi = eax;
/* 7b20ec: jne 0x7b20f1 */
  if (!zf) goto L_7b20f1;
L_7b20ee: /* 7b20ee: lea edi, [ebp - 0x34] */
  edi = (uint32_t)(ebp + 0xffffffccu);
L_7b20f1: /* 7b20f1: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b20f4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b20f7: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7b20fe: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b2101: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b2102: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b2105: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7b2108: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2109: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b210e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b210f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b2112u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b2112: push 0xacee8c */
  { uint32_t v = 0xacee8cu; esp -= 4; W32(esp, v); }
/* 7b2117: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7b211a: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7b2120u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7b2120: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b2123: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b2126: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b2129: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b212a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b212d: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 7b2130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2131: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b2136: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b2137: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7b213b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b213eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b213e: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b2141: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b2142: mov eax, edx */
  eax = edx;
/* 7b2144: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7b2147: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b214a: jne 0x7b2162 */
  if (!zf) goto L_7b2162;
L_7b214c: /* 7b214c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b214f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b2150: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b2152: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b2155: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b215b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b215c: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b2162u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b2162: /* 7b2162: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b2164: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7b2167: call dword ptr [0xcfa7cc] */
  esp -= 4; W32(esp, 0x7b216du); SPILL(); f_4e3b20(); if (g_unwind) return; /* Core!??AFString@@QAEAAGH@Z */ RELOAD();
/* 7b216d: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7b2170: mov esi, eax */
  esi = eax;
/* 7b2172: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7b2178u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7b2178: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7b217a: xor ecx, ecx */
  ecx = 0;
/* 7b217c: mov cx, word ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 7b217f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b2180: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b2183: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b2185: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b2186: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b2187: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2188: mov ecx, ebx */
  ecx = ebx;
/* 7b218a: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x7b2190u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b2190: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7b2193: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7b2197: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b219du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b219d: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7b21a0: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7b21a4: call 0x6c1cdf */
  esp -= 4; W32(esp, 0x7b21a9u); SPILL(); f_6c1cdf(); if (g_unwind) return; RELOAD();
/* 7b21a9: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7b21ac: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b21b0: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b21b6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b21b6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b21b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b21ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b21bb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b21c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b21c3: mov esp, ebp */
  esp = ebp;
/* 7b21c5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b21c6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b21c9(void) {
  LOAD_REGS();
L_7b21c9: /* 7b21c9: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b21cc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b21d1: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 7b21d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b21d5: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 7b21d8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b21ddu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b21dd(); return;
}

void f_7b21dd(void) {
  LOAD_REGS();
L_7b21dd: /* 7b21dd: push 0xa0cce8 */
  { uint32_t v = 0xa0cce8u; esp -= 4; W32(esp, v); }
/* 7b21e2: push 0xacee90 */
  { uint32_t v = 0xacee90u; esp -= 4; W32(esp, v); }
/* 7b21e7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b21edu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b21ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b21f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b21f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b21f4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b21f9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b21f9: guest_badaddr(0x7b21f9); return;
}

void f_7b2270(void) {
  LOAD_REGS();
L_7b2270: /* 7b2270: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b2271: mov ebp, esp */
  ebp = esp;
/* 7b2273: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b2275: push 0x9ceec2 */
  { uint32_t v = 0x9ceec2u; esp -= 4; W32(esp, v); }
/* 7b227a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b2280: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2281: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b2288: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b228b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b228c: mov ebx, ecx */
  ebx = ecx;
/* 7b228e: fld dword ptr [ebx + 0x3c] */
  { double v = F32((uint32_t)(ebx + 0x3cu)); FPUSH(v); }
/* 7b2291: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b2292: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7b2298: xor esi, esi */
  esi = 0;
/* 7b229a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b229b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b229e: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7b22a1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b22a3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b22a6: jnp 0x7b25d7 */
  if (!pf) goto L_7b25d7;
L_7b22ac: /* 7b22ac: fld dword ptr [ebx + 0x40] */
  { double v = F32((uint32_t)(ebx + 0x40u)); FPUSH(v); }
/* 7b22af: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7b22b5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b22b7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b22ba: jnp 0x7b25d7 */
  if (!pf) goto L_7b25d7;
L_7b22c0: /* 7b22c0: cmp dword ptr [ebp + 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b22c3: jne 0x7b22dd */
  if (!zf) goto L_7b22dd;
L_7b22c5: /* 7b22c5: push 0x1b4 */
  { uint32_t v = 0x1b4u; esp -= 4; W32(esp, v); }
/* 7b22ca: push 0xacee9c */
  { uint32_t v = 0xacee9cu; esp -= 4; W32(esp, v); }
/* 7b22cf: push 0xaceeac */
  { uint32_t v = 0xaceeacu; esp -= 4; W32(esp, v); }
/* 7b22d4: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7b22dau); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7b22da: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7b22dd: /* 7b22dd: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 7b22e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b22e1: lea ecx, [ebx + 0x58] */
  ecx = (uint32_t)(ebx + 0x58u);
/* 7b22e4: call 0x6c3e7c */
  esp -= 4; W32(esp, 0x7b22e9u); SPILL(); f_6c3e7c(); if (g_unwind) return; RELOAD();
/* 7b22e9: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7b22ec: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7b22ef: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7b22f1: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
L_7b22f3: /* 7b22f3: fld dword ptr [ebx + 0x44] */
  { double v = F32((uint32_t)(ebx + 0x44u)); FPUSH(v); }
/* 7b22f6: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 7b22f9: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b22feu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b22fe: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7b2301: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 7b2304: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 7b2307: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 7b230a: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7b230d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7b2310: /* 7b2310: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7b2313: mov cx, word ptr [eax + esi*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + esi*2))) & 0xffffu);
/* 7b2317: xor edi, edi */
  edi = 0;
/* 7b2319: cmp cx, di */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b231c: je 0x7b243a */
  if (zf) goto L_7b243a;
L_7b2322: /* 7b2322: cmp cx, 0xa */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2326: je 0x7b243a */
  if (zf) goto L_7b243a;
L_7b232c: /* 7b232c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7b232f: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 7b2332: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b2334: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 7b2337: je 0x7b237d */
  if (zf) goto L_7b237d;
L_7b2339: /* 7b2339: mov edx, dword ptr [edx + 0x50] */
  edx = R32((uint32_t)(edx + 0x50u));
/* 7b233c: movzx eax, cx */
  eax = (uint32_t)((ecx & 0xffffu));
/* 7b233f: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7b2340: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7b2342: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7b2345: mov eax, dword ptr [eax + 0x4c] */
  eax = R32((uint32_t)(eax + 0x4cu));
/* 7b2348: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 7b234b: jmp 0x7b2350 */
  goto L_7b2350;
L_7b2350: /* 7b2350: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2353: je 0x7b2375 */
  if (zf) goto L_7b2375;
L_7b2355: /* 7b2355: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7b2358: mov edx, dword ptr [edx + 0x40] */
  edx = R32((uint32_t)(edx + 0x40u));
/* 7b235b: cmp word ptr [edx + eax*8 + 4], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + eax*8 + 0x4u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2360: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 7b2363: jne 0x7b2371 */
  if (!zf) goto L_7b2371;
L_7b2365: /* 7b2365: add eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b2368: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b236a: je 0x7b2375 */
  if (zf) goto L_7b2375;
L_7b236c: /* 7b236c: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 7b236f: jmp 0x7b237a */
  goto L_7b237a;
L_7b2371: /* 7b2371: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7b2373: jmp 0x7b2350 */
  goto L_7b2350;
L_7b2375: /* 7b2375: mov ecx, 0x20 */
  ecx = 0x20u;
L_7b237a: /* 7b237a: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
L_7b237d: /* 7b237d: movzx eax, cx */
  eax = (uint32_t)((ecx & 0xffffu));
/* 7b2380: cmp eax, dword ptr [edx + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b2383: jge 0x7b2398 */
  if ((sf == of)) goto L_7b2398;
L_7b2385: /* 7b2385: mov ecx, dword ptr [edx + 0x28] */
  ecx = R32((uint32_t)(edx + 0x28u));
/* 7b2388: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7b238b: mov edi, dword ptr [ecx + eax*4 + 0xc] */
  edi = R32((uint32_t)(ecx + eax*4 + 0xcu));
/* 7b238f: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7b2392: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7b2395: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
L_7b2398: /* 7b2398: fild dword ptr [edx + 0x58] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x58u)); FPUSH(v); }
/* 7b239b: fadd dword ptr [ebx + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x2cu)));
/* 7b239e: fiadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)));
/* 7b23a1: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 7b23a4: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b23a9u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b23a9: fld dword ptr [ebx + 0x30] */
  { double v = F32((uint32_t)(ebx + 0x30u)); FPUSH(v); }
/* 7b23ac: add dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 7b23af: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b23b4u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b23b4: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7b23b7: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b23b9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b23bb: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7b23be: jge 0x7b23c3 */
  if ((sf == of)) goto L_7b23c3;
L_7b23c0: /* 7b23c0: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
L_7b23c3: /* 7b23c3: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7b23c6: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 7b23c9: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b23ceu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b23ce: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7b23d1: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7b23d4: fcomp dword ptr [ebx + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x3cu)));
  FPOP();
/* 7b23d7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b23d9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b23dc: je 0x7b243a */
  if (zf) goto L_7b243a;
L_7b23de: /* 7b23de: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7b23e1: mov ax, word ptr [edx + esi*2 + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + esi*2 + 0x2u))) & 0xffffu);
/* 7b23e6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7b23e7: cmp ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b23eb: je 0x7b2427 */
  if (zf) goto L_7b2427;
L_7b23ed: /* 7b23ed: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b23f1: je 0x7b2427 */
  if (zf) goto L_7b2427;
L_7b23f3: /* 7b23f3: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 7b23f6: je 0x7b2427 */
  if (zf) goto L_7b2427;
L_7b23f8: /* 7b23f8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b23fb: xor eax, eax */
  eax = 0;
/* 7b23fd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b23ff: jne 0x7b2310 */
  if (!zf) goto L_7b2310;
L_7b2405: /* 7b2405: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b2408: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7b240b: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7b240e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b2411: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b2413: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 7b2416: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7b2419: jne 0x7b242e */
  if (!zf) goto L_7b242e;
L_7b241b: /* 7b241b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b241d: jne 0x7b242e */
  if (!zf) goto L_7b242e;
L_7b241f: /* 7b241f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7b2422: jmp 0x7b2310 */
  goto L_7b2310;
L_7b2427: /* 7b2427: mov eax, 1 */
  eax = 0x1u;
/* 7b242c: jmp 0x7b2405 */
  goto L_7b2405;
L_7b242e: /* 7b242e: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* 7b2435: jmp 0x7b2310 */
  goto L_7b2310;
L_7b243a: /* 7b243a: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b243d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b243f: je 0x7b25d7 */
  if (zf) goto L_7b25d7;
L_7b2445: /* 7b2445: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7b2448: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b244a: je 0x7b2587 */
  if (zf) goto L_7b2587;
L_7b2450: /* 7b2450: fld dword ptr [ebx + 0x38] */
  { double v = F32((uint32_t)(ebx + 0x38u)); FPUSH(v); }
/* 7b2453: mov eax, dword ptr [ebx + 0x98] */
  eax = R32((uint32_t)(ebx + 0x98u));
/* 7b2459: fadd dword ptr [ebx + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x48u)));
/* 7b245c: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 7b2462: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7b2464: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7b2466: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b2468: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b246b: jp 0x7b2585 */
  if (pf) goto L_7b2585;
L_7b2471: /* 7b2471: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7b2474: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7b2476: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7b247c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b247e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b2480: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b2483: jne 0x7b2587 */
  if (!zf) goto L_7b2587;
L_7b2489: /* 7b2489: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7b248c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b248d: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7b2490: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7b2496u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7b2496: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7b2499: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b249b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7b249f: je 0x7b24b2 */
  if (zf) goto L_7b24b2;
L_7b24a1: /* 7b24a1: fild dword ptr [ebp - 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7b24a4: fsubr dword ptr [ebx + 0x3c] */
  ST0 = (F32((uint32_t)(ebx + 0x3cu))) - ST0;
/* 7b24a7: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7b24ad: fadd dword ptr [ebx + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x44u)));
/* 7b24b0: jmp 0x7b24b5 */
  goto L_7b24b5;
L_7b24b2: /* 7b24b2: fld dword ptr [ebx + 0x44] */
  { double v = F32((uint32_t)(ebx + 0x44u)); FPUSH(v); }
L_7b24b5: /* 7b24b5: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b24bau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b24ba: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b24bd: mov edi, eax */
  edi = eax;
/* 7b24bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b24c0: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 7b24c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b24c4: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7b24c7: call dword ptr [0xcfa7c8] */
  esp -= 4; W32(esp, 0x7b24cdu); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* 7b24cd: mov esi, dword ptr [ebp - 0x5c] */
  esi = R32((uint32_t)(ebp + 0xffffffa4u));
/* 7b24d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b24d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b24d4: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b24d7: mov edx, esp */
  edx = esp;
/* 7b24d9: mov ecx, edx */
  ecx = edx;
/* 7b24db: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7b24dd: mov esi, dword ptr [ebp - 0x58] */
  esi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7b24e0: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7b24e3: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
/* 7b24e6: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7b24e9: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7b24ec: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 7b24ef: mov ecx, eax */
  ecx = eax;
/* 7b24f1: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7b24f5: mov dword ptr [ebp - 0x2c], esp */
  W32((uint32_t)(ebp + 0xffffffd4u), esp);
/* 7b24f8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7b24feu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7b24fe: fld dword ptr [ebx + 0x48] */
  { double v = F32((uint32_t)(ebx + 0x48u)); FPUSH(v); }
/* 7b2501: mov esi, eax */
  esi = eax;
/* 7b2503: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b2508u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b2508: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 7b250b: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7b250e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b250f: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7b2512: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b2513: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b2514: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2515: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b2516: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b2517: mov eax, esi */
  eax = esi;
/* 7b2519: call 0x7b1490 */
  esp -= 4; W32(esp, 0x7b251eu); SPILL(); f_7b1490(); if (g_unwind) return; RELOAD();
/* 7b251e: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7b2520: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b2523: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7b2526: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 7b2529: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7b252d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b2533u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b2533: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7b2536: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7b2539: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b253d: fstp dword ptr [ebx + 0x44] */
  WF32((uint32_t)(ebx + 0x44u), ST0); FPOP();
/* 7b2540: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b2546u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b2546: jmp 0x7b2587 */
  goto L_7b2587;
L_7b2585: /* 7b2585: fstp st(0) */
  STI(0) = ST0; FPOP();
L_7b2587: /* 7b2587: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7b258a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7b258d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b2590: xor esi, esi */
  esi = 0;
/* 7b2592: fadd dword ptr [ebx + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x48u)));
/* 7b2595: mov dword ptr [ebx + 0x44], esi */
  W32((uint32_t)(ebx + 0x44u), esi);
/* 7b2598: fstp dword ptr [ebx + 0x48] */
  WF32((uint32_t)(ebx + 0x48u), ST0); FPOP();
/* 7b259b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7b259d: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7b259f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7b25a2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7b25a4: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7b25a6: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7b25a9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b25ab: jge 0x7b25af */
  if ((sf == of)) goto L_7b25af;
L_7b25ad: /* 7b25ad: mov eax, ecx */
  eax = ecx;
L_7b25af: /* 7b25af: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b25b2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7b25b4: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7b25b7: lea eax, [eax + ecx*2] */
  eax = (uint32_t)(eax + ecx*2);
/* 7b25ba: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* 7b25bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7b25c0: /* 7b25c0: cmp word ptr [eax], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b25c4: jne 0x7b25cb */
  if (!zf) goto L_7b25cb;
L_7b25c6: /* 7b25c6: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b25c9: jmp 0x7b25c0 */
  goto L_7b25c0;
L_7b25cb: /* 7b25cb: cmp word ptr [eax], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b25ce: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* 7b25d1: jne 0x7b22f3 */
  if (!zf) goto L_7b22f3;
L_7b25d7: /* 7b25d7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b25da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b25db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b25dc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b25e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b25e4: mov esp, ebp */
  esp = ebp;
/* 7b25e6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b25e7: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_7b234d(void) {
  LOAD_REGS();
  goto L_7b234d;
L_7b22f3: /* 7b22f3: fld dword ptr [ebx + 0x44] */
  { double v = F32((uint32_t)(ebx + 0x44u)); FPUSH(v); }
/* 7b22f6: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 7b22f9: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b22feu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b22fe: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7b2301: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 7b2304: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 7b2307: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 7b230a: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7b230d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7b2310: /* 7b2310: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7b2313: mov cx, word ptr [eax + esi*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + esi*2))) & 0xffffu);
/* 7b2317: xor edi, edi */
  edi = 0;
/* 7b2319: cmp cx, di */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b231c: je 0x7b243a */
  if (zf) goto L_7b243a;
L_7b2322: /* 7b2322: cmp cx, 0xa */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2326: je 0x7b243a */
  if (zf) goto L_7b243a;
L_7b232c: /* 7b232c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7b232f: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 7b2332: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b2334: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 7b2337: je 0x7b237d */
  if (zf) goto L_7b237d;
L_7b2339: /* 7b2339: mov edx, dword ptr [edx + 0x50] */
  edx = R32((uint32_t)(edx + 0x50u));
/* 7b233c: movzx eax, cx */
  eax = (uint32_t)((ecx & 0xffffu));
/* 7b233f: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7b2340: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7b2342: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7b2345: mov eax, dword ptr [eax + 0x4c] */
  eax = R32((uint32_t)(eax + 0x4cu));
/* 7b2348: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 7b234b: jmp 0x7b2350 */
  goto L_7b2350;
L_7b234d: /* 7b234d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7b2350: /* 7b2350: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2353: je 0x7b2375 */
  if (zf) goto L_7b2375;
L_7b2355: /* 7b2355: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7b2358: mov edx, dword ptr [edx + 0x40] */
  edx = R32((uint32_t)(edx + 0x40u));
/* 7b235b: cmp word ptr [edx + eax*8 + 4], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + eax*8 + 0x4u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2360: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 7b2363: jne 0x7b2371 */
  if (!zf) goto L_7b2371;
L_7b2365: /* 7b2365: add eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b2368: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b236a: je 0x7b2375 */
  if (zf) goto L_7b2375;
L_7b236c: /* 7b236c: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 7b236f: jmp 0x7b237a */
  goto L_7b237a;
L_7b2371: /* 7b2371: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7b2373: jmp 0x7b2350 */
  goto L_7b2350;
L_7b2375: /* 7b2375: mov ecx, 0x20 */
  ecx = 0x20u;
L_7b237a: /* 7b237a: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
L_7b237d: /* 7b237d: movzx eax, cx */
  eax = (uint32_t)((ecx & 0xffffu));
/* 7b2380: cmp eax, dword ptr [edx + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b2383: jge 0x7b2398 */
  if ((sf == of)) goto L_7b2398;
L_7b2385: /* 7b2385: mov ecx, dword ptr [edx + 0x28] */
  ecx = R32((uint32_t)(edx + 0x28u));
/* 7b2388: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7b238b: mov edi, dword ptr [ecx + eax*4 + 0xc] */
  edi = R32((uint32_t)(ecx + eax*4 + 0xcu));
/* 7b238f: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7b2392: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7b2395: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
L_7b2398: /* 7b2398: fild dword ptr [edx + 0x58] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x58u)); FPUSH(v); }
/* 7b239b: fadd dword ptr [ebx + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x2cu)));
/* 7b239e: fiadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)));
/* 7b23a1: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 7b23a4: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b23a9u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b23a9: fld dword ptr [ebx + 0x30] */
  { double v = F32((uint32_t)(ebx + 0x30u)); FPUSH(v); }
/* 7b23ac: add dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 7b23af: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b23b4u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b23b4: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7b23b7: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b23b9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b23bb: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7b23be: jge 0x7b23c3 */
  if ((sf == of)) goto L_7b23c3;
L_7b23c0: /* 7b23c0: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
L_7b23c3: /* 7b23c3: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7b23c6: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 7b23c9: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b23ceu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b23ce: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7b23d1: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7b23d4: fcomp dword ptr [ebx + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x3cu)));
  FPOP();
/* 7b23d7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b23d9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b23dc: je 0x7b243a */
  if (zf) goto L_7b243a;
L_7b23de: /* 7b23de: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7b23e1: mov ax, word ptr [edx + esi*2 + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + esi*2 + 0x2u))) & 0xffffu);
/* 7b23e6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7b23e7: cmp ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b23eb: je 0x7b2427 */
  if (zf) goto L_7b2427;
L_7b23ed: /* 7b23ed: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b23f1: je 0x7b2427 */
  if (zf) goto L_7b2427;
L_7b23f3: /* 7b23f3: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 7b23f6: je 0x7b2427 */
  if (zf) goto L_7b2427;
L_7b23f8: /* 7b23f8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b23fb: xor eax, eax */
  eax = 0;
/* 7b23fd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b23ff: jne 0x7b2310 */
  if (!zf) goto L_7b2310;
L_7b2405: /* 7b2405: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b2408: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7b240b: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7b240e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b2411: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b2413: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 7b2416: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7b2419: jne 0x7b242e */
  if (!zf) goto L_7b242e;
L_7b241b: /* 7b241b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b241d: jne 0x7b242e */
  if (!zf) goto L_7b242e;
L_7b241f: /* 7b241f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7b2422: jmp 0x7b2310 */
  goto L_7b2310;
L_7b2427: /* 7b2427: mov eax, 1 */
  eax = 0x1u;
/* 7b242c: jmp 0x7b2405 */
  goto L_7b2405;
L_7b242e: /* 7b242e: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* 7b2435: jmp 0x7b2310 */
  goto L_7b2310;
L_7b243a: /* 7b243a: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b243d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b243f: je 0x7b25d7 */
  if (zf) goto L_7b25d7;
L_7b2445: /* 7b2445: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7b2448: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b244a: je 0x7b2587 */
  if (zf) goto L_7b2587;
L_7b2450: /* 7b2450: fld dword ptr [ebx + 0x38] */
  { double v = F32((uint32_t)(ebx + 0x38u)); FPUSH(v); }
/* 7b2453: mov eax, dword ptr [ebx + 0x98] */
  eax = R32((uint32_t)(ebx + 0x98u));
/* 7b2459: fadd dword ptr [ebx + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x48u)));
/* 7b245c: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 7b2462: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7b2464: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7b2466: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b2468: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b246b: jp 0x7b2585 */
  if (pf) goto L_7b2585;
L_7b2471: /* 7b2471: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7b2474: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7b2476: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7b247c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b247e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b2480: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b2483: jne 0x7b2587 */
  if (!zf) goto L_7b2587;
L_7b2489: /* 7b2489: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7b248c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b248d: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7b2490: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7b2496u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7b2496: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7b2499: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b249b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7b249f: je 0x7b24b2 */
  if (zf) goto L_7b24b2;
L_7b24a1: /* 7b24a1: fild dword ptr [ebp - 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7b24a4: fsubr dword ptr [ebx + 0x3c] */
  ST0 = (F32((uint32_t)(ebx + 0x3cu))) - ST0;
/* 7b24a7: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7b24ad: fadd dword ptr [ebx + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x44u)));
/* 7b24b0: jmp 0x7b24b5 */
  goto L_7b24b5;
L_7b24b2: /* 7b24b2: fld dword ptr [ebx + 0x44] */
  { double v = F32((uint32_t)(ebx + 0x44u)); FPUSH(v); }
L_7b24b5: /* 7b24b5: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b24bau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b24ba: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b24bd: mov edi, eax */
  edi = eax;
/* 7b24bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b24c0: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 7b24c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b24c4: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7b24c7: call dword ptr [0xcfa7c8] */
  esp -= 4; W32(esp, 0x7b24cdu); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* 7b24cd: mov esi, dword ptr [ebp - 0x5c] */
  esi = R32((uint32_t)(ebp + 0xffffffa4u));
/* 7b24d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b24d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b24d4: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b24d7: mov edx, esp */
  edx = esp;
/* 7b24d9: mov ecx, edx */
  ecx = edx;
/* 7b24db: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7b24dd: mov esi, dword ptr [ebp - 0x58] */
  esi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7b24e0: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7b24e3: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
/* 7b24e6: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7b24e9: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7b24ec: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 7b24ef: mov ecx, eax */
  ecx = eax;
/* 7b24f1: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7b24f5: mov dword ptr [ebp - 0x2c], esp */
  W32((uint32_t)(ebp + 0xffffffd4u), esp);
/* 7b24f8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7b24feu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7b24fe: fld dword ptr [ebx + 0x48] */
  { double v = F32((uint32_t)(ebx + 0x48u)); FPUSH(v); }
/* 7b2501: mov esi, eax */
  esi = eax;
/* 7b2503: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b2508u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b2508: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 7b250b: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7b250e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b250f: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7b2512: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b2513: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b2514: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2515: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b2516: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b2517: mov eax, esi */
  eax = esi;
/* 7b2519: call 0x7b1490 */
  esp -= 4; W32(esp, 0x7b251eu); SPILL(); f_7b1490(); if (g_unwind) return; RELOAD();
/* 7b251e: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7b2520: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b2523: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7b2526: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 7b2529: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7b252d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b2533u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b2533: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7b2536: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7b2539: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b253d: fstp dword ptr [ebx + 0x44] */
  WF32((uint32_t)(ebx + 0x44u), ST0); FPOP();
/* 7b2540: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b2546u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b2546: jmp 0x7b2587 */
  goto L_7b2587;
L_7b2585: /* 7b2585: fstp st(0) */
  STI(0) = ST0; FPOP();
L_7b2587: /* 7b2587: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7b258a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7b258d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b2590: xor esi, esi */
  esi = 0;
/* 7b2592: fadd dword ptr [ebx + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x48u)));
/* 7b2595: mov dword ptr [ebx + 0x44], esi */
  W32((uint32_t)(ebx + 0x44u), esi);
/* 7b2598: fstp dword ptr [ebx + 0x48] */
  WF32((uint32_t)(ebx + 0x48u), ST0); FPOP();
/* 7b259b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7b259d: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7b259f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7b25a2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7b25a4: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7b25a6: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7b25a9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b25ab: jge 0x7b25af */
  if ((sf == of)) goto L_7b25af;
L_7b25ad: /* 7b25ad: mov eax, ecx */
  eax = ecx;
L_7b25af: /* 7b25af: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b25b2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7b25b4: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7b25b7: lea eax, [eax + ecx*2] */
  eax = (uint32_t)(eax + ecx*2);
/* 7b25ba: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* 7b25bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7b25c0: /* 7b25c0: cmp word ptr [eax], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b25c4: jne 0x7b25cb */
  if (!zf) goto L_7b25cb;
L_7b25c6: /* 7b25c6: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b25c9: jmp 0x7b25c0 */
  goto L_7b25c0;
L_7b25cb: /* 7b25cb: cmp word ptr [eax], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b25ce: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* 7b25d1: jne 0x7b22f3 */
  if (!zf) goto L_7b22f3;
L_7b25d7: /* 7b25d7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b25da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b25db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b25dc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b25e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b25e4: mov esp, ebp */
  esp = ebp;
/* 7b25e6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b25e7: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_7b2548(void) {
  LOAD_REGS();
L_7b2548: /* 7b2548: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7b254b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b2550: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7b2553: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2554: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7b2557: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b255cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b255c(); return;
}

void f_7b255c(void) {
  LOAD_REGS();
  goto L_7b255c;
L_7b22f3: /* 7b22f3: fld dword ptr [ebx + 0x44] */
  { double v = F32((uint32_t)(ebx + 0x44u)); FPUSH(v); }
/* 7b22f6: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 7b22f9: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b22feu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b22fe: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7b2301: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 7b2304: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 7b2307: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 7b230a: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 7b230d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7b2310: /* 7b2310: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7b2313: mov cx, word ptr [eax + esi*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + esi*2))) & 0xffffu);
/* 7b2317: xor edi, edi */
  edi = 0;
/* 7b2319: cmp cx, di */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b231c: je 0x7b243a */
  if (zf) goto L_7b243a;
L_7b2322: /* 7b2322: cmp cx, 0xa */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2326: je 0x7b243a */
  if (zf) goto L_7b243a;
L_7b232c: /* 7b232c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7b232f: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 7b2332: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b2334: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 7b2337: je 0x7b237d */
  if (zf) goto L_7b237d;
L_7b2339: /* 7b2339: mov edx, dword ptr [edx + 0x50] */
  edx = R32((uint32_t)(edx + 0x50u));
/* 7b233c: movzx eax, cx */
  eax = (uint32_t)((ecx & 0xffffu));
/* 7b233f: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 7b2340: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 7b2342: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7b2345: mov eax, dword ptr [eax + 0x4c] */
  eax = R32((uint32_t)(eax + 0x4cu));
/* 7b2348: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 7b234b: jmp 0x7b2350 */
  goto L_7b2350;
L_7b2350: /* 7b2350: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2353: je 0x7b2375 */
  if (zf) goto L_7b2375;
L_7b2355: /* 7b2355: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7b2358: mov edx, dword ptr [edx + 0x40] */
  edx = R32((uint32_t)(edx + 0x40u));
/* 7b235b: cmp word ptr [edx + eax*8 + 4], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx + eax*8 + 0x4u))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2360: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 7b2363: jne 0x7b2371 */
  if (!zf) goto L_7b2371;
L_7b2365: /* 7b2365: add eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b2368: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b236a: je 0x7b2375 */
  if (zf) goto L_7b2375;
L_7b236c: /* 7b236c: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 7b236f: jmp 0x7b237a */
  goto L_7b237a;
L_7b2371: /* 7b2371: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7b2373: jmp 0x7b2350 */
  goto L_7b2350;
L_7b2375: /* 7b2375: mov ecx, 0x20 */
  ecx = 0x20u;
L_7b237a: /* 7b237a: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
L_7b237d: /* 7b237d: movzx eax, cx */
  eax = (uint32_t)((ecx & 0xffffu));
/* 7b2380: cmp eax, dword ptr [edx + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b2383: jge 0x7b2398 */
  if ((sf == of)) goto L_7b2398;
L_7b2385: /* 7b2385: mov ecx, dword ptr [edx + 0x28] */
  ecx = R32((uint32_t)(edx + 0x28u));
/* 7b2388: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 7b238b: mov edi, dword ptr [ecx + eax*4 + 0xc] */
  edi = R32((uint32_t)(ecx + eax*4 + 0xcu));
/* 7b238f: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 7b2392: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7b2395: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
L_7b2398: /* 7b2398: fild dword ptr [edx + 0x58] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x58u)); FPUSH(v); }
/* 7b239b: fadd dword ptr [ebx + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x2cu)));
/* 7b239e: fiadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)));
/* 7b23a1: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 7b23a4: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b23a9u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b23a9: fld dword ptr [ebx + 0x30] */
  { double v = F32((uint32_t)(ebx + 0x30u)); FPUSH(v); }
/* 7b23ac: add dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 7b23af: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b23b4u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b23b4: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7b23b7: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b23b9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b23bb: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 7b23be: jge 0x7b23c3 */
  if ((sf == of)) goto L_7b23c3;
L_7b23c0: /* 7b23c0: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
L_7b23c3: /* 7b23c3: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7b23c6: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 7b23c9: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b23ceu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b23ce: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7b23d1: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7b23d4: fcomp dword ptr [ebx + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x3cu)));
  FPOP();
/* 7b23d7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b23d9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b23dc: je 0x7b243a */
  if (zf) goto L_7b243a;
L_7b23de: /* 7b23de: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 7b23e1: mov ax, word ptr [edx + esi*2 + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + esi*2 + 0x2u))) & 0xffffu);
/* 7b23e6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 7b23e7: cmp ax, 0x20 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b23eb: je 0x7b2427 */
  if (zf) goto L_7b2427;
L_7b23ed: /* 7b23ed: cmp ax, 0xa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b23f1: je 0x7b2427 */
  if (zf) goto L_7b2427;
L_7b23f3: /* 7b23f3: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 7b23f6: je 0x7b2427 */
  if (zf) goto L_7b2427;
L_7b23f8: /* 7b23f8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b23fb: xor eax, eax */
  eax = 0;
/* 7b23fd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b23ff: jne 0x7b2310 */
  if (!zf) goto L_7b2310;
L_7b2405: /* 7b2405: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b2408: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7b240b: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7b240e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b2411: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b2413: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 7b2416: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7b2419: jne 0x7b242e */
  if (!zf) goto L_7b242e;
L_7b241b: /* 7b241b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b241d: jne 0x7b242e */
  if (!zf) goto L_7b242e;
L_7b241f: /* 7b241f: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7b2422: jmp 0x7b2310 */
  goto L_7b2310;
L_7b2427: /* 7b2427: mov eax, 1 */
  eax = 0x1u;
/* 7b242c: jmp 0x7b2405 */
  goto L_7b2405;
L_7b242e: /* 7b242e: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* 7b2435: jmp 0x7b2310 */
  goto L_7b2310;
L_7b243a: /* 7b243a: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b243d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b243f: je 0x7b25d7 */
  if (zf) goto L_7b25d7;
L_7b2445: /* 7b2445: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7b2448: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b244a: je 0x7b2587 */
  if (zf) goto L_7b2587;
L_7b2450: /* 7b2450: fld dword ptr [ebx + 0x38] */
  { double v = F32((uint32_t)(ebx + 0x38u)); FPUSH(v); }
/* 7b2453: mov eax, dword ptr [ebx + 0x98] */
  eax = R32((uint32_t)(ebx + 0x98u));
/* 7b2459: fadd dword ptr [ebx + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x48u)));
/* 7b245c: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 7b2462: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7b2464: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7b2466: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b2468: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b246b: jp 0x7b2585 */
  if (pf) goto L_7b2585;
L_7b2471: /* 7b2471: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7b2474: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7b2476: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7b247c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b247e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b2480: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b2483: jne 0x7b2587 */
  if (!zf) goto L_7b2587;
L_7b2489: /* 7b2489: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7b248c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b248d: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7b2490: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7b2496u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7b2496: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 7b2499: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b249b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7b249f: je 0x7b24b2 */
  if (zf) goto L_7b24b2;
L_7b24a1: /* 7b24a1: fild dword ptr [ebp - 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7b24a4: fsubr dword ptr [ebx + 0x3c] */
  ST0 = (F32((uint32_t)(ebx + 0x3cu))) - ST0;
/* 7b24a7: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7b24ad: fadd dword ptr [ebx + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x44u)));
/* 7b24b0: jmp 0x7b24b5 */
  goto L_7b24b5;
L_7b24b2: /* 7b24b2: fld dword ptr [ebx + 0x44] */
  { double v = F32((uint32_t)(ebx + 0x44u)); FPUSH(v); }
L_7b24b5: /* 7b24b5: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b24bau); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b24ba: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b24bd: mov edi, eax */
  edi = eax;
/* 7b24bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b24c0: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 7b24c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b24c4: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7b24c7: call dword ptr [0xcfa7c8] */
  esp -= 4; W32(esp, 0x7b24cdu); SPILL(); f_4e42f0(); if (g_unwind) return; /* Core!?Left@FString@@QBE?AV1@H@Z */ RELOAD();
/* 7b24cd: mov esi, dword ptr [ebp - 0x5c] */
  esi = R32((uint32_t)(ebp + 0xffffffa4u));
/* 7b24d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b24d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b24d4: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b24d7: mov edx, esp */
  edx = esp;
/* 7b24d9: mov ecx, edx */
  ecx = edx;
/* 7b24db: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7b24dd: mov esi, dword ptr [ebp - 0x58] */
  esi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7b24e0: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7b24e3: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
/* 7b24e6: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 7b24e9: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 7b24ec: mov dword ptr [edx + 0xc], ecx */
  W32((uint32_t)(edx + 0xcu), ecx);
/* 7b24ef: mov ecx, eax */
  ecx = eax;
/* 7b24f1: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7b24f5: mov dword ptr [ebp - 0x2c], esp */
  W32((uint32_t)(ebp + 0xffffffd4u), esp);
/* 7b24f8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7b24feu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7b24fe: fld dword ptr [ebx + 0x48] */
  { double v = F32((uint32_t)(ebx + 0x48u)); FPUSH(v); }
/* 7b2501: mov esi, eax */
  esi = eax;
/* 7b2503: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b2508u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b2508: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 7b250b: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7b250e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b250f: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7b2512: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b2513: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b2514: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2515: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b2516: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b2517: mov eax, esi */
  eax = esi;
/* 7b2519: call 0x7b1490 */
  esp -= 4; W32(esp, 0x7b251eu); SPILL(); f_7b1490(); if (g_unwind) return; RELOAD();
/* 7b251e: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7b2520: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b2523: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7b2526: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 7b2529: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7b252d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b2533u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b2533: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7b2536: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7b2539: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b253d: fstp dword ptr [ebx + 0x44] */
  WF32((uint32_t)(ebx + 0x44u), ST0); FPOP();
/* 7b2540: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b2546u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b2546: jmp 0x7b2587 */
  goto L_7b2587;
L_7b255c: /* 7b255c: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 7b2562: push 0xa0cd34 */
  { uint32_t v = 0xa0cd34u; esp -= 4; W32(esp, v); }
/* 7b2567: push 0xaceeb4 */
  { uint32_t v = 0xaceeb4u; esp -= 4; W32(esp, v); }
/* 7b256c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7b256eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b256e: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 7b2571: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b2572: push 0xaceebc */
  { uint32_t v = 0xaceebcu; esp -= 4; W32(esp, v); }
/* 7b2577: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7b2579u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b2579: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b257c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b257e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b2580: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b2585u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b2585: /* 7b2585: fstp st(0) */
  STI(0) = ST0; FPOP();
L_7b2587: /* 7b2587: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7b258a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7b258d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b2590: xor esi, esi */
  esi = 0;
/* 7b2592: fadd dword ptr [ebx + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x48u)));
/* 7b2595: mov dword ptr [ebx + 0x44], esi */
  W32((uint32_t)(ebx + 0x44u), esi);
/* 7b2598: fstp dword ptr [ebx + 0x48] */
  WF32((uint32_t)(ebx + 0x48u), ST0); FPOP();
/* 7b259b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7b259d: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7b259f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7b25a2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7b25a4: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7b25a6: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7b25a9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b25ab: jge 0x7b25af */
  if ((sf == of)) goto L_7b25af;
L_7b25ad: /* 7b25ad: mov eax, ecx */
  eax = ecx;
L_7b25af: /* 7b25af: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b25b2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7b25b4: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 7b25b7: lea eax, [eax + ecx*2] */
  eax = (uint32_t)(eax + ecx*2);
/* 7b25ba: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* 7b25bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7b25c0: /* 7b25c0: cmp word ptr [eax], 0x20 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x20u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b25c4: jne 0x7b25cb */
  if (!zf) goto L_7b25cb;
L_7b25c6: /* 7b25c6: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b25c9: jmp 0x7b25c0 */
  goto L_7b25c0;
L_7b25cb: /* 7b25cb: cmp word ptr [eax], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b25ce: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* 7b25d1: jne 0x7b22f3 */
  if (!zf) goto L_7b22f3;
L_7b25d7: /* 7b25d7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b25da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b25db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b25dc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b25e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b25e4: mov esp, ebp */
  esp = ebp;
/* 7b25e6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b25e7: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_7b26d0(void) {
  LOAD_REGS();
L_7b26d0: /* 7b26d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b26d1: mov ebp, esp */
  ebp = esp;
/* 7b26d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b26d5: push 0x9ceee0 */
  { uint32_t v = 0x9ceee0u; esp -= 4; W32(esp, v); }
/* 7b26da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b26e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b26e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b26e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b26e9: mov eax, 0x2008 */
  eax = 0x2008u;
/* 7b26ee: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7b26f3u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7b26f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b26f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b26f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b26f6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b26f9: lea eax, [ebp + 0x18] */
  eax = (uint32_t)(ebp + 0x18u);
/* 7b26fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b26fd: lea ecx, [ebp - 0x2018] */
  ecx = (uint32_t)(ebp + 0xffffdfe8u);
/* 7b2703: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 7b2708: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b2709: call dword ptr [0xcfa7bc] */
  esp -= 4; W32(esp, 0x7b270fu); SPILL(); f_4e3693(); if (g_unwind) return; /* Core!?appGetVarArgs@@YAHPAGHAAPBG@Z */ RELOAD();
/* 7b270f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7b2712: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7b2715: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b2718: lea edx, [ebp - 0x2018] */
  edx = (uint32_t)(ebp + 0xffffdfe8u);
/* 7b271e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b271f: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7b2722: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b2724: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7b2729: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7b272e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b272f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b2730: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7b2733: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b2734: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b2736: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b273d: call 0x6c2063 */
  esp -= 4; W32(esp, 0x7b2742u); SPILL(); f_6c2063(); if (g_unwind) return; RELOAD();
/* 7b2742: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b2745: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b2746: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b2747: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b274e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b274f: mov esp, ebp */
  esp = ebp;
/* 7b2751: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b2752: ret  */
  esp += 4; SPILL(); return;
}

void f_7b2753(void) {
  LOAD_REGS();
L_7b2753: /* 7b2753: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b2756: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b275b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7b275e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b275f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7b2762: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b2767u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b2767(); return;
}

void f_7b2767(void) {
  LOAD_REGS();
L_7b2767: /* 7b2767: push 0xa0cd68 */
  { uint32_t v = 0xa0cd68u; esp -= 4; W32(esp, v); }
/* 7b276c: push 0xaceec8 */
  { uint32_t v = 0xaceec8u; esp -= 4; W32(esp, v); }
/* 7b2771: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b2777u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b2777: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b277a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b277c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b277e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b2783u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b2783: guest_badaddr(0x7b2783); return;
}

void f_7b27c0(void) {
  LOAD_REGS();
L_7b27c0: /* 7b27c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b27c1: mov ebp, esp */
  ebp = esp;
/* 7b27c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b27c5: push 0x9ceef0 */
  { uint32_t v = 0x9ceef0u; esp -= 4; W32(esp, v); }
/* 7b27ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b27d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b27d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b27d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b27d9: mov eax, 0x2010 */
  eax = 0x2010u;
/* 7b27de: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7b27e3u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7b27e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b27e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b27e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b27e6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b27e9: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 7b27ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b27ed: lea ecx, [ebp - 0x2020] */
  ecx = (uint32_t)(ebp + 0xffffdfe0u);
/* 7b27f3: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 7b27f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b27f9: call dword ptr [0xcfa7bc] */
  esp -= 4; W32(esp, 0x7b27ffu); SPILL(); f_4e3693(); if (g_unwind) return; /* Core!?appGetVarArgs@@YAHPAGHAAPBG@Z */ RELOAD();
/* 7b27ff: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7b2802: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b2805: xor eax, eax */
  eax = 0;
/* 7b2807: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 7b280a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7b280d: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7b2810: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7b2813: lea edx, [ebp - 0x2020] */
  edx = (uint32_t)(ebp + 0xffffdfe0u);
/* 7b2819: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b281a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b281b: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7b2820: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7b2825: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b2826: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7b2829: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7b282c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b282d: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7b2830: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2831: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7b2833: call 0x6c2063 */
  esp -= 4; W32(esp, 0x7b2838u); SPILL(); f_6c2063(); if (g_unwind) return; RELOAD();
/* 7b2838: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b283b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b283c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b283d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b2844: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b2845: mov esp, ebp */
  esp = ebp;
/* 7b2847: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b2848: ret  */
  esp += 4; SPILL(); return;
}

void f_7b2849(void) {
  LOAD_REGS();
L_7b2849: /* 7b2849: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b284c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b2851: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7b2854: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b2855: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7b2858: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b285du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b285d(); return;
}

void f_7b285d(void) {
  LOAD_REGS();
L_7b285d: /* 7b285d: push 0xa0cda4 */
  { uint32_t v = 0xa0cda4u; esp -= 4; W32(esp, v); }
/* 7b2862: push 0xaceed0 */
  { uint32_t v = 0xaceed0u; esp -= 4; W32(esp, v); }
/* 7b2867: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b286du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b286d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b2870: xor eax, eax */
  eax = 0;
/* 7b2872: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2873: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2874: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b2879u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b2879: guest_badaddr(0x7b2879); return;
}

void f_7b28b0(void) {
  LOAD_REGS();
L_7b28b0: /* 7b28b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b28b1: mov ebp, esp */
  ebp = esp;
/* 7b28b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b28b5: push 0x9cef00 */
  { uint32_t v = 0x9cef00u; esp -= 4; W32(esp, v); }
/* 7b28ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b28c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b28c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b28c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b28c9: mov eax, 0x2008 */
  eax = 0x2008u;
/* 7b28ce: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7b28d3u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7b28d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b28d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b28d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b28d6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b28d9: lea eax, [ebp + 0x20] */
  eax = (uint32_t)(ebp + 0x20u);
/* 7b28dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b28dd: lea ecx, [ebp - 0x2018] */
  ecx = (uint32_t)(ebp + 0xffffdfe8u);
/* 7b28e3: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 7b28e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b28e9: call dword ptr [0xcfa7bc] */
  esp -= 4; W32(esp, 0x7b28efu); SPILL(); f_4e3693(); if (g_unwind) return; /* Core!?appGetVarArgs@@YAHPAGHAAPBG@Z */ RELOAD();
/* 7b28ef: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7b28f2: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7b28f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b28f8: lea edx, [ebp - 0x2018] */
  edx = (uint32_t)(ebp + 0xffffdfe8u);
/* 7b28fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b28ff: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7b2902: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b2904: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2905: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 7b2908: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b2909: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 7b290c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b290d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b290e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b290f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7b2912: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b2914: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b291b: call 0x6c2063 */
  esp -= 4; W32(esp, 0x7b2920u); SPILL(); f_6c2063(); if (g_unwind) return; RELOAD();
/* 7b2920: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b2923: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b2924: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b2925: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b292c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b292d: mov esp, ebp */
  esp = ebp;
/* 7b292f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b2930: ret  */
  esp += 4; SPILL(); return;
}

void f_7b2931(void) {
  LOAD_REGS();
L_7b2931: /* 7b2931: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b2934: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b2939: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7b293c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b293d: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7b2940: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b2945u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b2945(); return;
}

void f_7b2945(void) {
  LOAD_REGS();
L_7b2945: /* 7b2945: push 0xa0cddc */
  { uint32_t v = 0xa0cddcu; esp -= 4; W32(esp, v); }
/* 7b294a: push 0xaceed8 */
  { uint32_t v = 0xaceed8u; esp -= 4; W32(esp, v); }
/* 7b294f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b2955u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b2955: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b2958: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b295a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b295c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b2961u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b2961: guest_badaddr(0x7b2961); return;
}

void f_7b29a0(void) {
  LOAD_REGS();
L_7b29a0: /* 7b29a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b29a1: mov ebp, esp */
  ebp = esp;
/* 7b29a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b29a5: push 0x9cef10 */
  { uint32_t v = 0x9cef10u; esp -= 4; W32(esp, v); }
/* 7b29aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b29b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b29b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b29b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b29b9: mov eax, 0x2010 */
  eax = 0x2010u;
/* 7b29be: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7b29c3u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7b29c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b29c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b29c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b29c6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b29c9: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 7b29cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b29cd: lea ecx, [ebp - 0x2020] */
  ecx = (uint32_t)(ebp + 0xffffdfe0u);
/* 7b29d3: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 7b29d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b29d9: call dword ptr [0xcfa7bc] */
  esp -= 4; W32(esp, 0x7b29dfu); SPILL(); f_4e3693(); if (g_unwind) return; /* Core!?appGetVarArgs@@YAHPAGHAAPBG@Z */ RELOAD();
/* 7b29df: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7b29e2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b29e5: xor eax, eax */
  eax = 0;
/* 7b29e7: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 7b29ea: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 7b29ed: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7b29f0: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7b29f3: lea edx, [ebp - 0x2020] */
  edx = (uint32_t)(ebp + 0xffffdfe0u);
/* 7b29f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b29fa: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7b29fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b29fe: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7b2a01: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b2a02: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b2a03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2a04: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 7b2a07: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b2a08: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7b2a0b: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7b2a0e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b2a0f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7b2a11: call 0x6c2063 */
  esp -= 4; W32(esp, 0x7b2a16u); SPILL(); f_6c2063(); if (g_unwind) return; RELOAD();
/* 7b2a16: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b2a19: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b2a1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b2a1b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b2a22: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b2a23: mov esp, ebp */
  esp = ebp;
/* 7b2a25: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b2a26: ret  */
  esp += 4; SPILL(); return;
}

void f_7b2a27(void) {
  LOAD_REGS();
L_7b2a27: /* 7b2a27: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b2a2a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b2a2f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7b2a32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b2a33: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7b2a36: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b2a3bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b2a3b(); return;
}

void f_7b2a3b(void) {
  LOAD_REGS();
L_7b2a3b: /* 7b2a3b: push 0xa0ce18 */
  { uint32_t v = 0xa0ce18u; esp -= 4; W32(esp, v); }
/* 7b2a40: push 0xaceee0 */
  { uint32_t v = 0xaceee0u; esp -= 4; W32(esp, v); }
/* 7b2a45: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b2a4bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b2a4b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b2a4e: xor eax, eax */
  eax = 0;
/* 7b2a50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2a51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2a52: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b2a57u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b2a57: guest_badaddr(0x7b2a57); return;
}

void f_7b2a90(void) {
  LOAD_REGS();
L_7b2a90: /* 7b2a90: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b2a91: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7b2a95: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b2a96: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 7b2a9a: xor edx, edx */
  edx = 0;
/* 7b2a9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b2a9d: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 7b2aa1: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2aa3: mov dword ptr [ebp], edx */
  W32((uint32_t)(ebp), edx);
/* 7b2aa6: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 7b2aaa: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7b2aac: jne 0x7b2ab9 */
  if (!zf) goto L_7b2ab9;
L_7b2aae: /* 7b2aae: mov esi, dword ptr [ecx + 0x28] */
  esi = R32((uint32_t)(ecx + 0x28u));
/* 7b2ab1: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2ab3: je 0x7b2b93 */
  if (zf) goto L_7b2b93;
L_7b2ab9: /* 7b2ab9: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 7b2abd: cmp word ptr [eax], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2ac0: je 0x7b2b93 */
  if (zf) goto L_7b2b93;
L_7b2ac6: /* 7b2ac6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b2ac7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b2ac8: mov edi, eax */
  edi = eax;
/* 7b2aca: mov ebx, eax */
  ebx = eax;
/* 7b2acc: jmp 0x7b2ad0 */
  goto L_7b2ad0;
L_7b2ace: /* 7b2ace: xor edx, edx */
  edx = 0;
L_7b2ad0: /* 7b2ad0: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 7b2ad3: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 7b2ad7: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 7b2adb: xor edx, edx */
  edx = 0;
/* 7b2add: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b2adf: mov dx, word ptr [edi] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 7b2ae2: jne 0x7b2ae8 */
  if (!zf) goto L_7b2ae8;
L_7b2ae4: /* 7b2ae4: mov eax, edx */
  eax = edx;
/* 7b2ae6: jmp 0x7b2b14 */
  goto L_7b2b14;
L_7b2ae8: /* 7b2ae8: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 7b2aeb: movzx eax, dx */
  eax = (uint32_t)((edx & 0xffffu));
/* 7b2aee: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7b2aef: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7b2af1: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 7b2af4: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 7b2af7: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2afa: je 0x7b2b0f */
  if (zf) goto L_7b2b0f;
L_7b2afc: /* 7b2afc: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 7b2aff: nop  */
L_7b2b00: /* 7b2b00: cmp word ptr [ecx + eax*8 + 4], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + eax*8 + 0x4u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2b05: je 0x7b2b4c */
  if (zf) goto L_7b2b4c;
L_7b2b07: /* 7b2b07: mov eax, dword ptr [ecx + eax*8] */
  eax = R32((uint32_t)(ecx + eax*8));
/* 7b2b0a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2b0d: jne 0x7b2b00 */
  if (!zf) goto L_7b2b00;
L_7b2b0f: /* 7b2b0f: mov eax, 0x20 */
  eax = 0x20u;
L_7b2b14: /* 7b2b14: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 7b2b17: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 7b2b1a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b2b1c: jge 0x7b2b35 */
  if ((sf == of)) goto L_7b2b35;
L_7b2b1e: /* 7b2b1e: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* 7b2b21: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 7b2b24: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 7b2b27: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7b2b2a: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7b2b2d: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 7b2b31: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
L_7b2b35: /* 7b2b35: cmp word ptr [edi + 2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi + 0x2u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2b3a: je 0x7b2b59 */
  if (zf) goto L_7b2b59;
L_7b2b3c: /* 7b2b3c: fild dword ptr [esi + 0x58] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x58u)); FPUSH(v); }
/* 7b2b3f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7b2b43: fadd dword ptr [eax + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x2cu)));
/* 7b2b46: fiadd dword ptr [esp + 0x24] */
  ST0 = ST0 + ((double)(int32_t)R32((uint32_t)(esp + 0x24u)));
/* 7b2b4a: jmp 0x7b2b5d */
  goto L_7b2b5d;
L_7b2b4c: /* 7b2b4c: lea eax, [ecx + eax*8 + 6] */
  eax = (uint32_t)(ecx + eax*8 + 0x6u);
/* 7b2b50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b2b52: je 0x7b2b0f */
  if (zf) goto L_7b2b0f;
L_7b2b54: /* 7b2b54: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 7b2b57: jmp 0x7b2b14 */
  goto L_7b2b14;
L_7b2b59: /* 7b2b59: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
L_7b2b5d: /* 7b2b5d: fmul dword ptr [esp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x1cu)));
/* 7b2b61: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b2b66u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b2b66: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 7b2b6a: mov edi, eax */
  edi = eax;
/* 7b2b6c: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 7b2b70: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b2b75u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b2b75: add dword ptr [ebp], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp), r);
  }
/* 7b2b78: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 7b2b7c: cmp dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b2b7e: jge 0x7b2b82 */
  if ((sf == of)) goto L_7b2b82;
L_7b2b80: /* 7b2b80: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_7b2b82: /* 7b2b82: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 7b2b85: cmp word ptr [ebx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2b89: mov edi, ebx */
  edi = ebx;
/* 7b2b8b: jne 0x7b2ace */
  if (!zf) goto L_7b2ace;
L_7b2b91: /* 7b2b91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b2b92: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_7b2b93: /* 7b2b93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b2b94: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b2b95: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7b2b96: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_7b2bf0(void) {
  LOAD_REGS();
L_7b2bf0: /* 7b2bf0: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b2bf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b2bf4: mov esi, ecx */
  esi = ecx;
/* 7b2bf6: movzx eax, byte ptr [esi + 0x5b] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x5bu)));
/* 7b2bfa: movzx ecx, byte ptr [esi + 0x58] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x58u)));
/* 7b2bfe: movzx edx, byte ptr [esi + 0x59] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0x59u)));
/* 7b2c02: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 7b2c06: movzx eax, byte ptr [esi + 0x5a] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x5au)));
/* 7b2c0a: fild dword ptr [esp + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 7b2c0e: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 7b2c12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b2c14: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 7b2c1a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7b2c1c: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 7b2c20: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 7b2c24: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b2c27: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 7b2c2d: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 7b2c31: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 7b2c35: mov eax, esp */
  eax = esp;
/* 7b2c37: mov ecx, eax */
  ecx = eax;
/* 7b2c39: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 7b2c3f: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 7b2c43: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 7b2c49: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 7b2c4d: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 7b2c51: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7b2c53: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 7b2c57: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 7b2c5b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7b2c5e: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 7b2c62: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 7b2c66: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7b2c69: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 7b2c6c: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 7b2c6f: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b2c74u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b2c74: fld dword ptr [esi + 0x44] */
  { double v = F32((uint32_t)(esi + 0x44u)); FPUSH(v); }
/* 7b2c77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2c78: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b2c7du); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b2c7d: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 7b2c81: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 7b2c85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2c86: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 7b2c8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2c8b: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* 7b2c8f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b2c90: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b2c91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b2c92: call 0x7b1490 */
  esp -= 4; W32(esp, 0x7b2c97u); SPILL(); f_7b1490(); if (g_unwind) return; RELOAD();
/* 7b2c97: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b2c9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b2c9b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b2c9e: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7b2ce0(void) {
  LOAD_REGS();
L_7b2ce0: /* 7b2ce0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b2ce1: mov ebp, esp */
  ebp = esp;
/* 7b2ce3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b2ce5: push 0x9cef29 */
  { uint32_t v = 0x9cef29u; esp -= 4; W32(esp, v); }
/* 7b2cea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b2cf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2cf1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b2cf8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b2cfb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b2cfc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b2cfd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b2cfe: mov edi, ecx */
  edi = ecx;
/* 7b2d00: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7b2d03: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b2d06: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b2d0d: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7b2d13u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7b2d13: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7b2d16: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b2d19: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b2d1c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b2d1f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b2d20: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b2d23: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7b2d26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2d27: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b2d2c: mov ebx, 1 */
  ebx = 0x1u;
/* 7b2d31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b2d32: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 7b2d35: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b2d38u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b2d38: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b2d3b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b2d3e: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 7b2d41: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b2d44: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b2d45: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b2d48: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7b2d4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2d4c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b2d51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b2d52: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b2d55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b2d55: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b2d58: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b2d59: mov eax, edx */
  eax = edx;
/* 7b2d5b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7b2d5e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2d61: jne 0x7b2d79 */
  if (!zf) goto L_7b2d79;
L_7b2d63: /* 7b2d63: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b2d66: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b2d67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b2d69: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b2d6c: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b2d72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b2d73: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b2d79u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b2d79: /* 7b2d79: mov al, byte ptr [edi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x50u))) & 0xffu);
/* 7b2d7c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b2d7e: je 0x7b2d9d */
  if (zf) goto L_7b2d9d;
L_7b2d80: /* 7b2d80: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 7b2d83: xor eax, eax */
  eax = 0;
/* 7b2d85: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2d87: jne 0x7b2dbd */
  if (!zf) goto L_7b2dbd;
L_7b2d89: /* 7b2d89: push 0xacf02c */
  { uint32_t v = 0xacf02cu; esp -= 4; W32(esp, v); }
/* 7b2d8e: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 7b2d93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b2d94: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7b2d9au); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7b2d9a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7b2d9d: /* 7b2d9d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7b2da0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b2da4: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b2daau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b2daa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b2dad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b2dae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b2daf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b2db6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b2db7: mov esp, ebp */
  esp = ebp;
/* 7b2db9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b2dba: ret 8 */
  esp += 12; SPILL(); return;
L_7b2dbd: /* 7b2dbd: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7b2dc0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7b2dc3: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 7b2dc6: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7b2dccu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7b2dcc: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 7b2dcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2dd0: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 7b2dd3: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7b2dd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2dd6: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7b2ddb: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7b2de0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b2de1: movzx ecx, byte ptr [edi + 0x50] */
  ecx = (uint32_t)(R8((uint32_t)(edi + 0x50u)));
/* 7b2de5: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7b2de8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b2de9: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7b2dec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2ded: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b2dee: mov ecx, edi */
  ecx = edi;
/* 7b2df0: call 0x6c2063 */
  esp -= 4; W32(esp, 0x7b2df5u); SPILL(); f_6c2063(); if (g_unwind) return; RELOAD();
/* 7b2df5: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7b2df8: fadd dword ptr [edi + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x44u)));
/* 7b2dfb: fstp dword ptr [edi + 0x44] */
  WF32((uint32_t)(edi + 0x44u), ST0); FPOP();
/* 7b2dfe: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 7b2e01: fld dword ptr [edi + 0x54] */
  { double v = F32((uint32_t)(edi + 0x54u)); FPUSH(v); }
/* 7b2e04: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 7b2e07: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7b2e09: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b2e0b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b2e0e: jne 0x7b2e15 */
  if (!zf) goto L_7b2e15;
L_7b2e10: /* 7b2e10: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b2e12: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
L_7b2e15: /* 7b2e15: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b2e18: fst dword ptr [edi + 0x54] */
  WF32((uint32_t)(edi + 0x54u), ST0);
/* 7b2e1b: xor eax, eax */
  eax = 0;
/* 7b2e1d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2e1f: je 0x7b2e32 */
  if (zf) goto L_7b2e32;
L_7b2e21: /* 7b2e21: fadd dword ptr [edi + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x48u)));
/* 7b2e24: mov dword ptr [edi + 0x44], eax */
  W32((uint32_t)(edi + 0x44u), eax);
/* 7b2e27: mov dword ptr [edi + 0x54], eax */
  W32((uint32_t)(edi + 0x54u), eax);
/* 7b2e2a: fstp dword ptr [edi + 0x48] */
  WF32((uint32_t)(edi + 0x48u), ST0); FPOP();
/* 7b2e2d: jmp 0x7b2d9d */
  goto L_7b2d9d;
L_7b2e32: /* 7b2e32: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b2e34: jmp 0x7b2d9d */
  goto L_7b2d9d;
}

void f_7b2e39(void) {
  LOAD_REGS();
L_7b2e39: /* 7b2e39: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7b2e3c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b2e41: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 7b2e44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2e45: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 7b2e48: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b2e4du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b2e4d(); return;
}

void f_7b2e4d(void) {
  LOAD_REGS();
L_7b2e4d: /* 7b2e4d: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 7b2e53: push 0xa0ce50 */
  { uint32_t v = 0xa0ce50u; esp -= 4; W32(esp, v); }
/* 7b2e58: push 0xacf050 */
  { uint32_t v = 0xacf050u; esp -= 4; W32(esp, v); }
/* 7b2e5d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7b2e5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b2e5f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7b2e62: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7b2e65: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b2e68: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 7b2e6b: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 7b2e71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b2e74: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7b2e76: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b2e77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b2e79: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7b2e7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b2e7b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b2e7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2e7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b2e81: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7b2e83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b2e83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2e84: push 0xacf058 */
  { uint32_t v = 0xacf058u; esp -= 4; W32(esp, v); }
/* 7b2e89: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7b2e8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b2e8b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b2e8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b2e90: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b2e92: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b2e97u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b2e97: guest_badaddr(0x7b2e97); return;
}

void f_7b2f10(void) {
  LOAD_REGS();
L_7b2f10: /* 7b2f10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b2f11: mov ebp, esp */
  ebp = esp;
/* 7b2f13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b2f15: push 0x9cef49 */
  { uint32_t v = 0x9cef49u; esp -= 4; W32(esp, v); }
/* 7b2f1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b2f20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2f21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b2f28: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b2f2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b2f2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b2f2d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b2f2e: mov edi, ecx */
  edi = ecx;
/* 7b2f30: xor ebx, ebx */
  ebx = 0;
/* 7b2f32: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7b2f35: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b2f38: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7b2f3b: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7b2f41u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7b2f41: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7b2f44: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b2f47: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b2f4a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b2f4d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b2f4e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b2f51: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 7b2f54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2f55: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b2f5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b2f5b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7b2f5f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b2f62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b2f62: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b2f65: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b2f68: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 7b2f6b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b2f6e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b2f6f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b2f72: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7b2f75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2f76: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b2f7b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b2f7c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b2f7fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b2f7f: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b2f82: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b2f83: mov eax, edx */
  eax = edx;
/* 7b2f85: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7b2f88: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2f8b: jne 0x7b2fa2 */
  if (!zf) goto L_7b2fa2;
L_7b2f8d: /* 7b2f8d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b2f90: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b2f91: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b2f92: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b2f95: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b2f9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b2f9c: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b2fa2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b2fa2: /* 7b2fa2: cmp dword ptr [edi + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b2fa5: jne 0x7b2fd6 */
  if (!zf) goto L_7b2fd6;
L_7b2fa7: /* 7b2fa7: push 0xacf194 */
  { uint32_t v = 0xacf194u; esp -= 4; W32(esp, v); }
/* 7b2fac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b2fad: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7b2fb3u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7b2fb3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7b2fb6: /* 7b2fb6: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7b2fb9: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b2fbd: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b2fc3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b2fc3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b2fc6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b2fc7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b2fc8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b2fcf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b2fd0: mov esp, ebp */
  esp = ebp;
/* 7b2fd2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b2fd3: ret 8 */
  esp += 12; SPILL(); return;
L_7b2fd6: /* 7b2fd6: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 7b2fd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b2fda: lea ecx, [edi + 0x58] */
  ecx = (uint32_t)(edi + 0x58u);
/* 7b2fdd: call 0x6c3e7c */
  esp -= 4; W32(esp, 0x7b2fe2u); SPILL(); f_6c3e7c(); if (g_unwind) return; RELOAD();
/* 7b2fe2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b2fe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b2fe6: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 7b2fe9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7b2feb: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b2fee: mov eax, esp */
  eax = esp;
/* 7b2ff0: mov edx, eax */
  edx = eax;
/* 7b2ff2: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7b2ff4: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 7b2ff7: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7b2ffa: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 7b2ffd: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7b3000: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7b3003: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 7b3006: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 7b3009: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7b300c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7b3012u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7b3012: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* 7b3015: mov esi, eax */
  esi = eax;
/* 7b3017: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b301cu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b301c: fld dword ptr [edi + 0x44] */
  { double v = F32((uint32_t)(edi + 0x44u)); FPUSH(v); }
/* 7b301f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b3020: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b3025u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b3025: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b3026: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* 7b3029: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7b302e: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7b3033: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b3034: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b3035: mov eax, esi */
  eax = esi;
/* 7b3037: call 0x7b1490 */
  esp -= 4; W32(esp, 0x7b303cu); SPILL(); f_7b1490(); if (g_unwind) return; RELOAD();
/* 7b303c: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b303f: jmp 0x7b2fb6 */
  goto L_7b2fb6;
}

void f_7b3044(void) {
  LOAD_REGS();
L_7b3044: /* 7b3044: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b3047: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b304c: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7b304f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b3050: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7b3053: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b3058u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b3058(); return;
}

void f_7b3058(void) {
  LOAD_REGS();
L_7b3058: /* 7b3058: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 7b305e: push 0xa0ce84 */
  { uint32_t v = 0xa0ce84u; esp -= 4; W32(esp, v); }
/* 7b3063: push 0xacf1e0 */
  { uint32_t v = 0xacf1e0u; esp -= 4; W32(esp, v); }
/* 7b3068: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7b306au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b306a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7b306d: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 7b3070: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b3073: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 7b3076: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 7b307c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b307f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7b3081: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b3082: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b3084: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7b3086u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b3086: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b3089: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b308a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b308c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x7b308eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b308e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b308f: push 0xacf1e8 */
  { uint32_t v = 0xacf1e8u; esp -= 4; W32(esp, v); }
/* 7b3094: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x7b3096u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b3096: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b3099: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b309b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b309d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b30a2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b30a2: guest_badaddr(0x7b30a2); return;
}

void f_7b3120(void) {
  LOAD_REGS();
L_7b3120: /* 7b3120: mov eax, ecx */
  eax = ecx;
/* 7b3122: mov dword ptr [eax + 0x100], 0 */
  W32((uint32_t)(eax + 0x100u), 0x0u);
/* 7b312c: ret  */
  esp += 4; SPILL(); return;
}

void f_7b3140(void) {
  LOAD_REGS();
L_7b3140: /* 7b3140: mov eax, ecx */
  eax = ecx;
/* 7b3142: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7b3146: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b3148: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7b314a: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 7b314d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7b3150: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7b3170(void) {
  LOAD_REGS();
L_7b3170: /* 7b3170: xor eax, eax */
  eax = 0;
/* 7b3172: ret  */
  esp += 4; SPILL(); return;
}

void f_7b3190(void) {
  LOAD_REGS();
L_7b3190: /* 7b3190: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 7b3196: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b3198: je 0x7b31a9 */
  if (zf) goto L_7b31a9;
L_7b319a: /* 7b319a: test byte ptr [eax + 0x390], 0x24 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x390u))); uint8_t b = (uint8_t)(0x24u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b31a1: je 0x7b31a9 */
  if (zf) goto L_7b31a9;
L_7b31a3: /* 7b31a3: mov eax, 1 */
  eax = 0x1u;
/* 7b31a8: ret  */
  esp += 4; SPILL(); return;
L_7b31a9: /* 7b31a9: xor eax, eax */
  eax = 0;
/* 7b31ab: ret  */
  esp += 4; SPILL(); return;
}

void f_7b31c0(void) {
  LOAD_REGS();
L_7b31c0: /* 7b31c0: xor eax, eax */
  eax = 0;
/* 7b31c2: ret  */
  esp += 4; SPILL(); return;
}

void f_7b31e0(void) {
  LOAD_REGS();
L_7b31e0: /* 7b31e0: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 7b31e6: mov eax, dword ptr [eax + 0x390] */
  eax = R32((uint32_t)(eax + 0x390u));
/* 7b31ec: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b31ef: je 0x7b31fb */
  if (zf) goto L_7b31fb;
L_7b31f1: /* 7b31f1: test eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b31f6: jne 0x7b31fb */
  if (!zf) goto L_7b31fb;
L_7b31f8: /* 7b31f8: xor eax, eax */
  eax = 0;
/* 7b31fa: ret  */
  esp += 4; SPILL(); return;
L_7b31fb: /* 7b31fb: mov dword ptr [ecx + 0x36c], 0xbf800000 */
  W32((uint32_t)(ecx + 0x36cu), 0xbf800000u);
/* 7b3205: mov eax, 1 */
  eax = 0x1u;
/* 7b320a: ret  */
  esp += 4; SPILL(); return;
}

void f_7b3220(void) {
  LOAD_REGS();
L_7b3220: /* 7b3220: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7b3224: test byte ptr [eax + 0x390], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x390u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b322b: je 0x7b323a */
  if (zf) goto L_7b323a;
L_7b322d: /* 7b322d: call dword ptr [0xcfa634] */
  esp -= 4; W32(esp, 0x7b3233u); SPILL(); f_4e1fc3(); if (g_unwind) return; /* Core!?appFrand@@YAMXZ */ RELOAD();
/* 7b3233: fadd dword ptr [0xa0cecc] */
  ST0 = ST0 + (F32((uint32_t)(0xa0ceccu)));
/* 7b3239: ret  */
  esp += 4; SPILL(); return;
L_7b323a: /* 7b323a: jmp dword ptr [0xcfa634] */
  SPILL(); f_4e1fc3(); return; /* Core!?appFrand@@YAMXZ */
}

void f_7b3250(void) {
  LOAD_REGS();
L_7b3250: /* 7b3250: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b3251: mov ebp, esp */
  ebp = esp;
/* 7b3253: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b3255: push 0x9cef60 */
  { uint32_t v = 0x9cef60u; esp -= 4; W32(esp, v); }
/* 7b325a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b3260: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b3261: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b3268: sub esp, 0x120 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x120u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b326e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7b3271: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7b3274: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b3275: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b3276: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b3277: xor edi, edi */
  edi = 0;
/* 7b3279: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b327a: mov esi, ecx */
  esi = ecx;
/* 7b327c: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7b327f: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3282: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b3285: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7b3288: jne 0x7b329e */
  if (!zf) goto L_7b329e;
L_7b328a: /* 7b328a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7b328d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b328e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b328f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7b3292: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b3293: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b3298: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x7b329eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b329e: /* 7b329e: mov eax, dword ptr [esi + 0x344] */
  eax = R32((uint32_t)(esi + 0x344u));
/* 7b32a4: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b32a6: je 0x7b32bc */
  if (zf) goto L_7b32bc;
L_7b32a8: /* 7b32a8: cmp dword ptr [eax + 0x394], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x394u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b32ae: jne 0x7b32b6 */
  if (!zf) goto L_7b32b6;
L_7b32b0: /* 7b32b0: mov dword ptr [eax + 0x394], edi */
  W32((uint32_t)(eax + 0x394u), edi);
L_7b32b6: /* 7b32b6: mov dword ptr [esi + 0x344], edi */
  W32((uint32_t)(esi + 0x344u), edi);
L_7b32bc: /* 7b32bc: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 7b32c2: mov eax, dword ptr [ecx + 0x514] */
  eax = R32((uint32_t)(ecx + 0x514u));
/* 7b32c8: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 7b32cb: mov dl, 1 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 7b32cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7b32d0: /* 7b32d0: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b32d2: je 0x7b32f1 */
  if (zf) goto L_7b32f1;
L_7b32d4: /* 7b32d4: test byte ptr [eax + 0x350], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x350u))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b32da: je 0x7b33b6 */
  if (zf) goto L_7b33b6;
L_7b32e0: /* 7b32e0: mov ecx, dword ptr [eax + 0x33c] */
  ecx = R32((uint32_t)(eax + 0x33cu));
/* 7b32e6: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b32e8: je 0x7b33b6 */
  if (zf) goto L_7b33b6;
L_7b32ee: /* 7b32ee: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
L_7b32f1: /* 7b32f1: cmp dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b32f4: je 0x7b3459 */
  if (zf) goto L_7b3459;
L_7b32fa: /* 7b32fa: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 7b3300: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 7b3303: mov edi, dword ptr [edx + 0x510] */
  edi = R32((uint32_t)(edx + 0x510u));
/* 7b3309: mov ebx, 0x200 */
  ebx = 0x200u;
/* 7b330e: mov edi, edi */
  edi = edi;
L_7b3310: /* 7b3310: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b3312: je 0x7b33c1 */
  if (zf) goto L_7b33c1;
L_7b3318: /* 7b3318: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 7b331e: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7b3321: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 7b3327: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 7b332d: fsub dword ptr [edi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x174u)));
/* 7b3333: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 7b3339: fsub dword ptr [edi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x170u)));
/* 7b333f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7b3342: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7b3345: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7b3348: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7b334eu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7b334e: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 7b3351: call 0x99c958 */
  esp -= 4; W32(esp, 0x7b3356u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 7b3356: mov ecx, eax */
  ecx = eax;
/* 7b3358: cmp ecx, 0x15f900 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x15f900u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b335e: jge 0x7b33ab */
  if ((sf == of)) goto L_7b33ab;
L_7b3360: /* 7b3360: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 7b3366: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 7b336c: fcomp qword ptr [0xa0cf18] */
  fpu_com(ST0, F64((uint32_t)(0xa0cf18u)));
  FPOP();
/* 7b3372: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b3374: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b3377: jp 0x7b33ab */
  if (pf) goto L_7b33ab;
L_7b3379: /* 7b3379: mov eax, dword ptr [edi + 0x394] */
  eax = R32((uint32_t)(edi + 0x394u));
/* 7b337f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b3381: je 0x7b339e */
  if (zf) goto L_7b339e;
L_7b3383: /* 7b3383: test dword ptr [eax + 0x80], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b3389: jne 0x7b339e */
  if (!zf) goto L_7b339e;
L_7b338b: /* 7b338b: fld dword ptr [eax + 0x33c] */
  { double v = F32((uint32_t)(eax + 0x33cu)); FPUSH(v); }
/* 7b3391: fcomp dword ptr [esi + 0x33c] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x33cu)));
  FPOP();
/* 7b3397: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b3399: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b339c: jp 0x7b33ab */
  if (pf) goto L_7b33ab;
L_7b339e: /* 7b339e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b339f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b33a0: lea ecx, [ebp - 0x12c] */
  ecx = (uint32_t)(ebp + 0xfffffed4u);
/* 7b33a6: call 0x6c13c0 */
  esp -= 4; W32(esp, 0x7b33abu); SPILL(); f_6c13c0(); if (g_unwind) return; RELOAD();
L_7b33ab: /* 7b33ab: mov edi, dword ptr [edi + 0x370] */
  edi = R32((uint32_t)(edi + 0x370u));
/* 7b33b1: jmp 0x7b3310 */
  goto L_7b3310;
L_7b33b6: /* 7b33b6: mov eax, dword ptr [eax + 0x364] */
  eax = R32((uint32_t)(eax + 0x364u));
/* 7b33bc: jmp 0x7b32d0 */
  goto L_7b32d0;
L_7b33c1: /* 7b33c1: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7b33c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7b33c6: jle 0x7b33fd */
  if ((zf || sf != of)) goto L_7b33fd;
L_7b33c8: /* 7b33c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b33ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b33cc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b33cf: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 7b33d5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7b33d7: mov ecx, esp */
  ecx = esp;
/* 7b33d9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7b33db: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7b33de: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7b33e1: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7b33e4: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7b33e7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 7b33ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b33eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b33ec: lea ecx, [ebp - 0x12c] */
  ecx = (uint32_t)(ebp + 0xfffffed4u);
/* 7b33f2: call 0x6c37d8 */
  esp -= 4; W32(esp, 0x7b33f7u); SPILL(); f_6c37d8(); if (g_unwind) return; RELOAD();
/* 7b33f7: mov dword ptr [esi + 0x344], eax */
  W32((uint32_t)(esi + 0x344u), eax);
L_7b33fd: /* 7b33fd: mov eax, dword ptr [esi + 0x344] */
  eax = R32((uint32_t)(esi + 0x344u));
/* 7b3403: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b3405: je 0x7b3459 */
  if (zf) goto L_7b3459;
L_7b3407: /* 7b3407: mov dword ptr [eax + 0x394], esi */
  W32((uint32_t)(eax + 0x394u), esi);
/* 7b340d: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 7b3413: mov eax, dword ptr [esi + 0x344] */
  eax = R32((uint32_t)(esi + 0x344u));
/* 7b3419: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 7b341f: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b3424: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 7b342a: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 7b342d: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7b3430: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 7b3436: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7b3438: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7b343b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 7b343e: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7b3441: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x7b3447u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 7b3447: mov edx, dword ptr [esi + 0x344] */
  edx = R32((uint32_t)(esi + 0x344u));
/* 7b344d: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 7b3450: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7b3453: mov dword ptr [edx + 0x398], eax */
  W32((uint32_t)(edx + 0x398u), eax);
L_7b3459: /* 7b3459: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b345c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b345d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b345e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b3465: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b3466: mov esp, ebp */
  esp = ebp;
/* 7b3468: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b3469: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b346c(void) {
  LOAD_REGS();
L_7b346c: /* 7b346c: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7b346f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b3474: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 7b3477: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b3478: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7b347b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b3480u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b3480(); return;
}

void f_7b3480(void) {
  LOAD_REGS();
L_7b3480: /* 7b3480: push 0xa0ced0 */
  { uint32_t v = 0xa0ced0u; esp -= 4; W32(esp, v); }
/* 7b3485: push 0xacf7c4 */
  { uint32_t v = 0xacf7c4u; esp -= 4; W32(esp, v); }
/* 7b348a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b3490u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b3490: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b3493: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b3495: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b3497: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b349cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b349c: guest_badaddr(0x7b349c); return;
}

void f_7b3540(void) {
  LOAD_REGS();
L_7b3540: /* 7b3540: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b3541: mov ebp, esp */
  ebp = esp;
/* 7b3543: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b3545: push 0x9cef70 */
  { uint32_t v = 0x9cef70u; esp -= 4; W32(esp, v); }
/* 7b354a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b3550: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b3551: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b3558: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b355b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7b355e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7b3561: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b3562: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b3563: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b3564: mov esi, ecx */
  esi = ecx;
/* 7b3566: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7b3569: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b356c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b356d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b3570: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b3577: jne 0x7b358e */
  if (!zf) goto L_7b358e;
L_7b3579: /* 7b3579: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7b357c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b357d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b357f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7b3582: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b3583: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b3588: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x7b358eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b358e: /* 7b358e: mov eax, dword ptr [esi + 0x344] */
  eax = R32((uint32_t)(esi + 0x344u));
/* 7b3594: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b3596: je 0x7b35aa */
  if (zf) goto L_7b35aa;
L_7b3598: /* 7b3598: cmp dword ptr [eax + 0x394], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x394u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b359e: jne 0x7b35aa */
  if (!zf) goto L_7b35aa;
L_7b35a0: /* 7b35a0: mov dword ptr [eax + 0x394], 0 */
  W32((uint32_t)(eax + 0x394u), 0x0u);
L_7b35aa: /* 7b35aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b35ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b35ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b35af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b35b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b35b7: mov esp, ebp */
  esp = ebp;
/* 7b35b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b35ba: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b35bd(void) {
  LOAD_REGS();
L_7b35bd: /* 7b35bd: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b35c0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b35c5: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7b35c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b35c9: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7b35cc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b35d1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b35d1(); return;
}

void f_7b35d1(void) {
  LOAD_REGS();
L_7b35d1: /* 7b35d1: push 0xa0cf28 */
  { uint32_t v = 0xa0cf28u; esp -= 4; W32(esp, v); }
/* 7b35d6: push 0xacf7cc */
  { uint32_t v = 0xacf7ccu; esp -= 4; W32(esp, v); }
/* 7b35db: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b35e1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b35e1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b35e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b35e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b35e8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b35edu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b35ed: guest_badaddr(0x7b35ed); return;
}

void f_7b3620(void) {
  LOAD_REGS();
L_7b3620: /* 7b3620: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7b3624: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b3625: mov esi, ecx */
  esi = ecx;
/* 7b3627: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 7b362a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7b362b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 7b362e: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3631: jne 0x7b3648 */
  if (!zf) goto L_7b3648;
L_7b3633: /* 7b3633: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7b3634: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 7b3637: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7b363a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b363c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b363d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b3642: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x7b3648u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b3648: /* 7b3648: mov ecx, esi */
  ecx = esi;
/* 7b364a: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7b3650u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7b3650: cmp dword ptr [eax + 0x28], 0x180 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(0x180u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3657: jne 0x7b3663 */
  if (!zf) goto L_7b3663;
L_7b3659: /* 7b3659: mov dword ptr [esi + 0x160], 0xbf800000 */
  W32((uint32_t)(esi + 0x160u), 0xbf800000u);
L_7b3663: /* 7b3663: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b3664: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b3690(void) {
  LOAD_REGS();
L_7b3690: /* 7b3690: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7b3694: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b3695: mov esi, ecx */
  esi = ecx;
/* 7b3697: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 7b369a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7b369b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 7b369e: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b36a1: jne 0x7b36b8 */
  if (!zf) goto L_7b36b8;
L_7b36a3: /* 7b36a3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7b36a4: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 7b36a7: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7b36aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b36ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b36ad: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b36b2: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x7b36b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b36b8: /* 7b36b8: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 7b36be: mov ecx, dword ptr [eax + 0x514] */
  ecx = R32((uint32_t)(eax + 0x514u));
/* 7b36c4: mov dword ptr [esi + 0x364], ecx */
  W32((uint32_t)(esi + 0x364u), ecx);
/* 7b36ca: mov dword ptr [eax + 0x514], esi */
  W32((uint32_t)(eax + 0x514u), esi);
/* 7b36d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b36d1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b3700(void) {
  LOAD_REGS();
L_7b3700: /* 7b3700: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7b3704: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b3705: mov esi, ecx */
  esi = ecx;
/* 7b3707: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 7b370a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7b370b: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 7b370e: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3711: jne 0x7b3728 */
  if (!zf) goto L_7b3728;
L_7b3713: /* 7b3713: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7b3714: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 7b3717: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7b371a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b371c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b371d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b3722: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x7b3728u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b3728: /* 7b3728: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 7b372e: mov eax, dword ptr [ecx + 0x514] */
  eax = R32((uint32_t)(ecx + 0x514u));
/* 7b3734: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3736: jne 0x7b3748 */
  if (!zf) goto L_7b3748;
L_7b3738: /* 7b3738: mov edx, dword ptr [eax + 0x364] */
  edx = R32((uint32_t)(eax + 0x364u));
/* 7b373e: mov dword ptr [ecx + 0x514], edx */
  W32((uint32_t)(ecx + 0x514u), edx);
/* 7b3744: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b3745: ret 8 */
  esp += 12; SPILL(); return;
L_7b3748: /* 7b3748: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b374a: je 0x7b3770 */
  if (zf) goto L_7b3770;
L_7b374c: /* 7b374c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7b3750: /* 7b3750: mov ecx, dword ptr [eax + 0x364] */
  ecx = R32((uint32_t)(eax + 0x364u));
/* 7b3756: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3758: je 0x7b3764 */
  if (zf) goto L_7b3764;
L_7b375a: /* 7b375a: mov eax, ecx */
  eax = ecx;
/* 7b375c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b375e: jne 0x7b3750 */
  if (!zf) goto L_7b3750;
L_7b3760: /* 7b3760: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b3761: ret 8 */
  esp += 12; SPILL(); return;
L_7b3764: /* 7b3764: mov ecx, dword ptr [esi + 0x364] */
  ecx = R32((uint32_t)(esi + 0x364u));
/* 7b376a: mov dword ptr [eax + 0x364], ecx */
  W32((uint32_t)(eax + 0x364u), ecx);
L_7b3770: /* 7b3770: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b3771: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b37a0(void) {
  LOAD_REGS();
L_7b37a0: /* 7b37a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7b37a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b37a5: mov esi, ecx */
  esi = ecx;
/* 7b37a7: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 7b37aa: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7b37ab: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 7b37ae: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b37b1: jne 0x7b37c8 */
  if (!zf) goto L_7b37c8;
L_7b37b3: /* 7b37b3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7b37b4: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 7b37b7: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7b37ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b37bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b37bd: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b37c2: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x7b37c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b37c8: /* 7b37c8: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7b37ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b37d0: mov dword ptr [esi + 0x160], 0x40800000 */
  W32((uint32_t)(esi + 0x160u), 0x40800000u);
/* 7b37da: je 0x7b37f1 */
  if (zf) goto L_7b37f1;
L_7b37dc: /* 7b37dc: cmp byte ptr [eax + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b37e0: jne 0x7b37f1 */
  if (!zf) goto L_7b37f1;
L_7b37e2: /* 7b37e2: mov ecx, esi */
  ecx = esi;
/* 7b37e4: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7b37eau); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7b37ea: mov dword ptr [eax + 0x28], 0x210 */
  W32((uint32_t)(eax + 0x28u), 0x210u);
L_7b37f1: /* 7b37f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b37f2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b3820(void) {
  LOAD_REGS();
L_7b3820: /* 7b3820: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b3823: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b3824: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 7b3828: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b382b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b382e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b382f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b3830: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b3833: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 7b3837: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b3838: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b383d: mov edi, ecx */
  edi = ecx;
/* 7b383f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b3842: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b3843: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b3846u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b3846: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b3849: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b384c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b384d: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7b3851: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b3852: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b3855: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b3858: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b385d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b385e: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b3861u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b3861: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b3864: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 7b386c: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b386f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b3870: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 7b3874: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b3875: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b3878: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b387b: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b3880: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b3881: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b3884u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b3884: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b3887: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 7b388f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b3892: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b3893: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 7b3897: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b3898: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b389b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b389e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b38a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b38a4: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b38a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b38a7: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b38aa: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b38ab: mov eax, edx */
  eax = edx;
/* 7b38ad: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7b38b0: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b38b3: jne 0x7b38cb */
  if (!zf) goto L_7b38cb;
L_7b38b5: /* 7b38b5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b38b8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b38b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b38bb: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b38be: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b38c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b38c5: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b38cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b38cb: /* 7b38cb: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 7b38cf: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7b38d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b38d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b38d5: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7b38d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b38db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b38dc: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 7b38e0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b38e3: mov edx, esp */
  edx = esp;
/* 7b38e5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7b38e7: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 7b38eb: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7b38ee: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7b38f1: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 7b38f5: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 7b38f9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b38fc: mov ecx, esp */
  ecx = esp;
/* 7b38fe: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7b3900: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 7b3904: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7b3907: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 7b390b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7b390e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b390f: mov ecx, edi */
  ecx = edi;
/* 7b3911: call 0x6cc73e */
  esp -= 4; W32(esp, 0x7b3916u); SPILL(); f_6cc73e(); if (g_unwind) return; RELOAD();
/* 7b3916: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7b3918: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 7b391c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7b391e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7b3921: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7b3924: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7b3927: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b3928: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7b392b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b392c: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b392f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b3990(void) {
  LOAD_REGS();
L_7b3990: /* 7b3990: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b3993: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b3994: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 7b3998: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b399b: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 7b39a3: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b39a6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b39a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b39a8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b39ab: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 7b39af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b39b0: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b39b5: mov edi, ecx */
  edi = ecx;
/* 7b39b7: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b39ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b39bb: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b39beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b39be: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b39c1: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 7b39c9: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b39cc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b39cd: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 7b39d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b39d2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b39d5: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b39d8: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b39dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b39de: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b39e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b39e1: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b39e4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b39e5: mov eax, edx */
  eax = edx;
/* 7b39e7: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7b39ea: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b39ed: jne 0x7b3a05 */
  if (!zf) goto L_7b3a05;
L_7b39ef: /* 7b39ef: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b39f2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b39f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b39f5: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b39f8: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b39fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b39ff: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b3a05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b3a05: /* 7b3a05: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7b3a0b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b3a0d: je 0x7b3a5a */
  if (zf) goto L_7b3a5a;
L_7b3a0f: /* 7b3a0f: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7b3a13: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 7b3a17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b3a18: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b3a19: add edi, 0x374 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x374u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7b3a1f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7b3a21: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b3a24: mov eax, esp */
  eax = esp;
/* 7b3a26: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7b3a28: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 7b3a2b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7b3a2e: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 7b3a31: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7b3a34: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 7b3a38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b3a39: call 0x6cb2fd */
  esp -= 4; W32(esp, 0x7b3a3eu); SPILL(); f_6cb2fd(); if (g_unwind) return; RELOAD();
/* 7b3a3e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7b3a40: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 7b3a44: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7b3a46: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7b3a49: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7b3a4c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7b3a4f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7b3a52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b3a53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b3a54: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b3a57: ret 8 */
  esp += 12; SPILL(); return;
L_7b3a5a: /* 7b3a5a: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 7b3a5e: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 7b3a66: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 7b3a6a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7b3a6c: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 7b3a74: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7b3a78: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 7b3a80: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 7b3a84: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7b3a87: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b3a88: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7b3a8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b3a8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b3a8f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b3af0(void) {
  LOAD_REGS();
L_7b3af0: /* 7b3af0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b3af3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b3af4: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 7b3af8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b3afb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b3afe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b3aff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b3b00: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b3b03: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 7b3b07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b3b08: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b3b0d: mov edi, ecx */
  edi = ecx;
/* 7b3b0f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b3b12: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b3b13: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b3b16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b3b16: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b3b19: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 7b3b21: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b3b24: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b3b25: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 7b3b29: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b3b2a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b3b2d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b3b30: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b3b35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b3b36: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b3b39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b3b39: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b3b3c: mov dword ptr [esp + 8], 0x3f800000 */
  W32((uint32_t)(esp + 0x8u), 0x3f800000u);
/* 7b3b44: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b3b47: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b3b48: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 7b3b4c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b3b4d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b3b50: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b3b53: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b3b58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b3b59: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b3b5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b3b5c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b3b5f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b3b60: mov eax, edx */
  eax = edx;
/* 7b3b62: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7b3b65: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3b68: jne 0x7b3b80 */
  if (!zf) goto L_7b3b80;
L_7b3b6a: /* 7b3b6a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b3b6d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b3b6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b3b70: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b3b73: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b3b79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b3b7a: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b3b80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b3b80: /* 7b3b80: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7b3b86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b3b88: je 0x7b3ba9 */
  if (zf) goto L_7b3ba9;
L_7b3b8a: /* 7b3b8a: mov eax, dword ptr [edi + 0x3b4] */
  eax = R32((uint32_t)(edi + 0x3b4u));
/* 7b3b90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b3b92: je 0x7b3ba9 */
  if (zf) goto L_7b3ba9;
L_7b3b94: /* 7b3b94: mov ecx, edi */
  ecx = edi;
/* 7b3b96: mov dword ptr [edi + 0x38c], eax */
  W32((uint32_t)(edi + 0x38cu), eax);
/* 7b3b9c: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7b3ba2u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7b3ba2: mov dword ptr [eax + 0x28], 0x1ff */
  W32((uint32_t)(eax + 0x28u), 0x1ffu);
L_7b3ba9: /* 7b3ba9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b3baa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b3bab: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b3bae: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b3c00(void) {
  LOAD_REGS();
L_7b3c00: /* 7b3c00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b3c01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b3c02: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 7b3c06: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b3c09: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 7b3c11: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b3c14: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b3c15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b3c16: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b3c19: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 7b3c1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b3c1e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b3c23: mov edi, ecx */
  edi = ecx;
/* 7b3c25: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b3c28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b3c29: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b3c2cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b3c2c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b3c2f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b3c30: mov eax, edx */
  eax = edx;
/* 7b3c32: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7b3c35: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3c38: jne 0x7b3c50 */
  if (!zf) goto L_7b3c50;
L_7b3c3a: /* 7b3c3a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b3c3d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b3c3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b3c40: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b3c43: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b3c49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b3c4a: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b3c50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b3c50: /* 7b3c50: mov ecx, edi */
  ecx = edi;
/* 7b3c52: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7b3c58u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7b3c58: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 7b3c5b: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7b3c5f: xor ecx, ecx */
  ecx = 0;
/* 7b3c61: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3c63: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7b3c67: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7b3c6a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b3c6b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b3c6c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7b3c6e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7b3c6f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b3ca0(void) {
  LOAD_REGS();
L_7b3ca0: /* 7b3ca0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7b3ca4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b3ca5: mov esi, ecx */
  esi = ecx;
/* 7b3ca7: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 7b3caa: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7b3cab: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 7b3cae: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3cb1: jne 0x7b3cc8 */
  if (!zf) goto L_7b3cc8;
L_7b3cb3: /* 7b3cb3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7b3cb4: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 7b3cb7: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7b3cba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b3cbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b3cbd: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b3cc2: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x7b3cc8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b3cc8: /* 7b3cc8: mov ecx, esi */
  ecx = esi;
/* 7b3cca: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7b3cd0u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7b3cd0: mov dword ptr [eax + 0x28], 0x1fd */
  W32((uint32_t)(eax + 0x28u), 0x1fdu);
/* 7b3cd7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b3cd8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b3cf0(void) {
  LOAD_REGS();
L_7b3cf0: /* 7b3cf0: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 7b3cf6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b3cf8: jne 0x7b3cfc */
  if (!zf) goto L_7b3cfc;
L_7b3cfa: /* 7b3cfa: mov eax, ecx */
  eax = ecx;
L_7b3cfc: /* 7b3cfc: ret  */
  esp += 4; SPILL(); return;
}

void f_7b3d10(void) {
  LOAD_REGS();
L_7b3d10: /* 7b3d10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b3d11: mov ebp, esp */
  ebp = esp;
/* 7b3d13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b3d15: push 0x9cef80 */
  { uint32_t v = 0x9cef80u; esp -= 4; W32(esp, v); }
/* 7b3d1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b3d20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b3d21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b3d28: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b3d2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b3d2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b3d2d: mov esi, ecx */
  esi = ecx;
/* 7b3d2f: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7b3d35: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b3d36: mov edi, dword ptr [esi + 0x3e8] */
  edi = R32((uint32_t)(esi + 0x3e8u));
/* 7b3d3c: xor ebx, ebx */
  ebx = 0;
/* 7b3d3e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b3d41: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7b3d44: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 7b3d47: call 0x6c9a7f */
  esp -= 4; W32(esp, 0x7b3d4cu); SPILL(); f_6c9a7f(); if (g_unwind) return; RELOAD();
/* 7b3d4c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3d4e: je 0x7b3eaf */
  if (zf) goto L_7b3eaf;
L_7b3d54: /* 7b3d54: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3d57: je 0x7b3f13 */
  if (zf) goto L_7b3f13;
L_7b3d5d: /* 7b3d5d: xor eax, eax */
  eax = 0;
/* 7b3d5f: nop  */
L_7b3d60: /* 7b3d60: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b3d63: jge 0x7b3d6f */
  if ((sf == of)) goto L_7b3d6f;
L_7b3d65: /* 7b3d65: mov dword ptr [eax*4 + 0xb7d1bc], ebx */
  W32((uint32_t)(eax*4 + 0xb7d1bcu), ebx);
/* 7b3d6c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b3d6d: jmp 0x7b3d60 */
  goto L_7b3d60;
L_7b3d6f: /* 7b3d6f: mov eax, dword ptr [esi + 0x438] */
  eax = R32((uint32_t)(esi + 0x438u));
/* 7b3d75: cmp eax, dword ptr [esi + 0x394] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x394u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3d7b: jne 0x7b3eed */
  if (!zf) goto L_7b3eed;
L_7b3d81: /* 7b3d81: cmp dword ptr [esi + 0x398], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x398u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3d87: je 0x7b3e64 */
  if (zf) goto L_7b3e64;
L_7b3d8d: /* 7b3d8d: mov edi, 1 */
  edi = 0x1u;
L_7b3d92: /* 7b3d92: cmp dword ptr [esi + edi*4 + 0x394], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + edi*4 + 0x394u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3d99: je 0x7b3d9e */
  if (zf) goto L_7b3d9e;
L_7b3d9b: /* 7b3d9b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7b3d9c: jmp 0x7b3d92 */
  goto L_7b3d92;
L_7b3d9e: /* 7b3d9e: mov ebx, dword ptr [esi + edi*4 + 0x390] */
  ebx = R32((uint32_t)(esi + edi*4 + 0x390u));
/* 7b3da5: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7b3dab: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b3dad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b3daf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b3db1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b3db2: call dword ptr [eax + 0x19c] */
  { uint32_t t = R32((uint32_t)(eax + 0x19cu)); esp -= 4; W32(esp, 0x7b3db8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b3db8: xor ecx, ecx */
  ecx = 0;
/* 7b3dba: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3dbc: je 0x7b3dea */
  if (zf) goto L_7b3dea;
L_7b3dbe: /* 7b3dbe: mov dword ptr [esi + edi*4 + 0x390], ecx */
  W32((uint32_t)(esi + edi*4 + 0x390u), ecx);
/* 7b3dc5: and dword ptr [esi + 0x350], 0xffffff7f */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x350u))); uint32_t b = (uint32_t)(0xffffff7fu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x350u), r);
  }
/* 7b3dcf: mov dword ptr [esi + 0x390], ecx */
  W32((uint32_t)(esi + 0x390u), ecx);
/* 7b3dd5: mov eax, ebx */
  eax = ebx;
/* 7b3dd7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b3dda: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b3de1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b3de2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b3de3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b3de4: mov esp, ebp */
  esp = ebp;
/* 7b3de6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b3de7: ret 4 */
  esp += 8; SPILL(); return;
L_7b3dea: /* 7b3dea: mov eax, dword ptr [esi + 0x350] */
  eax = R32((uint32_t)(esi + 0x350u));
/* 7b3df0: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 7b3df6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b3df8: mov edi, eax */
  edi = eax;
/* 7b3dfa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b3dfc: and eax, 0xffffff7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff7fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7b3e01: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 7b3e07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b3e09: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7b3e0c: mov dword ptr [esi + 0x390], 0 */
  W32((uint32_t)(esi + 0x390u), 0x0u);
/* 7b3e16: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b3e19: lea edx, [ebx + 0x170] */
  edx = (uint32_t)(ebx + 0x170u);
/* 7b3e1f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 7b3e21: mov eax, esp */
  eax = esp;
/* 7b3e23: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7b3e25: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 7b3e28: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7b3e2b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7b3e2e: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7b3e34: shr edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 7b3e37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b3e38: and edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 7b3e3b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 7b3e3e: call 0x6caa7e */
  esp -= 4; W32(esp, 0x7b3e43u); SPILL(); f_6caa7e(); if (g_unwind) return; RELOAD();
/* 7b3e43: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 7b3e46: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7b3e4c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b3e4e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b3e51: jne 0x7b3ec4 */
  if (!zf) goto L_7b3ec4;
L_7b3e53: /* 7b3e53: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b3e55: mov ecx, esi */
  ecx = esi;
/* 7b3e57: call 0x6cc897 */
  esp -= 4; W32(esp, 0x7b3e5cu); SPILL(); f_6cc897(); if (g_unwind) return; RELOAD();
/* 7b3e5c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_7b3e5f: /* 7b3e5f: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b3e62: xor ebx, ebx */
  ebx = 0;
L_7b3e64: /* 7b3e64: xor ecx, ecx */
  ecx = 0;
L_7b3e66: /* 7b3e66: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b3e69: jge 0x7b3e81 */
  if ((sf == of)) goto L_7b3e81;
L_7b3e6b: /* 7b3e6b: mov eax, dword ptr [ecx*4 + 0xb7d1bc] */
  eax = R32((uint32_t)(ecx*4 + 0xb7d1bcu));
/* 7b3e72: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3e74: jne 0x7b3f46 */
  if (!zf) goto L_7b3f46;
L_7b3e7a: /* 7b3e7a: mov dword ptr [ecx*4 + 0xb7d1bc], edi */
  W32((uint32_t)(ecx*4 + 0xb7d1bcu), edi);
L_7b3e81: /* 7b3e81: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3e83: je 0x7b3eaf */
  if (zf) goto L_7b3eaf;
L_7b3e85: /* 7b3e85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b3e86: mov ecx, esp */
  ecx = esp;
/* 7b3e88: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7b3e8b: push 0x15a */
  { uint32_t v = 0x15au; esp -= 4; W32(esp, v); }
/* 7b3e90: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7b3e96u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7b3e96: mov ecx, edi */
  ecx = edi;
/* 7b3e98: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7b3e9eu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7b3e9e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3ea0: je 0x7b3eaf */
  if (zf) goto L_7b3eaf;
L_7b3ea2: /* 7b3ea2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b3ea3: mov ecx, esi */
  ecx = esi;
/* 7b3ea5: call 0x6c4543 */
  esp -= 4; W32(esp, 0x7b3eaau); SPILL(); f_6c4543(); if (g_unwind) return; RELOAD();
/* 7b3eaa: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7b3ead: mov edi, eax */
  edi = eax;
L_7b3eaf: /* 7b3eaf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b3eb2: mov eax, edi */
  eax = edi;
/* 7b3eb4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b3eb5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b3eb6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b3ebd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b3ebe: mov esp, ebp */
  esp = ebp;
/* 7b3ec0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b3ec1: ret 4 */
  esp += 8; SPILL(); return;
L_7b3ec4: /* 7b3ec4: mov edx, dword ptr [esi + 0x350] */
  edx = R32((uint32_t)(esi + 0x350u));
/* 7b3eca: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b3ecd: shl edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7b3ed0: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 7b3ed2: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 7b3ed8: and edi, 0x80 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 7b3ede: mov eax, edx */
  eax = edx;
/* 7b3ee0: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7b3ee2: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 7b3ee8: jmp 0x7b3e5f */
  goto L_7b3e5f;
L_7b3eed: /* 7b3eed: mov dword ptr [esi + 0x394], eax */
  W32((uint32_t)(esi + 0x394u), eax);
/* 7b3ef3: mov eax, 1 */
  eax = 0x1u;
/* 7b3ef8: jmp 0x7b3f00 */
  goto L_7b3f00;
L_7b3f00: /* 7b3f00: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b3f03: jge 0x7b3e64 */
  if ((sf == of)) goto L_7b3e64;
L_7b3f09: /* 7b3f09: mov dword ptr [esi + eax*4 + 0x394], ebx */
  W32((uint32_t)(esi + eax*4 + 0x394u), ebx);
/* 7b3f10: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b3f11: jmp 0x7b3f00 */
  goto L_7b3f00;
L_7b3f13: /* 7b3f13: xor ecx, ecx */
  ecx = 0;
L_7b3f15: /* 7b3f15: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b3f18: jge 0x7b3e64 */
  if ((sf == of)) goto L_7b3e64;
L_7b3f1e: /* 7b3f1e: mov eax, dword ptr [esi + ecx*4 + 0x394] */
  eax = R32((uint32_t)(esi + ecx*4 + 0x394u));
/* 7b3f25: mov edx, dword ptr [esi + 0x438] */
  edx = R32((uint32_t)(esi + 0x438u));
/* 7b3f2b: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3f2d: je 0x7b3e64 */
  if (zf) goto L_7b3e64;
L_7b3f33: /* 7b3f33: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3f35: jne 0x7b3f43 */
  if (!zf) goto L_7b3f43;
L_7b3f37: /* 7b3f37: mov dword ptr [esi + ecx*4 + 0x394], edx */
  W32((uint32_t)(esi + ecx*4 + 0x394u), edx);
/* 7b3f3e: jmp 0x7b3e64 */
  goto L_7b3e64;
L_7b3f43: /* 7b3f43: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7b3f44: jmp 0x7b3f15 */
  goto L_7b3f15;
L_7b3f46: /* 7b3f46: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3f48: je 0x7b3eaf */
  if (zf) goto L_7b3eaf;
L_7b3f4e: /* 7b3f4e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7b3f4f: jmp 0x7b3e66 */
  goto L_7b3e66;
}

void f_7b3ec4(void) {
  LOAD_REGS();
  goto L_7b3ec4;
L_7b3e5f: /* 7b3e5f: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b3e62: xor ebx, ebx */
  ebx = 0;
/* 7b3e64: xor ecx, ecx */
  ecx = 0;
L_7b3e66: /* 7b3e66: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b3e69: jge 0x7b3e81 */
  if ((sf == of)) goto L_7b3e81;
L_7b3e6b: /* 7b3e6b: mov eax, dword ptr [ecx*4 + 0xb7d1bc] */
  eax = R32((uint32_t)(ecx*4 + 0xb7d1bcu));
/* 7b3e72: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3e74: jne 0x7b3f46 */
  if (!zf) goto L_7b3f46;
L_7b3e7a: /* 7b3e7a: mov dword ptr [ecx*4 + 0xb7d1bc], edi */
  W32((uint32_t)(ecx*4 + 0xb7d1bcu), edi);
L_7b3e81: /* 7b3e81: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3e83: je 0x7b3eaf */
  if (zf) goto L_7b3eaf;
L_7b3e85: /* 7b3e85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b3e86: mov ecx, esp */
  ecx = esp;
/* 7b3e88: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7b3e8b: push 0x15a */
  { uint32_t v = 0x15au; esp -= 4; W32(esp, v); }
/* 7b3e90: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7b3e96u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7b3e96: mov ecx, edi */
  ecx = edi;
/* 7b3e98: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7b3e9eu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7b3e9e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3ea0: je 0x7b3eaf */
  if (zf) goto L_7b3eaf;
L_7b3ea2: /* 7b3ea2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b3ea3: mov ecx, esi */
  ecx = esi;
/* 7b3ea5: call 0x6c4543 */
  esp -= 4; W32(esp, 0x7b3eaau); SPILL(); f_6c4543(); if (g_unwind) return; RELOAD();
/* 7b3eaa: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7b3ead: mov edi, eax */
  edi = eax;
L_7b3eaf: /* 7b3eaf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b3eb2: mov eax, edi */
  eax = edi;
/* 7b3eb4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b3eb5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b3eb6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b3ebd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b3ebe: mov esp, ebp */
  esp = ebp;
/* 7b3ec0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b3ec1: ret 4 */
  esp += 8; SPILL(); return;
L_7b3ec4: /* 7b3ec4: mov edx, dword ptr [esi + 0x350] */
  edx = R32((uint32_t)(esi + 0x350u));
/* 7b3eca: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b3ecd: shl edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 7b3ed0: xor edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  edi = r;
  }
/* 7b3ed2: mov dword ptr [esi + 0x390], eax */
  W32((uint32_t)(esi + 0x390u), eax);
/* 7b3ed8: and edi, 0x80 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 7b3ede: mov eax, edx */
  eax = edx;
/* 7b3ee0: xor eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7b3ee2: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
/* 7b3ee8: jmp 0x7b3e5f */
  goto L_7b3e5f;
L_7b3f46: /* 7b3f46: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3f48: je 0x7b3eaf */
  if (zf) goto L_7b3eaf;
L_7b3f4e: /* 7b3f4e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7b3f4f: jmp 0x7b3e66 */
  goto L_7b3e66;
}

void f_7b3eed(void) {
  LOAD_REGS();
  goto L_7b3eed;
L_7b3e64: /* 7b3e64: xor ecx, ecx */
  ecx = 0;
L_7b3e66: /* 7b3e66: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b3e69: jge 0x7b3e81 */
  if ((sf == of)) goto L_7b3e81;
L_7b3e6b: /* 7b3e6b: mov eax, dword ptr [ecx*4 + 0xb7d1bc] */
  eax = R32((uint32_t)(ecx*4 + 0xb7d1bcu));
/* 7b3e72: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3e74: jne 0x7b3f46 */
  if (!zf) goto L_7b3f46;
L_7b3e7a: /* 7b3e7a: mov dword ptr [ecx*4 + 0xb7d1bc], edi */
  W32((uint32_t)(ecx*4 + 0xb7d1bcu), edi);
L_7b3e81: /* 7b3e81: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3e83: je 0x7b3eaf */
  if (zf) goto L_7b3eaf;
L_7b3e85: /* 7b3e85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b3e86: mov ecx, esp */
  ecx = esp;
/* 7b3e88: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7b3e8b: push 0x15a */
  { uint32_t v = 0x15au; esp -= 4; W32(esp, v); }
/* 7b3e90: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7b3e96u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7b3e96: mov ecx, edi */
  ecx = edi;
/* 7b3e98: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7b3e9eu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7b3e9e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3ea0: je 0x7b3eaf */
  if (zf) goto L_7b3eaf;
L_7b3ea2: /* 7b3ea2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b3ea3: mov ecx, esi */
  ecx = esi;
/* 7b3ea5: call 0x6c4543 */
  esp -= 4; W32(esp, 0x7b3eaau); SPILL(); f_6c4543(); if (g_unwind) return; RELOAD();
/* 7b3eaa: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7b3ead: mov edi, eax */
  edi = eax;
L_7b3eaf: /* 7b3eaf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b3eb2: mov eax, edi */
  eax = edi;
/* 7b3eb4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b3eb5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b3eb6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b3ebd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b3ebe: mov esp, ebp */
  esp = ebp;
/* 7b3ec0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b3ec1: ret 4 */
  esp += 8; SPILL(); return;
L_7b3eed: /* 7b3eed: mov dword ptr [esi + 0x394], eax */
  W32((uint32_t)(esi + 0x394u), eax);
/* 7b3ef3: mov eax, 1 */
  eax = 0x1u;
/* 7b3ef8: jmp 0x7b3f00 */
  goto L_7b3f00;
L_7b3f00: /* 7b3f00: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b3f03: jge 0x7b3e64 */
  if ((sf == of)) goto L_7b3e64;
L_7b3f09: /* 7b3f09: mov dword ptr [esi + eax*4 + 0x394], ebx */
  W32((uint32_t)(esi + eax*4 + 0x394u), ebx);
/* 7b3f10: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b3f11: jmp 0x7b3f00 */
  goto L_7b3f00;
L_7b3f46: /* 7b3f46: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3f48: je 0x7b3eaf */
  if (zf) goto L_7b3eaf;
L_7b3f4e: /* 7b3f4e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7b3f4f: jmp 0x7b3e66 */
  goto L_7b3e66;
}

void f_7b3efa(void) {
  LOAD_REGS();
  goto L_7b3efa;
L_7b3e64: /* 7b3e64: xor ecx, ecx */
  ecx = 0;
L_7b3e66: /* 7b3e66: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b3e69: jge 0x7b3e81 */
  if ((sf == of)) goto L_7b3e81;
L_7b3e6b: /* 7b3e6b: mov eax, dword ptr [ecx*4 + 0xb7d1bc] */
  eax = R32((uint32_t)(ecx*4 + 0xb7d1bcu));
/* 7b3e72: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3e74: jne 0x7b3f46 */
  if (!zf) goto L_7b3f46;
L_7b3e7a: /* 7b3e7a: mov dword ptr [ecx*4 + 0xb7d1bc], edi */
  W32((uint32_t)(ecx*4 + 0xb7d1bcu), edi);
L_7b3e81: /* 7b3e81: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3e83: je 0x7b3eaf */
  if (zf) goto L_7b3eaf;
L_7b3e85: /* 7b3e85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b3e86: mov ecx, esp */
  ecx = esp;
/* 7b3e88: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 7b3e8b: push 0x15a */
  { uint32_t v = 0x15au; esp -= 4; W32(esp, v); }
/* 7b3e90: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7b3e96u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7b3e96: mov ecx, edi */
  ecx = edi;
/* 7b3e98: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7b3e9eu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7b3e9e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3ea0: je 0x7b3eaf */
  if (zf) goto L_7b3eaf;
L_7b3ea2: /* 7b3ea2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b3ea3: mov ecx, esi */
  ecx = esi;
/* 7b3ea5: call 0x6c4543 */
  esp -= 4; W32(esp, 0x7b3eaau); SPILL(); f_6c4543(); if (g_unwind) return; RELOAD();
/* 7b3eaa: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7b3ead: mov edi, eax */
  edi = eax;
L_7b3eaf: /* 7b3eaf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b3eb2: mov eax, edi */
  eax = edi;
/* 7b3eb4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b3eb5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b3eb6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b3ebd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b3ebe: mov esp, ebp */
  esp = ebp;
/* 7b3ec0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b3ec1: ret 4 */
  esp += 8; SPILL(); return;
L_7b3efa: /* 7b3efa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_7b3f00: /* 7b3f00: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b3f03: jge 0x7b3e64 */
  if ((sf == of)) goto L_7b3e64;
L_7b3f09: /* 7b3f09: mov dword ptr [esi + eax*4 + 0x394], ebx */
  W32((uint32_t)(esi + eax*4 + 0x394u), ebx);
/* 7b3f10: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b3f11: jmp 0x7b3f00 */
  goto L_7b3f00;
L_7b3f46: /* 7b3f46: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b3f48: je 0x7b3eaf */
  if (zf) goto L_7b3eaf;
L_7b3f4e: /* 7b3f4e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7b3f4f: jmp 0x7b3e66 */
  goto L_7b3e66;
}

void f_7b3f54(void) {
  LOAD_REGS();
L_7b3f54: /* 7b3f54: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b3f57: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b3f5c: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7b3f5f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b3f60: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7b3f63: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b3f68u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b3f68(); return;
}

void f_7b3f68(void) {
  LOAD_REGS();
L_7b3f68: /* 7b3f68: push 0xa0cf7c */
  { uint32_t v = 0xa0cf7cu; esp -= 4; W32(esp, v); }
/* 7b3f6d: push 0xacfad8 */
  { uint32_t v = 0xacfad8u; esp -= 4; W32(esp, v); }
/* 7b3f72: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b3f78u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b3f78: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b3f7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b3f7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b3f7f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b3f84u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b3f84: guest_badaddr(0x7b3f84); return;
}

void f_7b4030(void) {
  LOAD_REGS();
L_7b4030: /* 7b4030: xor eax, eax */
  eax = 0;
/* 7b4032: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7b4050(void) {
  LOAD_REGS();
L_7b4050: /* 7b4050: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_7b4070(void) {
  LOAD_REGS();
L_7b4070: /* 7b4070: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7b4090(void) {
  LOAD_REGS();
L_7b4090: /* 7b4090: mov eax, dword ptr [ecx + 0x350] */
  eax = R32((uint32_t)(ecx + 0x350u));
/* 7b4096: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7b409a: or eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 7b409d: mov dword ptr [ecx + 0x350], eax */
  W32((uint32_t)(ecx + 0x350u), eax);
/* 7b40a3: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7b40a7: add ecx, 0x358 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x358u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7b40ad: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7b40af: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7b40b3: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7b40b6: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7b40b9: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7b40d0(void) {
  LOAD_REGS();
L_7b40d0: /* 7b40d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b40d1: mov ebp, esp */
  ebp = esp;
/* 7b40d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b40d5: push 0x9cef90 */
  { uint32_t v = 0x9cef90u; esp -= 4; W32(esp, v); }
/* 7b40da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b40e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b40e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b40e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b40eb: mov ecx, dword ptr [ecx + 0x4c0] */
  ecx = R32((uint32_t)(ecx + 0x4c0u));
/* 7b40f1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b40f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b40f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b40f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b40f6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b40f9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b4100: je 0x7b4157 */
  if (zf) goto L_7b4157;
L_7b4102: /* 7b4102: push 0xb79f88 */
  { uint32_t v = 0xb79f88u; esp -= 4; W32(esp, v); }
/* 7b4107: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b410du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b410d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b410f: je 0x7b4157 */
  if (zf) goto L_7b4157;
L_7b4111: /* 7b4111: mov eax, 1 */
  eax = 0x1u;
/* 7b4116: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b4119: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b4120: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b4121: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b4122: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b4123: mov esp, ebp */
  esp = ebp;
/* 7b4125: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b4126: ret  */
  esp += 4; SPILL(); return;
L_7b4157: /* 7b4157: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b415a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b415b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b415c: xor eax, eax */
  eax = 0;
/* 7b415e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b4165: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b4166: mov esp, ebp */
  esp = ebp;
/* 7b4168: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b4169: ret  */
  esp += 4; SPILL(); return;
}

void f_7b4127(void) {
  LOAD_REGS();
L_7b4127: /* 7b4127: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b412a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b412f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7b4132: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b4133: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7b4136: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b413bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b413b(); return;
}

void f_7b413b(void) {
  LOAD_REGS();
L_7b413b: /* 7b413b: push 0xa0cfb0 */
  { uint32_t v = 0xa0cfb0u; esp -= 4; W32(esp, v); }
/* 7b4140: push 0xacf660 */
  { uint32_t v = 0xacf660u; esp -= 4; W32(esp, v); }
/* 7b4145: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b414bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b414b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b414e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b4150: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b4152: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b4157u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7b4157: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b415a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b415b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b415c: xor eax, eax */
  eax = 0;
/* 7b415e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b4165: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b4166: mov esp, ebp */
  esp = ebp;
/* 7b4168: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b4169: ret  */
  esp += 4; SPILL(); return;
}

void f_7b41a0(void) {
  LOAD_REGS();
L_7b41a0: /* 7b41a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b41a1: mov ebp, esp */
  ebp = esp;
/* 7b41a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b41a5: push 0x9cefa0 */
  { uint32_t v = 0x9cefa0u; esp -= 4; W32(esp, v); }
/* 7b41aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b41b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b41b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b41b8: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b41bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b41bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b41bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b41be: mov edi, ecx */
  edi = ecx;
/* 7b41c0: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7b41c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b41c8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b41cb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b41d2: je 0x7b4368 */
  if (zf) goto L_7b4368;
L_7b41d8: /* 7b41d8: mov ecx, dword ptr [eax + 0x390] */
  ecx = R32((uint32_t)(eax + 0x390u));
/* 7b41de: test ch, 8 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b41e1: je 0x7b43ab */
  if (zf) goto L_7b43ab;
L_7b41e7: /* 7b41e7: mov eax, dword ptr [edi + 0x370] */
  eax = R32((uint32_t)(edi + 0x370u));
/* 7b41ed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b41ef: je 0x7b43ab */
  if (zf) goto L_7b43ab;
L_7b41f5: /* 7b41f5: mov ecx, edi */
  ecx = edi;
/* 7b41f7: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7b41fdu); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7b41fd: cmp dword ptr [eax + 0x28], 0x1f7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(0x1f7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b4204: jne 0x7b43ab */
  if (!zf) goto L_7b43ab;
L_7b420a: /* 7b420a: mov ebx, dword ptr [edi + 0x428] */
  ebx = R32((uint32_t)(edi + 0x428u));
/* 7b4210: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b4212: je 0x7b42e8 */
  if (zf) goto L_7b42e8;
L_7b4218: /* 7b4218: mov eax, dword ptr [ebx + 0x30] */
  eax = R32((uint32_t)(ebx + 0x30u));
/* 7b421b: cmp eax, dword ptr [edi + 0x370] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x370u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b4221: jne 0x7b42e8 */
  if (!zf) goto L_7b42e8;
L_7b4227: /* 7b4227: mov esi, dword ptr [edi + 0x33c] */
  esi = R32((uint32_t)(edi + 0x33cu));
/* 7b422d: mov eax, dword ptr [ebx + 0x2c] */
  eax = R32((uint32_t)(ebx + 0x2cu));
/* 7b4230: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 7b4236: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 7b423c: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b4241: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 7b4247: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7b424a: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 7b4250: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7b4252: lea eax, [edi + 0x42c] */
  eax = (uint32_t)(edi + 0x42cu);
/* 7b4258: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7b425a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b425b: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 7b425e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b425f: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 7b4261: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7b4264: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 7b4267: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 7b4269: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7b426b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7b426d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7b4270: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b4271: call 0x6cb802 */
  esp -= 4; W32(esp, 0x7b4276u); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 7b4276: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7b4279: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* 7b427c: fadd dword ptr [ecx + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x178u)));
/* 7b4282: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7b4288: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7b428b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b428e: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 7b4291: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7b4294: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7b4296: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7b4299: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7b429b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7b429e: fsubr dword ptr [esi + 0x178] */
  ST0 = (F32((uint32_t)(esi + 0x178u))) - ST0;
/* 7b42a4: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 7b42aa: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7b42ad: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 7b42b3: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7b42b6: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7b42b9: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7b42bc: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7b42bf: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7b42c5u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7b42c5: mov edx, dword ptr [edi + 0x33c] */
  edx = R32((uint32_t)(edi + 0x33cu));
/* 7b42cb: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7b42ce: fld dword ptr [edx + 0x2d4] */
  { double v = F32((uint32_t)(edx + 0x2d4u)); FPUSH(v); }
/* 7b42d4: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 7b42da: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 7b42dd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b42df: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b42e2: je 0x7b4368 */
  if (zf) goto L_7b4368;
L_7b42e8: /* 7b42e8: mov eax, dword ptr [edi + 0x370] */
  eax = R32((uint32_t)(edi + 0x370u));
/* 7b42ee: cmp byte ptr [eax + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b42f2: je 0x7b43ab */
  if (zf) goto L_7b43ab;
L_7b42f8: /* 7b42f8: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7b42fe: mov edx, dword ptr [ecx + 0x3f8] */
  edx = R32((uint32_t)(ecx + 0x3f8u));
/* 7b4304: fld dword ptr [ecx + 0x40c] */
  { double v = F32((uint32_t)(ecx + 0x40cu)); FPUSH(v); }
/* 7b430a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b430b: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7b430d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b430e: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b4313: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7b4316: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b4318: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b4319: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b431c: lea edx, [ecx + 0x170] */
  edx = (uint32_t)(ecx + 0x170u);
/* 7b4322: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 7b4324: mov esi, esp */
  esi = esp;
/* 7b4326: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 7b4328: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 7b432b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7b432e: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 7b4331: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 7b4334: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 7b4336: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b4339: mov edx, esp */
  edx = esp;
/* 7b433b: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 7b433d: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 7b4340: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7b4343: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 7b4346: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7b4349: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 7b434c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b434d: call 0x6cc73e */
  esp -= 4; W32(esp, 0x7b4352u); SPILL(); f_6cc73e(); if (g_unwind) return; RELOAD();
/* 7b4352: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7b4355: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7b435b: fcomp dword ptr [eax + 0x40c] */
  fpu_com(ST0, F32((uint32_t)(eax + 0x40cu)));
  FPOP();
/* 7b4361: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b4363: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b4366: jp 0x7b43ab */
  if (pf) goto L_7b43ab;
L_7b4368: /* 7b4368: xor eax, eax */
  eax = 0;
/* 7b436a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b436d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b4374: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b4375: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b4376: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b4377: mov esp, ebp */
  esp = ebp;
/* 7b4379: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b437a: ret  */
  esp += 4; SPILL(); return;
L_7b43ab: /* 7b43ab: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7b43b1: mov eax, dword ptr [eax + 0x390] */
  eax = R32((uint32_t)(eax + 0x390u));
/* 7b43b7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b43ba: shr eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 14;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7b43bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b43be: not eax */
  eax = ~eax;
/* 7b43c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b43c1: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7b43c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b43cb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b43cc: mov esp, ebp */
  esp = ebp;
/* 7b43ce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b43cf: ret  */
  esp += 4; SPILL(); return;
}

void f_7b437b(void) {
  LOAD_REGS();
L_7b437b: /* 7b437b: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b437e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b4383: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7b4386: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b4387: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7b438a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b438fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b438f(); return;
}

void f_7b438f(void) {
  LOAD_REGS();
L_7b438f: /* 7b438f: push 0xa0d014 */
  { uint32_t v = 0xa0d014u; esp -= 4; W32(esp, v); }
/* 7b4394: push 0xacf668 */
  { uint32_t v = 0xacf668u; esp -= 4; W32(esp, v); }
/* 7b4399: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b439fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b439f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b43a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b43a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b43a6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b43abu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7b43ab: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7b43b1: mov eax, dword ptr [eax + 0x390] */
  eax = R32((uint32_t)(eax + 0x390u));
/* 7b43b7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b43ba: shr eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 14;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7b43bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b43be: not eax */
  eax = ~eax;
/* 7b43c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b43c1: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7b43c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b43cb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b43cc: mov esp, ebp */
  esp = ebp;
/* 7b43ce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b43cf: ret  */
  esp += 4; SPILL(); return;
}

void f_7b4460(void) {
  LOAD_REGS();
L_7b4460: /* 7b4460: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b4461: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b4462: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 7b4466: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b4467: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b4468: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 7b446c: mov ecx, dword ptr [edi + 0x394] */
  ecx = R32((uint32_t)(edi + 0x394u));
/* 7b4472: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b4474: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 7b447c: je 0x7b4531 */
  if (zf) goto L_7b4531;
L_7b4482: /* 7b4482: fild dword ptr [edi + 0x368] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x368u)); FPUSH(v); }
/* 7b4488: fld dword ptr [0xa0b294] */
  { double v = F32((uint32_t)(0xa0b294u)); FPUSH(v); }
/* 7b448e: fsub dword ptr [ecx + 0xe8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xe8u)));
/* 7b4494: fmul dword ptr [ebx + 0x3f8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x3f8u)));
/* 7b449a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7b449c: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7b449e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b44a0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b44a3: jp 0x7b452f */
  if (pf) goto L_7b452f;
L_7b44a9: /* 7b44a9: fadd dword ptr [edi + 0x398] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x398u)));
/* 7b44af: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7b44b5: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7b44b7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b44b9: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b44bc: jne 0x7b44c6 */
  if (!zf) goto L_7b44c6;
L_7b44be: /* 7b44be: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b44c0: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_7b44c6: /* 7b44c6: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 7b44cc: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b44cf: je 0x7b44df */
  if (zf) goto L_7b44df;
L_7b44d1: /* 7b44d1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b44d3: mov dword ptr [edi + 0x394], 0 */
  W32((uint32_t)(edi + 0x394u), 0x0u);
/* 7b44dd: jmp 0x7b4516 */
  goto L_7b4516;
L_7b44df: /* 7b44df: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7b44e5: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 7b44e7: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7b44eb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b44ed: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7b44f1: fmul dword ptr [ecx + 0x33c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x33cu)));
/* 7b44f7: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 7b44fb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b44fd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b4500: jne 0x7b4516 */
  if (!zf) goto L_7b4516;
L_7b4502: /* 7b4502: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b4503: mov ecx, dword ptr [ebx + 0x33c] */
  ecx = R32((uint32_t)(ebx + 0x33cu));
/* 7b4509: call 0x6c295a */
  esp -= 4; W32(esp, 0x7b450eu); SPILL(); f_6c295a(); if (g_unwind) return; RELOAD();
/* 7b450e: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 7b4512: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
L_7b4516: /* 7b4516: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 7b451a: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 7b451e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b4520: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b4523: je 0x7b4531 */
  if (zf) goto L_7b4531;
L_7b4525: /* 7b4525: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7b4529: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 7b452d: jmp 0x7b4531 */
  goto L_7b4531;
L_7b452f: /* 7b452f: fstp st(0) */
  STI(0) = ST0; FPOP();
L_7b4531: /* 7b4531: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7b4533: mov ecx, edi */
  ecx = edi;
/* 7b4535: call dword ptr [edx + 0x1bc] */
  { uint32_t t = R32((uint32_t)(edx + 0x1bcu)); esp -= 4; W32(esp, 0x7b453bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b453b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b453d: je 0x7b4636 */
  if (zf) goto L_7b4636;
L_7b4543: /* 7b4543: mov eax, dword ptr [ebx + 0x33c] */
  eax = R32((uint32_t)(ebx + 0x33cu));
/* 7b4549: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b454b: je 0x7b4636 */
  if (zf) goto L_7b4636;
L_7b4551: /* 7b4551: mov esi, dword ptr [edi + 0x3a8] */
  esi = R32((uint32_t)(edi + 0x3a8u));
/* 7b4557: mov edi, dword ptr [edi + 0x368] */
  edi = R32((uint32_t)(edi + 0x368u));
/* 7b455d: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b4560: mov dword ptr [esp + 0x14], 1 */
  W32((uint32_t)(esp + 0x14u), 0x1u);
/* 7b4568: jle 0x7b456e */
  if ((zf || sf != of)) goto L_7b456e;
L_7b456a: /* 7b456a: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
L_7b456e: /* 7b456e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b4570: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7b4574: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7b4578: je 0x7b4636 */
  if (zf) goto L_7b4636;
L_7b457e: /* 7b457e: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 7b4584: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b4587: jne 0x7b4636 */
  if (!zf) goto L_7b4636;
L_7b458d: /* 7b458d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b458e: mov ecx, esp */
  ecx = esp;
/* 7b4590: push 0x139 */
  { uint32_t v = 0x139u; esp -= 4; W32(esp, v); }
/* 7b4595: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7b459bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7b459b: mov ecx, esi */
  ecx = esi;
/* 7b459d: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7b45a3u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7b45a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b45a5: jne 0x7b45cd */
  if (!zf) goto L_7b45cd;
L_7b45a7: /* 7b45a7: test byte ptr [esi + 0x34c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x34cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b45ae: je 0x7b4636 */
  if (zf) goto L_7b4636;
L_7b45b4: /* 7b45b4: mov eax, dword ptr [ebx + 0x33c] */
  eax = R32((uint32_t)(ebx + 0x33cu));
/* 7b45ba: fld dword ptr [esi + 0x160] */
  { double v = F32((uint32_t)(esi + 0x160u)); FPUSH(v); }
/* 7b45c0: fcomp dword ptr [eax + 0x3ac] */
  fpu_com(ST0, F32((uint32_t)(eax + 0x3acu)));
  FPOP();
/* 7b45c6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b45c8: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b45cb: jp 0x7b4636 */
  if (pf) goto L_7b4636;
L_7b45cd: /* 7b45cd: fld dword ptr [esi + 0x33c] */
  { double v = F32((uint32_t)(esi + 0x33cu)); FPUSH(v); }
/* 7b45d3: fdiv dword ptr [esp + 0x14] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x14u)));
/* 7b45d7: fcomp dword ptr [esp + 0x1c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x1cu)));
  FPOP();
/* 7b45db: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b45dd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b45e0: jne 0x7b4636 */
  if (!zf) goto L_7b4636;
L_7b45e2: /* 7b45e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b45e3: mov ecx, esp */
  ecx = esp;
/* 7b45e5: push 0x139 */
  { uint32_t v = 0x139u; esp -= 4; W32(esp, v); }
/* 7b45ea: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7b45f0u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7b45f0: mov ecx, esi */
  ecx = esi;
/* 7b45f2: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x7b45f8u); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 7b45f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b45fa: jne 0x7b4610 */
  if (!zf) goto L_7b4610;
L_7b45fc: /* 7b45fc: fld dword ptr [ebx + 0x3f8] */
  { double v = F32((uint32_t)(ebx + 0x3f8u)); FPUSH(v); }
/* 7b4602: fmul dword ptr [esi + 0x160] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x160u)));
/* 7b4608: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 7b460c: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
L_7b4610: /* 7b4610: mov ecx, dword ptr [ebx + 0x33c] */
  ecx = R32((uint32_t)(ebx + 0x33cu));
/* 7b4616: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b4617: call 0x6c295a */
  esp -= 4; W32(esp, 0x7b461cu); SPILL(); f_6c295a(); if (g_unwind) return; RELOAD();
/* 7b461c: fdiv dword ptr [esp + 0x14] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x14u)));
/* 7b4620: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b4621: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7b4625: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7b4628: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b4629: call 0x6c47be */
  esp -= 4; W32(esp, 0x7b462eu); SPILL(); f_6c47be(); if (g_unwind) return; RELOAD();
/* 7b462e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b4631: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b4632: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b4633: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b4634: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7b4635: ret  */
  esp += 4; SPILL(); return;
L_7b4636: /* 7b4636: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 7b463a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b463b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b463c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b463d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 7b463e: ret  */
  esp += 4; SPILL(); return;
}

void f_7b46c0(void) {
  LOAD_REGS();
L_7b46c0: /* 7b46c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b46c1: mov ebp, esp */
  ebp = esp;
/* 7b46c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b46c5: push 0x9cefb0 */
  { uint32_t v = 0x9cefb0u; esp -= 4; W32(esp, v); }
/* 7b46ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b46d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b46d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b46d8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b46db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b46dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b46dd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7b46e0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b46e3: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 7b46ea: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b46ed: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b46ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b46ef: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b46f2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b46f5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7b46f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b46f9: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b46fe: mov edi, ecx */
  edi = ecx;
/* 7b4700: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b4703: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b4704: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b470b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b470eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b470e: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b4711: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b4712: mov eax, edx */
  eax = edx;
/* 7b4714: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7b4717: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b471a: jne 0x7b4732 */
  if (!zf) goto L_7b4732;
L_7b471c: /* 7b471c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b471f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b4720: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b4722: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b4725: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b472b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b472c: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b4732u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b4732: /* 7b4732: mov ecx, dword ptr [edi + 0x4c0] */
  ecx = R32((uint32_t)(edi + 0x4c0u));
/* 7b4738: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b473a: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 7b4740: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 7b4743: je 0x7b4776 */
  if (zf) goto L_7b4776;
L_7b4745: /* 7b4745: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b4748: cmp esi, 0x708 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x708u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b474e: jle 0x7b4776 */
  if ((zf || sf != of)) goto L_7b4776;
L_7b4750: /* 7b4750: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b4752: je 0x7b4776 */
  if (zf) goto L_7b4776;
L_7b4754: /* 7b4754: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 7b4757: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b4759: je 0x7b4776 */
  if (zf) goto L_7b4776;
L_7b475b: /* 7b475b: mov ecx, dword ptr [eax + 0x64] */
  ecx = R32((uint32_t)(eax + 0x64u));
/* 7b475e: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b4760: jge 0x7b4764 */
  if ((sf == of)) goto L_7b4764;
L_7b4762: /* 7b4762: mov ecx, esi */
  ecx = esi;
L_7b4764: /* 7b4764: mov dword ptr [edx + 0x44], ecx */
  W32((uint32_t)(edx + 0x44u), ecx);
/* 7b4767: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* 7b476a: mov edx, dword ptr [edi + 0x4c0] */
  edx = R32((uint32_t)(edi + 0x4c0u));
/* 7b4770: mov eax, dword ptr [ecx + 0x44] */
  eax = R32((uint32_t)(ecx + 0x44u));
/* 7b4773: mov dword ptr [edx + 0x44], eax */
  W32((uint32_t)(edx + 0x44u), eax);
L_7b4776: /* 7b4776: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b4779: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b477a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b477b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b4782: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b4783: mov esp, ebp */
  esp = ebp;
/* 7b4785: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b4786: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b4789(void) {
  LOAD_REGS();
L_7b4789: /* 7b4789: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b478c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b4791: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7b4794: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b4795: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7b4798: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b479du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b479d(); return;
}

void f_7b479d(void) {
  LOAD_REGS();
L_7b479d: /* 7b479d: push 0xa0d060 */
  { uint32_t v = 0xa0d060u; esp -= 4; W32(esp, v); }
/* 7b47a2: push 0xacf688 */
  { uint32_t v = 0xacf688u; esp -= 4; W32(esp, v); }
/* 7b47a7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b47adu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b47ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b47b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b47b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b47b4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b47b9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b47b9: guest_badaddr(0x7b47b9); return;
}

void f_7b4800(void) {
  LOAD_REGS();
L_7b4800: /* 7b4800: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b4801: mov ebp, esp */
  ebp = esp;
/* 7b4803: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b4805: push 0x9cefc0 */
  { uint32_t v = 0x9cefc0u; esp -= 4; W32(esp, v); }
/* 7b480a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b4810: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b4811: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b4818: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b481b: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 7b4820: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b4821: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b4822: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b4823: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7b4826: xor edi, edi */
  edi = 0;
/* 7b4828: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 7b482b: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 7b482d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7b4830: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7b4833: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 7b4836: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7b4839: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b483a: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7b483d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7b4840: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b4843: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7b4846: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b4847: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b484d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b484e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 7b4851: call dword ptr [edx + esi*4] */
  { uint32_t t = R32((uint32_t)(edx + esi*4)); esp -= 4; W32(esp, 0x7b4854u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b4854: mov eax, dword ptr [0xcfa510] */
  eax = R32((uint32_t)(0xcfa510u));
/* 7b4859: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7b485b: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b485d: je 0x7b486c */
  if (zf) goto L_7b486c;
L_7b485f: /* 7b485f: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 7b4864: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 7b4866: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b4868: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b4869: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x7b486cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b486c: /* 7b486c: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 7b4872: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b4874: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b4876: mov ebx, eax */
  ebx = eax;
/* 7b4878: jne 0x7b487d */
  if (!zf) goto L_7b487d;
L_7b487a: /* 7b487a: lea ebx, [ebp - 0x18] */
  ebx = (uint32_t)(ebp + 0xffffffe8u);
L_7b487d: /* 7b487d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7b4880: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 7b4883: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7b4886: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7b4889: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b488c: jne 0x7b48a5 */
  if (!zf) goto L_7b48a5;
L_7b488e: /* 7b488e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7b4891: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b4892: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7b4895: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7b4898: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b489d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b489e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b489f: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x7b48a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b48a5: /* 7b48a5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b48a8: cmp dword ptr [ecx + 0x33c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x33cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b48ae: jne 0x7b48c8 */
  if (!zf) goto L_7b48c8;
L_7b48b0: /* 7b48b0: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7b48b3: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7b48b5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b48b8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b48bf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b48c0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b48c1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b48c2: mov esp, ebp */
  esp = ebp;
/* 7b48c4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b48c5: ret 8 */
  esp += 12; SPILL(); return;
L_7b48c8: /* 7b48c8: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b48ca: lea ecx, [eax - 0xc] */
  ecx = (uint32_t)(eax + 0xfffffff4u);
/* 7b48cd: mov eax, dword ptr [0xcfa7d8] */
  eax = R32((uint32_t)(0xcfa7d8u));
/* 7b48d2: add dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 7b48d4: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7b48da: mov eax, dword ptr [0xce8458] */
  eax = R32((uint32_t)(0xce8458u));
/* 7b48df: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7b48e2: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b48e4: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7b48e6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b48e9: mov dword ptr [ecx + 0x390], edi */
  W32((uint32_t)(ecx + 0x390u), edi);
/* 7b48ef: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b48f2: and dword ptr [eax + 0x350], 0xffffff7f */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x350u))); uint32_t b = (uint32_t)(0xffffff7fu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x350u), r);
  }
/* 7b48fc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b48ff: mov ecx, dword ptr [edx + 0x33c] */
  ecx = R32((uint32_t)(edx + 0x33cu));
/* 7b4905: xor esi, esi */
  esi = 0;
/* 7b4907: call 0x6c9a7f */
  esp -= 4; W32(esp, 0x7b490cu); SPILL(); f_6c9a7f(); if (g_unwind) return; RELOAD();
/* 7b490c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b490e: je 0x7b498b */
  if (zf) goto L_7b498b;
L_7b4910: /* 7b4910: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b4913: mov ecx, dword ptr [eax + 0x33c] */
  ecx = R32((uint32_t)(eax + 0x33cu));
/* 7b4919: mov edx, dword ptr [ecx + 0x3c4] */
  edx = R32((uint32_t)(ecx + 0x3c4u));
/* 7b491f: mov eax, dword ptr [edx + 0x394] */
  eax = R32((uint32_t)(edx + 0x394u));
/* 7b4925: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b4927: je 0x7b498b */
  if (zf) goto L_7b498b;
L_7b4929: /* 7b4929: test byte ptr [eax + 0x81], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x81u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b4930: je 0x7b493a */
  if (zf) goto L_7b493a;
L_7b4932: /* 7b4932: mov dword ptr [edx + 0x394], edi */
  W32((uint32_t)(edx + 0x394u), edi);
/* 7b4938: jmp 0x7b498b */
  goto L_7b498b;
L_7b493a: /* 7b493a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b493c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b493d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b493e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b493f: call dword ptr [edx + 0x19c] */
  { uint32_t t = R32((uint32_t)(edx + 0x19cu)); esp -= 4; W32(esp, 0x7b4945u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b4945: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b4947: je 0x7b4976 */
  if (zf) goto L_7b4976;
L_7b4949: /* 7b4949: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b494c: mov ecx, dword ptr [eax + 0x33c] */
  ecx = R32((uint32_t)(eax + 0x33cu));
/* 7b4952: mov edx, dword ptr [ecx + 0x3c4] */
  edx = R32((uint32_t)(ecx + 0x3c4u));
/* 7b4958: mov eax, dword ptr [edx + 0x394] */
  eax = R32((uint32_t)(edx + 0x394u));
/* 7b495e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 7b4961: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7b4963: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b4966: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b496d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b496e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b496f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b4970: mov esp, ebp */
  esp = ebp;
/* 7b4972: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b4973: ret 8 */
  esp += 12; SPILL(); return;
L_7b4976: /* 7b4976: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b4979: mov eax, dword ptr [edx + 0x33c] */
  eax = R32((uint32_t)(edx + 0x33cu));
/* 7b497f: mov ecx, dword ptr [eax + 0x3c4] */
  ecx = R32((uint32_t)(eax + 0x3c4u));
/* 7b4985: mov dword ptr [ecx + 0x394], edi */
  W32((uint32_t)(ecx + 0x394u), edi);
L_7b498b: /* 7b498b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 7b498d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b498e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b498f: push 0x6c80d5 */
  { uint32_t v = 0x6c80d5u; esp -= 4; W32(esp, v); }
/* 7b4994: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b4997: mov eax, esp */
  eax = esp;
/* 7b4999: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 7b49a0: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7b49a3: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7b49a5: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 7b49ac: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7b49af: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7b49b2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b49b5: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 7b49bc: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7b49bf: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7b49c2: mov ecx, dword ptr [edx + 0x33c] */
  ecx = R32((uint32_t)(edx + 0x33cu));
/* 7b49c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b49c9: call 0x6caa7e */
  esp -= 4; W32(esp, 0x7b49ceu); SPILL(); f_6caa7e(); if (g_unwind) return; RELOAD();
/* 7b49ce: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7b49d1: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 7b49d4: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b49d7: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7b49dd: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 7b49df: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b49e1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b49e4: jne 0x7b49f2 */
  if (!zf) goto L_7b49f2;
L_7b49e6: /* 7b49e6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b49e9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7b49eb: call 0x6cc897 */
  esp -= 4; W32(esp, 0x7b49f0u); SPILL(); f_6cc897(); if (g_unwind) return; RELOAD();
/* 7b49f0: mov esi, eax */
  esi = eax;
L_7b49f2: /* 7b49f2: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 7b49f8: mov edx, dword ptr [0xce8458] */
  edx = R32((uint32_t)(0xce8458u));
/* 7b49fe: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 7b4a01: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b4a03: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7b4a05: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b4a08: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7b4a0a: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7b4a0c: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b4a0e: mov ecx, dword ptr [0xcfa7d8] */
  ecx = R32((uint32_t)(0xcfa7d8u));
/* 7b4a14: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7b4a16: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7b4a19: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b4a1c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b4a1d: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7b4a1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b4a20: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b4a27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b4a28: mov esp, ebp */
  esp = ebp;
/* 7b4a2a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b4a2b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b4a2e(void) {
  LOAD_REGS();
L_7b4a2e: /* 7b4a2e: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7b4a31: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b4a36: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 7b4a39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b4a3a: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 7b4a3d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b4a42u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b4a42(); return;
}

void f_7b4a42(void) {
  LOAD_REGS();
L_7b4a42: /* 7b4a42: push 0xa0d0b8 */
  { uint32_t v = 0xa0d0b8u; esp -= 4; W32(esp, v); }
/* 7b4a47: push 0xacf7d4 */
  { uint32_t v = 0xacf7d4u; esp -= 4; W32(esp, v); }
/* 7b4a4c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b4a52u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b4a52: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b4a55: xor edi, edi */
  edi = 0;
/* 7b4a57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b4a58: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b4a59: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b4a5eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b4a5e: guest_badaddr(0x7b4a5e); return;
}

void f_7b4b00(void) {
  LOAD_REGS();
L_7b4b00: /* 7b4b00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b4b01: mov ebp, esp */
  ebp = esp;
/* 7b4b03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b4b05: push 0x9cefe1 */
  { uint32_t v = 0x9cefe1u; esp -= 4; W32(esp, v); }
/* 7b4b0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b4b10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b4b11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b4b18: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b4b1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b4b1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b4b1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b4b1e: mov edi, ecx */
  edi = ecx;
/* 7b4b20: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7b4b23: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b4b26: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b4b2d: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x7b4b33u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 7b4b33: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7b4b36: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b4b39: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b4b3c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b4b3f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b4b40: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b4b43: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7b4b46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b4b47: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b4b4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b4b4d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7b4b51: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b4b54u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b4b54: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b4b57: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b4b58: mov eax, edx */
  eax = edx;
/* 7b4b5a: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7b4b5d: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b4b60: jne 0x7b4b78 */
  if (!zf) goto L_7b4b78;
L_7b4b62: /* 7b4b62: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b4b65: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b4b66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b4b68: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b4b6b: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b4b71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b4b72: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b4b78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b4b78: /* 7b4b78: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 7b4b7b: push 0xb7c534 */
  { uint32_t v = 0xb7c534u; esp -= 4; W32(esp, v); }
/* 7b4b80: mov ecx, ebx */
  ecx = ebx;
/* 7b4b82: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7b4b88u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7b4b88: push 0xb7c538 */
  { uint32_t v = 0xb7c538u; esp -= 4; W32(esp, v); }
/* 7b4b8d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7b4b90: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x7b4b96u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 7b4b96: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7b4b99: call dword ptr [0xcfa780] */
  esp -= 4; W32(esp, 0x7b4b9fu); SPILL(); f_4e22ed(); if (g_unwind) return; /* Core!??0FOutputDevice@@QAE@XZ */ RELOAD();
/* 7b4b9f: mov dword ptr [ebp - 0x34], 0xa0c234 */
  W32((uint32_t)(ebp + 0xffffffccu), 0xa0c234u);
/* 7b4ba6: mov eax, dword ptr [edi + 0x4c0] */
  eax = R32((uint32_t)(edi + 0x4c0u));
/* 7b4bac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b4bae: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7b4bb2: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7b4bb5: je 0x7b4bcf */
  if (zf) goto L_7b4bcf;
L_7b4bb7: /* 7b4bb7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7b4bbdu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7b4bbd: mov ecx, dword ptr [edi + 0x4c0] */
  ecx = R32((uint32_t)(edi + 0x4c0u));
/* 7b4bc3: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 7b4bc6: add ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7b4bc9: lea esi, [ebp - 0x34] */
  esi = (uint32_t)(ebp + 0xffffffccu);
/* 7b4bcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b4bcd: jmp 0x7b4be9 */
  goto L_7b4be9;
L_7b4bcf: /* 7b4bcf: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 7b4bd5: mov esi, dword ptr [eax + 0x40] */
  esi = R32((uint32_t)(eax + 0x40u));
/* 7b4bd8: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7b4bdb: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7b4be1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7b4be1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7b4be3: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7b4be6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b4be7: mov ecx, esi */
  ecx = esi;
L_7b4be9: /* 7b4be9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b4bea: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7b4becu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b4bec: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7b4bef: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x7b4bf5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 7b4bf5: mov ecx, ebx */
  ecx = ebx;
/* 7b4bf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b4bf8: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x7b4bfeu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 7b4bfe: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 7b4c01: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7b4c05: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b4c0bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b4c0b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 7b4c0e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7b4c12: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x7b4c18u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 7b4c18: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b4c1b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b4c1c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b4c1d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b4c24: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b4c25: mov esp, ebp */
  esp = ebp;
/* 7b4c27: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b4c28: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b4c2b(void) {
  LOAD_REGS();
L_7b4c2b: /* 7b4c2b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7b4c2e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b4c33: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7b4c36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b4c37: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7b4c3a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b4c3fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b4c3f(); return;
}

void f_7b4c3f(void) {
  LOAD_REGS();
L_7b4c3f: /* 7b4c3f: push 0xa0d118 */
  { uint32_t v = 0xa0d118u; esp -= 4; W32(esp, v); }
/* 7b4c44: push 0xacf7dc */
  { uint32_t v = 0xacf7dcu; esp -= 4; W32(esp, v); }
/* 7b4c49: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b4c4fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b4c4f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b4c52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b4c54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b4c56: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b4c5bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b4c5b: guest_badaddr(0x7b4c5b); return;
}

void f_7b4cc0(void) {
  LOAD_REGS();
L_7b4cc0: /* 7b4cc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b4cc1: mov esi, ecx */
  esi = ecx;
/* 7b4cc3: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7b4cc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b4ccb: je 0x7b4ce6 */
  if (zf) goto L_7b4ce6;
L_7b4ccd: /* 7b4ccd: cmp byte ptr [eax + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b4cd1: je 0x7b4ce6 */
  if (zf) goto L_7b4ce6;
L_7b4cd3: /* 7b4cd3: mov ecx, esi */
  ecx = esi;
/* 7b4cd5: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7b4cdbu); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7b4cdb: mov dword ptr [eax + 0x28], 0 */
  W32((uint32_t)(eax + 0x28u), 0x0u);
/* 7b4ce2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b4ce3: ret 8 */
  esp += 12; SPILL(); return;
L_7b4ce6: /* 7b4ce6: fld dword ptr [esi + 0x160] */
  { double v = F32((uint32_t)(esi + 0x160u)); FPUSH(v); }
/* 7b4cec: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7b4cf0: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7b4cf2: fst dword ptr [esi + 0x160] */
  WF32((uint32_t)(esi + 0x160u), ST0);
/* 7b4cf8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7b4cfe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b4d00: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b4d03: jp 0x7b4d24 */
  if (pf) goto L_7b4d24;
L_7b4d05: /* 7b4d05: mov ecx, dword ptr [0xb7e388] */
  ecx = R32((uint32_t)(0xb7e388u));
/* 7b4d0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b4d0c: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 7b4d0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b4d10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b4d12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b4d14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b4d15: mov ecx, esi */
  ecx = esi;
/* 7b4d17: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7b4d1du); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7b4d1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b4d1e: mov ecx, esi */
  ecx = esi;
/* 7b4d20: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x7b4d23u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b4d23: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_7b4d24: /* 7b4d24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b4d25: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b4d50(void) {
  LOAD_REGS();
L_7b4d50: /* 7b4d50: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b4d53: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7b4d57: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 7b4d5b: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7b4d5e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7b4d61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b4d62: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 7b4d65: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b4d66: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7b4d69: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7b4d6d: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 7b4d71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b4d72: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b4d77: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b4d78: call dword ptr [eax + esi*4] */
  { uint32_t t = R32((uint32_t)(eax + esi*4)); esp -= 4; W32(esp, 0x7b4d7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b4d7b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7b4d7f: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 7b4d82: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7b4d86: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 7b4d89: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b4d8c: jne 0x7b4da7 */
  if (!zf) goto L_7b4da7;
L_7b4d8e: /* 7b4d8e: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 7b4d91: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b4d92: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 7b4d95: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7b4d99: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b4d9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b4da0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b4da1: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x7b4da7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b4da7: /* 7b4da7: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7b4dab: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 7b4db1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b4db3: je 0x7b4e24 */
  if (zf) goto L_7b4e24;
L_7b4db5: /* 7b4db5: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b4db7: lea edx, [eax - 0xc] */
  edx = (uint32_t)(eax + 0xfffffff4u);
/* 7b4dba: mov eax, dword ptr [0xcfa7d8] */
  eax = R32((uint32_t)(0xcfa7d8u));
/* 7b4dbf: add dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 7b4dc1: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7b4dc6: mov ecx, dword ptr [0xce8458] */
  ecx = R32((uint32_t)(0xce8458u));
/* 7b4dcc: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7b4dcf: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b4dd1: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7b4dd3: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7b4dd7: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 7b4ddb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b4dde: mov edx, esp */
  edx = esp;
/* 7b4de0: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7b4de2: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 7b4de6: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7b4de9: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7b4ded: mov ecx, dword ptr [ecx + 0x33c] */
  ecx = R32((uint32_t)(ecx + 0x33cu));
/* 7b4df3: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7b4df6: call 0x6c348b */
  esp -= 4; W32(esp, 0x7b4dfbu); SPILL(); f_6c348b(); if (g_unwind) return; RELOAD();
/* 7b4dfb: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 7b4dff: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7b4e01: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7b4e06: mov ecx, dword ptr [0xce8458] */
  ecx = R32((uint32_t)(0xce8458u));
/* 7b4e0c: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7b4e0f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b4e11: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 7b4e13: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b4e16: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7b4e18: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7b4e1a: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b4e1c: mov ecx, dword ptr [0xcfa7d8] */
  ecx = R32((uint32_t)(0xcfa7d8u));
/* 7b4e22: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
L_7b4e24: /* 7b4e24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b4e25: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b4e28: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b4e70(void) {
  LOAD_REGS();
L_7b4e70: /* 7b4e70: sub esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b4e76: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b4e77: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b4e78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b4e79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b4e7a: mov edi, dword ptr [esp + 0xb0] */
  edi = R32((uint32_t)(esp + 0xb0u));
/* 7b4e81: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 7b4e84: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* 7b4e8c: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b4e8f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b4e90: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 7b4e93: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 7b4e97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b4e98: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b4e9d: mov esi, ecx */
  esi = ecx;
/* 7b4e9f: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 7b4ea2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b4ea3: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b4ea6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b4ea6: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 7b4ea9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b4eaa: mov eax, edx */
  eax = edx;
/* 7b4eac: mov dword ptr [edi + 0xc], edx */
  W32((uint32_t)(edi + 0xcu), edx);
/* 7b4eaf: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 7b4eb1: xor ebx, ebx */
  ebx = 0;
/* 7b4eb3: cmp cl, 0x42 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b4eb6: jne 0x7b4ecd */
  if (!zf) goto L_7b4ecd;
L_7b4eb8: /* 7b4eb8: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 7b4ebb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b4ebc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b4ebd: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* 7b4ec0: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b4ec6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b4ec7: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b4ecdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b4ecd: /* 7b4ecd: cmp dword ptr [esi + 0x33c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x33cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b4ed3: je 0x7b54f5 */
  if (zf) goto L_7b54f5;
L_7b4ed9: /* 7b4ed9: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 7b4edd: fcomp qword ptr [0xa0d198] */
  fpu_com(ST0, F64((uint32_t)(0xa0d198u)));
  FPOP();
/* 7b4ee3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b4ee5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b4ee8: je 0x7b54f5 */
  if (zf) goto L_7b54f5;
L_7b4eee: /* 7b4eee: mov ecx, dword ptr [esi + 0x17c] */
  ecx = R32((uint32_t)(esi + 0x17cu));
/* 7b4ef4: cmp ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b4efa: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 7b4f00: jle 0x7b4f10 */
  if ((zf || sf != of)) goto L_7b4f10;
L_7b4f02: /* 7b4f02: and ecx, 0xffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7b4f08: sub ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 7b4f0e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_7b4f10: /* 7b4f10: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7b4f12: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7b4f15: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7b4f18: mov dword ptr [esp + 0x94], ecx */
  W32((uint32_t)(esp + 0x94u), ecx);
/* 7b4f1f: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 7b4f23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b4f24: lea ecx, [esp + 0x98] */
  ecx = (uint32_t)(esp + 0x98u);
/* 7b4f2b: mov dword ptr [esp + 0x68], ebx */
  W32((uint32_t)(esp + 0x68u), ebx);
/* 7b4f2f: mov dword ptr [esp + 0x6c], ebx */
  W32((uint32_t)(esp + 0x6cu), ebx);
/* 7b4f33: mov dword ptr [esp + 0x70], 0 */
  W32((uint32_t)(esp + 0x70u), 0x0u);
/* 7b4f3b: mov dword ptr [esp + 0x74], 0 */
  W32((uint32_t)(esp + 0x74u), 0x0u);
/* 7b4f43: mov dword ptr [esp + 0x78], 0 */
  W32((uint32_t)(esp + 0x78u), 0x0u);
/* 7b4f4b: mov dword ptr [esp + 0x7c], 0 */
  W32((uint32_t)(esp + 0x7cu), 0x0u);
/* 7b4f53: mov dword ptr [esp + 0x80], 0 */
  W32((uint32_t)(esp + 0x80u), 0x0u);
/* 7b4f5e: mov dword ptr [esp + 0x84], 0 */
  W32((uint32_t)(esp + 0x84u), 0x0u);
/* 7b4f69: mov dword ptr [esp + 0x88], ebx */
  W32((uint32_t)(esp + 0x88u), ebx);
/* 7b4f70: mov dword ptr [esp + 0x8c], 0x3f800000 */
  W32((uint32_t)(esp + 0x8cu), 0x3f800000u);
/* 7b4f7b: mov dword ptr [esp + 0x90], 0xffffffff */
  W32((uint32_t)(esp + 0x90u), 0xffffffffu);
/* 7b4f86: mov dword ptr [esp + 0x94], ebx */
  W32((uint32_t)(esp + 0x94u), ebx);
/* 7b4f8d: mov dword ptr [esp + 0x9c], edx */
  W32((uint32_t)(esp + 0x9cu), edx);
/* 7b4f94: mov dword ptr [esp + 0xa0], eax */
  W32((uint32_t)(esp + 0xa0u), eax);
/* 7b4f9b: mov dword ptr [esp + 0x98], ebx */
  W32((uint32_t)(esp + 0x98u), ebx);
/* 7b4fa2: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x7b4fa8u); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 7b4fa8: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7b4fae: fld dword ptr [eax + 0x444] */
  { double v = F32((uint32_t)(eax + 0x444u)); FPUSH(v); }
/* 7b4fb4: mov edx, dword ptr [eax + 0x170] */
  edx = R32((uint32_t)(eax + 0x170u));
/* 7b4fba: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 7b4fc0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b4fc3: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 7b4fc9: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 7b4fcd: fst dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0);
/* 7b4fd1: mov dword ptr [esp + 0x24], 0x3f800000 */
  W32((uint32_t)(esp + 0x24u), 0x3f800000u);
/* 7b4fd9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7b4fdb: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 7b4fdf: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 7b4fe3: mov ecx, dword ptr [eax + 0x2d4] */
  ecx = R32((uint32_t)(eax + 0x2d4u));
/* 7b4fe9: fld dword ptr [eax + 0x2d8] */
  { double v = F32((uint32_t)(eax + 0x2d8u)); FPUSH(v); }
/* 7b4fef: mov edx, ecx */
  edx = ecx;
/* 7b4ff1: fadd dword ptr [eax + 0x444] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x444u)));
/* 7b4ff7: mov dword ptr [esp + 0x20], edx */
  W32((uint32_t)(esp + 0x20u), edx);
/* 7b4ffb: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 7b4fff: mov edx, esp */
  edx = esp;
/* 7b5001: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 7b5005: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 7b5009: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 7b500d: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 7b5011: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7b5013: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7b5019: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 7b501d: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7b501f: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 7b5022: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7b5024: mov dword ptr [edx + 8], ebp */
  W32((uint32_t)(edx + 0x8u), ebp);
/* 7b5027: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 7b502b: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 7b5030: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7b5032: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 7b5036: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b5037: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 7b503b: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 7b503f: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 7b5043: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b5044: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7b5046: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b5047: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 7b504b: fadd dword ptr [esp + 0x64] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x64u)));
/* 7b504f: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 7b5053: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b5055: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 7b5059: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7b505b: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 7b505f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b5061: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 7b5065: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7b5067: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 7b506b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b506d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b506f: lea edx, [esp + 0x80] */
  edx = (uint32_t)(esp + 0x80u);
/* 7b5076: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b5077: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x7b507du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b507d: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 7b5084: fmul dword ptr [esp + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x30u)));
/* 7b5088: xor ecx, ecx */
  ecx = 0;
/* 7b508a: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 7b508e: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7b5090: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 7b5094: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 7b5098: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 7b509c: fmul qword ptr [0xa0d188] */
  ST0 = ST0 * (F64((uint32_t)(0xa0d188u)));
/* 7b50a2: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7b50a4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b50a6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b50a9: jp 0x7b540c */
  if (pf) goto L_7b540c;
L_7b50af: /* 7b50af: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 7b50b3: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7b50b9: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 7b50bf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b50c2: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 7b50c6: mov edx, esp */
  edx = esp;
/* 7b50c8: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7b50ca: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7b50cc: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 7b50cf: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 7b50d3: mov dword ptr [edx + 8], ebp */
  W32((uint32_t)(edx + 0x8u), ebp);
/* 7b50d6: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7b50d8: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 7b50dd: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 7b50e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b50e2: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 7b50e6: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 7b50ea: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 7b50ee: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7b50f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b50f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b50f2: lea edx, [esp + 0x80] */
  edx = (uint32_t)(esp + 0x80u);
/* 7b50f9: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 7b50fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b50fe: fadd dword ptr [esp + 0x68] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x68u)));
/* 7b5102: fst dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0);
/* 7b5106: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 7b5108: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 7b510c: fadd dword ptr [esp + 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x6cu)));
/* 7b5110: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 7b5114: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 7b5118: fadd dword ptr [esp + 0x70] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x70u)));
/* 7b511c: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 7b5120: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 7b5124: fmul dword ptr [0x9f40f4] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f4u)));
/* 7b512a: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 7b512e: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 7b5132: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 7b5136: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 7b513a: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 7b513e: fsub dword ptr [esp + 0x54] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x54u)));
/* 7b5142: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 7b5146: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b5148: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x7b514eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b514e: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 7b5155: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 7b515b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b515d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b5160: jp 0x7b5408 */
  if (pf) goto L_7b5408;
L_7b5166: /* 7b5166: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 7b516a: fmul dword ptr [esp + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x88u)));
/* 7b5171: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 7b5175: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 7b5179: fmul dword ptr [0xa0d184] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d184u)));
/* 7b517f: fld dword ptr [0x9f7fc4] */
  { double v = F32((uint32_t)(0x9f7fc4u)); FPUSH(v); }
/* 7b5185: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 7b5187: fcomp dword ptr [esp + 0x38] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x38u)));
  FPOP();
/* 7b518b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b518d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b5190: jne 0x7b526f */
  if (!zf) goto L_7b526f;
L_7b5196: /* 7b5196: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 7b519a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b519c: lea eax, [esp + 0x58] */
  eax = (uint32_t)(esp + 0x58u);
/* 7b51a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b51a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b51a2: lea edx, [esp + 0x28] */
  edx = (uint32_t)(esp + 0x28u);
/* 7b51a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b51a7: call 0x6cb802 */
  esp -= 4; W32(esp, 0x7b51acu); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 7b51ac: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 7b51b0: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7b51b2: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 7b51b6: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 7b51ba: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7b51bd: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 7b51c1: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 7b51c5: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 7b51c9: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7b51cc: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 7b51d0: mov dword ptr [esp + 0x4c], ecx */
  W32((uint32_t)(esp + 0x4cu), ecx);
/* 7b51d4: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7b51da: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 7b51de: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 7b51e2: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* 7b51e6: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 7b51ea: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 7b51ee: mov edx, esp */
  edx = esp;
/* 7b51f0: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 7b51f2: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 7b51f5: mov dword ptr [edx + 8], ebp */
  W32((uint32_t)(edx + 0x8u), ebp);
/* 7b51f8: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 7b51fd: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 7b5201: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 7b5205: lea edx, [esp + 0x4c] */
  edx = (uint32_t)(esp + 0x4cu);
/* 7b5209: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 7b520d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b520e: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 7b5212: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b5213: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b5214: lea edx, [esp + 0x80] */
  edx = (uint32_t)(esp + 0x80u);
/* 7b521b: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 7b521f: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 7b5223: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b5225: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b5226: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x7b522cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b522c: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 7b5230: mov eax, dword ptr [esi + 0x17c] */
  eax = R32((uint32_t)(esi + 0x17cu));
/* 7b5236: fmul dword ptr [esp + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x88u)));
/* 7b523d: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 7b5241: xor ecx, ecx */
  ecx = 0;
/* 7b5243: fsub dword ptr [0xa0c188] */
  ST0 = ST0 - (F32((uint32_t)(0xa0c188u)));
/* 7b5249: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7b524b: setle cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 7b524e: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7b5250: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 7b5251: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7b5253: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b5255: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 7b5259: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b525c: jne 0x7b5408 */
  if (!zf) goto L_7b5408;
L_7b5262: /* 7b5262: mov dword ptr [esp + 0x1c], 0xe10 */
  W32((uint32_t)(esp + 0x1cu), 0xe10u);
/* 7b526a: jmp 0x7b5408 */
  goto L_7b5408;
L_7b526f: /* 7b526f: fld dword ptr [0x9f7fc4] */
  { double v = F32((uint32_t)(0x9f7fc4u)); FPUSH(v); }
/* 7b5275: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 7b5277: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 7b527b: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7b527d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b527f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b5281: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b5284: jne 0x7b5408 */
  if (!zf) goto L_7b5408;
L_7b528a: /* 7b528a: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 7b528e: lea edx, [esp + 0x58] */
  edx = (uint32_t)(esp + 0x58u);
/* 7b5292: fmul qword ptr [0xa0d178] */
  ST0 = ST0 * (F64((uint32_t)(0xa0d178u)));
/* 7b5298: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b5299: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b529a: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* 7b52a1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7b52a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b52a5: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 7b52ad: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 7b52b5: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 7b52bd: call 0x6cb802 */
  esp -= 4; W32(esp, 0x7b52c2u); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 7b52c2: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7b52c5: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7b52cb: fadd dword ptr [ecx + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x178u)));
/* 7b52d1: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7b52d7: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7b52da: mov dword ptr [esp + 0x3c], ecx */
  W32((uint32_t)(esp + 0x3cu), ecx);
/* 7b52de: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 7b52e1: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7b52e3: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7b52e7: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7b52e9: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 7b52ef: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 7b52f3: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 7b52f7: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 7b52fb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7b52fd: mov eax, esp */
  eax = esp;
/* 7b52ff: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7b5301: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 7b5305: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 7b5308: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 7b530c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7b530f: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 7b5313: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 7b5318: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b5319: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 7b531d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b531e: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7b5324: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b5325: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 7b532c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b532d: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7b5333u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b5333: fld dword ptr [esp + 0x88] */
  { double v = F32((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* 7b533a: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 7b5340: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b5342: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b5345: jp 0x7b5408 */
  if (pf) goto L_7b5408;
L_7b534b: /* 7b534b: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 7b534f: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* 7b5353: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b5354: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b5355: lea eax, [esp + 0xa8] */
  eax = (uint32_t)(esp + 0xa8u);
/* 7b535c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b535d: call 0x6cb802 */
  esp -= 4; W32(esp, 0x7b5362u); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 7b5362: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 7b5366: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7b5368: fst dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0);
/* 7b536c: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7b5370: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 7b5374: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7b5377: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 7b537b: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 7b537f: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 7b5383: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7b5386: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 7b538a: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7b5390: mov dword ptr [esp + 0x4c], edx */
  W32((uint32_t)(esp + 0x4cu), edx);
/* 7b5394: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 7b5398: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 7b539c: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* 7b53a0: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 7b53a4: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 7b53a8: mov eax, esp */
  eax = esp;
/* 7b53aa: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 7b53ac: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 7b53af: mov dword ptr [eax + 8], ebp */
  W32((uint32_t)(eax + 0x8u), ebp);
/* 7b53b2: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 7b53b7: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 7b53bb: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 7b53bf: lea eax, [esp + 0x4c] */
  eax = (uint32_t)(esp + 0x4cu);
/* 7b53c3: fsub dword ptr [esp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x44u)));
/* 7b53c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b53c8: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* 7b53cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b53cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b53ce: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 7b53d5: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 7b53d9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b53db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b53dc: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7b53e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b53e2: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 7b53e6: fmul dword ptr [esp + 0x88] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x88u)));
/* 7b53ed: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 7b53f1: fadd dword ptr [0xa0c188] */
  ST0 = ST0 + (F32((uint32_t)(0xa0c188u)));
/* 7b53f7: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7b53f9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b53fb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b53fe: jp 0x7b5408 */
  if (pf) goto L_7b5408;
L_7b5400: /* 7b5400: mov dword ptr [esp + 0x1c], 0xfffff060 */
  W32((uint32_t)(esp + 0x1cu), 0xfffff060u);
L_7b5408: /* 7b5408: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
L_7b540c: /* 7b540c: mov edx, dword ptr [esi + 0x17c] */
  edx = R32((uint32_t)(esi + 0x17cu));
/* 7b5412: mov eax, edx */
  eax = edx;
/* 7b5414: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 7b5416: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 7b541a: jns 0x7b541e */
  if (!sf) goto L_7b541e;
L_7b541c: /* 7b541c: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_7b541e: /* 7b541e: mov edi, eax */
  edi = eax;
/* 7b5420: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7b5422: jle 0x7b54bb */
  if ((zf || sf != of)) goto L_7b54bb;
L_7b5428: /* 7b5428: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 7b542e: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 7b5434: fsub dword ptr [esi + 0x454] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x454u)));
/* 7b543a: fcomp qword ptr [0xa0b278] */
  fpu_com(ST0, F64((uint32_t)(0xa0b278u)));
  FPOP();
/* 7b5440: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b5442: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b5445: jne 0x7b54bb */
  if (!zf) goto L_7b54bb;
L_7b5447: /* 7b5447: cmp edi, 0x3e8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3e8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b544d: fld dword ptr [0xa0a848] */
  { double v = F32((uint32_t)(0xa0a848u)); FPUSH(v); }
/* 7b5453: jge 0x7b5467 */
  if ((sf == of)) goto L_7b5467;
L_7b5455: /* 7b5455: mov eax, 0xfa0 */
  eax = 0xfa0u;
/* 7b545a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b545c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 7b545d: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x7b545d);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 7b545f: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* 7b5463: fild dword ptr [esp + 0x38] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x38u)); FPUSH(v); }
L_7b5467: /* 7b5467: fmul dword ptr [esp + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x54u)));
/* 7b546b: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7b5471: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 7b5473: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b5475: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b5478: jp 0x7b5482 */
  if (pf) goto L_7b5482;
L_7b547a: /* 7b547a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b547c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_7b5482: /* 7b5482: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7b5488: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b5489: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 7b548b: fimul dword ptr [esp + 0x30] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(esp + 0x30u)));
/* 7b548f: fild dword ptr [esp + 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 7b5493: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7b5495: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7b5497: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7b549a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b549c: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x7b54a2u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 7b54a2: mov ecx, dword ptr [esp + 0xb8] */
  ecx = R32((uint32_t)(esp + 0xb8u));
/* 7b54a9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b54ac: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7b54ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b54af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b54b0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b54b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b54b2: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b54b8: ret 8 */
  esp += 12; SPILL(); return;
L_7b54bb: /* 7b54bb: cmp edi, 0xa */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b54be: jge 0x7b54dd */
  if ((sf == of)) goto L_7b54dd;
L_7b54c0: /* 7b54c0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7b54c2: jge 0x7b54c6 */
  if ((sf == of)) goto L_7b54c6;
L_7b54c4: /* 7b54c4: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
L_7b54c6: /* 7b54c6: cmp ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b54c9: jge 0x7b54dd */
  if ((sf == of)) goto L_7b54dd;
L_7b54cb: /* 7b54cb: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 7b54d1: mov eax, dword ptr [ecx + 0x3ac] */
  eax = R32((uint32_t)(ecx + 0x3acu));
/* 7b54d7: mov dword ptr [esi + 0x454], eax */
  W32((uint32_t)(esi + 0x454u), eax);
L_7b54dd: /* 7b54dd: mov ecx, dword ptr [esp + 0xb4] */
  ecx = R32((uint32_t)(esp + 0xb4u));
/* 7b54e4: mov eax, edx */
  eax = edx;
/* 7b54e6: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7b54e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b54e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b54ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b54eb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b54ec: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b54f2: ret 8 */
  esp += 12; SPILL(); return;
L_7b54f5: /* 7b54f5: mov edx, dword ptr [esi + 0x17c] */
  edx = R32((uint32_t)(esi + 0x17cu));
/* 7b54fb: mov eax, dword ptr [esp + 0xb4] */
  eax = R32((uint32_t)(esp + 0xb4u));
/* 7b5502: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b5503: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b5504: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b5505: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7b5507: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b5508: add esp, 0x9c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x9cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b550e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b56d0(void) {
  LOAD_REGS();
L_7b56d0: /* 7b56d0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b56d3: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7b56d7: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 7b56db: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 7b56e3: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7b56e6: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7b56e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b56ea: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 7b56ed: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b56ee: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7b56f1: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7b56f5: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 7b56f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b56fa: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b56ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b5700: call dword ptr [eax + esi*4] */
  { uint32_t t = R32((uint32_t)(eax + esi*4)); esp -= 4; W32(esp, 0x7b5703u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b5703: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 7b5707: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 7b570a: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7b570e: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 7b5711: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b5714: jne 0x7b572f */
  if (!zf) goto L_7b572f;
L_7b5716: /* 7b5716: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 7b5719: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b571a: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 7b571d: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 7b5721: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b5726: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b5728: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b5729: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x7b572fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b572f: /* 7b572f: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7b5733: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b5735: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7b5739: je 0x7b5856 */
  if (zf) goto L_7b5856;
L_7b573f: /* 7b573f: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 7b5745: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b5747: je 0x7b5856 */
  if (zf) goto L_7b5856;
L_7b574d: /* 7b574d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b574f: lea ecx, [eax - 0xc] */
  ecx = (uint32_t)(eax + 0xfffffff4u);
/* 7b5752: mov eax, dword ptr [0xcfa7d8] */
  eax = R32((uint32_t)(0xcfa7d8u));
/* 7b5757: add dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 7b5759: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7b575f: mov eax, dword ptr [0xce8458] */
  eax = R32((uint32_t)(0xce8458u));
/* 7b5764: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7b5767: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b5769: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7b576b: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7b576f: mov edx, dword ptr [ecx + 0x49c] */
  edx = R32((uint32_t)(ecx + 0x49cu));
/* 7b5775: cmp edx, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b5779: jne 0x7b57c1 */
  if (!zf) goto L_7b57c1;
L_7b577b: /* 7b577b: mov eax, dword ptr [ecx + 0xb0] */
  eax = R32((uint32_t)(ecx + 0xb0u));
/* 7b5781: fld dword ptr [ecx + 0x4a0] */
  { double v = F32((uint32_t)(ecx + 0x4a0u)); FPUSH(v); }
/* 7b5787: fcomp dword ptr [eax + 0x3ac] */
  fpu_com(ST0, F32((uint32_t)(eax + 0x3acu)));
  FPOP();
/* 7b578d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b578f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b5792: jp 0x7b57c1 */
  if (pf) goto L_7b57c1;
L_7b5794: /* 7b5794: mov edx, dword ptr [ecx + 0x33c] */
  edx = R32((uint32_t)(ecx + 0x33cu));
/* 7b579a: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7b57a0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b57a1: add ecx, 0x4a4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4a4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7b57a7: call dword ptr [0xcfa5e0] */
  esp -= 4; W32(esp, 0x7b57adu); SPILL(); f_4e2e87(); if (g_unwind) return; /* Core!??8FVector@@QBEHABV0@@Z */ RELOAD();
/* 7b57ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b57af: je 0x7b57bd */
  if (zf) goto L_7b57bd;
L_7b57b1: /* 7b57b1: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7b57b5: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 7b57bb: jmp 0x7b582c */
  goto L_7b582c;
L_7b57bd: /* 7b57bd: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
L_7b57c1: /* 7b57c1: mov ecx, dword ptr [ecx + 0x33c] */
  ecx = R32((uint32_t)(ecx + 0x33cu));
/* 7b57c7: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7b57cb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b57cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b57cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b57d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b57d2: call dword ptr [edx + 0x19c] */
  { uint32_t t = R32((uint32_t)(edx + 0x19cu)); esp -= 4; W32(esp, 0x7b57d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b57d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b57da: jne 0x7b5826 */
  if (!zf) goto L_7b5826;
L_7b57dc: /* 7b57dc: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7b57e0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7b57e4: mov dword ptr [ecx + 0x49c], edx */
  W32((uint32_t)(ecx + 0x49cu), edx);
/* 7b57ea: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7b57ee: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 7b57f4: mov edx, dword ptr [edx + 0x3ac] */
  edx = R32((uint32_t)(edx + 0x3acu));
/* 7b57fa: mov dword ptr [ecx + 0x4a0], edx */
  W32((uint32_t)(ecx + 0x4a0u), edx);
/* 7b5800: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7b5804: mov edx, dword ptr [ecx + 0x33c] */
  edx = R32((uint32_t)(ecx + 0x33cu));
/* 7b580a: add edx, 0x170 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7b5810: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 7b5812: add ecx, 0x4a4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4a4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7b5818: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7b581a: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 7b581d: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 7b5820: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7b5823: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_7b5826: /* 7b5826: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 7b582a: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_7b582c: /* 7b582c: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7b5832: mov eax, dword ptr [0xce8458] */
  eax = R32((uint32_t)(0xce8458u));
/* 7b5837: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7b583a: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b583c: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 7b583e: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b5841: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7b5843: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7b5845: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b5847: mov ecx, dword ptr [0xcfa7d8] */
  ecx = R32((uint32_t)(0xcfa7d8u));
/* 7b584d: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7b584f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b5850: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b5853: ret 8 */
  esp += 12; SPILL(); return;
L_7b5856: /* 7b5856: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7b585cu); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7b585c: mov ecx, eax */
  ecx = eax;
/* 7b585e: call dword ptr [0xcfa7e0] */
  esp -= 4; W32(esp, 0x7b5864u); SPILL(); f_4e270c(); if (g_unwind) return; /* Core!?Describe@FStateFrame@@QAEPBGXZ */ RELOAD();
/* 7b5864: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7b5868: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b5869: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7b586fu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7b586f: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7b5875: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b5877: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b5878: push 0xacf7e8 */
  { uint32_t v = 0xacf7e8u; esp -= 4; W32(esp, v); }
/* 7b587d: push 0x305 */
  { uint32_t v = 0x305u; esp -= 4; W32(esp, v); }
/* 7b5882: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b5883: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7b5889u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7b5889: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 7b588d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b5890: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 7b5896: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b5897: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b589a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b5920(void) {
  LOAD_REGS();
L_7b5920: /* 7b5920: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b5923: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 7b5927: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* 7b592b: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7b592e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7b5931: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b5932: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 7b5935: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b5936: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7b5939: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7b593d: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 7b5941: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b5942: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b5947: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b5948: call dword ptr [eax + esi*4] */
  { uint32_t t = R32((uint32_t)(eax + esi*4)); esp -= 4; W32(esp, 0x7b594bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b594b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7b594f: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 7b5952: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7b5956: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 7b5959: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b595c: jne 0x7b5977 */
  if (!zf) goto L_7b5977;
L_7b595e: /* 7b595e: mov ecx, dword ptr [edx + 8] */
  ecx = R32((uint32_t)(edx + 0x8u));
/* 7b5961: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b5962: mov dword ptr [edx + 0xc], eax */
  W32((uint32_t)(edx + 0xcu), eax);
/* 7b5965: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 7b5969: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b596e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b5970: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b5971: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x7b5977u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b5977: /* 7b5977: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7b597b: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 7b5981: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b5983: jne 0x7b59cc */
  if (!zf) goto L_7b59cc;
L_7b5985: /* 7b5985: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7b598bu); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7b598b: mov ecx, eax */
  ecx = eax;
/* 7b598d: call dword ptr [0xcfa7e0] */
  esp -= 4; W32(esp, 0x7b5993u); SPILL(); f_4e270c(); if (g_unwind) return; /* Core!?Describe@FStateFrame@@QAEPBGXZ */ RELOAD();
/* 7b5993: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7b5997: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b5998: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7b599eu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7b599e: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7b59a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b59a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b59a7: push 0xacf858 */
  { uint32_t v = 0xacf858u; esp -= 4; W32(esp, v); }
/* 7b59ac: push 0x305 */
  { uint32_t v = 0x305u; esp -= 4; W32(esp, v); }
/* 7b59b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b59b2: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7b59b8u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7b59b8: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 7b59bc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b59bf: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 7b59c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b59c6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b59c9: ret 8 */
  esp += 12; SPILL(); return;
L_7b59cc: /* 7b59cc: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b59ce: lea ecx, [eax - 0xc] */
  ecx = (uint32_t)(eax + 0xfffffff4u);
/* 7b59d1: mov eax, dword ptr [0xcfa7d8] */
  eax = R32((uint32_t)(0xcfa7d8u));
/* 7b59d6: add dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 7b59d8: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7b59de: mov eax, dword ptr [0xce8458] */
  eax = R32((uint32_t)(0xce8458u));
/* 7b59e3: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7b59e6: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b59e8: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7b59ea: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7b59ee: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7b59f2: mov ecx, dword ptr [ecx + 0x33c] */
  ecx = R32((uint32_t)(ecx + 0x33cu));
/* 7b59f8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b59fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b59fc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b59ff: mov eax, esp */
  eax = esp;
/* 7b5a01: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 7b5a03: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 7b5a07: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 7b5a0a: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 7b5a0e: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 7b5a11: call dword ptr [edx + 0x198] */
  { uint32_t t = R32((uint32_t)(edx + 0x198u)); esp -= 4; W32(esp, 0x7b5a17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b5a17: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7b5a1b: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7b5a1d: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7b5a23: mov eax, dword ptr [0xce8458] */
  eax = R32((uint32_t)(0xce8458u));
/* 7b5a28: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7b5a2b: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b5a2d: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 7b5a2f: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b5a32: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7b5a34: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 7b5a36: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b5a38: mov ecx, dword ptr [0xcfa7d8] */
  ecx = R32((uint32_t)(0xcfa7d8u));
/* 7b5a3e: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7b5a40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b5a41: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b5a44: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b5aa0(void) {
  LOAD_REGS();
L_7b5aa0: /* 7b5aa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b5aa1: mov ebp, esp */
  ebp = esp;
/* 7b5aa3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b5aa5: push 0x9cf000 */
  { uint32_t v = 0x9cf000u; esp -= 4; W32(esp, v); }
/* 7b5aaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b5ab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b5ab1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b5ab8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b5abb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b5abc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b5abd: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7b5ac0: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 7b5ac6: xor esi, esi */
  esi = 0;
/* 7b5ac8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b5aca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b5acb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b5ace: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 7b5ad1: jne 0x7b5b1e */
  if (!zf) goto L_7b5b1e;
L_7b5ad3: /* 7b5ad3: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7b5ad9u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7b5ad9: mov ecx, eax */
  ecx = eax;
/* 7b5adb: call dword ptr [0xcfa7e0] */
  esp -= 4; W32(esp, 0x7b5ae1u); SPILL(); f_4e270c(); if (g_unwind) return; /* Core!?Describe@FStateFrame@@QAEPBGXZ */ RELOAD();
/* 7b5ae1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b5ae4: mov esi, eax */
  esi = eax;
/* 7b5ae6: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7b5aecu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7b5aec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b5aed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b5aee: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7b5af3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7b5af5: push 0xacf8b8 */
  { uint32_t v = 0xacf8b8u; esp -= 4; W32(esp, v); }
/* 7b5afa: push 0x305 */
  { uint32_t v = 0x305u; esp -= 4; W32(esp, v); }
/* 7b5aff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b5b00: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7b5b06u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7b5b06: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b5b09: xor eax, eax */
  eax = 0;
/* 7b5b0b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b5b0e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b5b15: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b5b16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b5b17: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b5b18: mov esp, ebp */
  esp = ebp;
/* 7b5b1a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b5b1b: ret 0x14 */
  esp += 24; SPILL(); return;
L_7b5b1e: /* 7b5b1e: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b5b20: lea edx, [eax - 0xc] */
  edx = (uint32_t)(eax + 0xfffffff4u);
/* 7b5b23: mov eax, dword ptr [0xcfa7d8] */
  eax = R32((uint32_t)(0xcfa7d8u));
/* 7b5b28: add dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 7b5b2a: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 7b5b2f: mov ecx, dword ptr [0xce8458] */
  ecx = R32((uint32_t)(0xce8458u));
/* 7b5b35: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 7b5b38: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b5b3a: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 7b5b3c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b5b3f: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* 7b5b45: mov ecx, dword ptr [edx + 0x3ac] */
  ecx = R32((uint32_t)(edx + 0x3acu));
/* 7b5b4b: mov dword ptr [eax + 0x440], ecx */
  W32((uint32_t)(eax + 0x440u), ecx);
/* 7b5b51: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b5b54: mov dword ptr [edx + 0x390], esi */
  W32((uint32_t)(edx + 0x390u), esi);
/* 7b5b5a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b5b5d: and dword ptr [eax + 0x350], 0xffffff7f */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x350u))); uint32_t b = (uint32_t)(0xffffff7fu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x350u), r);
  }
/* 7b5b67: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7b5b6a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7b5b6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b5b6e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7b5b71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b5b72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b5b73: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b5b76: mov ecx, esp */
  ecx = esp;
/* 7b5b78: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7b5b7a: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7b5b7d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7b5b80: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7b5b83: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7b5b86: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b5b89: mov ecx, dword ptr [ecx + 0x33c] */
  ecx = R32((uint32_t)(ecx + 0x33cu));
/* 7b5b8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b5b90: call 0x6caa7e */
  esp -= 4; W32(esp, 0x7b5b95u); SPILL(); f_6caa7e(); if (g_unwind) return; RELOAD();
/* 7b5b95: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 7b5b98: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7b5b9e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b5ba0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b5ba3: jne 0x7b5bb1 */
  if (!zf) goto L_7b5bb1;
L_7b5ba5: /* 7b5ba5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b5ba8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7b5baa: call 0x6cc897 */
  esp -= 4; W32(esp, 0x7b5bafu); SPILL(); f_6cc897(); if (g_unwind) return; RELOAD();
/* 7b5baf: mov esi, eax */
  esi = eax;
L_7b5bb1: /* 7b5bb1: mov edx, dword ptr [0xce8220] */
  edx = R32((uint32_t)(0xce8220u));
/* 7b5bb7: mov eax, dword ptr [0xce8458] */
  eax = R32((uint32_t)(0xce8458u));
/* 7b5bbc: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* 7b5bbf: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b5bc1: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 7b5bc3: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b5bc6: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7b5bc8: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7b5bca: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 7b5bcc: mov ecx, dword ptr [0xcfa7d8] */
  ecx = R32((uint32_t)(0xcfa7d8u));
/* 7b5bd2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b5bd4: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 7b5bd6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b5bd7: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7b5bd9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b5bdc: mov eax, esi */
  eax = esi;
/* 7b5bde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b5bdf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b5be6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b5be7: mov esp, ebp */
  esp = ebp;
/* 7b5be9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b5bea: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7b5bed(void) {
  LOAD_REGS();
L_7b5bed: /* 7b5bed: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7b5bf0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b5bf5: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 7b5bf8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b5bf9: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 7b5bfc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b5c01u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b5c01(); return;
}

void f_7b5c01(void) {
  LOAD_REGS();
L_7b5c01: /* 7b5c01: push 0xa0d1a4 */
  { uint32_t v = 0xa0d1a4u; esp -= 4; W32(esp, v); }
/* 7b5c06: push 0xacf90c */
  { uint32_t v = 0xacf90cu; esp -= 4; W32(esp, v); }
/* 7b5c0b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b5c11u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b5c11: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b5c14: xor esi, esi */
  esi = 0;
/* 7b5c16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b5c17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b5c18: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b5c1du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7b5c1d: guest_badaddr(0x7b5c1d); return;
}

void f_7b5c80(void) {
  LOAD_REGS();
L_7b5c80: /* 7b5c80: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b5c83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b5c84: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 7b5c88: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b5c8b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b5c8e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b5c8f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b5c90: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b5c93: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 7b5c97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b5c98: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b5c9d: mov edi, ecx */
  edi = ecx;
/* 7b5c9f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b5ca2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b5ca3: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b5ca6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b5ca6: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b5ca9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b5caa: mov eax, edx */
  eax = edx;
/* 7b5cac: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7b5caf: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b5cb2: jne 0x7b5cca */
  if (!zf) goto L_7b5cca;
L_7b5cb4: /* 7b5cb4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b5cb7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b5cb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b5cba: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b5cbd: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b5cc3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b5cc4: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b5ccau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b5cca: /* 7b5cca: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 7b5cce: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 7b5cd2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b5cd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b5cd6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b5cd9: mov eax, esp */
  eax = esp;
/* 7b5cdb: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7b5cdd: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 7b5ce1: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7b5ce4: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7b5ce7: mov ecx, edi */
  ecx = edi;
/* 7b5ce9: call 0x6c8986 */
  esp -= 4; W32(esp, 0x7b5ceeu); SPILL(); f_6c8986(); if (g_unwind) return; RELOAD();
/* 7b5cee: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 7b5cf2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b5cf3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7b5cf5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b5cf6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b5cf9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b5d20(void) {
  LOAD_REGS();
L_7b5d20: /* 7b5d20: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b5d23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b5d24: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 7b5d28: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b5d2b: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 7b5d33: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b5d36: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b5d37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b5d38: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b5d3b: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 7b5d3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b5d40: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b5d45: mov edi, ecx */
  edi = ecx;
/* 7b5d47: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b5d4a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b5d4b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b5d4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b5d4e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b5d51: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 7b5d59: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b5d5c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b5d5d: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 7b5d61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b5d62: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b5d65: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b5d68: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b5d6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b5d6e: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b5d71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b5d71: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b5d74: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b5d75: mov eax, edx */
  eax = edx;
/* 7b5d77: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7b5d7a: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b5d7d: jne 0x7b5d95 */
  if (!zf) goto L_7b5d95;
L_7b5d7f: /* 7b5d7f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b5d82: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b5d83: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b5d85: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b5d88: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b5d8e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b5d8f: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b5d95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b5d95: /* 7b5d95: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7b5d99: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b5d9b: jne 0x7b5de4 */
  if (!zf) goto L_7b5de4;
L_7b5d9d: /* 7b5d9d: mov ecx, edi */
  ecx = edi;
/* 7b5d9f: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7b5da5u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7b5da5: mov ecx, eax */
  ecx = eax;
/* 7b5da7: call dword ptr [0xcfa7e0] */
  esp -= 4; W32(esp, 0x7b5dadu); SPILL(); f_4e270c(); if (g_unwind) return; /* Core!?Describe@FStateFrame@@QAEPBGXZ */ RELOAD();
/* 7b5dad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b5dae: mov ecx, edi */
  ecx = edi;
/* 7b5db0: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7b5db6u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7b5db6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b5db7: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7b5dbc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7b5dbe: push 0xacf918 */
  { uint32_t v = 0xacf918u; esp -= 4; W32(esp, v); }
/* 7b5dc3: push 0x305 */
  { uint32_t v = 0x305u; esp -= 4; W32(esp, v); }
/* 7b5dc8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b5dc9: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7b5dcfu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7b5dcf: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 7b5dd3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b5dd6: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 7b5ddc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b5ddd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b5dde: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b5de1: ret 8 */
  esp += 12; SPILL(); return;
L_7b5de4: /* 7b5de4: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7b5de8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b5de9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b5dea: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b5ded: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 7b5df5: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 7b5df9: mov edx, esp */
  edx = esp;
/* 7b5dfb: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7b5dfd: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 7b5e05: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 7b5e09: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7b5e0c: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 7b5e14: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 7b5e18: mov ecx, edi */
  ecx = edi;
/* 7b5e1a: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7b5e1d: call 0x6c8986 */
  esp -= 4; W32(esp, 0x7b5e22u); SPILL(); f_6c8986(); if (g_unwind) return; RELOAD();
/* 7b5e22: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 7b5e26: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b5e27: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7b5e29: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b5e2a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b5e2d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b5e80(void) {
  LOAD_REGS();
L_7b5e80: /* 7b5e80: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b5e83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b5e84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b5e85: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 7b5e89: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b5e8c: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 7b5e94: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b5e97: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b5e98: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b5e9b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b5e9c: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 7b5ea0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b5ea1: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b5ea6: mov ebx, ecx */
  ebx = ecx;
/* 7b5ea8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b5eab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b5eac: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b5eafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b5eaf: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b5eb2: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 7b5eba: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b5ebd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b5ebe: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 7b5ec2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b5ec3: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b5ec6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b5ec9: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b5ece: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b5ecf: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b5ed2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b5ed2: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b5ed5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b5ed6: mov eax, edx */
  eax = edx;
/* 7b5ed8: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7b5edb: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b5ede: jne 0x7b5ef6 */
  if (!zf) goto L_7b5ef6;
L_7b5ee0: /* 7b5ee0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b5ee3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b5ee4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b5ee6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b5ee9: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b5eef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b5ef0: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b5ef6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b5ef6: /* 7b5ef6: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 7b5efa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b5efc: je 0x7b5f80 */
  if (zf) goto L_7b5f80;
L_7b5f02: /* 7b5f02: mov eax, dword ptr [ebx + 0x33c] */
  eax = R32((uint32_t)(ebx + 0x33cu));
/* 7b5f08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b5f0a: je 0x7b5f80 */
  if (zf) goto L_7b5f80;
L_7b5f0c: /* 7b5f0c: mov eax, dword ptr [ebx + 0xb0] */
  eax = R32((uint32_t)(ebx + 0xb0u));
/* 7b5f12: mov esi, dword ptr [eax + 0x510] */
  esi = R32((uint32_t)(eax + 0x510u));
/* 7b5f18: xor edi, edi */
  edi = 0;
/* 7b5f1a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b5f1c: je 0x7b5fb5 */
  if (zf) goto L_7b5fb5;
L_7b5f22: /* 7b5f22: mov ecx, esi */
  ecx = esi;
/* 7b5f24: call dword ptr [0xcfa3ec] */
  esp -= 4; W32(esp, 0x7b5f2au); SPILL(); f_4e22e8(); if (g_unwind) return; /* Core!?GetClass@UObject@@QBEPAVUClass@@XZ */ RELOAD();
/* 7b5f2a: cmp eax, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b5f2e: jne 0x7b5f39 */
  if (!zf) goto L_7b5f39;
L_7b5f30: /* 7b5f30: or dword ptr [esi + 0x390], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x390u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x390u), r);
  }
/* 7b5f37: mov edi, esi */
  edi = esi;
L_7b5f39: /* 7b5f39: mov esi, dword ptr [esi + 0x370] */
  esi = R32((uint32_t)(esi + 0x370u));
/* 7b5f3f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b5f41: jne 0x7b5f22 */
  if (!zf) goto L_7b5f22;
L_7b5f43: /* 7b5f43: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b5f45: je 0x7b5fb5 */
  if (zf) goto L_7b5fb5;
L_7b5f47: /* 7b5f47: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 7b5f4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b5f4c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b5f4d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b5f50: mov eax, esi */
  eax = esi;
/* 7b5f52: mov edx, esp */
  edx = esp;
/* 7b5f54: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7b5f56: mov ecx, esi */
  ecx = esi;
/* 7b5f58: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7b5f5b: mov ecx, ebx */
  ecx = ebx;
/* 7b5f5d: mov dword ptr [esp + 0x24], esi */
  W32((uint32_t)(esp + 0x24u), esi);
/* 7b5f61: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* 7b5f65: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 7b5f69: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7b5f6c: call 0x6c8986 */
  esp -= 4; W32(esp, 0x7b5f71u); SPILL(); f_6c8986(); if (g_unwind) return; RELOAD();
/* 7b5f71: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 7b5f75: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 7b5f77: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b5f78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b5f79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b5f7a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b5f7d: ret 8 */
  esp += 12; SPILL(); return;
L_7b5f80: /* 7b5f80: mov ecx, ebx */
  ecx = ebx;
/* 7b5f82: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7b5f88u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7b5f88: mov ecx, eax */
  ecx = eax;
/* 7b5f8a: call dword ptr [0xcfa7e0] */
  esp -= 4; W32(esp, 0x7b5f90u); SPILL(); f_4e270c(); if (g_unwind) return; /* Core!?Describe@FStateFrame@@QAEPBGXZ */ RELOAD();
/* 7b5f90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b5f91: mov ecx, ebx */
  ecx = ebx;
/* 7b5f93: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x7b5f99u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 7b5f99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b5f9a: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7b5f9f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7b5fa1: push 0xacf9e8 */
  { uint32_t v = 0xacf9e8u; esp -= 4; W32(esp, v); }
/* 7b5fa6: push 0x305 */
  { uint32_t v = 0x305u; esp -= 4; W32(esp, v); }
/* 7b5fab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b5fac: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x7b5fb2u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 7b5fb2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7b5fb5: /* 7b5fb5: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 7b5fb9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b5fba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b5fbb: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 7b5fc1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b5fc2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b5fc5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b6030(void) {
  LOAD_REGS();
L_7b6030: /* 7b6030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b6031: mov esi, ecx */
  esi = ecx;
/* 7b6033: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 7b6039: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b603b: je 0x7b60a7 */
  if (zf) goto L_7b60a7;
L_7b603d: /* 7b603d: mov eax, dword ptr [esi + 0x3b4] */
  eax = R32((uint32_t)(esi + 0x3b4u));
/* 7b6043: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6045: je 0x7b60a7 */
  if (zf) goto L_7b60a7;
L_7b6047: /* 7b6047: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 7b604d: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 7b6053: fsub dword ptr [esi + 0x3d4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x3d4u)));
/* 7b6059: fcomp dword ptr [0xa0973c] */
  fpu_com(ST0, F32((uint32_t)(0xa0973cu)));
  FPOP();
/* 7b605f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b6061: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6064: je 0x7b60b6 */
  if (zf) goto L_7b60b6;
L_7b6066: /* 7b6066: mov ecx, dword ptr [edx + 0x180] */
  ecx = R32((uint32_t)(edx + 0x180u));
/* 7b606c: mov eax, dword ptr [edx + 0x2f4] */
  eax = R32((uint32_t)(edx + 0x2f4u));
/* 7b6072: and ecx, 0xffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7b6078: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 7b607a: mov edx, eax */
  edx = eax;
/* 7b607c: jns 0x7b6080 */
  if (!sf) goto L_7b6080;
L_7b607e: /* 7b607e: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
L_7b6080: /* 7b6080: xor ecx, ecx */
  ecx = 0;
/* 7b6082: cmp edx, 0x7d0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7d0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b6088: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 7b608b: mov edx, ecx */
  edx = ecx;
/* 7b608d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b608f: jne 0x7b60a7 */
  if (!zf) goto L_7b60a7;
L_7b6091: /* 7b6091: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7b6093: jge 0x7b6097 */
  if ((sf == of)) goto L_7b6097;
L_7b6095: /* 7b6095: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_7b6097: /* 7b6097: xor edx, edx */
  edx = 0;
/* 7b6099: cmp eax, 0xf82f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf82fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b609e: setg dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 7b60a1: mov eax, edx */
  eax = edx;
/* 7b60a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b60a5: je 0x7b60b6 */
  if (zf) goto L_7b60b6;
L_7b60a7: /* 7b60a7: mov ecx, esi */
  ecx = esi;
/* 7b60a9: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7b60afu); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7b60af: mov dword ptr [eax + 0x28], 0 */
  W32((uint32_t)(eax + 0x28u), 0x0u);
L_7b60b6: /* 7b60b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b60b7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b60f0(void) {
  LOAD_REGS();
L_7b60f0: /* 7b60f0: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b60f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b60f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b60f5: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 7b60f9: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b60fc: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b60ff: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b6100: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b6101: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b6104: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 7b6108: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b6109: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b610e: mov edi, ecx */
  edi = ecx;
/* 7b6110: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b6113: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b6114: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b6117u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b6117: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b611a: xor ebx, ebx */
  ebx = 0;
/* 7b611c: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 7b6120: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b6123: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b6124: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 7b6128: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b6129: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b612c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b612f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b6134: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b6135: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b6138u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b6138: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7b613b: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* 7b613f: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7b6142: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b6143: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 7b6147: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b6148: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b614b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b614e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7b6153: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b6154: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7b6157u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b6157: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 7b615a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7b615b: mov eax, edx */
  eax = edx;
/* 7b615d: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 7b6160: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b6163: jne 0x7b617a */
  if (!zf) goto L_7b617a;
L_7b6165: /* 7b6165: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7b6168: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7b6169: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b616a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7b616d: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 7b6173: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b6174: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7b617au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b617a: /* 7b617a: mov esi, dword ptr [edi + 0x33c] */
  esi = R32((uint32_t)(edi + 0x33cu));
/* 7b6180: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b6182: je 0x7b62ef */
  if (zf) goto L_7b62ef;
L_7b6188: /* 7b6188: mov ecx, dword ptr [esi + 0x390] */
  ecx = R32((uint32_t)(esi + 0x390u));
/* 7b618e: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 7b6192: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 7b6195: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7b6198: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b619a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b619b: je 0x7b61be */
  if (zf) goto L_7b61be;
L_7b619d: /* 7b619d: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 7b619f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b61a0: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* 7b61a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b61a5: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 7b61a9: mov eax, dword ptr [0xb7e498] */
  eax = R32((uint32_t)(0xb7e498u));
/* 7b61ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b61af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b61b0: mov ecx, esi */
  ecx = esi;
/* 7b61b2: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x7b61b8u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 7b61b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b61b9: mov ecx, esi */
  ecx = esi;
/* 7b61bb: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0x7b61beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7b61be: /* 7b61be: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7b61c4: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 7b61c8: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 7b61ce: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b61d3: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 7b61d7: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 7b61db: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7b61de: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 7b61e2: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7b61e4: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 7b61e8: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 7b61ec: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 7b61f0: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x7b61f6u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 7b61f6: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7b61fc: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7b6200: mov dword ptr [edi + 0x370], ebx */
  W32((uint32_t)(edi + 0x370u), ebx);
/* 7b6206: and dword ptr [eax + 0x390], 0xfffffdff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x390u))); uint32_t b = (uint32_t)(0xfffffdffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x390u), r);
  }
/* 7b6210: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7b6216: mov ecx, dword ptr [eax + 0x3a0] */
  ecx = R32((uint32_t)(eax + 0x3a0u));
/* 7b621c: mov dword ptr [eax + 0x39c], ecx */
  W32((uint32_t)(eax + 0x39cu), ecx);
/* 7b6222: mov edx, dword ptr [edi + 0x33c] */
  edx = R32((uint32_t)(edi + 0x33cu));
/* 7b6228: mov dword ptr [edx + 0x3d4], ebx */
  W32((uint32_t)(edx + 0x3d4u), ebx);
/* 7b622e: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 7b6234: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 7b6238: mov dword ptr [eax + 0x3d8], ebx */
  W32((uint32_t)(eax + 0x3d8u), ebx);
/* 7b623e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 7b6242: mov dword ptr [edi + 0x38c], ecx */
  W32((uint32_t)(edi + 0x38cu), ecx);
/* 7b6248: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7b624e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b624f: call 0x6c1221 */
  esp -= 4; W32(esp, 0x7b6254u); SPILL(); f_6c1221(); if (g_unwind) return; RELOAD();
/* 7b6254: mov ecx, edi */
  ecx = edi;
/* 7b6256: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7b625cu); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7b625c: mov dword ptr [eax + 0x28], 0x1f5 */
  W32((uint32_t)(eax + 0x28u), 0x1f5u);
/* 7b6263: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 7b6267: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 7b626b: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 7b626f: lea esi, [edi + 0x374] */
  esi = (uint32_t)(edi + 0x374u);
/* 7b6275: mov ebp, esi */
  ebp = esi;
/* 7b6277: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 7b627a: mov dword ptr [ebp + 4], ecx */
  W32((uint32_t)(ebp + 0x4u), ecx);
/* 7b627d: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 7b6280: cmp dword ptr [edi + 0x38c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x38cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b6286: jne 0x7b6297 */
  if (!zf) goto L_7b6297;
L_7b6288: /* 7b6288: lea ebp, [edi + 0x380] */
  ebp = (uint32_t)(edi + 0x380u);
/* 7b628e: mov dword ptr [ebp], eax */
  W32((uint32_t)(ebp), eax);
/* 7b6291: mov dword ptr [ebp + 4], ecx */
  W32((uint32_t)(ebp + 0x4u), ecx);
/* 7b6294: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_7b6297: /* 7b6297: mov eax, dword ptr [edi + 0x350] */
  eax = R32((uint32_t)(edi + 0x350u));
/* 7b629d: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7b62a3: and eax, 0xffffffbf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffbfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7b62a6: mov dword ptr [edi + 0x350], eax */
  W32((uint32_t)(edi + 0x350u), eax);
/* 7b62ac: mov dword ptr [edi + 0x428], ebx */
  W32((uint32_t)(edi + 0x428u), ebx);
/* 7b62b2: call 0x6c7bbc */
  esp -= 4; W32(esp, 0x7b62b7u); SPILL(); f_6c7bbc(); if (g_unwind) return; RELOAD();
/* 7b62b7: mov ebp, dword ptr [edi + 0x350] */
  ebp = R32((uint32_t)(edi + 0x350u));
/* 7b62bd: mov ecx, esi */
  ecx = esi;
/* 7b62bf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b62c1: lea eax, [edi + 0x358] */
  eax = (uint32_t)(edi + 0x358u);
/* 7b62c7: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 7b62c9: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 7b62cc: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7b62cf: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 7b62d2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7b62d5: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 7b62db: and ebp, 0xfffffff7 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 7b62de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b62df: mov dword ptr [edi + 0x350], ebp */
  W32((uint32_t)(edi + 0x350u), ebp);
/* 7b62e5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b62e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b62e8: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x7b62eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b62ee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_7b62ef: /* 7b62ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b62f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b62f1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b62f2: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b62f5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7b6390(void) {
  LOAD_REGS();
L_7b6390: /* 7b6390: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b6391: mov ebp, esp */
  ebp = esp;
/* 7b6393: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7b6395: push 0x9cf010 */
  { uint32_t v = 0x9cf010u; esp -= 4; W32(esp, v); }
/* 7b639a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7b63a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b63a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7b63a8: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b63ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b63ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b63ad: mov esi, ecx */
  esi = ecx;
/* 7b63af: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7b63b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b63b6: xor ebx, ebx */
  ebx = 0;
/* 7b63b8: add ecx, 0x194 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7b63be: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7b63c1: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7b63c4: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x7b63cau); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 7b63ca: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b63cc: jne 0x7b66e7 */
  if (!zf) goto L_7b66e7;
L_7b63d2: /* 7b63d2: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 7b63d5: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 7b63d8: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 7b63db: xor edi, edi */
  edi = 0;
/* 7b63dd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_7b63e0: /* 7b63e0: cmp edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7b63e3: jge 0x7b64ed */
  if ((sf == of)) goto L_7b64ed;
L_7b63e9: /* 7b63e9: mov ecx, dword ptr [esi + edi*4 + 0x494] */
  ecx = R32((uint32_t)(esi + edi*4 + 0x494u));
/* 7b63f0: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b63f2: je 0x7b64e7 */
  if (zf) goto L_7b64e7;
L_7b63f8: /* 7b63f8: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 7b63fe: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6401: jne 0x7b64e0 */
  if (!zf) goto L_7b64e0;
L_7b6407: /* 7b6407: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 7b640d: fld dword ptr [edx + 0x178] */
  { double v = F32((uint32_t)(edx + 0x178u)); FPUSH(v); }
/* 7b6413: fsub dword ptr [ecx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x178u)));
/* 7b6419: fld dword ptr [ecx + 0x2d8] */
  { double v = F32((uint32_t)(ecx + 0x2d8u)); FPUSH(v); }
/* 7b641f: fadd dword ptr [edx + 0x2d8] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x2d8u)));
/* 7b6425: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7b6427: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7b6429: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7b642b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7b642d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7b642f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b6431: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b6433: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b6436: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b6438: jnp 0x7b64e0 */
  if (!pf) goto L_7b64e0;
L_7b643e: /* 7b643e: fld dword ptr [edx + 0x170] */
  { double v = F32((uint32_t)(edx + 0x170u)); FPUSH(v); }
/* 7b6444: fsub dword ptr [ecx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x170u)));
/* 7b644a: fld dword ptr [edx + 0x174] */
  { double v = F32((uint32_t)(edx + 0x174u)); FPUSH(v); }
/* 7b6450: fsub dword ptr [ecx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x174u)));
/* 7b6456: fld dword ptr [edx + 0x2d4] */
  { double v = F32((uint32_t)(edx + 0x2d4u)); FPUSH(v); }
/* 7b645c: fadd dword ptr [ecx + 0x2d4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x2d4u)));
/* 7b6462: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 7b6464: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7b6466: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 7b6468: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7b646a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7b646c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7b646e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7b6470: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7b6472: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b6474: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b6476: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b6478: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b647b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b647d: jnp 0x7b64e0 */
  if (!pf) goto L_7b64e0;
L_7b647f: /* 7b647f: fld dword ptr [edx + 0x178] */
  { double v = F32((uint32_t)(edx + 0x178u)); FPUSH(v); }
/* 7b6485: fsub dword ptr [ecx + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x178u)));
/* 7b648b: fld dword ptr [edx + 0x174] */
  { double v = F32((uint32_t)(edx + 0x174u)); FPUSH(v); }
/* 7b6491: fsub dword ptr [ecx + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x174u)));
/* 7b6497: fld dword ptr [edx + 0x170] */
  { double v = F32((uint32_t)(edx + 0x170u)); FPUSH(v); }
/* 7b649d: fsub dword ptr [ecx + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x170u)));
/* 7b64a3: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7b64a6: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 7b64a9: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 7b64ac: mov eax, dword ptr [ecx + 0x2d4] */
  eax = R32((uint32_t)(ecx + 0x2d4u));
/* 7b64b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b64b3: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7b64b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b64b7: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7b64ba: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x7b64c0u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 7b64c0: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7b64c3: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7b64c5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7b64c6: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7b64c9: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7b64cc: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7b64cf: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7b64d2: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7b64d5: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7b64d8: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7b64db: jmp 0x7b63e0 */
  goto L_7b63e0;
L_7b64e0: /* 7b64e0: mov dword ptr [esi + edi*4 + 0x494], ebx */
  W32((uint32_t)(esi + edi*4 + 0x494u), ebx);
L_7b64e7: /* 7b64e7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7b64e8: jmp 0x7b63e0 */
  goto L_7b63e0;
L_7b64ed: /* 7b64ed: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7b64f0: call dword ptr [0xcfa5e8] */
  esp -= 4; W32(esp, 0x7b64f6u); SPILL(); f_4e3edb(); if (g_unwind) return; /* Core!?IsZero@FVector@@QBEHXZ */ RELOAD();
/* 7b64f6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b64f8: jne 0x7b66e7 */
  if (!zf) goto L_7b66e7;
L_7b64fe: /* 7b64fe: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 7b6501: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x7b6507u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 7b6507: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7b650d: add ecx, 0x194 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7b6513: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x7b6519u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 7b6519: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7b651c: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7b651f: mov eax, edx */
  eax = edx;
/* 7b6521: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b6522: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 7b6525: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b6526: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7b652c: add ecx, 0x194 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7b6532: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7b6535: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x7b653bu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 7b653b: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7b653e: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7b6541: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7b6544: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7b6547: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7b6549: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7b654c: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7b654f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7b6551: fcom dword ptr [0xa0d184] */
  fpu_com(ST0, F32((uint32_t)(0xa0d184u)));
/* 7b6557: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b6559: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b655c: je 0x7b66e5 */
  if (zf) goto L_7b66e5;
L_7b6562: /* 7b6562: fcomp dword ptr [0xa0d214] */
  fpu_com(ST0, F32((uint32_t)(0xa0d214u)));
  FPOP();
/* 7b6568: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b656a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b656d: jp 0x7b6638 */
  if (pf) goto L_7b6638;
L_7b6573: /* 7b6573: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7b6576: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 7b6579: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 7b657f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b6580: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7b6583: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7b6586: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 7b658c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7b658e: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7b6591: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 7b6597: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7b659a: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 7b659c: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7b659f: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 7b65a1: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 7b65a4: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7b65a7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b65a9: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7b65ac: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7b65b2u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7b65b2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7b65b4: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7b65b7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7b65ba: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 7b65bd: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7b65c0: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 7b65c3: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7b65c6: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7b65c8: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7b65cb: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7b65cd: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7b65d0: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 7b65d2: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7b65d5: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 7b65d8: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 7b65db: fst dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0);
/* 7b65de: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 7b65e1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 7b65e3: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 7b65e6: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 7b65e9: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7b65ec: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 7b65ef: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7b65f2: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7b65f4: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7b65f7: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7b65f9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7b65fb: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7b65fe: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 7b6601: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7b6603: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7b6609: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b660b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b660d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b6610: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b6612: jp 0x7b6638 */
  if (pf) goto L_7b6638;
L_7b6614: /* 7b6614: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 7b6617: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7b661d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7b6620: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7b6623: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7b6629: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7b662c: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 7b662f: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7b6635: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
L_7b6638: /* 7b6638: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7b663b: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 7b663e: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7b6641: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7b6642: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7b6645: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 7b6648: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7b664b: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7b664e: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 7b6651: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 7b6654: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 7b6657: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 7b665a: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x7b6660u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 7b6660: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7b6662: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7b6665: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 7b666b: add edx, 0x194 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7b6671: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 7b6673: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 7b6676: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7b6679: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7b667c: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7b667f: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7b6685: fmul dword ptr [eax + 0x194] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x194u)));
/* 7b668b: add eax, 0x194 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x194u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b6690: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7b6692: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7b6695: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 7b6698: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7b669b: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7b669e: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 7b66a1: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7b66a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b66a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b66ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b66af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b66b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b66b1: mov esp, ebp */
  esp = ebp;
/* 7b66b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b66b4: ret  */
  esp += 4; SPILL(); return;
L_7b66e5: /* 7b66e5: fstp st(0) */
  STI(0) = ST0; FPOP();
L_7b66e7: /* 7b66e7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b66ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b66eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b66ec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b66f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b66f4: mov esp, ebp */
  esp = ebp;
/* 7b66f6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b66f7: ret  */
  esp += 4; SPILL(); return;
}

void f_7b66b5(void) {
  LOAD_REGS();
L_7b66b5: /* 7b66b5: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7b66b8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7b66bd: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 7b66c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b66c1: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7b66c4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b66c9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7b66c9(); return;
}

void f_7b66c9(void) {
  LOAD_REGS();
L_7b66c9: /* 7b66c9: push 0xa0d1d8 */
  { uint32_t v = 0xa0d1d8u; esp -= 4; W32(esp, v); }
/* 7b66ce: push 0xacfa60 */
  { uint32_t v = 0xacfa60u; esp -= 4; W32(esp, v); }
/* 7b66d3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7b66d9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7b66d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b66dc: xor ebx, ebx */
  ebx = 0;
/* 7b66de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b66df: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b66e0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7b66e5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 7b66e5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7b66e7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7b66ea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b66eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b66ec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7b66f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b66f4: mov esp, ebp */
  esp = ebp;
/* 7b66f6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b66f7: ret  */
  esp += 4; SPILL(); return;
}

void f_7b67e0(void) {
  LOAD_REGS();
L_7b67e0: /* 7b67e0: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b67e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b67e4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7b67e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7b67e6: mov esi, ecx */
  esi = ecx;
/* 7b67e8: mov edx, dword ptr [esi + 0x370] */
  edx = R32((uint32_t)(esi + 0x370u));
/* 7b67ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b67ef: xor edi, edi */
  edi = 0;
/* 7b67f1: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b67f3: je 0x7b6c28 */
  if (zf) goto L_7b6c28;
L_7b67f9: /* 7b67f9: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7b67ff: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b6801: je 0x7b6c28 */
  if (zf) goto L_7b6c28;
L_7b6807: /* 7b6807: fld dword ptr [esi + 0x36c] */
  { double v = F32((uint32_t)(esi + 0x36cu)); FPUSH(v); }
/* 7b680d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7b6813: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b6815: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b6818: jp 0x7b6824 */
  if (pf) goto L_7b6824;
L_7b681a: /* 7b681a: cmp byte ptr [ecx + 0x50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b681e: jne 0x7b6c28 */
  if (!zf) goto L_7b6c28;
L_7b6824: /* 7b6824: mov eax, dword ptr [esi + 0x350] */
  eax = R32((uint32_t)(esi + 0x350u));
/* 7b682a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 7b682c: js 0x7b6c33 */
  if (sf) goto L_7b6c33;
L_7b6832: /* 7b6832: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6834: je 0x7b6865 */
  if (zf) goto L_7b6865;
L_7b6836: /* 7b6836: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b6838: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b6839: lea edx, [esi + 0x358] */
  edx = (uint32_t)(esi + 0x358u);
/* 7b683f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b6840: call dword ptr [eax + 0x190] */
  { uint32_t t = R32((uint32_t)(eax + 0x190u)); esp -= 4; W32(esp, 0x7b6846u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b6846: mov ebx, dword ptr [esi + 0x350] */
  ebx = R32((uint32_t)(esi + 0x350u));
/* 7b684c: xor ecx, ecx */
  ecx = 0;
/* 7b684e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b6850: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 7b6853: mov eax, ebx */
  eax = ebx;
/* 7b6855: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 7b6858: xor ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 7b685a: and ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7b685d: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 7b685f: mov dword ptr [esi + 0x350], eax */
  W32((uint32_t)(esi + 0x350u), eax);
L_7b6865: /* 7b6865: mov ecx, dword ptr [esi + 0x370] */
  ecx = R32((uint32_t)(esi + 0x370u));
/* 7b686b: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b686d: je 0x7b6c28 */
  if (zf) goto L_7b6c28;
L_7b6873: /* 7b6873: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7b6879: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b687b: je 0x7b6c28 */
  if (zf) goto L_7b6c28;
L_7b6881: /* 7b6881: test byte ptr [esi + 0x350], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x350u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6888: jne 0x7b6c33 */
  if (!zf) goto L_7b6c33;
L_7b688e: /* 7b688e: lea edx, [ecx + 0x170] */
  edx = (uint32_t)(ecx + 0x170u);
/* 7b6894: mov ebp, dword ptr [edx] */
  ebp = R32((uint32_t)(edx));
/* 7b6896: lea edi, [esi + 0x374] */
  edi = (uint32_t)(esi + 0x374u);
/* 7b689c: mov ebx, edi */
  ebx = edi;
/* 7b689e: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 7b68a0: mov ebp, dword ptr [edx + 4] */
  ebp = R32((uint32_t)(edx + 0x4u));
/* 7b68a3: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 7b68a6: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7b68a9: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 7b68ac: mov dl, byte ptr [eax + 0x50] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x50u))) & 0xffu);
/* 7b68af: cmp dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b68b2: jne 0x7b6993 */
  if (!zf) goto L_7b6993;
L_7b68b8: /* 7b68b8: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7b68bd: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b68c3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b68c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b68c5: je 0x7b68ea */
  if (zf) goto L_7b68ea;
L_7b68c7: /* 7b68c7: mov eax, dword ptr [esi + 0x370] */
  eax = R32((uint32_t)(esi + 0x370u));
/* 7b68cd: fld dword ptr [eax + 0x2d8] */
  { double v = F32((uint32_t)(eax + 0x2d8u)); FPUSH(v); }
/* 7b68d3: fmul qword ptr [0xa092e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa092e8u)));
/* 7b68d9: fadd dword ptr [esi + 0x37c] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x37cu)));
/* 7b68df: fstp dword ptr [esi + 0x37c] */
  WF32((uint32_t)(esi + 0x37cu), ST0); FPOP();
/* 7b68e5: jmp 0x7b69e4 */
  goto L_7b69e4;
L_7b68ea: /* 7b68ea: mov ecx, dword ptr [esi + 0x370] */
  ecx = R32((uint32_t)(esi + 0x370u));
/* 7b68f0: push 0xb602d8 */
  { uint32_t v = 0xb602d8u; esp -= 4; W32(esp, v); }
/* 7b68f5: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b68fbu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b68fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b68fd: je 0x7b69e4 */
  if (zf) goto L_7b69e4;
L_7b6903: /* 7b6903: mov ecx, dword ptr [esi + 0x370] */
  ecx = R32((uint32_t)(esi + 0x370u));
/* 7b6909: push 0xb66568 */
  { uint32_t v = 0xb66568u; esp -= 4; W32(esp, v); }
/* 7b690e: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b6914u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b6914: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6916: je 0x7b6966 */
  if (zf) goto L_7b6966;
L_7b6918: /* 7b6918: mov eax, dword ptr [esi + 0x428] */
  eax = R32((uint32_t)(esi + 0x428u));
/* 7b691e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6920: je 0x7b6966 */
  if (zf) goto L_7b6966;
L_7b6922: /* 7b6922: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 7b6925: push 0xb66038 */
  { uint32_t v = 0xb66038u; esp -= 4; W32(esp, v); }
/* 7b692a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b6930u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b6930: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6932: je 0x7b6966 */
  if (zf) goto L_7b6966;
L_7b6934: /* 7b6934: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7b693a: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7b6940: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b6942: mov edx, edi */
  edx = edi;
/* 7b6944: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7b6946: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 7b6949: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 7b694c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 7b694f: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 7b6952: mov edx, dword ptr [esi + 0x370] */
  edx = R32((uint32_t)(esi + 0x370u));
/* 7b6958: mov eax, dword ptr [edx + 0x178] */
  eax = R32((uint32_t)(edx + 0x178u));
/* 7b695e: mov dword ptr [esi + 0x37c], eax */
  W32((uint32_t)(esi + 0x37cu), eax);
/* 7b6964: jmp 0x7b69e4 */
  goto L_7b69e4;
L_7b6966: /* 7b6966: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7b696c: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 7b6972: fcomp dword ptr [esi + 0x37c] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x37cu)));
  FPOP();
/* 7b6978: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b697a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b697d: jp 0x7b69e4 */
  if (pf) goto L_7b69e4;
L_7b697f: /* 7b697f: fld dword ptr [esi + 0x37c] */
  { double v = F32((uint32_t)(esi + 0x37cu)); FPUSH(v); }
/* 7b6985: fadd dword ptr [0xa0d224] */
  ST0 = ST0 + (F32((uint32_t)(0xa0d224u)));
/* 7b698b: fstp dword ptr [esi + 0x37c] */
  WF32((uint32_t)(esi + 0x37cu), ST0); FPOP();
/* 7b6991: jmp 0x7b69e4 */
  goto L_7b69e4;
L_7b6993: /* 7b6993: cmp dl, 9 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b6996: jne 0x7b69e4 */
  if (!zf) goto L_7b69e4;
L_7b6998: /* 7b6998: mov edx, dword ptr [ecx + 0x2d4] */
  edx = R32((uint32_t)(ecx + 0x2d4u));
/* 7b699e: add eax, 0x44c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7b69a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b69a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b69a5: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 7b69a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b69aa: call 0x6cb802 */
  esp -= 4; W32(esp, 0x7b69afu); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 7b69af: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 7b69b1: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7b69b3: mov ecx, edi */
  ecx = edi;
/* 7b69b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b69b8: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 7b69bc: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 7b69c0: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 7b69c3: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7b69c6: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 7b69ca: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 7b69cd: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7b69d0: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 7b69d4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7b69d6: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7b69d9: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 7b69dd: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 7b69e1: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_7b69e4: /* 7b69e4: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 7b69ea: mov eax, dword ptr [ecx + 0x39c] */
  eax = R32((uint32_t)(ecx + 0x39cu));
/* 7b69f0: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 7b69f4: mov edx, edi */
  edx = edi;
/* 7b69f6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7b69f8: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 7b69fc: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 7b69ff: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7b6a02: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* 7b6a06: mov edx, dword ptr [esi + 0x370] */
  edx = R32((uint32_t)(esi + 0x370u));
/* 7b6a0c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b6a0d: lea edx, [esp + 0x2c] */
  edx = (uint32_t)(esp + 0x2cu);
/* 7b6a11: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 7b6a15: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7b6a17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7b6a18: call dword ptr [eax + 0x190] */
  { uint32_t t = R32((uint32_t)(eax + 0x190u)); esp -= 4; W32(esp, 0x7b6a1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b6a1e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6a20: jne 0x7b6b59 */
  if (!zf) goto L_7b6b59;
L_7b6a26: /* 7b6a26: mov eax, dword ptr [esi + 0x370] */
  eax = R32((uint32_t)(esi + 0x370u));
/* 7b6a2c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6a2e: je 0x7b6c0f */
  if (zf) goto L_7b6c0f;
L_7b6a34: /* 7b6a34: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7b6a3a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6a3c: je 0x7b6b68 */
  if (zf) goto L_7b6b68;
L_7b6a42: /* 7b6a42: cmp byte ptr [eax + 0x50], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x50u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7b6a46: jne 0x7b6b68 */
  if (!zf) goto L_7b6b68;
L_7b6a4c: /* 7b6a4c: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 7b6a52: mov ebx, eax */
  ebx = eax;
/* 7b6a54: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 7b6a57: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 7b6a5b: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7b6a5f: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 7b6a65: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 7b6a68: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 7b6a6e: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 7b6a76: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 7b6a78: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 7b6a7c: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 7b6a80: mov eax, dword ptr [ebx + 0x2d4] */
  eax = R32((uint32_t)(ebx + 0x2d4u));
/* 7b6a86: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 7b6a8a: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x7b6a90u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 7b6a90: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 7b6a94: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 7b6a98: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7b6a9a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b6a9c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6a9f: jne 0x7b6b68 */
  if (!zf) goto L_7b6b68;
L_7b6aa5: /* 7b6aa5: fld dword ptr [esi + 0x36c] */
  { double v = F32((uint32_t)(esi + 0x36cu)); FPUSH(v); }
/* 7b6aab: fsub dword ptr [ebx + 0x3bc] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x3bcu)));
/* 7b6ab1: fstp dword ptr [esi + 0x36c] */
  WF32((uint32_t)(esi + 0x36cu), ST0); FPOP();
/* 7b6ab7: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 7b6abb: fld dword ptr [ebx + 0x2d4] */
  { double v = F32((uint32_t)(ebx + 0x2d4u)); FPUSH(v); }
/* 7b6ac1: fadd qword ptr [0xa0d218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0d218u)));
/* 7b6ac7: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 7b6ac9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b6acb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b6ace: jp 0x7b6b68 */
  if (pf) goto L_7b6b68;
L_7b6ad4: /* 7b6ad4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7b6ad6: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 7b6adb: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 7b6adf: call 0x6c6a46 */
  esp -= 4; W32(esp, 0x7b6ae4u); SPILL(); f_6c6a46(); if (g_unwind) return; RELOAD();
/* 7b6ae4: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7b6aea: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7b6af0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7b6af2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7b6af5: mov ebx, esp */
  ebx = esp;
/* 7b6af7: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 7b6aff: mov ebp, dword ptr [esp + 0x28] */
  ebp = R32((uint32_t)(esp + 0x28u));
/* 7b6b03: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 7b6b05: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 7b6b0d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 7b6b11: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 7b6b14: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 7b6b1c: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 7b6b20: push 0x286 */
  { uint32_t v = 0x286u; esp -= 4; W32(esp, v); }
/* 7b6b25: mov dword ptr [ebx + 8], ebp */
  W32((uint32_t)(ebx + 0x8u), ebp);
/* 7b6b28: lea ebx, [eax + 0x170] */
  ebx = (uint32_t)(eax + 0x170u);
/* 7b6b2e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7b6b2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7b6b30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b6b31: lea eax, [esp + 0x5c] */
  eax = (uint32_t)(esp + 0x5cu);
/* 7b6b35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7b6b36: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x7b6b3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7b6b3c: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 7b6b40: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 7b6b46: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7b6b48: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7b6b4b: jp 0x7b6b68 */
  if (pf) goto L_7b6b68;
L_7b6b4d: /* 7b6b4d: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 7b6b51: cmp ecx, dword ptr [esi + 0x370] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x370u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7b6b57: je 0x7b6b68 */
  if (zf) goto L_7b6b68;
L_7b6b59: /* 7b6b59: mov ecx, esi */
  ecx = esi;
/* 7b6b5b: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7b6b61u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7b6b61: mov dword ptr [eax + 0x28], 0 */
  W32((uint32_t)(eax + 0x28u), 0x0u);
L_7b6b68: /* 7b6b68: mov eax, dword ptr [esi + 0x370] */
  eax = R32((uint32_t)(esi + 0x370u));
/* 7b6b6e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6b70: je 0x7b6c0f */
  if (zf) goto L_7b6c0f;
L_7b6b76: /* 7b6b76: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7b6b7c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6b7e: je 0x7b6c0f */
  if (zf) goto L_7b6c0f;
L_7b6b84: /* 7b6b84: mov ecx, esi */
  ecx = esi;
/* 7b6b86: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7b6b8cu); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7b6b8c: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 7b6b8f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6b91: je 0x7b6b9a */
  if (zf) goto L_7b6b9a;
L_7b6b93: /* 7b6b93: mov ecx, esi */
  ecx = esi;
/* 7b6b95: call 0x6c817f */
  esp -= 4; W32(esp, 0x7b6b9au); SPILL(); f_6c817f(); if (g_unwind) return; RELOAD();
L_7b6b9a: /* 7b6b9a: mov ecx, dword ptr [esi + 0x370] */
  ecx = R32((uint32_t)(esi + 0x370u));
/* 7b6ba0: lea edx, [ecx + 0x170] */
  edx = (uint32_t)(ecx + 0x170u);
/* 7b6ba6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7b6ba8: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 7b6baa: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 7b6bad: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 7b6bb0: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 7b6bb3: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7b6bb8: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 7b6bbb: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7b6bc1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7b6bc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6bc3: je 0x7b6c33 */
  if (zf) goto L_7b6c33;
L_7b6bc5: /* 7b6bc5: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 7b6bcb: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 7b6bcf: mov dword ptr [eax + 0x39c], ecx */
  W32((uint32_t)(eax + 0x39cu), ecx);
/* 7b6bd5: mov edx, dword ptr [esi + 0x33c] */
  edx = R32((uint32_t)(esi + 0x33cu));
/* 7b6bdb: mov eax, dword ptr [edx + 0x390] */
  eax = R32((uint32_t)(edx + 0x390u));
/* 7b6be1: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6be4: jne 0x7b6c33 */
  if (!zf) goto L_7b6c33;
L_7b6be6: /* 7b6be6: mov eax, dword ptr [esi + 0x370] */
  eax = R32((uint32_t)(esi + 0x370u));
/* 7b6bec: mov ecx, dword ptr [eax + 0x16c] */
  ecx = R32((uint32_t)(eax + 0x16cu));
/* 7b6bf2: test byte ptr [ecx + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7b6bf9: je 0x7b6c33 */
  if (zf) goto L_7b6c33;
L_7b6bfb: /* 7b6bfb: mov dword ptr [esi + 0x36c], 0xbf800000 */
  W32((uint32_t)(esi + 0x36cu), 0xbf800000u);
/* 7b6c05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b6c06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b6c07: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b6c08: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b6c09: add esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b6c0c: ret 8 */
  esp += 12; SPILL(); return;
L_7b6c0f: /* 7b6c0f: mov ecx, esi */
  ecx = esi;
/* 7b6c11: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7b6c17u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7b6c17: mov dword ptr [eax + 0x28], 0 */
  W32((uint32_t)(eax + 0x28u), 0x0u);
/* 7b6c1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b6c1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b6c20: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b6c21: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b6c22: add esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b6c25: ret 8 */
  esp += 12; SPILL(); return;
L_7b6c28: /* 7b6c28: mov ecx, esi */
  ecx = esi;
/* 7b6c2a: call dword ptr [0xcfa7d4] */
  esp -= 4; W32(esp, 0x7b6c30u); SPILL(); f_4e3f5d(); if (g_unwind) return; /* Core!?GetStateFrame@UObject@@QAEPAUFStateFrame@@XZ */ RELOAD();
/* 7b6c30: mov dword ptr [eax + 0x28], edi */
  W32((uint32_t)(eax + 0x28u), edi);
L_7b6c33: /* 7b6c33: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7b6c34: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7b6c35: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7b6c36: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7b6c37: add esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7b6c3a: ret 8 */
  esp += 12; SPILL(); return;
}
