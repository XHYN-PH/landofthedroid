#include "recomp.h"
#include "rec_mod.h"

void f_886bda(void) {
  LOAD_REGS();
L_886bda: /* 886bda: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 886bdd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 886be2: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 886be5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886be6: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 886be9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x886beeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_886bee(); return;
}

void f_886bee(void) {
  LOAD_REGS();
L_886bee: /* 886bee: push 0xa19774 */
  { uint32_t v = 0xa19774u; esp -= 4; W32(esp, v); }
/* 886bf3: push 0xae6fe0 */
  { uint32_t v = 0xae6fe0u; esp -= 4; W32(esp, v); }
/* 886bf8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x886bfeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 886bfe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 886c01: xor ebx, ebx */
  ebx = 0;
/* 886c03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 886c04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 886c05: call 0x99caf8 */
  esp -= 4; W32(esp, 0x886c0au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_886c0a: guest_badaddr(0x886c0a); return;
}

void f_886ca0(void) {
  LOAD_REGS();
L_886ca0: /* 886ca0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 886ca1: mov ebp, esp */
  ebp = esp;
/* 886ca3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 886ca5: push 0x9d52db */
  { uint32_t v = 0x9d52dbu; esp -= 4; W32(esp, v); }
/* 886caa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 886cb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886cb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 886cb8: sub esp, 0xdc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xdcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 886cbe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 886cbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886cc0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 886cc3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 886cc6: xor ebx, ebx */
  ebx = 0;
/* 886cc8: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 886ccb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 886cce: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886ccf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 886cd0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 886cd3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 886cd6: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 886cd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886cda: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886cdf: mov edi, ecx */
  edi = ecx;
/* 886ce1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886ce4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886ce5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 886ce8: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x886cebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886ceb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 886cee: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886cf1: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 886cf4: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 886cf7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886cf8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 886cfb: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 886cfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886cff: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886d04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886d05: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x886d08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886d08: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 886d0b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886d0e: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 886d11: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 886d14: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886d15: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 886d18: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 886d1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886d1c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886d21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886d22: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x886d25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886d25: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 886d28: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886d2b: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 886d2e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 886d31: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886d32: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 886d35: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 886d38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886d39: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886d3e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886d3f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x886d42u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886d42: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 886d45: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886d48: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 886d4b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 886d4e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886d4f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 886d52: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 886d55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886d56: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886d5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886d5c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x886d5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886d5f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 886d62: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886d65: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 886d68: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 886d6b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886d6c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 886d6f: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 886d72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886d73: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886d78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886d79: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x886d7cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886d7c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 886d7f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886d82: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 886d85: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 886d88: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886d89: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 886d8c: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 886d8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886d90: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886d95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886d96: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x886d99u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886d99: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 886d9c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886d9f: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 886da2: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 886da5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886da6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 886da9: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 886dac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886dad: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886db2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886db3: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x886db6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886db6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 886db9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886dbc: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 886dbf: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 886dc2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886dc3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 886dc6: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 886dc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886dca: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886dcf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886dd0: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x886dd3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886dd3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 886dd6: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 886dd9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886ddc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886ddd: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 886de0: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 886de3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886de4: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 886de9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886dea: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x886dedu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886ded: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 886df0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 886df1: mov eax, edx */
  eax = edx;
/* 886df3: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 886df6: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 886df9: jne 0x886e10 */
  if (!zf) goto L_886e10;
L_886dfb: /* 886dfb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886dfe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 886dff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 886e00: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 886e03: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 886e09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886e0a: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x886e10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_886e10: /* 886e10: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 886e13: mov ecx, dword ptr [eax + 0x148] */
  ecx = R32((uint32_t)(eax + 0x148u));
/* 886e19: mov edx, dword ptr [edi + 0x50] */
  edx = R32((uint32_t)(edi + 0x50u));
/* 886e1c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 886e1d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 886e1e: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 886e24: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x886e29u); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 886e29: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 886e2c: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 886e2f: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 886e32: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 886e35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 886e36: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 886e39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 886e3a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 886e3d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 886e3e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 886e41: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 886e45: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 886e49: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 886e4c: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 886e4f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 886e52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 886e53: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 886e56: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 886e59: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 886e5c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 886e5d: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 886e60: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 886e63: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 886e67: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 886e6a: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 886e6d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 886e70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 886e71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 886e72: mov ecx, eax */
  ecx = eax;
/* 886e74: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x886e79u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 886e79: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 886e7f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 886e83: call 0x6caac4 */
  esp -= 4; W32(esp, 0x886e88u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 886e88: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 886e8b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 886e8c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 886e8d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 886e94: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 886e95: mov esp, ebp */
  esp = ebp;
/* 886e97: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 886e98: ret 8 */
  esp += 12; SPILL(); return;
}

void f_886e9b(void) {
  LOAD_REGS();
L_886e9b: /* 886e9b: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 886e9e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 886ea3: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 886ea6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 886ea7: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 886eaa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x886eafu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_886eaf(); return;
}

void f_886eaf(void) {
  LOAD_REGS();
L_886eaf: /* 886eaf: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 886eb5: push 0xa197c0 */
  { uint32_t v = 0xa197c0u; esp -= 4; W32(esp, v); }
/* 886eba: push 0xae6fe8 */
  { uint32_t v = 0xae6fe8u; esp -= 4; W32(esp, v); }
/* 886ebf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x886ec1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886ec1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 886ec4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 886ec7: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 886eca: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 886ecd: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 886ed3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 886ed6: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 886ed8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 886ed9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 886edb: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x886eddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886edd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 886ee0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886ee1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 886ee3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x886ee5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886ee5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886ee6: push 0xae6ff0 */
  { uint32_t v = 0xae6ff0u; esp -= 4; W32(esp, v); }
/* 886eeb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x886eedu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 886eed: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 886ef0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 886ef2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 886ef4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x886ef9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_886ef9: guest_badaddr(0x886ef9); return;
}

void f_886fa0(void) {
  LOAD_REGS();
L_886fa0: /* 886fa0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 886fa4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886fa5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 886fa6: mov esi, ecx */
  esi = ecx;
/* 886fa8: call 0x6c794b */
  esp -= 4; W32(esp, 0x886fadu); SPILL(); f_6c794b(); if (g_unwind) return; RELOAD();
/* 886fad: mov dword ptr [esi], 0xa1965c */
  W32((uint32_t)(esi), 0xa1965cu);
/* 886fb3: mov eax, esi */
  eax = esi;
/* 886fb5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 886fb6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_886fd0(void) {
  LOAD_REGS();
L_886fd0: /* 886fd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 886fd1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 886fd2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 886fd6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 886fd7: mov esi, ecx */
  esi = ecx;
/* 886fd9: call 0x6c7ea0 */
  esp -= 4; W32(esp, 0x886fdeu); SPILL(); f_6c7ea0(); if (g_unwind) return; RELOAD();
/* 886fde: lea eax, [edi + 0x1d4] */
  eax = (uint32_t)(edi + 0x1d4u);
/* 886fe4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 886fe6: lea ecx, [esi + 0x1d4] */
  ecx = (uint32_t)(esi + 0x1d4u);
/* 886fec: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 886fee: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 886ff1: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 886ff4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 886ff7: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 886ffa: mov ecx, dword ptr [edi + 0x1e0] */
  ecx = R32((uint32_t)(edi + 0x1e0u));
/* 887000: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 887001: mov dword ptr [esi + 0x1e0], ecx */
  W32((uint32_t)(esi + 0x1e0u), ecx);
/* 887007: mov eax, esi */
  eax = esi;
/* 887009: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88700a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_887020(void) {
  LOAD_REGS();
L_887020: /* 887020: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 887021: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 887025: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 887028: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 887029: mov esi, ecx */
  esi = ecx;
/* 88702b: je 0x887060 */
  if (zf) goto L_887060;
L_88702d: /* 88702d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 887030: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 887031: push 0x6cc216 */
  { uint32_t v = 0x6cc216u; esp -= 4; W32(esp, v); }
/* 887036: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 887039: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88703a: push 0x1e4 */
  { uint32_t v = 0x1e4u; esp -= 4; W32(esp, v); }
/* 88703f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 887040: call 0x99ca3d */
  esp -= 4; W32(esp, 0x887045u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 887045: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 887048: je 0x887058 */
  if (zf) goto L_887058;
L_88704a: /* 88704a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 887050: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 887052: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 887054: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 887055: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x887058u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_887058: /* 887058: mov eax, edi */
  eax = edi;
/* 88705a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88705b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88705c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88705d: ret 4 */
  esp += 8; SPILL(); return;
L_887060: /* 887060: mov ecx, esi */
  ecx = esi;
/* 887062: call 0x6cc216 */
  esp -= 4; W32(esp, 0x887067u); SPILL(); f_6cc216(); if (g_unwind) return; RELOAD();
/* 887067: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88706a: je 0x887079 */
  if (zf) goto L_887079;
L_88706c: /* 88706c: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 887071: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 887073: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 887075: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 887076: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x887079u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_887079: /* 887079: mov eax, esi */
  eax = esi;
/* 88707b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88707c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88707d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8870a0(void) {
  LOAD_REGS();
L_8870a0: /* 8870a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8870a1: mov ebp, esp */
  ebp = esp;
/* 8870a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8870a5: push 0x9d52fb */
  { uint32_t v = 0x9d52fbu; esp -= 4; W32(esp, v); }
/* 8870aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8870b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8870b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8870b8: sub esp, 0xbc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xbcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8870be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8870bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8870c0: mov esi, ecx */
  esi = ecx;
/* 8870c2: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* 8870c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8870c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8870c8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8870cb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8870d2: jne 0x8870f9 */
  if (!zf) goto L_8870f9;
L_8870d4: /* 8870d4: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8870d9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8870db: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8870dd: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 8870e2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8870e4: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8870e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8870e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8870e8: je 0x8870f4 */
  if (zf) goto L_8870f4;
L_8870ea: /* 8870ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8870eb: mov ecx, eax */
  ecx = eax;
/* 8870ed: call 0x6c7707 */
  esp -= 4; W32(esp, 0x8870f2u); SPILL(); f_6c7707(); if (g_unwind) return; RELOAD();
/* 8870f2: jmp 0x8870f6 */
  goto L_8870f6;
L_8870f4: /* 8870f4: xor eax, eax */
  eax = 0;
L_8870f6: /* 8870f6: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
L_8870f9: /* 8870f9: mov edx, dword ptr [esi + 0x50] */
  edx = R32((uint32_t)(esi + 0x50u));
/* 8870fc: mov edi, dword ptr [edx + 0xc] */
  edi = R32((uint32_t)(edx + 0xcu));
/* 8870ff: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 887102: mov ecx, dword ptr [ebx + 0x70] */
  ecx = R32((uint32_t)(ebx + 0x70u));
/* 887105: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 887108: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 88710a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88710b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88710c: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0x887112u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887112: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 887114: jne 0x887119 */
  if (!zf) goto L_887119;
L_887116: /* 887116: inc dword ptr [esi + 0x5c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x5cu), r);
  }
L_887119: /* 887119: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 88711c: cmp eax, dword ptr [esi + 0x60] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x60u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88711f: je 0x8872d2 */
  if (zf) goto L_8872d2;
L_887125: /* 887125: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 887128: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88712a: jle 0x8872d2 */
  if ((zf || sf != of)) goto L_8872d2;
L_887130: /* 887130: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 887133: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 887135: jle 0x8872d2 */
  if ((zf || sf != of)) goto L_8872d2;
L_88713b: /* 88713b: mov dword ptr [esi + 0x54], ebx */
  W32((uint32_t)(esi + 0x54u), ebx);
/* 88713e: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 887141: mov ecx, dword ptr [ebx + 0x148] */
  ecx = R32((uint32_t)(ebx + 0x148u));
/* 887147: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 887149: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x88714bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88714b: mov ecx, dword ptr [ebx + 0x148] */
  ecx = R32((uint32_t)(ebx + 0x148u));
/* 887151: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* 887154: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 887156: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887157: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x88715au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88715a: mov ecx, dword ptr [ebx + 0x148] */
  ecx = R32((uint32_t)(ebx + 0x148u));
/* 887160: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 887162: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 887164: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 887166: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 88716b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 88716d: mov byte ptr [ebp + 0x10], 0 */
  W8((uint32_t)(ebp + 0x10u), 0x0u);
/* 887171: mov byte ptr [ebp + 0x11], 0 */
  W8((uint32_t)(ebp + 0x11u), 0x0u);
/* 887175: mov byte ptr [ebp + 0x12], 0 */
  W8((uint32_t)(ebp + 0x12u), 0x0u);
/* 887179: mov byte ptr [ebp + 0x13], 0 */
  W8((uint32_t)(ebp + 0x13u), 0x0u);
/* 88717d: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 887180: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887181: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 887183: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x887186u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887186: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 887189: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88718b: je 0x887198 */
  if (zf) goto L_887198;
L_88718d: /* 88718d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88718e: call 0x6c9aca */
  esp -= 4; W32(esp, 0x887193u); SPILL(); f_6c9aca(); if (g_unwind) return; RELOAD();
/* 887193: jmp 0x8872c0 */
  goto L_8872c0;
L_887198: /* 887198: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 88719b: mov edx, dword ptr [ecx + 0x148] */
  edx = R32((uint32_t)(ecx + 0x148u));
/* 8871a1: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* 8871a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8871a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8871a6: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 8871ac: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x8871b1u); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 8871b1: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 8871b4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8871b6: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8871ba: mov byte ptr [ebp + 0x10], 0xff */
  W8((uint32_t)(ebp + 0x10u), 0xffu);
/* 8871be: mov byte ptr [ebp + 0x11], 0xff */
  W8((uint32_t)(ebp + 0x11u), 0xffu);
/* 8871c2: mov byte ptr [ebp + 0x12], 0xff */
  W8((uint32_t)(ebp + 0x12u), 0xffu);
/* 8871c6: mov byte ptr [ebp + 0x13], 0x80 */
  W8((uint32_t)(ebp + 0x13u), 0x80u);
/* 8871ca: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x8871cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8871cd: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 8871d0: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8871d3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8871d5: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x8871d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8871d8: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8871db: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8871de: mov edx, dword ptr [esi + 0x2c] */
  edx = R32((uint32_t)(esi + 0x2cu));
/* 8871e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8871e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8871e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8871e5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8871e8: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8871ec: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8871ef: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8871f2: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 8871f8: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8871fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8871fd: fild dword ptr [esi + 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x44u)); FPUSH(v); }
/* 887200: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 887202: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 887205: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 887209: fild dword ptr [esi + 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x40u)); FPUSH(v); }
/* 88720c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 88720f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 887211: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 887213: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x887218u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 887218: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88721a: push 0xae6e7c */
  { uint32_t v = 0xae6e7cu; esp -= 4; W32(esp, v); }
/* 88721f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 887221: push 0xb814c0 */
  { uint32_t v = 0xb814c0u; esp -= 4; W32(esp, v); }
/* 887226: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x88722cu); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 88722c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88722f: mov edi, eax */
  edi = eax;
/* 887231: mov byte ptr [ebp + 0x10], 0 */
  W8((uint32_t)(ebp + 0x10u), 0x0u);
/* 887235: mov byte ptr [ebp + 0x11], 0 */
  W8((uint32_t)(ebp + 0x11u), 0x0u);
/* 887239: mov byte ptr [ebp + 0x12], 0 */
  W8((uint32_t)(ebp + 0x12u), 0x0u);
/* 88723d: mov byte ptr [ebp + 0x13], 0 */
  W8((uint32_t)(ebp + 0x13u), 0x0u);
/* 887241: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 887244: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887245: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 887246: push 0xae6e94 */
  { uint32_t v = 0xae6e94u; esp -= 4; W32(esp, v); }
/* 88724b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88724d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88724f: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 887255: call 0x6c42c8 */
  esp -= 4; W32(esp, 0x88725au); SPILL(); f_6c42c8(); if (g_unwind) return; RELOAD();
/* 88725a: fild dword ptr [esi + 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x44u)); FPUSH(v); }
/* 88725d: mov byte ptr [ebp + 0x10], 0 */
  W8((uint32_t)(ebp + 0x10u), 0x0u);
/* 887261: mov byte ptr [ebp + 0x11], 0 */
  W8((uint32_t)(ebp + 0x11u), 0x0u);
/* 887265: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 88726b: mov byte ptr [ebp + 0x12], 0 */
  W8((uint32_t)(ebp + 0x12u), 0x0u);
/* 88726f: mov byte ptr [ebp + 0x13], 0xff */
  W8((uint32_t)(ebp + 0x13u), 0xffu);
/* 887273: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 887276: fsub dword ptr [0xa0b294] */
  ST0 = ST0 - (F32((uint32_t)(0xa0b294u)));
/* 88727c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88727d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88727e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 887281: push 0xae6eb4 */
  { uint32_t v = 0xae6eb4u; esp -= 4; W32(esp, v); }
/* 887286: call 0x99c958 */
  esp -= 4; W32(esp, 0x88728bu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 88728b: fild dword ptr [esi + 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x40u)); FPUSH(v); }
/* 88728e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88728f: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 887295: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 887298: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 88729e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8872a0: call 0x99c958 */
  esp -= 4; W32(esp, 0x8872a5u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8872a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8872a6: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 8872ac: call 0x6c42c8 */
  esp -= 4; W32(esp, 0x8872b1u); SPILL(); f_6c42c8(); if (g_unwind) return; RELOAD();
/* 8872b1: lea ecx, [ebp - 0xc8] */
  ecx = (uint32_t)(ebp + 0xffffff38u);
/* 8872b7: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8872bb: call 0x6caac4 */
  esp -= 4; W32(esp, 0x8872c0u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
L_8872c0: /* 8872c0: mov ecx, dword ptr [ebx + 0x148] */
  ecx = R32((uint32_t)(ebx + 0x148u));
/* 8872c6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8872c8: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8872cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8872cb: mov dword ptr [esi + 0x54], 0 */
  W32((uint32_t)(esi + 0x54u), 0x0u);
L_8872d2: /* 8872d2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8872d5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8872d6: mov eax, esi */
  eax = esi;
/* 8872d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8872d9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8872e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8872e1: mov esp, ebp */
  esp = ebp;
/* 8872e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8872e4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8872e7(void) {
  LOAD_REGS();
L_8872e7: /* 8872e7: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8872ea: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8872ef: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8872f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8872f3: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8872f6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8872fbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8872fb(); return;
}

void f_8872fb(void) {
  LOAD_REGS();
L_8872fb: /* 8872fb: push 0xa1980c */
  { uint32_t v = 0xa1980cu; esp -= 4; W32(esp, v); }
/* 887300: push 0xae6ed4 */
  { uint32_t v = 0xae6ed4u; esp -= 4; W32(esp, v); }
/* 887305: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x88730bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 88730b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88730e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 887310: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 887312: call 0x99caf8 */
  esp -= 4; W32(esp, 0x887317u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_887317: guest_badaddr(0x887317); return;
}

void f_8873c0(void) {
  LOAD_REGS();
L_8873c0: /* 8873c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8873c1: mov ebp, esp */
  ebp = esp;
/* 8873c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8873c5: push 0x9d5334 */
  { uint32_t v = 0x9d5334u; esp -= 4; W32(esp, v); }
/* 8873ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8873d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8873d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8873d8: sub esp, 0x2d8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2d8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8873de: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8873e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8873e2: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8873e5: xor ebx, ebx */
  ebx = 0;
/* 8873e7: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8873ea: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 8873ed: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8873f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8873f1: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 8873f4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8873f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8873f6: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 8873f9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8873fc: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8873ff: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 887402: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887403: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 887408: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 887409: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 88740c: call dword ptr [eax + esi*4] */
  { uint32_t t = R32((uint32_t)(eax + esi*4)); esp -= 4; W32(esp, 0x88740fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88740f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 887412: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 887415: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 887418: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 88741b: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 88741e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 88741f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 887422: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 887425: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 887428: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 887429: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 88742f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887430: call dword ptr [edx + esi*4] */
  { uint32_t t = R32((uint32_t)(edx + esi*4)); esp -= 4; W32(esp, 0x887433u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887433: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 887436: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 887439: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 88743c: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 88743f: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 887442: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 887443: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 887446: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 887449: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 88744c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88744d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 887452: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 887453: call dword ptr [eax + esi*4] */
  { uint32_t t = R32((uint32_t)(eax + esi*4)); esp -= 4; W32(esp, 0x887456u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887456: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 887459: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 88745c: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 88745f: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 887462: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 887465: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 887466: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 887469: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 88746c: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 88746f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 887470: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 887476: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887477: call dword ptr [edx + esi*4] */
  { uint32_t t = R32((uint32_t)(edx + esi*4)); esp -= 4; W32(esp, 0x88747au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88747a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 88747d: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 887480: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 887483: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 887486: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 887489: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 88748a: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 88748d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 887490: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 887493: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887494: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 887499: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88749a: call dword ptr [eax + esi*4] */
  { uint32_t t = R32((uint32_t)(eax + esi*4)); esp -= 4; W32(esp, 0x88749du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88749d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8874a0: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 8874a3: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 8874a6: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8874a9: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8874aa: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 8874ad: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8874b0: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 8874b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8874b4: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 8874ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8874bb: call dword ptr [edx + esi*4] */
  { uint32_t t = R32((uint32_t)(edx + esi*4)); esp -= 4; W32(esp, 0x8874beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8874be: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8874c1: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x8874c7u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 8874c7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8874ca: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 8874cd: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 8874d0: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8874d3: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8874d4: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 8874d7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8874da: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 8874dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8874de: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 8874e3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8874e4: call dword ptr [eax + esi*4] */
  { uint32_t t = R32((uint32_t)(eax + esi*4)); esp -= 4; W32(esp, 0x8874e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8874e7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8874ea: mov dword ptr [ebp - 0x24], 0x5a */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x5au);
/* 8874f1: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 8874f4: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 8874f7: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8874fa: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8874fb: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 8874fe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 887501: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 887504: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 887505: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 88750b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88750c: call dword ptr [edx + esi*4] */
  { uint32_t t = R32((uint32_t)(edx + esi*4)); esp -= 4; W32(esp, 0x88750fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88750f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 887512: mov edi, 1 */
  edi = 0x1u;
/* 887517: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 88751a: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 88751d: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 887520: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 887523: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 887524: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 887527: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 88752a: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 88752d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88752e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 887533: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 887534: call dword ptr [eax + esi*4] */
  { uint32_t t = R32((uint32_t)(eax + esi*4)); esp -= 4; W32(esp, 0x887537u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887537: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 88753a: inc dword ptr [eax + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0xcu), r);
  }
/* 88753d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 887540: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 887543: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 887546: jne 0x88755f */
  if (!zf) goto L_88755f;
L_887548: /* 887548: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 88754b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 88754c: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 88754f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 887552: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 887557: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 887558: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 887559: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x88755fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_88755f: /* 88755f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 887561: lea ecx, [eax - 0xc] */
  ecx = (uint32_t)(eax + 0xfffffff4u);
/* 887564: mov eax, dword ptr [0xcfa7d8] */
  eax = R32((uint32_t)(0xcfa7d8u));
/* 887569: add dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 88756b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88756e: mov eax, dword ptr [edx + 0x54] */
  eax = R32((uint32_t)(edx + 0x54u));
/* 887571: mov ecx, dword ptr [eax + 0x148] */
  ecx = R32((uint32_t)(eax + 0x148u));
/* 887577: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 887579: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x88757bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88757b: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 88757e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 887581: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 887584: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 887587: mov edx, dword ptr [eax + 0x348] */
  edx = R32((uint32_t)(eax + 0x348u));
/* 88758d: fstp dword ptr [eax + 0x348] */
  WF32((uint32_t)(eax + 0x348u), ST0); FPOP();
/* 887593: cmp dword ptr [0xce0a3c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xce0a3cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 887599: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 88759c: jne 0x887653 */
  if (!zf) goto L_887653;
L_8875a2: /* 8875a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8875a3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8875a6: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8875acu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8875ac: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 8875b1: mov ecx, 0xb86b60 */
  ecx = 0xb86b60u;
/* 8875b6: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8875bcu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8875bc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8875be: jne 0x8875d8 */
  if (!zf) goto L_8875d8;
L_8875c0: /* 8875c0: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8875c5: push 0xae7040 */
  { uint32_t v = 0xae7040u; esp -= 4; W32(esp, v); }
/* 8875ca: push 0xae7084 */
  { uint32_t v = 0xae7084u; esp -= 4; W32(esp, v); }
/* 8875cf: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8875d5u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8875d5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8875d8: /* 8875d8: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8875deu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8875de: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8875e4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8875e6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8875e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8875ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8875eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8875ec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8875ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8875ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8875ef: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 8875f4: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8875fau); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8875fa: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 887600: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 887603: push 0xce0a3c */
  { uint32_t v = 0xce0a3cu; esp -= 4; W32(esp, v); }
/* 887608: mov dword ptr [0xce0a3c], eax */
  W32((uint32_t)(0xce0a3cu), eax);
/* 88760d: call 0x6c1203 */
  esp -= 4; W32(esp, 0x887612u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 887612: test byte ptr [0xce0a38], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xce0a38u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 887619: jne 0x887643 */
  if (!zf) goto L_887643;
L_88761b: /* 88761b: or dword ptr [0xce0a38], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xce0a38u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xce0a38u), r);
  }
/* 887621: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 887624: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 887627: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 88762a: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 88762e: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 887631: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 887632: mov ecx, 0xce0a20 */
  ecx = 0xce0a20u;
/* 887637: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 88763b: call 0x6c7af4 */
  esp -= 4; W32(esp, 0x887640u); SPILL(); f_6c7af4(); if (g_unwind) return; RELOAD();
/* 887640: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_887643: /* 887643: mov ecx, dword ptr [0xce0a3c] */
  ecx = R32((uint32_t)(0xce0a3cu));
/* 887649: push 0xce0a20 */
  { uint32_t v = 0xce0a20u; esp -= 4; W32(esp, v); }
/* 88764e: call 0x6cccfc */
  esp -= 4; W32(esp, 0x887653u); SPILL(); f_6cccfc(); if (g_unwind) return; RELOAD();
L_887653: /* 887653: cmp dword ptr [0xce0a1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xce0a1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 887659: jne 0x8876f8 */
  if (!zf) goto L_8876f8;
L_88765f: /* 88765f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 887660: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 887663: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x887669u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 887669: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 88766e: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 887673: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x887679u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 887679: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88767b: jne 0x887695 */
  if (!zf) goto L_887695;
L_88767d: /* 88767d: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 887682: push 0xae70a8 */
  { uint32_t v = 0xae70a8u; esp -= 4; W32(esp, v); }
/* 887687: push 0xae70ec */
  { uint32_t v = 0xae70ecu; esp -= 4; W32(esp, v); }
/* 88768c: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x887692u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 887692: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_887695: /* 887695: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x88769bu); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 88769b: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8876a1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8876a3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8876a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8876a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8876a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8876a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8876aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8876ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8876ac: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 8876b1: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8876b7u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8876b7: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8876bd: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8876c0: push 0xce0a1c */
  { uint32_t v = 0xce0a1cu; esp -= 4; W32(esp, v); }
/* 8876c5: mov dword ptr [0xce0a1c], eax */
  W32((uint32_t)(0xce0a1cu), eax);
/* 8876ca: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8876cfu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 8876cf: mov edx, dword ptr [0xce0a1c] */
  edx = R32((uint32_t)(0xce0a1cu));
/* 8876d5: mov eax, dword ptr [0xce0a3c] */
  eax = R32((uint32_t)(0xce0a3cu));
/* 8876da: mov dword ptr [edx + 0x38], eax */
  W32((uint32_t)(edx + 0x38u), eax);
/* 8876dd: mov ecx, dword ptr [0xce0a1c] */
  ecx = R32((uint32_t)(0xce0a1cu));
/* 8876e3: mov byte ptr [ecx + 0x3c], 7 */
  W8((uint32_t)(ecx + 0x3cu), 0x7u);
/* 8876e7: mov eax, dword ptr [0xce0a1c] */
  eax = R32((uint32_t)(0xce0a1cu));
/* 8876ec: or dword ptr [eax + 0x40], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 8876ef: mov eax, dword ptr [0xce0a1c] */
  eax = R32((uint32_t)(0xce0a1cu));
/* 8876f4: and dword ptr [eax + 0x40], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
L_8876f8: /* 8876f8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8876fb: mov edx, dword ptr [eax + 0x54] */
  edx = R32((uint32_t)(eax + 0x54u));
/* 8876fe: mov ecx, dword ptr [edx + 0x148] */
  ecx = R32((uint32_t)(edx + 0x148u));
/* 887704: mov edx, dword ptr [eax + 0x50] */
  edx = R32((uint32_t)(eax + 0x50u));
/* 887707: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 887708: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 887709: lea ecx, [ebp - 0x2e4] */
  ecx = (uint32_t)(ebp + 0xfffffd1cu);
/* 88770f: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x887714u); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 887714: mov edx, dword ptr [0xce0a1c] */
  edx = R32((uint32_t)(0xce0a1cu));
/* 88771a: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 88771d: mov byte ptr [ebp - 0x13], bl */
  W8((uint32_t)(ebp + 0xffffffedu), (ebx & 0xffu));
/* 887720: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 887723: mov byte ptr [ebp - 0x11], 0xff */
  W8((uint32_t)(ebp + 0xffffffefu), 0xffu);
/* 887727: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 88772a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88772b: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 88772e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88772f: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 887732: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 887737: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 887738: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 88773a: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 88773d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88773e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88773f: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 887742: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 887745: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 887748: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 887749: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88774c: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 887750: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 887752: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 887755: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 887758: mov ecx, eax */
  ecx = eax;
/* 88775a: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 88775e: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 887762: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 887765: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 887769: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 88776c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 88776f: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x887774u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 887774: lea ecx, [ebp - 0x2e4] */
  ecx = (uint32_t)(ebp + 0xfffffd1cu);
/* 88777a: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 88777d: call 0x6caac4 */
  esp -= 4; W32(esp, 0x887782u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 887782: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 887785: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 887788: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 88778b: mov ecx, dword ptr [ecx + 0x148] */
  ecx = R32((uint32_t)(ecx + 0x148u));
/* 887791: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 887793: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887794: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 887797: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887798: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 88779b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88779c: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 88779f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8877a0: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8877a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8877a3: fild dword ptr [ebp - 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8877a6: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8877a9: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8877ac: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8877af: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8877b3: mov ecx, esp */
  ecx = esp;
/* 8877b5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8877b7: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8877ba: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8877bd: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8877c0: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8877c3: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8877c6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8877c9: mov eax, esp */
  eax = esp;
/* 8877cb: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8877cd: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8877d0: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8877d3: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8877d6: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8877d9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8877dc: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 8877df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8877e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8877e1: mov edx, dword ptr [eax + 0x54] */
  edx = R32((uint32_t)(eax + 0x54u));
/* 8877e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8877e5: lea ecx, [ebp - 0x23c] */
  ecx = (uint32_t)(ebp + 0xfffffdc4u);
/* 8877eb: call 0x6c442b */
  esp -= 4; W32(esp, 0x8877f0u); SPILL(); f_6c442b(); if (g_unwind) return; RELOAD();
/* 8877f0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8877f3: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 8877f6: mov edx, dword ptr [ecx + 0x148] */
  edx = R32((uint32_t)(ecx + 0x148u));
/* 8877fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8877fd: lea ecx, [ebp - 0x23c] */
  ecx = (uint32_t)(ebp + 0xfffffdc4u);
/* 887803: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 887807: call 0x6c623a */
  esp -= 4; W32(esp, 0x88780cu); SPILL(); f_6c623a(); if (g_unwind) return; RELOAD();
/* 88780c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88780f: mov ecx, dword ptr [eax + 0x54] */
  ecx = R32((uint32_t)(eax + 0x54u));
/* 887812: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 887815: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 887818: mov dword ptr [edx + 0x348], eax */
  W32((uint32_t)(edx + 0x348u), eax);
/* 88781e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 887821: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 887824: mov ecx, dword ptr [edx + 0x148] */
  ecx = R32((uint32_t)(edx + 0x148u));
/* 88782a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 88782c: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x88782fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88782f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 887831: mov ecx, dword ptr [0xcfa7d8] */
  ecx = R32((uint32_t)(0xcfa7d8u));
/* 887837: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 887839: lea ecx, [ebp - 0x23c] */
  ecx = (uint32_t)(ebp + 0xfffffdc4u);
/* 88783f: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 887842: call 0x6c82c9 */
  esp -= 4; W32(esp, 0x887847u); SPILL(); f_6c82c9(); if (g_unwind) return; RELOAD();
/* 887847: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88784a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88784b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88784c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 887853: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 887854: mov esp, ebp */
  esp = ebp;
/* 887856: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 887857: ret 8 */
  esp += 12; SPILL(); return;
}

void f_88785a(void) {
  LOAD_REGS();
L_88785a: /* 88785a: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 88785d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 887862: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 887865: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 887866: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 887869: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88786eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_88786e(); return;
}

void f_88786e(void) {
  LOAD_REGS();
L_88786e: /* 88786e: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 887874: push 0xa19840 */
  { uint32_t v = 0xa19840u; esp -= 4; W32(esp, v); }
/* 887879: push 0xae7014 */
  { uint32_t v = 0xae7014u; esp -= 4; W32(esp, v); }
/* 88787e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x887880u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887880: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 887883: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 887886: mov ebx, dword ptr [ecx + 0x48] */
  ebx = R32((uint32_t)(ecx + 0x48u));
/* 887889: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 88788c: mov edi, dword ptr [0xcfa3a8] */
  edi = R32((uint32_t)(0xcfa3a8u));
/* 887892: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 887895: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 887897: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887898: xor ebx, ebx */
  ebx = 0;
/* 88789a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88789b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x88789du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88789d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8878a0: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8878a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8878a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8878a5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8878a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8878a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8878a8: push 0xae701c */
  { uint32_t v = 0xae701cu; esp -= 4; W32(esp, v); }
/* 8878ad: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8878afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8878af: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8878b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8878b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8878b4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8878b9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8878b9: guest_badaddr(0x8878b9); return;
}

void f_887a00(void) {
  LOAD_REGS();
L_887a00: /* 887a00: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 887a03: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 887a09: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 887a0b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 887a0e: ret  */
  esp += 4; SPILL(); return;
}

void f_887a20(void) {
  LOAD_REGS();
L_887a20: /* 887a20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 887a21: mov esi, ecx */
  esi = ecx;
/* 887a23: call dword ptr [0xcfab8c] */
  esp -= 4; W32(esp, 0x887a29u); SPILL(); f_4e213a(); if (g_unwind) return; /* Core!?StaticClass@UStruct@@SAPAVUClass@@XZ */ RELOAD();
/* 887a29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 887a2b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 887a2d: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 887a34: jne 0x887a4e */
  if (!zf) goto L_887a4e;
L_887a36: /* 887a36: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* 887a3b: push 0xac3d40 */
  { uint32_t v = 0xac3d40u; esp -= 4; W32(esp, v); }
/* 887a40: push 0xac3d38 */
  { uint32_t v = 0xac3d38u; esp -= 4; W32(esp, v); }
/* 887a45: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x887a4bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 887a4b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_887a4e: /* 887a4e: mov ecx, esi */
  ecx = esi;
/* 887a50: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x887a55u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 887a55: mov eax, esi */
  eax = esi;
/* 887a57: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 887a58: ret  */
  esp += 4; SPILL(); return;
}

void f_887a70(void) {
  LOAD_REGS();
L_887a70: /* 887a70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 887a71: mov ebp, esp */
  ebp = esp;
/* 887a73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 887a75: push 0x9d53c4 */
  { uint32_t v = 0x9d53c4u; esp -= 4; W32(esp, v); }
/* 887a7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 887a80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887a81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 887a88: sub esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 887a8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 887a8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 887a90: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 887a93: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 887a96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 887a97: xor edi, edi */
  edi = 0;
/* 887a99: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 887a9c: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 887a9f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 887aa0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 887aa3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 887aa6: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 887aa9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887aaa: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 887aaf: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 887ab2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 887ab5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 887ab6: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 887ab9: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x887abcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887abc: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 887abf: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x887ac5u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 887ac5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 887ac8: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 887acb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 887ace: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 887acf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 887ad2: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 887ad5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887ad6: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 887adb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 887adc: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 887ae0: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x887ae3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887ae3: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 887ae6: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x887aecu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 887aec: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 887aef: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 887af2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 887af5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 887af6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 887af9: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 887afc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887afd: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 887b02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 887b03: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 887b07: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x887b0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887b0a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 887b0d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 887b0e: mov eax, edx */
  eax = edx;
/* 887b10: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 887b13: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 887b16: jne 0x887b2d */
  if (!zf) goto L_887b2d;
L_887b18: /* 887b18: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 887b1b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 887b1c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 887b1d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 887b20: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 887b26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 887b27: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x887b2du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_887b2d: /* 887b2d: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 887b30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887b31: call dword ptr [0xcfa8cc] */
  esp -= 4; W32(esp, 0x887b37u); SPILL(); f_4e247d(); if (g_unwind) return; /* Core!?GetLoaderList@UObject@@SA?AV?$TArray@PAVUObject@@@@XZ */ RELOAD();
/* 887b37: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 887b3a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 887b3d: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 887b40: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 887b44: ja 0x887eae */
  if ((!cf && !zf)) goto L_887eae;
L_887b4a: /* 887b4a: jmp dword ptr [eax*4 + 0x887f48] */
  switch (R32((uint32_t)(eax*4 + 0x887f48u))) {
    case 0x887b51u: goto L_887b51;
    case 0x887be5u: goto L_887be5;
    case 0x887cceu: goto L_887cce;
    case 0x887e42u: goto L_887e42;
    default: guest_badjump(0x887b4a, R32((uint32_t)(eax*4 + 0x887f48u))); return;
  }
L_887b51: /* 887b51: xor ebx, ebx */
  ebx = 0;
L_887b53: /* 887b53: cmp ebx, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 887b56: jge 0x887bba */
  if ((sf == of)) goto L_887bba;
L_887b58: /* 887b58: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 887b5b: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* 887b5e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 887b5f: call 0x6c2135 */
  esp -= 4; W32(esp, 0x887b64u); SPILL(); f_6c2135(); if (g_unwind) return; RELOAD();
/* 887b64: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 887b67: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 887b6a: mov edi, eax */
  edi = eax;
/* 887b6c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x887b72u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 887b72: mov ecx, dword ptr [edi + 0x28] */
  ecx = R32((uint32_t)(edi + 0x28u));
/* 887b75: mov esi, eax */
  esi = eax;
/* 887b77: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x887b7du); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 887b7d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 887b7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887b7f: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x887b85u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 887b85: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 887b88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 887b8a: jne 0x887bb7 */
  if (!zf) goto L_887bb7;
L_887b8c: /* 887b8c: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 887b92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887b93: mov ecx, edi */
  ecx = edi;
/* 887b95: call dword ptr [0xcfa8c8] */
  esp -= 4; W32(esp, 0x887b9bu); SPILL(); f_4e1910(); if (g_unwind) return; /* Core!?QuickMD5@ULinker@@QAE?AVFString@@XZ */ RELOAD();
/* 887b9b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 887b9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887b9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 887ba0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 887ba3: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 887ba7: call 0x6cc716 */
  esp -= 4; W32(esp, 0x887bacu); SPILL(); f_6cc716(); if (g_unwind) return; RELOAD();
/* 887bac: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 887bb2: jmp 0x887ea4 */
  goto L_887ea4;
L_887bb7: /* 887bb7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 887bb8: jmp 0x887b53 */
  goto L_887b53;
L_887bba: /* 887bba: push 0xae71b0 */
  { uint32_t v = 0xae71b0u; esp -= 4; W32(esp, v); }
/* 887bbf: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 887bc2: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x887bc8u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 887bc8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 887bcb: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
/* 887bce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 887bcf: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 887bd4: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 887bd8: call 0x6cc716 */
  esp -= 4; W32(esp, 0x887bddu); SPILL(); f_6cc716(); if (g_unwind) return; RELOAD();
/* 887bdd: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 887be0: jmp 0x887ea4 */
  goto L_887ea4;
L_887be5: /* 887be5: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 887be8: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x887beeu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 887bee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887bef: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 887bf2: push 0xae71d8 */
  { uint32_t v = 0xae71d8u; esp -= 4; W32(esp, v); }
/* 887bf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887bf8: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x887bfeu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 887bfe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 887c01: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 887c04: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 887c08: call 0x6c4764 */
  esp -= 4; W32(esp, 0x887c0du); SPILL(); f_6c4764(); if (g_unwind) return; RELOAD();
/* 887c0d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_887c10: /* 887c10: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 887c15: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 887c18: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 887c1b: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 887c1d: jge 0x887c96 */
  if ((sf == of)) goto L_887c96;
L_887c1f: /* 887c1f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 887c21: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 887c24: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 887c27: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x887c2du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 887c2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 887c2f: mov ecx, esi */
  ecx = esi;
/* 887c31: mov edi, eax */
  edi = eax;
/* 887c33: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x887c39u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 887c39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 887c3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887c3b: call dword ptr [0xcfa340] */
  esp -= 4; W32(esp, 0x887c41u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 887c41: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 887c44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 887c46: jne 0x887c89 */
  if (!zf) goto L_887c89;
L_887c48: /* 887c48: mov edx, dword ptr [0xcfa1ac] */
  edx = R32((uint32_t)(0xcfa1acu));
/* 887c4e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 887c50: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* 887c53: lea edx, [ebp - 0xa4] */
  edx = (uint32_t)(ebp + 0xffffff5cu);
/* 887c59: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 887c5a: call dword ptr [0xcfab90] */
  esp -= 4; W32(esp, 0x887c60u); SPILL(); f_4e3cd8(); if (g_unwind) return; /* Core!?FunctionMD5@UStruct@@QAE?AVFString@@XZ */ RELOAD();
/* 887c60: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 887c63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887c64: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 887c67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887c68: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 887c6c: call 0x6cc716 */
  esp -= 4; W32(esp, 0x887c71u); SPILL(); f_6cc716(); if (g_unwind) return; RELOAD();
/* 887c71: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 887c77: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 887c7b: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x887c81u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 887c81: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 887c84: jmp 0x887ea4 */
  goto L_887ea4;
L_887c89: /* 887c89: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 887c8c: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x887c91u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 887c91: jmp 0x887c10 */
  goto L_887c10;
L_887c96: /* 887c96: push 0xae71f0 */
  { uint32_t v = 0xae71f0u; esp -= 4; W32(esp, v); }
/* 887c9b: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 887c9e: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x887ca4u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 887ca4: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 887ca7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 887ca8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 887cab: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 887cb0: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 887cb4: call 0x6cc716 */
  esp -= 4; W32(esp, 0x887cb9u); SPILL(); f_6cc716(); if (g_unwind) return; RELOAD();
/* 887cb9: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 887cbc: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 887cc0: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x887cc6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 887cc6: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 887cc9: jmp 0x887ea4 */
  goto L_887ea4;
L_887cce: /* 887cce: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 887cd1: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x887cd7u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 887cd7: mov esi, dword ptr [0xcfa3b4] */
  esi = R32((uint32_t)(0xcfa3b4u));
/* 887cdd: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 887cdf: mov edx, dword ptr [0xcfa3b0] */
  edx = R32((uint32_t)(0xcfa3b0u));
/* 887ce5: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 887ce7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 887ce9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 887cea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 887cec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887ced: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x887cf0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887cf0: mov edi, eax */
  edi = eax;
/* 887cf2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 887cf4: jne 0x887d21 */
  if (!zf) goto L_887d21;
L_887cf6: /* 887cf6: push 0xae7218 */
  { uint32_t v = 0xae7218u; esp -= 4; W32(esp, v); }
/* 887cfb: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 887cfe: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x887d04u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 887d04: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 887d07: lea eax, [ebp - 0x64] */
  eax = (uint32_t)(ebp + 0xffffff9cu);
/* 887d0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887d0b: push 0xff */
  { uint32_t v = 0xffu; esp -= 4; W32(esp, v); }
/* 887d10: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 887d14: call 0x6cc716 */
  esp -= 4; W32(esp, 0x887d19u); SPILL(); f_6cc716(); if (g_unwind) return; RELOAD();
/* 887d19: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 887d1c: jmp 0x887ea4 */
  goto L_887ea4;
L_887d21: /* 887d21: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 887d27: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 887d29: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 887d2b: push 0xce1080 */
  { uint32_t v = 0xce1080u; esp -= 4; W32(esp, v); }
/* 887d30: push 0x7fff */
  { uint32_t v = 0x7fffu; esp -= 4; W32(esp, v); }
/* 887d35: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x887d37u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887d37: mov ebx, eax */
  ebx = eax;
/* 887d39: lea eax, [ebp - 0x10c] */
  eax = (uint32_t)(ebp + 0xfffffef4u);
/* 887d3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887d40: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 887d43: call dword ptr [0xcfa658] */
  esp -= 4; W32(esp, 0x887d49u); SPILL(); f_4e2423(); if (g_unwind) return; /* Core!?appMD5Init@@YAXPAUFMD5Context@@@Z */ RELOAD();
/* 887d49: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 887d4c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_887d50: /* 887d50: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 887d52: mov ecx, edi */
  ecx = edi;
/* 887d54: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x887d57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887d57: mov esi, eax */
  esi = eax;
/* 887d59: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 887d5b: mov ecx, edi */
  ecx = edi;
/* 887d5d: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x887d60u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887d60: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 887d62: jge 0x887da0 */
  if ((sf == of)) goto L_887da0;
L_887d64: /* 887d64: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 887d66: mov ecx, edi */
  ecx = edi;
/* 887d68: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x887d6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887d6b: mov esi, eax */
  esi = eax;
/* 887d6d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 887d6f: mov ecx, edi */
  ecx = edi;
/* 887d71: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x887d74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887d74: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 887d76: cmp esi, 0x7fff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 887d7c: jle 0x887d83 */
  if ((zf || sf != of)) goto L_887d83;
L_887d7e: /* 887d7e: mov esi, 0x7fff */
  esi = 0x7fffu;
L_887d83: /* 887d83: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 887d85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 887d86: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 887d87: mov ecx, edi */
  ecx = edi;
/* 887d89: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x887d8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887d8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 887d8d: lea eax, [ebp - 0x10c] */
  eax = (uint32_t)(ebp + 0xfffffef4u);
/* 887d93: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 887d94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887d95: call dword ptr [0xcfa654] */
  esp -= 4; W32(esp, 0x887d9bu); SPILL(); f_4e41d8(); if (g_unwind) return; /* Core!?appMD5Update@@YAXPAUFMD5Context@@PAEH@Z */ RELOAD();
/* 887d9b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 887d9e: jmp 0x887d50 */
  goto L_887d50;
L_887da0: /* 887da0: lea ecx, [ebp - 0x10c] */
  ecx = (uint32_t)(ebp + 0xfffffef4u);
/* 887da6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 887da7: lea edx, [ebp - 0xb4] */
  edx = (uint32_t)(ebp + 0xffffff4cu);
/* 887dad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 887dae: call dword ptr [0xcfa650] */
  esp -= 4; W32(esp, 0x887db4u); SPILL(); f_4e281a(); if (g_unwind) return; /* Core!?appMD5Final@@YAXPAEPAUFMD5Context@@@Z */ RELOAD();
/* 887db4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 887db7: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 887dba: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x887dc0u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 887dc0: mov ebx, dword ptr [0xcfa540] */
  ebx = R32((uint32_t)(0xcfa540u));
/* 887dc6: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 887dca: xor esi, esi */
  esi = 0;
/* 887dcc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_887dd0: /* 887dd0: cmp esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 887dd3: jge 0x887e10 */
  if ((sf == of)) goto L_887e10;
L_887dd5: /* 887dd5: movzx eax, byte ptr [ebp + esi - 0xb4] */
  eax = (uint32_t)(R8((uint32_t)(ebp + esi + 0xffffff4cu)));
/* 887ddd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887dde: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 887de4: push 0xae7240 */
  { uint32_t v = 0xae7240u; esp -= 4; W32(esp, v); }
/* 887de9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 887dea: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x887decu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887dec: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 887def: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887df0: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 887df3: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 887df7: call dword ptr [0xcfa5c0] */
  esp -= 4; W32(esp, 0x887dfdu); SPILL(); f_4e3792(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 887dfd: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 887e03: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 887e07: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x887e0du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 887e0d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 887e0e: jmp 0x887dd0 */
  goto L_887dd0;
L_887e10: /* 887e10: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 887e13: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 887e16: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 887e19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 887e1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887e1b: call 0x6cc716 */
  esp -= 4; W32(esp, 0x887e20u); SPILL(); f_6cc716(); if (g_unwind) return; RELOAD();
/* 887e20: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 887e26: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 887e28: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 887e2b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 887e2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887e2e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x887e31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887e31: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 887e33: je 0x887e3d */
  if (zf) goto L_887e3d;
L_887e35: /* 887e35: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 887e37: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 887e39: mov ecx, edi */
  ecx = edi;
/* 887e3b: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x887e3du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_887e3d: /* 887e3d: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 887e40: jmp 0x887ea4 */
  goto L_887ea4;
L_887e42: /* 887e42: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 887e45: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x887e4bu); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 887e4b: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 887e4f: xor esi, esi */
  esi = 0;
L_887e51: /* 887e51: cmp esi, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 887e54: jge 0x887e91 */
  if ((sf == of)) goto L_887e91;
L_887e56: /* 887e56: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 887e59: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 887e5c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 887e5d: call 0x6c2135 */
  esp -= 4; W32(esp, 0x887e62u); SPILL(); f_6c2135(); if (g_unwind) return; RELOAD();
/* 887e62: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 887e65: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 887e68: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x887e6eu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 887e6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887e6f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 887e72: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x887e78u); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* 887e78: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 887e7b: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 887e7c: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 887e7e: jge 0x887e8e */
  if ((sf == of)) goto L_887e8e;
L_887e80: /* 887e80: push 0xae724c */
  { uint32_t v = 0xae724cu; esp -= 4; W32(esp, v); }
/* 887e85: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 887e88: call dword ptr [0xcfa3c0] */
  esp -= 4; W32(esp, 0x887e8eu); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
L_887e8e: /* 887e8e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 887e8f: jmp 0x887e51 */
  goto L_887e51;
L_887e91: /* 887e91: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 887e94: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 887e97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887e98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 887e99: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 887e9c: call 0x6cc716 */
  esp -= 4; W32(esp, 0x887ea1u); SPILL(); f_6cc716(); if (g_unwind) return; RELOAD();
/* 887ea1: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
L_887ea4: /* 887ea4: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 887ea8: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x887eaeu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_887eae: /* 887eae: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 887eb1: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 887eb5: call 0x6c9dea */
  esp -= 4; W32(esp, 0x887ebau); SPILL(); f_6c9dea(); if (g_unwind) return; RELOAD();
/* 887eba: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 887ebd: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 887ec1: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x887ec7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 887ec7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 887eca: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 887ece: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x887ed4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 887ed4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 887ed7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 887ed8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 887ed9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 887ee0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 887ee1: mov esp, ebp */
  esp = ebp;
/* 887ee3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 887ee4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_887ee7(void) {
  LOAD_REGS();
L_887ee7: /* 887ee7: mov edx, dword ptr [ebp - 0x80] */
  edx = R32((uint32_t)(ebp + 0xffffff80u));
/* 887eea: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 887eef: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 887ef2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887ef3: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 887ef6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x887efbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_887efb(); return;
}

void f_887efb(void) {
  LOAD_REGS();
  goto L_887efb;
L_887ed3: /* 887ed3: add byte ptr [ebx + 0x5e5ff44d], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x5e5ff44du))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(ebx + 0x5e5ff44du), r);
  }
  goto L_887ed9;
L_887ed7: /* 887ed7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 887ed8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_887ed9: /* 887ed9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
  goto L_887ee0;
L_887edb: /* 887edb: or eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_887ee0: /* 887ee0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 887ee1: mov esp, ebp */
  esp = ebp;
/* 887ee3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 887ee4: ret 8 */
  esp += 12; SPILL(); return;
L_887efb: /* 887efb: mov edi, dword ptr [0xcfa1ec] */
  edi = R32((uint32_t)(0xcfa1ecu));
/* 887f01: push 0xa19890 */
  { uint32_t v = 0xa19890u; esp -= 4; W32(esp, v); }
/* 887f06: push 0xae7250 */
  { uint32_t v = 0xae7250u; esp -= 4; W32(esp, v); }
/* 887f0b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x887f0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887f0d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 887f10: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 887f13: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 887f16: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 887f19: mov ebx, dword ptr [0xcfa3a8] */
  ebx = R32((uint32_t)(0xcfa3a8u));
/* 887f1f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 887f22: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 887f24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 887f25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 887f27: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x887f29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887f29: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 887f2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887f2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 887f2f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x887f31u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887f31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 887f32: push 0xae7258 */
  { uint32_t v = 0xae7258u; esp -= 4; W32(esp, v); }
/* 887f37: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x887f39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 887f39: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 887f3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 887f3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 887f40: call 0x99caf8 */
  esp -= 4; W32(esp, 0x887f45u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 887f45: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
/* 887f48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 887f49: jnp 0x887ed3 */
  if (!pf) goto L_887ed3;
L_887f4b: /* 887f4b: add ch, ah */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 887f4d: jnp 0x887ed7 */
  if (!pf) goto L_887ed7;
L_887f4f: /* 887f4f: add dh, cl */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 7) & 1;
  edx = (edx & 0xffff00ffu) | (((uint32_t)(r) & 0xffu) << 8);
  }
/* 887f51: jl 0x887edb */
  if ((sf != of)) goto L_887edb;
L_887f53: /* 887f53: add byte ptr [edx + 0x7e], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x7eu))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(edx + 0x7eu), r);
  }
/* 887f56: mov byte ptr [eax], al */
  W8((uint32_t)(eax), (eax & 0xffu));
/* 887f58: nop  */
/* 887f59: nop  */
/* 887f5a: nop  */
/* 887f5b: nop  */
/* 887f5c: nop  */
/* 887f5d: nop  */
/* 887f5e: nop  */
/* 887f5f: nop  */
L_887f60: guest_badaddr(0x887f60); return;
}

void f_8880a0(void) {
  LOAD_REGS();
L_8880a0: /* 8880a0: mov dword ptr [ecx], 0xa198e8 */
  W32((uint32_t)(ecx), 0xa198e8u);
/* 8880a6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8880a9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8880ab: jmp dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); SPILL(); call_ind(t); return; }
}

void f_8880c0(void) {
  LOAD_REGS();
L_8880c0: /* 8880c0: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8880c3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8880c5: jmp dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); SPILL(); call_ind(t); return; }
}

void f_8880e0(void) {
  LOAD_REGS();
L_8880e0: /* 8880e0: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8880e3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8880e5: jmp dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); SPILL(); call_ind(t); return; }
}

void f_888100(void) {
  LOAD_REGS();
L_888100: /* 888100: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 888103: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 888105: jmp dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); SPILL(); call_ind(t); return; }
}

void f_888120(void) {
  LOAD_REGS();
L_888120: /* 888120: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 888123: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 888125: jmp dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); SPILL(); call_ind(t); return; }
}

void f_888140(void) {
  LOAD_REGS();
L_888140: /* 888140: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 888143: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 888145: jmp dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); SPILL(); call_ind(t); return; }
}

void f_888160(void) {
  LOAD_REGS();
L_888160: /* 888160: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 888163: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 888165: jmp dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); SPILL(); call_ind(t); return; }
}

void f_888180(void) {
  LOAD_REGS();
L_888180: /* 888180: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 888183: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 888185: jmp dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); SPILL(); call_ind(t); return; }
}

void f_8881a0(void) {
  LOAD_REGS();
L_8881a0: /* 8881a0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8881c0(void) {
  LOAD_REGS();
L_8881c0: /* 8881c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8881e0(void) {
  LOAD_REGS();
L_8881e0: /* 8881e0: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_888200(void) {
  LOAD_REGS();
L_888200: /* 888200: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_888220(void) {
  LOAD_REGS();
L_888220: /* 888220: ret 4 */
  esp += 8; SPILL(); return;
}

void f_888240(void) {
  LOAD_REGS();
L_888240: /* 888240: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_888260(void) {
  LOAD_REGS();
L_888260: /* 888260: ret 4 */
  esp += 8; SPILL(); return;
}

void f_888280(void) {
  LOAD_REGS();
L_888280: /* 888280: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 888283: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 888285: jmp dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); SPILL(); call_ind(t); return; }
}

void f_8882a0(void) {
  LOAD_REGS();
L_8882a0: /* 8882a0: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8882a3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8882a5: jmp dword ptr [eax + 0x48] */
  { uint32_t t = R32((uint32_t)(eax + 0x48u)); SPILL(); call_ind(t); return; }
}

void f_8882c0(void) {
  LOAD_REGS();
L_8882c0: /* 8882c0: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8882c3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8882c5: jmp dword ptr [eax + 0x40] */
  { uint32_t t = R32((uint32_t)(eax + 0x40u)); SPILL(); call_ind(t); return; }
}

void f_8882e0(void) {
  LOAD_REGS();
L_8882e0: /* 8882e0: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8882e3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8882e5: jmp dword ptr [eax + 0x44] */
  { uint32_t t = R32((uint32_t)(eax + 0x44u)); SPILL(); call_ind(t); return; }
}

void f_888300(void) {
  LOAD_REGS();
L_888300: /* 888300: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 888303: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 888305: jmp dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); SPILL(); call_ind(t); return; }
}

void f_888320(void) {
  LOAD_REGS();
L_888320: /* 888320: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 888323: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 888325: jmp dword ptr [eax + 0x50] */
  { uint32_t t = R32((uint32_t)(eax + 0x50u)); SPILL(); call_ind(t); return; }
}

void f_888340(void) {
  LOAD_REGS();
L_888340: /* 888340: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 888343: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 888345: jmp dword ptr [eax + 0x54] */
  { uint32_t t = R32((uint32_t)(eax + 0x54u)); SPILL(); call_ind(t); return; }
}

void f_888360(void) {
  LOAD_REGS();
L_888360: /* 888360: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 888363: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 888365: jmp dword ptr [eax + 0x58] */
  { uint32_t t = R32((uint32_t)(eax + 0x58u)); SPILL(); call_ind(t); return; }
}

void f_888380(void) {
  LOAD_REGS();
L_888380: /* 888380: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 888383: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 888385: jmp dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); SPILL(); call_ind(t); return; }
}

void f_8883a0(void) {
  LOAD_REGS();
L_8883a0: /* 8883a0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8883a3: mov eax, dword ptr [eax + 0x14c] */
  eax = R32((uint32_t)(eax + 0x14cu));
/* 8883a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8883ab: jne 0x8883af */
  if (!zf) goto L_8883af;
L_8883ad: /* 8883ad: mov eax, ecx */
  eax = ecx;
L_8883af: /* 8883af: ret  */
  esp += 4; SPILL(); return;
}

void f_8883c0(void) {
  LOAD_REGS();
L_8883c0: /* 8883c0: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 8883c4: fcomp qword ptr [esp + 0xc] */
  fpu_com(ST0, F64((uint32_t)(esp + 0xcu)));
  FPOP();
/* 8883c8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8883ca: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8883cd: jp 0x8883d4 */
  if (pf) goto L_8883d4;
L_8883cf: /* 8883cf: fld qword ptr [esp + 0xc] */
  { double v = F64((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 8883d3: ret  */
  esp += 4; SPILL(); return;
L_8883d4: /* 8883d4: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 8883d8: fcomp qword ptr [esp + 0x14] */
  fpu_com(ST0, F64((uint32_t)(esp + 0x14u)));
  FPOP();
/* 8883dc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8883de: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8883e1: jp 0x8883e8 */
  if (pf) goto L_8883e8;
L_8883e3: /* 8883e3: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 8883e7: ret  */
  esp += 4; SPILL(); return;
L_8883e8: /* 8883e8: fld qword ptr [esp + 0x14] */
  { double v = F64((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8883ec: ret  */
  esp += 4; SPILL(); return;
}

void f_888400(void) {
  LOAD_REGS();
L_888400: /* 888400: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 888402: push 0x9d53fe */
  { uint32_t v = 0x9d53feu; esp -= 4; W32(esp, v); }
/* 888407: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 88840d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88840e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 888415: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 888416: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 888417: mov esi, ecx */
  esi = ecx;
/* 888419: mov cl, byte ptr [0xce16dc] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xce16dcu))) & 0xffu);
/* 88841f: mov eax, 1 */
  eax = 0x1u;
/* 888424: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 888426: jne 0x888458 */
  if (!zf) goto L_888458;
L_888428: /* 888428: or dword ptr [0xce16dc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xce16dcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xce16dcu), r);
  }
/* 88842e: mov al, 0x7f */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x7fu) & 0xffu);
/* 888430: mov byte ptr [esp + 4], al */
  W8((uint32_t)(esp + 0x4u), (eax & 0xffu));
/* 888434: mov byte ptr [esp + 5], al */
  W8((uint32_t)(esp + 0x5u), (eax & 0xffu));
/* 888438: mov byte ptr [esp + 6], al */
  W8((uint32_t)(esp + 0x6u), (eax & 0xffu));
/* 88843c: mov byte ptr [esp + 7], 0xff */
  W8((uint32_t)(esp + 0x7u), 0xffu);
/* 888441: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 888445: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 888446: mov ecx, 0xce16c4 */
  ecx = 0xce16c4u;
/* 88844b: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 888453: call 0x6c7af4 */
  esp -= 4; W32(esp, 0x888458u); SPILL(); f_6c7af4(); if (g_unwind) return; RELOAD();
L_888458: /* 888458: test byte ptr [esi + 0x70], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x70u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88845c: mov eax, 0xce16c4 */
  eax = 0xce16c4u;
/* 888461: jne 0x888466 */
  if (!zf) goto L_888466;
L_888463: /* 888463: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
L_888466: /* 888466: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 88846a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88846b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 888472: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 888475: ret  */
  esp += 4; SPILL(); return;
}

void f_8884a0(void) {
  LOAD_REGS();
L_8884a0: /* 8884a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8884a3: mov al, byte ptr [esp + 0x14] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x14u))) & 0xffu);
/* 8884a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8884a8: mov esi, ecx */
  esi = ecx;
/* 8884aa: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8884ae: mov dword ptr [esi], 0xa198e8 */
  W32((uint32_t)(esi), 0xa198e8u);
/* 8884b4: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 8884b7: mov byte ptr [esi + 4], al */
  W8((uint32_t)(esi + 0x4u), (eax & 0xffu));
/* 8884ba: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8884bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8884bd: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8884bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8884bf: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 8884c2: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 8884c4: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8884c7: mov ecx, esp */
  ecx = esp;
/* 8884c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8884cb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8884ce: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 8884d6: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 8884da: mov edx, esp */
  edx = esp;
/* 8884dc: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8884de: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 8884e6: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 8884ea: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8884ed: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 8884f5: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8884f9: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8884fc: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x888502u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 888502: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 888505: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 888507: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 888509: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88850b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88850d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88850f: call dword ptr [edi + 0x24] */
  { uint32_t t = R32((uint32_t)(edi + 0x24u)); esp -= 4; W32(esp, 0x888512u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 888512: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 888513: mov eax, esi */
  eax = esi;
/* 888515: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 888516: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 888519: ret 8 */
  esp += 12; SPILL(); return;
}

void f_888540(void) {
  LOAD_REGS();
L_888540: /* 888540: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 888544: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 888548: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 888549: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88854a: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 88854e: mov esi, ecx */
  esi = ecx;
/* 888550: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 888553: mov ecx, esp */
  ecx = esp;
/* 888555: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 888557: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 88855b: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 88855e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 888561: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 888565: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 888569: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88856c: mov eax, esp */
  eax = esp;
/* 88856e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 888570: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* 888574: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 888577: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* 88857b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 88857e: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 888582: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 888586: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 888587: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 88858b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88858c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88858d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88858e: mov ecx, esi */
  ecx = esi;
/* 888590: call 0x6c98d1 */
  esp -= 4; W32(esp, 0x888595u); SPILL(); f_6c98d1(); if (g_unwind) return; RELOAD();
/* 888595: mov dword ptr [esi], 0xa19978 */
  W32((uint32_t)(esi), 0xa19978u);
/* 88859b: mov eax, esi */
  eax = esi;
/* 88859d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88859e: ret 0x2c */
  esp += 48; SPILL(); return;
}

void f_8885d0(void) {
  LOAD_REGS();
L_8885d0: /* 8885d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8885d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8885d6: je 0x8885e6 */
  if (zf) goto L_8885e6;
L_8885d8: /* 8885d8: test byte ptr [eax + 0x80], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x80u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8885df: jne 0x8885e6 */
  if (!zf) goto L_8885e6;
L_8885e1: /* 8885e1: xor eax, eax */
  eax = 0;
/* 8885e3: ret 4 */
  esp += 8; SPILL(); return;
L_8885e6: /* 8885e6: mov eax, 1 */
  eax = 0x1u;
/* 8885eb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_888600(void) {
  LOAD_REGS();
L_888600: /* 888600: jmp 0x6c82c9 */
  SPILL(); f_6c82c9(); return;
}

void f_888620(void) {
  LOAD_REGS();
L_888620: /* 888620: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 888624: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 888625: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 888626: mov esi, ecx */
  esi = ecx;
/* 888628: call 0x6cccbb */
  esp -= 4; W32(esp, 0x88862du); SPILL(); f_6cccbb(); if (g_unwind) return; RELOAD();
/* 88862d: mov dword ptr [esi], 0xa19978 */
  W32((uint32_t)(esi), 0xa19978u);
/* 888633: mov eax, esi */
  eax = esi;
/* 888635: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 888636: ret 4 */
  esp += 8; SPILL(); return;
}

void f_888650(void) {
  LOAD_REGS();
L_888650: /* 888650: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 888651: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 888652: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 888656: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 888657: mov esi, ecx */
  esi = ecx;
/* 888659: call 0x6c7ea0 */
  esp -= 4; W32(esp, 0x88865eu); SPILL(); f_6c7ea0(); if (g_unwind) return; RELOAD();
/* 88865e: lea eax, [edi + 0x1d4] */
  eax = (uint32_t)(edi + 0x1d4u);
/* 888664: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 888666: lea ecx, [esi + 0x1d4] */
  ecx = (uint32_t)(esi + 0x1d4u);
/* 88866c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 88866e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 888671: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 888674: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 888677: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 88867a: mov ecx, dword ptr [edi + 0x1e0] */
  ecx = R32((uint32_t)(edi + 0x1e0u));
/* 888680: mov dword ptr [esi + 0x1e0], ecx */
  W32((uint32_t)(esi + 0x1e0u), ecx);
/* 888686: mov edx, dword ptr [edi + 0x1e4] */
  edx = R32((uint32_t)(edi + 0x1e4u));
/* 88868c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88868d: mov dword ptr [esi + 0x1e4], edx */
  W32((uint32_t)(esi + 0x1e4u), edx);
/* 888693: mov eax, esi */
  eax = esi;
/* 888695: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 888696: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8886c0(void) {
  LOAD_REGS();
L_8886c0: /* 8886c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8886c1: mov esi, ecx */
  esi = ecx;
/* 8886c3: call 0x6c3378 */
  esp -= 4; W32(esp, 0x8886c8u); SPILL(); f_6c3378(); if (g_unwind) return; RELOAD();
/* 8886c8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8886cd: je 0x8886dc */
  if (zf) goto L_8886dc;
L_8886cf: /* 8886cf: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8886d4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8886d6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8886d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8886d9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8886dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8886dc: /* 8886dc: mov eax, esi */
  eax = esi;
/* 8886de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8886df: ret 4 */
  esp += 8; SPILL(); return;
}

void f_888700(void) {
  LOAD_REGS();
L_888700: /* 888700: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 888701: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 888705: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 888708: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 888709: mov esi, ecx */
  esi = ecx;
/* 88870b: je 0x888740 */
  if (zf) goto L_888740;
L_88870d: /* 88870d: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* 888710: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 888711: push 0x6c3378 */
  { uint32_t v = 0x6c3378u; esp -= 4; W32(esp, v); }
/* 888716: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 888719: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88871a: push 0x1e8 */
  { uint32_t v = 0x1e8u; esp -= 4; W32(esp, v); }
/* 88871f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 888720: call 0x99ca3d */
  esp -= 4; W32(esp, 0x888725u); SPILL(); f_99ca3d(); if (g_unwind) return; RELOAD();
/* 888725: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 888728: je 0x888738 */
  if (zf) goto L_888738;
L_88872a: /* 88872a: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 888730: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 888732: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 888734: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 888735: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x888738u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_888738: /* 888738: mov eax, edi */
  eax = edi;
/* 88873a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88873b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88873c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88873d: ret 4 */
  esp += 8; SPILL(); return;
L_888740: /* 888740: mov ecx, esi */
  ecx = esi;
/* 888742: call 0x6c3378 */
  esp -= 4; W32(esp, 0x888747u); SPILL(); f_6c3378(); if (g_unwind) return; RELOAD();
/* 888747: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88874a: je 0x888759 */
  if (zf) goto L_888759;
L_88874c: /* 88874c: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 888751: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 888753: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 888755: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 888756: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x888759u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_888759: /* 888759: mov eax, esi */
  eax = esi;
/* 88875b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88875c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88875d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_888780(void) {
  LOAD_REGS();
L_888780: /* 888780: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 888781: mov ebp, esp */
  ebp = esp;
/* 888783: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 888785: push 0x9d5410 */
  { uint32_t v = 0x9d5410u; esp -= 4; W32(esp, v); }
/* 88878a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 888790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 888791: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 888798: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88879b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88879c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88879d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88879e: mov esi, ecx */
  esi = ecx;
/* 8887a0: mov edi, dword ptr [esi + 0x50] */
  edi = R32((uint32_t)(esi + 0x50u));
/* 8887a3: xor ebx, ebx */
  ebx = 0;
/* 8887a5: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8887a7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8887aa: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8887ad: je 0x8887c6 */
  if (zf) goto L_8887c6;
L_8887af: /* 8887af: mov ecx, edi */
  ecx = edi;
/* 8887b1: call 0x6c88d2 */
  esp -= 4; W32(esp, 0x8887b6u); SPILL(); f_6c88d2(); if (g_unwind) return; RELOAD();
/* 8887b6: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8887bb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8887bd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8887bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8887c0: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8887c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8887c3: mov dword ptr [esi + 0x50], ebx */
  W32((uint32_t)(esi + 0x50u), ebx);
L_8887c6: /* 8887c6: mov edi, dword ptr [esi + 0x54] */
  edi = R32((uint32_t)(esi + 0x54u));
/* 8887c9: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8887cb: je 0x8887e4 */
  if (zf) goto L_8887e4;
L_8887cd: /* 8887cd: mov ecx, edi */
  ecx = edi;
/* 8887cf: call 0x6c88d2 */
  esp -= 4; W32(esp, 0x8887d4u); SPILL(); f_6c88d2(); if (g_unwind) return; RELOAD();
/* 8887d4: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8887d9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8887db: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8887dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8887de: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8887e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8887e1: mov dword ptr [esi + 0x54], ebx */
  W32((uint32_t)(esi + 0x54u), ebx);
L_8887e4: /* 8887e4: mov ecx, esi */
  ecx = esi;
/* 8887e6: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x8887ecu); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 8887ec: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8887ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8887f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8887f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8887f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8887f9: mov esp, ebp */
  esp = ebp;
/* 8887fb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8887fc: ret  */
  esp += 4; SPILL(); return;
}

void f_8887fd(void) {
  LOAD_REGS();
L_8887fd: /* 8887fd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 888800: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 888805: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 888808: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 888809: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 88880c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x888811u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_888811(); return;
}

void f_888811(void) {
  LOAD_REGS();
L_888811: /* 888811: push 0xa199bc */
  { uint32_t v = 0xa199bcu; esp -= 4; W32(esp, v); }
/* 888816: push 0xae731c */
  { uint32_t v = 0xae731cu; esp -= 4; W32(esp, v); }
/* 88881b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x888821u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 888821: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 888824: xor ebx, ebx */
  ebx = 0;
/* 888826: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 888827: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 888828: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88882du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_88882d: guest_badaddr(0x88882d); return;
}

void f_888860(void) {
  LOAD_REGS();
L_888860: /* 888860: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 888861: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 888865: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 888867: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 888868: mov edi, ecx */
  edi = ecx;
/* 88886a: je 0x88887d */
  if (zf) goto L_88887d;
L_88886c: /* 88886c: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 888871: mov ecx, esi */
  ecx = esi;
/* 888873: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x888879u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 888879: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88887b: jne 0x88887f */
  if (!zf) goto L_88887f;
L_88887d: /* 88887d: xor esi, esi */
  esi = 0;
L_88887f: /* 88887f: mov eax, dword ptr [0xce16e4] */
  eax = R32((uint32_t)(0xce16e4u));
/* 888884: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 888886: jne 0x8888b9 */
  if (!zf) goto L_8888b9;
L_888888: /* 888888: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88888a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88888b: mov ecx, esp */
  ecx = esp;
/* 88888d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88888f: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x888895u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 888895: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 888897: push 0xb88fb0 */
  { uint32_t v = 0xb88fb0u; esp -= 4; W32(esp, v); }
/* 88889c: call 0x6c9b4c */
  esp -= 4; W32(esp, 0x8888a1u); SPILL(); f_6c9b4c(); if (g_unwind) return; RELOAD();
/* 8888a1: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8888a7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8888aa: push 0xce16e4 */
  { uint32_t v = 0xce16e4u; esp -= 4; W32(esp, v); }
/* 8888af: mov dword ptr [0xce16e4], eax */
  W32((uint32_t)(0xce16e4u), eax);
/* 8888b4: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8888b9u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_8888b9: /* 8888b9: mov cl, byte ptr [edi + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* 8888bc: mov edx, dword ptr [0xce16e4] */
  edx = R32((uint32_t)(0xce16e4u));
/* 8888c2: mov al, 0x80 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
/* 8888c4: mov byte ptr [esp + 0xc], al */
  W8((uint32_t)(esp + 0xcu), (eax & 0xffu));
/* 8888c8: mov byte ptr [esp + 0xd], al */
  W8((uint32_t)(esp + 0xdu), (eax & 0xffu));
/* 8888cc: mov byte ptr [esp + 0xe], al */
  W8((uint32_t)(esp + 0xeu), (eax & 0xffu));
/* 8888d0: or al, 0xff */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8888d2: sub al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8888d4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8888d6: mov byte ptr [esp + 0xf], al */
  W8((uint32_t)(esp + 0xfu), (eax & 0xffu));
/* 8888da: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8888de: mov dword ptr [edx + 0x38], ecx */
  W32((uint32_t)(edx + 0x38u), ecx);
/* 8888e1: je 0x888961 */
  if (zf) goto L_888961;
L_8888e3: /* 8888e3: mov eax, dword ptr [0xce16e0] */
  eax = R32((uint32_t)(0xce16e0u));
/* 8888e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8888ea: jne 0x88891d */
  if (!zf) goto L_88891d;
L_8888ec: /* 8888ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8888ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8888ef: mov ecx, esp */
  ecx = esp;
/* 8888f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8888f3: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8888f9u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8888f9: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8888fb: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 888900: call 0x6cc630 */
  esp -= 4; W32(esp, 0x888905u); SPILL(); f_6cc630(); if (g_unwind) return; RELOAD();
/* 888905: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 88890b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88890e: push 0xce16e0 */
  { uint32_t v = 0xce16e0u; esp -= 4; W32(esp, v); }
/* 888913: mov dword ptr [0xce16e0], eax */
  W32((uint32_t)(0xce16e0u), eax);
/* 888918: call 0x6c1203 */
  esp -= 4; W32(esp, 0x88891du); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_88891d: /* 88891d: mov eax, dword ptr [0xce16e4] */
  eax = R32((uint32_t)(0xce16e4u));
/* 888922: mov ecx, dword ptr [0xce16e0] */
  ecx = R32((uint32_t)(0xce16e0u));
/* 888928: mov dword ptr [ecx + 0x38], eax */
  W32((uint32_t)(ecx + 0x38u), eax);
/* 88892b: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* 88892e: mov eax, dword ptr [0xce16e0] */
  eax = R32((uint32_t)(0xce16e0u));
/* 888933: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 888936: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 888939: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88893b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88893c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88893d: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 888945: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 88894d: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 888955: mov eax, dword ptr [0xce16e0] */
  eax = R32((uint32_t)(0xce16e0u));
/* 88895a: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 88895e: jmp dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); SPILL(); call_ind(t); return; }
L_888961: /* 888961: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 888964: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 888966: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 888967: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 888968: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 888970: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 888978: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 888980: mov eax, dword ptr [0xce16e4] */
  eax = R32((uint32_t)(0xce16e4u));
/* 888985: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 888989: jmp dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); SPILL(); call_ind(t); return; }
}

void f_8889e0(void) {
  LOAD_REGS();
L_8889e0: /* 8889e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8889e1: mov ebp, esp */
  ebp = esp;
/* 8889e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8889e5: push 0x9d5454 */
  { uint32_t v = 0x9d5454u; esp -= 4; W32(esp, v); }
/* 8889ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8889f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8889f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8889f8: sub esp, 0x358 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x358u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8889fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8889ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 888a00: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 888a01: mov edi, ecx */
  edi = ecx;
/* 888a03: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 888a06: test al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 888a08: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 888a0b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 888a12: jne 0x889232 */
  if (!zf) goto L_889232;
L_888a18: /* 888a18: mov ecx, dword ptr [0xcfa278] */
  ecx = R32((uint32_t)(0xcfa278u));
/* 888a1e: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 888a21: jne 0x889232 */
  if (!zf) goto L_889232;
L_888a27: /* 888a27: mov edx, dword ptr [0xcfab30] */
  edx = R32((uint32_t)(0xcfab30u));
/* 888a2d: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 888a30: jne 0x889232 */
  if (!zf) goto L_889232;
L_888a36: /* 888a36: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 888a38: je 0x88922a */
  if (zf) goto L_88922a;
L_888a3e: /* 888a3e: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* 888a41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 888a43: je 0x88922a */
  if (zf) goto L_88922a;
L_888a49: /* 888a49: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 888a4c: mov eax, dword ptr [eax + 0xd4] */
  eax = R32((uint32_t)(eax + 0xd4u));
/* 888a52: mov ebx, dword ptr [esi + 0x148] */
  ebx = R32((uint32_t)(esi + 0x148u));
/* 888a58: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 888a5b: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 888a5e: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 888a64: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 888a66: mov dword ptr [ebp - 0x64], edx */
  W32((uint32_t)(ebp + 0xffffff9cu), edx);
/* 888a69: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 888a6c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 888a6f: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 888a72: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 888a75: lea edx, [eax + 0x17c] */
  edx = (uint32_t)(eax + 0x17cu);
/* 888a7b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 888a7d: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 888a80: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 888a83: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 888a86: mov dword ptr [ebp - 0x70], ecx */
  W32((uint32_t)(ebp + 0xffffff90u), ecx);
/* 888a89: mov ecx, dword ptr [esi + 0x88] */
  ecx = R32((uint32_t)(esi + 0x88u));
/* 888a8f: mov dword ptr [ebp - 0x6c], edx */
  W32((uint32_t)(ebp + 0xffffff94u), edx);
/* 888a92: mov edx, dword ptr [esi + 0x8c] */
  edx = R32((uint32_t)(esi + 0x8cu));
/* 888a98: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 888a9b: mov ecx, dword ptr [esi + 0x90] */
  ecx = R32((uint32_t)(esi + 0x90u));
/* 888aa1: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 888aa4: mov edx, dword ptr [esi + 0x94] */
  edx = R32((uint32_t)(esi + 0x94u));
/* 888aaa: mov dword ptr [ebp - 0x80], ecx */
  W32((uint32_t)(ebp + 0xffffff80u), ecx);
/* 888aad: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 888ab3: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 888ab6: mov edx, dword ptr [esi + 0x11c] */
  edx = R32((uint32_t)(esi + 0x11cu));
/* 888abc: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 888abf: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 888ac5: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 888ac8: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 888acb: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 888ace: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x888ad4u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 888ad4: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 888ad7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 888ad9: mov dword ptr [ebp - 0x24], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3f800000u);
/* 888ae0: je 0x888b53 */
  if (zf) goto L_888b53;
L_888ae2: /* 888ae2: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 888ae8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 888aea: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 888aed: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 888af0: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 888af3: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 888af8: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 888afb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 888afd: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 888b03: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 888b06: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 888b09: mov dword ptr [ebp - 0x8c], ecx */
  W32((uint32_t)(ebp + 0xffffff74u), ecx);
/* 888b0f: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 888b12: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 888b15: mov dword ptr [ebp - 0x88], edx */
  W32((uint32_t)(ebp + 0xffffff78u), edx);
/* 888b1b: fld dword ptr [eax + 0x348] */
  { double v = F32((uint32_t)(eax + 0x348u)); FPUSH(v); }
/* 888b21: fmul qword ptr [0xa167b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa167b8u)));
/* 888b27: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 888b2a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 888b2d: call dword ptr [0xcfab08] */
  esp -= 4; W32(esp, 0x888b33u); SPILL(); f_4e2a3b(); if (g_unwind) return; /* Core!?appTan@@YANN@Z */ RELOAD();
/* 888b33: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 888b36: fst qword ptr [ebp - 0x34] */
  WF64((uint32_t)(ebp + 0xffffffccu), ST0);
/* 888b39: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 888b3f: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 888b42: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 888b43: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 888b46: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 888b49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 888b4a: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 888b4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 888b4e: call 0x6c204a */
  esp -= 4; W32(esp, 0x888b53u); SPILL(); f_6c204a(); if (g_unwind) return; RELOAD();
L_888b53: /* 888b53: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* 888b56: cmp byte ptr [eax + 0x51], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x51u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 888b5a: jne 0x888b8e */
  if (!zf) goto L_888b8e;
L_888b5c: /* 888b5c: mov ecx, dword ptr [eax + 0xd0] */
  ecx = R32((uint32_t)(eax + 0xd0u));
/* 888b62: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 888b64: je 0x888b8e */
  if (zf) goto L_888b8e;
L_888b66: /* 888b66: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 888b68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 888b69: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x888b6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 888b6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 888b70: call 0x6c8116 */
  esp -= 4; W32(esp, 0x888b75u); SPILL(); f_6c8116(); if (g_unwind) return; RELOAD();
/* 888b75: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 888b78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 888b7a: je 0x888b8e */
  if (zf) goto L_888b8e;
L_888b7c: /* 888b7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 888b7e: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* 888b84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 888b85: mov ecx, eax */
  ecx = eax;
/* 888b87: call 0x6c5060 */
  esp -= 4; W32(esp, 0x888b8cu); SPILL(); f_6c5060(); if (g_unwind) return; RELOAD();
/* 888b8c: jmp 0x888bb7 */
  goto L_888bb7;
L_888b8e: /* 888b8e: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* 888b91: fld dword ptr [eax + 0x178] */
  { double v = F32((uint32_t)(eax + 0x178u)); FPUSH(v); }
/* 888b97: mov edx, dword ptr [eax + 0x170] */
  edx = R32((uint32_t)(eax + 0x170u));
/* 888b9d: fadd dword ptr [0xa07fe4] */
  ST0 = ST0 + (F32((uint32_t)(0xa07fe4u)));
/* 888ba3: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 888ba8: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 888bab: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 888bae: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 888bb1: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 888bb4: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
L_888bb7: /* 888bb7: fld dword ptr [edi + 0x68] */
  { double v = F32((uint32_t)(edi + 0x68u)); FPUSH(v); }
/* 888bba: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 888bbc: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 888bbf: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 888bc1: fmul dword ptr [edi + 0x64] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x64u)));
/* 888bc4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 888bc7: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 888bca: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 888bcd: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 888bd0: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 888bd3: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 888bd6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 888bd8: add ecx, 0x170 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 888bde: fmul dword ptr [edi + 0x60] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x60u)));
/* 888be1: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 888be4: fmul dword ptr [edi + 0x5c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x5cu)));
/* 888be7: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 888bea: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 888bed: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 888bf0: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 888bf3: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 888bf6: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 888bf9: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 888bfc: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 888bff: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 888c02: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 888c04: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 888c07: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 888c0a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 888c0d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 888c10: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 888c13: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 888c16: fld dword ptr [edi + 0x64] */
  { double v = F32((uint32_t)(edi + 0x64u)); FPUSH(v); }
/* 888c19: fchs  */
  ST0 = -ST0;
/* 888c1b: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 888c21: fld dword ptr [edi + 0x60] */
  { double v = F32((uint32_t)(edi + 0x60u)); FPUSH(v); }
/* 888c24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 888c25: fchs  */
  ST0 = -ST0;
/* 888c27: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 888c2a: fld dword ptr [edi + 0x5c] */
  { double v = F32((uint32_t)(edi + 0x5cu)); FPUSH(v); }
/* 888c2d: fchs  */
  ST0 = -ST0;
/* 888c2f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 888c32: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 888c35: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 888c38: call dword ptr [0xcfaa94] */
  esp -= 4; W32(esp, 0x888c3eu); SPILL(); f_4e2dfb(); if (g_unwind) return; /* Core!?Rotation@FVector@@QAE?AVFRotator@@XZ */ RELOAD();
/* 888c3e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 888c40: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 888c43: add ecx, 0x17c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 888c49: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 888c4b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 888c4e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 888c51: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 888c54: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 888c57: mov eax, 0x3f800000 */
  eax = 0x3f800000u;
/* 888c5c: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* 888c62: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 888c68: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 888c6b: mov dword ptr [esi + 0x11c], 0 */
  W32((uint32_t)(esi + 0x11cu), 0x0u);
/* 888c75: and dword ptr [eax + 0x534], 0xdfffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0xdfffffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x534u), r);
  }
/* 888c7f: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 888c81: mov ecx, ebx */
  ecx = ebx;
/* 888c83: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x888c85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 888c85: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 888c88: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 888c8a: jne 0x888cc0 */
  if (!zf) goto L_888cc0;
L_888c8c: /* 888c8c: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 888c8e: call 0x6c242d */
  esp -= 4; W32(esp, 0x888c93u); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 888c93: mov ecx, eax */
  ecx = eax;
/* 888c95: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 888c98: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 888c9b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 888c9d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 888ca1: je 0x888cb7 */
  if (zf) goto L_888cb7;
L_888ca3: /* 888ca3: movzx eax, byte ptr [edi + 0x38] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x38u)));
/* 888ca7: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* 888caa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 888cab: mov eax, dword ptr [edi + 0x40] */
  eax = R32((uint32_t)(edi + 0x40u));
/* 888cae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 888caf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 888cb0: call 0x6c9e2b */
  esp -= 4; W32(esp, 0x888cb5u); SPILL(); f_6c9e2b(); if (g_unwind) return; RELOAD();
/* 888cb5: jmp 0x888cb9 */
  goto L_888cb9;
L_888cb7: /* 888cb7: xor eax, eax */
  eax = 0;
L_888cb9: /* 888cb9: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 888cbd: mov dword ptr [edi + 0x54], eax */
  W32((uint32_t)(edi + 0x54u), eax);
L_888cc0: /* 888cc0: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 888cc3: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 888cc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 888cc6: mov ecx, ebx */
  ecx = ebx;
/* 888cc8: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x888ccbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 888ccb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 888ccd: je 0x88919e */
  if (zf) goto L_88919e;
L_888cd3: /* 888cd3: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 888cd6: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 888cdc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 888cde: je 0x888d59 */
  if (zf) goto L_888d59;
L_888ce0: /* 888ce0: fld dword ptr [edi + 0x74] */
  { double v = F32((uint32_t)(edi + 0x74u)); FPUSH(v); }
/* 888ce3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 888ce9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 888ceb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 888cee: jne 0x888d59 */
  if (!zf) goto L_888d59;
L_888cf0: /* 888cf0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 888cf2: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 888cf5: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 888cf8: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 888cfb: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 888cfe: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 888d01: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 888d04: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 888d07: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 888d0a: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 888d0d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 888d10: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x888d16u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 888d16: fst dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0);
/* 888d19: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* 888d1e: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 888d21: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 888d23: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 888d26: fdiv dword ptr [edi + 0x74] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0x74u)));
/* 888d29: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 888d2c: call dword ptr [0xcfaa8c] */
  esp -= 4; W32(esp, 0x888d32u); SPILL(); f_4e2abd(); if (g_unwind) return; /* Core!?appPow@@YANNN@Z */ RELOAD();
/* 888d32: fstp qword ptr [ebp - 0x34] */
  WF64((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 888d35: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 888d38: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 888d3b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 888d3e: push 0x3ff00000 */
  { uint32_t v = 0x3ff00000u; esp -= 4; W32(esp, v); }
/* 888d43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 888d45: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 888d47: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 888d49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 888d4a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 888d4b: call 0x6c44e4 */
  esp -= 4; W32(esp, 0x888d50u); SPILL(); f_6c44e4(); if (g_unwind) return; RELOAD();
/* 888d50: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 888d56: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_888d59: /* 888d59: movzx eax, byte ptr [edi + 0x78] */
  eax = (uint32_t)(R8((uint32_t)(edi + 0x78u)));
/* 888d5d: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 888d60: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 888d63: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 888d65: call 0x99c958 */
  esp -= 4; W32(esp, 0x888d6au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 888d6a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 888d6c: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 888d6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 888d70: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 888d71: call 0x6c60ff */
  esp -= 4; W32(esp, 0x888d76u); SPILL(); f_6c60ff(); if (g_unwind) return; RELOAD();
/* 888d76: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 888d79: mov ecx, dword ptr [edi + 0x6c] */
  ecx = R32((uint32_t)(edi + 0x6cu));
/* 888d7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 888d7d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 888d80: mov ecx, esp */
  ecx = esp;
/* 888d82: lea edx, [eax + 0x17c] */
  edx = (uint32_t)(eax + 0x17cu);
/* 888d88: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 888d8a: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 888d8c: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 888d8f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 888d92: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 888d95: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 888d98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 888d9b: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 888da1: mov ebx, dword ptr [ecx] */
  ebx = R32((uint32_t)(ecx));
/* 888da3: mov edx, esp */
  edx = esp;
/* 888da5: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 888da7: mov ebx, dword ptr [ecx + 4] */
  ebx = R32((uint32_t)(ecx + 0x4u));
/* 888daa: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 888dad: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 888db0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 888db1: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 888db4: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 888db7: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 888dba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 888dbb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 888dbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 888dbd: lea ecx, [ebp - 0x364] */
  ecx = (uint32_t)(ebp + 0xfffffc9cu);
/* 888dc3: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 888dc7: call 0x6c9ca0 */
  esp -= 4; W32(esp, 0x888dccu); SPILL(); f_6c9ca0(); if (g_unwind) return; RELOAD();
/* 888dcc: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 888dcf: mov al, 0x80 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
/* 888dd1: mov byte ptr [ebp + 0x10], al */
  W8((uint32_t)(ebp + 0x10u), (eax & 0xffu));
/* 888dd4: mov byte ptr [ebp + 0x11], al */
  W8((uint32_t)(ebp + 0x11u), (eax & 0xffu));
/* 888dd7: mov byte ptr [ebp + 0x12], al */
  W8((uint32_t)(ebp + 0x12u), (eax & 0xffu));
/* 888dda: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 888ddc: mov ecx, esi */
  ecx = esi;
/* 888dde: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 888de2: mov byte ptr [ebp + 0x13], 0xff */
  W8((uint32_t)(ebp + 0x13u), 0xffu);
/* 888de6: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 888de9: call 0x6c3549 */
  esp -= 4; W32(esp, 0x888deeu); SPILL(); f_6c3549(); if (g_unwind) return; RELOAD();
/* 888dee: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 888df1: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 888df4: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 888df6: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 888df8: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 888dfb: not eax */
  eax = ~eax;
/* 888dfd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 888dfe: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 888e01: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 888e03: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 888e08: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 888e0a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 888e0b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 888e0d: mov ecx, ebx */
  ecx = ebx;
/* 888e0f: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x888e12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 888e12: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 888e15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 888e16: lea ecx, [ebp - 0x364] */
  ecx = (uint32_t)(ebp + 0xfffffc9cu);
/* 888e1c: call 0x6c59ca */
  esp -= 4; W32(esp, 0x888e21u); SPILL(); f_6c59ca(); if (g_unwind) return; RELOAD();
/* 888e21: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 888e23: mov ecx, ebx */
  ecx = ebx;
/* 888e25: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x888e28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 888e28: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 888e2a: mov ecx, ebx */
  ecx = ebx;
/* 888e2c: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x888e2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 888e2e: mov eax, dword ptr [edi + 0x50] */
  eax = R32((uint32_t)(edi + 0x50u));
/* 888e31: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 888e33: jne 0x888e69 */
  if (!zf) goto L_888e69;
L_888e35: /* 888e35: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 888e37: call 0x6c242d */
  esp -= 4; W32(esp, 0x888e3cu); SPILL(); f_6c242d(); if (g_unwind) return; RELOAD();
/* 888e3c: mov ecx, eax */
  ecx = eax;
/* 888e3e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 888e41: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 888e44: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 888e46: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 888e4a: je 0x888e60 */
  if (zf) goto L_888e60;
L_888e4c: /* 888e4c: movzx edx, byte ptr [edi + 0x38] */
  edx = (uint32_t)(R8((uint32_t)(edi + 0x38u)));
/* 888e50: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 888e53: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 888e54: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* 888e57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 888e58: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 888e59: call 0x6c9e2b */
  esp -= 4; W32(esp, 0x888e5eu); SPILL(); f_6c9e2b(); if (g_unwind) return; RELOAD();
/* 888e5e: jmp 0x888e62 */
  goto L_888e62;
L_888e60: /* 888e60: xor eax, eax */
  eax = 0;
L_888e62: /* 888e62: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 888e66: mov dword ptr [edi + 0x50], eax */
  W32((uint32_t)(edi + 0x50u), eax);
L_888e69: /* 888e69: mov ecx, dword ptr [edi + 0x50] */
  ecx = R32((uint32_t)(edi + 0x50u));
/* 888e6c: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 888e6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 888e6f: mov ecx, ebx */
  ecx = ebx;
/* 888e71: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x888e74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 888e74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 888e76: je 0x889171 */
  if (zf) goto L_889171;
L_888e7c: /* 888e7c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 888e7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 888e80: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 888e82: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 888e87: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 888e89: mov byte ptr [ebp + 0x10], 0 */
  W8((uint32_t)(ebp + 0x10u), 0x0u);
/* 888e8d: mov byte ptr [ebp + 0x11], 0 */
  W8((uint32_t)(ebp + 0x11u), 0x0u);
/* 888e91: mov byte ptr [ebp + 0x12], 0 */
  W8((uint32_t)(ebp + 0x12u), 0x0u);
/* 888e95: mov byte ptr [ebp + 0x13], 0xff */
  W8((uint32_t)(ebp + 0x13u), 0xffu);
/* 888e99: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 888e9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 888e9d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 888e9f: mov ecx, ebx */
  ecx = ebx;
/* 888ea1: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x888ea4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 888ea4: mov dword ptr [ebp - 0xc4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff3cu), 0x3f800000u);
/* 888eae: mov dword ptr [ebp - 0xc0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x3f800000u);
/* 888eb8: mov dword ptr [ebp - 0xbc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x3f800000u);
/* 888ec2: mov dword ptr [ebp - 0xb8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x3f800000u);
/* 888ecc: mov dword ptr [ebp - 0xb4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x3f800000u);
/* 888ed6: mov dword ptr [ebp - 0xb0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x3f800000u);
/* 888ee0: mov dword ptr [ebp - 0xac], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x3f800000u);
/* 888eea: mov dword ptr [ebp - 0xa8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x3f800000u);
/* 888ef4: mov dword ptr [ebp - 0xa4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3f800000u);
/* 888efe: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 888f05: xor ecx, ecx */
  ecx = 0;
L_888f07: /* 888f07: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 888f0a: jge 0x888f32 */
  if ((sf == of)) goto L_888f32;
L_888f0c: /* 888f0c: xor eax, eax */
  eax = 0;
/* 888f0e: mov edi, edi */
  edi = edi;
L_888f10: /* 888f10: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 888f13: jge 0x888f2f */
  if ((sf == of)) goto L_888f2f;
L_888f15: /* 888f15: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 888f18: lea edx, [ecx + eax*2] */
  edx = (uint32_t)(ecx + eax*2);
/* 888f1b: mov ebx, eax */
  ebx = eax;
/* 888f1d: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 888f1f: fadd dword ptr [ebp + ebx*4 - 0xc4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + ebx*4 + 0xffffff3cu)));
/* 888f26: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 888f29: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 888f2a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 888f2d: jmp 0x888f10 */
  goto L_888f10;
L_888f2f: /* 888f2f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 888f30: jmp 0x888f07 */
  goto L_888f07;
L_888f32: /* 888f32: mov eax, dword ptr [0xce16ec] */
  eax = R32((uint32_t)(0xce16ecu));
/* 888f37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 888f39: jne 0x888f6f */
  if (!zf) goto L_888f6f;
L_888f3b: /* 888f3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 888f3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 888f3e: mov ecx, esp */
  ecx = esp;
/* 888f40: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 888f43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 888f45: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x888f4bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 888f4b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 888f4d: push 0xb86b60 */
  { uint32_t v = 0xb86b60u; esp -= 4; W32(esp, v); }
/* 888f52: call 0x6c7612 */
  esp -= 4; W32(esp, 0x888f57u); SPILL(); f_6c7612(); if (g_unwind) return; RELOAD();
/* 888f57: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 888f5d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 888f60: push 0xce16ec */
  { uint32_t v = 0xce16ecu; esp -= 4; W32(esp, v); }
/* 888f65: mov dword ptr [0xce16ec], eax */
  W32((uint32_t)(0xce16ecu), eax);
/* 888f6a: call 0x6c1203 */
  esp -= 4; W32(esp, 0x888f6fu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_888f6f: /* 888f6f: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 888f72: mov ecx, dword ptr [0xce16ec] */
  ecx = R32((uint32_t)(0xce16ecu));
/* 888f78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 888f79: call 0x6cccfc */
  esp -= 4; W32(esp, 0x888f7eu); SPILL(); f_6cccfc(); if (g_unwind) return; RELOAD();
/* 888f7e: mov eax, dword ptr [0xce16e8] */
  eax = R32((uint32_t)(0xce16e8u));
/* 888f83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 888f85: jne 0x888fe5 */
  if (!zf) goto L_888fe5;
L_888f87: /* 888f87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 888f89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 888f8a: mov ecx, esp */
  ecx = esp;
/* 888f8c: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 888f8f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 888f91: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x888f97u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 888f97: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 888f99: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 888f9e: call 0x6c9e99 */
  esp -= 4; W32(esp, 0x888fa3u); SPILL(); f_6c9e99(); if (g_unwind) return; RELOAD();
/* 888fa3: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 888fa9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 888fac: push 0xce16e8 */
  { uint32_t v = 0xce16e8u; esp -= 4; W32(esp, v); }
/* 888fb1: mov dword ptr [0xce16e8], eax */
  W32((uint32_t)(0xce16e8u), eax);
/* 888fb6: call 0x6c1203 */
  esp -= 4; W32(esp, 0x888fbbu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 888fbb: mov ecx, dword ptr [0xce16e8] */
  ecx = R32((uint32_t)(0xce16e8u));
/* 888fc1: mov byte ptr [ecx + 0x3c], 8 */
  W8((uint32_t)(ecx + 0x3cu), 0x8u);
/* 888fc5: mov edx, dword ptr [0xce16e8] */
  edx = R32((uint32_t)(0xce16e8u));
/* 888fcb: mov eax, dword ptr [0xce16ec] */
  eax = R32((uint32_t)(0xce16ecu));
/* 888fd0: mov dword ptr [edx + 0x38], eax */
  W32((uint32_t)(edx + 0x38u), eax);
/* 888fd3: mov eax, dword ptr [0xce16e8] */
  eax = R32((uint32_t)(0xce16e8u));
/* 888fd8: and dword ptr [eax + 0x40], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 888fdc: mov eax, dword ptr [0xce16e8] */
  eax = R32((uint32_t)(0xce16e8u));
/* 888fe1: and dword ptr [eax + 0x40], 0xfffffffd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
L_888fe5: /* 888fe5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 888fe8: mov ecx, esp */
  ecx = esp;
/* 888fea: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 888fed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 888fef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 888ff2: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 888ff9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 888ffc: mov edx, esp */
  edx = esp;
/* 888ffe: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 889000: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 889007: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88900a: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 88900d: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 889014: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 889017: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 88901a: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x889020u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 889020: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 889022: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889024: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889026: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889028: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 88902a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88902c: mov ecx, ebx */
  ecx = ebx;
/* 88902e: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x889031u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 889031: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 889038: jmp 0x889040 */
  goto L_889040;
L_889040: /* 889040: cmp dword ptr [ebp + 0x10], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 889044: jge 0x88915a */
  if ((sf == of)) goto L_88915a;
L_88904a: /* 88904a: xor ebx, ebx */
  ebx = 0;
L_88904c: /* 88904c: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88904f: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 889052: jge 0x88914b */
  if ((sf == of)) goto L_88914b;
L_889058: /* 889058: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 88905b: mov ecx, dword ptr [edi + 0x50] */
  ecx = R32((uint32_t)(edi + 0x50u));
/* 88905e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88905f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 889060: lea ecx, [ebp - 0x17c] */
  ecx = (uint32_t)(ebp + 0xfffffe84u);
/* 889066: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x88906bu); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 88906b: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 88906e: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 889071: lea eax, [edx + ebx*2] */
  eax = (uint32_t)(edx + ebx*2);
/* 889074: mov ecx, ebx */
  ecx = ebx;
/* 889076: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 889078: fld dword ptr [ebp + ecx*4 - 0xc4] */
  { double v = F32((uint32_t)(ebp + ecx*4 + 0xffffff3cu)); FPUSH(v); }
/* 88907f: lea edx, [ebp - 0xa0] */
  edx = (uint32_t)(ebp + 0xffffff60u);
/* 889085: fdiv dword ptr [ebp - 0x24] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 889088: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 889089: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 88908c: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 889090: mov dword ptr [ebp - 0xa0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x3f800000u);
/* 88909a: mov dword ptr [ebp - 0x9c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x3f800000u);
/* 8890a4: mov dword ptr [ebp - 0x98], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x3f800000u);
/* 8890ae: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 8890b4: call 0x6c576d */
  esp -= 4; W32(esp, 0x8890b9u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8890b9: fild dword ptr [edi + 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x44u)); FPUSH(v); }
/* 8890bc: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8890be: mov ecx, dword ptr [0xce16e8] */
  ecx = R32((uint32_t)(0xce16e8u));
/* 8890c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8890c5: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8890c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8890c9: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8890cc: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 8890d1: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8890d4: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8890d7: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 8890dd: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8890e0: fild dword ptr [edi + 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x40u)); FPUSH(v); }
/* 8890e3: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8890e6: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8890e9: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8890ec: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 8890f2: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8890f5: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8890f7: fadd dword ptr [0xa07fdc] */
  ST0 = ST0 + (F32((uint32_t)(0xa07fdcu)));
/* 8890fd: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 889101: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 889104: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 889106: fadd dword ptr [0xa07fdc] */
  ST0 = ST0 + (F32((uint32_t)(0xa07fdcu)));
/* 88910c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 889110: fld dword ptr [0xa07fdc] */
  { double v = F32((uint32_t)(0xa07fdcu)); FPUSH(v); }
/* 889116: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 889118: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 88911c: fld dword ptr [0xa07fdc] */
  { double v = F32((uint32_t)(0xa07fdcu)); FPUSH(v); }
/* 889122: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 889124: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 889127: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 889128: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 889129: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88912b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88912d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88912f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 889131: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x889136u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 889136: lea ecx, [ebp - 0x17c] */
  ecx = (uint32_t)(ebp + 0xfffffe84u);
/* 88913c: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 889140: call 0x6caac4 */
  esp -= 4; W32(esp, 0x889145u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 889145: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 889146: jmp 0x88904c */
  goto L_88904c;
L_88914b: /* 88914b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 88914e: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 889151: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 889152: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 889155: jmp 0x889040 */
  goto L_889040;
L_88915a: /* 88915a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 88915c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88915e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889160: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889162: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889164: mov ecx, ebx */
  ecx = ebx;
/* 889166: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x889169u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 889169: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 88916c: and eax, 0xfffffffd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 88916f: jmp 0x889177 */
  goto L_889177;
L_889171: /* 889171: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 889174: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_889177: /* 889177: lea ecx, [ebp - 0x364] */
  ecx = (uint32_t)(ebp + 0xfffffc9cu);
/* 88917d: mov dword ptr [edi + 0x70], eax */
  W32((uint32_t)(edi + 0x70u), eax);
/* 889180: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 889184: call 0x6c82c9 */
  esp -= 4; W32(esp, 0x889189u); SPILL(); f_6c82c9(); if (g_unwind) return; RELOAD();
/* 889189: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 88918c: mov dword ptr [ebp - 0x44], 0xa198e8 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0xa198e8u);
/* 889193: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 889195: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 889199: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x88919cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88919c: jmp 0x8891a2 */
  goto L_8891a2;
L_88919e: /* 88919e: or dword ptr [edi + 0x70], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x70u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi + 0x70u), r);
  }
L_8891a2: /* 8891a2: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8891a4: mov ecx, ebx */
  ecx = ebx;
/* 8891a6: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8891a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8891a9: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 8891ac: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8891af: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8891b2: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8891b7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8891b9: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8891bc: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8891bf: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8891c2: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 8891c5: mov eax, dword ptr [ebp - 0x74] */
  eax = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8891c8: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8891cb: add edx, 0x17c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8891d1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8891d3: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 8891d6: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8891d9: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 8891dc: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8891df: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 8891e2: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 8891e5: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 8891eb: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8891ee: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 8891f4: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 8891f7: mov dword ptr [esi + 0x8c], edx */
  W32((uint32_t)(esi + 0x8cu), edx);
/* 8891fd: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 889200: mov dword ptr [esi + 0x94], ecx */
  W32((uint32_t)(esi + 0x94u), ecx);
/* 889206: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 889209: mov dword ptr [esi + 0x11c], edx */
  W32((uint32_t)(esi + 0x11cu), edx);
/* 88920f: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
/* 889215: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 889218: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 88921b: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 88921e: mov dword ptr [edi + 0x70], eax */
  W32((uint32_t)(edi + 0x70u), eax);
/* 889221: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 889224: mov dword ptr [edx + 0xd4], eax */
  W32((uint32_t)(edx + 0xd4u), eax);
L_88922a: /* 88922a: test byte ptr [edi + 0x70], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x70u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88922e: mov eax, edi */
  eax = edi;
/* 889230: je 0x889235 */
  if (zf) goto L_889235;
L_889232: /* 889232: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
L_889235: /* 889235: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 889238: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 889239: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88923a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 889241: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 889242: mov esp, ebp */
  esp = ebp;
/* 889244: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 889245: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_88903a(void) {
  LOAD_REGS();
L_88903a: /* 88903a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_889040: /* 889040: cmp dword ptr [ebp + 0x10], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 889044: jge 0x88915a */
  if ((sf == of)) goto L_88915a;
L_88904a: /* 88904a: xor ebx, ebx */
  ebx = 0;
L_88904c: /* 88904c: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88904f: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 889052: jge 0x88914b */
  if ((sf == of)) goto L_88914b;
L_889058: /* 889058: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 88905b: mov ecx, dword ptr [edi + 0x50] */
  ecx = R32((uint32_t)(edi + 0x50u));
/* 88905e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88905f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 889060: lea ecx, [ebp - 0x17c] */
  ecx = (uint32_t)(ebp + 0xfffffe84u);
/* 889066: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x88906bu); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 88906b: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 88906e: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 889071: lea eax, [edx + ebx*2] */
  eax = (uint32_t)(edx + ebx*2);
/* 889074: mov ecx, ebx */
  ecx = ebx;
/* 889076: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 889078: fld dword ptr [ebp + ecx*4 - 0xc4] */
  { double v = F32((uint32_t)(ebp + ecx*4 + 0xffffff3cu)); FPUSH(v); }
/* 88907f: lea edx, [ebp - 0xa0] */
  edx = (uint32_t)(ebp + 0xffffff60u);
/* 889085: fdiv dword ptr [ebp - 0x24] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 889088: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 889089: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 88908c: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 889090: mov dword ptr [ebp - 0xa0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x3f800000u);
/* 88909a: mov dword ptr [ebp - 0x9c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x3f800000u);
/* 8890a4: mov dword ptr [ebp - 0x98], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x3f800000u);
/* 8890ae: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 8890b4: call 0x6c576d */
  esp -= 4; W32(esp, 0x8890b9u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8890b9: fild dword ptr [edi + 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x44u)); FPUSH(v); }
/* 8890bc: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8890be: mov ecx, dword ptr [0xce16e8] */
  ecx = R32((uint32_t)(0xce16e8u));
/* 8890c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8890c5: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8890c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8890c9: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8890cc: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 8890d1: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8890d4: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8890d7: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 8890dd: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8890e0: fild dword ptr [edi + 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(edi + 0x40u)); FPUSH(v); }
/* 8890e3: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8890e6: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8890e9: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8890ec: fmul dword ptr [0xa07fdc] */
  ST0 = ST0 * (F32((uint32_t)(0xa07fdcu)));
/* 8890f2: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8890f5: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8890f7: fadd dword ptr [0xa07fdc] */
  ST0 = ST0 + (F32((uint32_t)(0xa07fdcu)));
/* 8890fd: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 889101: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 889104: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 889106: fadd dword ptr [0xa07fdc] */
  ST0 = ST0 + (F32((uint32_t)(0xa07fdcu)));
/* 88910c: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 889110: fld dword ptr [0xa07fdc] */
  { double v = F32((uint32_t)(0xa07fdcu)); FPUSH(v); }
/* 889116: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 889118: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 88911c: fld dword ptr [0xa07fdc] */
  { double v = F32((uint32_t)(0xa07fdcu)); FPUSH(v); }
/* 889122: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 889124: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 889127: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 889128: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 889129: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88912b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88912d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88912f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 889131: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x889136u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 889136: lea ecx, [ebp - 0x17c] */
  ecx = (uint32_t)(ebp + 0xfffffe84u);
/* 88913c: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 889140: call 0x6caac4 */
  esp -= 4; W32(esp, 0x889145u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 889145: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 889146: jmp 0x88904c */
  goto L_88904c;
L_88914b: /* 88914b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 88914e: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 889151: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 889152: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 889155: jmp 0x889040 */
  goto L_889040;
L_88915a: /* 88915a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 88915c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88915e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889160: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889162: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889164: mov ecx, ebx */
  ecx = ebx;
/* 889166: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x889169u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 889169: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 88916c: and eax, 0xfffffffd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 88916f: jmp 0x889177 */
  goto L_889177;
L_889177: /* 889177: lea ecx, [ebp - 0x364] */
  ecx = (uint32_t)(ebp + 0xfffffc9cu);
/* 88917d: mov dword ptr [edi + 0x70], eax */
  W32((uint32_t)(edi + 0x70u), eax);
/* 889180: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 889184: call 0x6c82c9 */
  esp -= 4; W32(esp, 0x889189u); SPILL(); f_6c82c9(); if (g_unwind) return; RELOAD();
/* 889189: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 88918c: mov dword ptr [ebp - 0x44], 0xa198e8 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0xa198e8u);
/* 889193: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 889195: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 889199: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x88919cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88919c: jmp 0x8891a2 */
  goto L_8891a2;
L_8891a2: /* 8891a2: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8891a4: mov ecx, ebx */
  ecx = ebx;
/* 8891a6: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8891a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8891a9: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 8891ac: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8891af: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8891b2: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8891b7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8891b9: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8891bc: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8891bf: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8891c2: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 8891c5: mov eax, dword ptr [ebp - 0x74] */
  eax = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8891c8: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8891cb: add edx, 0x17c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8891d1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8891d3: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 8891d6: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8891d9: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 8891dc: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8891df: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 8891e2: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 8891e5: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 8891eb: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8891ee: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 8891f4: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 8891f7: mov dword ptr [esi + 0x8c], edx */
  W32((uint32_t)(esi + 0x8cu), edx);
/* 8891fd: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 889200: mov dword ptr [esi + 0x94], ecx */
  W32((uint32_t)(esi + 0x94u), ecx);
/* 889206: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 889209: mov dword ptr [esi + 0x11c], edx */
  W32((uint32_t)(esi + 0x11cu), edx);
/* 88920f: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
/* 889215: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 889218: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 88921b: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 88921e: mov dword ptr [edi + 0x70], eax */
  W32((uint32_t)(edi + 0x70u), eax);
/* 889221: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 889224: mov dword ptr [edx + 0xd4], eax */
  W32((uint32_t)(edx + 0xd4u), eax);
/* 88922a: test byte ptr [edi + 0x70], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x70u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88922e: mov eax, edi */
  eax = edi;
/* 889230: je 0x889235 */
  if (zf) goto L_889235;
L_889232: /* 889232: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
L_889235: /* 889235: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 889238: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 889239: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88923a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 889241: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 889242: mov esp, ebp */
  esp = ebp;
/* 889244: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 889245: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_88919e(void) {
  LOAD_REGS();
L_88919e: /* 88919e: or dword ptr [edi + 0x70], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x70u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi + 0x70u), r);
  }
/* 8891a2: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8891a4: mov ecx, ebx */
  ecx = ebx;
/* 8891a6: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8891a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8891a9: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 8891ac: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8891af: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8891b2: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8891b7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8891b9: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8891bc: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8891bf: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8891c2: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* 8891c5: mov eax, dword ptr [ebp - 0x74] */
  eax = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8891c8: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 8891cb: add edx, 0x17c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8891d1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8891d3: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 8891d6: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8891d9: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 8891dc: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8891df: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 8891e2: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 8891e5: mov dword ptr [esi + 0x88], ecx */
  W32((uint32_t)(esi + 0x88u), ecx);
/* 8891eb: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8891ee: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 8891f4: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 8891f7: mov dword ptr [esi + 0x8c], edx */
  W32((uint32_t)(esi + 0x8cu), edx);
/* 8891fd: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 889200: mov dword ptr [esi + 0x94], ecx */
  W32((uint32_t)(esi + 0x94u), ecx);
/* 889206: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 889209: mov dword ptr [esi + 0x11c], edx */
  W32((uint32_t)(esi + 0x11cu), edx);
/* 88920f: mov dword ptr [eax + 0x534], ecx */
  W32((uint32_t)(eax + 0x534u), ecx);
/* 889215: mov eax, dword ptr [edi + 0x70] */
  eax = R32((uint32_t)(edi + 0x70u));
/* 889218: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* 88921b: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 88921e: mov dword ptr [edi + 0x70], eax */
  W32((uint32_t)(edi + 0x70u), eax);
/* 889221: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 889224: mov dword ptr [edx + 0xd4], eax */
  W32((uint32_t)(edx + 0xd4u), eax);
/* 88922a: test byte ptr [edi + 0x70], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x70u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88922e: mov eax, edi */
  eax = edi;
/* 889230: je 0x889235 */
  if (zf) goto L_889235;
L_889232: /* 889232: mov eax, dword ptr [edi + 0x7c] */
  eax = R32((uint32_t)(edi + 0x7cu));
L_889235: /* 889235: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 889238: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 889239: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88923a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 889241: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 889242: mov esp, ebp */
  esp = ebp;
/* 889244: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 889245: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_889248(void) {
  LOAD_REGS();
L_889248: /* 889248: mov ecx, dword ptr [ebp - 0xd4] */
  ecx = R32((uint32_t)(ebp + 0xffffff2cu));
/* 88924e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 889253: lea edx, [ebp - 0x84] */
  edx = (uint32_t)(ebp + 0xffffff7cu);
/* 889259: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88925a: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 889260: call 0x99caf8 */
  esp -= 4; W32(esp, 0x889265u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_889265(); return;
}

void f_889265(void) {
  LOAD_REGS();
L_889265: /* 889265: push 0xa19a08 */
  { uint32_t v = 0xa19a08u; esp -= 4; W32(esp, v); }
/* 88926a: push 0xae7324 */
  { uint32_t v = 0xae7324u; esp -= 4; W32(esp, v); }
/* 88926f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x889275u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 889275: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 889278: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88927a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88927c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x889281u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_889281: guest_badaddr(0x889281); return;
}

void f_8894c0(void) {
  LOAD_REGS();
L_8894c0: /* 8894c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8894e0(void) {
  LOAD_REGS();
L_8894e0: /* 8894e0: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 8894e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8894e5: je 0x8894f6 */
  if (zf) goto L_8894f6;
L_8894e7: /* 8894e7: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8894ea: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8894ec: call dword ptr [eax + 0x140] */
  { uint32_t t = R32((uint32_t)(eax + 0x140u)); esp -= 4; W32(esp, 0x8894f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8894f2: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8894f5: ret  */
  esp += 4; SPILL(); return;
L_8894f6: /* 8894f6: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 8894f9: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8894fc: ret  */
  esp += 4; SPILL(); return;
}

void f_889510(void) {
  LOAD_REGS();
L_889510: /* 889510: mov eax, 0x20 */
  eax = 0x20u;
/* 889515: ret  */
  esp += 4; SPILL(); return;
}

void f_889530(void) {
  LOAD_REGS();
L_889530: /* 889530: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 889531: mov ebp, esp */
  ebp = esp;
/* 889533: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 889535: push 0x9d5470 */
  { uint32_t v = 0x9d5470u; esp -= 4; W32(esp, v); }
/* 88953a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 889540: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 889541: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 889548: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88954b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88954c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88954d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88954e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 889551: mov esi, ecx */
  esi = ecx;
/* 889553: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 88955a: call dword ptr [0xcfa230] */
  esp -= 4; W32(esp, 0x889560u); SPILL(); f_4e4110(); if (g_unwind) return; /* Core!?PostLoad@UObject@@UAEXXZ */ RELOAD();
/* 889560: cmp dword ptr [esi + 0x58], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x58u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 889564: jge 0x88956d */
  if ((sf == of)) goto L_88956d;
L_889566: /* 889566: mov ecx, esi */
  ecx = esi;
/* 889568: call 0x6ccfcc */
  esp -= 4; W32(esp, 0x88956du); SPILL(); f_6ccfcc(); if (g_unwind) return; RELOAD();
L_88956d: /* 88956d: mov eax, dword ptr [esi + 0x1f0] */
  eax = R32((uint32_t)(esi + 0x1f0u));
/* 889573: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 889575: jne 0x8895f2 */
  if (!zf) goto L_8895f2;
L_889577: /* 889577: mov ecx, esi */
  ecx = esi;
/* 889579: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x88957fu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 88957f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 889580: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 889585: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 889587: push 0xae7610 */
  { uint32_t v = 0xae7610u; esp -= 4; W32(esp, v); }
/* 88958c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88958d: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x889593u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 889593: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 889596: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889598: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 88959a: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 88959f: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 8895a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8895a6: mov ecx, esi */
  ecx = esi;
/* 8895a8: call 0x6c2603 */
  esp -= 4; W32(esp, 0x8895adu); SPILL(); f_6c2603(); if (g_unwind) return; RELOAD();
/* 8895ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8895af: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8895b1: push 0x3f000000 */
  { uint32_t v = 0x3f000000u; esp -= 4; W32(esp, v); }
/* 8895b6: push 0x3f333333 */
  { uint32_t v = 0x3f333333u; esp -= 4; W32(esp, v); }
/* 8895bb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8895bd: mov ecx, esi */
  ecx = esi;
/* 8895bf: call 0x6c2603 */
  esp -= 4; W32(esp, 0x8895c4u); SPILL(); f_6c2603(); if (g_unwind) return; RELOAD();
/* 8895c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8895c6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8895c8: push 0x3e99999a */
  { uint32_t v = 0x3e99999au; esp -= 4; W32(esp, v); }
/* 8895cd: push 0x3eb33333 */
  { uint32_t v = 0x3eb33333u; esp -= 4; W32(esp, v); }
/* 8895d2: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8895d4: mov ecx, esi */
  ecx = esi;
/* 8895d6: call 0x6c2603 */
  esp -= 4; W32(esp, 0x8895dbu); SPILL(); f_6c2603(); if (g_unwind) return; RELOAD();
/* 8895db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8895dd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8895df: push 0x3e2e147b */
  { uint32_t v = 0x3e2e147bu; esp -= 4; W32(esp, v); }
/* 8895e4: push 0x3dcccccd */
  { uint32_t v = 0x3dcccccdu; esp -= 4; W32(esp, v); }
/* 8895e9: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 8895eb: mov ecx, esi */
  ecx = esi;
/* 8895ed: call 0x6c2603 */
  esp -= 4; W32(esp, 0x8895f2u); SPILL(); f_6c2603(); if (g_unwind) return; RELOAD();
L_8895f2: /* 8895f2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8895f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8895f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8895f7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8895fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8895ff: mov esp, ebp */
  esp = ebp;
/* 889601: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 889602: ret  */
  esp += 4; SPILL(); return;
}

void f_889603(void) {
  LOAD_REGS();
L_889603: /* 889603: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 889606: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 88960b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 88960e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88960f: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 889612: call 0x99caf8 */
  esp -= 4; W32(esp, 0x889617u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_889617(); return;
}

void f_889617(void) {
  LOAD_REGS();
L_889617: /* 889617: push 0xa19a48 */
  { uint32_t v = 0xa19a48u; esp -= 4; W32(esp, v); }
/* 88961c: push 0xae766c */
  { uint32_t v = 0xae766cu; esp -= 4; W32(esp, v); }
/* 889621: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x889627u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 889627: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88962a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88962c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88962e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x889633u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_889633: guest_badaddr(0x889633); return;
}

void f_889690(void) {
  LOAD_REGS();
L_889690: /* 889690: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 889691: mov ebp, esp */
  ebp = esp;
/* 889693: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 889695: push 0x9d5480 */
  { uint32_t v = 0x9d5480u; esp -= 4; W32(esp, v); }
/* 88969a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8896a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8896a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8896a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8896ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8896ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8896ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8896ae: mov esi, ecx */
  esi = ecx;
/* 8896b0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8896b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8896b4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8896bb: call 0x6c458e */
  esp -= 4; W32(esp, 0x8896c0u); SPILL(); f_6c458e(); if (g_unwind) return; RELOAD();
/* 8896c0: mov ecx, esi */
  ecx = esi;
/* 8896c2: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x8896c8u); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 8896c8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8896cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8896cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8896cd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8896d4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8896d5: mov esp, ebp */
  esp = ebp;
/* 8896d7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8896d8: ret  */
  esp += 4; SPILL(); return;
}

void f_8896d9(void) {
  LOAD_REGS();
L_8896d9: /* 8896d9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8896dc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8896e1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8896e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8896e5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8896e8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8896edu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8896ed(); return;
}

void f_8896ed(void) {
  LOAD_REGS();
L_8896ed: /* 8896ed: push 0xa19a7c */
  { uint32_t v = 0xa19a7cu; esp -= 4; W32(esp, v); }
/* 8896f2: push 0xae767c */
  { uint32_t v = 0xae767cu; esp -= 4; W32(esp, v); }
/* 8896f7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8896fdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8896fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 889700: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889702: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889704: call 0x99caf8 */
  esp -= 4; W32(esp, 0x889709u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_889709: guest_badaddr(0x889709); return;
}

void f_889730(void) {
  LOAD_REGS();
L_889730: /* 889730: mov eax, dword ptr [ecx + 0xfc] */
  eax = R32((uint32_t)(ecx + 0xfcu));
/* 889736: ret  */
  esp += 4; SPILL(); return;
}

void f_889750(void) {
  LOAD_REGS();
L_889750: /* 889750: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 889751: mov ebp, esp */
  ebp = esp;
/* 889753: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 889755: push 0x9d5490 */
  { uint32_t v = 0x9d5490u; esp -= 4; W32(esp, v); }
/* 88975a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 889760: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 889761: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 889768: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88976b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88976c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88976d: mov esi, ecx */
  esi = ecx;
/* 88976f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 889771: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 889772: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 889775: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 88977c: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x889782u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 889782: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 889784: je 0x88979d */
  if (zf) goto L_88979d;
L_889786: /* 889786: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 889788: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 88978a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 88978d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88978e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889790: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889792: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889794: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 889795: mov ecx, esi */
  ecx = esi;
/* 889797: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x88979du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_88979d: /* 88979d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8897a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8897a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8897a2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8897a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8897aa: mov esp, ebp */
  esp = ebp;
/* 8897ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8897ad: ret  */
  esp += 4; SPILL(); return;
}

void f_8897ae(void) {
  LOAD_REGS();
L_8897ae: /* 8897ae: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8897b1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8897b6: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8897b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8897ba: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8897bd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8897c2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8897c2(); return;
}

void f_8897c2(void) {
  LOAD_REGS();
L_8897c2: /* 8897c2: push 0xa19ac8 */
  { uint32_t v = 0xa19ac8u; esp -= 4; W32(esp, v); }
/* 8897c7: push 0xae7a98 */
  { uint32_t v = 0xae7a98u; esp -= 4; W32(esp, v); }
/* 8897cc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8897d2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8897d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8897d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8897d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8897d9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8897deu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8897de: guest_badaddr(0x8897de); return;
}

void f_889810(void) {
  LOAD_REGS();
L_889810: /* 889810: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 889814: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 889816: je 0x889823 */
  if (zf) goto L_889823;
L_889818: /* 889818: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 88981a: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88981e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 889820: ret 8 */
  esp += 12; SPILL(); return;
L_889823: /* 889823: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 889824: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 889828: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88982a: mov ecx, esi */
  ecx = esi;
/* 88982c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x889832u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 889832: mov eax, esi */
  eax = esi;
/* 889834: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 889835: ret 8 */
  esp += 12; SPILL(); return;
}

void f_889850(void) {
  LOAD_REGS();
L_889850: /* 889850: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 889854: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 889856: je 0x88985e */
  if (zf) goto L_88985e;
L_889858: /* 889858: fild dword ptr [eax + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 88985b: ret 4 */
  esp += 8; SPILL(); return;
L_88985e: /* 88985e: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 889864: ret 4 */
  esp += 8; SPILL(); return;
}

void f_889880(void) {
  LOAD_REGS();
L_889880: /* 889880: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 889884: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 889886: je 0x88988e */
  if (zf) goto L_88988e;
L_889888: /* 889888: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 88988b: ret 4 */
  esp += 8; SPILL(); return;
L_88988e: /* 88988e: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 889894: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8898b0(void) {
  LOAD_REGS();
L_8898b0: /* 8898b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8898b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8898b6: je 0x8898be */
  if (zf) goto L_8898be;
L_8898b8: /* 8898b8: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 8898bb: ret 4 */
  esp += 8; SPILL(); return;
L_8898be: /* 8898be: xor eax, eax */
  eax = 0;
/* 8898c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8898e0(void) {
  LOAD_REGS();
L_8898e0: /* 8898e0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8898e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8898e3: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8898e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8898e8: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x8898eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8898ee: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8898f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8898f1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 8898f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8898f6: mov ecx, eax */
  ecx = eax;
/* 8898f8: call dword ptr [edx + 0x70] */
  { uint32_t t = R32((uint32_t)(edx + 0x70u)); esp -= 4; W32(esp, 0x8898fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8898fb: mov eax, esi */
  eax = esi;
/* 8898fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8898fe: ret 8 */
  esp += 12; SPILL(); return;
}

void f_889920(void) {
  LOAD_REGS();
L_889920: /* 889920: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 889922: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 889923: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 889927: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 889928: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0x88992eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88992e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 889930: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 889931: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 889935: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 889936: mov ecx, eax */
  ecx = eax;
/* 889938: call dword ptr [edx + 0x74] */
  { uint32_t t = R32((uint32_t)(edx + 0x74u)); esp -= 4; W32(esp, 0x88993bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88993b: mov eax, esi */
  eax = esi;
/* 88993d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88993e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_889960(void) {
  LOAD_REGS();
L_889960: /* 889960: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 889962: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 889963: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 889964: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x88996au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88996a: mov esi, eax */
  esi = eax;
/* 88996c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 889970: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 889973: mov ecx, 7 */
  ecx = 0x7u;
/* 889978: mov edi, eax */
  edi = eax;
/* 88997a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 88997c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88997d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88997e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8899a0(void) {
  LOAD_REGS();
L_8899a0: /* 8899a0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8899a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8899a3: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8899a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8899a9: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8899ad: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8899b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8899b1: mov ecx, esi */
  ecx = esi;
/* 8899b3: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x8899b9u); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 8899b9: mov eax, esi */
  eax = esi;
/* 8899bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8899bc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8899d0(void) {
  LOAD_REGS();
L_8899d0: /* 8899d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8899d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8899d2: mov esi, ecx */
  esi = ecx;
/* 8899d4: mov eax, dword ptr [esi + 0x208] */
  eax = R32((uint32_t)(esi + 0x208u));
/* 8899da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8899dc: je 0x889a02 */
  if (zf) goto L_889a02;
L_8899de: /* 8899de: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8899e0: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x8899e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8899e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8899e8: je 0x889a02 */
  if (zf) goto L_889a02;
L_8899ea: /* 8899ea: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8899ec: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 8899ee: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 8899f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8899f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8899f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8899f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8899f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8899fa: mov ecx, esi */
  ecx = esi;
/* 8899fc: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x889a02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_889a02: /* 889a02: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 889a06: add esi, 0x1a8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1a8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 889a0c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 889a0e: mov edx, eax */
  edx = eax;
/* 889a10: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 889a12: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 889a15: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 889a18: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 889a1b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 889a1e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 889a1f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 889a20: ret 4 */
  esp += 8; SPILL(); return;
}

void f_889a50(void) {
  LOAD_REGS();
L_889a50: /* 889a50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 889a51: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 889a52: mov esi, ecx */
  esi = ecx;
/* 889a54: mov eax, dword ptr [esi + 0x208] */
  eax = R32((uint32_t)(esi + 0x208u));
/* 889a5a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 889a5c: je 0x889a82 */
  if (zf) goto L_889a82;
L_889a5e: /* 889a5e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 889a60: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x889a66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 889a66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 889a68: je 0x889a82 */
  if (zf) goto L_889a82;
L_889a6a: /* 889a6a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 889a6c: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 889a6e: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* 889a72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 889a73: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889a75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889a77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889a79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 889a7a: mov ecx, esi */
  ecx = esi;
/* 889a7c: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x889a82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_889a82: /* 889a82: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 889a86: add esi, 0x1b4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1b4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 889a8c: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 889a8e: mov edx, eax */
  edx = eax;
/* 889a90: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 889a92: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 889a95: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 889a98: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 889a9b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 889a9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 889a9f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 889aa0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_889ad0(void) {
  LOAD_REGS();
L_889ad0: /* 889ad0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 889ad1: mov ebp, esp */
  ebp = esp;
/* 889ad3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 889ad5: push 0x9d54a0 */
  { uint32_t v = 0x9d54a0u; esp -= 4; W32(esp, v); }
/* 889ada: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 889ae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 889ae1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 889ae8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 889aeb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 889aec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 889aed: mov esi, ecx */
  esi = ecx;
/* 889aef: mov eax, dword ptr [esi + 0x208] */
  eax = R32((uint32_t)(esi + 0x208u));
/* 889af5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 889af7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 889af8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 889afb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 889b02: je 0x889b27 */
  if (zf) goto L_889b27;
L_889b04: /* 889b04: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 889b06: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x889b0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 889b0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 889b0e: je 0x889b27 */
  if (zf) goto L_889b27;
L_889b10: /* 889b10: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 889b12: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 889b14: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 889b17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 889b18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889b1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889b1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889b1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 889b1f: mov ecx, esi */
  ecx = esi;
/* 889b21: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x889b27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_889b27: /* 889b27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889b29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889b2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889b2d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 889b30: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x889b36u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 889b36: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 889b39: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 889b3c: mov edx, eax */
  edx = eax;
/* 889b3e: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 889b40: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 889b43: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 889b46: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 889b49: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 889b4a: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 889b4d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 889b50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 889b51: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 889b58: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 889b59: mov esp, ebp */
  esp = ebp;
/* 889b5b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 889b5c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_889b5f(void) {
  LOAD_REGS();
L_889b5f: /* 889b5f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 889b62: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 889b67: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 889b6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 889b6b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 889b6e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x889b73u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_889b73(); return;
}

void f_889b73(void) {
  LOAD_REGS();
L_889b73: /* 889b73: push 0xa19b28 */
  { uint32_t v = 0xa19b28u; esp -= 4; W32(esp, v); }
/* 889b78: push 0xae7c2c */
  { uint32_t v = 0xae7c2cu; esp -= 4; W32(esp, v); }
/* 889b7d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x889b83u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 889b83: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 889b86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889b88: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889b8a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x889b8fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_889b8f: guest_badaddr(0x889b8f); return;
}

void f_889bc0(void) {
  LOAD_REGS();
L_889bc0: /* 889bc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 889bc1: mov ebp, esp */
  ebp = esp;
/* 889bc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 889bc5: push 0x9d54b0 */
  { uint32_t v = 0x9d54b0u; esp -= 4; W32(esp, v); }
/* 889bca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 889bd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 889bd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 889bd8: sub esp, 0xf0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xf0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 889bde: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 889bdf: mov ebx, ecx */
  ebx = ecx;
/* 889be1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 889be4: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 889be6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 889be7: xor eax, eax */
  eax = 0;
/* 889be9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 889bea: mov dword ptr [ebx + 0x1a4], ecx */
  W32((uint32_t)(ebx + 0x1a4u), ecx);
/* 889bf0: mov ecx, ebx */
  ecx = ebx;
/* 889bf2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 889bf5: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 889bf8: mov dword ptr [ebx + 0x208], 1 */
  W32((uint32_t)(ebx + 0x208u), 0x1u);
/* 889c02: mov dword ptr [ebx + 0x168], eax */
  W32((uint32_t)(ebx + 0x168u), eax);
/* 889c08: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x889c0eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 889c0e: mov edi, eax */
  edi = eax;
/* 889c10: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 889c12: mov ecx, ebx */
  ecx = ebx;
/* 889c14: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x889c1au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 889c1a: mov esi, eax */
  esi = eax;
/* 889c1c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 889c1e: jne 0x889c33 */
  if (!zf) goto L_889c33;
L_889c20: /* 889c20: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 889c23: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 889c2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 889c2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 889c2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 889c2d: mov esp, ebp */
  esp = ebp;
/* 889c2f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 889c30: ret 4 */
  esp += 8; SPILL(); return;
L_889c33: /* 889c33: fld dword ptr [esi + 0x284] */
  { double v = F32((uint32_t)(esi + 0x284u)); FPUSH(v); }
/* 889c39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889c3b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 889c3d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889c3f: fmul dword ptr [edi + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x80u)));
/* 889c45: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 889c48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 889c49: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 889c4c: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 889c4f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 889c51: fmul dword ptr [edi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x7cu)));
/* 889c54: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 889c57: fmul dword ptr [edi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x78u)));
/* 889c5a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 889c5d: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 889c60: fmul dword ptr [esi + 0x290] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x290u)));
/* 889c66: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 889c69: fmul dword ptr [esi + 0x28c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28cu)));
/* 889c6f: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 889c72: fmul dword ptr [esi + 0x288] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x288u)));
/* 889c78: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 889c7b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 889c7e: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 889c81: call dword ptr [0xcfab94] */
  esp -= 4; W32(esp, 0x889c87u); SPILL(); f_4e2653(); if (g_unwind) return; /* Core!??0FScale@@QAE@ABVFVector@@MW4ESheerAxis@@@Z */ RELOAD();
/* 889c87: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 889c8d: mov eax, dword ptr [ebx + 0x78] */
  eax = R32((uint32_t)(ebx + 0x78u));
/* 889c90: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 889c93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 889c95: je 0x889ccb */
  if (zf) goto L_889ccb;
L_889c97: /* 889c97: lea edx, [esi + 0x170] */
  edx = (uint32_t)(esi + 0x170u);
/* 889c9d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 889c9e: lea eax, [ebp - 0xcc] */
  eax = (uint32_t)(ebp + 0xffffff34u);
/* 889ca4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 889ca5: call dword ptr [0xcfa2d4] */
  esp -= 4; W32(esp, 0x889cabu); SPILL(); f_4e4179(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 889cab: add esi, 0x17c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 889cb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 889cb2: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 889cb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 889cb6: mov ecx, eax */
  ecx = eax;
/* 889cb8: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x889cbeu); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 889cbe: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 889cc1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 889cc2: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 889cc8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 889cc9: jmp 0x889d3d */
  goto L_889d3d;
L_889ccb: /* 889ccb: fld dword ptr [esi + 0x29c] */
  { double v = F32((uint32_t)(esi + 0x29cu)); FPUSH(v); }
/* 889cd1: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 889cd4: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 889cda: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 889cdb: fld dword ptr [esi + 0x298] */
  { double v = F32((uint32_t)(esi + 0x298u)); FPUSH(v); }
/* 889ce1: lea eax, [ebp - 0x9c] */
  eax = (uint32_t)(ebp + 0xffffff64u);
/* 889ce7: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 889ced: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 889cee: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 889cf4: fadd dword ptr [esi + 0x294] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x294u)));
/* 889cfa: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 889cfd: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 889d00: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 889d03: call dword ptr [0xcfa2d4] */
  esp -= 4; W32(esp, 0x889d09u); SPILL(); f_4e4179(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 889d09: add esi, 0x17c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 889d0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 889d10: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 889d13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 889d14: mov ecx, eax */
  ecx = eax;
/* 889d16: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x889d1cu); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 889d1c: add edi, 0x90 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x90u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 889d22: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 889d23: lea edx, [ebp - 0xcc] */
  edx = (uint32_t)(ebp + 0xffffff34u);
/* 889d29: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 889d2a: mov ecx, eax */
  ecx = eax;
/* 889d2c: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x889d32u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 889d32: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 889d35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 889d36: lea edx, [ebp - 0xfc] */
  edx = (uint32_t)(ebp + 0xffffff04u);
/* 889d3c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_889d3d: /* 889d3d: mov ecx, eax */
  ecx = eax;
/* 889d3f: call dword ptr [0xcfa2f0] */
  esp -= 4; W32(esp, 0x889d45u); SPILL(); f_4e11b3(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFScale@@@Z */ RELOAD();
/* 889d45: mov esi, eax */
  esi = eax;
/* 889d47: lea edi, [ebx + 0x1d8] */
  edi = (uint32_t)(ebx + 0x1d8u);
/* 889d4d: mov ecx, 0xc */
  ecx = 0xcu;
/* 889d52: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 889d55: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 889d57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 889d58: mov ecx, ebx */
  ecx = ebx;
/* 889d5a: call 0x6c6b59 */
  esp -= 4; W32(esp, 0x889d5fu); SPILL(); f_6c6b59(); if (g_unwind) return; RELOAD();
/* 889d5f: lea ecx, [ebx + 0x1a8] */
  ecx = (uint32_t)(ebx + 0x1a8u);
/* 889d65: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 889d67: lea eax, [ebx + 0x1c0] */
  eax = (uint32_t)(ebx + 0x1c0u);
/* 889d6d: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 889d6f: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 889d72: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 889d75: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 889d78: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 889d7b: lea esi, [ebx + 0x270] */
  esi = (uint32_t)(ebx + 0x270u);
/* 889d81: lea edi, [ebx + 0x210] */
  edi = (uint32_t)(ebx + 0x210u);
/* 889d87: mov ecx, 0xc */
  ecx = 0xcu;
/* 889d8c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 889d8e: lea esi, [ebx + 0x2a0] */
  esi = (uint32_t)(ebx + 0x2a0u);
/* 889d94: lea edi, [ebx + 0x240] */
  edi = (uint32_t)(ebx + 0x240u);
/* 889d9a: mov ecx, 0xc */
  ecx = 0xcu;
/* 889d9f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 889da1: lea edx, [ebx + 0x1b4] */
  edx = (uint32_t)(ebx + 0x1b4u);
/* 889da7: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 889da9: lea eax, [ebx + 0x1cc] */
  eax = (uint32_t)(ebx + 0x1ccu);
/* 889daf: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 889db1: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 889db4: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 889db7: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 889dba: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 889dbd: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 889dc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 889dc1: mov ecx, ebx */
  ecx = ebx;
/* 889dc3: call 0x6c6b59 */
  esp -= 4; W32(esp, 0x889dc8u); SPILL(); f_6c6b59(); if (g_unwind) return; RELOAD();
/* 889dc8: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 889dca: mov ecx, ebx */
  ecx = ebx;
/* 889dcc: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x889dd2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 889dd2: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 889dd7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 889dd9: mov dword ptr [ebx + 0x1c0], ecx */
  W32((uint32_t)(ebx + 0x1c0u), ecx);
/* 889ddf: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 889de2: mov dword ptr [ebx + 0x1c4], edx */
  W32((uint32_t)(ebx + 0x1c4u), edx);
/* 889de8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 889deb: lea esi, [ebx + 0x270] */
  esi = (uint32_t)(ebx + 0x270u);
/* 889df1: lea edi, [ebx + 0x210] */
  edi = (uint32_t)(ebx + 0x210u);
/* 889df7: mov ecx, 0xc */
  ecx = 0xcu;
/* 889dfc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 889dfe: lea esi, [ebx + 0x2a0] */
  esi = (uint32_t)(ebx + 0x2a0u);
/* 889e04: lea edi, [ebx + 0x240] */
  edi = (uint32_t)(ebx + 0x240u);
/* 889e0a: mov ecx, 0xc */
  ecx = 0xcu;
/* 889e0f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 889e11: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 889e14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 889e15: mov dword ptr [ebx + 0x1c8], eax */
  W32((uint32_t)(ebx + 0x1c8u), eax);
/* 889e1b: mov dword ptr [ebx + 0x20c], 0 */
  W32((uint32_t)(ebx + 0x20cu), 0x0u);
/* 889e25: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 889e26: mov eax, 1 */
  eax = 0x1u;
/* 889e2b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 889e32: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 889e33: mov esp, ebp */
  esp = ebp;
/* 889e35: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 889e36: ret 4 */
  esp += 8; SPILL(); return;
}

void f_889e39(void) {
  LOAD_REGS();
L_889e39: /* 889e39: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 889e3c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 889e41: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 889e44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 889e45: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 889e48: call 0x99caf8 */
  esp -= 4; W32(esp, 0x889e4du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_889e4d(); return;
}

void f_889e4d(void) {
  LOAD_REGS();
L_889e4d: /* 889e4d: push 0xa19b98 */
  { uint32_t v = 0xa19b98u; esp -= 4; W32(esp, v); }
/* 889e52: push 0xae7d7c */
  { uint32_t v = 0xae7d7cu; esp -= 4; W32(esp, v); }
/* 889e57: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x889e5du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 889e5d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 889e60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889e62: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 889e64: call 0x99caf8 */
  esp -= 4; W32(esp, 0x889e69u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_889e69: guest_badaddr(0x889e69); return;
}

void f_889f20(void) {
  LOAD_REGS();
L_889f20: /* 889f20: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 889f21: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 889f25: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 889f27: jne 0x889f40 */
  if (!zf) goto L_889f40;
L_889f29: /* 889f29: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 889f2d: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 889f31: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 889f33: jl 0x889f38 */
  if ((sf != of)) goto L_889f38;
L_889f35: /* 889f35: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
L_889f38: /* 889f38: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 889f3c: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 889f3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 889f3f: ret  */
  esp += 4; SPILL(); return;
L_889f40: /* 889f40: cmp edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 889f43: jne 0x889f51 */
  if (!zf) goto L_889f51;
L_889f45: /* 889f45: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 889f49: mov dword ptr [edx], 0 */
  W32((uint32_t)(edx), 0x0u);
/* 889f4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 889f50: ret  */
  esp += 4; SPILL(); return;
L_889f51: /* 889f51: cmp edi, 0x1e */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 889f54: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 889f55: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 889f56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 889f57: jle 0x88a01a */
  if ((zf || sf != of)) goto L_88a01a;
L_889f5d: /* 889f5d: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 889f61: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 889f63: mov ecx, ebp */
  ecx = ebp;
/* 889f65: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x889f6bu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 889f6b: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 889f6e: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 889f72: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 889f74: jge 0x889f85 */
  if ((sf == of)) goto L_889f85;
L_889f76: /* 889f76: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 889f7a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 889f7b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 889f7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 889f7d: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 889f83: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 889f84: ret  */
  esp += 4; SPILL(); return;
L_889f85: /* 889f85: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* 889f89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 889f8a: mov ecx, ebp */
  ecx = ebp;
/* 889f8c: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x889f92u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 889f92: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 889f95: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 889f97: jle 0x88a05a */
  if ((zf || sf != of)) goto L_88a05a;
L_889f9d: /* 889f9d: mov esi, edi */
  esi = edi;
/* 889f9f: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 889fa1: mov ebx, esi */
  ebx = esi;
/* 889fa3: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 889fab: jmp 0x889fb0 */
  goto L_889fb0;
L_889fb0: /* 889fb0: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 889fb4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 889fb5: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 889fb8: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 889fbc: jle 0x889fc0 */
  if ((zf || sf != of)) goto L_889fc0;
L_889fbe: /* 889fbe: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
L_889fc0: /* 889fc0: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 889fc2: jge 0x88a00d */
  if ((sf == of)) goto L_88a00d;
L_889fc4: /* 889fc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 889fc5: mov ecx, ebp */
  ecx = ebp;
/* 889fc7: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x889fcdu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 889fcd: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 889fd0: cmp dword ptr [esp + 0x18], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 889fd4: jge 0x889fde */
  if ((sf == of)) goto L_889fde;
L_889fd6: /* 889fd6: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 889fd8: jns 0x889ffb */
  if (!sf) goto L_889ffb;
L_889fda: /* 889fda: xor esi, esi */
  esi = 0;
/* 889fdc: jmp 0x889ffb */
  goto L_889ffb;
L_889fde: /* 889fde: lea edx, [esi + 1] */
  edx = (uint32_t)(esi + 0x1u);
/* 889fe1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 889fe2: mov ecx, ebp */
  ecx = ebp;
/* 889fe4: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x889feau); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 889fea: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 889fed: cmp eax, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 889ff1: jg 0x88a00f */
  if ((!zf && sf == of)) goto L_88a00f;
L_889ff3: /* 889ff3: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 889ff5: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 889ff7: jle 0x889ffb */
  if ((zf || sf != of)) goto L_889ffb;
L_889ff9: /* 889ff9: mov esi, edi */
  esi = edi;
L_889ffb: /* 889ffb: cmp dword ptr [esp + 0x20], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88a000: jl 0x889fb0 */
  if ((sf != of)) goto L_889fb0;
L_88a002: /* 88a002: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 88a006: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 88a008: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88a009: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88a00a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88a00b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88a00c: ret  */
  esp += 4; SPILL(); return;
L_88a00d: /* 88a00d: mov esi, edi */
  esi = edi;
L_88a00f: /* 88a00f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 88a013: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 88a015: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88a016: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88a017: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88a018: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88a019: ret  */
  esp += 4; SPILL(); return;
L_88a01a: /* 88a01a: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 88a01e: xor esi, esi */
  esi = 0;
/* 88a020: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88a022: mov dword ptr [edx], 0xffffffff */
  W32((uint32_t)(edx), 0xffffffffu);
/* 88a028: jle 0x88a059 */
  if ((zf || sf != of)) goto L_88a059;
L_88a02a: /* 88a02a: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 88a02e: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
L_88a032: /* 88a032: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88a033: mov ecx, ebx */
  ecx = ebx;
/* 88a035: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x88a03bu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 88a03b: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 88a03e: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88a040: jl 0x88a049 */
  if ((sf != of)) goto L_88a049;
L_88a042: /* 88a042: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 88a043: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88a045: jl 0x88a032 */
  if ((sf != of)) goto L_88a032;
L_88a047: /* 88a047: jmp 0x88a050 */
  goto L_88a050;
L_88a049: /* 88a049: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 88a04d: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 88a04e: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
L_88a050: /* 88a050: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 88a054: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88a057: jge 0x88a060 */
  if ((sf == of)) goto L_88a060;
L_88a059: /* 88a059: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_88a05a: /* 88a05a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 88a05e: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
L_88a060: /* 88a060: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88a061: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88a062: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88a063: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88a064: ret  */
  esp += 4; SPILL(); return;
}

void f_889fad(void) {
  LOAD_REGS();
L_889fad: /* 889fad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_889fb0: /* 889fb0: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 889fb4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 889fb5: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 889fb8: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 889fbc: jle 0x889fc0 */
  if ((zf || sf != of)) goto L_889fc0;
L_889fbe: /* 889fbe: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
L_889fc0: /* 889fc0: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 889fc2: jge 0x88a00d */
  if ((sf == of)) goto L_88a00d;
L_889fc4: /* 889fc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 889fc5: mov ecx, ebp */
  ecx = ebp;
/* 889fc7: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x889fcdu); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 889fcd: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 889fd0: cmp dword ptr [esp + 0x18], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 889fd4: jge 0x889fde */
  if ((sf == of)) goto L_889fde;
L_889fd6: /* 889fd6: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 889fd8: jns 0x889ffb */
  if (!sf) goto L_889ffb;
L_889fda: /* 889fda: xor esi, esi */
  esi = 0;
/* 889fdc: jmp 0x889ffb */
  goto L_889ffb;
L_889fde: /* 889fde: lea edx, [esi + 1] */
  edx = (uint32_t)(esi + 0x1u);
/* 889fe1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 889fe2: mov ecx, ebp */
  ecx = ebp;
/* 889fe4: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x889feau); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 889fea: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 889fed: cmp eax, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 889ff1: jg 0x88a00f */
  if ((!zf && sf == of)) goto L_88a00f;
L_889ff3: /* 889ff3: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 889ff5: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 889ff7: jle 0x889ffb */
  if ((zf || sf != of)) goto L_889ffb;
L_889ff9: /* 889ff9: mov esi, edi */
  esi = edi;
L_889ffb: /* 889ffb: cmp dword ptr [esp + 0x20], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x20u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88a000: jl 0x889fb0 */
  if ((sf != of)) goto L_889fb0;
L_88a002: /* 88a002: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 88a006: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 88a008: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88a009: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88a00a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88a00b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88a00c: ret  */
  esp += 4; SPILL(); return;
L_88a00d: /* 88a00d: mov esi, edi */
  esi = edi;
L_88a00f: /* 88a00f: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 88a013: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 88a015: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88a016: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88a017: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88a018: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88a019: ret  */
  esp += 4; SPILL(); return;
}

void f_88a0d0(void) {
  LOAD_REGS();
L_88a0d0: /* 88a0d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88a0d1: mov ebp, esp */
  ebp = esp;
/* 88a0d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 88a0d5: push 0x9d54c0 */
  { uint32_t v = 0x9d54c0u; esp -= 4; W32(esp, v); }
/* 88a0da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 88a0e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a0e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 88a0e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88a0e9: mov eax, 0x2008 */
  eax = 0x2008u;
/* 88a0ee: call 0x99cc00 */
  esp -= 4; W32(esp, 0x88a0f3u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 88a0f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88a0f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88a0f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88a0f6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 88a0f9: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 88a0fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a0fd: lea ecx, [ebp - 0x2018] */
  ecx = (uint32_t)(ebp + 0xffffdfe8u);
/* 88a103: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 88a108: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88a109: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 88a110: call dword ptr [0xcfa7bc] */
  esp -= 4; W32(esp, 0x88a116u); SPILL(); f_4e3693(); if (g_unwind) return; /* Core!?appGetVarArgs@@YAHPAGHAAPBG@Z */ RELOAD();
/* 88a116: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 88a119: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 88a11c: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 88a11f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88a121: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 88a124: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a127: lea ecx, [ebp - 0x2018] */
  ecx = (uint32_t)(ebp + 0xffffdfe8u);
/* 88a12d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88a12e: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
/* 88a131: mov edx, dword ptr [esi + 0x6c] */
  edx = R32((uint32_t)(esi + 0x6cu));
/* 88a134: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88a136: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88a137: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88a138: call dword ptr [eax + 0x88] */
  { uint32_t t = R32((uint32_t)(eax + 0x88u)); esp -= 4; W32(esp, 0x88a13eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88a13e: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 88a141: fsub dword ptr [0xa0a848] */
  ST0 = ST0 - (F32((uint32_t)(0xa0a848u)));
/* 88a147: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88a14a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a14d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88a14e: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 88a151: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88a152: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88a159: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88a15a: mov esp, ebp */
  esp = ebp;
/* 88a15c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88a15d: ret  */
  esp += 4; SPILL(); return;
}

void f_88a15e(void) {
  LOAD_REGS();
L_88a15e: /* 88a15e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88a161: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 88a166: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 88a169: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88a16a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 88a16d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88a172u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_88a172(); return;
}

void f_88a172(void) {
  LOAD_REGS();
L_88a172: /* 88a172: push 0xa19bf4 */
  { uint32_t v = 0xa19bf4u; esp -= 4; W32(esp, v); }
/* 88a177: push 0xae7e04 */
  { uint32_t v = 0xae7e04u; esp -= 4; W32(esp, v); }
/* 88a17c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x88a182u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 88a182: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a185: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88a187: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88a189: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88a18eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_88a18e: guest_badaddr(0x88a18e); return;
}

void f_88a1c0(void) {
  LOAD_REGS();
L_88a1c0: /* 88a1c0: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88a1c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88a1c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88a1c5: mov edi, dword ptr [esp + 0x88] */
  edi = R32((uint32_t)(esp + 0x88u));
/* 88a1cc: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* 88a1d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a1d1: mov ecx, edi */
  ecx = edi;
/* 88a1d3: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x88a1d9u); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 88a1d9: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 88a1dd: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x88a1e3u); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 88a1e3: mov esi, dword ptr [esp + 0x8c] */
  esi = R32((uint32_t)(esp + 0x8cu));
/* 88a1ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88a1eb: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 88a1ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88a1f0: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* 88a1f4: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x88a1fau); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 88a1fa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 88a1fc: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 88a200: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 88a203: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 88a207: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 88a20a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88a20b: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 88a20f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a210: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* 88a214: mov dword ptr [esp + 0x3c], edx */
  W32((uint32_t)(esp + 0x3cu), edx);
/* 88a218: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x88a21eu); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 88a21e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 88a220: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* 88a224: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 88a227: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88a228: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 88a22c: mov dword ptr [esp + 0x40], edx */
  W32((uint32_t)(esp + 0x40u), edx);
/* 88a230: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 88a233: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88a234: lea ecx, [esp + 0x7c] */
  ecx = (uint32_t)(esp + 0x7cu);
/* 88a238: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* 88a23c: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x88a242u); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 88a242: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 88a244: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 88a246: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 88a248: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 88a24c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 88a24f: mov dword ptr [esp + 0x48], ecx */
  W32((uint32_t)(esp + 0x48u), ecx);
/* 88a253: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 88a256: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 88a25a: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 88a25d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88a25e: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 88a261: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 88a265: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a266: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 88a26a: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 88a26e: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 88a271: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 88a275: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 88a278: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 88a27c: call dword ptr [0xcfab98] */
  esp -= 4; W32(esp, 0x88a282u); SPILL(); f_4e3f99(); if (g_unwind) return; /* Core!?TransformVectorByTranspose@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 88a282: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 88a284: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 88a288: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 88a28b: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 88a28f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 88a292: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 88a296: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* 88a29d: mov ecx, 0xc */
  ecx = 0xcu;
/* 88a2a2: lea esi, [esp + 0x20] */
  esi = (uint32_t)(esp + 0x20u);
/* 88a2a6: mov edi, eax */
  edi = eax;
/* 88a2a8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 88a2aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88a2ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88a2ac: add esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a2af: ret  */
  esp += 4; SPILL(); return;
}

void f_88a2f0(void) {
  LOAD_REGS();
L_88a2f0: /* 88a2f0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 88a2f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88a2f5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88a2f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88a2f7: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 88a2fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88a2fe: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 88a302: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 88a305: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a306: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 88a309: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88a30a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88a30b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88a30c: lea ebx, [edi + 0xc] */
  ebx = (uint32_t)(edi + 0xcu);
/* 88a30f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88a311u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88a311: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a314: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a315: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88a317u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88a317: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a31a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a31b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88a31du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88a31d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a320: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 88a323: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88a324: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 88a327: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88a328: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88a329: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a32a: lea ebp, [edi + 0x18] */
  ebp = (uint32_t)(edi + 0x18u);
/* 88a32d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88a32fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88a32f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a332: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a333: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88a335u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88a335: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a338: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a339: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88a33bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88a33b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a33e: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 88a341: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88a342: lea edx, [ebp + 4] */
  edx = (uint32_t)(ebp + 0x4u);
/* 88a345: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88a346: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88a347: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a348: add edi, 0x24 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 88a34b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88a34du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88a34d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a350: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a351: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88a353u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88a353: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a356: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a357: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88a359u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88a359: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a35c: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 88a35f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88a360: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* 88a363: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88a364: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88a365: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a366: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88a368u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88a368: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a36b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a36c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88a36eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88a36e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a371: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a372: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88a374u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88a374: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a377: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88a378: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88a379: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88a37a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88a37b: ret  */
  esp += 4; SPILL(); return;
}

void f_88a3b0(void) {
  LOAD_REGS();
L_88a3b0: /* 88a3b0: inc dword ptr [ecx + 0x28] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x28u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x28u), r);
  }
/* 88a3b3: ret  */
  esp += 4; SPILL(); return;
}

void f_88a3d0(void) {
  LOAD_REGS();
L_88a3d0: /* 88a3d0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 88a3d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88a3d5: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 88a3db: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 88a3de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88a3df: lea edx, [eax + 8] */
  edx = (uint32_t)(eax + 0x8u);
/* 88a3e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88a3e3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 88a3e7: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 88a3ea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88a3eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a3ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88a3ed: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88a3efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88a3ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a3f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a3f3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88a3f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88a3f5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a3f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a3f9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88a3fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88a3fb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a3fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a3ff: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88a401u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88a401: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a404: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88a405: ret  */
  esp += 4; SPILL(); return;
}

void f_88a420(void) {
  LOAD_REGS();
L_88a420: /* 88a420: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88a424: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 88a426: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a427: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x88a42du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 88a42d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88a440(void) {
  LOAD_REGS();
L_88a440: /* 88a440: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88a444: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a445: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 88a447: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x88a44du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 88a44d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88a460(void) {
  LOAD_REGS();
L_88a460: /* 88a460: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88a464: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 88a466: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a467: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x88a46du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 88a46d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88a480(void) {
  LOAD_REGS();
L_88a480: /* 88a480: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88a484: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a485: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 88a487: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x88a48du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 88a48d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88a4a0(void) {
  LOAD_REGS();
L_88a4a0: /* 88a4a0: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 88a4a2: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x88a4a8u); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 88a4a8: ret  */
  esp += 4; SPILL(); return;
}

void f_88a4c0(void) {
  LOAD_REGS();
L_88a4c0: /* 88a4c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88a4c1: mov ebp, esp */
  ebp = esp;
/* 88a4c3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 88a4c6: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88a4c9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88a4ca: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 88a4cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88a4ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88a4cf: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 88a4d2: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 88a4d5: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 88a4d8: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 88a4db: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 88a4de: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88a4e0: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 88a4e3: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 88a4e6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88a4e8: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 88a4ea: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 88a4ec: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88a4ee: fst dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0);
/* 88a4f2: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 88a4f6: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88a4fc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88a4fe: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88a501: jp 0x88a50b */
  if (pf) goto L_88a50b;
L_88a503: /* 88a503: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88a505: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 88a509: fchs  */
  ST0 = -ST0;
L_88a50b: /* 88a50b: fcom dword ptr [0xa10cac] */
  fpu_com(ST0, F32((uint32_t)(0xa10cacu)));
/* 88a511: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88a513: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88a516: jp 0x88a572 */
  if (pf) goto L_88a572;
L_88a518: /* 88a518: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88a51b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 88a51e: call dword ptr [0xcfab9c] */
  esp -= 4; W32(esp, 0x88a524u); SPILL(); f_4e1212(); if (g_unwind) return; /* Core!?appAcos@@YANN@Z */ RELOAD();
/* 88a524: fst dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0);
/* 88a528: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 88a52b: call dword ptr [0xcfa614] */
  esp -= 4; W32(esp, 0x88a531u); SPILL(); f_4e3e0e(); if (g_unwind) return; /* Core!?appSin@@YANN@Z */ RELOAD();
/* 88a531: fdivr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) / ST0;
/* 88a537: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 88a53b: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 88a541: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 88a544: fmul dword ptr [esp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x20u)));
/* 88a548: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 88a54b: call dword ptr [0xcfa614] */
  esp -= 4; W32(esp, 0x88a551u); SPILL(); f_4e3e0e(); if (g_unwind) return; /* Core!?appSin@@YANN@Z */ RELOAD();
/* 88a551: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 88a555: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 88a559: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 88a55d: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 88a560: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 88a563: call dword ptr [0xcfa614] */
  esp -= 4; W32(esp, 0x88a569u); SPILL(); f_4e3e0e(); if (g_unwind) return; /* Core!?appSin@@YANN@Z */ RELOAD();
/* 88a569: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 88a56d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a570: jmp 0x88a584 */
  goto L_88a584;
L_88a572: /* 88a572: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88a574: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 88a57a: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 88a57d: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 88a581: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
L_88a584: /* 88a584: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 88a588: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88a58e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88a590: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88a593: jp 0x88a597 */
  if (pf) goto L_88a597;
L_88a595: /* 88a595: fchs  */
  ST0 = -ST0;
L_88a597: /* 88a597: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 88a59b: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 88a59e: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 88a5a0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 88a5a2: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 88a5a4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88a5a6: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 88a5a8: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 88a5ac: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 88a5af: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 88a5b1: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 88a5b4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88a5b6: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 88a5b9: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 88a5bd: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 88a5c0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 88a5c2: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 88a5c5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88a5c7: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 88a5ca: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 88a5cd: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 88a5d1: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 88a5d4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88a5d6: fst dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0);
/* 88a5d9: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 88a5dc: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 88a5df: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 88a5e1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 88a5e3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88a5e5: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 88a5e7: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 88a5e9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88a5eb: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 88a5ed: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 88a5ef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88a5f1: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 88a5f3: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 88a5f5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 88a5f7: fstp st(4) */
  STI(4) = ST0; FPOP();
/* 88a5f9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88a5fb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88a5fd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88a5ff: fcom dword ptr [0xa19c0c] */
  fpu_com(ST0, F32((uint32_t)(0xa19c0cu)));
/* 88a605: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88a607: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88a60a: jne 0x88a644 */
  if (!zf) goto L_88a644;
L_88a60c: /* 88a60c: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88a60f: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 88a612: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x88a618u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 88a618: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 88a61e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a621: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 88a623: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 88a625: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 88a627: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 88a629: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 88a62c: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 88a62f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 88a631: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 88a634: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 88a637: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 88a63a: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 88a63d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88a63e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88a63f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88a640: mov esp, ebp */
  esp = ebp;
/* 88a642: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88a643: ret  */
  esp += 4; SPILL(); return;
L_88a644: /* 88a644: xor eax, eax */
  eax = 0;
/* 88a646: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88a648: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88a649: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 88a64b: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 88a64e: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 88a651: mov dword ptr [esi + 0xc], 0x3f800000 */
  W32((uint32_t)(esi + 0xcu), 0x3f800000u);
/* 88a658: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88a659: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88a65a: mov esp, ebp */
  esp = ebp;
/* 88a65c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88a65d: ret  */
  esp += 4; SPILL(); return;
}

void f_88a6d0(void) {
  LOAD_REGS();
L_88a6d0: /* 88a6d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88a6d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a6d5: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 88a6d7: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x88a6ddu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 88a6dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88a6f0(void) {
  LOAD_REGS();
L_88a6f0: /* 88a6f0: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 88a6f2: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x88a6f8u); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 88a6f8: ret  */
  esp += 4; SPILL(); return;
}

void f_88a710(void) {
  LOAD_REGS();
L_88a710: /* 88a710: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88a713: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 88a717: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 88a719: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 88a71d: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 88a71f: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 88a722: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 88a724: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 88a727: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 88a729: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 88a72d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 88a72f: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 88a731: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 88a735: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 88a737: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 88a739: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 88a73d: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 88a741: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 88a743: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 88a747: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 88a749: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 88a74c: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 88a750: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 88a754: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 88a757: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 88a75b: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 88a75f: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 88a762: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 88a766: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 88a768: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 88a76b: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 88a76f: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 88a772: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 88a776: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 88a779: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 88a77d: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 88a781: fadd dword ptr [esp + 4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4u)));
/* 88a785: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 88a78b: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 88a78e: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* 88a792: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* 88a796: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 88a79c: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 88a79f: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 88a7a3: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* 88a7a7: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 88a7ad: fstp dword ptr [eax + 0x2c] */
  WF32((uint32_t)(eax + 0x2cu), ST0); FPOP();
/* 88a7b0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 88a7b4: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 88a7b6: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 88a7b9: fadd dword ptr [esp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xcu)));
/* 88a7bd: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 88a7c0: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 88a7c4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 88a7c6: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 88a7c9: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 88a7cd: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 88a7cf: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* 88a7d2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88a7d4: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 88a7d8: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 88a7dc: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 88a7df: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 88a7e3: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 88a7e7: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
/* 88a7ea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88a7ec: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 88a7ee: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 88a7f1: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 88a7f4: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 88a7f7: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 88a7fa: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88a7fd: ret  */
  esp += 4; SPILL(); return;
}

void f_88a840(void) {
  LOAD_REGS();
L_88a840: /* 88a840: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88a844: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a845: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 88a847: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x88a84du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 88a84d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88a860(void) {
  LOAD_REGS();
L_88a860: /* 88a860: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88a864: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 88a866: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 88a86a: cmp dword ptr [edx], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 88a86c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 88a86e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 88a86f: ret  */
  esp += 4; SPILL(); return;
}

void f_88a880(void) {
  LOAD_REGS();
L_88a880: /* 88a880: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88a884: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 88a886: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 88a88a: cmp ecx, dword ptr [edx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 88a88c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 88a88e: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 88a890: ret  */
  esp += 4; SPILL(); return;
}

void f_88a8b0(void) {
  LOAD_REGS();
L_88a8b0: /* 88a8b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88a8b4: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 88a8b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a8b7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x88a8bdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 88a8bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88a8d0(void) {
  LOAD_REGS();
L_88a8d0: /* 88a8d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88a8d4: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 88a8d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a8d7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x88a8ddu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 88a8dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88a8f0(void) {
  LOAD_REGS();
L_88a8f0: /* 88a8f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88a8f1: mov esi, ecx */
  esi = ecx;
/* 88a8f3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x88a8f9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 88a8f9: mov eax, esi */
  eax = esi;
/* 88a8fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88a8fc: ret  */
  esp += 4; SPILL(); return;
}

void f_88a910(void) {
  LOAD_REGS();
L_88a910: /* 88a910: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88a911: mov esi, ecx */
  esi = ecx;
/* 88a913: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x88a919u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 88a919: mov eax, esi */
  eax = esi;
/* 88a91b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88a91c: ret  */
  esp += 4; SPILL(); return;
}

void f_88a930(void) {
  LOAD_REGS();
L_88a930: /* 88a930: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88a931: mov esi, ecx */
  esi = ecx;
/* 88a933: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x88a939u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 88a939: mov eax, esi */
  eax = esi;
/* 88a93b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88a93c: ret  */
  esp += 4; SPILL(); return;
}

void f_88a950(void) {
  LOAD_REGS();
L_88a950: /* 88a950: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88a954: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 88a956: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 88a959: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* 88a95c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88a970(void) {
  LOAD_REGS();
L_88a970: /* 88a970: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88a974: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 88a976: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a977: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x88a97du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 88a97d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88a990(void) {
  LOAD_REGS();
L_88a990: /* 88a990: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88a991: mov esi, ecx */
  esi = ecx;
/* 88a993: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x88a999u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 88a999: mov eax, esi */
  eax = esi;
/* 88a99b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88a99c: ret  */
  esp += 4; SPILL(); return;
}

void f_88a9b0(void) {
  LOAD_REGS();
L_88a9b0: /* 88a9b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88a9b4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88a9b6: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 88a9b9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 88a9bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88a9d0(void) {
  LOAD_REGS();
L_88a9d0: /* 88a9d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88a9d4: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 88a9d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88a9d7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x88a9ddu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 88a9dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88a9f0(void) {
  LOAD_REGS();
L_88a9f0: /* 88a9f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88a9f1: mov esi, ecx */
  esi = ecx;
/* 88a9f3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x88a9f9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 88a9f9: mov eax, esi */
  eax = esi;
/* 88a9fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88a9fc: ret  */
  esp += 4; SPILL(); return;
}

void f_88aa10(void) {
  LOAD_REGS();
L_88aa10: /* 88aa10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88aa14: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88aa16: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 88aa19: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 88aa1b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88aa30(void) {
  LOAD_REGS();
L_88aa30: /* 88aa30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88aa34: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 88aa36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88aa37: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x88aa3du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 88aa3d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88aa50(void) {
  LOAD_REGS();
L_88aa50: /* 88aa50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88aa51: mov esi, ecx */
  esi = ecx;
/* 88aa53: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 88aa56: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x88aa5cu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 88aa5c: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 88aa5f: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x88aa65u); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 88aa65: mov eax, esi */
  eax = esi;
/* 88aa67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88aa68: ret  */
  esp += 4; SPILL(); return;
}

void f_88aa80(void) {
  LOAD_REGS();
L_88aa80: /* 88aa80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88aa81: mov esi, ecx */
  esi = ecx;
/* 88aa83: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 88aa86: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x88aa8cu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 88aa8c: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 88aa8f: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x88aa95u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 88aa95: mov eax, esi */
  eax = esi;
/* 88aa97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88aa98: ret  */
  esp += 4; SPILL(); return;
}

void f_88aab0(void) {
  LOAD_REGS();
L_88aab0: /* 88aab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88aab1: mov esi, ecx */
  esi = ecx;
/* 88aab3: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x88aab9u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 88aab9: mov eax, esi */
  eax = esi;
/* 88aabb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88aabc: ret  */
  esp += 4; SPILL(); return;
}

void f_88aad0(void) {
  LOAD_REGS();
L_88aad0: /* 88aad0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88aad1: mov esi, ecx */
  esi = ecx;
/* 88aad3: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x88aad9u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 88aad9: mov eax, esi */
  eax = esi;
/* 88aadb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88aadc: ret  */
  esp += 4; SPILL(); return;
}

void f_88aaf0(void) {
  LOAD_REGS();
L_88aaf0: /* 88aaf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88aaf1: mov esi, ecx */
  esi = ecx;
/* 88aaf3: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x88aaf9u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 88aaf9: mov eax, esi */
  eax = esi;
/* 88aafb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88aafc: ret  */
  esp += 4; SPILL(); return;
}

void f_88ab10(void) {
  LOAD_REGS();
L_88ab10: /* 88ab10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88ab11: mov esi, ecx */
  esi = ecx;
/* 88ab13: call dword ptr [0xcfa1dc] */
  esp -= 4; W32(esp, 0x88ab19u); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 88ab19: mov eax, esi */
  eax = esi;
/* 88ab1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88ab1c: ret  */
  esp += 4; SPILL(); return;
}

void f_88ab30(void) {
  LOAD_REGS();
L_88ab30: /* 88ab30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88ab31: mov esi, ecx */
  esi = ecx;
/* 88ab33: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x88ab39u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 88ab39: mov eax, esi */
  eax = esi;
/* 88ab3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88ab3c: ret  */
  esp += 4; SPILL(); return;
}

void f_88ab50(void) {
  LOAD_REGS();
L_88ab50: /* 88ab50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88ab51: mov esi, ecx */
  esi = ecx;
/* 88ab53: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x88ab59u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 88ab59: mov eax, esi */
  eax = esi;
/* 88ab5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88ab5c: ret  */
  esp += 4; SPILL(); return;
}

void f_88ab70(void) {
  LOAD_REGS();
L_88ab70: /* 88ab70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88ab71: mov esi, ecx */
  esi = ecx;
/* 88ab73: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x88ab79u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 88ab79: mov eax, esi */
  eax = esi;
/* 88ab7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88ab7c: ret  */
  esp += 4; SPILL(); return;
}

void f_88ab90(void) {
  LOAD_REGS();
L_88ab90: /* 88ab90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88ab94: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 88ab96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ab97: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88ab9du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88ab9d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88abb0(void) {
  LOAD_REGS();
L_88abb0: /* 88abb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88abb4: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 88abb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88abb7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88abbdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88abbd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88abd0(void) {
  LOAD_REGS();
L_88abd0: /* 88abd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88abd4: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 88abd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88abd7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88abddu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88abdd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88abf0(void) {
  LOAD_REGS();
L_88abf0: /* 88abf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88abf4: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 88abf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88abf7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88abfdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88abfd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88ac10(void) {
  LOAD_REGS();
L_88ac10: /* 88ac10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88ac14: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 88ac16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ac17: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88ac1du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88ac1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88ac30(void) {
  LOAD_REGS();
L_88ac30: /* 88ac30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88ac34: push 0x11c */
  { uint32_t v = 0x11cu; esp -= 4; W32(esp, v); }
/* 88ac39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ac3a: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88ac40u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88ac40: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88ac60(void) {
  LOAD_REGS();
L_88ac60: /* 88ac60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88ac64: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 88ac66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ac67: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88ac6du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88ac6d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88ac80(void) {
  LOAD_REGS();
L_88ac80: /* 88ac80: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88ac84: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 88ac86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ac87: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88ac8du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88ac8d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88aca0(void) {
  LOAD_REGS();
L_88aca0: /* 88aca0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88aca4: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 88aca6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88aca7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88acadu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88acad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88acc0(void) {
  LOAD_REGS();
L_88acc0: /* 88acc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88acc4: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 88acc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88acc7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88accdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88accd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88ace0(void) {
  LOAD_REGS();
L_88ace0: /* 88ace0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88ace4: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 88ace6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ace7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88acedu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88aced: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88ad00(void) {
  LOAD_REGS();
L_88ad00: /* 88ad00: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88ad04: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 88ad06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ad07: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88ad0du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88ad0d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88ad20(void) {
  LOAD_REGS();
L_88ad20: /* 88ad20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88ad24: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 88ad26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ad27: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88ad2du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88ad2d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88ad40(void) {
  LOAD_REGS();
L_88ad40: /* 88ad40: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88ad44: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 88ad46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ad47: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88ad4du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88ad4d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88ad60(void) {
  LOAD_REGS();
L_88ad60: /* 88ad60: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88ad64: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 88ad66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ad67: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88ad6du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88ad6d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88ad80(void) {
  LOAD_REGS();
L_88ad80: /* 88ad80: mov eax, 1 */
  eax = 0x1u;
/* 88ad85: ret  */
  esp += 4; SPILL(); return;
}

void f_88ada0(void) {
  LOAD_REGS();
L_88ada0: /* 88ada0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88ada1: mov esi, ecx */
  esi = ecx;
/* 88ada3: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x88ada9u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 88ada9: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88adae: je 0x88adbd */
  if (zf) goto L_88adbd;
L_88adb0: /* 88adb0: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 88adb5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 88adb7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88adb9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88adba: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x88adbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_88adbd: /* 88adbd: mov eax, esi */
  eax = esi;
/* 88adbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88adc0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88ade0(void) {
  LOAD_REGS();
L_88ade0: /* 88ade0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88ade4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88ade5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 88ade7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ade8: mov esi, ecx */
  esi = ecx;
/* 88adea: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x88adf0u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 88adf0: mov eax, esi */
  eax = esi;
/* 88adf2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88adf3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88ae10(void) {
  LOAD_REGS();
L_88ae10: /* 88ae10: mov eax, 1 */
  eax = 0x1u;
/* 88ae15: ret  */
  esp += 4; SPILL(); return;
}

void f_88ae30(void) {
  LOAD_REGS();
L_88ae30: /* 88ae30: mov eax, 1 */
  eax = 0x1u;
/* 88ae35: ret  */
  esp += 4; SPILL(); return;
}

void f_88ae50(void) {
  LOAD_REGS();
L_88ae50: /* 88ae50: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 88ae53: xor eax, eax */
  eax = 0;
/* 88ae55: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88ae57: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 88ae5a: ret  */
  esp += 4; SPILL(); return;
}

void f_88ae70(void) {
  LOAD_REGS();
L_88ae70: /* 88ae70: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 88ae73: ret  */
  esp += 4; SPILL(); return;
}

void f_88ae90(void) {
  LOAD_REGS();
L_88ae90: /* 88ae90: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 88ae93: ret  */
  esp += 4; SPILL(); return;
}

void f_88aeb0(void) {
  LOAD_REGS();
L_88aeb0: /* 88aeb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88aeb1: mov esi, ecx */
  esi = ecx;
/* 88aeb3: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88aeb6: je 0x88aefb */
  if (zf) goto L_88aefb;
L_88aeb8: /* 88aeb8: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 88aebb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88aebd: je 0x88aee3 */
  if (zf) goto L_88aee3;
L_88aebf: /* 88aebf: nop  */
L_88aec0: /* 88aec0: call dword ptr [0xcfaba0] */
  esp -= 4; W32(esp, 0x88aec6u); SPILL(); f_4e39f4(); if (g_unwind) return; /* Core!?StaticClass@UDelegateProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 88aec6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 88aec9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88aeca: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x88aed0u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 88aed0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88aed2: jne 0x88aefb */
  if (!zf) goto L_88aefb;
L_88aed4: /* 88aed4: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 88aed7: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 88aeda: mov eax, ecx */
  eax = ecx;
/* 88aedc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88aede: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 88aee1: jne 0x88aec0 */
  if (!zf) goto L_88aec0;
L_88aee3: /* 88aee3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 88aee5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88aee7: call dword ptr [edx + 0x7c] */
  { uint32_t t = R32((uint32_t)(edx + 0x7cu)); esp -= 4; W32(esp, 0x88aeeau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88aeea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88aeec: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 88aeee: je 0x88aef6 */
  if (zf) goto L_88aef6;
L_88aef0: /* 88aef0: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 88aef3: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
L_88aef6: /* 88aef6: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 88aef9: jne 0x88aeb8 */
  if (!zf) goto L_88aeb8;
L_88aefb: /* 88aefb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88aefc: ret  */
  esp += 4; SPILL(); return;
}

void f_88af20(void) {
  LOAD_REGS();
L_88af20: /* 88af20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88af21: mov esi, ecx */
  esi = ecx;
/* 88af23: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x88af29u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 88af29: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 88af2d: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 88af31: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 88af35: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 88af3b: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 88af41: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88af43: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88af46: jne 0x88af96 */
  if (!zf) goto L_88af96;
L_88af48: /* 88af48: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88af4b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 88af4e: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x88af54u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 88af54: fdivr qword ptr [0xa07e30] */
  ST0 = (F64((uint32_t)(0xa07e30u))) / ST0;
/* 88af5a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88af5d: mov eax, esi */
  eax = esi;
/* 88af5f: fld dword ptr [0xa0e1c0] */
  { double v = F32((uint32_t)(0xa0e1c0u)); FPUSH(v); }
/* 88af65: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 88af67: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 88af6a: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 88af6e: fsub dword ptr [esp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x28u)));
/* 88af72: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88af74: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 88af76: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 88af7a: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 88af7e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88af80: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 88af83: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 88af87: fsub dword ptr [esp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x18u)));
/* 88af8b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88af8d: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 88af90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88af91: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88af93: ret 0x30 */
  esp += 52; SPILL(); return;
L_88af96: /* 88af96: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88af98: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 88af9c: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* 88afa0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88afa2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88afa5: jne 0x88b016 */
  if (!zf) goto L_88b016;
L_88afa7: /* 88afa7: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 88afab: fcomp dword ptr [esp + 0x34] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x34u)));
  FPOP();
/* 88afaf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88afb1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88afb4: jne 0x88b016 */
  if (!zf) goto L_88b016;
L_88afb6: /* 88afb6: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 88afba: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88afbd: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 88afc3: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 88afc7: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 88afcb: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 88afce: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x88afd4u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 88afd4: fdivr qword ptr [0xa07e30] */
  ST0 = (F64((uint32_t)(0xa07e30u))) / ST0;
/* 88afda: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88afdd: mov eax, esi */
  eax = esi;
/* 88afdf: fld dword ptr [0x9f7194] */
  { double v = F32((uint32_t)(0x9f7194u)); FPUSH(v); }
/* 88afe5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88afe7: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 88afe9: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 88afed: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 88aff1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88aff3: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 88aff6: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 88affa: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 88affe: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88b000: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 88b003: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 88b007: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 88b00b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88b00d: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 88b010: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88b011: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88b013: ret 0x30 */
  esp += 52; SPILL(); return;
L_88b016: /* 88b016: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 88b01a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88b01d: fcomp dword ptr [esp + 0x3c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x3cu)));
  FPOP();
/* 88b021: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88b023: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88b026: jne 0x88b085 */
  if (!zf) goto L_88b085;
L_88b028: /* 88b028: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 88b02c: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 88b032: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 88b036: fsub dword ptr [esp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x3cu)));
/* 88b03a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 88b03d: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x88b043u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 88b043: fdivr qword ptr [0xa07e30] */
  ST0 = (F64((uint32_t)(0xa07e30u))) / ST0;
/* 88b049: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b04c: mov eax, esi */
  eax = esi;
/* 88b04e: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 88b052: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 88b056: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88b058: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 88b05a: fld dword ptr [0x9f7194] */
  { double v = F32((uint32_t)(0x9f7194u)); FPUSH(v); }
/* 88b060: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88b062: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 88b065: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 88b069: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 88b06d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88b06f: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 88b072: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 88b076: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 88b07a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88b07c: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 88b07f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88b080: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88b082: ret 0x30 */
  esp += 52; SPILL(); return;
L_88b085: /* 88b085: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 88b089: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 88b08f: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* 88b093: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 88b097: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 88b09a: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x88b0a0u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 88b0a0: fdivr qword ptr [0xa07e30] */
  ST0 = (F64((uint32_t)(0xa07e30u))) / ST0;
/* 88b0a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b0a9: mov eax, esi */
  eax = esi;
/* 88b0ab: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 88b0af: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 88b0b3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88b0b5: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 88b0b7: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 88b0bb: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 88b0bf: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88b0c1: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* 88b0c4: fld dword ptr [0x9f7194] */
  { double v = F32((uint32_t)(0x9f7194u)); FPUSH(v); }
/* 88b0ca: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88b0cc: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* 88b0cf: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 88b0d3: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 88b0d7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88b0d9: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 88b0dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88b0dd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88b0df: ret 0x30 */
  esp += 52; SPILL(); return;
}

void f_88b170(void) {
  LOAD_REGS();
L_88b170: /* 88b170: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88b173: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b174: mov esi, ecx */
  esi = ecx;
/* 88b176: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x88b17cu); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 88b17c: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 88b180: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 88b182: xor eax, eax */
  eax = 0;
/* 88b184: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 88b188: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 88b18a: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 88b18c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 88b18f: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 88b193: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 88b196: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 88b198: mov eax, esi */
  eax = esi;
/* 88b19a: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 88b19e: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 88b1a2: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 88b1a4: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 88b1a8: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 88b1ac: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88b1ae: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 88b1b2: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 88b1b6: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 88b1ba: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 88b1be: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 88b1c2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88b1c4: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 88b1c8: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 88b1cc: fmul dword ptr [esp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x2cu)));
/* 88b1d0: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 88b1d4: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 88b1d8: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 88b1dc: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 88b1e0: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 88b1e4: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 88b1e6: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 88b1ea: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 88b1ee: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 88b1f0: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 88b1f2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88b1f4: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 88b1f8: fmul dword ptr [esp + 4] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4u)));
/* 88b1fc: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 88b200: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 88b204: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 88b20a: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* 88b20d: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 88b211: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 88b213: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* 88b216: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 88b218: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 88b21c: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* 88b21f: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* 88b223: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* 88b226: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 88b22a: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 88b22e: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 88b234: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
/* 88b237: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 88b23b: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 88b23f: fstp dword ptr [esi + 0x20] */
  WF32((uint32_t)(esi + 0x20u), ST0); FPOP();
/* 88b242: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 88b246: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 88b248: fstp dword ptr [esi + 0x24] */
  WF32((uint32_t)(esi + 0x24u), ST0); FPOP();
/* 88b24b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88b24d: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 88b251: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 88b255: fstp dword ptr [esi + 0x28] */
  WF32((uint32_t)(esi + 0x28u), ST0); FPOP();
/* 88b258: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 88b25c: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 88b260: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 88b266: fstp dword ptr [esi + 0x2c] */
  WF32((uint32_t)(esi + 0x2cu), ST0); FPOP();
/* 88b269: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88b26a: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b26d: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_88b2b0(void) {
  LOAD_REGS();
L_88b2b0: /* 88b2b0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 88b2b4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 88b2b8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 88b2ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b2bb: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x88b2beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b2be: ret  */
  esp += 4; SPILL(); return;
}

void f_88b2d0(void) {
  LOAD_REGS();
L_88b2d0: /* 88b2d0: mov eax, ecx */
  eax = ecx;
/* 88b2d2: ret  */
  esp += 4; SPILL(); return;
}

void f_88b2f0(void) {
  LOAD_REGS();
L_88b2f0: /* 88b2f0: mov eax, ecx */
  eax = ecx;
/* 88b2f2: ret  */
  esp += 4; SPILL(); return;
}

void f_88b310(void) {
  LOAD_REGS();
L_88b310: /* 88b310: jmp dword ptr [0xcfa27c] */
  SPILL(); f_4e4165(); return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */
}

void f_88b330(void) {
  LOAD_REGS();
L_88b330: /* 88b330: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88b333: movzx eax, word ptr [ecx] */
  eax = (uint32_t)(R16((uint32_t)(ecx)));
/* 88b336: movzx edx, word ptr [ecx + 2] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x2u)));
/* 88b33a: sub eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 88b33f: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 88b343: movzx eax, word ptr [ecx + 4] */
  eax = (uint32_t)(R16((uint32_t)(ecx + 0x4u)));
/* 88b347: fild dword ptr [esp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 88b34b: sub edx, 0x7fff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 88b351: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* 88b355: fmul dword ptr [0xa19c10] */
  ST0 = ST0 * (F32((uint32_t)(0xa19c10u)));
/* 88b35b: sub eax, 0x7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 88b360: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 88b364: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b365: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 88b369: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88b36c: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 88b370: fmul dword ptr [0xa19c10] */
  ST0 = ST0 * (F32((uint32_t)(0xa19c10u)));
/* 88b376: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 88b37a: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 88b37e: fmul dword ptr [0xa19c10] */
  ST0 = ST0 * (F32((uint32_t)(0xa19c10u)));
/* 88b384: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 88b388: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 88b38c: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 88b390: fsubr qword ptr [0xa0da58] */
  ST0 = (F64((uint32_t)(0xa0da58u))) - ST0;
/* 88b396: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 88b39a: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 88b39e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 88b3a0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 88b3a4: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 88b3a8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 88b3aa: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 88b3ad: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x88b3b3u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 88b3b3: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 88b3b7: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 88b3bb: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 88b3bf: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 88b3c3: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 88b3c7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b3ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b3cb: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 88b3cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b3d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b3d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b3d2: mov ecx, esi */
  ecx = esi;
/* 88b3d4: call dword ptr [0xcfa358] */
  esp -= 4; W32(esp, 0x88b3dau); SPILL(); f_4e3864(); if (g_unwind) return; /* Core!??0FQuat@@QAE@MMMM@Z */ RELOAD();
/* 88b3da: mov eax, esi */
  eax = esi;
/* 88b3dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88b3dd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b3e0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88b420(void) {
  LOAD_REGS();
L_88b420: /* 88b420: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88b421: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 88b425: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b426: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 88b42a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88b42b: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 88b431: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* 88b434: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b435: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 88b438: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b439: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b43a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88b43b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x88b43du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b43d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b440: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b441: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x88b443u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b443: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b446: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b447: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x88b449u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b449: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 88b44c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b44d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b44e: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x88b454u); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 88b454: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b457: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88b458: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88b459: mov eax, ebx */
  eax = ebx;
/* 88b45b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88b45c: ret  */
  esp += 4; SPILL(); return;
}

void f_88b470(void) {
  LOAD_REGS();
L_88b470: /* 88b470: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 88b474: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b475: mov esi, dword ptr [0xcfa354] */
  esi = R32((uint32_t)(0xcfa354u));
/* 88b47b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88b47c: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 88b480: lea ecx, [eax + 0x12] */
  ecx = (uint32_t)(eax + 0x12u);
/* 88b483: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b484: lea edx, [eax + 0x10] */
  edx = (uint32_t)(eax + 0x10u);
/* 88b487: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b488: lea ecx, [eax + 0xe] */
  ecx = (uint32_t)(eax + 0xeu);
/* 88b48b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b48c: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 88b48f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b490: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 88b493: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b494: lea edx, [eax + 6] */
  edx = (uint32_t)(eax + 0x6u);
/* 88b497: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b498: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 88b49b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b49c: lea edx, [eax + 2] */
  edx = (uint32_t)(eax + 0x2u);
/* 88b49f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b4a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b4a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88b4a2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b4a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b4a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b4a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b4a8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b4aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b4aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b4ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b4ae: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b4b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b4b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b4b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b4b4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b4b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b4b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b4b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b4ba: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b4bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b4bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b4bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b4c0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b4c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b4c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b4c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b4c6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b4c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b4c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b4cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b4cc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b4ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b4ce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b4d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b4d2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b4d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b4d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b4d7: mov eax, edi */
  eax = edi;
/* 88b4d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88b4da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88b4db: ret  */
  esp += 4; SPILL(); return;
}

void f_88b500(void) {
  LOAD_REGS();
L_88b500: /* 88b500: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b501: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 88b505: mov ecx, esi */
  ecx = esi;
/* 88b507: call dword ptr [0xcfa42c] */
  esp -= 4; W32(esp, 0x88b50du); SPILL(); f_4e4101(); if (g_unwind) return; /* Core!?IsPersistent@FArchive@@QAEHXZ */ RELOAD();
/* 88b50d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88b50f: jne 0x88b604 */
  if (!zf) goto L_88b604;
L_88b515: /* 88b515: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88b517: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88b518: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88b519: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88b51a: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 88b51e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88b51f: mov ecx, esi */
  ecx = esi;
/* 88b521: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x88b524u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b524: mov ebp, dword ptr [0xcfa280] */
  ebp = R32((uint32_t)(0xcfa280u));
/* 88b52a: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 88b52d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b52e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b52f: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x88b531u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b531: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88b533: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b536: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 88b539: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b53a: mov ecx, esi */
  ecx = esi;
/* 88b53c: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x88b53fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b53f: mov ebx, dword ptr [0xcfa1b4] */
  ebx = R32((uint32_t)(0xcfa1b4u));
/* 88b545: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 88b548: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b549: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b54a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x88b54cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b54c: lea edx, [edi + 0x10] */
  edx = (uint32_t)(edi + 0x10u);
/* 88b54f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b550: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b551: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x88b553u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b553: lea eax, [edi + 0x14] */
  eax = (uint32_t)(edi + 0x14u);
/* 88b556: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b557: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b558: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x88b55au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b55a: lea ecx, [edi + 0x18] */
  ecx = (uint32_t)(edi + 0x18u);
/* 88b55d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b55e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b55f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x88b561u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b561: lea edx, [edi + 0x1c] */
  edx = (uint32_t)(edi + 0x1cu);
/* 88b564: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b565: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b566: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x88b568u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b568: lea eax, [edi + 0x20] */
  eax = (uint32_t)(edi + 0x20u);
/* 88b56b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b56c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b56d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x88b56fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b56f: lea ecx, [edi + 0x24] */
  ecx = (uint32_t)(edi + 0x24u);
/* 88b572: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b573: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b574: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x88b576u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b576: lea edx, [edi + 0x28] */
  edx = (uint32_t)(edi + 0x28u);
/* 88b579: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b57a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b57b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x88b57du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b57d: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b580: lea eax, [edi + 0x2c] */
  eax = (uint32_t)(edi + 0x2cu);
/* 88b583: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b584: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b585: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x88b587u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b587: lea ecx, [edi + 0x30] */
  ecx = (uint32_t)(edi + 0x30u);
/* 88b58a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b58b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b58c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x88b58eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b58e: lea edx, [edi + 0x34] */
  edx = (uint32_t)(edi + 0x34u);
/* 88b591: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b592: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b593: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x88b595u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b595: lea eax, [edi + 0x38] */
  eax = (uint32_t)(edi + 0x38u);
/* 88b598: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b599: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b59a: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x88b59cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b59c: lea ecx, [edi + 0x3c] */
  ecx = (uint32_t)(edi + 0x3cu);
/* 88b59f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b5a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b5a1: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x88b5a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b5a3: lea edx, [edi + 0x40] */
  edx = (uint32_t)(edi + 0x40u);
/* 88b5a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b5a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b5a8: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x88b5aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b5aa: lea eax, [edi + 0x44] */
  eax = (uint32_t)(edi + 0x44u);
/* 88b5ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b5ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b5af: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x88b5b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b5b1: lea ecx, [edi + 0x48] */
  ecx = (uint32_t)(edi + 0x48u);
/* 88b5b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b5b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b5b6: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x88b5b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b5b8: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b5bb: lea edx, [edi + 0x4c] */
  edx = (uint32_t)(edi + 0x4cu);
/* 88b5be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b5bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b5c0: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x88b5c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b5c2: lea eax, [edi + 0x50] */
  eax = (uint32_t)(edi + 0x50u);
/* 88b5c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b5c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b5c7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x88b5c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b5c9: lea ecx, [edi + 0x54] */
  ecx = (uint32_t)(edi + 0x54u);
/* 88b5cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b5cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b5ce: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x88b5d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b5d0: lea edx, [edi + 0x5c] */
  edx = (uint32_t)(edi + 0x5cu);
/* 88b5d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b5d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b5d5: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x88b5d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b5d7: lea eax, [edi + 0x58] */
  eax = (uint32_t)(edi + 0x58u);
/* 88b5da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b5db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b5dc: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x88b5deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b5de: lea ecx, [edi + 0x60] */
  ecx = (uint32_t)(edi + 0x60u);
/* 88b5e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b5e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b5e3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x88b5e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b5e5: lea edx, [edi + 0x64] */
  edx = (uint32_t)(edi + 0x64u);
/* 88b5e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b5e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b5ea: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x88b5ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b5ec: lea eax, [edi + 0x68] */
  eax = (uint32_t)(edi + 0x68u);
/* 88b5ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b5f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b5f1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x88b5f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b5f3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88b5f5: add esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b5f8: add edi, 0x6c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 88b5fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88b5fc: mov ecx, esi */
  ecx = esi;
/* 88b5fe: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x88b601u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b601: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88b602: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88b603: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_88b604: /* 88b604: mov eax, esi */
  eax = esi;
/* 88b606: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88b607: ret  */
  esp += 4; SPILL(); return;
}

void f_88b660(void) {
  LOAD_REGS();
L_88b660: /* 88b660: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88b664: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b665: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 88b669: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b66a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b66b: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x88b671u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 88b671: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b674: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 88b677: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b678: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 88b67b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b67c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 88b67e: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 88b681: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b682: mov ecx, eax */
  ecx = eax;
/* 88b684: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x88b687u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b687: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b688: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x88b68eu); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 88b68e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b691: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b692: call 0x6c97d2 */
  esp -= 4; W32(esp, 0x88b697u); SPILL(); f_6c97d2(); if (g_unwind) return; RELOAD();
/* 88b697: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b69a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88b69b: ret  */
  esp += 4; SPILL(); return;
}

void f_88b6b0(void) {
  LOAD_REGS();
L_88b6b0: /* 88b6b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88b6b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88b6b5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88b6b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b6b7: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 88b6bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88b6bc: mov edi, dword ptr [0xcfa280] */
  edi = R32((uint32_t)(0xcfa280u));
/* 88b6c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b6c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b6c4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x88b6c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b6c6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 88b6c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b6cb: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 88b6ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b6cf: mov ecx, eax */
  ecx = eax;
/* 88b6d1: lea ebx, [esi + 8] */
  ebx = (uint32_t)(esi + 0x8u);
/* 88b6d4: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x88b6d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b6d7: lea edx, [ebx + 8] */
  edx = (uint32_t)(ebx + 0x8u);
/* 88b6da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b6db: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 88b6de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b6df: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88b6e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b6e1: lea ebp, [esi + 0x14] */
  ebp = (uint32_t)(esi + 0x14u);
/* 88b6e4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x88b6e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b6e6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b6e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b6ea: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x88b6ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b6ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b6ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b6f0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x88b6f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b6f2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b6f5: lea edx, [esi + 0x28] */
  edx = (uint32_t)(esi + 0x28u);
/* 88b6f8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b6f9: add esi, 0x24 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 88b6fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b6fd: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 88b703: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 88b706: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b707: lea edx, [ebp + 4] */
  edx = (uint32_t)(ebp + 0x4u);
/* 88b70a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b70b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88b70c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b70d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b70fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b70f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b712: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b713: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b715u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b715: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b718: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b719: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b71bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b71b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b71e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b71f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b721u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b721: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b724: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b725: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b727u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b727: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b72a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88b72b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88b72c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88b72d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88b72e: ret  */
  esp += 4; SPILL(); return;
}

void f_88b750(void) {
  LOAD_REGS();
L_88b750: /* 88b750: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88b751: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b752: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 88b758: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88b759: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 88b75d: lea eax, [edi + 0xc] */
  eax = (uint32_t)(edi + 0xcu);
/* 88b760: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b761: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 88b765: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 88b768: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b769: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* 88b76c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b76d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88b76e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b76f: lea ebx, [edi + 0x10] */
  ebx = (uint32_t)(edi + 0x10u);
/* 88b772: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b774u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b774: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b777: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b778: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b77au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b77a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b77d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b77e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b780u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b780: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b783: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b784: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b786u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b786: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b789: lea edx, [edi + 0x28] */
  edx = (uint32_t)(edi + 0x28u);
/* 88b78c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b78d: lea ecx, [edi + 0x20] */
  ecx = (uint32_t)(edi + 0x20u);
/* 88b790: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b791: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b792: add edi, 0x1c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 88b795: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88b796: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 88b799: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b79a: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 88b79d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b79e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88b79f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b7a0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b7a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b7a2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b7a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b7a6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b7a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b7a8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b7ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b7ac: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b7aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b7ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b7b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b7b2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b7b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b7b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b7b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b7b8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b7bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b7ba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b7bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b7be: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b7c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b7c0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b7c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b7c4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b7c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b7c6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b7c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88b7ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88b7cb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88b7cc: ret  */
  esp += 4; SPILL(); return;
}

void f_88b7f0(void) {
  LOAD_REGS();
L_88b7f0: /* 88b7f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 88b7f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b7f5: mov esi, dword ptr [0xcfa354] */
  esi = R32((uint32_t)(0xcfa354u));
/* 88b7fb: lea ecx, [eax + 0xe] */
  ecx = (uint32_t)(eax + 0xeu);
/* 88b7fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b7ff: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 88b802: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b803: lea ecx, [eax + 0xa] */
  ecx = (uint32_t)(eax + 0xau);
/* 88b806: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b807: lea edx, [eax + 8] */
  edx = (uint32_t)(eax + 0x8u);
/* 88b80a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b80b: lea ecx, [eax + 6] */
  ecx = (uint32_t)(eax + 0x6u);
/* 88b80e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b80f: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 88b812: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b813: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 88b817: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 88b81a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b81b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b81c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b81d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b81fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b81f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b822: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b823: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b825u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b825: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b828: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b829: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b82bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b82b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b82e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b82f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b831u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b831: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b834: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b835: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b837u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b837: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b83a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b83b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b83du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b83d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b841: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b843u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b843: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b846: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b847: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b849u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b849: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b84c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88b84d: ret  */
  esp += 4; SPILL(); return;
}

void f_88b870(void) {
  LOAD_REGS();
L_88b870: /* 88b870: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 88b874: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b875: lea ecx, [eax + 0x34] */
  ecx = (uint32_t)(eax + 0x34u);
/* 88b878: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b879: lea edx, [eax + 0x38] */
  edx = (uint32_t)(eax + 0x38u);
/* 88b87c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b87d: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 88b880: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b881: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 88b885: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 88b888: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b889: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88b88b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b88c: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x88b88fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b88f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b890: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x88b896u); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 88b896: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b899: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b89a: call 0x6c6e88 */
  esp -= 4; W32(esp, 0x88b89fu); SPILL(); f_6c6e88(); if (g_unwind) return; RELOAD();
/* 88b89f: mov esi, dword ptr [0xcfa280] */
  esi = R32((uint32_t)(0xcfa280u));
/* 88b8a5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b8a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b8a9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b8abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b8ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b8ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b8af: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b8b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b8b1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b8b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88b8b5: ret  */
  esp += 4; SPILL(); return;
}

void f_88b8e0(void) {
  LOAD_REGS();
L_88b8e0: /* 88b8e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 88b8e4: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 88b8e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b8e8: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 88b8ec: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 88b8ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b8f0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 88b8f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b8f3: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x88b8f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b8f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b8f7: call dword ptr [0xcfa27c] */
  esp -= 4; W32(esp, 0x88b8fdu); SPILL(); f_4e4165(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAK@Z */ RELOAD();
/* 88b8fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b900: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b901: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x88b907u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 88b907: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b90a: ret  */
  esp += 4; SPILL(); return;
}

void f_88b920(void) {
  LOAD_REGS();
L_88b920: /* 88b920: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 88b924: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 88b928: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b929: mov esi, dword ptr [0xcfa354] */
  esi = R32((uint32_t)(0xcfa354u));
/* 88b92f: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 88b932: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b933: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b934: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b935: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b937u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b937: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b93a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b93b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b93du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b93d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b940: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88b941: ret  */
  esp += 4; SPILL(); return;
}

void f_88b960(void) {
  LOAD_REGS();
L_88b960: /* 88b960: mov eax, ecx */
  eax = ecx;
/* 88b962: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 88b968: ret  */
  esp += 4; SPILL(); return;
}

void f_88b980(void) {
  LOAD_REGS();
L_88b980: /* 88b980: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 88b984: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b985: lea ecx, [eax + 6] */
  ecx = (uint32_t)(eax + 0x6u);
/* 88b988: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b989: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 88b98c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b98d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b98e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 88b992: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b993: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x88b999u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 88b999: mov esi, dword ptr [0xcfa354] */
  esi = R32((uint32_t)(0xcfa354u));
/* 88b99f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b9a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b9a3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b9a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b9a5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b9a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b9a9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b9abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b9ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b9ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88b9af: ret  */
  esp += 4; SPILL(); return;
}

void f_88b9c0(void) {
  LOAD_REGS();
L_88b9c0: /* 88b9c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88b9c1: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 88b9c5: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 88b9c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b9c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88b9c9: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 88b9cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88b9ce: mov ecx, ebx */
  ecx = ebx;
/* 88b9d0: lea esi, [edi + 4] */
  esi = (uint32_t)(edi + 0x4u);
/* 88b9d3: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x88b9d6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b9d6: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 88b9d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88b9da: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 88b9dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88b9de: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 88b9e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88b9e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88b9e3: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 88b9e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b9ea: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b9ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b9ec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b9ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b9f0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b9f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b9f2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b9f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b9f6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b9f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b9f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88b9fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88b9fc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88b9feu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88b9fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88ba01: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88ba02: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88ba03: mov eax, ebx */
  eax = ebx;
/* 88ba05: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88ba06: ret  */
  esp += 4; SPILL(); return;
}

void f_88ba30(void) {
  LOAD_REGS();
L_88ba30: /* 88ba30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88ba31: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 88ba35: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 88ba37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88ba38: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88ba39: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 88ba3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88ba3e: mov ecx, ebx */
  ecx = ebx;
/* 88ba40: lea esi, [edi + 4] */
  esi = (uint32_t)(edi + 0x4u);
/* 88ba43: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x88ba46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88ba46: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 88ba49: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88ba4a: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 88ba4d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88ba4e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88ba4f: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 88ba55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ba56: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 88ba59: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88ba5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88ba5b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88ba5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ba5f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88ba61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88ba61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88ba64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ba65: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88ba67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88ba67: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88ba6a: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 88ba6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88ba6e: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* 88ba71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88ba72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88ba73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ba74: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88ba76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88ba76: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88ba79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ba7a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88ba7cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88ba7c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88ba7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88ba80: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x88ba82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88ba82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88ba85: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88ba86: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88ba87: mov eax, ebx */
  eax = ebx;
/* 88ba89: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88ba8a: ret  */
  esp += 4; SPILL(); return;
}

void f_88bab0(void) {
  LOAD_REGS();
L_88bab0: /* 88bab0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 88bab4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 88bab8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 88baba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88babb: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x88babeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88babe: ret  */
  esp += 4; SPILL(); return;
}

void f_88bad0(void) {
  LOAD_REGS();
L_88bad0: /* 88bad0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 88bad4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 88bad8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 88bada: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88badb: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x88badeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88bade: ret  */
  esp += 4; SPILL(); return;
}

void f_88baf0(void) {
  LOAD_REGS();
L_88baf0: /* 88baf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88baf1: mov esi, ecx */
  esi = ecx;
/* 88baf3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x88baf9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 88baf9: mov eax, esi */
  eax = esi;
/* 88bafb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88bafc: ret  */
  esp += 4; SPILL(); return;
}

void f_88bb10(void) {
  LOAD_REGS();
L_88bb10: /* 88bb10: mov eax, ecx */
  eax = ecx;
/* 88bb12: ret  */
  esp += 4; SPILL(); return;
}

void f_88bb30(void) {
  LOAD_REGS();
L_88bb30: /* 88bb30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88bb34: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 88bb36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88bb37: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88bb3du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88bb3d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88bb50(void) {
  LOAD_REGS();
L_88bb50: /* 88bb50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88bb54: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 88bb56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88bb57: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88bb5du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88bb5d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88bb70(void) {
  LOAD_REGS();
L_88bb70: /* 88bb70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88bb74: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 88bb76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88bb77: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88bb7du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88bb7d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88bb90(void) {
  LOAD_REGS();
L_88bb90: /* 88bb90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88bb94: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 88bb96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88bb97: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88bb9du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88bb9d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88bbb0(void) {
  LOAD_REGS();
L_88bbb0: /* 88bbb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88bbb4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 88bbb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88bbb7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88bbbdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88bbbd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88bbd0(void) {
  LOAD_REGS();
L_88bbd0: /* 88bbd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88bbd4: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 88bbd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88bbd7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88bbddu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88bbdd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88bbf0(void) {
  LOAD_REGS();
L_88bbf0: /* 88bbf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88bbf4: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 88bbf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88bbf7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88bbfdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88bbfd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88bc10(void) {
  LOAD_REGS();
L_88bc10: /* 88bc10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88bc14: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 88bc16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88bc17: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88bc1du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88bc1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88bc30(void) {
  LOAD_REGS();
L_88bc30: /* 88bc30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88bc34: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 88bc36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88bc37: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x88bc3du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 88bc3d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88bc50(void) {
  LOAD_REGS();
L_88bc50: /* 88bc50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88bc51: mov ebp, esp */
  ebp = esp;
/* 88bc53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 88bc55: push 0x9d54d0 */
  { uint32_t v = 0x9d54d0u; esp -= 4; W32(esp, v); }
/* 88bc5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 88bc60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88bc61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 88bc68: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88bc6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88bc6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88bc6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88bc6e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 88bc71: mov edi, ecx */
  edi = ecx;
/* 88bc73: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 88bc7a: call dword ptr [0xcfa230] */
  esp -= 4; W32(esp, 0x88bc80u); SPILL(); f_4e4110(); if (g_unwind) return; /* Core!?PostLoad@UObject@@UAEXXZ */ RELOAD();
/* 88bc80: xor ebx, ebx */
  ebx = 0;
L_88bc82: /* 88bc82: cmp ebx, dword ptr [edi + 0x48] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88bc85: jge 0x88bcd4 */
  if ((sf == of)) goto L_88bcd4;
L_88bc87: /* 88bc87: mov eax, dword ptr [edi + 0x44] */
  eax = R32((uint32_t)(edi + 0x44u));
/* 88bc8a: mov esi, ebx */
  esi = ebx;
/* 88bc8c: imul esi, esi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x2cu);
  esi = (uint32_t)r;
  }
/* 88bc8f: mov ecx, edi */
  ecx = edi;
/* 88bc91: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 88bc93: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x88bc99u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 88bc99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88bc9a: mov ecx, esi */
  ecx = esi;
/* 88bc9c: call 0x6c6b6d */
  esp -= 4; W32(esp, 0x88bca1u); SPILL(); f_6c6b6d(); if (g_unwind) return; RELOAD();
/* 88bca1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 88bca2: jmp 0x88bc82 */
  goto L_88bc82;
L_88bcd4: /* 88bcd4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88bcd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88bcd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88bcd9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88bce0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88bce1: mov esp, ebp */
  esp = ebp;
/* 88bce3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88bce4: ret  */
  esp += 4; SPILL(); return;
}

void f_88bca4(void) {
  LOAD_REGS();
L_88bca4: /* 88bca4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88bca7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 88bcac: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 88bcaf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88bcb0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 88bcb3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88bcb8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_88bcb8(); return;
}

void f_88bcb8(void) {
  LOAD_REGS();
L_88bcb8: /* 88bcb8: push 0xa19c14 */
  { uint32_t v = 0xa19c14u; esp -= 4; W32(esp, v); }
/* 88bcbd: push 0xae7544 */
  { uint32_t v = 0xae7544u; esp -= 4; W32(esp, v); }
/* 88bcc2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x88bcc8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 88bcc8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88bccb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88bccd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88bccf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88bcd4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 88bcd4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88bcd7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88bcd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88bcd9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88bce0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88bce1: mov esp, ebp */
  esp = ebp;
/* 88bce3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88bce4: ret  */
  esp += 4; SPILL(); return;
}

void f_88bd20(void) {
  LOAD_REGS();
L_88bd20: /* 88bd20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88bd21: mov ebp, esp */
  ebp = esp;
/* 88bd23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 88bd25: push 0x9d54e0 */
  { uint32_t v = 0x9d54e0u; esp -= 4; W32(esp, v); }
/* 88bd2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 88bd30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88bd31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 88bd38: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88bd3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88bd3c: mov eax, ecx */
  eax = ecx;
/* 88bd3e: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 88bd41: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88bd43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88bd44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88bd45: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 88bd48: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 88bd4f: je 0x88bd77 */
  if (zf) goto L_88bd77;
L_88bd51: /* 88bd51: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 88bd54: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88bd56: je 0x88bd77 */
  if (zf) goto L_88bd77;
L_88bd58: /* 88bd58: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 88bd5b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 88bd5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88bd5e: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x88bd64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88bd64: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88bd67: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88bd6e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88bd6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88bd70: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88bd71: mov esp, ebp */
  esp = ebp;
/* 88bd73: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88bd74: ret 4 */
  esp += 8; SPILL(); return;
L_88bd77: /* 88bd77: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 88bd7a: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 88bd7d: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 88bd80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88bd81: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 88bd84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88bd85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88bd86: call 0x6ca83f */
  esp -= 4; W32(esp, 0x88bd8bu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 88bd8b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88bd8e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88bd91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88bd92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88bd93: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88bd9a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88bd9b: mov esp, ebp */
  esp = ebp;
/* 88bd9d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88bd9e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88bda1(void) {
  LOAD_REGS();
L_88bda1: /* 88bda1: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88bda4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 88bda9: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 88bdac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88bdad: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 88bdb0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88bdb5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_88bdb5(); return;
}

void f_88bdb5(void) {
  LOAD_REGS();
L_88bdb5: /* 88bdb5: push 0xa19c50 */
  { uint32_t v = 0xa19c50u; esp -= 4; W32(esp, v); }
/* 88bdba: push 0xae75ac */
  { uint32_t v = 0xae75acu; esp -= 4; W32(esp, v); }
/* 88bdbf: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x88bdc5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 88bdc5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88bdc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88bdca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88bdcc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88bdd1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_88bdd1: guest_badaddr(0x88bdd1); return;
}

void f_88be10(void) {
  LOAD_REGS();
L_88be10: /* 88be10: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 88be13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88be15: je 0x88be24 */
  if (zf) goto L_88be24;
L_88be17: /* 88be17: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88be1b: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 88be21: ret 8 */
  esp += 12; SPILL(); return;
L_88be24: /* 88be24: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 88be28: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 88be2b: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 88be2e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 88be30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88be34: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 88be36: ret 8 */
  esp += 12; SPILL(); return;
}

void f_88be50(void) {
  LOAD_REGS();
L_88be50: /* 88be50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88be51: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88be52: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88be53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88be54: mov esi, ecx */
  esi = ecx;
/* 88be56: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88be58: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88be59: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x88be5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88be5f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88be61: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 88be65: mov ebx, eax */
  ebx = eax;
/* 88be67: or ebp, 0xffffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebp = r;
  }
/* 88be6a: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x88be70u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 88be70: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 88be74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88be75: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 88be79: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x88be7fu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 88be7f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88be81: je 0x88bf21 */
  if (zf) goto L_88bf21;
L_88be87: /* 88be87: mov eax, dword ptr [ebx + 0x2f0] */
  eax = R32((uint32_t)(ebx + 0x2f0u));
/* 88be8d: xor edi, edi */
  edi = 0;
/* 88be8f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88be91: jle 0x88bec5 */
  if ((zf || sf != of)) goto L_88bec5;
L_88be93: /* 88be93: mov edx, dword ptr [ebx + 0x2ec] */
  edx = R32((uint32_t)(ebx + 0x2ecu));
/* 88be99: lea eax, [edx + edi*4] */
  eax = (uint32_t)(edx + edi*4);
/* 88be9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88be9d: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* 88bea1: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x88bea7u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 88bea7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88bea9: jne 0x88beb8 */
  if (!zf) goto L_88beb8;
L_88beab: /* 88beab: mov eax, dword ptr [ebx + 0x2f0] */
  eax = R32((uint32_t)(ebx + 0x2f0u));
/* 88beb1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 88beb2: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88beb4: jl 0x88be93 */
  if ((sf != of)) goto L_88be93;
L_88beb6: /* 88beb6: jmp 0x88bec5 */
  goto L_88bec5;
L_88beb8: /* 88beb8: mov ecx, dword ptr [ebx + 0x2f8] */
  ecx = R32((uint32_t)(ebx + 0x2f8u));
/* 88bebe: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* 88bec1: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
L_88bec5: /* 88bec5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88bec7: mov ecx, esi */
  ecx = esi;
/* 88bec9: xor edi, edi */
  edi = 0;
/* 88becb: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x88bed1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88bed1: mov ecx, dword ptr [eax + 0x1e0] */
  ecx = R32((uint32_t)(eax + 0x1e0u));
/* 88bed7: add eax, 0x1dc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1dcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 88bedc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88bede: jle 0x88bf21 */
  if ((zf || sf != of)) goto L_88bf21;
L_88bee0: /* 88bee0: xor ebx, ebx */
  ebx = 0;
L_88bee2: /* 88bee2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88bee4: mov ecx, esi */
  ecx = esi;
/* 88bee6: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x88beecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88beec: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 88bef0: add eax, 0x1dc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1dcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 88bef5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88bef6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 88bef8: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 88befa: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x88bf00u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 88bf00: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88bf02: jne 0x88bf2b */
  if (!zf) goto L_88bf2b;
L_88bf04: /* 88bf04: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88bf06: mov ecx, esi */
  ecx = esi;
/* 88bf08: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 88bf09: add ebx, 0x40 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 88bf0c: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x88bf12u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88bf12: mov ecx, dword ptr [eax + 0x1e0] */
  ecx = R32((uint32_t)(eax + 0x1e0u));
/* 88bf18: add eax, 0x1dc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1dcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 88bf1d: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88bf1f: jl 0x88bee2 */
  if ((sf != of)) goto L_88bee2;
L_88bf21: /* 88bf21: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88bf22: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88bf23: mov eax, ebp */
  eax = ebp;
/* 88bf25: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88bf26: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88bf27: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 88bf28: ret 4 */
  esp += 8; SPILL(); return;
L_88bf2b: /* 88bf2b: mov eax, edi */
  eax = edi;
/* 88bf2d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88bf2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88bf2f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88bf30: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88bf31: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 88bf32: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88bf80(void) {
  LOAD_REGS();
L_88bf80: /* 88bf80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88bf81: mov ebp, esp */
  ebp = esp;
/* 88bf83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 88bf85: push 0x9d54f0 */
  { uint32_t v = 0x9d54f0u; esp -= 4; W32(esp, v); }
/* 88bf8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 88bf90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88bf91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 88bf98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88bf9b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 88bf9d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88bf9e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88bf9f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88bfa0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 88bfa3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 88bfaa: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x88bfb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88bfb0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 88bfb3: mov ecx, eax */
  ecx = eax;
/* 88bfb5: lea edx, [ecx + 0x78] */
  edx = (uint32_t)(ecx + 0x78u);
/* 88bfb8: mov eax, edx */
  eax = edx;
/* 88bfba: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 88bfbc: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 88bfbf: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 88bfc2: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 88bfc5: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 88bfc8: fld dword ptr [ecx + 0x80] */
  { double v = F32((uint32_t)(ecx + 0x80u)); FPUSH(v); }
/* 88bfce: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 88bfd4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88bfd6: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88bfd9: je 0x88bfdd */
  if (zf) goto L_88bfdd;
L_88bfdb: /* 88bfdb: fchs  */
  ST0 = -ST0;
L_88bfdd: /* 88bfdd: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 88bfe0: fld dword ptr [ecx + 0x7c] */
  { double v = F32((uint32_t)(ecx + 0x7cu)); FPUSH(v); }
/* 88bfe3: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 88bfe9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88bfeb: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88bfee: je 0x88bff2 */
  if (zf) goto L_88bff2;
L_88bff0: /* 88bff0: fchs  */
  ST0 = -ST0;
L_88bff2: /* 88bff2: fcom dword ptr [ebp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x10u)));
/* 88bff5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88bff7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88bffa: jne 0x88c001 */
  if (!zf) goto L_88c001;
L_88bffc: /* 88bffc: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 88bfff: jmp 0x88c009 */
  goto L_88c009;
L_88c001: /* 88c001: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 88c004: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88c006: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_88c009: /* 88c009: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 88c00b: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 88c011: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88c013: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88c016: je 0x88c01a */
  if (zf) goto L_88c01a;
L_88c018: /* 88c018: fchs  */
  ST0 = -ST0;
L_88c01a: /* 88c01a: fcom dword ptr [ebp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x10u)));
/* 88c01d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88c01f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88c022: je 0x88c029 */
  if (zf) goto L_88c029;
L_88c024: /* 88c024: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88c026: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
L_88c029: /* 88c029: fmul dword ptr [ecx + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x50u)));
/* 88c02c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88c02d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88c02e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88c02f: fmul dword ptr [0xa19cec] */
  ST0 = ST0 * (F32((uint32_t)(0xa19cecu)));
/* 88c035: fstp dword ptr [ecx + 0xd8] */
  WF32((uint32_t)(ecx + 0xd8u), ST0); FPOP();
/* 88c03b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88c03e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88c045: mov esp, ebp */
  esp = ebp;
/* 88c047: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88c048: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_88c04b(void) {
  LOAD_REGS();
L_88c04b: /* 88c04b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88c04e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 88c053: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 88c056: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88c057: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 88c05a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88c05fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_88c05f(); return;
}

void f_88c05f(void) {
  LOAD_REGS();
L_88c05f: /* 88c05f: push 0xa19ca0 */
  { uint32_t v = 0xa19ca0u; esp -= 4; W32(esp, v); }
/* 88c064: push 0xae77b4 */
  { uint32_t v = 0xae77b4u; esp -= 4; W32(esp, v); }
/* 88c069: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x88c06fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 88c06f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88c072: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88c074: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88c076: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88c07bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_88c07b: guest_badaddr(0x88c07b); return;
}

void f_88c0c0(void) {
  LOAD_REGS();
L_88c0c0: /* 88c0c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88c0c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88c0c2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 88c0c6: cmp edi, 0x100 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88c0cc: mov esi, ecx */
  esi = ecx;
/* 88c0ce: jg 0x88c10c */
  if ((!zf && sf == of)) goto L_88c10c;
L_88c0d0: /* 88c0d0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88c0d2: jl 0x88c10c */
  if ((sf != of)) goto L_88c10c;
L_88c0d4: /* 88c0d4: cmp dword ptr [esi + 0xfc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xfcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88c0da: jg 0x88c102 */
  if ((!zf && sf == of)) goto L_88c102;
L_88c0dc: /* 88c0dc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88c0dd: lea ebx, [esi + 0xf8] */
  ebx = (uint32_t)(esi + 0xf8u);
L_88c0e3: /* 88c0e3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 88c0e5: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 88c0e7: mov ecx, ebx */
  ecx = ebx;
/* 88c0e9: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x88c0efu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 88c0ef: cmp dword ptr [esi + 0xfc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xfcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88c0f5: jle 0x88c0e3 */
  if ((zf || sf != of)) goto L_88c0e3;
L_88c0f7: /* 88c0f7: push 0x70 */
  { uint32_t v = 0x70u; esp -= 4; W32(esp, v); }
/* 88c0f9: mov ecx, ebx */
  ecx = ebx;
/* 88c0fb: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x88c101u); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 88c101: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_88c102: /* 88c102: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88c103: mov eax, 1 */
  eax = 0x1u;
/* 88c108: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88c109: ret 4 */
  esp += 8; SPILL(); return;
L_88c10c: /* 88c10c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88c10d: xor eax, eax */
  eax = 0;
/* 88c10f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88c110: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88c140(void) {
  LOAD_REGS();
L_88c140: /* 88c140: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88c141: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 88c145: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88c146: mov edi, ecx */
  edi = ecx;
/* 88c148: cmp dword ptr [edi + 0xfc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xfcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88c14e: jle 0x88c1a6 */
  if ((zf || sf != of)) goto L_88c1a6;
L_88c150: /* 88c150: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88c152: jl 0x88c1a6 */
  if ((sf != of)) goto L_88c1a6;
L_88c154: /* 88c154: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88c156: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 88c15a: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x88c160u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 88c160: imul esi, esi, 0x70 */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x70u);
  esi = (uint32_t)r;
  }
/* 88c163: mov ecx, dword ptr [edi + 0xf8] */
  ecx = R32((uint32_t)(edi + 0xf8u));
/* 88c169: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 88c16d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88c16e: lea ecx, [ecx + esi + 8] */
  ecx = (uint32_t)(ecx + esi + 0x8u);
/* 88c172: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x88c178u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 88c178: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88c17a: je 0x88c1a6 */
  if (zf) goto L_88c1a6;
L_88c17c: /* 88c17c: mov edx, dword ptr [edi + 0xf8] */
  edx = R32((uint32_t)(edi + 0xf8u));
/* 88c182: fld dword ptr [edx + esi + 0x10] */
  { double v = F32((uint32_t)(edx + esi + 0x10u)); FPUSH(v); }
/* 88c186: lea ecx, [edx + esi] */
  ecx = (uint32_t)(edx + esi);
/* 88c189: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88c18f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88c191: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88c194: jne 0x88c1ad */
  if (!zf) goto L_88c1ad;
L_88c196: /* 88c196: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 88c199: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88c19f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88c1a1: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88c1a4: jp 0x88c1bd */
  if (pf) goto L_88c1bd;
L_88c1a6: /* 88c1a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88c1a7: xor eax, eax */
  eax = 0;
/* 88c1a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88c1aa: ret 4 */
  esp += 8; SPILL(); return;
L_88c1ad: /* 88c1ad: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 88c1b0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88c1b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88c1b8: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88c1bb: jnp 0x88c1a6 */
  if (!pf) goto L_88c1a6;
L_88c1bd: /* 88c1bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88c1be: mov eax, 1 */
  eax = 0x1u;
/* 88c1c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88c1c4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88c200(void) {
  LOAD_REGS();
L_88c200: /* 88c200: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88c201: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88c202: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 88c206: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88c208: mov esi, ecx */
  esi = ecx;
/* 88c20a: jl 0x88c2be */
  if ((sf != of)) goto L_88c2be;
L_88c210: /* 88c210: cmp edi, dword ptr [esi + 0xfc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xfcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88c216: jge 0x88c2be */
  if ((sf == of)) goto L_88c2be;
L_88c21c: /* 88c21c: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* 88c222: imul edi, edi, 0x70 */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x70u);
  edi = (uint32_t)r;
  }
/* 88c225: mov edx, dword ptr [edi + ecx + 8] */
  edx = R32((uint32_t)(edi + ecx + 0x8u));
/* 88c229: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88c22b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88c22c: mov ecx, esi */
  ecx = esi;
/* 88c22e: call dword ptr [eax + 0xb4] */
  { uint32_t t = R32((uint32_t)(eax + 0xb4u)); esp -= 4; W32(esp, 0x88c234u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88c234: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88c236: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88c237: mov ecx, esi */
  ecx = esi;
/* 88c239: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x88c23fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88c23f: fcom dword ptr [0xa087d0] */
  fpu_com(ST0, F32((uint32_t)(0xa087d0u)));
/* 88c245: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88c247: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88c24a: jne 0x88c256 */
  if (!zf) goto L_88c256;
L_88c24c: /* 88c24c: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 88c250: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 88c252: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
L_88c256: /* 88c256: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88c258: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 88c25c: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 88c262: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88c264: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88c267: jp 0x88c2b6 */
  if (pf) goto L_88c2b6;
L_88c269: /* 88c269: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 88c26d: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 88c271: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 88c277: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88c279: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88c27c: je 0x88c286 */
  if (zf) goto L_88c286;
L_88c27e: /* 88c27e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 88c280: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_88c286: /* 88c286: mov eax, dword ptr [esi + 0xf8] */
  eax = R32((uint32_t)(esi + 0xf8u));
/* 88c28c: fstp dword ptr [edi + eax + 0x10] */
  WF32((uint32_t)(edi + eax + 0x10u), ST0); FPOP();
/* 88c290: mov ecx, dword ptr [esi + 0xf8] */
  ecx = R32((uint32_t)(esi + 0xf8u));
/* 88c296: mov dword ptr [edi + ecx + 0xc], 0 */
  W32((uint32_t)(edi + ecx + 0xcu), 0x0u);
/* 88c29e: mov edx, dword ptr [esi + 0xf8] */
  edx = R32((uint32_t)(esi + 0xf8u));
/* 88c2a4: mov dword ptr [edi + edx + 0x18], 0 */
  W32((uint32_t)(edi + edx + 0x18u), 0x0u);
/* 88c2ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88c2ad: mov eax, 1 */
  eax = 0x1u;
/* 88c2b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88c2b3: ret 8 */
  esp += 12; SPILL(); return;
L_88c2b6: /* 88c2b6: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 88c2bc: jmp 0x88c286 */
  goto L_88c286;
L_88c2be: /* 88c2be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88c2bf: xor eax, eax */
  eax = 0;
/* 88c2c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88c2c2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_88c310(void) {
  LOAD_REGS();
L_88c310: /* 88c310: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88c311: mov ebp, esp */
  ebp = esp;
/* 88c313: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 88c315: push 0x9d5500 */
  { uint32_t v = 0x9d5500u; esp -= 4; W32(esp, v); }
/* 88c31a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 88c320: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88c321: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 88c328: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88c32b: mov eax, dword ptr [ecx + 0xfc] */
  eax = R32((uint32_t)(ecx + 0xfcu));
/* 88c331: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 88c334: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88c336: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88c337: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88c338: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88c339: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 88c33c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 88c343: jle 0x88c3ba */
  if ((zf || sf != of)) goto L_88c3ba;
L_88c345: /* 88c345: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88c347: jl 0x88c3ba */
  if ((sf != of)) goto L_88c3ba;
L_88c349: /* 88c349: mov esi, dword ptr [ecx + 0xf8] */
  esi = R32((uint32_t)(ecx + 0xf8u));
/* 88c34f: mov eax, edx */
  eax = edx;
/* 88c351: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 88c354: fld dword ptr [esi + eax + 0x10] */
  { double v = F32((uint32_t)(esi + eax + 0x10u)); FPUSH(v); }
/* 88c358: fcomp qword ptr [0x9f7668] */
  fpu_com(ST0, F64((uint32_t)(0x9f7668u)));
  FPOP();
/* 88c35e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88c360: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88c363: jp 0x88c3ba */
  if (pf) goto L_88c3ba;
L_88c365: /* 88c365: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 88c367: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88c368: call dword ptr [eax + 0xdc] */
  { uint32_t t = R32((uint32_t)(eax + 0xdcu)); esp -= 4; W32(esp, 0x88c36eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 88c36e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88c370: je 0x88c3ba */
  if (zf) goto L_88c3ba;
L_88c372: /* 88c372: mov eax, 1 */
  eax = 0x1u;
/* 88c377: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88c37a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88c381: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88c382: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88c383: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88c384: mov esp, ebp */
  esp = ebp;
/* 88c386: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88c387: ret 4 */
  esp += 8; SPILL(); return;
L_88c3ba: /* 88c3ba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88c3bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88c3be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88c3bf: xor eax, eax */
  eax = 0;
/* 88c3c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88c3c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88c3c9: mov esp, ebp */
  esp = ebp;
/* 88c3cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88c3cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88c38a(void) {
  LOAD_REGS();
L_88c38a: /* 88c38a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88c38d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 88c392: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 88c395: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88c396: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 88c399: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88c39eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_88c39e(); return;
}

void f_88c39e(void) {
  LOAD_REGS();
L_88c39e: /* 88c39e: push 0xa19cf0 */
  { uint32_t v = 0xa19cf0u; esp -= 4; W32(esp, v); }
/* 88c3a3: push 0xae77bc */
  { uint32_t v = 0xae77bcu; esp -= 4; W32(esp, v); }
/* 88c3a8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x88c3aeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 88c3ae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88c3b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88c3b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88c3b5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88c3bau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 88c3ba: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88c3bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88c3be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88c3bf: xor eax, eax */
  eax = 0;
/* 88c3c1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88c3c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88c3c9: mov esp, ebp */
  esp = ebp;
/* 88c3cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88c3cc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88c400(void) {
  LOAD_REGS();
L_88c400: /* 88c400: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88c404: cmp dword ptr [ecx + 0xfc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xfcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88c40a: jle 0x88c420 */
  if ((zf || sf != of)) goto L_88c420;
L_88c40c: /* 88c40c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88c40e: jl 0x88c420 */
  if ((sf != of)) goto L_88c420;
L_88c410: /* 88c410: mov ecx, dword ptr [ecx + 0xf8] */
  ecx = R32((uint32_t)(ecx + 0xf8u));
/* 88c416: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 88c419: mov eax, dword ptr [ecx + eax + 0x30] */
  eax = R32((uint32_t)(ecx + eax + 0x30u));
/* 88c41d: ret 4 */
  esp += 8; SPILL(); return;
L_88c420: /* 88c420: xor eax, eax */
  eax = 0;
/* 88c422: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88c440(void) {
  LOAD_REGS();
L_88c440: /* 88c440: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88c444: cmp dword ptr [ecx + 0xfc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xfcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88c44a: jle 0x88c472 */
  if ((zf || sf != of)) goto L_88c472;
L_88c44c: /* 88c44c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88c44e: jl 0x88c472 */
  if ((sf != of)) goto L_88c472;
L_88c450: /* 88c450: mov ecx, dword ptr [ecx + 0xf8] */
  ecx = R32((uint32_t)(ecx + 0xf8u));
/* 88c456: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 88c459: fld dword ptr [eax + ecx + 0x10] */
  { double v = F32((uint32_t)(eax + ecx + 0x10u)); FPUSH(v); }
/* 88c45d: fcomp dword ptr [eax + ecx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(eax + ecx + 0x14u)));
  FPOP();
/* 88c461: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 88c463: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88c465: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 88c468: jne 0x88c472 */
  if (!zf) goto L_88c472;
L_88c46a: /* 88c46a: mov eax, 1 */
  eax = 0x1u;
/* 88c46f: ret 4 */
  esp += 8; SPILL(); return;
L_88c472: /* 88c472: xor eax, eax */
  eax = 0;
/* 88c474: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88c490(void) {
  LOAD_REGS();
L_88c490: /* 88c490: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88c494: cmp dword ptr [ecx + 0xfc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xfcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88c49a: jle 0x88c4c3 */
  if ((zf || sf != of)) goto L_88c4c3;
L_88c49c: /* 88c49c: xor edx, edx */
  edx = 0;
/* 88c49e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88c4a0: jl 0x88c4c3 */
  if ((sf != of)) goto L_88c4c3;
L_88c4a2: /* 88c4a2: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 88c4a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88c4a6: mov esi, dword ptr [ecx + 0xf8] */
  esi = R32((uint32_t)(ecx + 0xf8u));
/* 88c4ac: mov dword ptr [esi + eax + 0x30], edx */
  W32((uint32_t)(esi + eax + 0x30u), edx);
/* 88c4b0: mov ecx, dword ptr [ecx + 0xf8] */
  ecx = R32((uint32_t)(ecx + 0xf8u));
/* 88c4b6: mov dword ptr [ecx + eax + 0x2c], edx */
  W32((uint32_t)(ecx + eax + 0x2cu), edx);
/* 88c4ba: mov eax, 1 */
  eax = 0x1u;
/* 88c4bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88c4c0: ret 4 */
  esp += 8; SPILL(); return;
L_88c4c3: /* 88c4c3: xor eax, eax */
  eax = 0;
/* 88c4c5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88c4e0(void) {
  LOAD_REGS();
L_88c4e0: /* 88c4e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88c4e1: mov ebp, esp */
  ebp = esp;
/* 88c4e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 88c4e5: push 0x9d5510 */
  { uint32_t v = 0x9d5510u; esp -= 4; W32(esp, v); }
/* 88c4ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 88c4f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88c4f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 88c4f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88c4fb: mov edx, dword ptr [ecx + 0xfc] */
  edx = R32((uint32_t)(ecx + 0xfcu));
/* 88c501: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 88c504: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88c506: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88c507: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88c508: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88c509: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 88c50c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 88c513: jle 0x88c53e */
  if ((zf || sf != of)) goto L_88c53e;
L_88c515: /* 88c515: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88c517: jl 0x88c53e */
  if ((sf != of)) goto L_88c53e;
L_88c519: /* 88c519: mov ecx, dword ptr [ecx + 0xf8] */
  ecx = R32((uint32_t)(ecx + 0xf8u));
/* 88c51f: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 88c522: mov edx, dword ptr [ecx + eax + 8] */
  edx = R32((uint32_t)(ecx + eax + 0x8u));
/* 88c526: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 88c529: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 88c52b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88c52e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88c535: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88c536: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88c537: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88c538: mov esp, ebp */
  esp = ebp;
/* 88c53a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88c53b: ret 8 */
  esp += 12; SPILL(); return;
L_88c53e: /* 88c53e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 88c541: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88c543: mov ecx, esi */
  ecx = esi;
/* 88c545: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x88c54bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 88c54b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88c54e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88c54f: mov eax, esi */
  eax = esi;
/* 88c551: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88c552: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88c559: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88c55a: mov esp, ebp */
  esp = ebp;
/* 88c55c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88c55d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_88c560(void) {
  LOAD_REGS();
L_88c560: /* 88c560: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88c563: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 88c568: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 88c56b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88c56c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 88c56f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88c574u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_88c574(); return;
}

void f_88c574(void) {
  LOAD_REGS();
L_88c574: /* 88c574: push 0xa19d50 */
  { uint32_t v = 0xa19d50u; esp -= 4; W32(esp, v); }
/* 88c579: push 0xae77dc */
  { uint32_t v = 0xae77dcu; esp -= 4; W32(esp, v); }
/* 88c57e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x88c584u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 88c584: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88c587: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88c589: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88c58b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88c590u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_88c590: guest_badaddr(0x88c590); return;
}

void f_88c5d0(void) {
  LOAD_REGS();
L_88c5d0: /* 88c5d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88c5d4: cmp dword ptr [ecx + 0xfc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xfcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88c5da: jle 0x88c5f0 */
  if ((zf || sf != of)) goto L_88c5f0;
L_88c5dc: /* 88c5dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88c5de: jl 0x88c5f0 */
  if ((sf != of)) goto L_88c5f0;
L_88c5e0: /* 88c5e0: mov ecx, dword ptr [ecx + 0xf8] */
  ecx = R32((uint32_t)(ecx + 0xf8u));
/* 88c5e6: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 88c5e9: fld dword ptr [ecx + eax + 0xc] */
  { double v = F32((uint32_t)(ecx + eax + 0xcu)); FPUSH(v); }
/* 88c5ed: ret 4 */
  esp += 8; SPILL(); return;
L_88c5f0: /* 88c5f0: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 88c5f6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88c610(void) {
  LOAD_REGS();
L_88c610: /* 88c610: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 88c614: cmp dword ptr [ecx + 0xfc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xfcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88c61a: jle 0x88c630 */
  if ((zf || sf != of)) goto L_88c630;
L_88c61c: /* 88c61c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88c61e: jl 0x88c630 */
  if ((sf != of)) goto L_88c630;
L_88c620: /* 88c620: mov ecx, dword ptr [ecx + 0xf8] */
  ecx = R32((uint32_t)(ecx + 0xf8u));
/* 88c626: imul eax, eax, 0x70 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x70u);
  eax = (uint32_t)r;
  }
/* 88c629: fld dword ptr [ecx + eax + 0x10] */
  { double v = F32((uint32_t)(ecx + eax + 0x10u)); FPUSH(v); }
/* 88c62d: ret 4 */
  esp += 8; SPILL(); return;
L_88c630: /* 88c630: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 88c636: ret 4 */
  esp += 8; SPILL(); return;
}

void f_88c650(void) {
  LOAD_REGS();
L_88c650: /* 88c650: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88c651: mov ebp, esp */
  ebp = esp;
/* 88c653: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 88c655: push 0x9d5520 */
  { uint32_t v = 0x9d5520u; esp -= 4; W32(esp, v); }
/* 88c65a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 88c660: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88c661: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 88c668: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 88c66b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88c66c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88c66d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88c66e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 88c671: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88c673: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 88c676: mov esi, ecx */
  esi = ecx;
/* 88c678: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 88c67f: jl 0x88c7c8 */
  if ((sf != of)) goto L_88c7c8;
L_88c685: /* 88c685: cmp edi, 0x100 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88c68b: jg 0x88c7c8 */
  if ((!zf && sf == of)) goto L_88c7c8;
L_88c691: /* 88c691: cmp dword ptr [esi + 0x108], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x108u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88c697: jg 0x88c6dd */
  if ((!zf && sf == of)) goto L_88c6dd;
L_88c699: /* 88c699: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_88c6a0: /* 88c6a0: cmp dword ptr [esi + 0x108], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x108u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88c6a6: jg 0x88c6cf */
  if ((!zf && sf == of)) goto L_88c6cf;
L_88c6a8: /* 88c6a8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 88c6aa: lea ebx, [esi + 0x104] */
  ebx = (uint32_t)(esi + 0x104u);
/* 88c6b0: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 88c6b2: mov ecx, ebx */
  ecx = ebx;
/* 88c6b4: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x88c6bau); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 88c6ba: mov eax, dword ptr [esi + 0x108] */
  eax = R32((uint32_t)(esi + 0x108u));
/* 88c6c0: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 88c6c2: imul eax, eax, 0x3c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3cu);
  eax = (uint32_t)r;
  }
/* 88c6c5: mov dword ptr [eax + ecx - 0x3c], 0xffffffff */
  W32((uint32_t)(eax + ecx + 0xffffffc4u), 0xffffffffu);
/* 88c6cd: jmp 0x88c6a0 */
  goto L_88c6a0;
L_88c6cf: /* 88c6cf: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 88c6d1: lea ecx, [esi + 0x104] */
  ecx = (uint32_t)(esi + 0x104u);
/* 88c6d7: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x88c6ddu); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
L_88c6dd: /* 88c6dd: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 88c6e0: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 88c6e6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 88c6e8: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 88c6eb: jnp 0x88c758 */
  if (!pf) goto L_88c758;
L_88c6ed: /* 88c6ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88c6ef: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 88c6f2: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x88c6f8u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 88c6f8: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 88c6fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88c6fc: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 88c6ff: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x88c705u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 88c705: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88c707: jne 0x88c758 */
  if (!zf) goto L_88c758;
L_88c709: /* 88c709: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 88c70c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88c70d: mov ecx, esi */
  ecx = esi;
/* 88c70f: call 0x6cceaa */
  esp -= 4; W32(esp, 0x88c714u); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 88c714: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88c716: jl 0x88c780 */
  if ((sf != of)) goto L_88c780;
L_88c718: /* 88c718: mov edx, dword ptr [esi + 0x104] */
  edx = R32((uint32_t)(esi + 0x104u));
/* 88c71e: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 88c721: mov ecx, edi */
  ecx = edi;
/* 88c723: imul ecx, ecx, 0x3c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x3cu);
  ecx = (uint32_t)r;
  }
/* 88c726: mov dword ptr [ecx + edx], eax */
  W32((uint32_t)(ecx + edx), eax);
/* 88c729: mov eax, dword ptr [esi + 0x104] */
  eax = R32((uint32_t)(esi + 0x104u));
/* 88c72f: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 88c732: mov dword ptr [eax + ecx + 4], edx */
  W32((uint32_t)(eax + ecx + 0x4u), edx);
/* 88c736: mov eax, dword ptr [esi + 0x104] */
  eax = R32((uint32_t)(esi + 0x104u));
/* 88c73c: fstp dword ptr [eax + ecx + 8] */
  WF32((uint32_t)(eax + ecx + 0x8u), ST0); FPOP();
/* 88c740: mov eax, 1 */
  eax = 0x1u;
/* 88c745: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88c748: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88c74f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88c750: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88c751: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88c752: mov esp, ebp */
  esp = ebp;
/* 88c754: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88c755: ret 0xc */
  esp += 16; SPILL(); return;
L_88c758: /* 88c758: mov ecx, dword ptr [esi + 0x104] */
  ecx = R32((uint32_t)(esi + 0x104u));
/* 88c75e: imul edi, edi, 0x3c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x3cu);
  edi = (uint32_t)r;
  }
/* 88c761: mov dword ptr [edi + ecx], 0xffffffff */
  W32((uint32_t)(edi + ecx), 0xffffffffu);
/* 88c768: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88c76a: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 88c76d: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x88c773u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 88c773: mov edx, dword ptr [esi + 0x104] */
  edx = R32((uint32_t)(esi + 0x104u));
/* 88c779: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 88c77c: mov dword ptr [edx + edi + 4], eax */
  W32((uint32_t)(edx + edi + 0x4u), eax);
L_88c780: /* 88c780: mov eax, 1 */
  eax = 0x1u;
/* 88c785: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88c788: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88c78f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88c790: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88c791: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88c792: mov esp, ebp */
  esp = ebp;
/* 88c794: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88c795: ret 0xc */
  esp += 16; SPILL(); return;
L_88c7c8: /* 88c7c8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88c7cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88c7cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88c7cd: xor eax, eax */
  eax = 0;
/* 88c7cf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88c7d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88c7d7: mov esp, ebp */
  esp = ebp;
/* 88c7d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88c7da: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_88c798(void) {
  LOAD_REGS();
L_88c798: /* 88c798: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 88c79b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 88c7a0: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 88c7a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 88c7a4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 88c7a7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88c7acu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_88c7ac(); return;
}

void f_88c7ac(void) {
  LOAD_REGS();
L_88c7ac: /* 88c7ac: push 0xa19dc0 */
  { uint32_t v = 0xa19dc0u; esp -= 4; W32(esp, v); }
/* 88c7b1: push 0xae77f4 */
  { uint32_t v = 0xae77f4u; esp -= 4; W32(esp, v); }
/* 88c7b6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x88c7bcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 88c7bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 88c7bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88c7c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 88c7c3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x88c7c8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 88c7c8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 88c7cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88c7cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88c7cd: xor eax, eax */
  eax = 0;
/* 88c7cf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 88c7d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88c7d7: mov esp, ebp */
  esp = ebp;
/* 88c7d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88c7da: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_88c850(void) {
  LOAD_REGS();
L_88c850: /* 88c850: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88c851: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88c852: mov edi, ecx */
  edi = ecx;
/* 88c854: cmp dword ptr [edi + 0x114], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x114u))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88c85e: jge 0x88c928 */
  if ((sf == of)) goto L_88c928;
L_88c864: /* 88c864: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 88c868: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88c869: call 0x6cceaa */
  esp -= 4; W32(esp, 0x88c86eu); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 88c86e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88c870: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 88c874: jl 0x88c928 */
  if ((sf != of)) goto L_88c928;
L_88c87a: /* 88c87a: mov eax, dword ptr [edi + 0x114] */
  eax = R32((uint32_t)(edi + 0x114u));
/* 88c880: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88c881: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88c882: xor ebx, ebx */
  ebx = 0;
/* 88c884: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88c886: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88c887: jle 0x88c8ba */
  if ((zf || sf != of)) goto L_88c8ba;
L_88c889: /* 88c889: lea esi, [edi + 0x110] */
  esi = (uint32_t)(edi + 0x110u);
/* 88c88f: xor ebp, ebp */
  ebp = 0;
L_88c891: /* 88c891: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88c893: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 88c897: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88c898: lea ecx, [edx + ebp + 4] */
  ecx = (uint32_t)(edx + ebp + 0x4u);
/* 88c89c: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x88c8a2u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 88c8a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88c8a4: jne 0x88c8b6 */
  if (!zf) goto L_88c8b6;
L_88c8a6: /* 88c8a6: mov eax, dword ptr [edi + 0x114] */
  eax = R32((uint32_t)(edi + 0x114u));
/* 88c8ac: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 88c8ad: add ebp, 0x2c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 88c8b0: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88c8b2: jl 0x88c891 */
  if ((sf != of)) goto L_88c891;
L_88c8b4: /* 88c8b4: jmp 0x88c8ba */
  goto L_88c8ba;
L_88c8b6: /* 88c8b6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88c8b8: jge 0x88c8f4 */
  if ((sf == of)) goto L_88c8f4;
L_88c8ba: /* 88c8ba: mov ebx, dword ptr [edi + 0x114] */
  ebx = R32((uint32_t)(edi + 0x114u));
/* 88c8c0: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 88c8c2: lea esi, [edi + 0x110] */
  esi = (uint32_t)(edi + 0x110u);
/* 88c8c8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 88c8ca: mov ecx, esi */
  ecx = esi;
/* 88c8cc: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x88c8d2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 88c8d2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 88c8d4: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 88c8d8: mov eax, ebx */
  eax = ebx;
/* 88c8da: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 88c8dd: mov dword ptr [ecx + eax + 4], edx */
  W32((uint32_t)(ecx + eax + 0x4u), edx);
/* 88c8e1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 88c8e3: mov dword ptr [ecx + eax + 0x24], 0 */
  W32((uint32_t)(ecx + eax + 0x24u), 0x0u);
/* 88c8eb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88c8ed: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 88c8f1: mov dword ptr [eax + edx], ecx */
  W32((uint32_t)(eax + edx), ecx);
L_88c8f4: /* 88c8f4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88c8f6: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 88c8fa: imul ebx, ebx, 0x2c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x2cu);
  ebx = (uint32_t)r;
  }
/* 88c8fd: fstp dword ptr [edx + ebx + 0x28] */
  WF32((uint32_t)(edx + ebx + 0x28u), ST0); FPOP();
/* 88c901: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 88c903: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 88c907: lea ecx, [eax + ebx + 0x14] */
  ecx = (uint32_t)(eax + ebx + 0x14u);
/* 88c90b: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 88c90f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88c910: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 88c912: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 88c916: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88c917: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 88c91a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88c91b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 88c91e: mov eax, 1 */
  eax = 0x1u;
/* 88c923: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88c924: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 88c925: ret 0x14 */
  esp += 24; SPILL(); return;
L_88c928: /* 88c928: xor eax, eax */
  eax = 0;
/* 88c92a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88c92b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 88c92c: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_88c970(void) {
  LOAD_REGS();
L_88c970: /* 88c970: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88c971: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88c972: mov edi, ecx */
  edi = ecx;
/* 88c974: cmp dword ptr [edi + 0x114], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x114u))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88c97e: jge 0x88ca54 */
  if ((sf == of)) goto L_88ca54;
L_88c984: /* 88c984: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 88c988: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88c989: call 0x6cceaa */
  esp -= 4; W32(esp, 0x88c98eu); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 88c98e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88c990: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 88c994: jl 0x88ca54 */
  if ((sf != of)) goto L_88ca54;
L_88c99a: /* 88c99a: mov eax, dword ptr [edi + 0x114] */
  eax = R32((uint32_t)(edi + 0x114u));
/* 88c9a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88c9a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88c9a2: xor ebx, ebx */
  ebx = 0;
/* 88c9a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88c9a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88c9a7: jle 0x88c9da */
  if ((zf || sf != of)) goto L_88c9da;
L_88c9a9: /* 88c9a9: lea esi, [edi + 0x110] */
  esi = (uint32_t)(edi + 0x110u);
/* 88c9af: xor ebp, ebp */
  ebp = 0;
L_88c9b1: /* 88c9b1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88c9b3: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 88c9b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88c9b8: lea ecx, [edx + ebp + 4] */
  ecx = (uint32_t)(edx + ebp + 0x4u);
/* 88c9bc: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x88c9c2u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 88c9c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88c9c4: jne 0x88c9d6 */
  if (!zf) goto L_88c9d6;
L_88c9c6: /* 88c9c6: mov eax, dword ptr [edi + 0x114] */
  eax = R32((uint32_t)(edi + 0x114u));
/* 88c9cc: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 88c9cd: add ebp, 0x2c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 88c9d0: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88c9d2: jl 0x88c9b1 */
  if ((sf != of)) goto L_88c9b1;
L_88c9d4: /* 88c9d4: jmp 0x88c9da */
  goto L_88c9da;
L_88c9d6: /* 88c9d6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88c9d8: jge 0x88ca14 */
  if ((sf == of)) goto L_88ca14;
L_88c9da: /* 88c9da: mov ebx, dword ptr [edi + 0x114] */
  ebx = R32((uint32_t)(edi + 0x114u));
/* 88c9e0: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 88c9e2: lea esi, [edi + 0x110] */
  esi = (uint32_t)(edi + 0x110u);
/* 88c9e8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 88c9ea: mov ecx, esi */
  ecx = esi;
/* 88c9ec: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x88c9f2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 88c9f2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 88c9f4: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 88c9f8: mov eax, ebx */
  eax = ebx;
/* 88c9fa: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 88c9fd: mov dword ptr [ecx + eax + 4], edx */
  W32((uint32_t)(ecx + eax + 0x4u), edx);
/* 88ca01: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 88ca03: mov dword ptr [ecx + eax + 0x28], 0 */
  W32((uint32_t)(ecx + eax + 0x28u), 0x0u);
/* 88ca0b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88ca0d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 88ca11: mov dword ptr [eax + edx], ecx */
  W32((uint32_t)(eax + edx), ecx);
L_88ca14: /* 88ca14: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88ca16: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 88ca1a: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 88ca1e: mov eax, ebx */
  eax = ebx;
/* 88ca20: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 88ca23: mov dword ptr [edx + eax + 0x20], ecx */
  W32((uint32_t)(edx + eax + 0x20u), ecx);
/* 88ca27: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88ca29: fstp dword ptr [edx + eax + 0x24] */
  WF32((uint32_t)(edx + eax + 0x24u), ST0); FPOP();
/* 88ca2d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 88ca2f: lea edx, [ecx + eax + 8] */
  edx = (uint32_t)(ecx + eax + 0x8u);
/* 88ca33: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 88ca37: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 88ca3b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 88ca3d: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 88ca41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88ca42: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88ca43: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 88ca46: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88ca47: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 88ca4a: mov eax, 1 */
  eax = 0x1u;
/* 88ca4f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88ca50: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 88ca51: ret 0x18 */
  esp += 28; SPILL(); return;
L_88ca54: /* 88ca54: xor eax, eax */
  eax = 0;
/* 88ca56: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88ca57: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 88ca58: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_88caa0(void) {
  LOAD_REGS();
L_88caa0: /* 88caa0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88caa1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 88caa2: mov edi, ecx */
  edi = ecx;
/* 88caa4: cmp dword ptr [edi + 0x120], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x120u))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88caae: jge 0x88cba8 */
  if ((sf == of)) goto L_88cba8;
L_88cab4: /* 88cab4: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 88cab8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 88cab9: call 0x6cceaa */
  esp -= 4; W32(esp, 0x88cabeu); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 88cabe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88cac0: mov dword ptr [esp + 4], eax */
  W32((uint32_t)(esp + 0x4u), eax);
/* 88cac4: jl 0x88cba8 */
  if ((sf != of)) goto L_88cba8;
L_88caca: /* 88caca: mov eax, dword ptr [edi + 0x120] */
  eax = R32((uint32_t)(edi + 0x120u));
/* 88cad0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 88cad1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 88cad2: xor ebx, ebx */
  ebx = 0;
/* 88cad4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88cad6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 88cad7: jle 0x88cb0a */
  if ((zf || sf != of)) goto L_88cb0a;
L_88cad9: /* 88cad9: lea esi, [edi + 0x11c] */
  esi = (uint32_t)(edi + 0x11cu);
/* 88cadf: xor ebp, ebp */
  ebp = 0;
L_88cae1: /* 88cae1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88cae3: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 88cae7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 88cae8: lea ecx, [edx + ebp + 4] */
  ecx = (uint32_t)(edx + ebp + 0x4u);
/* 88caec: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x88caf2u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 88caf2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 88caf4: jne 0x88cb06 */
  if (!zf) goto L_88cb06;
L_88caf6: /* 88caf6: mov eax, dword ptr [edi + 0x120] */
  eax = R32((uint32_t)(edi + 0x120u));
/* 88cafc: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 88cafd: add ebp, 0x2c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 88cb00: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 88cb02: jl 0x88cae1 */
  if ((sf != of)) goto L_88cae1;
L_88cb04: /* 88cb04: jmp 0x88cb0a */
  goto L_88cb0a;
L_88cb06: /* 88cb06: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 88cb08: jge 0x88cb44 */
  if ((sf == of)) goto L_88cb44;
L_88cb0a: /* 88cb0a: mov ebx, dword ptr [edi + 0x120] */
  ebx = R32((uint32_t)(edi + 0x120u));
/* 88cb10: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 88cb12: lea esi, [edi + 0x11c] */
  esi = (uint32_t)(edi + 0x11cu);
/* 88cb18: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 88cb1a: mov ecx, esi */
  ecx = esi;
/* 88cb1c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x88cb22u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 88cb22: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 88cb24: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 88cb28: mov eax, ebx */
  eax = ebx;
/* 88cb2a: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 88cb2d: mov dword ptr [ecx + eax + 4], edx */
  W32((uint32_t)(ecx + eax + 0x4u), edx);
/* 88cb31: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 88cb33: mov dword ptr [ecx + eax + 0x28], 0 */
  W32((uint32_t)(ecx + eax + 0x28u), 0x0u);
/* 88cb3b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88cb3d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 88cb41: mov dword ptr [eax + edx], ecx */
  W32((uint32_t)(eax + edx), ecx);
L_88cb44: /* 88cb44: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88cb46: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 88cb4a: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 88cb4e: mov eax, ebx */
  eax = ebx;
/* 88cb50: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 88cb53: mov dword ptr [edx + eax + 0x20], ecx */
  W32((uint32_t)(edx + eax + 0x20u), ecx);
/* 88cb57: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88cb59: fstp dword ptr [edx + eax + 0x24] */
  WF32((uint32_t)(edx + eax + 0x24u), ST0); FPOP();
/* 88cb5d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 88cb5f: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 88cb63: fstp dword ptr [ecx + eax + 0x28] */
  WF32((uint32_t)(ecx + eax + 0x28u), ST0); FPOP();
/* 88cb67: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 88cb69: lea ecx, [edx + eax + 8] */
  ecx = (uint32_t)(edx + eax + 0x8u);
/* 88cb6d: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 88cb71: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 88cb73: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 88cb77: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 88cb7a: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 88cb7e: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 88cb81: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 88cb83: lea edx, [ecx + eax + 0x14] */
  edx = (uint32_t)(ecx + eax + 0x14u);
/* 88cb87: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 88cb8b: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 88cb8f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 88cb91: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 88cb95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 88cb96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 88cb97: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 88cb9a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 88cb9b: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 88cb9e: mov eax, 1 */
  eax = 0x1u;
/* 88cba3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88cba4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 88cba5: ret 0x24 */
  esp += 40; SPILL(); return;
L_88cba8: /* 88cba8: xor eax, eax */
  eax = 0;
/* 88cbaa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 88cbab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 88cbac: ret 0x24 */
  esp += 40; SPILL(); return;
}
