#include "recomp.h"
#include "rec_mod.h"

void f_d94da6(void) {
  LOAD_REGS();
L_d94da6: /* d94da6: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d94da9: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d94dae: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d94db1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d94db2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d94db5: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd94dbau); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d94dba(); return;
}

void f_d94dba(void) {
  LOAD_REGS();
L_d94dba: /* d94dba: push 0xdc2284 */
  { uint32_t v = 0xdc2284u; esp -= 4; W32(esp, v); }
/* d94dbf: push 0xde22fc */
  { uint32_t v = 0xde22fcu; esp -= 4; W32(esp, v); }
/* d94dc4: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd94dcau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d94dca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d94dcd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94dcf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94dd1: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd94dd6u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d94dd6: guest_badaddr(0xd94dd6); return;
}

void f_d94e70(void) {
  LOAD_REGS();
L_d94e70: /* d94e70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d94e71: mov ebp, esp */
  ebp = esp;
/* d94e73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d94e75: push 0xdb97a0 */
  { uint32_t v = 0xdb97a0u; esp -= 4; W32(esp, v); }
/* d94e7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d94e80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94e81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d94e88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d94e89: mov eax, 0x2060 */
  eax = 0x2060u;
/* d94e8e: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd94e93u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d94e93: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d94e94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d94e95: mov esi, ecx */
  esi = ecx;
/* d94e97: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d94e99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d94e9a: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* d94e9d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d94ea0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d94ea1: mov ecx, esi */
  ecx = esi;
/* d94ea3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d94eaa: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0xd94eadu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94ead: mov edx, dword ptr [0xde5184] */
  edx = R32((uint32_t)(0xde5184u));
/* d94eb3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d94eb6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d94eb7: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* d94eba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94ebb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d94ebc: call dword ptr [0xde8f6c] */
  esp -= 4; W32(esp, 0xd94ec2u); SPILL(); call_ind(R32(0xde8f6cu)); if (g_unwind) return; /* USER32!FillRect */ RELOAD();
/* d94ec2: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* d94ec5: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* d94ec8: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* d94ecb: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
/* d94ece: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* d94ed1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d94ed4: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* d94ed7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d94ed9: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* d94edc: call dword ptr [edx + 0xec] */
  { uint32_t t = R32((uint32_t)(edx + 0xecu)); esp -= 4; W32(esp, 0xd94ee2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94ee2: mov ebx, eax */
  ebx = eax;
/* d94ee4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d94ee6: mov ecx, esi */
  ecx = esi;
/* d94ee8: call dword ptr [eax + 0x48] */
  { uint32_t t = R32((uint32_t)(eax + 0x48u)); esp -= 4; W32(esp, 0xd94eebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94eeb: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* d94eee: mov ecx, 1 */
  ecx = 0x1u;
/* d94ef3: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d94ef5: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* d94ef8: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d94efa: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* d94efd: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* d94f00: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* d94f03: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d94f05: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* d94f08: mov ecx, esi */
  ecx = esi;
/* d94f0a: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* d94f0d: mov dword ptr [ebp - 0x44], edi */
  W32((uint32_t)(ebp + 0xffffffbcu), edi);
/* d94f10: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* d94f13: call dword ptr [edx + 0x48] */
  { uint32_t t = R32((uint32_t)(edx + 0x48u)); esp -= 4; W32(esp, 0xd94f16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94f16: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d94f18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94f19: mov ecx, esi */
  ecx = esi;
/* d94f1b: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xd94f1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94f1e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d94f21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94f22: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* d94f25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94f26: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d94f27: call dword ptr [0xde8f6c] */
  esp -= 4; W32(esp, 0xd94f2du); SPILL(); call_ind(R32(0xde8f6cu)); if (g_unwind) return; /* USER32!FillRect */ RELOAD();
/* d94f2d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d94f2f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d94f31: mov ecx, esi */
  ecx = esi;
/* d94f33: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0xd94f36u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94f36: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* d94f39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94f3b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d94f3e: mov ecx, esp */
  ecx = esp;
/* d94f40: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* d94f42: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* d94f45: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* d94f48: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* d94f4b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* d94f4e: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* d94f51: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* d94f54: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d94f57: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d94f59: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d94f5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d94f5c: mov ecx, esi */
  ecx = esi;
/* d94f5e: call dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); esp -= 4; W32(esp, 0xd94f61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94f61: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d94f63: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d94f66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d94f67: call dword ptr [0xde8c88] */
  esp -= 4; W32(esp, 0xd94f6du); SPILL(); call_ind(R32(0xde8c88u)); if (g_unwind) return; /* GDI32!SetBkMode */ RELOAD();
/* d94f6d: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* d94f70: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d94f73: jne 0xd94f91 */
  if (!zf) goto L_d94f91;
L_d94f75: /* d94f75: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* d94f78: call dword ptr [0xde8940] */
  esp -= 4; W32(esp, 0xd94f7eu); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* d94f7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94f7f: lea eax, [ebp - 0x2070] */
  eax = (uint32_t)(ebp + 0xffffdf90u);
/* d94f85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94f86: call dword ptr [0xde88b4] */
  esp -= 4; W32(esp, 0xd94f8cu); SPILL(); f_4e27d9(); if (g_unwind) return; /* Core!?appStrcpy@@YAPAGPAGPBG@Z */ RELOAD();
/* d94f8c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d94f8f: jmp 0xd94fa7 */
  goto L_d94fa7;
L_d94f91: /* d94f91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94f92: lea ecx, [ebp - 0x2070] */
  ecx = (uint32_t)(ebp + 0xffffdf90u);
/* d94f98: push 0xde230c */
  { uint32_t v = 0xde230cu; esp -= 4; W32(esp, v); }
/* d94f9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d94f9e: call dword ptr [0xde88d4] */
  esp -= 4; W32(esp, 0xd94fa4u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* d94fa4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d94fa7: /* d94fa7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d94fa9: mov ecx, esi */
  ecx = esi;
/* d94fab: call dword ptr [edx + 0x48] */
  { uint32_t t = R32((uint32_t)(edx + 0x48u)); esp -= 4; W32(esp, 0xd94faeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94fae: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d94fb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94fb1: mov ecx, esi */
  ecx = esi;
/* d94fb3: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0xd94fb6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d94fb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94fb7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d94fba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d94fbb: call dword ptr [0xde8c94] */
  esp -= 4; W32(esp, 0xd94fc1u); SPILL(); call_ind(R32(0xde8c94u)); if (g_unwind) return; /* GDI32!SetTextColor */ RELOAD();
/* d94fc1: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* d94fc7: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d94fca: je 0xd95017 */
  if (zf) goto L_d95017;
L_d94fcc: /* d94fcc: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* d94fcf: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* d94fd2: lea edx, [ebp - 0x2070] */
  edx = (uint32_t)(ebp + 0xffffdf90u);
/* d94fd8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d94fd9: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* d94fdc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d94fdd: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* d94fe0: mov dword ptr [ebp - 0x44], edi */
  W32((uint32_t)(ebp + 0xffffffbcu), edi);
/* d94fe3: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* d94fe6: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* d94fe9: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* d94fec: call dword ptr [0xde89e8] */
  esp -= 4; W32(esp, 0xd94ff2u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* d94ff2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d94ff5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d94ff7: push 0x8024 */
  { uint32_t v = 0x8024u; esp -= 4; W32(esp, v); }
/* d94ffc: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* d94fff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d95000: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95001: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d95004: lea edx, [ebp - 0x2070] */
  edx = (uint32_t)(ebp + 0xffffdf90u);
/* d9500a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9500b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9500c: call dword ptr [0xde8df8] */
  esp -= 4; W32(esp, 0xd95012u); SPILL(); call_ind(R32(0xde8df8u)); if (g_unwind) return; /* USER32!DrawTextExW */ RELOAD();
/* d95012: jmp 0xd950c2 */
  goto L_d950c2;
L_d95017: /* d95017: lea ecx, [ebp - 0x2070] */
  ecx = (uint32_t)(ebp + 0xffffdf90u);
/* d9501d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9501e: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xd95024u); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* d95024: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d95027: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d95029: jne 0xd95030 */
  if (!zf) goto L_d95030;
L_d9502b: /* d9502b: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* d9502e: jmp 0xd95057 */
  goto L_d95057;
L_d95030: /* d95030: lea edx, [ebp - 0x2070] */
  edx = (uint32_t)(ebp + 0xffffdf90u);
/* d95036: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d95037: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xd9503du); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* d9503d: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d95040: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d95043: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d95046: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d95049: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d9504c: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd95051u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d95051: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d95054: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
L_d95057: /* d95057: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* d9505a: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* d9505d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d9505e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* d95061: lea eax, [ebp - 0x2070] */
  eax = (uint32_t)(ebp + 0xffffdf90u);
/* d95067: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* d9506a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9506b: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* d9506e: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* d95071: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* d95074: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d95077: call dword ptr [0xde89e8] */
  esp -= 4; W32(esp, 0xd9507du); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* d9507d: lea ecx, [ebp - 0x2070] */
  ecx = (uint32_t)(ebp + 0xffffdf90u);
/* d95083: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d95086: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d95087: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* d9508a: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xd95090u); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* d95090: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d95093: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95094: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* d95097: lea edx, [ebp - 0x2070] */
  edx = (uint32_t)(ebp + 0xffffdf90u);
/* d9509d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9509e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9509f: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xd950a5u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* d950a5: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* d950a8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d950ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d950ad: push 0x8024 */
  { uint32_t v = 0x8024u; esp -= 4; W32(esp, v); }
/* d950b2: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* d950b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d950b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d950b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d950b8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d950bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d950bc: call dword ptr [0xde8df4] */
  esp -= 4; W32(esp, 0xd950c2u); SPILL(); call_ind(R32(0xde8df4u)); if (g_unwind) return; /* USER32!DrawTextExA */ RELOAD();
L_d950c2: /* d950c2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d950c4: mov ecx, esi */
  ecx = esi;
/* d950c6: call dword ptr [edx + 0x48] */
  { uint32_t t = R32((uint32_t)(edx + 0x48u)); esp -= 4; W32(esp, 0xd950c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d950c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d950cb: je 0xd951d3 */
  if (zf) goto L_d951d3;
L_d950d1: /* d950d1: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d950d6: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d950d9: je 0xd95129 */
  if (zf) goto L_d95129;
L_d950db: /* d950db: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* d950de: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* d950e1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d950e4: lea ecx, [ebp - 0x2070] */
  ecx = (uint32_t)(ebp + 0xffffdf90u);
/* d950ea: lea edx, [edi + 1] */
  edx = (uint32_t)(edi + 0x1u);
/* d950ed: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d950ee: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* d950f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d950f2: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* d950f5: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* d950f8: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* d950fb: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* d950fe: call dword ptr [0xde89e8] */
  esp -= 4; W32(esp, 0xd95104u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* d95104: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d95107: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9510a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9510c: push 0x8024 */
  { uint32_t v = 0x8024u; esp -= 4; W32(esp, v); }
/* d95111: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* d95114: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d95115: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95116: lea eax, [ebp - 0x2070] */
  eax = (uint32_t)(ebp + 0xffffdf90u);
/* d9511c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9511d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9511e: call dword ptr [0xde8df8] */
  esp -= 4; W32(esp, 0xd95124u); SPILL(); call_ind(R32(0xde8df8u)); if (g_unwind) return; /* USER32!DrawTextExW */ RELOAD();
/* d95124: jmp 0xd951d3 */
  goto L_d951d3;
L_d95129: /* d95129: lea edx, [ebp - 0x2070] */
  edx = (uint32_t)(ebp + 0xffffdf90u);
/* d9512f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d95130: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xd95136u); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* d95136: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d95139: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9513b: jne 0xd95142 */
  if (!zf) goto L_d95142;
L_d9513d: /* d9513d: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* d95140: jmp 0xd95169 */
  goto L_d95169;
L_d95142: /* d95142: lea eax, [ebp - 0x2070] */
  eax = (uint32_t)(ebp + 0xffffdf90u);
/* d95148: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95149: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xd9514fu); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* d9514f: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d95152: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d95155: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d95158: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9515b: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d9515e: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd95163u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d95163: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d95166: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
L_d95169: /* d95169: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* d9516c: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* d9516f: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* d95172: lea ecx, [ebp - 0x2070] */
  ecx = (uint32_t)(ebp + 0xffffdf90u);
/* d95178: lea edx, [edi + 1] */
  edx = (uint32_t)(edi + 0x1u);
/* d9517b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d9517c: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* d9517f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d95180: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* d95183: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* d95186: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* d95189: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* d9518c: call dword ptr [0xde89e8] */
  esp -= 4; W32(esp, 0xd95192u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* d95192: lea edx, [ebp - 0x2070] */
  edx = (uint32_t)(ebp + 0xffffdf90u);
/* d95198: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9519b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9519c: mov edi, eax */
  edi = eax;
/* d9519e: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xd951a4u); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* d951a4: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* d951a7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d951aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d951ab: lea eax, [ebp - 0x2070] */
  eax = (uint32_t)(ebp + 0xffffdf90u);
/* d951b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d951b2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d951b3: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xd951b9u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* d951b9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d951bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d951be: push 0x8024 */
  { uint32_t v = 0x8024u; esp -= 4; W32(esp, v); }
/* d951c3: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* d951c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d951c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d951c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d951c9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d951cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d951cd: call dword ptr [0xde8df4] */
  esp -= 4; W32(esp, 0xd951d3u); SPILL(); call_ind(R32(0xde8df4u)); if (g_unwind) return; /* USER32!DrawTextExA */ RELOAD();
L_d951d3: /* d951d3: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* d951d6: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* d951d9: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* d951dc: mov edi, dword ptr [ebp - 0x60] */
  edi = R32((uint32_t)(ebp + 0xffffffa0u));
/* d951df: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* d951e2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d951e5: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* d951e8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d951ea: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* d951ed: call dword ptr [edx + 0xec] */
  { uint32_t t = R32((uint32_t)(edx + 0xecu)); esp -= 4; W32(esp, 0xd951f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d951f3: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* d951f6: mov ebx, eax */
  ebx = eax;
/* d951f8: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* d951fb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d951fc: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* d951ff: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d95201: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d95204: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* d95207: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d95209: mov ecx, esi */
  ecx = esi;
/* d9520b: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* d9520e: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* d95211: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* d95214: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* d95217: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0xd9521au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9521a: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d9521d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9521e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* d95221: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d95222: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d95223: call dword ptr [0xde8f6c] */
  esp -= 4; W32(esp, 0xd95229u); SPILL(); call_ind(R32(0xde8f6cu)); if (g_unwind) return; /* USER32!FillRect */ RELOAD();
/* d95229: sub edi, dword ptr [esi + 0x20] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d9522c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9522e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d95230: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d95231: mov ecx, esi */
  ecx = esi;
/* d95233: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* d95236: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0xd95239u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d95239: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9523b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9523d: mov ecx, esi */
  ecx = esi;
/* d9523f: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* d95242: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0xd95245u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d95245: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95246: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d95249: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9524a: call dword ptr [0xde8c94] */
  esp -= 4; W32(esp, 0xd95250u); SPILL(); call_ind(R32(0xde8c94u)); if (g_unwind) return; /* GDI32!SetTextColor */ RELOAD();
/* d95250: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* d95253: cmp dword ptr [eax + 0x34], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x34u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d95257: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* d9525a: je 0xd95262 */
  if (zf) goto L_d95262;
L_d9525c: /* d9525c: cmp dword ptr [esi + 0x44], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d95260: je 0xd95285 */
  if (zf) goto L_d95285;
L_d95262: /* d95262: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* d95265: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d95267: je 0xd95387 */
  if (zf) goto L_d95387;
L_d9526d: /* d9526d: call dword ptr [0xde89b4] */
  esp -= 4; W32(esp, 0xd95273u); SPILL(); f_4e148d(); if (g_unwind) return; /* Core!?StaticClass@UArrayProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d95273: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* d95276: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95277: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd9527du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d9527d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9527f: je 0xd95387 */
  if (zf) goto L_d95387;
L_d95285: /* d95285: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* d9528b: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9528e: push 0xde2318 */
  { uint32_t v = 0xde2318u; esp -= 4; W32(esp, v); }
/* d95293: je 0xd952ee */
  if (zf) goto L_d952ee;
L_d95295: /* d95295: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* d95298: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* d9529b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d9529c: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* d9529f: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* d952a2: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* d952a5: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* d952a8: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* d952ab: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* d952ae: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d952b1: call dword ptr [0xde89e8] */
  esp -= 4; W32(esp, 0xd952b7u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* d952b7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d952ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d952bc: push 0x8024 */
  { uint32_t v = 0x8024u; esp -= 4; W32(esp, v); }
/* d952c1: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* d952c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d952c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d952c6: push 0xde2318 */
  { uint32_t v = 0xde2318u; esp -= 4; W32(esp, v); }
L_d952cb: /* d952cb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d952ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_d952cf: /* d952cf: call dword ptr [0xde8df8] */
  esp -= 4; W32(esp, 0xd952d5u); SPILL(); call_ind(R32(0xde8df8u)); if (g_unwind) return; /* USER32!DrawTextExW */ RELOAD();
L_d952d5: /* d952d5: lea esp, [ebp - 0x207c] */
  esp = (uint32_t)(ebp + 0xffffdf84u);
/* d952db: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d952de: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d952e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d952e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d952e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d952e8: mov esp, ebp */
  esp = ebp;
/* d952ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d952eb: ret 4 */
  esp += 8; SPILL(); return;
L_d952ee: /* d952ee: mov esi, dword ptr [0xde88c8] */
  esi = R32((uint32_t)(0xde88c8u));
/* d952f4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd952f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d952f6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d952f9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d952fb: jne 0xd95301 */
  if (!zf) goto L_d95301;
L_d952fd: /* d952fd: xor esi, esi */
  esi = 0;
/* d952ff: jmp 0xd95321 */
  goto L_d95321;
L_d95301: /* d95301: push 0xde2318 */
  { uint32_t v = 0xde2318u; esp -= 4; W32(esp, v); }
/* d95306: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd95308u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d95308: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9530b: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d9530e: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d95311: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d95314: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d95317: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd9531cu); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d9531c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9531f: mov esi, esp */
  esi = esp;
L_d95321: /* d95321: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* d95324: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* d95327: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* d9532a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d9532b: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* d9532e: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* d95331: push 0xde2318 */
  { uint32_t v = 0xde2318u; esp -= 4; W32(esp, v); }
/* d95336: mov dword ptr [ebp - 0x44], ebx */
  W32((uint32_t)(ebp + 0xffffffbcu), ebx);
/* d95339: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* d9533c: mov dword ptr [ebp - 0x3c], edi */
  W32((uint32_t)(ebp + 0xffffffc4u), edi);
/* d9533f: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* d95342: call dword ptr [0xde89e8] */
  esp -= 4; W32(esp, 0xd95348u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* d95348: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9534b: push 0xde2318 */
  { uint32_t v = 0xde2318u; esp -= 4; W32(esp, v); }
/* d95350: mov edi, eax */
  edi = eax;
/* d95352: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xd95358u); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* d95358: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9535b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9535c: push 0xde2318 */
  { uint32_t v = 0xde2318u; esp -= 4; W32(esp, v); }
/* d95361: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d95362: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xd95368u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* d95368: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d9536b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9536e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d95370: push 0x8024 */
  { uint32_t v = 0x8024u; esp -= 4; W32(esp, v); }
/* d95375: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* d95378: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d95379: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9537a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9537b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9537c: call dword ptr [0xde8df4] */
  esp -= 4; W32(esp, 0xd95382u); SPILL(); call_ind(R32(0xde8df4u)); if (g_unwind) return; /* USER32!DrawTextExA */ RELOAD();
/* d95382: jmp 0xd952d5 */
  goto L_d952d5;
L_d95387: /* d95387: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* d9538a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9538c: je 0xd952d5 */
  if (zf) goto L_d952d5;
L_d95392: /* d95392: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* d95395: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d95397: je 0xd9548c */
  if (zf) goto L_d9548c;
L_d9539d: /* d9539d: call dword ptr [0xde89cc] */
  esp -= 4; W32(esp, 0xd953a3u); SPILL(); f_4e381e(); if (g_unwind) return; /* Core!?StaticClass@UStructProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d953a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d953a4: mov ecx, edi */
  ecx = edi;
/* d953a6: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd953acu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d953ac: xor ebx, ebx */
  ebx = 0;
/* d953ae: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d953b0: je 0xd9548e */
  if (zf) goto L_d9548e;
L_d953b6: /* d953b6: push 0x5a */
  { uint32_t v = 0x5au; esp -= 4; W32(esp, v); }
/* d953b8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d953bb: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xd953c1u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* d953c1: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* d953c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d953c5: call 0xd81384 */
  esp -= 4; W32(esp, 0xd953cau); SPILL(); f_d81384(); if (g_unwind) return; RELOAD();
/* d953ca: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d953cd: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* d953d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d953d1: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* d953d4: call dword ptr [0xde89e4] */
  esp -= 4; W32(esp, 0xd953dau); SPILL(); f_4e360c(); if (g_unwind) return; /* Core!?GetFName@UObject@@QBE?BVFName@@XZ */ RELOAD();
/* d953da: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* d953dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d953de: mov ecx, eax */
  ecx = eax;
/* d953e0: call dword ptr [0xde89e0] */
  esp -= 4; W32(esp, 0xd953e6u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* d953e6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d953e8: je 0xd9548e */
  if (zf) goto L_d9548e;
L_d953ee: /* d953ee: mov eax, 4 */
  eax = 0x4u;
/* d953f3: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* d953f6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* d953f9: mov eax, 0xfffffffc */
  eax = 0xfffffffcu;
/* d953fe: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d95401: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d95404: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* d95407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95408: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* d9540b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9540c: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d9540f: call 0xd81258 */
  esp -= 4; W32(esp, 0xd95414u); SPILL(); f_d81258(); if (g_unwind) return; RELOAD();
/* d95414: mov edx, dword ptr [0xde50e4] */
  edx = R32((uint32_t)(0xde50e4u));
/* d9541a: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* d9541d: mov ebx, dword ptr [0xde8f6c] */
  ebx = R32((uint32_t)(0xde8f6cu));
/* d95423: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d95424: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95425: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d95426: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd95428u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d95428: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* d9542b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* d9542d: mov ecx, eax */
  ecx = eax;
/* d9542f: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d95432: mov edx, eax */
  edx = eax;
/* d95434: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* d95437: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* d9543d: shl edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* d95440: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* d95443: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d95445: and eax, 0xff00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d9544a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d9544c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9544d: call dword ptr [0xde8c80] */
  esp -= 4; W32(esp, 0xd95453u); SPILL(); call_ind(R32(0xde8c80u)); if (g_unwind) return; /* GDI32!CreateSolidBrush */ RELOAD();
/* d95453: mov esi, eax */
  esi = eax;
/* d95455: mov eax, 5 */
  eax = 0x5u;
/* d9545a: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* d9545d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* d95460: mov eax, 0xfffffffb */
  eax = 0xfffffffbu;
/* d95465: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d95468: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9546b: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* d9546e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9546f: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* d95472: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d95473: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d95476: call 0xd81258 */
  esp -= 4; W32(esp, 0xd9547bu); SPILL(); f_d81258(); if (g_unwind) return; RELOAD();
/* d9547b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9547c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9547d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9547e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd95480u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d95480: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d95481: call dword ptr [0xde8c5c] */
  esp -= 4; W32(esp, 0xd95487u); SPILL(); call_ind(R32(0xde8c5cu)); if (g_unwind) return; /* GDI32!DeleteObject */ RELOAD();
/* d95487: jmp 0xd952d5 */
  goto L_d952d5;
L_d9548c: /* d9548c: xor ebx, ebx */
  ebx = 0;
L_d9548e: /* d9548e: lea edx, [ebp - 0x2070] */
  edx = (uint32_t)(ebp + 0xffffdf90u);
/* d95494: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d95495: mov ecx, esi */
  ecx = esi;
/* d95497: mov word ptr [ebp - 0x2070], bx */
  W16((uint32_t)(ebp + 0xffffdf90u), (ebx & 0xffffu));
/* d9549e: call 0xd824be */
  esp -= 4; W32(esp, 0xd954a3u); SPILL(); f_d824be(); if (g_unwind) return; RELOAD();
/* d954a3: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* d954a6: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d954a8: je 0xd954c1 */
  if (zf) goto L_d954c1;
L_d954aa: /* d954aa: call dword ptr [0xde899c] */
  esp -= 4; W32(esp, 0xd954b0u); SPILL(); f_4e2e6e(); if (g_unwind) return; /* Core!?StaticClass@UFloatProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d954b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d954b1: mov ecx, edi */
  ecx = edi;
/* d954b3: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd954b9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d954b9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d954bb: jne 0xd95600 */
  if (!zf) goto L_d95600;
L_d954c1: /* d954c1: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* d954c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d954c5: call 0xd82888 */
  esp -= 4; W32(esp, 0xd954cau); SPILL(); f_d82888(); if (g_unwind) return; RELOAD();
/* d954ca: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d954cd: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d954cf: jne 0xd95600 */
  if (!zf) goto L_d95600;
L_d954d5: /* d954d5: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d954d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d954d9: call 0xd82919 */
  esp -= 4; W32(esp, 0xd954deu); SPILL(); f_d82919(); if (g_unwind) return; RELOAD();
/* d954de: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d954e1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d954e3: je 0xd954fc */
  if (zf) goto L_d954fc;
L_d954e5: /* d954e5: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
/* d954e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d954e9: call 0xd82919 */
  esp -= 4; W32(esp, 0xd954eeu); SPILL(); f_d82919(); if (g_unwind) return; RELOAD();
/* d954ee: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* d954f1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d954f4: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d954f6: je 0xd95600 */
  if (zf) goto L_d95600;
L_d954fc: /* d954fc: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d95501: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d95503: je 0xd95553 */
  if (zf) goto L_d95553;
L_d95505: /* d95505: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* d95508: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d95509: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* d9550c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9550d: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d95510: mov dword ptr [ebp - 0x20], 4 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x4u);
/* d95517: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* d9551e: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* d95521: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* d95524: call 0xd81258 */
  esp -= 4; W32(esp, 0xd95529u); SPILL(); f_d81258(); if (g_unwind) return; RELOAD();
/* d95529: mov esi, eax */
  esi = eax;
/* d9552b: lea eax, [ebp - 0x2070] */
  eax = (uint32_t)(ebp + 0xffffdf90u);
/* d95531: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95532: call dword ptr [0xde89e8] */
  esp -= 4; W32(esp, 0xd95538u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* d95538: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d9553b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9553e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9553f: push 0x8024 */
  { uint32_t v = 0x8024u; esp -= 4; W32(esp, v); }
/* d95544: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d95545: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95546: lea ecx, [ebp - 0x2070] */
  ecx = (uint32_t)(ebp + 0xffffdf90u);
/* d9554c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9554d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9554e: jmp 0xd952cf */
  goto L_d952cf;
L_d95553: /* d95553: mov esi, dword ptr [0xde88c8] */
  esi = R32((uint32_t)(0xde88c8u));
/* d95559: lea eax, [ebp - 0x2070] */
  eax = (uint32_t)(ebp + 0xffffdf90u);
/* d9555f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95560: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd95562u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d95562: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d95565: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d95567: je 0xd9558b */
  if (zf) goto L_d9558b;
L_d95569: /* d95569: lea ecx, [ebp - 0x2070] */
  ecx = (uint32_t)(ebp + 0xffffdf90u);
/* d9556f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d95570: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd95572u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d95572: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d95575: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d95578: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9557b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9557e: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d95581: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd95586u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d95586: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d95589: mov ebx, esp */
  ebx = esp;
L_d9558b: /* d9558b: xor eax, eax */
  eax = 0;
/* d9558d: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* d95590: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d95593: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d95596: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d95597: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* d9559a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9559b: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d9559e: mov dword ptr [ebp - 0x20], 4 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x4u);
/* d955a5: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* d955ac: call 0xd81258 */
  esp -= 4; W32(esp, 0xd955b1u); SPILL(); f_d81258(); if (g_unwind) return; RELOAD();
/* d955b1: lea ecx, [ebp - 0x2070] */
  ecx = (uint32_t)(ebp + 0xffffdf90u);
/* d955b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d955b8: mov esi, eax */
  esi = eax;
/* d955ba: call dword ptr [0xde89e8] */
  esp -= 4; W32(esp, 0xd955c0u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* d955c0: lea edx, [ebp - 0x2070] */
  edx = (uint32_t)(ebp + 0xffffdf90u);
/* d955c6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d955c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d955ca: mov edi, eax */
  edi = eax;
/* d955cc: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xd955d2u); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* d955d2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d955d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d955d6: lea eax, [ebp - 0x2070] */
  eax = (uint32_t)(ebp + 0xffffdf90u);
/* d955dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d955dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d955de: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xd955e4u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* d955e4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d955e7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d955ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d955ec: push 0x8024 */
  { uint32_t v = 0x8024u; esp -= 4; W32(esp, v); }
/* d955f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d955f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d955f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d955f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d955f5: call dword ptr [0xde8df4] */
  esp -= 4; W32(esp, 0xd955fbu); SPILL(); call_ind(R32(0xde8df4u)); if (g_unwind) return; /* USER32!DrawTextExA */ RELOAD();
/* d955fb: jmp 0xd952d5 */
  goto L_d952d5;
L_d95600: /* d95600: add esi, 0x74 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d95603: mov ecx, esi */
  ecx = esi;
/* d95605: call dword ptr [0xde88bc] */
  esp -= 4; W32(esp, 0xd9560bu); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* d9560b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9560d: jne 0xd9561e */
  if (!zf) goto L_d9561e;
L_d9560f: /* d9560f: lea edx, [ebp - 0x2070] */
  edx = (uint32_t)(ebp + 0xffffdf90u);
/* d95615: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d95616: mov ecx, esi */
  ecx = esi;
/* d95618: call dword ptr [0xde88e8] */
  esp -= 4; W32(esp, 0xd9561eu); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_d9561e: /* d9561e: mov ecx, esi */
  ecx = esi;
/* d95620: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd95626u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d95626: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95627: lea eax, [ebp - 0x2070] */
  eax = (uint32_t)(ebp + 0xffffdf90u);
/* d9562d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9562e: call dword ptr [0xde88b4] */
  esp -= 4; W32(esp, 0xd95634u); SPILL(); f_4e27d9(); if (g_unwind) return; /* Core!?appStrcpy@@YAPAGPAGPBG@Z */ RELOAD();
/* d95634: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* d9563a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9563c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9563f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d95641: je 0xd9568d */
  if (zf) goto L_d9568d;
L_d95643: /* d95643: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* d95646: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d95647: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* d9564a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9564b: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d9564e: mov dword ptr [ebp - 0x20], 4 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x4u);
/* d95655: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* d9565c: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* d9565f: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* d95662: call 0xd81258 */
  esp -= 4; W32(esp, 0xd95667u); SPILL(); f_d81258(); if (g_unwind) return; RELOAD();
/* d95667: lea ecx, [ebp - 0x2070] */
  ecx = (uint32_t)(ebp + 0xffffdf90u);
/* d9566d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9566e: mov esi, eax */
  esi = eax;
/* d95670: call dword ptr [0xde89e8] */
  esp -= 4; W32(esp, 0xd95676u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* d95676: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d95679: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9567a: push 0x8024 */
  { uint32_t v = 0x8024u; esp -= 4; W32(esp, v); }
/* d9567f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d95680: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95681: lea edx, [ebp - 0x2070] */
  edx = (uint32_t)(ebp + 0xffffdf90u);
/* d95687: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d95688: jmp 0xd952cb */
  goto L_d952cb;
L_d9568d: /* d9568d: mov esi, dword ptr [0xde88c8] */
  esi = R32((uint32_t)(0xde88c8u));
/* d95693: lea ecx, [ebp - 0x2070] */
  ecx = (uint32_t)(ebp + 0xffffdf90u);
/* d95699: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9569a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd9569cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9569c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9569f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d956a1: je 0xd956c5 */
  if (zf) goto L_d956c5;
L_d956a3: /* d956a3: lea edx, [ebp - 0x2070] */
  edx = (uint32_t)(ebp + 0xffffdf90u);
/* d956a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d956aa: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd956acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d956ac: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d956af: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d956b2: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d956b5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d956b8: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d956bb: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd956c0u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d956c0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d956c3: mov ebx, esp */
  ebx = esp;
L_d956c5: /* d956c5: xor eax, eax */
  eax = 0;
/* d956c7: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d956ca: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d956cd: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* d956d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d956d1: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* d956d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d956d5: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d956d8: mov dword ptr [ebp - 0x20], 4 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x4u);
/* d956df: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* d956e6: call 0xd81258 */
  esp -= 4; W32(esp, 0xd956ebu); SPILL(); f_d81258(); if (g_unwind) return; RELOAD();
/* d956eb: lea edx, [ebp - 0x2070] */
  edx = (uint32_t)(ebp + 0xffffdf90u);
/* d956f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d956f2: mov esi, eax */
  esi = eax;
/* d956f4: call dword ptr [0xde89e8] */
  esp -= 4; W32(esp, 0xd956fau); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* d956fa: mov edi, eax */
  edi = eax;
/* d956fc: lea eax, [ebp - 0x2070] */
  eax = (uint32_t)(ebp + 0xffffdf90u);
/* d95702: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d95705: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95706: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xd9570cu); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* d9570c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9570f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95710: lea ecx, [ebp - 0x2070] */
  ecx = (uint32_t)(ebp + 0xffffdf90u);
/* d95716: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d95717: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d95718: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xd9571eu); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* d9571e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d95721: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d95724: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d95726: push 0x8024 */
  { uint32_t v = 0x8024u; esp -= 4; W32(esp, v); }
/* d9572b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9572c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9572d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9572e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9572f: call dword ptr [0xde8df4] */
  esp -= 4; W32(esp, 0xd95735u); SPILL(); call_ind(R32(0xde8df4u)); if (g_unwind) return; /* USER32!DrawTextExA */ RELOAD();
/* d95735: jmp 0xd952d5 */
  goto L_d952d5;
}

void f_d9573a(void) {
  LOAD_REGS();
L_d9573a: /* d9573a: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* d9573d: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d95742: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* d95745: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d95746: mov dword ptr [ebp - 0x6c], eax */
  W32((uint32_t)(ebp + 0xffffff94u), eax);
/* d95749: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9574eu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9574e(); return;
}

void f_d9574e(void) {
  LOAD_REGS();
L_d9574e: /* d9574e: push 0xdc22d0 */
  { uint32_t v = 0xdc22d0u; esp -= 4; W32(esp, v); }
/* d95753: push 0xde2320 */
  { uint32_t v = 0xde2320u; esp -= 4; W32(esp, v); }
/* d95758: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9575eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9575e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d95761: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d95763: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d95765: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9576au); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9576a: guest_badaddr(0xd9576a); return;
}

void f_d959b0(void) {
  LOAD_REGS();
L_d959b0: /* d959b0: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* d959b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d959b5: je 0xd959c2 */
  if (zf) goto L_d959c2;
L_d959b7: /* d959b7: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d959ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d959bb: call dword ptr [0xde8ed8] */
  esp -= 4; W32(esp, 0xd959c1u); SPILL(); call_ind(R32(0xde8ed8u)); if (g_unwind) return; /* USER32!SetFocus */ RELOAD();
/* d959c1: ret  */
  esp += 4; SPILL(); return;
L_d959c2: /* d959c2: mov eax, dword ptr [ecx + 0x4c] */
  eax = R32((uint32_t)(ecx + 0x4cu));
/* d959c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d959c7: je 0xd959d4 */
  if (zf) goto L_d959d4;
L_d959c9: /* d959c9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* d959cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d959cd: call dword ptr [0xde8ed8] */
  esp -= 4; W32(esp, 0xd959d3u); SPILL(); call_ind(R32(0xde8ed8u)); if (g_unwind) return; /* USER32!SetFocus */ RELOAD();
/* d959d3: ret  */
  esp += 4; SPILL(); return;
L_d959d4: /* d959d4: mov ecx, dword ptr [ecx + 0x50] */
  ecx = R32((uint32_t)(ecx + 0x50u));
/* d959d7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d959d9: je 0xd959e5 */
  if (zf) goto L_d959e5;
L_d959db: /* d959db: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* d959de: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d959df: call dword ptr [0xde8ed8] */
  esp -= 4; W32(esp, 0xd959e5u); SPILL(); call_ind(R32(0xde8ed8u)); if (g_unwind) return; /* USER32!SetFocus */ RELOAD();
L_d959e5: /* d959e5: ret  */
  esp += 4; SPILL(); return;
}

void f_d95a00(void) {
  LOAD_REGS();
L_d95a00: /* d95a00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d95a01: mov ebp, esp */
  ebp = esp;
/* d95a03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d95a05: push 0xdb97b0 */
  { uint32_t v = 0xdb97b0u; esp -= 4; W32(esp, v); }
/* d95a0a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d95a10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95a11: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d95a18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d95a1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d95a1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d95a1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d95a1e: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* d95a21: cmp edi, 0xd */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d95a24: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d95a27: mov esi, ecx */
  esi = ecx;
/* d95a29: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d95a30: jne 0xd95a82 */
  if (!zf) goto L_d95a82;
L_d95a32: /* d95a32: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* d95a35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d95a37: je 0xd95a57 */
  if (zf) goto L_d95a57;
L_d95a39: /* d95a39: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d95a3c: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* d95a3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95a3f: call 0xd824e1 */
  esp -= 4; W32(esp, 0xd95a44u); SPILL(); f_d824e1(); if (g_unwind) return; RELOAD();
/* d95a44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d95a47: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d95a4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d95a4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d95a50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d95a51: mov esp, ebp */
  esp = ebp;
/* d95a53: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d95a54: ret 8 */
  esp += 12; SPILL(); return;
L_d95a57: /* d95a57: mov edx, dword ptr [esi - 4] */
  edx = R32((uint32_t)(esi + 0xfffffffcu));
/* d95a5a: lea ecx, [esi - 4] */
  ecx = (uint32_t)(esi + 0xfffffffcu);
/* d95a5d: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0xd95a63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d95a63: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d95a66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d95a67: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d95a68: mov ecx, esi */
  ecx = esi;
/* d95a6a: call 0xd81677 */
  esp -= 4; W32(esp, 0xd95a6fu); SPILL(); f_d81677(); if (g_unwind) return; RELOAD();
/* d95a6f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d95a72: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d95a79: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d95a7a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d95a7b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d95a7c: mov esp, ebp */
  esp = ebp;
/* d95a7e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d95a7f: ret 8 */
  esp += 12; SPILL(); return;
L_d95a82: /* d95a82: cmp edi, 0x1b */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d95a85: jne 0xd95a93 */
  if (!zf) goto L_d95a93;
L_d95a87: /* d95a87: mov eax, dword ptr [esi - 4] */
  eax = R32((uint32_t)(esi + 0xfffffffcu));
/* d95a8a: lea ecx, [esi - 4] */
  ecx = (uint32_t)(esi + 0xfffffffcu);
/* d95a8d: call dword ptr [eax + 0xa0] */
  { uint32_t t = R32((uint32_t)(eax + 0xa0u)); esp -= 4; W32(esp, 0xd95a93u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d95a93: /* d95a93: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d95a96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d95a97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d95a98: mov ecx, esi */
  ecx = esi;
/* d95a9a: call 0xd81677 */
  esp -= 4; W32(esp, 0xd95a9fu); SPILL(); f_d81677(); if (g_unwind) return; RELOAD();
/* d95a9f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d95aa2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d95aa3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d95aa4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d95aab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d95aac: mov esp, ebp */
  esp = ebp;
/* d95aae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d95aaf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d95ab2(void) {
  LOAD_REGS();
L_d95ab2: /* d95ab2: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d95ab5: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d95aba: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* d95abd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95abe: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* d95ac1: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd95ac6u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d95ac6(); return;
}

void f_d95ac6(void) {
  LOAD_REGS();
L_d95ac6: /* d95ac6: push 0xdc2300 */
  { uint32_t v = 0xdc2300u; esp -= 4; W32(esp, v); }
/* d95acb: push 0xde2564 */
  { uint32_t v = 0xde2564u; esp -= 4; W32(esp, v); }
/* d95ad0: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd95ad6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d95ad6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d95ad9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d95adb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d95add: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd95ae2u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d95ae2: guest_badaddr(0xd95ae2); return;
}

void f_d95b30(void) {
  LOAD_REGS();
L_d95b30: /* d95b30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d95b31: mov ebp, esp */
  ebp = esp;
/* d95b33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d95b35: push 0xdb97c0 */
  { uint32_t v = 0xdb97c0u; esp -= 4; W32(esp, v); }
/* d95b3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d95b40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95b41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d95b48: sub esp, 0x20c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d95b4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d95b4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d95b50: mov esi, ecx */
  esi = ecx;
/* d95b52: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d95b55: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d95b57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d95b58: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d95b5b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d95b62: je 0xd95bac */
  if (zf) goto L_d95bac;
L_d95b64: /* d95b64: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* d95b67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d95b69: je 0xd95bac */
  if (zf) goto L_d95bac;
L_d95b6b: /* d95b6b: call 0xd814e2 */
  esp -= 4; W32(esp, 0xd95b70u); SPILL(); f_d814e2(); if (g_unwind) return; RELOAD();
/* d95b70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95b71: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* d95b77: push 0xde257c */
  { uint32_t v = 0xde257cu; esp -= 4; W32(esp, v); }
/* d95b7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95b7d: call dword ptr [0xde88d4] */
  esp -= 4; W32(esp, 0xd95b83u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* d95b83: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* d95b86: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d95b88: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d95b8b: lea eax, [ebp - 0x218] */
  eax = (uint32_t)(ebp + 0xfffffde8u);
/* d95b91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95b92: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0xd95b95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d95b95: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* d95b98: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d95b9a: call 0xd8105f */
  esp -= 4; W32(esp, 0xd95b9fu); SPILL(); f_d8105f(); if (g_unwind) return; RELOAD();
/* d95b9f: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* d95ba2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* d95ba5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d95ba6: call dword ptr [0xde8f38] */
  esp -= 4; W32(esp, 0xd95bacu); SPILL(); call_ind(R32(0xde8f38u)); if (g_unwind) return; /* USER32!UpdateWindow */ RELOAD();
L_d95bac: /* d95bac: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d95baf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d95bb0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d95bb1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d95bb8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d95bb9: mov esp, ebp */
  esp = ebp;
/* d95bbb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d95bbc: ret  */
  esp += 4; SPILL(); return;
}

void f_d95bbd(void) {
  LOAD_REGS();
L_d95bbd: /* d95bbd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d95bc0: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d95bc5: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d95bc8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d95bc9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d95bcc: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd95bd1u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d95bd1(); return;
}

void f_d95bd1(void) {
  LOAD_REGS();
L_d95bd1: /* d95bd1: push 0xdc2340 */
  { uint32_t v = 0xdc2340u; esp -= 4; W32(esp, v); }
/* d95bd6: push 0xde2584 */
  { uint32_t v = 0xde2584u; esp -= 4; W32(esp, v); }
/* d95bdb: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd95be1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d95be1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d95be4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d95be6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d95be8: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd95bedu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d95bed: guest_badaddr(0xd95bed); return;
}

void f_d95c20(void) {
  LOAD_REGS();
L_d95c20: /* d95c20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d95c21: mov ebp, esp */
  ebp = esp;
/* d95c23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d95c25: push 0xdb97d9 */
  { uint32_t v = 0xdb97d9u; esp -= 4; W32(esp, v); }
/* d95c2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d95c30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95c31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d95c38: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d95c3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d95c3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d95c3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d95c3e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d95c41: mov esi, ecx */
  esi = ecx;
/* d95c43: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d95c4a: call 0xd816bd */
  esp -= 4; W32(esp, 0xd95c4fu); SPILL(); f_d816bd(); if (g_unwind) return; RELOAD();
/* d95c4f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d95c51: mov ecx, esi */
  ecx = esi;
/* d95c53: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0xd95c59u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d95c59: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* d95c5c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d95c5e: je 0xd95ca1 */
  if (zf) goto L_d95ca1;
L_d95c60: /* d95c60: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d95c63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95c64: call dword ptr [0xde8ed8] */
  esp -= 4; W32(esp, 0xd95c6au); SPILL(); call_ind(R32(0xde8ed8u)); if (g_unwind) return; /* USER32!SetFocus */ RELOAD();
/* d95c6a: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* d95c6d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d95c6f: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* d95c72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95c73: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xd95c76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d95c76: mov ecx, eax */
  ecx = eax;
/* d95c78: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d95c7c: call dword ptr [0xde88bc] */
  esp -= 4; W32(esp, 0xd95c82u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* d95c82: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* d95c85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95c86: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d95c88: call 0xd81b81 */
  esp -= 4; W32(esp, 0xd95c8du); SPILL(); f_d81b81(); if (g_unwind) return; RELOAD();
/* d95c8d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d95c90: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d95c94: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd95c9au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d95c9a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d95c9c: mov ecx, esi */
  ecx = esi;
/* d95c9e: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xd95ca1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d95ca1: /* d95ca1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d95ca4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d95ca5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d95ca6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d95cad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d95cae: mov esp, ebp */
  esp = ebp;
/* d95cb0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d95cb1: ret  */
  esp += 4; SPILL(); return;
}

void f_d95cb2(void) {
  LOAD_REGS();
L_d95cb2: /* d95cb2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d95cb5: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d95cba: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d95cbd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d95cbe: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d95cc1: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd95cc6u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d95cc6(); return;
}

void f_d95cc6(void) {
  LOAD_REGS();
L_d95cc6: /* d95cc6: push 0xdc2398 */
  { uint32_t v = 0xdc2398u; esp -= 4; W32(esp, v); }
/* d95ccb: push 0xde258c */
  { uint32_t v = 0xde258cu; esp -= 4; W32(esp, v); }
/* d95cd0: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd95cd6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d95cd6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d95cd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d95cdb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d95cdd: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd95ce2u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d95ce2: guest_badaddr(0xd95ce2); return;
}

void f_d95d30(void) {
  LOAD_REGS();
L_d95d30: /* d95d30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d95d31: mov ebp, esp */
  ebp = esp;
/* d95d33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d95d35: push 0xdb97f0 */
  { uint32_t v = 0xdb97f0u; esp -= 4; W32(esp, v); }
/* d95d3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d95d40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95d41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d95d48: sub esp, 0x23c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x23cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d95d4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d95d4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d95d50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d95d51: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d95d54: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d95d56: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d95d59: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d95d5b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d95d5c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d95d63: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0xd95d66u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d95d66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d95d68: je 0xd95d6e */
  if (zf) goto L_d95d6e;
L_d95d6a: /* d95d6a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d95d6c: jmp 0xd95d70 */
  goto L_d95d70;
L_d95d6e: /* d95d6e: xor edx, edx */
  edx = 0;
L_d95d70: /* d95d70: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* d95d73: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* d95d76: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* d95d79: mov ecx, 0x24 */
  ecx = 0x24u;
/* d95d7e: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* d95d81: xor eax, eax */
  eax = 0;
/* d95d83: mov ebx, ecx */
  ebx = ecx;
/* d95d85: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d95d88: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* d95d8b: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* d95d8d: mov ecx, ebx */
  ecx = ebx;
/* d95d8f: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* d95d91: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d95d94: mov dword ptr [ebp - 0x44], 0x24 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x24u);
/* d95d9b: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* d95d9e: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* d95da1: xor ecx, ecx */
  ecx = 0;
/* d95da3: mov ch, dl */
  ecx = (ecx & 0xffff00ffu) | (((uint32_t)((edx & 0xffu)) & 0xffu) << 8);
/* d95da5: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* d95da8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d95dab: movzx edx, dh */
  edx = (uint32_t)(((edx >> 8) & 0xffu));
/* d95dae: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d95db1: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* d95db3: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* d95db6: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* d95db9: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* d95dbb: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* d95dbe: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* d95dc1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d95dc2: mov dword ptr [ebp - 0x34], 0xde4f78 */
  W32((uint32_t)(ebp + 0xffffffccu), 0xde4f78u);
/* d95dc9: mov dword ptr [ebp - 0x30], 3 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x3u);
/* d95dd0: call dword ptr [0xde8ff0] */
  esp -= 4; W32(esp, 0xd95dd6u); SPILL(); call_ind(R32(0xde8ff0u)); if (g_unwind) return; /* comdlg32!ChooseColorA */ RELOAD();
/* d95dd6: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d95dd9: jne 0xd95e3a */
  if (!zf) goto L_d95e3a;
L_d95ddb: /* d95ddb: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* d95dde: mov edx, eax */
  edx = eax;
/* d95de0: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* d95de3: movzx ecx, dl */
  ecx = (uint32_t)((edx & 0xffu));
/* d95de6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d95de7: movzx edx, ah */
  edx = (uint32_t)(((eax >> 8) & 0xffu));
/* d95dea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d95deb: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* d95dee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95def: lea ecx, [ebp - 0x248] */
  ecx = (uint32_t)(ebp + 0xfffffdb8u);
/* d95df5: push 0xde2594 */
  { uint32_t v = 0xde2594u; esp -= 4; W32(esp, v); }
/* d95dfa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d95dfb: call dword ptr [0xde88d4] */
  esp -= 4; W32(esp, 0xd95e01u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* d95e01: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d95e04: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d95e06: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d95e09: lea eax, [ebp - 0x248] */
  eax = (uint32_t)(ebp + 0xfffffdb8u);
/* d95e0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95e10: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xd95e16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d95e16: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d95e19: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* d95e1c: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* d95e1f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d95e21: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d95e23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95e24: call dword ptr [0xde8f2c] */
  esp -= 4; W32(esp, 0xd95e2au); SPILL(); call_ind(R32(0xde8f2cu)); if (g_unwind) return; /* USER32!InvalidateRect */ RELOAD();
/* d95e2a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d95e2d: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* d95e30: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* d95e33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95e34: call dword ptr [0xde8f38] */
  esp -= 4; W32(esp, 0xd95e3au); SPILL(); call_ind(R32(0xde8f38u)); if (g_unwind) return; /* USER32!UpdateWindow */ RELOAD();
L_d95e3a: /* d95e3a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d95e3d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d95e3f: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0xd95e42u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d95e42: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d95e45: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d95e47: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0xd95e4au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d95e4a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d95e4d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d95e4e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d95e4f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d95e56: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d95e57: mov esp, ebp */
  esp = ebp;
/* d95e59: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d95e5a: ret  */
  esp += 4; SPILL(); return;
}

void f_d95e5b(void) {
  LOAD_REGS();
L_d95e5b: /* d95e5b: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* d95e5e: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d95e63: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* d95e66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d95e67: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* d95e6a: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd95e6fu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d95e6f(); return;
}

void f_d95e6f(void) {
  LOAD_REGS();
L_d95e6f: /* d95e6f: push 0xdc23f8 */
  { uint32_t v = 0xdc23f8u; esp -= 4; W32(esp, v); }
/* d95e74: push 0xde25b8 */
  { uint32_t v = 0xde25b8u; esp -= 4; W32(esp, v); }
/* d95e79: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd95e7fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d95e7f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d95e82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d95e84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d95e86: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd95e8bu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d95e8b: guest_badaddr(0xd95e8b); return;
}

void f_d95ef0(void) {
  LOAD_REGS();
L_d95ef0: /* d95ef0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d95ef1: mov ebp, esp */
  ebp = esp;
/* d95ef3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d95ef5: push 0xdb9800 */
  { uint32_t v = 0xdb9800u; esp -= 4; W32(esp, v); }
/* d95efa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d95f00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95f01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d95f08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d95f0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d95f0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d95f0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d95f0e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d95f11: mov esi, ecx */
  esi = ecx;
/* d95f13: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d95f15: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d95f17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d95f18: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d95f1f: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0xd95f22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d95f22: mov edi, eax */
  edi = eax;
/* d95f24: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d95f26: je 0xd95fa4 */
  if (zf) goto L_d95fa4;
L_d95f28: /* d95f28: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d95f2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d95f2c: call 0xd810d2 */
  esp -= 4; W32(esp, 0xd95f31u); SPILL(); f_d810d2(); if (g_unwind) return; RELOAD();
/* d95f31: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d95f33: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d95f36: mov ecx, esi */
  ecx = esi;
/* d95f38: mov ebx, eax */
  ebx = eax;
/* d95f3a: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0xd95f3du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d95f3d: mov eax, dword ptr [ebx + 0x6c] */
  eax = R32((uint32_t)(ebx + 0x6cu));
/* d95f40: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* d95f43: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d95f45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d95f46: mov ecx, edi */
  ecx = edi;
/* d95f48: call dword ptr [0xde89ec] */
  esp -= 4; W32(esp, 0xd95f4eu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* d95f4e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d95f50: mov ecx, esi */
  ecx = esi;
/* d95f52: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0xd95f55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d95f55: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d95f57: mov ecx, esi */
  ecx = esi;
/* d95f59: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0xd95f5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d95f5c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d95f5f: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* d95f62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d95f63: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d95f66: call 0xd82167 */
  esp -= 4; W32(esp, 0xd95f6bu); SPILL(); f_d82167(); if (g_unwind) return; RELOAD();
/* d95f6b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d95f6e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d95f70: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d95f72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d95f73: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d95f76: call 0xd81c30 */
  esp -= 4; W32(esp, 0xd95f7bu); SPILL(); f_d81c30(); if (g_unwind) return; RELOAD();
/* d95f7b: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* d95f7e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d95f80: je 0xd95f97 */
  if (zf) goto L_d95f97;
L_d95f82: /* d95f82: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* d95f85: mov edx, dword ptr [ecx + eax*4 - 4] */
  edx = R32((uint32_t)(ecx + eax*4 + 0xfffffffcu));
/* d95f89: mov edi, dword ptr [edx + 0x10] */
  edi = R32((uint32_t)(edx + 0x10u));
/* d95f8c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d95f8e: je 0xd95f97 */
  if (zf) goto L_d95f97;
L_d95f90: /* d95f90: mov ecx, edx */
  ecx = edx;
/* d95f92: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d95f94: call dword ptr [eax + 0x54] */
  { uint32_t t = R32((uint32_t)(eax + 0x54u)); esp -= 4; W32(esp, 0xd95f97u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d95f97: /* d95f97: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d95f9a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d95f9c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d95f9e: call dword ptr [edx + 0xf4] */
  { uint32_t t = R32((uint32_t)(edx + 0xf4u)); esp -= 4; W32(esp, 0xd95fa4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d95fa4: /* d95fa4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d95fa7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d95fa8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d95fa9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d95fb0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d95fb1: mov esp, ebp */
  esp = ebp;
/* d95fb3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d95fb4: ret  */
  esp += 4; SPILL(); return;
}

void f_d95fb5(void) {
  LOAD_REGS();
L_d95fb5: /* d95fb5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d95fb8: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d95fbd: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d95fc0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d95fc1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d95fc4: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd95fc9u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d95fc9(); return;
}

void f_d95fc9(void) {
  LOAD_REGS();
L_d95fc9: /* d95fc9: push 0xdc244c */
  { uint32_t v = 0xdc244cu; esp -= 4; W32(esp, v); }
/* d95fce: push 0xde25c0 */
  { uint32_t v = 0xde25c0u; esp -= 4; W32(esp, v); }
/* d95fd3: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd95fd9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d95fd9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d95fdc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d95fde: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d95fe0: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd95fe5u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d95fe5: guest_badaddr(0xd95fe5); return;
}

void f_d96030(void) {
  LOAD_REGS();
L_d96030: /* d96030: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d96031: mov ebp, esp */
  ebp = esp;
/* d96033: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d96035: push 0xdb9810 */
  { uint32_t v = 0xdb9810u; esp -= 4; W32(esp, v); }
/* d9603a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d96040: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96041: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d96048: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9604b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9604c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9604d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9604e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d96051: mov esi, ecx */
  esi = ecx;
/* d96053: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d96055: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d96057: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d96058: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9605f: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0xd96062u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96062: mov edi, eax */
  edi = eax;
/* d96064: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d96066: je 0xd9609c */
  if (zf) goto L_d9609c;
L_d96068: /* d96068: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d9606b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9606c: call 0xd810d2 */
  esp -= 4; W32(esp, 0xd96071u); SPILL(); f_d810d2(); if (g_unwind) return; RELOAD();
/* d96071: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d96073: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d96076: mov ecx, esi */
  ecx = esi;
/* d96078: mov ebx, eax */
  ebx = eax;
/* d9607a: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0xd9607du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9607d: mov eax, dword ptr [ebx + 0x6c] */
  eax = R32((uint32_t)(ebx + 0x6cu));
/* d96080: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* d96083: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d96085: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d96086: mov ecx, edi */
  ecx = edi;
/* d96088: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xd9608eu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* d9608e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d96090: mov ecx, esi */
  ecx = esi;
/* d96092: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0xd96095u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96095: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d96097: mov ecx, esi */
  ecx = esi;
/* d96099: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0xd9609cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9609c: /* d9609c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9609f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d960a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d960a1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d960a8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d960a9: mov esp, ebp */
  esp = ebp;
/* d960ab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d960ac: ret  */
  esp += 4; SPILL(); return;
}

void f_d960ad(void) {
  LOAD_REGS();
L_d960ad: /* d960ad: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d960b0: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d960b5: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d960b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d960b9: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d960bc: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd960c1u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d960c1(); return;
}

void f_d960c1(void) {
  LOAD_REGS();
L_d960c1: /* d960c1: push 0xdc248c */
  { uint32_t v = 0xdc248cu; esp -= 4; W32(esp, v); }
/* d960c6: push 0xde25c8 */
  { uint32_t v = 0xde25c8u; esp -= 4; W32(esp, v); }
/* d960cb: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd960d1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d960d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d960d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d960d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d960d8: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd960ddu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d960dd: guest_badaddr(0xd960dd); return;
}

void f_d96110(void) {
  LOAD_REGS();
L_d96110: /* d96110: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d96111: mov ebp, esp */
  ebp = esp;
/* d96113: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d96115: push 0xdb9820 */
  { uint32_t v = 0xdb9820u; esp -= 4; W32(esp, v); }
/* d9611a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d96120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96121: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d96128: sub esp, 0x20c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9612e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9612f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d96130: mov esi, ecx */
  esi = ecx;
/* d96132: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* d96135: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d96136: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d96139: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9613a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d96141: call 0xd811ae */
  esp -= 4; W32(esp, 0xd96146u); SPILL(); f_d811ae(); if (g_unwind) return; RELOAD();
/* d96146: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* d96149: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9614c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9614e: je 0xd96158 */
  if (zf) goto L_d96158;
L_d96150: /* d96150: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd96156u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d96156: jmp 0xd9615d */
  goto L_d9615d;
L_d96158: /* d96158: mov eax, 0xde25e0 */
  eax = 0xde25e0u;
L_d9615d: /* d9615d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9615e: lea ecx, [ebp - 0x218] */
  ecx = (uint32_t)(ebp + 0xfffffde8u);
/* d96164: push 0xde25f0 */
  { uint32_t v = 0xde25f0u; esp -= 4; W32(esp, v); }
/* d96169: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9616a: call dword ptr [0xde88d4] */
  esp -= 4; W32(esp, 0xd96170u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* d96170: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d96173: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* d96176: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d96179: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9617b: je 0xd9618a */
  if (zf) goto L_d9618a;
L_d9617d: /* d9617d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9617f: lea edi, [ebp - 0x218] */
  edi = (uint32_t)(ebp + 0xfffffde8u);
/* d96185: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d96186: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96187: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9618au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9618a: /* d9618a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9618c: mov ecx, esi */
  ecx = esi;
/* d9618e: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0xd96191u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96191: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d96194: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d96195: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d96196: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9619d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9619e: mov esp, ebp */
  esp = ebp;
/* d961a0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d961a1: ret  */
  esp += 4; SPILL(); return;
}

void f_d961a2(void) {
  LOAD_REGS();
L_d961a2: /* d961a2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d961a5: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d961aa: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d961ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d961ae: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d961b1: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd961b6u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d961b6(); return;
}

void f_d961b6(void) {
  LOAD_REGS();
L_d961b6: /* d961b6: push 0xdc24d0 */
  { uint32_t v = 0xdc24d0u; esp -= 4; W32(esp, v); }
/* d961bb: push 0xde261c */
  { uint32_t v = 0xde261cu; esp -= 4; W32(esp, v); }
/* d961c0: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd961c6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d961c6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d961c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d961cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d961cd: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd961d2u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d961d2: guest_badaddr(0xd961d2); return;
}

void f_d96220(void) {
  LOAD_REGS();
L_d96220: /* d96220: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d96221: mov ebp, esp */
  ebp = esp;
/* d96223: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d96225: push 0xdb9830 */
  { uint32_t v = 0xdb9830u; esp -= 4; W32(esp, v); }
/* d9622a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d96230: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96231: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d96238: sub esp, 0x20c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9623e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9623f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d96240: mov esi, ecx */
  esi = ecx;
/* d96242: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* d96245: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d96246: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d96249: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9624a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d96251: call 0xd811ae */
  esp -= 4; W32(esp, 0xd96256u); SPILL(); f_d811ae(); if (g_unwind) return; RELOAD();
/* d96256: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* d96259: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9625c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9625e: je 0xd96268 */
  if (zf) goto L_d96268;
L_d96260: /* d96260: call dword ptr [0xde8970] */
  esp -= 4; W32(esp, 0xd96266u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* d96266: jmp 0xd9626d */
  goto L_d9626d;
L_d96268: /* d96268: mov eax, 0xde2624 */
  eax = 0xde2624u;
L_d9626d: /* d9626d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9626e: lea ecx, [ebp - 0x218] */
  ecx = (uint32_t)(ebp + 0xfffffde8u);
/* d96274: push 0xde2634 */
  { uint32_t v = 0xde2634u; esp -= 4; W32(esp, v); }
/* d96279: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9627a: call dword ptr [0xde88d4] */
  esp -= 4; W32(esp, 0xd96280u); SPILL(); f_4e4183(); if (g_unwind) return; /* Core!?appSprintf@@YAHPAGPBGZZ */ RELOAD();
/* d96280: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d96283: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* d96286: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d96289: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9628b: je 0xd9629a */
  if (zf) goto L_d9629a;
L_d9628d: /* d9628d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9628f: lea edi, [ebp - 0x218] */
  edi = (uint32_t)(ebp + 0xfffffde8u);
/* d96295: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d96296: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96297: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd9629au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9629a: /* d9629a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9629c: mov ecx, esi */
  ecx = esi;
/* d9629e: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0xd962a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d962a1: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* d962a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d962a6: je 0xd962c7 */
  if (zf) goto L_d962c7;
L_d962a8: /* d962a8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d962aa: mov ecx, esi */
  ecx = esi;
/* d962ac: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0xd962afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d962af: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d962b1: mov ecx, esi */
  ecx = esi;
/* d962b3: call dword ptr [eax + 0x54] */
  { uint32_t t = R32((uint32_t)(eax + 0x54u)); esp -= 4; W32(esp, 0xd962b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d962b6: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* d962b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d962bb: je 0xd962c7 */
  if (zf) goto L_d962c7;
L_d962bd: /* d962bd: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* d962c0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d962c2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d962c4: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0xd962c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d962c7: /* d962c7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d962ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d962cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d962cc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d962d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d962d4: mov esp, ebp */
  esp = ebp;
/* d962d6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d962d7: ret  */
  esp += 4; SPILL(); return;
}

void f_d962d8(void) {
  LOAD_REGS();
L_d962d8: /* d962d8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d962db: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d962e0: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d962e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d962e4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d962e7: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd962ecu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d962ec(); return;
}

void f_d962ec(void) {
  LOAD_REGS();
L_d962ec: /* d962ec: push 0xdc2518 */
  { uint32_t v = 0xdc2518u; esp -= 4; W32(esp, v); }
/* d962f1: push 0xde265c */
  { uint32_t v = 0xde265cu; esp -= 4; W32(esp, v); }
/* d962f6: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd962fcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d962fc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d962ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d96301: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d96303: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd96308u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d96308: guest_badaddr(0xd96308); return;
}

void f_d96350(void) {
  LOAD_REGS();
L_d96350: /* d96350: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d96351: mov ebp, esp */
  ebp = esp;
/* d96353: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d96355: push 0xdb9840 */
  { uint32_t v = 0xdb9840u; esp -= 4; W32(esp, v); }
/* d9635a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d96360: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96361: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d96368: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d96369: mov eax, 0x200c */
  eax = 0x200cu;
/* d9636e: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd96373u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d96373: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d96374: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d96375: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d96376: xor edi, edi */
  edi = 0;
/* d96378: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9637b: mov esi, ecx */
  esi = ecx;
/* d9637d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9637f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d96380: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d96381: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* d96384: mov dword ptr [esi + 0x58], edi */
  W32((uint32_t)(esi + 0x58u), edi);
/* d96387: call dword ptr [eax + 0x68] */
  { uint32_t t = R32((uint32_t)(eax + 0x68u)); esp -= 4; W32(esp, 0xd9638au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9638a: mov ebx, eax */
  ebx = eax;
/* d9638c: cmp dword ptr [esi + 0x48], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x48u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9638f: je 0xd9645c */
  if (zf) goto L_d9645c;
L_d96395: /* d96395: mov cx, word ptr [0xde4f4c] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0xde4f4cu))) & 0xffffu);
/* d9639c: mov word ptr [ebp - 0x201c], cx */
  W16((uint32_t)(ebp + 0xffffdfe4u), (ecx & 0xffffu));
/* d963a3: xor eax, eax */
  eax = 0;
/* d963a5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d963a7: mov ecx, 0x7ff */
  ecx = 0x7ffu;
/* d963ac: lea edi, [ebp - 0x201a] */
  edi = (uint32_t)(ebp + 0xffffdfe6u);
/* d963b2: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* d963b4: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* d963b6: je 0xd963c6 */
  if (zf) goto L_d963c6;
L_d963b8: /* d963b8: lea edx, [ebp - 0x201c] */
  edx = (uint32_t)(ebp + 0xffffdfe4u);
/* d963be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d963bf: mov ecx, esi */
  ecx = esi;
/* d963c1: call 0xd824be */
  esp -= 4; W32(esp, 0xd963c6u); SPILL(); f_d824be(); if (g_unwind) return; RELOAD();
L_d963c6: /* d963c6: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* d963c9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d963cb: je 0xd963e0 */
  if (zf) goto L_d963e0;
L_d963cd: /* d963cd: call dword ptr [0xde899c] */
  esp -= 4; W32(esp, 0xd963d3u); SPILL(); f_4e2e6e(); if (g_unwind) return; /* Core!?StaticClass@UFloatProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d963d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d963d4: mov ecx, edi */
  ecx = edi;
/* d963d6: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd963dcu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d963dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d963de: jne 0xd9642f */
  if (!zf) goto L_d9642f;
L_d963e0: /* d963e0: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* d963e3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d963e5: je 0xd963fa */
  if (zf) goto L_d963fa;
L_d963e7: /* d963e7: call dword ptr [0xde89a0] */
  esp -= 4; W32(esp, 0xd963edu); SPILL(); f_4e2c0c(); if (g_unwind) return; /* Core!?StaticClass@UIntProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d963ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d963ee: mov ecx, edi */
  ecx = edi;
/* d963f0: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd963f6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d963f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d963f8: jne 0xd9642f */
  if (!zf) goto L_d9642f;
L_d963fa: /* d963fa: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* d963fd: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d963ff: je 0xd96427 */
  if (zf) goto L_d96427;
L_d96401: /* d96401: call dword ptr [0xde89a4] */
  esp -= 4; W32(esp, 0xd96407u); SPILL(); f_4e2df6(); if (g_unwind) return; /* Core!?StaticClass@UByteProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d96407: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96408: mov ecx, edi */
  ecx = edi;
/* d9640a: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd96410u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d96410: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d96412: je 0xd96427 */
  if (zf) goto L_d96427;
L_d96414: /* d96414: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* d96417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96418: call 0xd82919 */
  esp -= 4; W32(esp, 0xd9641du); SPILL(); f_d82919(); if (g_unwind) return; RELOAD();
/* d9641d: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* d96420: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d96423: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d96425: je 0xd9642f */
  if (zf) goto L_d9642f;
L_d96427: /* d96427: lea eax, [ebp - 0x201c] */
  eax = (uint32_t)(ebp + 0xffffdfe4u);
/* d9642d: jmp 0xd96438 */
  goto L_d96438;
L_d9642f: /* d9642f: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* d96432: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd96438u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
L_d96438: /* d96438: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* d9643b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9643d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9643e: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0xd96441u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96441: lea eax, [ebp - 0x201c] */
  eax = (uint32_t)(ebp + 0xffffdfe4u);
/* d96447: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96448: call dword ptr [0xde89e8] */
  esp -= 4; W32(esp, 0xd9644eu); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* d9644e: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* d96451: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d96454: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96455: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d96457: call 0xd81b81 */
  esp -= 4; W32(esp, 0xd9645cu); SPILL(); f_d81b81(); if (g_unwind) return; RELOAD();
L_d9645c: /* d9645c: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9645f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d96461: je 0xd96470 */
  if (zf) goto L_d96470;
L_d96463: /* d96463: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d96465: je 0xd96470 */
  if (zf) goto L_d96470;
L_d96467: /* d96467: movzx edx, byte ptr [ebx] */
  edx = (uint32_t)(R8((uint32_t)(ebx)));
/* d9646a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9646b: call 0xd810be */
  esp -= 4; W32(esp, 0xd96470u); SPILL(); f_d810be(); if (g_unwind) return; RELOAD();
L_d96470: /* d96470: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* d96473: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d96475: je 0xd96537 */
  if (zf) goto L_d96537;
L_d9647b: /* d9647b: mov edi, dword ptr [esi + 0x3c] */
  edi = R32((uint32_t)(esi + 0x3cu));
/* d9647e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d96480: je 0xd964a7 */
  if (zf) goto L_d964a7;
L_d96482: /* d96482: call dword ptr [0xde89bc] */
  esp -= 4; W32(esp, 0xd96488u); SPILL(); f_4e1ae1(); if (g_unwind) return; /* Core!?StaticClass@UBoolProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d96488: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96489: mov ecx, edi */
  ecx = edi;
/* d9648b: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd96491u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d96491: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d96493: je 0xd964a7 */
  if (zf) goto L_d964a7;
L_d96495: /* d96495: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d96497: je 0xd964c5 */
  if (zf) goto L_d964c5;
L_d96499: /* d96499: mov eax, dword ptr [edi + 0x6c] */
  eax = R32((uint32_t)(edi + 0x6cu));
/* d9649c: and eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d9649e: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d964a0: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d964a2: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* d964a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d964a5: jmp 0xd96525 */
  goto L_d96525;
L_d964a7: /* d964a7: call dword ptr [0xde89a4] */
  esp -= 4; W32(esp, 0xd964adu); SPILL(); f_4e2df6(); if (g_unwind) return; /* Core!?StaticClass@UByteProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d964ad: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d964b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d964b1: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd964b7u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d964b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d964b9: je 0xd964cb */
  if (zf) goto L_d964cb;
L_d964bb: /* d964bb: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d964bd: je 0xd964c5 */
  if (zf) goto L_d964c5;
L_d964bf: /* d964bf: movzx eax, byte ptr [ebx] */
  eax = (uint32_t)(R8((uint32_t)(ebx)));
/* d964c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d964c3: jmp 0xd96525 */
  goto L_d96525;
L_d964c5: /* d964c5: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d964c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d964c9: jmp 0xd96525 */
  goto L_d96525;
L_d964cb: /* d964cb: call dword ptr [0xde89f0] */
  esp -= 4; W32(esp, 0xd964d1u); SPILL(); f_4e253b(); if (g_unwind) return; /* Core!?StaticClass@UNameProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d964d1: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d964d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d964d5: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd964dbu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d964db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d964dd: je 0xd96530 */
  if (zf) goto L_d96530;
L_d964df: /* d964df: push 0x338 */
  { uint32_t v = 0x338u; esp -= 4; W32(esp, v); }
/* d964e4: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d964e7: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xd964edu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* d964ed: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* d964f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d964f1: lea ecx, [esi + 0x70] */
  ecx = (uint32_t)(esi + 0x70u);
/* d964f4: call dword ptr [0xde89e0] */
  esp -= 4; W32(esp, 0xd964fau); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* d964fa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d964fc: je 0xd96530 */
  if (zf) goto L_d96530;
L_d964fe: /* d964fe: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d96500: je 0xd96518 */
  if (zf) goto L_d96518;
L_d96502: /* d96502: mov ecx, ebx */
  ecx = ebx;
/* d96504: call dword ptr [0xde8940] */
  esp -= 4; W32(esp, 0xd9650au); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* d9650a: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* d9650d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9650f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96510: call dword ptr [edx + 0x100] */
  { uint32_t t = R32((uint32_t)(edx + 0x100u)); esp -= 4; W32(esp, 0xd96516u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96516: jmp 0xd9651a */
  goto L_d9651a;
L_d96518: /* d96518: xor eax, eax */
  eax = 0;
L_d9651a: /* d9651a: xor ebx, ebx */
  ebx = 0;
/* d9651c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d9651e: setl bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* d96521: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* d96522: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* d96524: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_d96525: /* d96525: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* d96528: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9652a: call dword ptr [edx + 0xf8] */
  { uint32_t t = R32((uint32_t)(edx + 0xf8u)); esp -= 4; W32(esp, 0xd96530u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d96530: /* d96530: mov dword ptr [esi + 0x58], 0 */
  W32((uint32_t)(esi + 0x58u), 0x0u);
L_d96537: /* d96537: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9653a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9653b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9653c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d96543: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d96544: mov esp, ebp */
  esp = ebp;
/* d96546: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d96547: ret  */
  esp += 4; SPILL(); return;
}

void f_d96548(void) {
  LOAD_REGS();
L_d96548: /* d96548: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d9654b: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d96550: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d96553: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d96554: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d96557: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9655cu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9655c(); return;
}

void f_d9655c(void) {
  LOAD_REGS();
L_d9655c: /* d9655c: push 0xdc2570 */
  { uint32_t v = 0xdc2570u; esp -= 4; W32(esp, v); }
/* d96561: push 0xde26c0 */
  { uint32_t v = 0xde26c0u; esp -= 4; W32(esp, v); }
/* d96566: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9656cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9656c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9656f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d96571: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d96573: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd96578u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d96578: guest_badaddr(0xd96578); return;
}

void f_d96610(void) {
  LOAD_REGS();
L_d96610: /* d96610: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d96611: mov ebp, esp */
  ebp = esp;
/* d96613: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d96615: push 0xdb9859 */
  { uint32_t v = 0xdb9859u; esp -= 4; W32(esp, v); }
/* d9661a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d96620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96621: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d96628: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9662b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9662c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9662d: mov esi, ecx */
  esi = ecx;
/* d9662f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d96631: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d96632: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* d96635: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d96638: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d96639: mov ecx, esi */
  ecx = esi;
/* d9663b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d96642: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0xd96645u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96645: mov ecx, esi */
  ecx = esi;
/* d96647: call 0xd81136 */
  esp -= 4; W32(esp, 0xd9664cu); SPILL(); f_d81136(); if (g_unwind) return; RELOAD();
/* d9664c: xor edx, edx */
  edx = 0;
/* d9664e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d96650: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d96652: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* d96655: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d96657: mov ecx, esi */
  ecx = esi;
/* d96659: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* d9665c: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0xd9665fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9665f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d96662: mov ebx, dword ptr [0xde8f6c] */
  ebx = R32((uint32_t)(0xde8f6cu));
/* d96668: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96669: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* d9666c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9666d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9666e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd96670u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96670: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d96672: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d96674: mov ecx, esi */
  ecx = esi;
/* d96676: call dword ptr [eax + 0x40] */
  { uint32_t t = R32((uint32_t)(eax + 0x40u)); esp -= 4; W32(esp, 0xd96679u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96679: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* d9667c: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* d9667f: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* d96682: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* d96685: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* d96686: lea eax, [eax + edi + 1] */
  eax = (uint32_t)(eax + edi + 0x1u);
/* d9668a: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* d9668d: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* d96690: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* d96691: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* d96694: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d96697: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* d9669a: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* d9669d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* d9669e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d966a0: mov eax, dword ptr [0xde50e4] */
  eax = R32((uint32_t)(0xde50e4u));
/* d966a5: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* d966a8: mov dword ptr [ebp - 0x48], edi */
  W32((uint32_t)(ebp + 0xffffffb8u), edi);
/* d966ab: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* d966ae: jne 0xd966b5 */
  if (!zf) goto L_d966b5;
L_d966b0: /* d966b0: mov eax, dword ptr [0xde5184] */
  eax = R32((uint32_t)(0xde5184u));
L_d966b5: /* d966b5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d966b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d966b9: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* d966bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d966bd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d966be: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd966c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d966c0: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* d966c3: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* d966c6: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* d966c9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* d966ca: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* d966cd: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* d966d0: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* d966d3: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* d966d6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d966d9: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* d966dc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d966dd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* d966de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d966e0: mov eax, dword ptr [0xde515c] */
  eax = R32((uint32_t)(0xde515cu));
/* d966e5: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* d966e8: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* d966eb: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* d966ee: jne 0xd966f5 */
  if (!zf) goto L_d966f5;
L_d966f0: /* d966f0: mov eax, dword ptr [0xde5158] */
  eax = R32((uint32_t)(0xde5158u));
L_d966f5: /* d966f5: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d966f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d966f9: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* d966fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d966fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d966fe: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd96700u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96700: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* d96703: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* d96706: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* d96709: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* d9670c: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* d9670f: mov ecx, dword ptr [ebp - 0x4c] */
  ecx = R32((uint32_t)(ebp + 0xffffffb4u));
/* d96712: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* d96713: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* d96716: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d96717: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* d96718: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* d9671b: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* d9671e: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* d96721: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* d96724: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d96726: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96727: mov ecx, esi */
  ecx = esi;
/* d96729: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* d9672c: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0xd9672fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9672f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d96732: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* d96734: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d96736: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d96737: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9673a: mov ecx, esp */
  ecx = esp;
/* d9673c: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* d9673e: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* d96741: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* d96744: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
/* d96747: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* d9674a: mov dword ptr [ecx + 8], edi */
  W32((uint32_t)(ecx + 0x8u), edi);
/* d9674d: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* d96750: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* d96753: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d96754: mov ecx, esi */
  ecx = esi;
/* d96756: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0xd96759u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96759: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9675b: mov ecx, esi */
  ecx = esi;
/* d9675d: call dword ptr [edx + 0x48] */
  { uint32_t t = R32((uint32_t)(edx + 0x48u)); esp -= 4; W32(esp, 0xd96760u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96760: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d96762: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96763: mov ecx, esi */
  ecx = esi;
/* d96765: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0xd96768u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96768: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96769: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9676a: call dword ptr [0xde8c94] */
  esp -= 4; W32(esp, 0xd96770u); SPILL(); call_ind(R32(0xde8c94u)); if (g_unwind) return; /* GDI32!SetTextColor */ RELOAD();
/* d96770: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d96772: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d96773: call dword ptr [0xde8c88] */
  esp -= 4; W32(esp, 0xd96779u); SPILL(); call_ind(R32(0xde8c88u)); if (g_unwind) return; /* GDI32!SetBkMode */ RELOAD();
/* d96779: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9677b: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* d9677e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9677f: mov ecx, esi */
  ecx = esi;
/* d96781: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xd96787u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96787: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* d9678a: mov edx, dword ptr [ebp - 0x50] */
  edx = R32((uint32_t)(ebp + 0xffffffb0u));
/* d9678d: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* d96790: mov esi, dword ptr [ebp - 0x4c] */
  esi = R32((uint32_t)(ebp + 0xffffffb4u));
/* d96793: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* d96796: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* d96799: add eax, -0x12 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffeeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9679c: add edx, 0x12 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x12u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d9679f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d967a3: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* d967a6: mov dword ptr [ebp - 0x4c], esi */
  W32((uint32_t)(ebp + 0xffffffb4u), esi);
/* d967a9: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* d967ac: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* d967af: call dword ptr [0xde89f4] */
  esp -= 4; W32(esp, 0xd967b5u); SPILL(); f_4e3ddc(); if (g_unwind) return; /* Core!?GetLanguage@UObject@@SAPBGXZ */ RELOAD();
/* d967b5: push 0xde26c8 */
  { uint32_t v = 0xde26c8u; esp -= 4; W32(esp, v); }
/* d967ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d967bb: call dword ptr [0xde8938] */
  esp -= 4; W32(esp, 0xd967c1u); SPILL(); f_4e26df(); if (g_unwind) return; /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* d967c1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d967c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d967c6: jne 0xd967f2 */
  if (!zf) goto L_d967f2;
L_d967c8: /* d967c8: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* d967cb: call dword ptr [0xde88bc] */
  esp -= 4; W32(esp, 0xd967d1u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* d967d1: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* d967d4: mov esi, eax */
  esi = eax;
/* d967d6: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd967dcu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d967dc: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* d967df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d967e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d967e1: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* d967e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d967e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d967e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d967e7: call dword ptr [0xde8c98] */
  esp -= 4; W32(esp, 0xd967edu); SPILL(); call_ind(R32(0xde8c98u)); if (g_unwind) return; /* GDI32!TextOutW */ RELOAD();
/* d967ed: jmp 0xd968b1 */
  goto L_d968b1;
L_d967f2: /* d967f2: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* d967f8: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d967fb: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* d967fe: je 0xd9682a */
  if (zf) goto L_d9682a;
L_d96800: /* d96800: call dword ptr [0xde88bc] */
  esp -= 4; W32(esp, 0xd96806u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* d96806: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* d96809: mov esi, eax */
  esi = eax;
/* d9680b: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd96811u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d96811: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d96813: push 0x8024 */
  { uint32_t v = 0x8024u; esp -= 4; W32(esp, v); }
/* d96818: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* d9681b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9681c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9681d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9681e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9681f: call dword ptr [0xde8df8] */
  esp -= 4; W32(esp, 0xd96825u); SPILL(); call_ind(R32(0xde8df8u)); if (g_unwind) return; /* USER32!DrawTextExW */ RELOAD();
/* d96825: jmp 0xd968b1 */
  goto L_d968b1;
L_d9682a: /* d9682a: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd96830u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d96830: mov esi, dword ptr [0xde88c8] */
  esi = R32((uint32_t)(0xde88c8u));
/* d96836: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96837: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd96839u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96839: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9683c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9683e: jne 0xd96844 */
  if (!zf) goto L_d96844;
L_d96840: /* d96840: xor edi, edi */
  edi = 0;
/* d96842: jmp 0xd96869 */
  goto L_d96869;
L_d96844: /* d96844: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* d96847: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd9684du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d9684d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9684e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd96850u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96850: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d96853: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d96856: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d96859: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9685c: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d9685f: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd96864u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d96864: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d96867: mov edi, esp */
  edi = esp;
L_d96869: /* d96869: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* d9686c: call dword ptr [0xde88bc] */
  esp -= 4; W32(esp, 0xd96872u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* d96872: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* d96875: mov ebx, eax */
  ebx = eax;
/* d96877: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd9687du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d9687d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9687e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd96880u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96880: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d96883: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* d96886: mov esi, eax */
  esi = eax;
/* d96888: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd9688eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d9688e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9688f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96890: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d96891: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xd96897u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* d96897: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d9689a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9689d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9689f: push 0x8024 */
  { uint32_t v = 0x8024u; esp -= 4; W32(esp, v); }
/* d968a4: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* d968a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d968a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d968a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d968aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d968ab: call dword ptr [0xde8df4] */
  esp -= 4; W32(esp, 0xd968b1u); SPILL(); call_ind(R32(0xde8df4u)); if (g_unwind) return; /* USER32!DrawTextExA */ RELOAD();
L_d968b1: /* d968b1: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* d968b4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d968b8: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd968beu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d968be: lea esp, [ebp - 0x5c] */
  esp = (uint32_t)(ebp + 0xffffffa4u);
/* d968c1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d968c4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d968cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d968cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d968cd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d968ce: mov esp, ebp */
  esp = ebp;
/* d968d0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d968d1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d968d4(void) {
  LOAD_REGS();
L_d968d4: /* d968d4: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d968d7: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d968dc: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d968df: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d968e0: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d968e3: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd968e8u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d968e8(); return;
}

void f_d968e8(void) {
  LOAD_REGS();
L_d968e8: /* d968e8: push 0xdc25c4 */
  { uint32_t v = 0xdc25c4u; esp -= 4; W32(esp, v); }
/* d968ed: push 0xde26d0 */
  { uint32_t v = 0xde26d0u; esp -= 4; W32(esp, v); }
/* d968f2: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd968f8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d968f8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d968fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d968fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d968ff: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd96904u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d96904: guest_badaddr(0xd96904); return;
}

void f_d969d0(void) {
  LOAD_REGS();
L_d969d0: /* d969d0: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d969d3: movzx eax, byte ptr [esp + 0x34] */
  eax = (uint32_t)(R8((uint32_t)(esp + 0x34u)));
/* d969d8: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* d969dc: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d969df: fild dword ptr [esp + 0x3c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* d969e3: fmul dword ptr [0xdc261c] */
  ST0 = ST0 * (F32((uint32_t)(0xdc261cu)));
/* d969e9: fst qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0);
/* d969ed: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* d969f0: call dword ptr [0xde89f8] */
  esp -= 4; W32(esp, 0xd969f6u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* d969f6: fadd qword ptr [0xdc2610] */
  ST0 = ST0 + (F64((uint32_t)(0xdc2610u)));
/* d969fc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d969ff: fdivr qword ptr [esp] */
  ST0 = (F64((uint32_t)(esp))) / ST0;
/* d96a03: fmul qword ptr [0xdc2600] */
  ST0 = ST0 * (F64((uint32_t)(0xdc2600u)));
/* d96a09: fcom dword ptr [0xdc1460] */
  fpu_com(ST0, F32((uint32_t)(0xdc1460u)));
/* d96a0f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* d96a11: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* d96a14: jp 0xd96a20 */
  if (pf) goto L_d96a20;
L_d96a16: /* d96a16: fstp st(0) */
  STI(0) = ST0; FPOP();
/* d96a18: fld dword ptr [0xdc1460] */
  { double v = F32((uint32_t)(0xdc1460u)); FPUSH(v); }
/* d96a1e: jmp 0xd96a35 */
  goto L_d96a35;
L_d96a20: /* d96a20: fcom dword ptr [0xdc1458] */
  fpu_com(ST0, F32((uint32_t)(0xdc1458u)));
/* d96a26: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* d96a28: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* d96a2b: jnp 0xd96a35 */
  if (!pf) goto L_d96a35;
L_d96a2d: /* d96a2d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* d96a2f: fld dword ptr [0xdc1458] */
  { double v = F32((uint32_t)(0xdc1458u)); FPUSH(v); }
L_d96a35: /* d96a35: mov al, byte ptr [esp + 0x2c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x2cu))) & 0xffu);
/* d96a39: cmp al, 0x56 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x56u);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* d96a3b: jae 0xd96a75 */
  if (!cf) goto L_d96a75;
L_d96a3d: /* d96a3d: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* d96a40: mov ecx, 0x55 */
  ecx = 0x55u;
/* d96a45: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d96a47: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* d96a4b: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* d96a4f: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* d96a57: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* d96a5b: fmul dword ptr [0xdc25f8] */
  ST0 = ST0 * (F32((uint32_t)(0xdc25f8u)));
/* d96a61: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* d96a65: fild dword ptr [esp + 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* d96a69: fmul dword ptr [0xdc25f8] */
  ST0 = ST0 * (F32((uint32_t)(0xdc25f8u)));
/* d96a6f: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* d96a73: jmp 0xd96ae9 */
  goto L_d96ae9;
L_d96a75: /* d96a75: cmp al, 0xab */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xabu);
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* d96a77: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* d96a7a: jae 0xd96ab0 */
  if (!cf) goto L_d96ab0;
L_d96a7c: /* d96a7c: mov edx, 0xaa */
  edx = 0xaau;
/* d96a81: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d96a83: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* d96a87: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* d96a8b: add eax, -0x55 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffabu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d96a8e: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* d96a92: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* d96a9a: fmul dword ptr [0xdc25f8] */
  ST0 = ST0 * (F32((uint32_t)(0xdc25f8u)));
/* d96aa0: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* d96aa4: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* d96aa8: fmul dword ptr [0xdc25f8] */
  ST0 = ST0 * (F32((uint32_t)(0xdc25f8u)));
/* d96aae: jmp 0xd96ae5 */
  goto L_d96ae5;
L_d96ab0: /* d96ab0: lea ecx, [eax - 0xaa] */
  ecx = (uint32_t)(eax + 0xffffff56u);
/* d96ab6: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* d96aba: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* d96abe: mov edx, 0xff */
  edx = 0xffu;
/* d96ac3: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d96ac5: mov dword ptr [esp + 0x34], edx */
  W32((uint32_t)(esp + 0x34u), edx);
/* d96ac9: fmul dword ptr [0xdc25f8] */
  ST0 = ST0 * (F32((uint32_t)(0xdc25f8u)));
/* d96acf: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d96ad7: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* d96adb: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* d96adf: fmul dword ptr [0xdc25f4] */
  ST0 = ST0 * (F32((uint32_t)(0xdc25f4u)));
L_d96ae5: /* d96ae5: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
L_d96ae9: /* d96ae9: fld dword ptr [0xdc1458] */
  { double v = F32((uint32_t)(0xdc1458u)); FPUSH(v); }
/* d96aef: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* d96af3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d96af5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* d96af8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* d96afb: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* d96aff: fsub dword ptr [esp] */
  ST0 = ST0 - (F32((uint32_t)(esp)));
/* d96b03: fld dword ptr [0xdc1458] */
  { double v = F32((uint32_t)(0xdc1458u)); FPUSH(v); }
/* d96b09: movzx ecx, byte ptr [esp + 0x30] */
  ecx = (uint32_t)(R8((uint32_t)(esp + 0x30u)));
/* d96b0e: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* d96b12: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* d96b16: fsub dword ptr [esp + 4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x4u)));
/* d96b1a: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* d96b1e: fld dword ptr [0xdc1458] */
  { double v = F32((uint32_t)(0xdc1458u)); FPUSH(v); }
/* d96b24: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* d96b28: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* d96b2c: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* d96b30: fild dword ptr [esp + 0x34] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* d96b34: fmul dword ptr [0xdc25f0] */
  ST0 = ST0 * (F32((uint32_t)(0xdc25f0u)));
/* d96b3a: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* d96b3e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* d96b40: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* d96b44: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* d96b48: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* d96b4c: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* d96b50: fmul dword ptr [esp + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x34u)));
/* d96b54: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* d96b58: fadd dword ptr [esp] */
  ST0 = ST0 + (F32((uint32_t)(esp)));
/* d96b5c: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* d96b60: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* d96b62: fadd dword ptr [esp + 4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4u)));
/* d96b66: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* d96b6a: fadd dword ptr [esp + 8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x8u)));
/* d96b6e: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* d96b72: fmul st(2) */
  ST0 = ST0 * STI(2);
/* d96b74: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* d96b78: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* d96b7c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* d96b7e: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* d96b82: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* d96b84: fld dword ptr [esp] */
  { double v = F32((uint32_t)(esp)); FPUSH(v); }
/* d96b88: fmul dword ptr [0xdc1434] */
  ST0 = ST0 * (F32((uint32_t)(0xdc1434u)));
/* d96b8e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* d96b90: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* d96b94: fmul dword ptr [0xdc1434] */
  ST0 = ST0 * (F32((uint32_t)(0xdc1434u)));
/* d96b9a: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* d96b9d: fmul dword ptr [0xdc1434] */
  ST0 = ST0 * (F32((uint32_t)(0xdc1434u)));
/* d96ba3: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* d96ba6: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d96ba9: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_d96c30(void) {
  LOAD_REGS();
L_d96c30: /* d96c30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d96c31: mov ebp, esp */
  ebp = esp;
/* d96c33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d96c35: push 0xdb9903 */
  { uint32_t v = 0xdb9903u; esp -= 4; W32(esp, v); }
/* d96c3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d96c40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96c41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d96c48: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d96c4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d96c4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d96c4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d96c4e: xor ebx, ebx */
  ebx = 0;
/* d96c50: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* d96c53: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d96c55: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* d96c58: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d96c5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d96c5c: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* d96c5f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* d96c62: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xd96c68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96c68: push 0xde26e0 */
  { uint32_t v = 0xde26e0u; esp -= 4; W32(esp, v); }
/* d96c6d: mov ecx, eax */
  ecx = eax;
/* d96c6f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d96c73: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd96c79u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d96c79: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d96c7c: mov esi, eax */
  esi = eax;
/* d96c7e: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* d96c81: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd96c87u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d96c87: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d96c89: je 0xd96f9a */
  if (zf) goto L_d96f9a;
L_d96c8f: /* d96c8f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d96c92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96c93: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d96c96: call dword ptr [0xde88e4] */
  esp -= 4; W32(esp, 0xd96c9cu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* d96c9c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d96c9d: push 0xde26f8 */
  { uint32_t v = 0xde26f8u; esp -= 4; W32(esp, v); }
/* d96ca2: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d96ca5: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d96ca9: call dword ptr [0xde89fc] */
  esp -= 4; W32(esp, 0xd96cafu); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* d96caf: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d96cb2: je 0xd96cf4 */
  if (zf) goto L_d96cf4;
L_d96cb4: /* d96cb4: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* d96cb9: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d96cbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96cbd: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d96cc0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d96cc1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d96cc4: call dword ptr [0xde8958] */
  esp -= 4; W32(esp, 0xd96ccau); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* d96cca: mov ebx, 1 */
  ebx = 0x1u;
/* d96ccf: mov ecx, eax */
  ecx = eax;
/* d96cd1: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* d96cd5: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* d96cd8: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd96cdeu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d96cde: mov esi, dword ptr [0xde896c] */
  esi = R32((uint32_t)(0xde896cu));
/* d96ce4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96ce5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd96ce7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96ce7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d96cea: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* d96ced: mov edi, 0xff */
  edi = 0xffu;
/* d96cf2: jmp 0xd96d02 */
  goto L_d96d02;
L_d96cf4: /* d96cf4: mov esi, dword ptr [0xde896c] */
  esi = R32((uint32_t)(0xde896cu));
/* d96cfa: mov edi, 0xff */
  edi = 0xffu;
/* d96cff: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
L_d96d02: /* d96d02: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d96d05: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d96d0c: je 0xd96d1a */
  if (zf) goto L_d96d1a;
L_d96d0e: /* d96d0e: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d96d11: and ebx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* d96d14: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd96d1au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_d96d1a: /* d96d1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d96d1c: push 0xde2700 */
  { uint32_t v = 0xde2700u; esp -= 4; W32(esp, v); }
/* d96d21: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d96d24: call dword ptr [0xde89fc] */
  esp -= 4; W32(esp, 0xd96d2au); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* d96d2a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d96d2d: je 0xd96d62 */
  if (zf) goto L_d96d62;
L_d96d2f: /* d96d2f: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* d96d34: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d96d37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96d38: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* d96d3b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d96d3c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d96d3f: call dword ptr [0xde8958] */
  esp -= 4; W32(esp, 0xd96d45u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* d96d45: or ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* d96d48: mov ecx, eax */
  ecx = eax;
/* d96d4a: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* d96d4e: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* d96d51: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd96d57u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d96d57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96d58: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd96d5au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96d5a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d96d5d: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d96d60: jmp 0xd96d65 */
  goto L_d96d65;
L_d96d62: /* d96d62: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
L_d96d65: /* d96d65: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d96d68: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d96d6f: je 0xd96d7d */
  if (zf) goto L_d96d7d;
L_d96d71: /* d96d71: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d96d74: and ebx, 0xfffffffd */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* d96d77: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd96d7du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_d96d7d: /* d96d7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d96d7f: push 0xde2708 */
  { uint32_t v = 0xde2708u; esp -= 4; W32(esp, v); }
/* d96d84: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d96d87: call dword ptr [0xde89fc] */
  esp -= 4; W32(esp, 0xd96d8du); SPILL(); f_4e1055(); if (g_unwind) return; /* Core!?InStr@FString@@QBEHPBGH@Z */ RELOAD();
/* d96d8d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d96d90: je 0xd96dc5 */
  if (zf) goto L_d96dc5;
L_d96d92: /* d96d92: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* d96d97: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d96d9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96d9b: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* d96d9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96d9f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d96da2: call dword ptr [0xde8958] */
  esp -= 4; W32(esp, 0xd96da8u); SPILL(); f_4e2577(); if (g_unwind) return; /* Core!?Mid@FString@@QBE?AV1@HH@Z */ RELOAD();
/* d96da8: or ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* d96dab: mov ecx, eax */
  ecx = eax;
/* d96dad: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* d96db1: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* d96db4: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd96dbau); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d96dba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96dbb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd96dbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96dbd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d96dc0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d96dc3: jmp 0xd96dc8 */
  goto L_d96dc8;
L_d96dc5: /* d96dc5: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_d96dc8: /* d96dc8: test bl, 4 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d96dcb: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d96dd2: je 0xd96ddd */
  if (zf) goto L_d96ddd;
L_d96dd4: /* d96dd4: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d96dd7: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd96dddu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_d96ddd: /* d96ddd: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* d96de0: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* d96de3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d96de6: mov ecx, esp */
  ecx = esp;
/* d96de8: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* d96deb: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* d96dee: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* d96df1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* d96df3: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* d96df6: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* d96df9: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* d96dfc: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* d96dff: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* d96e02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96e03: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* d96e06: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* d96e09: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* d96e0c: mov ecx, esi */
  ecx = esi;
/* d96e0e: call 0xd8105a */
  esp -= 4; W32(esp, 0xd96e13u); SPILL(); f_d8105a(); if (g_unwind) return; RELOAD();
/* d96e13: xor ebx, ebx */
  ebx = 0;
L_d96e15: /* d96e15: cmp ebx, dword ptr [esi + 0x34] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d96e18: jge 0xd96f86 */
  if ((sf == of)) goto L_d96f86;
L_d96e1e: /* d96e1e: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* d96e21: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* d96e24: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d96e26: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* d96e29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96e2a: mov ecx, esi */
  ecx = esi;
/* d96e2c: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xd96e32u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96e32: push 0xde2710 */
  { uint32_t v = 0xde2710u; esp -= 4; W32(esp, v); }
/* d96e37: mov ecx, eax */
  ecx = eax;
/* d96e39: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* d96e3d: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd96e43u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d96e43: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* d96e46: mov edi, eax */
  edi = eax;
/* d96e48: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d96e4c: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd96e52u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d96e52: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d96e54: je 0xd96e95 */
  if (zf) goto L_d96e95;
L_d96e56: /* d96e56: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* d96e59: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xd96e5eu); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* d96e5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96e5f: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* d96e62: push 0xde2724 */
  { uint32_t v = 0xde2724u; esp -= 4; W32(esp, v); }
/* d96e67: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d96e68: call dword ptr [0xde88f4] */
  esp -= 4; W32(esp, 0xd96e6eu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* d96e6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d96e71: mov ecx, eax */
  ecx = eax;
/* d96e73: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* d96e77: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd96e7du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d96e7d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d96e7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96e80: mov ecx, esi */
  ecx = esi;
/* d96e82: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xd96e88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96e88: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* d96e8b: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d96e8f: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd96e95u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_d96e95: /* d96e95: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d96e97: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* d96e9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d96e9b: mov ecx, esi */
  ecx = esi;
/* d96e9d: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xd96ea3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96ea3: push 0xde272c */
  { uint32_t v = 0xde272cu; esp -= 4; W32(esp, v); }
/* d96ea8: mov ecx, eax */
  ecx = eax;
/* d96eaa: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* d96eae: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd96eb4u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d96eb4: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* d96eb7: mov edi, eax */
  edi = eax;
/* d96eb9: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d96ebd: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd96ec3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d96ec3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d96ec5: je 0xd96f06 */
  if (zf) goto L_d96f06;
L_d96ec7: /* d96ec7: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* d96eca: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xd96ecfu); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* d96ecf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96ed0: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* d96ed3: push 0xde274c */
  { uint32_t v = 0xde274cu; esp -= 4; W32(esp, v); }
/* d96ed8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d96ed9: call dword ptr [0xde88f4] */
  esp -= 4; W32(esp, 0xd96edfu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* d96edf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d96ee2: mov ecx, eax */
  ecx = eax;
/* d96ee4: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* d96ee8: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd96eeeu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d96eee: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d96ef0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96ef1: mov ecx, esi */
  ecx = esi;
/* d96ef3: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xd96ef9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96ef9: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* d96efc: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d96f00: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd96f06u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_d96f06: /* d96f06: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d96f08: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* d96f0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d96f0c: mov ecx, esi */
  ecx = esi;
/* d96f0e: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xd96f14u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96f14: push 0xde2754 */
  { uint32_t v = 0xde2754u; esp -= 4; W32(esp, v); }
/* d96f19: mov ecx, eax */
  ecx = eax;
/* d96f1b: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* d96f1f: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd96f25u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d96f25: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* d96f28: mov edi, eax */
  edi = eax;
/* d96f2a: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d96f2e: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd96f34u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d96f34: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d96f36: je 0xd96f7d */
  if (zf) goto L_d96f7d;
L_d96f38: /* d96f38: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* d96f3b: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xd96f40u); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* d96f40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96f41: lea edx, [ebp - 0x84] */
  edx = (uint32_t)(ebp + 0xffffff7cu);
/* d96f47: push 0xde2774 */
  { uint32_t v = 0xde2774u; esp -= 4; W32(esp, v); }
/* d96f4c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d96f4d: call dword ptr [0xde88f4] */
  esp -= 4; W32(esp, 0xd96f53u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* d96f53: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d96f56: mov ecx, eax */
  ecx = eax;
/* d96f58: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* d96f5c: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd96f62u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d96f62: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d96f64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d96f65: mov ecx, esi */
  ecx = esi;
/* d96f67: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xd96f6du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96f6d: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* d96f73: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d96f77: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd96f7du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_d96f7d: /* d96f7d: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* d96f80: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d96f81: jmp 0xd96e15 */
  goto L_d96e15;
L_d96f86: /* d96f86: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d96f88: mov ecx, esi */
  ecx = esi;
/* d96f8a: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0xd96f8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d96f8d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d96f90: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d96f94: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd96f9au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_d96f9a: /* d96f9a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d96f9d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d96f9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d96f9f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d96fa6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d96fa7: mov esp, ebp */
  esp = ebp;
/* d96fa9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d96faa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d96fad(void) {
  LOAD_REGS();
L_d96fad: /* d96fad: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* d96fb0: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d96fb5: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* d96fb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d96fb9: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* d96fbc: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd96fc1u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d96fc1(); return;
}

void f_d96fc1(void) {
  LOAD_REGS();
L_d96fc1: /* d96fc1: push 0xdc2620 */
  { uint32_t v = 0xdc2620u; esp -= 4; W32(esp, v); }
/* d96fc6: push 0xde277c */
  { uint32_t v = 0xde277cu; esp -= 4; W32(esp, v); }
/* d96fcb: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd96fd1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d96fd1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d96fd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d96fd6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d96fd8: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd96fddu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d96fdd: guest_badaddr(0xd96fdd); return;
}

void f_d970d0(void) {
  LOAD_REGS();
L_d970d0: /* d970d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d970d1: mov esi, ecx */
  esi = ecx;
L_d970d3: /* d970d3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d970d6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d970d7: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* d970da: mov ecx, dword ptr [0xde8950] */
  ecx = R32((uint32_t)(0xde8950u));
/* d970e0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d970e3: jge 0xd970fb */
  if ((sf == of)) goto L_d970fb;
L_d970e5: /* d970e5: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d970e7: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* d970ea: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d970ec: je 0xd970d3 */
  if (zf) goto L_d970d3;
L_d970ee: /* d970ee: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d970f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d970f1: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd970f7u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d970f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d970f9: je 0xd970d3 */
  if (zf) goto L_d970d3;
L_d970fb: /* d970fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d970fc: ret  */
  esp += 4; SPILL(); return;
}

void f_d97110(void) {
  LOAD_REGS();
L_d97110: /* d97110: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d97113: mov ecx, dword ptr [0xde8950] */
  ecx = R32((uint32_t)(0xde8950u));
/* d97119: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9711b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* d9711e: ret  */
  esp += 4; SPILL(); return;
}

void f_d97130(void) {
  LOAD_REGS();
L_d97130: /* d97130: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d97133: mov ecx, dword ptr [0xde8950] */
  ecx = R32((uint32_t)(0xde8950u));
/* d97139: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9713b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* d9713e: ret  */
  esp += 4; SPILL(); return;
}

void f_d97150(void) {
  LOAD_REGS();
L_d97150: /* d97150: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d97151: mov ebp, esp */
  ebp = esp;
/* d97153: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d97155: push 0xdb999a */
  { uint32_t v = 0xdb999au; esp -= 4; W32(esp, v); }
/* d9715a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d97160: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97161: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d97168: sub esp, 0x294 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x294u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9716e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9716f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d97170: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d97171: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d97174: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d97176: xor ebx, ebx */
  ebx = 0;
/* d97178: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9717b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* d9717e: call dword ptr [eax + 0x50] */
  { uint32_t t = R32((uint32_t)(eax + 0x50u)); esp -= 4; W32(esp, 0xd97181u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97181: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d97184: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d97186: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0xd97189u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97189: mov byte ptr [ebp - 0x18], bl */
  W8((uint32_t)(ebp + 0xffffffe8u), (ebx & 0xffu));
/* d9718c: mov byte ptr [ebp - 0x28], bl */
  W8((uint32_t)(ebp + 0xffffffd8u), (ebx & 0xffu));
/* d9718f: mov byte ptr [ebp - 0x2c], bl */
  W8((uint32_t)(ebp + 0xffffffd4u), (ebx & 0xffu));
L_d97192: /* d97192: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d97195: cmp ebx, dword ptr [ecx + 0x34] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d97198: jge 0xd972a3 */
  if ((sf == of)) goto L_d972a3;
L_d9719e: /* d9719e: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* d971a1: mov esi, dword ptr [eax + ebx*4] */
  esi = R32((uint32_t)(eax + ebx*4));
/* d971a4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d971a6: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* d971a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d971aa: mov ecx, esi */
  ecx = esi;
/* d971ac: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xd971b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d971b2: push 0xde2784 */
  { uint32_t v = 0xde2784u; esp -= 4; W32(esp, v); }
/* d971b7: mov ecx, eax */
  ecx = eax;
/* d971b9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d971bd: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd971c3u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d971c3: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d971c6: mov edi, eax */
  edi = eax;
/* d971c8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d971cc: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd971d2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d971d2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d971d4: je 0xd971f7 */
  if (zf) goto L_d971f7;
L_d971d6: /* d971d6: lea ecx, [ebp - 0x2a0] */
  ecx = (uint32_t)(ebp + 0xfffffd60u);
/* d971dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d971dd: mov ecx, esi */
  ecx = esi;
/* d971df: call 0xd824be */
  esp -= 4; W32(esp, 0xd971e4u); SPILL(); f_d824be(); if (g_unwind) return; RELOAD();
/* d971e4: lea edx, [ebp - 0x2a0] */
  edx = (uint32_t)(ebp + 0xfffffd60u);
/* d971ea: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d971eb: call dword ptr [0xde896c] */
  esp -= 4; W32(esp, 0xd971f1u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* d971f1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d971f4: mov byte ptr [ebp - 0x18], al */
  W8((uint32_t)(ebp + 0xffffffe8u), (eax & 0xffu));
L_d971f7: /* d971f7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d971f9: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d971fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d971fd: mov ecx, esi */
  ecx = esi;
/* d971ff: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xd97205u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97205: push 0xde2798 */
  { uint32_t v = 0xde2798u; esp -= 4; W32(esp, v); }
/* d9720a: mov ecx, eax */
  ecx = eax;
/* d9720c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d97210: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd97216u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d97216: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d97219: mov edi, eax */
  edi = eax;
/* d9721b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9721f: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd97225u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d97225: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d97227: je 0xd9724a */
  if (zf) goto L_d9724a;
L_d97229: /* d97229: lea edx, [ebp - 0x2a0] */
  edx = (uint32_t)(ebp + 0xfffffd60u);
/* d9722f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d97230: mov ecx, esi */
  ecx = esi;
/* d97232: call 0xd824be */
  esp -= 4; W32(esp, 0xd97237u); SPILL(); f_d824be(); if (g_unwind) return; RELOAD();
/* d97237: lea eax, [ebp - 0x2a0] */
  eax = (uint32_t)(ebp + 0xfffffd60u);
/* d9723d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9723e: call dword ptr [0xde896c] */
  esp -= 4; W32(esp, 0xd97244u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* d97244: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d97247: mov byte ptr [ebp - 0x28], al */
  W8((uint32_t)(ebp + 0xffffffd8u), (eax & 0xffu));
L_d9724a: /* d9724a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9724c: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* d9724f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97250: mov ecx, esi */
  ecx = esi;
/* d97252: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xd97258u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97258: push 0xde27b8 */
  { uint32_t v = 0xde27b8u; esp -= 4; W32(esp, v); }
/* d9725d: mov ecx, eax */
  ecx = eax;
/* d9725f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* d97263: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd97269u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d97269: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* d9726c: mov edi, eax */
  edi = eax;
/* d9726e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d97272: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd97278u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d97278: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9727a: je 0xd9729d */
  if (zf) goto L_d9729d;
L_d9727c: /* d9727c: lea ecx, [ebp - 0x2a0] */
  ecx = (uint32_t)(ebp + 0xfffffd60u);
/* d97282: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d97283: mov ecx, esi */
  ecx = esi;
/* d97285: call 0xd824be */
  esp -= 4; W32(esp, 0xd9728au); SPILL(); f_d824be(); if (g_unwind) return; RELOAD();
/* d9728a: lea edx, [ebp - 0x2a0] */
  edx = (uint32_t)(ebp + 0xfffffd60u);
/* d97290: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d97291: call dword ptr [0xde896c] */
  esp -= 4; W32(esp, 0xd97297u); SPILL(); f_4e3fe9(); if (g_unwind) return; /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* d97297: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9729a: mov byte ptr [ebp - 0x2c], al */
  W8((uint32_t)(ebp + 0xffffffd4u), (eax & 0xffu));
L_d9729d: /* d9729d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d9729e: jmp 0xd97192 */
  goto L_d97192;
L_d972a3: /* d972a3: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* d972a6: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* d972a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d972aa: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d972ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d972ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d972af: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* d972b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d972b3: call 0xd81dcf */
  esp -= 4; W32(esp, 0xd972b8u); SPILL(); f_d81dcf(); if (g_unwind) return; RELOAD();
/* d972b8: lea eax, [ebp - 0x6c] */
  eax = (uint32_t)(ebp + 0xffffff94u);
/* d972bb: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d972be: mov ecx, 0x24 */
  ecx = 0x24u;
/* d972c3: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* d972c6: xor eax, eax */
  eax = 0;
/* d972c8: mov ebx, ecx */
  ebx = ecx;
/* d972ca: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d972cd: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* d972d0: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* d972d2: mov ecx, ebx */
  ecx = ebx;
/* d972d4: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* d972d6: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* d972d9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d972dc: mov dword ptr [ebp - 0x6c], 0x24 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x24u);
/* d972e3: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* d972e6: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* d972e9: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* d972ec: mov dword ptr [ebp - 0x5c], 0xde4fc8 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0xde4fc8u);
/* d972f3: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xd972f8u); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* d972f8: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* d972fb: xor ebx, ebx */
  ebx = 0;
/* d972fd: mov bh, al */
  ebx = (ebx & 0xffff00ffu) | (((uint32_t)((eax & 0xffu)) & 0xffu) << 8);
/* d972ff: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xd97304u); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* d97304: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* d97307: mov bl, al */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* d97309: shl ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* d9730c: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xd97311u); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* d97311: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* d97314: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* d97317: or ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* d97319: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9731a: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* d9731d: mov dword ptr [ebp - 0x58], 3 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x3u);
/* d97324: call dword ptr [0xde8ff0] */
  esp -= 4; W32(esp, 0xd9732au); SPILL(); call_ind(R32(0xde8ff0u)); if (g_unwind) return; /* comdlg32!ChooseColorA */ RELOAD();
/* d9732a: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9732d: jne 0xd97521 */
  if (!zf) goto L_d97521;
L_d97333: /* d97333: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* d97336: mov ecx, eax */
  ecx = eax;
/* d97338: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d9733b: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* d9733e: movzx ecx, ah */
  ecx = (uint32_t)(((eax >> 8) & 0xffu));
/* d97341: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* d97344: movzx edx, al */
  edx = (uint32_t)((eax & 0xffu));
/* d97347: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* d9734a: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* d9734d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d97350: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* d97353: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* d97356: mov eax, esp */
  eax = esp;
/* d97358: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* d9735b: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* d9735e: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* d97361: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d97363: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* d97366: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* d97369: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* d9736c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* d9736f: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d97372: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* d97375: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* d97378: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d9737b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9737c: call 0xd8105a */
  esp -= 4; W32(esp, 0xd97381u); SPILL(); f_d8105a(); if (g_unwind) return; RELOAD();
/* d97381: xor ebx, ebx */
  ebx = 0;
L_d97383: /* d97383: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d97386: cmp ebx, dword ptr [eax + 0x34] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d97389: jge 0xd97500 */
  if ((sf == of)) goto L_d97500;
L_d9738f: /* d9738f: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* d97392: mov esi, dword ptr [eax + ebx*4] */
  esi = R32((uint32_t)(eax + ebx*4));
/* d97395: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d97397: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* d9739a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9739b: mov ecx, esi */
  ecx = esi;
/* d9739d: call dword ptr [edx + 0x80] */
  { uint32_t t = R32((uint32_t)(edx + 0x80u)); esp -= 4; W32(esp, 0xd973a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d973a3: push 0xde27d8 */
  { uint32_t v = 0xde27d8u; esp -= 4; W32(esp, v); }
/* d973a8: mov ecx, eax */
  ecx = eax;
/* d973aa: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* d973ae: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd973b4u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d973b4: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* d973b7: mov edi, eax */
  edi = eax;
/* d973b9: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d973bd: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd973c3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d973c3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d973c5: je 0xd97406 */
  if (zf) goto L_d97406;
L_d973c7: /* d973c7: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* d973ca: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xd973cfu); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* d973cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d973d0: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d973d3: push 0xde27ec */
  { uint32_t v = 0xde27ecu; esp -= 4; W32(esp, v); }
/* d973d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d973d9: call dword ptr [0xde88f4] */
  esp -= 4; W32(esp, 0xd973dfu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* d973df: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d973e2: mov ecx, eax */
  ecx = eax;
/* d973e4: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* d973e8: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd973eeu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d973ee: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d973f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d973f1: mov ecx, esi */
  ecx = esi;
/* d973f3: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xd973f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d973f9: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* d973fc: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d97400: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd97406u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_d97406: /* d97406: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d97408: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* d9740e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9740f: mov ecx, esi */
  ecx = esi;
/* d97411: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xd97417u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97417: push 0xde27f4 */
  { uint32_t v = 0xde27f4u; esp -= 4; W32(esp, v); }
/* d9741c: mov ecx, eax */
  ecx = eax;
/* d9741e: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* d97422: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd97428u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d97428: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* d9742e: mov edi, eax */
  edi = eax;
/* d97430: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d97434: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd9743au); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d9743a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9743c: je 0xd9747d */
  if (zf) goto L_d9747d;
L_d9743e: /* d9743e: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* d97441: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xd97446u); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* d97446: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97447: lea edx, [ebp - 0x7c] */
  edx = (uint32_t)(ebp + 0xffffff84u);
/* d9744a: push 0xde2814 */
  { uint32_t v = 0xde2814u; esp -= 4; W32(esp, v); }
/* d9744f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d97450: call dword ptr [0xde88f4] */
  esp -= 4; W32(esp, 0xd97456u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* d97456: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d97459: mov ecx, eax */
  ecx = eax;
/* d9745b: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* d9745f: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd97465u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d97465: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d97467: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97468: mov ecx, esi */
  ecx = esi;
/* d9746a: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xd97470u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97470: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* d97473: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d97477: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd9747du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_d9747d: /* d9747d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9747f: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* d97485: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d97486: mov ecx, esi */
  ecx = esi;
/* d97488: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xd9748eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9748e: push 0xde281c */
  { uint32_t v = 0xde281cu; esp -= 4; W32(esp, v); }
/* d97493: mov ecx, eax */
  ecx = eax;
/* d97495: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* d97499: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd9749fu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d9749f: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* d974a5: mov edi, eax */
  edi = eax;
/* d974a7: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d974ab: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd974b1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d974b1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d974b3: je 0xd974fa */
  if (zf) goto L_d974fa;
L_d974b5: /* d974b5: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* d974b8: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xd974bdu); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* d974bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d974be: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* d974c4: push 0xde283c */
  { uint32_t v = 0xde283cu; esp -= 4; W32(esp, v); }
/* d974c9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d974ca: call dword ptr [0xde88f4] */
  esp -= 4; W32(esp, 0xd974d0u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* d974d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d974d3: mov ecx, eax */
  ecx = eax;
/* d974d5: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* d974d9: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd974dfu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d974df: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d974e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d974e2: mov ecx, esi */
  ecx = esi;
/* d974e4: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0xd974eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d974ea: lea ecx, [ebp - 0x88] */
  ecx = (uint32_t)(ebp + 0xffffff78u);
/* d974f0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d974f4: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd974fau); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_d974fa: /* d974fa: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d974fb: jmp 0xd97383 */
  goto L_d97383;
L_d97500: /* d97500: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* d97503: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* d97506: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97508: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9750a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9750b: call dword ptr [0xde8f2c] */
  esp -= 4; W32(esp, 0xd97511u); SPILL(); call_ind(R32(0xde8f2cu)); if (g_unwind) return; /* USER32!InvalidateRect */ RELOAD();
/* d97511: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d97514: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* d97517: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* d9751a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9751b: call dword ptr [0xde8f38] */
  esp -= 4; W32(esp, 0xd97521u); SPILL(); call_ind(R32(0xde8f38u)); if (g_unwind) return; /* USER32!UpdateWindow */ RELOAD();
L_d97521: /* d97521: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d97524: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d97526: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0xd97529u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97529: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9752c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9752d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9752e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d97535: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d97536: mov esp, ebp */
  esp = ebp;
/* d97538: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d97539: ret  */
  esp += 4; SPILL(); return;
}

void f_d9753a(void) {
  LOAD_REGS();
L_d9753a: /* d9753a: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* d9753d: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d97542: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* d97545: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d97546: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* d97549: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9754eu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9754e(); return;
}

void f_d9754e(void) {
  LOAD_REGS();
L_d9754e: /* d9754e: push 0xdc2658 */
  { uint32_t v = 0xdc2658u; esp -= 4; W32(esp, v); }
/* d97553: push 0xde2844 */
  { uint32_t v = 0xde2844u; esp -= 4; W32(esp, v); }
/* d97558: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9755eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9755e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d97561: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97563: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97565: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9756au); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9756a: guest_badaddr(0xd9756a); return;
}

void f_d97680(void) {
  LOAD_REGS();
L_d97680: /* d97680: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d97681: mov ebp, esp */
  ebp = esp;
/* d97683: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d97685: push 0xdb99c9 */
  { uint32_t v = 0xdb99c9u; esp -= 4; W32(esp, v); }
/* d9768a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d97690: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97691: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d97698: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9769b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9769c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9769d: mov esi, ecx */
  esi = ecx;
/* d9769f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d976a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d976a2: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* d976a5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d976a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d976a9: mov ecx, esi */
  ecx = esi;
/* d976ab: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d976b2: call dword ptr [eax + 0x80] */
  { uint32_t t = R32((uint32_t)(eax + 0x80u)); esp -= 4; W32(esp, 0xd976b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d976b8: push 0xde2868 */
  { uint32_t v = 0xde2868u; esp -= 4; W32(esp, v); }
/* d976bd: mov ecx, eax */
  ecx = eax;
/* d976bf: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d976c3: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd976c9u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d976c9: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* d976cc: mov edi, eax */
  edi = eax;
/* d976ce: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d976d2: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd976d8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d976d8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d976da: je 0xd97744 */
  if (zf) goto L_d97744;
L_d976dc: /* d976dc: mov edi, dword ptr [0xde8918] */
  edi = R32((uint32_t)(0xde8918u));
/* d976e2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d976e5: mov eax, esp */
  eax = esp;
/* d976e7: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d976ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d976ec: push 0xde2880 */
  { uint32_t v = 0xde2880u; esp -= 4; W32(esp, v); }
/* d976f1: push 0xde2890 */
  { uint32_t v = 0xde2890u; esp -= 4; W32(esp, v); }
/* d976f6: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* d976fc: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* d976ff: mov dword ptr [eax + 8], 0xd8215d */
  W32((uint32_t)(eax + 0x8u), 0xd8215du);
/* d97706: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd97708u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97708: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9770a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9770d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9770e: mov ecx, esi */
  ecx = esi;
/* d97710: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0xd97713u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97713: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d97716: mov eax, esp */
  eax = esp;
/* d97718: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d9771b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9771d: push 0xde289c */
  { uint32_t v = 0xde289cu; esp -= 4; W32(esp, v); }
/* d97722: push 0xde28ac */
  { uint32_t v = 0xde28acu; esp -= 4; W32(esp, v); }
/* d97727: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* d9772d: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* d97730: mov dword ptr [eax + 8], 0xd81fe6 */
  W32((uint32_t)(eax + 0x8u), 0xd81fe6u);
/* d97737: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd97739u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97739: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9773b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9773e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9773f: mov ecx, esi */
  ecx = esi;
/* d97741: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0xd97744u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d97744: /* d97744: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d97747: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d97748: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d97749: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d97750: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d97751: mov esp, ebp */
  esp = ebp;
/* d97753: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d97754: ret  */
  esp += 4; SPILL(); return;
}

void f_d97755(void) {
  LOAD_REGS();
L_d97755: /* d97755: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d97758: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9775d: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d97760: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d97761: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d97764: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd97769u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d97769(); return;
}

void f_d97769(void) {
  LOAD_REGS();
L_d97769: /* d97769: push 0xdc26b0 */
  { uint32_t v = 0xdc26b0u; esp -= 4; W32(esp, v); }
/* d9776e: push 0xde28b8 */
  { uint32_t v = 0xde28b8u; esp -= 4; W32(esp, v); }
/* d97773: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd97779u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d97779: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9777c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9777e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97780: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd97785u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d97785: guest_badaddr(0xd97785); return;
}

void f_d977e0(void) {
  LOAD_REGS();
L_d977e0: /* d977e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d977e1: mov ebp, esp */
  ebp = esp;
/* d977e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d977e5: push 0xdb99e0 */
  { uint32_t v = 0xdb99e0u; esp -= 4; W32(esp, v); }
/* d977ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d977f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d977f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d977f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d977fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d977fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d977fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d977fe: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* d97801: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d97804: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d97805: mov esi, ecx */
  esi = ecx;
/* d97807: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9780e: call 0xd8113b */
  esp -= 4; W32(esp, 0xd97813u); SPILL(); f_d8113b(); if (g_unwind) return; RELOAD();
/* d97813: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* d97815: lea ecx, [esi + 0x3c] */
  ecx = (uint32_t)(esi + 0x3cu);
/* d97818: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d97819: mov ecx, edi */
  ecx = edi;
/* d9781b: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0xd9781eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9781e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d97820: add esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d97823: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d97824: mov ecx, eax */
  ecx = eax;
/* d97826: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0xd97829u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97829: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9782c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9782d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9782e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d97835: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d97836: mov esp, ebp */
  esp = ebp;
/* d97838: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d97839: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9783c(void) {
  LOAD_REGS();
L_d9783c: /* d9783c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9783f: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d97844: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d97847: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d97848: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9784b: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd97850u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d97850(); return;
}

void f_d97850(void) {
  LOAD_REGS();
L_d97850: /* d97850: push 0xdc26f4 */
  { uint32_t v = 0xdc26f4u; esp -= 4; W32(esp, v); }
/* d97855: push 0xde28c8 */
  { uint32_t v = 0xde28c8u; esp -= 4; W32(esp, v); }
/* d9785a: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd97860u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d97860: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d97863: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97865: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97867: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9786cu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9786c: guest_badaddr(0xd9786c); return;
}

void f_d978a0(void) {
  LOAD_REGS();
L_d978a0: /* d978a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d978a1: mov ebp, esp */
  ebp = esp;
/* d978a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d978a5: push 0xdb99f9 */
  { uint32_t v = 0xdb99f9u; esp -= 4; W32(esp, v); }
/* d978aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d978b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d978b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d978b8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d978bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d978bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d978bd: mov esi, ecx */
  esi = ecx;
/* d978bf: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d978c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d978c2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d978c5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d978cc: call dword ptr [eax + 0x90] */
  { uint32_t t = R32((uint32_t)(eax + 0x90u)); esp -= 4; W32(esp, 0xd978d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d978d2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d978d5: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* d978d8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d978da: je 0xd97930 */
  if (zf) goto L_d97930;
L_d978dc: /* d978dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d978de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d978e0: mov ecx, eax */
  ecx = eax;
/* d978e2: call dword ptr [0xde89dc] */
  esp -= 4; W32(esp, 0xd978e8u); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* d978e8: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* d978eb: mov edi, eax */
  edi = eax;
/* d978ed: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd978f3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d978f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d978f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d978f5: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* d978f8: push 0xde2940 */
  { uint32_t v = 0xde2940u; esp -= 4; W32(esp, v); }
/* d978fd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d978fe: call dword ptr [0xde88f4] */
  esp -= 4; W32(esp, 0xd97904u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* d97904: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d97907: mov ecx, eax */
  ecx = eax;
/* d97909: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9790d: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd97913u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d97913: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d97916: mov ecx, dword ptr [ecx + 0x18] */
  ecx = R32((uint32_t)(ecx + 0x18u));
/* d97919: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9791b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9791c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d9791f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97920: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xd97923u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97923: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d97926: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9792a: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd97930u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_d97930: /* d97930: mov esi, dword ptr [esi + 0xc] */
  esi = R32((uint32_t)(esi + 0xcu));
/* d97933: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d97935: mov ecx, esi */
  ecx = esi;
/* d97937: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0xd9793au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9793a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9793c: mov ecx, esi */
  ecx = esi;
/* d9793e: call dword ptr [eax + 0x54] */
  { uint32_t t = R32((uint32_t)(eax + 0x54u)); esp -= 4; W32(esp, 0xd97941u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97941: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* d97944: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d97946: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d97948: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0xd9794bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9794b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9794e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9794f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d97950: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d97957: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d97958: mov esp, ebp */
  esp = ebp;
/* d9795a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9795b: ret  */
  esp += 4; SPILL(); return;
}

void f_d9795c(void) {
  LOAD_REGS();
L_d9795c: /* d9795c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9795f: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d97964: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d97967: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d97968: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9796b: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd97970u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d97970(); return;
}

void f_d97970(void) {
  LOAD_REGS();
L_d97970: /* d97970: push 0xdc2730 */
  { uint32_t v = 0xdc2730u; esp -= 4; W32(esp, v); }
/* d97975: push 0xde297c */
  { uint32_t v = 0xde297cu; esp -= 4; W32(esp, v); }
/* d9797a: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd97980u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d97980: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d97983: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97985: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97987: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9798cu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9798c: guest_badaddr(0xd9798c); return;
}

void f_d979d0(void) {
  LOAD_REGS();
L_d979d0: /* d979d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d979d1: mov ebp, esp */
  ebp = esp;
/* d979d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d979d5: push 0xdb9a10 */
  { uint32_t v = 0xdb9a10u; esp -= 4; W32(esp, v); }
/* d979da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d979e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d979e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d979e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d979e9: mov eax, 0x2060 */
  eax = 0x2060u;
/* d979ee: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd979f3u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d979f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d979f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d979f5: mov esi, ecx */
  esi = ecx;
/* d979f7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d979f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d979fa: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* d979fd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d97a00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d97a01: mov ecx, esi */
  ecx = esi;
/* d97a03: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d97a0a: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0xd97a0du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97a0d: mov edx, dword ptr [0xde5184] */
  edx = R32((uint32_t)(0xde5184u));
/* d97a13: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d97a16: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d97a17: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* d97a1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97a1b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d97a1c: call dword ptr [0xde8f6c] */
  esp -= 4; W32(esp, 0xd97a22u); SPILL(); call_ind(R32(0xde8f6cu)); if (g_unwind) return; /* USER32!FillRect */ RELOAD();
/* d97a22: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* d97a25: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* d97a28: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* d97a2b: mov edi, dword ptr [ebp - 0x48] */
  edi = R32((uint32_t)(ebp + 0xffffffb8u));
/* d97a2e: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* d97a31: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d97a34: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* d97a37: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d97a39: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* d97a3c: call dword ptr [edx + 0xec] */
  { uint32_t t = R32((uint32_t)(edx + 0xecu)); esp -= 4; W32(esp, 0xd97a42u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97a42: mov ebx, eax */
  ebx = eax;
/* d97a44: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d97a46: mov ecx, esi */
  ecx = esi;
/* d97a48: call dword ptr [eax + 0x48] */
  { uint32_t t = R32((uint32_t)(eax + 0x48u)); esp -= 4; W32(esp, 0xd97a4bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97a4b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d97a4e: mov ecx, 1 */
  ecx = 0x1u;
/* d97a53: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d97a55: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* d97a58: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d97a5a: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* d97a5d: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* d97a60: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* d97a63: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d97a65: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* d97a68: mov ecx, esi */
  ecx = esi;
/* d97a6a: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* d97a6d: mov dword ptr [ebp - 0x58], edi */
  W32((uint32_t)(ebp + 0xffffffa8u), edi);
/* d97a70: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* d97a73: call dword ptr [edx + 0x48] */
  { uint32_t t = R32((uint32_t)(edx + 0x48u)); esp -= 4; W32(esp, 0xd97a76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97a76: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d97a78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97a79: mov ecx, esi */
  ecx = esi;
/* d97a7b: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xd97a7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97a7e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d97a81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97a82: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* d97a85: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97a86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d97a87: call dword ptr [0xde8f6c] */
  esp -= 4; W32(esp, 0xd97a8du); SPILL(); call_ind(R32(0xde8f6cu)); if (g_unwind) return; /* USER32!FillRect */ RELOAD();
/* d97a8d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d97a8f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d97a91: mov ecx, esi */
  ecx = esi;
/* d97a93: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0xd97a96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97a96: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* d97a99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97a9b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d97a9e: mov ecx, esp */
  ecx = esp;
/* d97aa0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* d97aa2: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* d97aa5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* d97aa8: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* d97aab: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* d97aae: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* d97ab1: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* d97ab4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d97ab7: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d97ab9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d97abb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d97abc: mov ecx, esi */
  ecx = esi;
/* d97abe: call dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); esp -= 4; W32(esp, 0xd97ac1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97ac1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d97ac3: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d97ac6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d97ac7: call dword ptr [0xde8c88] */
  esp -= 4; W32(esp, 0xd97acdu); SPILL(); call_ind(R32(0xde8c88u)); if (g_unwind) return; /* GDI32!SetBkMode */ RELOAD();
/* d97acd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97acf: push 0xde2984 */
  { uint32_t v = 0xde2984u; esp -= 4; W32(esp, v); }
/* d97ad4: push 0xde2994 */
  { uint32_t v = 0xde2994u; esp -= 4; W32(esp, v); }
/* d97ad9: call dword ptr [0xde8918] */
  esp -= 4; W32(esp, 0xd97adfu); SPILL(); f_4e3242(); if (g_unwind) return; /* Core!?LocalizeGeneral@@YAPBGPBDPBG1@Z */ RELOAD();
/* d97adf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d97ae2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97ae3: lea eax, [ebp - 0x2070] */
  eax = (uint32_t)(ebp + 0xffffdf90u);
/* d97ae9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97aea: call dword ptr [0xde88b4] */
  esp -= 4; W32(esp, 0xd97af0u); SPILL(); f_4e27d9(); if (g_unwind) return; /* Core!?appStrcpy@@YAPAGPAGPBG@Z */ RELOAD();
/* d97af0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d97af2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d97af5: mov ecx, esi */
  ecx = esi;
/* d97af7: call dword ptr [edx + 0x48] */
  { uint32_t t = R32((uint32_t)(edx + 0x48u)); esp -= 4; W32(esp, 0xd97afau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97afa: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d97afc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97afd: mov ecx, esi */
  ecx = esi;
/* d97aff: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0xd97b02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97b02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97b03: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d97b06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97b07: call dword ptr [0xde8c94] */
  esp -= 4; W32(esp, 0xd97b0du); SPILL(); call_ind(R32(0xde8c94u)); if (g_unwind) return; /* GDI32!SetTextColor */ RELOAD();
/* d97b0d: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* d97b13: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d97b16: je 0xd97b63 */
  if (zf) goto L_d97b63;
L_d97b18: /* d97b18: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* d97b1b: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d97b1e: lea edx, [ebp - 0x2070] */
  edx = (uint32_t)(ebp + 0xffffdf90u);
/* d97b24: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d97b25: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* d97b28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d97b29: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* d97b2c: mov dword ptr [ebp - 0x68], edi */
  W32((uint32_t)(ebp + 0xffffff98u), edi);
/* d97b2f: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* d97b32: mov dword ptr [ebp - 0x60], ebx */
  W32((uint32_t)(ebp + 0xffffffa0u), ebx);
/* d97b35: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* d97b38: call dword ptr [0xde89e8] */
  esp -= 4; W32(esp, 0xd97b3eu); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* d97b3e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d97b41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97b43: push 0x8024 */
  { uint32_t v = 0x8024u; esp -= 4; W32(esp, v); }
/* d97b48: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* d97b4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d97b4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97b4d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d97b50: lea edx, [ebp - 0x2070] */
  edx = (uint32_t)(ebp + 0xffffdf90u);
/* d97b56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d97b57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97b58: call dword ptr [0xde8df8] */
  esp -= 4; W32(esp, 0xd97b5eu); SPILL(); call_ind(R32(0xde8df8u)); if (g_unwind) return; /* USER32!DrawTextExW */ RELOAD();
/* d97b5e: jmp 0xd97c0a */
  goto L_d97c0a;
L_d97b63: /* d97b63: lea ecx, [ebp - 0x2070] */
  ecx = (uint32_t)(ebp + 0xffffdf90u);
/* d97b69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d97b6a: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xd97b70u); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* d97b70: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d97b73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d97b75: jne 0xd97b7c */
  if (!zf) goto L_d97b7c;
L_d97b77: /* d97b77: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d97b7a: jmp 0xd97ba3 */
  goto L_d97ba3;
L_d97b7c: /* d97b7c: lea edx, [ebp - 0x2070] */
  edx = (uint32_t)(ebp + 0xffffdf90u);
/* d97b82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d97b83: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xd97b89u); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* d97b89: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d97b8c: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d97b8f: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d97b92: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d97b95: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d97b98: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd97b9du); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d97b9d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d97ba0: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
L_d97ba3: /* d97ba3: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* d97ba6: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d97ba9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d97baa: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* d97bad: lea eax, [ebp - 0x2070] */
  eax = (uint32_t)(ebp + 0xffffdf90u);
/* d97bb3: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* d97bb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97bb7: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* d97bba: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* d97bbd: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* d97bc0: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* d97bc3: call dword ptr [0xde89e8] */
  esp -= 4; W32(esp, 0xd97bc9u); SPILL(); f_4e19f1(); if (g_unwind) return; /* Core!?appStrlen@@YAHPBG@Z */ RELOAD();
/* d97bc9: lea ecx, [ebp - 0x2070] */
  ecx = (uint32_t)(ebp + 0xffffdf90u);
/* d97bcf: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d97bd2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d97bd3: mov edi, eax */
  edi = eax;
/* d97bd5: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xd97bdbu); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* d97bdb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d97bde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97bdf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d97be2: lea edx, [ebp - 0x2070] */
  edx = (uint32_t)(ebp + 0xffffdf90u);
/* d97be8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d97be9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97bea: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xd97bf0u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* d97bf0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d97bf3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d97bf6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97bf8: push 0x8024 */
  { uint32_t v = 0x8024u; esp -= 4; W32(esp, v); }
/* d97bfd: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d97c00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d97c01: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d97c02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97c03: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d97c04: call dword ptr [0xde8df4] */
  esp -= 4; W32(esp, 0xd97c0au); SPILL(); call_ind(R32(0xde8df4u)); if (g_unwind) return; /* USER32!DrawTextExA */ RELOAD();
L_d97c0a: /* d97c0a: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* d97c0d: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* d97c10: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* d97c13: mov edi, dword ptr [ebp - 0x40] */
  edi = R32((uint32_t)(ebp + 0xffffffc0u));
/* d97c16: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* d97c19: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d97c1c: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* d97c1f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d97c21: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* d97c24: call dword ptr [eax + 0xec] */
  { uint32_t t = R32((uint32_t)(eax + 0xecu)); esp -= 4; W32(esp, 0xd97c2au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97c2a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d97c2d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d97c2f: mov ebx, eax */
  ebx = eax;
/* d97c31: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* d97c34: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d97c35: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* d97c38: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* d97c3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97c3d: mov ecx, esi */
  ecx = esi;
/* d97c3f: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* d97c42: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* d97c45: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* d97c48: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* d97c4b: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xd97c4eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97c4e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d97c51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97c52: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* d97c55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97c56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d97c57: call dword ptr [0xde8f6c] */
  esp -= 4; W32(esp, 0xd97c5du); SPILL(); call_ind(R32(0xde8f6cu)); if (g_unwind) return; /* USER32!FillRect */ RELOAD();
/* d97c5d: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* d97c60: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d97c62: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d97c64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97c66: mov ecx, esi */
  ecx = esi;
/* d97c68: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0xd97c6bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97c6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97c6c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d97c6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97c70: call dword ptr [0xde8c94] */
  esp -= 4; W32(esp, 0xd97c76u); SPILL(); call_ind(R32(0xde8c94u)); if (g_unwind) return; /* GDI32!SetTextColor */ RELOAD();
/* d97c76: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* d97c7c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d97c7e: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d97c81: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d97c83: je 0xd97ce3 */
  if (zf) goto L_d97ce3;
L_d97c85: /* d97c85: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d97c88: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* d97c8b: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* d97c8e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d97c8f: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* d97c92: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* d97c95: mov ecx, esi */
  ecx = esi;
/* d97c97: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* d97c9a: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* d97c9d: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* d97ca0: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* d97ca3: call dword ptr [0xde88bc] */
  esp -= 4; W32(esp, 0xd97ca9u); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* d97ca9: mov ecx, esi */
  ecx = esi;
/* d97cab: mov edi, eax */
  edi = eax;
/* d97cad: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd97cb3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d97cb3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97cb5: push 0x8024 */
  { uint32_t v = 0x8024u; esp -= 4; W32(esp, v); }
/* d97cba: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* d97cbd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d97cbe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d97cbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97cc0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d97cc3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97cc4: call dword ptr [0xde8df8] */
  esp -= 4; W32(esp, 0xd97ccau); SPILL(); call_ind(R32(0xde8df8u)); if (g_unwind) return; /* USER32!DrawTextExW */ RELOAD();
L_d97cca: /* d97cca: lea esp, [ebp - 0x207c] */
  esp = (uint32_t)(ebp + 0xffffdf84u);
/* d97cd0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d97cd3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d97cda: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d97cdb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d97cdc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d97cdd: mov esp, ebp */
  esp = ebp;
/* d97cdf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d97ce0: ret 4 */
  esp += 8; SPILL(); return;
L_d97ce3: /* d97ce3: mov ecx, esi */
  ecx = esi;
/* d97ce5: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd97cebu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d97ceb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97cec: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xd97cf2u); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* d97cf2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d97cf5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d97cf7: jne 0xd97cfe */
  if (!zf) goto L_d97cfe;
L_d97cf9: /* d97cf9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d97cfc: jmp 0xd97d27 */
  goto L_d97d27;
L_d97cfe: /* d97cfe: mov ecx, esi */
  ecx = esi;
/* d97d00: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd97d06u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d97d06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97d07: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xd97d0du); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* d97d0d: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d97d10: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d97d13: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d97d16: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d97d19: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d97d1c: call 0xdb7b00 */
  esp -= 4; W32(esp, 0xd97d21u); SPILL(); f_db7b00(); if (g_unwind) return; RELOAD();
/* d97d21: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d97d24: mov dword ptr [ebp - 0x14], esp */
  W32((uint32_t)(ebp + 0xffffffecu), esp);
L_d97d27: /* d97d27: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d97d2a: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* d97d2d: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* d97d30: mov dword ptr [ebp - 0x50], ebx */
  W32((uint32_t)(ebp + 0xffffffb0u), ebx);
/* d97d33: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* d97d36: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d97d37: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* d97d3a: mov ecx, esi */
  ecx = esi;
/* d97d3c: mov dword ptr [ebp - 0x68], ebx */
  W32((uint32_t)(ebp + 0xffffff98u), ebx);
/* d97d3f: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* d97d42: mov dword ptr [ebp - 0x60], edi */
  W32((uint32_t)(ebp + 0xffffffa0u), edi);
/* d97d45: call dword ptr [0xde88bc] */
  esp -= 4; W32(esp, 0xd97d4bu); SPILL(); f_4e2612(); if (g_unwind) return; /* Core!?Len@FString@@QBEHXZ */ RELOAD();
/* d97d4b: mov ecx, esi */
  ecx = esi;
/* d97d4d: mov edi, eax */
  edi = eax;
/* d97d4f: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd97d55u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d97d55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97d56: call dword ptr [0xde88c8] */
  esp -= 4; W32(esp, 0xd97d5cu); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* d97d5c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d97d5f: mov ecx, esi */
  ecx = esi;
/* d97d61: mov ebx, eax */
  ebx = eax;
/* d97d63: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd97d69u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d97d69: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d97d6c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d97d6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97d6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d97d6f: call dword ptr [0xde88c4] */
  esp -= 4; W32(esp, 0xd97d75u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* d97d75: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d97d78: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97d7a: push 0x8024 */
  { uint32_t v = 0x8024u; esp -= 4; W32(esp, v); }
/* d97d7f: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* d97d82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d97d83: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d97d84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97d85: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d97d88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97d89: call dword ptr [0xde8df4] */
  esp -= 4; W32(esp, 0xd97d8fu); SPILL(); call_ind(R32(0xde8df4u)); if (g_unwind) return; /* USER32!DrawTextExA */ RELOAD();
/* d97d8f: jmp 0xd97cca */
  goto L_d97cca;
}

void f_d97d94(void) {
  LOAD_REGS();
L_d97d94: /* d97d94: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* d97d97: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d97d9c: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* d97d9f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d97da0: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* d97da3: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd97da8u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d97da8(); return;
}

void f_d97da8(void) {
  LOAD_REGS();
L_d97da8: /* d97da8: push 0xdc2764 */
  { uint32_t v = 0xdc2764u; esp -= 4; W32(esp, v); }
/* d97dad: push 0xde2998 */
  { uint32_t v = 0xde2998u; esp -= 4; W32(esp, v); }
/* d97db2: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd97db8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d97db8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d97dbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97dbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97dbf: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd97dc4u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d97dc4: guest_badaddr(0xd97dc4); return;
}

void f_d97ed0(void) {
  LOAD_REGS();
L_d97ed0: /* d97ed0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d97ed1: mov ebp, esp */
  ebp = esp;
/* d97ed3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d97ed5: push 0xdb9a20 */
  { uint32_t v = 0xdb9a20u; esp -= 4; W32(esp, v); }
/* d97eda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d97ee0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97ee1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d97ee8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d97eeb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d97eee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d97ef0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d97ef1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d97ef2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d97ef3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d97ef6: mov esi, ecx */
  esi = ecx;
/* d97ef8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d97eff: je 0xd97f13 */
  if (zf) goto L_d97f13;
L_d97f01: /* d97f01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97f02: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* d97f05: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* d97f08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d97f09: call dword ptr [0xde8dfc] */
  esp -= 4; W32(esp, 0xd97f0fu); SPILL(); call_ind(R32(0xde8dfcu)); if (g_unwind) return; /* USER32!GetDlgItem */ RELOAD();
/* d97f0f: mov edi, eax */
  edi = eax;
/* d97f11: jmp 0xd97f19 */
  goto L_d97f19;
L_d97f13: /* d97f13: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* d97f16: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
L_d97f19: /* d97f19: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d97f1b: jne 0xd97f35 */
  if (!zf) goto L_d97f35;
L_d97f1d: /* d97f1d: push 0x61f */
  { uint32_t v = 0x61fu; esp -= 4; W32(esp, v); }
/* d97f22: push 0xde29d0 */
  { uint32_t v = 0xde29d0u; esp -= 4; W32(esp, v); }
/* d97f27: push 0xde29e0 */
  { uint32_t v = 0xde29e0u; esp -= 4; W32(esp, v); }
/* d97f2c: call dword ptr [0xde88a8] */
  esp -= 4; W32(esp, 0xd97f32u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* d97f32: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d97f35: /* d97f35: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* d97f38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97f39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d97f3a: call dword ptr [0xde8f60] */
  esp -= 4; W32(esp, 0xd97f40u); SPILL(); call_ind(R32(0xde8f60u)); if (g_unwind) return; /* USER32!GetClientRect */ RELOAD();
/* d97f40: mov ecx, dword ptr [0xde5034] */
  ecx = R32((uint32_t)(0xde5034u));
/* d97f46: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* d97f49: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* d97f4c: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* d97f4f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d97f50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97f52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d97f53: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d97f55: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d97f56: sub eax, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d97f59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d97f5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97f5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97f5e: push 0x46000000 */
  { uint32_t v = 0x46000000u; esp -= 4; W32(esp, v); }
/* d97f63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97f65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97f67: mov ecx, esi */
  ecx = esi;
/* d97f69: call 0xd81852 */
  esp -= 4; W32(esp, 0xd97f6eu); SPILL(); f_d81852(); if (g_unwind) return; RELOAD();
/* d97f6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97f70: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97f72: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d97f74: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97f76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97f78: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d97f7a: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* d97f7d: call 0xd815fa */
  esp -= 4; W32(esp, 0xd97f82u); SPILL(); f_d815fa(); if (g_unwind) return; RELOAD();
/* d97f82: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d97f84: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d97f86: mov ecx, esi */
  ecx = esi;
/* d97f88: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xd97f8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d97f8b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d97f8e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d97f8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d97f90: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d97f97: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d97f98: mov esp, ebp */
  esp = ebp;
/* d97f9a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d97f9b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d97f9e(void) {
  LOAD_REGS();
L_d97f9e: /* d97f9e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d97fa1: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d97fa6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d97fa9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d97faa: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d97fad: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd97fb2u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d97fb2(); return;
}

void f_d97fb2(void) {
  LOAD_REGS();
L_d97fb2: /* d97fb2: push 0xdc2798 */
  { uint32_t v = 0xdc2798u; esp -= 4; W32(esp, v); }
/* d97fb7: push 0xde29ec */
  { uint32_t v = 0xde29ecu; esp -= 4; W32(esp, v); }
/* d97fbc: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd97fc2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d97fc2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d97fc5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97fc7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d97fc9: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd97fceu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d97fce: guest_badaddr(0xd97fce); return;
}

void f_d98010(void) {
  LOAD_REGS();
L_d98010: /* d98010: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d98011: mov ebp, esp */
  ebp = esp;
/* d98013: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d98015: push 0xdb9a30 */
  { uint32_t v = 0xdb9a30u; esp -= 4; W32(esp, v); }
/* d9801a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d98020: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98021: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d98028: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9802b: cmp dword ptr [ebp + 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9802f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d98030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98031: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d98032: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d98035: mov esi, ecx */
  esi = ecx;
/* d98037: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9803e: jne 0xd98073 */
  if (!zf) goto L_d98073;
L_d98040: /* d98040: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* d98043: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98044: call dword ptr [0xde8ed8] */
  esp -= 4; W32(esp, 0xd9804au); SPILL(); call_ind(R32(0xde8ed8u)); if (g_unwind) return; /* USER32!SetFocus */ RELOAD();
/* d9804a: mov eax, dword ptr [esi + 0xd0] */
  eax = R32((uint32_t)(esi + 0xd0u));
/* d98050: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98052: jne 0xd98060 */
  if (!zf) goto L_d98060;
L_d98054: /* d98054: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d98056: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d98058: mov ecx, esi */
  ecx = esi;
/* d9805a: call dword ptr [eax + 0xf4] */
  { uint32_t t = R32((uint32_t)(eax + 0xf4u)); esp -= 4; W32(esp, 0xd98060u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d98060: /* d98060: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d98063: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9806a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9806b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9806c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9806d: mov esp, ebp */
  esp = ebp;
/* d9806f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d98070: ret 4 */
  esp += 8; SPILL(); return;
L_d98073: /* d98073: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d98075: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d98077: mov ecx, esi */
  ecx = esi;
/* d98079: call dword ptr [edx + 0xf4] */
  { uint32_t t = R32((uint32_t)(edx + 0xf4u)); esp -= 4; W32(esp, 0xd9807fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9807f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d98082: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d98083: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d98084: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9808b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9808c: mov esp, ebp */
  esp = ebp;
/* d9808e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9808f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d98092(void) {
  LOAD_REGS();
L_d98092: /* d98092: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d98095: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9809a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d9809d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9809e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d980a1: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd980a6u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d980a6(); return;
}

void f_d980a6(void) {
  LOAD_REGS();
L_d980a6: /* d980a6: push 0xdc27e0 */
  { uint32_t v = 0xdc27e0u; esp -= 4; W32(esp, v); }
/* d980ab: push 0xde29fc */
  { uint32_t v = 0xde29fcu; esp -= 4; W32(esp, v); }
/* d980b0: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd980b6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d980b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d980b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d980bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d980bd: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd980c2u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d980c2: guest_badaddr(0xd980c2); return;
}

void f_d98100(void) {
  LOAD_REGS();
L_d98100: /* d98100: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d98101: mov ebp, esp */
  ebp = esp;
/* d98103: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d98105: push 0xdb9a40 */
  { uint32_t v = 0xdb9a40u; esp -= 4; W32(esp, v); }
/* d9810a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d98110: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98111: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d98118: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9811b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* d9811e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d98121: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d98122: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98123: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d98124: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d98127: mov esi, ecx */
  esi = ecx;
/* d98129: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d9812c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9812d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9812e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9812f: mov ecx, esi */
  ecx = esi;
/* d98131: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d98138: call 0xd828ba */
  esp -= 4; W32(esp, 0xd9813du); SPILL(); f_d828ba(); if (g_unwind) return; RELOAD();
/* d9813d: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* d98140: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98142: je 0xd98174 */
  if (zf) goto L_d98174;
L_d98144: /* d98144: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d98146: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d98148: mov ecx, esi */
  ecx = esi;
/* d9814a: call dword ptr [eax + 0xf4] */
  { uint32_t t = R32((uint32_t)(eax + 0xf4u)); esp -= 4; W32(esp, 0xd98150u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d98150: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* d98153: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d98155: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d98157: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98158: call dword ptr [0xde8f2c] */
  esp -= 4; W32(esp, 0xd9815eu); SPILL(); call_ind(R32(0xde8f2cu)); if (g_unwind) return; /* USER32!InvalidateRect */ RELOAD();
/* d9815e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d98160: mov ecx, esi */
  ecx = esi;
/* d98162: call dword ptr [edx + 0xf0] */
  { uint32_t t = R32((uint32_t)(edx + 0xf0u)); esp -= 4; W32(esp, 0xd98168u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d98168: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9816a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9816c: mov ecx, esi */
  ecx = esi;
/* d9816e: call dword ptr [eax + 0xf4] */
  { uint32_t t = R32((uint32_t)(eax + 0xf4u)); esp -= 4; W32(esp, 0xd98174u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d98174: /* d98174: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d98177: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d98178: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d98179: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d98180: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d98181: mov esp, ebp */
  esp = ebp;
/* d98183: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d98184: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d98187(void) {
  LOAD_REGS();
L_d98187: /* d98187: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9818a: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9818f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d98192: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d98193: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d98196: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9819bu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9819b(); return;
}

void f_d9819b(void) {
  LOAD_REGS();
L_d9819b: /* d9819b: push 0xdc281c */
  { uint32_t v = 0xdc281cu; esp -= 4; W32(esp, v); }
/* d981a0: push 0xde2a04 */
  { uint32_t v = 0xde2a04u; esp -= 4; W32(esp, v); }
/* d981a5: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd981abu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d981ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d981ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d981b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d981b2: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd981b7u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d981b7: guest_badaddr(0xd981b7); return;
}

void f_d981f0(void) {
  LOAD_REGS();
L_d981f0: /* d981f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d981f1: mov ebp, esp */
  ebp = esp;
/* d981f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d981f5: push 0xdb9a50 */
  { uint32_t v = 0xdb9a50u; esp -= 4; W32(esp, v); }
/* d981fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d98200: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98201: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d98208: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9820b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9820c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9820d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9820e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d98211: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d98213: mov esi, ecx */
  esi = ecx;
/* d98215: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d98218: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9821a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9821b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d98222: call dword ptr [0xde8e00] */
  esp -= 4; W32(esp, 0xd98228u); SPILL(); call_ind(R32(0xde8e00u)); if (g_unwind) return; /* USER32!GetUpdateRect */ RELOAD();
/* d98228: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9822a: je 0xd98274 */
  if (zf) goto L_d98274;
L_d9822c: /* d9822c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d9822f: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* d98232: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d98233: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98234: call dword ptr [0xde8ef8] */
  esp -= 4; W32(esp, 0xd9823au); SPILL(); call_ind(R32(0xde8ef8u)); if (g_unwind) return; /* USER32!BeginPaint */ RELOAD();
/* d9823a: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* d9823d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9823e: mov ecx, esi */
  ecx = esi;
/* d98240: mov edi, eax */
  edi = eax;
/* d98242: call 0xd8284c */
  esp -= 4; W32(esp, 0xd98247u); SPILL(); f_d8284c(); if (g_unwind) return; RELOAD();
/* d98247: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* d9824a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9824b: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* d9824e: call 0xd8284c */
  esp -= 4; W32(esp, 0xd98253u); SPILL(); f_d8284c(); if (g_unwind) return; RELOAD();
/* d98253: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* d98256: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* d98258: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* d9825b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9825c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9825d: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* d98260: call dword ptr [0xde8f6c] */
  esp -= 4; W32(esp, 0xd98266u); SPILL(); call_ind(R32(0xde8f6cu)); if (g_unwind) return; /* USER32!FillRect */ RELOAD();
/* d98266: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d98269: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* d9826c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9826d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9826e: call dword ptr [0xde8f04] */
  esp -= 4; W32(esp, 0xd98274u); SPILL(); call_ind(R32(0xde8f04u)); if (g_unwind) return; /* USER32!EndPaint */ RELOAD();
L_d98274: /* d98274: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d98277: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d98278: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d98279: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d98280: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d98281: mov esp, ebp */
  esp = ebp;
/* d98283: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d98284: ret  */
  esp += 4; SPILL(); return;
}

void f_d98285(void) {
  LOAD_REGS();
L_d98285: /* d98285: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d98288: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9828d: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* d98290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98291: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* d98294: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd98299u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d98299(); return;
}

void f_d98299(void) {
  LOAD_REGS();
L_d98299: /* d98299: push 0xdc284c */
  { uint32_t v = 0xdc284cu; esp -= 4; W32(esp, v); }
/* d9829e: push 0xde2a0c */
  { uint32_t v = 0xde2a0cu; esp -= 4; W32(esp, v); }
/* d982a3: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd982a9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d982a9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d982ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d982ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d982b0: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd982b5u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d982b5: guest_badaddr(0xd982b5); return;
}

void f_d98300(void) {
  LOAD_REGS();
L_d98300: /* d98300: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d98301: mov ebp, esp */
  ebp = esp;
/* d98303: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d98305: push 0xdb9a60 */
  { uint32_t v = 0xdb9a60u; esp -= 4; W32(esp, v); }
/* d9830a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d98310: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98311: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d98318: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9831b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d9831e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9831f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98320: lea ebx, [ecx + 8] */
  ebx = (uint32_t)(ecx + 0x8u);
/* d98323: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d98325: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d98326: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d98329: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d9832c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d98333: jne 0xd98385 */
  if (!zf) goto L_d98385;
L_d98335: /* d98335: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* d98338: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* d9833b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9833c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9833d: mov ecx, ebx */
  ecx = ebx;
/* d9833f: call 0xd8240f */
  esp -= 4; W32(esp, 0xd98344u); SPILL(); f_d8240f(); if (g_unwind) return; RELOAD();
/* d98344: mov edi, eax */
  edi = eax;
/* d98346: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d98348: jl 0xd98385 */
  if ((sf != of)) goto L_d98385;
L_d9834a: /* d9834a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9834c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9834d: mov ecx, ebx */
  ecx = ebx;
/* d9834f: call 0xd81c30 */
  esp -= 4; W32(esp, 0xd98354u); SPILL(); f_d81c30(); if (g_unwind) return; RELOAD();
/* d98354: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d98357: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d98358: add ecx, -0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffc4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d9835b: call 0xd81474 */
  esp -= 4; W32(esp, 0xd98360u); SPILL(); f_d81474(); if (g_unwind) return; RELOAD();
/* d98360: mov edi, eax */
  edi = eax;
/* d98362: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d98364: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* d98367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98368: mov ecx, edi */
  ecx = edi;
/* d9836a: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0xd9836du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9836d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* d98370: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* d98373: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* d98375: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d98377: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d98379: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9837a: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* d9837d: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* d9837f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98380: mov ecx, edi */
  ecx = edi;
/* d98382: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0xd98385u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d98385: /* d98385: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d98388: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d98389: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9838a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d98391: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d98392: mov esp, ebp */
  esp = ebp;
/* d98394: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d98395: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d98398(void) {
  LOAD_REGS();
L_d98398: /* d98398: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* d9839b: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d983a0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* d983a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d983a4: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* d983a7: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd983acu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d983ac(); return;
}

void f_d983ac(void) {
  LOAD_REGS();
L_d983ac: /* d983ac: push 0xdc2880 */
  { uint32_t v = 0xdc2880u; esp -= 4; W32(esp, v); }
/* d983b1: push 0xde2a14 */
  { uint32_t v = 0xde2a14u; esp -= 4; W32(esp, v); }
/* d983b6: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd983bcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d983bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d983bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d983c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d983c3: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd983c8u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d983c8: guest_badaddr(0xd983c8); return;
}

void f_d98410(void) {
  LOAD_REGS();
L_d98410: /* d98410: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d98411: mov ebp, esp */
  ebp = esp;
/* d98413: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d98415: push 0xdb9a70 */
  { uint32_t v = 0xdb9a70u; esp -= 4; W32(esp, v); }
/* d9841a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d98420: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98421: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d98428: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9842b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d9842e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9842f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98430: lea ebx, [ecx + 8] */
  ebx = (uint32_t)(ecx + 0x8u);
/* d98433: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d98435: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d98436: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d98439: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d9843c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d98443: jne 0xd98495 */
  if (!zf) goto L_d98495;
L_d98445: /* d98445: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* d98448: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* d9844b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9844c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9844d: mov ecx, ebx */
  ecx = ebx;
/* d9844f: call 0xd8240f */
  esp -= 4; W32(esp, 0xd98454u); SPILL(); f_d8240f(); if (g_unwind) return; RELOAD();
/* d98454: mov edi, eax */
  edi = eax;
/* d98456: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d98458: jl 0xd98495 */
  if ((sf != of)) goto L_d98495;
L_d9845a: /* d9845a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9845c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9845d: mov ecx, ebx */
  ecx = ebx;
/* d9845f: call 0xd81c30 */
  esp -= 4; W32(esp, 0xd98464u); SPILL(); f_d81c30(); if (g_unwind) return; RELOAD();
/* d98464: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d98467: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d98468: add ecx, -0x3c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffc4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d9846b: call 0xd81474 */
  esp -= 4; W32(esp, 0xd98470u); SPILL(); f_d81474(); if (g_unwind) return; RELOAD();
/* d98470: mov edi, eax */
  edi = eax;
/* d98472: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d98474: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* d98477: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98478: mov ecx, edi */
  ecx = edi;
/* d9847a: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0xd9847du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9847d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* d98480: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* d98483: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* d98485: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d98487: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d98489: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9848a: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* d9848d: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* d9848f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98490: mov ecx, edi */
  ecx = edi;
/* d98492: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0xd98495u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d98495: /* d98495: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d98498: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d98499: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9849a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d984a1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d984a2: mov esp, ebp */
  esp = ebp;
/* d984a4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d984a5: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d984a8(void) {
  LOAD_REGS();
L_d984a8: /* d984a8: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* d984ab: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d984b0: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* d984b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d984b4: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* d984b7: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd984bcu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d984bc(); return;
}

void f_d984bc(void) {
  LOAD_REGS();
L_d984bc: /* d984bc: push 0xdc28d0 */
  { uint32_t v = 0xdc28d0u; esp -= 4; W32(esp, v); }
/* d984c1: push 0xde2a1c */
  { uint32_t v = 0xde2a1cu; esp -= 4; W32(esp, v); }
/* d984c6: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd984ccu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d984cc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d984cf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d984d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d984d3: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd984d8u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d984d8: guest_badaddr(0xd984d8); return;
}

void f_d98520(void) {
  LOAD_REGS();
L_d98520: /* d98520: cmp dword ptr [esp + 8], 9 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d98525: jne 0xd98582 */
  if (!zf) goto L_d98582;
L_d98527: /* d98527: mov eax, dword ptr [0xde88ac] */
  eax = R32((uint32_t)(0xde88acu));
/* d9852c: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9852f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98530: mov esi, dword ptr [ecx + 0xc] */
  esi = R32((uint32_t)(ecx + 0xcu));
/* d98533: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d98535: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* d98537: je 0xd9855f */
  if (zf) goto L_d9855f;
L_d98539: /* d98539: call dword ptr [0xde8f34] */
  esp -= 4; W32(esp, 0xd9853fu); SPILL(); call_ind(R32(0xde8f34u)); if (g_unwind) return; /* USER32!GetKeyState */ RELOAD();
/* d9853f: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d98544: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d98546: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d98548: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d9854b: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d9854e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9854f: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* d98554: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98555: call dword ptr [0xde8f50] */
  esp -= 4; W32(esp, 0xd9855bu); SPILL(); call_ind(R32(0xde8f50u)); if (g_unwind) return; /* USER32!PostMessageW */ RELOAD();
/* d9855b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9855c: ret 8 */
  esp += 12; SPILL(); return;
L_d9855f: /* d9855f: call dword ptr [0xde8f34] */
  esp -= 4; W32(esp, 0xd98565u); SPILL(); call_ind(R32(0xde8f34u)); if (g_unwind) return; /* USER32!GetKeyState */ RELOAD();
/* d98565: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d9856a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d9856c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d9856e: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d98571: add eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d98574: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98575: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* d9857a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9857b: call dword ptr [0xde8f54] */
  esp -= 4; W32(esp, 0xd98581u); SPILL(); call_ind(R32(0xde8f54u)); if (g_unwind) return; /* USER32!PostMessageA */ RELOAD();
/* d98581: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_d98582: /* d98582: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d985b0(void) {
  LOAD_REGS();
L_d985b0: /* d985b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d985b1: mov ebp, esp */
  ebp = esp;
/* d985b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d985b5: push 0xdb9a92 */
  { uint32_t v = 0xdb9a92u; esp -= 4; W32(esp, v); }
/* d985ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d985c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d985c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d985c8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d985cb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d985ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d985cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d985d0: xor ebx, ebx */
  ebx = 0;
/* d985d2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d985d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d985d5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d985d8: mov esi, ecx */
  esi = ecx;
/* d985da: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* d985dd: je 0xd986a2 */
  if (zf) goto L_d986a2;
L_d985e3: /* d985e3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d985e6: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* d985e9: mov edi, dword ptr [eax + 0x54] */
  edi = R32((uint32_t)(eax + 0x54u));
/* d985ec: mov edx, dword ptr [esi + 0xf4] */
  edx = R32((uint32_t)(esi + 0xf4u));
/* d985f2: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d985f4: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d985f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d985f7: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* d985fa: mov dword ptr [esi + 0xf4], edx */
  W32((uint32_t)(esi + 0xf4u), edx);
/* d98600: call dword ptr [0xde8904] */
  esp -= 4; W32(esp, 0xd98606u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* d98606: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* d98609: lea edi, [esi + 8] */
  edi = (uint32_t)(esi + 0x8u);
/* d9860c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9860d: mov ecx, edi */
  ecx = edi;
/* d9860f: call dword ptr [0xde8a04] */
  esp -= 4; W32(esp, 0xd98615u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* d98615: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d98617: je 0xd98680 */
  if (zf) goto L_d98680;
L_d98619: /* d98619: mov ecx, edi */
  ecx = edi;
/* d9861b: call dword ptr [0xde8940] */
  esp -= 4; W32(esp, 0xd98621u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* d98621: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98622: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d98625: call dword ptr [0xde88e4] */
  esp -= 4; W32(esp, 0xd9862bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* d9862b: push 0xde2a44 */
  { uint32_t v = 0xde2a44u; esp -= 4; W32(esp, v); }
/* d98630: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d98633: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d98634: mov ecx, eax */
  ecx = eax;
/* d98636: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9863a: call dword ptr [0xde8b60] */
  esp -= 4; W32(esp, 0xd98640u); SPILL(); f_4e2149(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@PBG@Z */ RELOAD();
/* d98640: mov ecx, eax */
  ecx = eax;
/* d98642: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d98646: call dword ptr [0xde88b8] */
  esp -= 4; W32(esp, 0xd9864cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* d9864c: mov edi, dword ptr [esi + 0xf4] */
  edi = R32((uint32_t)(esi + 0xf4u));
/* d98652: mov edx, dword ptr [0xde89d8] */
  edx = R32((uint32_t)(0xde89d8u));
/* d98658: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* d9865a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9865c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9865d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9865e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9865f: push 0xde2a54 */
  { uint32_t v = 0xde2a54u; esp -= 4; W32(esp, v); }
/* d98664: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xd98667u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d98667: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d9866a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9866e: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd98674u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d98674: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* d98677: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* d9867a: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd98680u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_d98680: /* d98680: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d98683: mov edi, dword ptr [0xde8f2c] */
  edi = R32((uint32_t)(0xde8f2cu));
/* d98689: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9868b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9868c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9868d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd9868fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9868f: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* d98692: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d98694: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d98695: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d98696: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd98698u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d98698: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* d9869b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9869c: call dword ptr [0xde8f38] */
  esp -= 4; W32(esp, 0xd986a2u); SPILL(); call_ind(R32(0xde8f38u)); if (g_unwind) return; /* USER32!UpdateWindow */ RELOAD();
L_d986a2: /* d986a2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d986a5: mov dword ptr [esi + 0xf0], ebx */
  W32((uint32_t)(esi + 0xf0u), ebx);
/* d986ab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d986ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d986ad: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d986b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d986b5: mov esp, ebp */
  esp = ebp;
/* d986b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d986b8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d986bb(void) {
  LOAD_REGS();
L_d986bb: /* d986bb: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d986be: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d986c3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d986c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d986c7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d986ca: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd986cfu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d986cf(); return;
}

void f_d986cf(void) {
  LOAD_REGS();
L_d986cf: /* d986cf: push 0xdc2920 */
  { uint32_t v = 0xdc2920u; esp -= 4; W32(esp, v); }
/* d986d4: push 0xde2a74 */
  { uint32_t v = 0xde2a74u; esp -= 4; W32(esp, v); }
/* d986d9: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd986dfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d986df: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d986e2: xor ebx, ebx */
  ebx = 0;
/* d986e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d986e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d986e6: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd986ebu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d986eb: guest_badaddr(0xd986eb); return;
}

void f_d98740(void) {
  LOAD_REGS();
L_d98740: /* d98740: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d98741: mov ebp, esp */
  ebp = esp;
/* d98743: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d98745: push 0xdb9ab0 */
  { uint32_t v = 0xdb9ab0u; esp -= 4; W32(esp, v); }
/* d9874a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d98750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98751: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d98758: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9875b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9875c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9875d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9875e: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* d98761: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d98764: xor esi, esi */
  esi = 0;
/* d98766: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98767: mov ebx, ecx */
  ebx = ecx;
/* d98769: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* d9876c: call 0xd8284c */
  esp -= 4; W32(esp, 0xd98771u); SPILL(); f_d8284c(); if (g_unwind) return; RELOAD();
/* d98771: lea edi, [ebx + 0x44] */
  edi = (uint32_t)(ebx + 0x44u);
/* d98774: mov ecx, edi */
  ecx = edi;
/* d98776: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* d98779: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* d9877c: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* d9877f: mov dword ptr [ebp - 0x1c], 4 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x4u);
/* d98786: call 0xd82400 */
  esp -= 4; W32(esp, 0xd9878bu); SPILL(); f_d82400(); if (g_unwind) return; RELOAD();
/* d9878b: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* d9878e: mov edi, edi */
  edi = edi;
L_d98790: /* d98790: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d98792: jl 0xd987a2 */
  if ((sf != of)) goto L_d987a2;
L_d98794: /* d98794: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98795: mov ecx, edi */
  ecx = edi;
/* d98797: call 0xd8238d */
  esp -= 4; W32(esp, 0xd9879cu); SPILL(); f_d8238d(); if (g_unwind) return; RELOAD();
/* d9879c: add dword ptr [ebp - 0x1c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* d9879f: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* d987a0: jmp 0xd98790 */
  goto L_d98790;
L_d987a2: /* d987a2: mov ecx, dword ptr [0xde88ac] */
  ecx = R32((uint32_t)(0xde88acu));
/* d987a8: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d987ab: mov eax, dword ptr [ebx + 0x48] */
  eax = R32((uint32_t)(ebx + 0x48u));
/* d987ae: push -0x10 */
  { uint32_t v = 0xfffffff0u; esp -= 4; W32(esp, v); }
/* d987b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d987b1: je 0xd987bb */
  if (zf) goto L_d987bb;
L_d987b3: /* d987b3: call dword ptr [0xde8f28] */
  esp -= 4; W32(esp, 0xd987b9u); SPILL(); call_ind(R32(0xde8f28u)); if (g_unwind) return; /* USER32!GetWindowLongW */ RELOAD();
/* d987b9: jmp 0xd987c1 */
  goto L_d987c1;
L_d987bb: /* d987bb: call dword ptr [0xde8f44] */
  esp -= 4; W32(esp, 0xd987c1u); SPILL(); call_ind(R32(0xde8f44u)); if (g_unwind) return; /* USER32!GetWindowLongA */ RELOAD();
L_d987c1: /* d987c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d987c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d987c4: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* d987c7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d987c8: call dword ptr [0xde8e04] */
  esp -= 4; W32(esp, 0xd987ceu); SPILL(); call_ind(R32(0xde8e04u)); if (g_unwind) return; /* USER32!AdjustWindowRect */ RELOAD();
/* d987ce: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d987d1: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* d987d4: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* d987d7: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* d987da: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d987dc: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d987de: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d987e0: jle 0xd987e4 */
  if ((zf || sf != of)) goto L_d987e4;
L_d987e2: /* d987e2: mov ecx, eax */
  ecx = eax;
L_d987e4: /* d987e4: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* d987e7: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* d987ea: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d987ec: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d987ee: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d987f1: xor edx, edx */
  edx = 0;
/* d987f3: mov ebx, esp */
  ebx = esp;
/* d987f5: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* d987f7: xor esi, esi */
  esi = 0;
/* d987f9: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* d987fc: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* d987ff: mov dword ptr [ebx + 0xc], ecx */
  W32((uint32_t)(ebx + 0xcu), ecx);
/* d98802: mov ecx, edi */
  ecx = edi;
/* d98804: call 0xd8171c */
  esp -= 4; W32(esp, 0xd98809u); SPILL(); f_d8171c(); if (g_unwind) return; RELOAD();
/* d98809: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9880c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9880d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9880e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d98815: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d98816: mov esp, ebp */
  esp = ebp;
/* d98818: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d98819: ret  */
  esp += 4; SPILL(); return;
}

void f_d9881a(void) {
  LOAD_REGS();
L_d9881a: /* d9881a: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9881d: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d98822: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d98825: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d98826: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d98829: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9882eu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9882e(); return;
}

void f_d9882e(void) {
  LOAD_REGS();
L_d9882e: /* d9882e: push 0xdc2974 */
  { uint32_t v = 0xdc2974u; esp -= 4; W32(esp, v); }
/* d98833: push 0xde2a8c */
  { uint32_t v = 0xde2a8cu; esp -= 4; W32(esp, v); }
/* d98838: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9883eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9883e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d98841: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d98843: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d98845: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9884au); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9884a: guest_badaddr(0xd9884a); return;
}

void f_d988a0(void) {
  LOAD_REGS();
L_d988a0: /* d988a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d988a1: mov ebp, esp */
  ebp = esp;
/* d988a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d988a5: push 0xdb9ac0 */
  { uint32_t v = 0xdb9ac0u; esp -= 4; W32(esp, v); }
/* d988aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d988b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d988b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d988b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d988bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d988bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d988bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d988be: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* d988c1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d988c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d988c5: mov esi, ecx */
  esi = ecx;
/* d988c7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d988ce: call 0xd8113b */
  esp -= 4; W32(esp, 0xd988d3u); SPILL(); f_d8113b(); if (g_unwind) return; RELOAD();
/* d988d3: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* d988d5: add esi, 0x4c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d988d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d988d9: mov ecx, edi */
  ecx = edi;
/* d988db: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0xd988deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d988de: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d988e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d988e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d988e3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d988ea: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d988eb: mov esp, ebp */
  esp = ebp;
/* d988ed: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d988ee: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d988f1(void) {
  LOAD_REGS();
L_d988f1: /* d988f1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d988f4: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d988f9: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d988fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d988fd: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d98900: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd98905u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d98905(); return;
}

void f_d98905(void) {
  LOAD_REGS();
L_d98905: /* d98905: push 0xdc29b0 */
  { uint32_t v = 0xdc29b0u; esp -= 4; W32(esp, v); }
/* d9890a: push 0xde2a9c */
  { uint32_t v = 0xde2a9cu; esp -= 4; W32(esp, v); }
/* d9890f: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd98915u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d98915: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d98918: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9891a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9891c: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd98921u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d98921: guest_badaddr(0xd98921); return;
}

void f_d98960(void) {
  LOAD_REGS();
L_d98960: /* d98960: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d98961: mov ebp, esp */
  ebp = esp;
/* d98963: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d98965: push 0xdb9ad0 */
  { uint32_t v = 0xdb9ad0u; esp -= 4; W32(esp, v); }
/* d9896a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d98970: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98971: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d98978: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9897b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9897c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9897d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9897e: mov edi, ecx */
  edi = ecx;
/* d98980: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* d98983: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98985: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d98988: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9898f: jne 0xd989a6 */
  if (!zf) goto L_d989a6;
L_d98991: /* d98991: xor eax, eax */
  eax = 0;
/* d98993: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d98996: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9899d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9899e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9899f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d989a0: mov esp, ebp */
  esp = ebp;
/* d989a2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d989a3: ret 8 */
  esp += 12; SPILL(); return;
L_d989a6: /* d989a6: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d989a9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d989ab: je 0xd989b2 */
  if (zf) goto L_d989b2;
L_d989ad: /* d989ad: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d989b0: jg 0xd98991 */
  if ((!zf && sf == of)) goto L_d98991;
L_d989b2: /* d989b2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d989b5: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d989b8: call dword ptr [0xde8a08] */
  esp -= 4; W32(esp, 0xd989beu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* d989be: mov ebx, eax */
  ebx = eax;
/* d989c0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d989c2: je 0xd98a0f */
  if (zf) goto L_d98a0f;
L_d989c4: /* d989c4: call dword ptr [0xde89b4] */
  esp -= 4; W32(esp, 0xd989cau); SPILL(); f_4e148d(); if (g_unwind) return; /* Core!?StaticClass@UArrayProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d989ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d989cb: mov ecx, ebx */
  ecx = ebx;
/* d989cd: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd989d3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d989d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d989d5: je 0xd98a0f */
  if (zf) goto L_d98a0f;
L_d989d7: /* d989d7: mov edx, dword ptr [edi + 0x58] */
  edx = R32((uint32_t)(edi + 0x58u));
/* d989da: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* d989dd: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* d989df: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d989e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d989e2: call dword ptr [eax + 0x60] */
  { uint32_t t = R32((uint32_t)(eax + 0x60u)); esp -= 4; W32(esp, 0xd989e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d989e5: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d989e8: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* d989eb: mov ebx, 1 */
  ebx = 0x1u;
L_d989f0: /* d989f0: cmp ebx, dword ptr [edi + 0x5c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d989f3: jge 0xd98a0f */
  if ((sf == of)) goto L_d98a0f;
L_d989f5: /* d989f5: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* d989f8: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* d989fb: mov eax, dword ptr [eax + ebx*4] */
  eax = R32((uint32_t)(eax + ebx*4));
/* d989fe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d98a00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98a01: call dword ptr [edx + 0x60] */
  { uint32_t t = R32((uint32_t)(edx + 0x60u)); esp -= 4; W32(esp, 0xd98a04u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d98a04: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d98a07: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d98a0a: jne 0xd98991 */
  if (!zf) goto L_d98991;
L_d98a0c: /* d98a0c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d98a0d: jmp 0xd989f0 */
  goto L_d989f0;
L_d98a0f: /* d98a0f: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* d98a12: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d98a14: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d98a16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d98a17: mov ecx, esi */
  ecx = esi;
/* d98a19: call dword ptr [edx + 0x60] */
  { uint32_t t = R32((uint32_t)(edx + 0x60u)); esp -= 4; W32(esp, 0xd98a1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d98a1c: mov ebx, dword ptr [esi + 0x3c] */
  ebx = R32((uint32_t)(esi + 0x3cu));
/* d98a1f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98a21: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* d98a24: je 0xd98a73 */
  if (zf) goto L_d98a73;
L_d98a26: /* d98a26: call dword ptr [0xde89b4] */
  esp -= 4; W32(esp, 0xd98a2cu); SPILL(); f_4e148d(); if (g_unwind) return; /* Core!?StaticClass@UArrayProperty@@SAPAVUClass@@XZ */ RELOAD();
/* d98a2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98a2d: mov ecx, ebx */
  ecx = ebx;
/* d98a2f: call dword ptr [0xde8988] */
  esp -= 4; W32(esp, 0xd98a35u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* d98a35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98a37: je 0xd98a73 */
  if (zf) goto L_d98a73;
L_d98a39: /* d98a39: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* d98a3c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d98a3e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d98a40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d98a41: mov ecx, esi */
  ecx = esi;
/* d98a43: call dword ptr [edx + 0x60] */
  { uint32_t t = R32((uint32_t)(edx + 0x60u)); esp -= 4; W32(esp, 0xd98a46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d98a46: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* d98a49: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* d98a4c: mov ebx, 1 */
  ebx = 0x1u;
L_d98a51: /* d98a51: cmp ebx, dword ptr [edi + 0x5c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d98a54: jge 0xd98aa6 */
  if ((sf == of)) goto L_d98aa6;
L_d98a56: /* d98a56: mov ecx, dword ptr [edi + 0x58] */
  ecx = R32((uint32_t)(edi + 0x58u));
/* d98a59: mov edx, dword ptr [ecx + ebx*4] */
  edx = R32((uint32_t)(ecx + ebx*4));
/* d98a5c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d98a5e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d98a5f: mov ecx, esi */
  ecx = esi;
/* d98a61: call dword ptr [eax + 0x60] */
  { uint32_t t = R32((uint32_t)(eax + 0x60u)); esp -= 4; W32(esp, 0xd98a64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d98a64: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d98a67: cmp ecx, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d98a6a: jne 0xd98991 */
  if (!zf) goto L_d98991;
L_d98a70: /* d98a70: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d98a71: jmp 0xd98a51 */
  goto L_d98a51;
L_d98a73: /* d98a73: mov ebx, 1 */
  ebx = 0x1u;
L_d98a78: /* d98a78: cmp ebx, dword ptr [edi + 0x5c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d98a7b: jge 0xd98aa6 */
  if ((sf == of)) goto L_d98aa6;
L_d98a7d: /* d98a7d: mov eax, dword ptr [edi + 0x58] */
  eax = R32((uint32_t)(edi + 0x58u));
/* d98a80: mov ecx, dword ptr [eax + ebx*4] */
  ecx = R32((uint32_t)(eax + ebx*4));
/* d98a83: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d98a85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d98a86: mov ecx, esi */
  ecx = esi;
/* d98a88: call dword ptr [edx + 0x60] */
  { uint32_t t = R32((uint32_t)(edx + 0x60u)); esp -= 4; W32(esp, 0xd98a8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d98a8b: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* d98a8e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d98a90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98a91: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d98a94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98a95: call dword ptr [edx + 0x84] */
  { uint32_t t = R32((uint32_t)(edx + 0x84u)); esp -= 4; W32(esp, 0xd98a9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d98a9b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98a9d: je 0xd98991 */
  if (zf) goto L_d98991;
L_d98aa3: /* d98aa3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d98aa4: jmp 0xd98a78 */
  goto L_d98a78;
L_d98aa6: /* d98aa6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d98aa9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d98aac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d98aad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d98aae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d98ab5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d98ab6: mov esp, ebp */
  esp = ebp;
/* d98ab8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d98ab9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d98abc(void) {
  LOAD_REGS();
L_d98abc: /* d98abc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d98abf: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d98ac4: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d98ac7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d98ac8: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d98acb: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd98ad0u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d98ad0(); return;
}

void f_d98ad0(void) {
  LOAD_REGS();
L_d98ad0: /* d98ad0: push 0xdc29f8 */
  { uint32_t v = 0xdc29f8u; esp -= 4; W32(esp, v); }
/* d98ad5: push 0xde2ad4 */
  { uint32_t v = 0xde2ad4u; esp -= 4; W32(esp, v); }
/* d98ada: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd98ae0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d98ae0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d98ae3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d98ae5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d98ae7: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd98aecu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d98aec: guest_badaddr(0xd98aec); return;
}

void f_d98b60(void) {
  LOAD_REGS();
L_d98b60: /* d98b60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d98b61: mov ebp, esp */
  ebp = esp;
/* d98b63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d98b65: push 0xdb9ae0 */
  { uint32_t v = 0xdb9ae0u; esp -= 4; W32(esp, v); }
/* d98b6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d98b70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98b71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d98b78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d98b7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d98b7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98b7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d98b7e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d98b81: mov esi, ecx */
  esi = ecx;
/* d98b83: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d98b8a: xor edi, edi */
  edi = 0;
/* d98b8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_d98b90: /* d98b90: cmp edi, dword ptr [esi + 0x5c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x5cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d98b93: jge 0xd98ba3 */
  if ((sf == of)) goto L_d98ba3;
L_d98b95: /* d98b95: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* d98b98: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* d98b9b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d98b9d: call dword ptr [edx + 0x44] */
  { uint32_t t = R32((uint32_t)(edx + 0x44u)); esp -= 4; W32(esp, 0xd98ba0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d98ba0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d98ba1: jmp 0xd98b90 */
  goto L_d98b90;
L_d98ba3: /* d98ba3: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* d98ba6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98ba8: je 0xd98bb2 */
  if (zf) goto L_d98bb2;
L_d98baa: /* d98baa: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* d98bad: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d98baf: call dword ptr [eax + 0x6c] */
  { uint32_t t = R32((uint32_t)(eax + 0x6cu)); esp -= 4; W32(esp, 0xd98bb2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d98bb2: /* d98bb2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d98bb5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d98bb6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d98bb7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d98bbe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d98bbf: mov esp, ebp */
  esp = ebp;
/* d98bc1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d98bc2: ret  */
  esp += 4; SPILL(); return;
}

void f_d98bc3(void) {
  LOAD_REGS();
L_d98bc3: /* d98bc3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d98bc6: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d98bcb: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d98bce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d98bcf: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d98bd2: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd98bd7u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d98bd7(); return;
}

void f_d98bd7(void) {
  LOAD_REGS();
L_d98bd7: /* d98bd7: push 0xdc2a40 */
  { uint32_t v = 0xdc2a40u; esp -= 4; W32(esp, v); }
/* d98bdc: push 0xde2adc */
  { uint32_t v = 0xde2adcu; esp -= 4; W32(esp, v); }
/* d98be1: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd98be7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d98be7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d98bea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d98bec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d98bee: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd98bf3u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d98bf3: guest_badaddr(0xd98bf3); return;
}

void f_d98c30(void) {
  LOAD_REGS();
L_d98c30: /* d98c30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d98c31: mov ebp, esp */
  ebp = esp;
/* d98c33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d98c35: push 0xdb9b9b */
  { uint32_t v = 0xdb9b9bu; esp -= 4; W32(esp, v); }
/* d98c3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d98c40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98c41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d98c48: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d98c4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d98c4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98c4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d98c4e: mov edi, ecx */
  edi = ecx;
/* d98c50: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d98c53: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d98c56: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d98c5d: call dword ptr [0xde88dc] */
  esp -= 4; W32(esp, 0xd98c63u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* d98c63: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d98c66: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98c67: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* d98c6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98c6b: mov ecx, edi */
  ecx = edi;
/* d98c6d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d98c71: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* d98c78: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* d98c7f: call 0xd81906 */
  esp -= 4; W32(esp, 0xd98c84u); SPILL(); f_d81906(); if (g_unwind) return; RELOAD();
/* d98c84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98c85: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d98c88: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* d98c8c: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd98c92u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d98c92: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d98c95: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d98c99: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd98c9fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d98c9f: push 0xde2ba8 */
  { uint32_t v = 0xde2ba8u; esp -= 4; W32(esp, v); }
/* d98ca4: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d98ca7: call dword ptr [0xde8968] */
  esp -= 4; W32(esp, 0xd98cadu); SPILL(); f_4e2fb3(); if (g_unwind) return; /* Core!??PFString@@QBEHPBG@Z */ RELOAD();
/* d98cad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98caf: je 0xd98cc3 */
  if (zf) goto L_d98cc3;
L_d98cb1: /* d98cb1: push 0xde2bac */
  { uint32_t v = 0xde2bacu; esp -= 4; W32(esp, v); }
/* d98cb6: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d98cb9: call dword ptr [0xde8964] */
  esp -= 4; W32(esp, 0xd98cbfu); SPILL(); f_4e1190(); if (g_unwind) return; /* Core!??NFString@@QBEHPBG@Z */ RELOAD();
/* d98cbf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98cc1: jne 0xd98cd9 */
  if (!zf) goto L_d98cd9;
L_d98cc3: /* d98cc3: push 0xde2bb0 */
  { uint32_t v = 0xde2bb0u; esp -= 4; W32(esp, v); }
/* d98cc8: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d98ccb: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd98cd1u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d98cd1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98cd3: je 0xd98e1b */
  if (zf) goto L_d98e1b;
L_d98cd9: /* d98cd9: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_d98ce0: /* d98ce0: push 0xde2bb4 */
  { uint32_t v = 0xde2bb4u; esp -= 4; W32(esp, v); }
/* d98ce5: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d98ce8: call dword ptr [0xde8968] */
  esp -= 4; W32(esp, 0xd98ceeu); SPILL(); f_4e2fb3(); if (g_unwind) return; /* Core!??PFString@@QBEHPBG@Z */ RELOAD();
/* d98cee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98cf0: je 0xd98d58 */
  if (zf) goto L_d98d58;
L_d98cf2: /* d98cf2: push 0xde2bb8 */
  { uint32_t v = 0xde2bb8u; esp -= 4; W32(esp, v); }
/* d98cf7: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d98cfa: call dword ptr [0xde8964] */
  esp -= 4; W32(esp, 0xd98d00u); SPILL(); f_4e1190(); if (g_unwind) return; /* Core!??NFString@@QBEHPBG@Z */ RELOAD();
/* d98d00: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98d02: je 0xd98d58 */
  if (zf) goto L_d98d58;
L_d98d04: /* d98d04: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d98d07: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* d98d0a: mov ecx, esp */
  ecx = esp;
/* d98d0c: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* d98d0f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d98d10: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xd98d16u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* d98d16: mov ecx, edi */
  ecx = edi;
/* d98d18: call 0xd8206d */
  esp -= 4; W32(esp, 0xd98d1du); SPILL(); f_d8206d(); if (g_unwind) return; RELOAD();
/* d98d1d: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* d98d20: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* d98d23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98d24: fmul dword ptr [0xdc17f4] */
  ST0 = ST0 * (F32((uint32_t)(0xdc17f4u)));
/* d98d2a: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* d98d2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98d2e: mov ecx, edi */
  ecx = edi;
/* d98d30: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* d98d33: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* d98d36: call 0xd81906 */
  esp -= 4; W32(esp, 0xd98d3bu); SPILL(); f_d81906(); if (g_unwind) return; RELOAD();
/* d98d3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98d3c: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d98d3f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* d98d43: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd98d49u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d98d49: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d98d4c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d98d50: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd98d56u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d98d56: jmp 0xd98ce0 */
  goto L_d98ce0;
L_d98d58: /* d98d58: push 0xde2bbc */
  { uint32_t v = 0xde2bbcu; esp -= 4; W32(esp, v); }
/* d98d5d: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d98d60: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd98d66u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d98d66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98d68: je 0xd98f8f */
  if (zf) goto L_d98f8f;
L_d98d6e: /* d98d6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98d6f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d98d72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d98d73: mov ecx, edi */
  ecx = edi;
/* d98d75: mov dword ptr [ebp + 8], 0x3dcccccd */
  W32((uint32_t)(ebp + 0x8u), 0x3dcccccdu);
/* d98d7c: call 0xd81906 */
  esp -= 4; W32(esp, 0xd98d81u); SPILL(); f_d81906(); if (g_unwind) return; RELOAD();
/* d98d81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98d82: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d98d85: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* d98d89: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd98d8fu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d98d8f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
L_d98d92: /* d98d92: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d98d96: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd98d9cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d98d9c: push 0xde2bc0 */
  { uint32_t v = 0xde2bc0u; esp -= 4; W32(esp, v); }
/* d98da1: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d98da4: call dword ptr [0xde8968] */
  esp -= 4; W32(esp, 0xd98daau); SPILL(); f_4e2fb3(); if (g_unwind) return; /* Core!??PFString@@QBEHPBG@Z */ RELOAD();
/* d98daa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98dac: je 0xd98f8f */
  if (zf) goto L_d98f8f;
L_d98db2: /* d98db2: push 0xde2bc4 */
  { uint32_t v = 0xde2bc4u; esp -= 4; W32(esp, v); }
/* d98db7: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d98dba: call dword ptr [0xde8964] */
  esp -= 4; W32(esp, 0xd98dc0u); SPILL(); f_4e1190(); if (g_unwind) return; /* Core!??NFString@@QBEHPBG@Z */ RELOAD();
/* d98dc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98dc2: je 0xd98f8f */
  if (zf) goto L_d98f8f;
L_d98dc8: /* d98dc8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d98dcb: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* d98dce: mov ecx, esp */
  ecx = esp;
/* d98dd0: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* d98dd3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d98dd4: call dword ptr [0xde8a00] */
  esp -= 4; W32(esp, 0xd98ddau); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* d98dda: mov ecx, edi */
  ecx = edi;
/* d98ddc: call 0xd8206d */
  esp -= 4; W32(esp, 0xd98de1u); SPILL(); f_d8206d(); if (g_unwind) return; RELOAD();
/* d98de1: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* d98de4: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* d98de7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98de8: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* d98deb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98dec: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* d98def: mov ecx, edi */
  ecx = edi;
/* d98df1: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* d98df4: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* d98df7: fmul dword ptr [0xdc2ab4] */
  ST0 = ST0 * (F32((uint32_t)(0xdc2ab4u)));
/* d98dfd: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* d98e00: call 0xd81906 */
  esp -= 4; W32(esp, 0xd98e05u); SPILL(); f_d81906(); if (g_unwind) return; RELOAD();
/* d98e05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98e06: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d98e09: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* d98e0d: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd98e13u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d98e13: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* d98e16: jmp 0xd98d92 */
  goto L_d98d92;
L_d98e1b: /* d98e1b: push 0xde2bc8 */
  { uint32_t v = 0xde2bc8u; esp -= 4; W32(esp, v); }
/* d98e20: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d98e23: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd98e29u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d98e29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98e2b: je 0xd98e58 */
  if (zf) goto L_d98e58;
L_d98e2d: /* d98e2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d98e2f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d98e32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d98e33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98e34: mov ecx, edi */
  ecx = edi;
/* d98e36: call 0xd81b63 */
  esp -= 4; W32(esp, 0xd98e3bu); SPILL(); f_d81b63(); if (g_unwind) return; RELOAD();
/* d98e3b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98e3d: je 0xd98f2e */
  if (zf) goto L_d98f2e;
L_d98e43: /* d98e43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98e44: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* d98e47: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d98e48: mov ecx, edi */
  ecx = edi;
/* d98e4a: call 0xd81906 */
  esp -= 4; W32(esp, 0xd98e4fu); SPILL(); f_d81906(); if (g_unwind) return; RELOAD();
/* d98e4f: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* d98e53: jmp 0xd98f78 */
  goto L_d98f78;
L_d98e58: /* d98e58: push 0xde2bcc */
  { uint32_t v = 0xde2bccu; esp -= 4; W32(esp, v); }
/* d98e5d: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d98e60: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd98e66u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d98e66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98e68: je 0xd98ea0 */
  if (zf) goto L_d98ea0;
L_d98e6a: /* d98e6a: push 0x3e8 */
  { uint32_t v = 0x3e8u; esp -= 4; W32(esp, v); }
/* d98e6f: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* d98e72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98e73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98e74: mov ecx, edi */
  ecx = edi;
/* d98e76: call 0xd81b63 */
  esp -= 4; W32(esp, 0xd98e7bu); SPILL(); f_d81b63(); if (g_unwind) return; RELOAD();
/* d98e7b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98e7d: je 0xd98f2e */
  if (zf) goto L_d98f2e;
L_d98e83: /* d98e83: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* d98e86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98e87: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* d98e8a: fchs  */
  ST0 = -ST0;
/* d98e8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d98e8d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* d98e90: mov ecx, edi */
  ecx = edi;
/* d98e92: call 0xd81906 */
  esp -= 4; W32(esp, 0xd98e97u); SPILL(); f_d81906(); if (g_unwind) return; RELOAD();
/* d98e97: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* d98e9b: jmp 0xd98f78 */
  goto L_d98f78;
L_d98ea0: /* d98ea0: push 0xde2bd0 */
  { uint32_t v = 0xde2bd0u; esp -= 4; W32(esp, v); }
/* d98ea5: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d98ea8: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd98eaeu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d98eae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98eb0: je 0xd98edc */
  if (zf) goto L_d98edc;
L_d98eb2: /* d98eb2: push 0x3e8 */
  { uint32_t v = 0x3e8u; esp -= 4; W32(esp, v); }
/* d98eb7: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d98eba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d98ebb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98ebc: mov ecx, edi */
  ecx = edi;
/* d98ebe: call 0xd81b63 */
  esp -= 4; W32(esp, 0xd98ec3u); SPILL(); f_d81b63(); if (g_unwind) return; RELOAD();
/* d98ec3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98ec5: je 0xd98f2e */
  if (zf) goto L_d98f2e;
L_d98ec7: /* d98ec7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98ec8: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* d98ecb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98ecc: mov ecx, edi */
  ecx = edi;
/* d98ece: call 0xd81906 */
  esp -= 4; W32(esp, 0xd98ed3u); SPILL(); f_d81906(); if (g_unwind) return; RELOAD();
/* d98ed3: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* d98ed7: jmp 0xd98f78 */
  goto L_d98f78;
L_d98edc: /* d98edc: push 0xde2bd4 */
  { uint32_t v = 0xde2bd4u; esp -= 4; W32(esp, v); }
/* d98ee1: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d98ee4: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd98eeau); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d98eea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98eec: je 0xd99369 */
  if (zf) goto L_d99369;
L_d98ef2: /* d98ef2: push 0x3e8 */
  { uint32_t v = 0x3e8u; esp -= 4; W32(esp, v); }
/* d98ef7: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d98efa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d98efb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98efc: mov ecx, edi */
  ecx = edi;
/* d98efe: call 0xd81b63 */
  esp -= 4; W32(esp, 0xd98f03u); SPILL(); f_d81b63(); if (g_unwind) return; RELOAD();
/* d98f03: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98f05: je 0xd98f2e */
  if (zf) goto L_d98f2e;
L_d98f07: /* d98f07: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* d98f0a: fcomp dword ptr [0xdc1460] */
  fpu_com(ST0, F32((uint32_t)(0xdc1460u)));
  FPOP();
/* d98f10: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* d98f12: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* d98f15: jp 0xd98f50 */
  if (pf) goto L_d98f50;
L_d98f17: /* d98f17: push 0xde2bd8 */
  { uint32_t v = 0xde2bd8u; esp -= 4; W32(esp, v); }
L_d98f1c: /* d98f1c: mov edx, dword ptr [0xde8a10] */
  edx = R32((uint32_t)(0xde8a10u));
/* d98f22: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* d98f24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_d98f25: /* d98f25: call dword ptr [0xde89a8] */
  esp -= 4; W32(esp, 0xd98f2bu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* d98f2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d98f2e: /* d98f2e: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d98f31: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d98f35: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd98f3bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d98f3b: xor eax, eax */
  eax = 0;
/* d98f3d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d98f40: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d98f47: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d98f48: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d98f49: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d98f4a: mov esp, ebp */
  esp = ebp;
/* d98f4c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d98f4d: ret 0xc */
  esp += 16; SPILL(); return;
L_d98f50: /* d98f50: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* d98f53: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d98f56: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* d98f59: call dword ptr [0xde89f8] */
  esp -= 4; W32(esp, 0xd98f5fu); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* d98f5f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d98f62: fst qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0);
/* d98f65: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d98f66: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* d98f69: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* d98f6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d98f6d: mov ecx, edi */
  ecx = edi;
/* d98f6f: call 0xd81906 */
  esp -= 4; W32(esp, 0xd98f74u); SPILL(); f_d81906(); if (g_unwind) return; RELOAD();
/* d98f74: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
L_d98f78: /* d98f78: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d98f7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98f7c: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd98f82u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d98f82: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
L_d98f85: /* d98f85: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d98f89: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd98f8fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_d98f8f: /* d98f8f: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
L_d98f92: /* d98f92: push 0xde4f54 */
  { uint32_t v = 0xde4f54u; esp -= 4; W32(esp, v); }
/* d98f97: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d98f9a: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd98fa0u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d98fa0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98fa2: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d98fa5: je 0xd98fd1 */
  if (zf) goto L_d98fd1;
L_d98fa7: /* d98fa7: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* d98faa: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* d98fad: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* d98faf: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_d98fb3: /* d98fb3: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd98fb9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d98fb9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d98fbc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d98fbd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d98fbe: mov eax, 1 */
  eax = 0x1u;
/* d98fc3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d98fca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d98fcb: mov esp, ebp */
  esp = ebp;
/* d98fcd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d98fce: ret 0xc */
  esp += 16; SPILL(); return;
L_d98fd1: /* d98fd1: push 0xde2ca8 */
  { uint32_t v = 0xde2ca8u; esp -= 4; W32(esp, v); }
/* d98fd6: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd98fdcu); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d98fdc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d98fde: je 0xd99009 */
  if (zf) goto L_d99009;
L_d98fe0: /* d98fe0: mov ecx, esi */
  ecx = esi;
/* d98fe2: call dword ptr [0xde8a0c] */
  esp -= 4; W32(esp, 0xd98fe8u); SPILL(); f_4e3d32(); if (g_unwind) return; /* Core!??BFString@@QBEHXZ */ RELOAD();
/* d98fe8: lea eax, [eax*2 + 0xde2cac] */
  eax = (uint32_t)(eax*2 + 0xde2cacu);
/* d98fef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d98ff0: mov ecx, esi */
  ecx = esi;
/* d98ff2: call dword ptr [0xde88e8] */
  esp -= 4; W32(esp, 0xd98ff8u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
L_d98ff8: /* d98ff8: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d98ffb: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* d98ffe: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* d99000: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d99004: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d99007: jmp 0xd98fb3 */
  goto L_d98fb3;
L_d99009: /* d99009: push 0xde2cb0 */
  { uint32_t v = 0xde2cb0u; esp -= 4; W32(esp, v); }
/* d9900e: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d99011: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd99017u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d99017: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d99019: je 0xd99086 */
  if (zf) goto L_d99086;
L_d9901b: /* d9901b: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9901e: jle 0xd9903f */
  if ((zf || sf != of)) goto L_d9903f;
L_d99020: /* d99020: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* d99023: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* d99026: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d99027: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* d99029: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* d9902c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9902d: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d99030: call dword ptr [0xde890c] */
  esp -= 4; W32(esp, 0xd99036u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* d99036: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* d9903a: jmp 0xd9913c */
  goto L_d9913c;
L_d9903f: /* d9903f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* d99041: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d99044: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d99045: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d99046: mov ecx, edi */
  ecx = edi;
/* d99048: call 0xd81b63 */
  esp -= 4; W32(esp, 0xd9904du); SPILL(); f_d81b63(); if (g_unwind) return; RELOAD();
/* d9904d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9904f: je 0xd98ff8 */
  if (zf) goto L_d98ff8;
L_d99051: /* d99051: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* d99054: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d99055: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* d99058: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* d9905b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9905c: mov ecx, edi */
  ecx = edi;
/* d9905e: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* d99061: call 0xd81906 */
  esp -= 4; W32(esp, 0xd99066u); SPILL(); f_d81906(); if (g_unwind) return; RELOAD();
/* d99066: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d99067: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d9906a: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* d9906e: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd99074u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d99074: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* d99077: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9907b: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd99081u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d99081: jmp 0xd98f92 */
  goto L_d98f92;
L_d99086: /* d99086: push 0xde2cb4 */
  { uint32_t v = 0xde2cb4u; esp -= 4; W32(esp, v); }
/* d9908b: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d9908e: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd99094u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d99094: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d99096: je 0xd99107 */
  if (zf) goto L_d99107;
L_d99098: /* d99098: cmp ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9909b: jle 0xd990bc */
  if ((zf || sf != of)) goto L_d990bc;
L_d9909d: /* d9909d: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* d990a0: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d990a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d990a4: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* d990a6: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* d990a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d990aa: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d990ad: call dword ptr [0xde890c] */
  esp -= 4; W32(esp, 0xd990b3u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* d990b3: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* d990b7: jmp 0xd9913c */
  goto L_d9913c;
L_d990bc: /* d990bc: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* d990be: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* d990c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d990c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d990c3: mov ecx, edi */
  ecx = edi;
/* d990c5: call 0xd81b63 */
  esp -= 4; W32(esp, 0xd990cau); SPILL(); f_d81b63(); if (g_unwind) return; RELOAD();
/* d990ca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d990cc: je 0xd98ff8 */
  if (zf) goto L_d98ff8;
L_d990d2: /* d990d2: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* d990d5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d990d6: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* d990d9: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* d990dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d990dd: mov ecx, edi */
  ecx = edi;
/* d990df: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* d990e2: call 0xd81906 */
  esp -= 4; W32(esp, 0xd990e7u); SPILL(); f_d81906(); if (g_unwind) return; RELOAD();
/* d990e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d990e8: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d990eb: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* d990ef: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd990f5u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d990f5: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d990f8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d990fc: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd99102u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d99102: jmp 0xd98f92 */
  goto L_d98f92;
L_d99107: /* d99107: push 0xde2cb8 */
  { uint32_t v = 0xde2cb8u; esp -= 4; W32(esp, v); }
/* d9910c: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d9910f: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd99115u); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d99115: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d99117: je 0xd991cc */
  if (zf) goto L_d991cc;
L_d9911d: /* d9911d: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d99120: jle 0xd9915e */
  if ((zf || sf != of)) goto L_d9915e;
L_d99122: /* d99122: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* d99125: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d99128: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d99129: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* d9912b: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* d9912e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9912f: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d99132: call dword ptr [0xde890c] */
  esp -= 4; W32(esp, 0xd99138u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* d99138: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
L_d9913c: /* d9913c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9913d: mov ecx, esi */
  ecx = esi;
/* d9913f: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd99145u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d99145: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* d99148: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d9914c: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd99152u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d99152: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d99156: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d99159: jmp 0xd98fb3 */
  goto L_d98fb3;
L_d9915e: /* d9915e: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* d99160: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* d99163: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d99164: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d99165: mov ecx, edi */
  ecx = edi;
/* d99167: call 0xd81b63 */
  esp -= 4; W32(esp, 0xd9916cu); SPILL(); f_d81b63(); if (g_unwind) return; RELOAD();
/* d9916c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9916e: je 0xd98ff8 */
  if (zf) goto L_d98ff8;
L_d99174: /* d99174: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* d99177: fcomp dword ptr [0xdc1460] */
  fpu_com(ST0, F32((uint32_t)(0xdc1460u)));
  FPOP();
/* d9917d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* d9917f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* d99182: jp 0xd99197 */
  if (pf) goto L_d99197;
L_d99184: /* d99184: mov ecx, dword ptr [0xde8a10] */
  ecx = R32((uint32_t)(0xde8a10u));
/* d9918a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9918c: push 0xde2cc0 */
  { uint32_t v = 0xde2cc0u; esp -= 4; W32(esp, v); }
/* d99191: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d99192: jmp 0xd98f25 */
  goto L_d98f25;
L_d99197: /* d99197: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* d9919a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9919b: fdiv dword ptr [ebp - 0x18] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe8u)));
/* d9919e: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* d991a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d991a2: mov ecx, edi */
  ecx = edi;
/* d991a4: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* d991a7: call 0xd81906 */
  esp -= 4; W32(esp, 0xd991acu); SPILL(); f_d81906(); if (g_unwind) return; RELOAD();
/* d991ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d991ad: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d991b0: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* d991b4: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd991bau); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d991ba: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* d991bd: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d991c1: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd991c7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d991c7: jmp 0xd98f92 */
  goto L_d98f92;
L_d991cc: /* d991cc: push 0xde2d24 */
  { uint32_t v = 0xde2d24u; esp -= 4; W32(esp, v); }
/* d991d1: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d991d4: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd991dau); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d991da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d991dc: je 0xd9929c */
  if (zf) goto L_d9929c;
L_d991e2: /* d991e2: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d991e5: jle 0xd99223 */
  if ((zf || sf != of)) goto L_d99223;
L_d991e7: /* d991e7: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* d991ea: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d991ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d991ee: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* d991f0: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* d991f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d991f4: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d991f7: call dword ptr [0xde890c] */
  esp -= 4; W32(esp, 0xd991fdu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* d991fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d991fe: mov ecx, esi */
  ecx = esi;
/* d99200: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* d99204: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd9920au); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d9920a: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* d9920d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d99211: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd99217u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d99217: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9921b: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d9921e: jmp 0xd98fb3 */
  goto L_d98fb3;
L_d99223: /* d99223: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* d99225: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* d99228: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d99229: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9922a: mov ecx, edi */
  ecx = edi;
/* d9922c: call 0xd81b63 */
  esp -= 4; W32(esp, 0xd99231u); SPILL(); f_d81b63(); if (g_unwind) return; RELOAD();
/* d99231: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d99233: je 0xd98ff8 */
  if (zf) goto L_d98ff8;
L_d99239: /* d99239: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* d9923c: fcomp dword ptr [0xdc1460] */
  fpu_com(ST0, F32((uint32_t)(0xdc1460u)));
  FPOP();
/* d99242: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* d99244: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* d99247: jp 0xd9925c */
  if (pf) goto L_d9925c;
L_d99249: /* d99249: mov ecx, dword ptr [0xde8a10] */
  ecx = R32((uint32_t)(0xde8a10u));
/* d9924f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d99251: push 0xde2d28 */
  { uint32_t v = 0xde2d28u; esp -= 4; W32(esp, v); }
/* d99256: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d99257: jmp 0xd98f25 */
  goto L_d98f25;
L_d9925c: /* d9925c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* d9925f: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xd99264u); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* d99264: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* d99267: mov ebx, eax */
  ebx = eax;
/* d99269: call 0xdb7d0c */
  esp -= 4; W32(esp, 0xd9926eu); SPILL(); f_db7d0c(); if (g_unwind) return; RELOAD();
/* d9926e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* d9926f: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0xd9926f);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* d99271: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d99272: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* d99275: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d99276: mov ecx, edi */
  ecx = edi;
/* d99278: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* d9927b: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* d9927e: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* d99281: call 0xd81906 */
  esp -= 4; W32(esp, 0xd99286u); SPILL(); f_d81906(); if (g_unwind) return; RELOAD();
/* d99286: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d99287: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d9928a: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* d9928e: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd99294u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d99294: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* d99297: jmp 0xd98f85 */
  goto L_d98f85;
L_d9929c: /* d9929c: push 0xde2d84 */
  { uint32_t v = 0xde2d84u; esp -= 4; W32(esp, v); }
/* d992a1: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d992a4: call dword ptr [0xde8954] */
  esp -= 4; W32(esp, 0xd992aau); SPILL(); f_4e414c(); if (g_unwind) return; /* Core!??8FString@@QBEHPBG@Z */ RELOAD();
/* d992aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d992ac: je 0xd9933e */
  if (zf) goto L_d9933e;
L_d992b2: /* d992b2: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d992b5: jle 0xd992f3 */
  if ((zf || sf != of)) goto L_d992f3;
L_d992b7: /* d992b7: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* d992ba: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d992bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d992be: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* d992c0: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* d992c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d992c4: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d992c7: call dword ptr [0xde890c] */
  esp -= 4; W32(esp, 0xd992cdu); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
/* d992cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d992ce: mov ecx, esi */
  ecx = esi;
/* d992d0: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* d992d4: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd992dau); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d992da: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* d992dd: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d992e1: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd992e7u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d992e7: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d992eb: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d992ee: jmp 0xd98fb3 */
  goto L_d98fb3;
L_d992f3: /* d992f3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d992f5: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* d992f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d992f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d992fa: mov ecx, edi */
  ecx = edi;
/* d992fc: call 0xd81b63 */
  esp -= 4; W32(esp, 0xd99301u); SPILL(); f_d81b63(); if (g_unwind) return; RELOAD();
/* d99301: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d99303: je 0xd98ff8 */
  if (zf) goto L_d98ff8;
L_d99309: /* d99309: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* d9930c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9930d: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* d99310: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* d99313: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d99314: mov ecx, edi */
  ecx = edi;
/* d99316: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* d99319: call 0xd81906 */
  esp -= 4; W32(esp, 0xd9931eu); SPILL(); f_d81906(); if (g_unwind) return; RELOAD();
/* d9931e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9931f: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d99322: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* d99326: call dword ptr [0xde88c0] */
  esp -= 4; W32(esp, 0xd9932cu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* d9932c: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* d9932f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d99333: call dword ptr [0xde88b0] */
  esp -= 4; W32(esp, 0xd99339u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* d99339: jmp 0xd98f92 */
  goto L_d98f92;
L_d9933e: /* d9933e: mov edx, dword ptr [0xde8a10] */
  edx = R32((uint32_t)(0xde8a10u));
/* d99344: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* d99346: push 0xde2d88 */
  { uint32_t v = 0xde2d88u; esp -= 4; W32(esp, v); }
/* d9934b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9934c: call dword ptr [0xde89a8] */
  esp -= 4; W32(esp, 0xd99352u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* d99352: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* d99355: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d99358: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* d9935a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9935d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d99361: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* d99364: jmp 0xd98fb3 */
  goto L_d98fb3;
L_d99369: /* d99369: push 0xde2c58 */
  { uint32_t v = 0xde2c58u; esp -= 4; W32(esp, v); }
/* d9936e: jmp 0xd98f1c */
  goto L_d98f1c;
}

void f_d99373(void) {
  LOAD_REGS();
L_d99373: /* d99373: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* d99376: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9937b: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* d9937e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9937f: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* d99382: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd99387u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d99387(); return;
}

void f_d99387(void) {
  LOAD_REGS();
L_d99387: /* d99387: push 0xdc2a80 */
  { uint32_t v = 0xdc2a80u; esp -= 4; W32(esp, v); }
/* d9938c: push 0xde2ddc */
  { uint32_t v = 0xde2ddcu; esp -= 4; W32(esp, v); }
/* d99391: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd99397u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d99397: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9939a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9939c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9939e: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd993a3u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d993a3: guest_badaddr(0xd993a3); return;
}

void f_d99590(void) {
  LOAD_REGS();
L_d99590: /* d99590: mov eax, dword ptr [ecx + 0x58] */
  eax = R32((uint32_t)(ecx + 0x58u));
/* d99593: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* d99595: ret  */
  esp += 4; SPILL(); return;
}

void f_d995b0(void) {
  LOAD_REGS();
L_d995b0: /* d995b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d995b1: mov ebp, esp */
  ebp = esp;
/* d995b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d995b5: push 0xdb9be0 */
  { uint32_t v = 0xdb9be0u; esp -= 4; W32(esp, v); }
/* d995ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d995c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d995c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d995c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d995cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d995cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d995cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d995ce: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d995d1: mov esi, ecx */
  esi = ecx;
/* d995d3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d995da: call 0xd8263a */
  esp -= 4; W32(esp, 0xd995dfu); SPILL(); f_d8263a(); if (g_unwind) return; RELOAD();
/* d995df: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* d995e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d995e4: je 0xd9960e */
  if (zf) goto L_d9960e;
L_d995e6: /* d995e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d995e7: call dword ptr [0xde8a14] */
  esp -= 4; W32(esp, 0xd995edu); SPILL(); f_4e1898(); if (g_unwind) return; /* Core!?ResetConfig@UObject@@SAXPAVUClass@@@Z */ RELOAD();
/* d995ed: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d995f0: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* d995f3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d995f6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d995f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d995fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d995fb: call dword ptr [0xde8f2c] */
  esp -= 4; W32(esp, 0xd99601u); SPILL(); call_ind(R32(0xde8f2cu)); if (g_unwind) return; /* USER32!InvalidateRect */ RELOAD();
/* d99601: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d99604: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* d99607: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d99608: call dword ptr [0xde8f38] */
  esp -= 4; W32(esp, 0xd9960eu); SPILL(); call_ind(R32(0xde8f38u)); if (g_unwind) return; /* USER32!UpdateWindow */ RELOAD();
L_d9960e: /* d9960e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d99610: mov ecx, esi */
  ecx = esi;
/* d99612: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xd99615u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d99615: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d99618: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d99619: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9961a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d99621: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d99622: mov esp, ebp */
  esp = ebp;
/* d99624: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d99625: ret  */
  esp += 4; SPILL(); return;
}

void f_d99626(void) {
  LOAD_REGS();
L_d99626: /* d99626: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d99629: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9962e: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d99631: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d99632: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d99635: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9963au); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9963a(); return;
}

void f_d9963a(void) {
  LOAD_REGS();
L_d9963a: /* d9963a: push 0xdc2ab8 */
  { uint32_t v = 0xdc2ab8u; esp -= 4; W32(esp, v); }
/* d9963f: push 0xde2fb0 */
  { uint32_t v = 0xde2fb0u; esp -= 4; W32(esp, v); }
/* d99644: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9964au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9964a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9964d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9964f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d99651: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd99656u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d99656: guest_badaddr(0xd99656); return;
}

void f_d99690(void) {
  LOAD_REGS();
L_d99690: /* d99690: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d99691: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d99692: mov esi, ecx */
  esi = ecx;
/* d99694: call 0xd82892 */
  esp -= 4; W32(esp, 0xd99699u); SPILL(); f_d82892(); if (g_unwind) return; RELOAD();
/* d99699: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9969c: mov eax, esp */
  eax = esp;
/* d9969e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d996a0: push 0xde2fb8 */
  { uint32_t v = 0xde2fb8u; esp -= 4; W32(esp, v); }
/* d996a5: mov dword ptr [eax], 0xdbf5f8 */
  W32((uint32_t)(eax), 0xdbf5f8u);
/* d996ab: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* d996ae: mov dword ptr [eax + 8], 0xd822e3 */
  W32((uint32_t)(eax + 0x8u), 0xd822e3u);
/* d996b5: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* d996b7: push 0xde2fc8 */
  { uint32_t v = 0xde2fc8u; esp -= 4; W32(esp, v); }
/* d996bc: call dword ptr [0xde8918] */
  esp -= 4; W32(esp, 0xd996c2u); SPILL(); f_4e3242(); if (g_unwind) return; /* Core!?LocalizeGeneral@@YAPBGPBDPBG1@Z */ RELOAD();
/* d996c2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d996c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d996c6: mov ecx, esi */
  ecx = esi;
/* d996c8: call dword ptr [edi + 0x34] */
  { uint32_t t = R32((uint32_t)(edi + 0x34u)); esp -= 4; W32(esp, 0xd996cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d996cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d996cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d996cd: ret  */
  esp += 4; SPILL(); return;
}

void f_d996e0(void) {
  LOAD_REGS();
L_d996e0: /* d996e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d996e1: mov ebp, esp */
  ebp = esp;
/* d996e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d996e5: push 0xdb9bf0 */
  { uint32_t v = 0xdb9bf0u; esp -= 4; W32(esp, v); }
/* d996ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d996f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d996f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d996f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d996fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d996fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d996fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d996fe: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* d99701: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d99704: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d99705: mov esi, ecx */
  esi = ecx;
/* d99707: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9970e: call 0xd82833 */
  esp -= 4; W32(esp, 0xd99713u); SPILL(); f_d82833(); if (g_unwind) return; RELOAD();
/* d99713: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* d99715: lea ecx, [esi + 0x5c] */
  ecx = (uint32_t)(esi + 0x5cu);
/* d99718: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d99719: mov ecx, edi */
  ecx = edi;
/* d9971b: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0xd9971eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9971e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d99720: add esi, 0x60 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d99723: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d99724: mov ecx, eax */
  ecx = eax;
/* d99726: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0xd99729u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d99729: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9972c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9972d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9972e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d99735: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d99736: mov esp, ebp */
  esp = ebp;
/* d99738: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d99739: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9973c(void) {
  LOAD_REGS();
L_d9973c: /* d9973c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9973f: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d99744: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d99747: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d99748: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9974b: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd99750u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d99750(); return;
}

void f_d99750(void) {
  LOAD_REGS();
L_d99750: /* d99750: push 0xdc2b20 */
  { uint32_t v = 0xdc2b20u; esp -= 4; W32(esp, v); }
/* d99755: push 0xde3028 */
  { uint32_t v = 0xde3028u; esp -= 4; W32(esp, v); }
/* d9975a: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd99760u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d99760: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d99763: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d99765: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d99767: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9976cu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9976c: guest_badaddr(0xd9976c); return;
}

void f_d997a0(void) {
  LOAD_REGS();
L_d997a0: /* d997a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d997a1: mov ebp, esp */
  ebp = esp;
/* d997a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d997a5: push 0xdb9c00 */
  { uint32_t v = 0xdb9c00u; esp -= 4; W32(esp, v); }
/* d997aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d997b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d997b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d997b8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d997bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d997bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d997bd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d997c0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d997c1: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* d997c4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d997c7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d997c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d997ca: mov ecx, edi */
  ecx = edi;
/* d997cc: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d997d3: call dword ptr [0xde8984] */
  esp -= 4; W32(esp, 0xd997d9u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* d997d9: mov ecx, esi */
  ecx = esi;
/* d997db: call dword ptr [0xde8a1c] */
  esp -= 4; W32(esp, 0xd997e1u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* d997e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d997e3: je 0xd99824 */
  if (zf) goto L_d99824;
L_d997e5: /* d997e5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* d997e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d997e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d997ea: call dword ptr [0xde8a18] */
  esp -= 4; W32(esp, 0xd997f0u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* d997f0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d997f3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d997f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d997f7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d997f9: mov ecx, edi */
  ecx = edi;
/* d997fb: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xd99801u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* d99801: xor ebx, ebx */
  ebx = 0;
L_d99803: /* d99803: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d99806: jge 0xd99849 */
  if ((sf == of)) goto L_d99849;
L_d99808: /* d99808: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9980a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9980c: mov ecx, edi */
  ecx = edi;
/* d9980e: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd99814u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d99814: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d99816: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* d99819: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d9981b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9981c: mov ecx, esi */
  ecx = esi;
/* d9981e: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0xd99821u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d99821: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d99822: jmp 0xd99803 */
  goto L_d99803;
L_d99824: /* d99824: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* d99827: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d99828: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d99829: call dword ptr [0xde8a18] */
  esp -= 4; W32(esp, 0xd9982fu); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* d9982f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d99832: xor ebx, ebx */
  ebx = 0;
L_d99834: /* d99834: cmp ebx, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d99837: jge 0xd99849 */
  if ((sf == of)) goto L_d99849;
L_d99839: /* d99839: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* d9983b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9983d: lea edx, [ecx + ebx*4] */
  edx = (uint32_t)(ecx + ebx*4);
/* d99840: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d99841: mov ecx, esi */
  ecx = esi;
/* d99843: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0xd99846u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d99846: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d99847: jmp 0xd99834 */
  goto L_d99834;
L_d99849: /* d99849: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9984c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9984d: mov eax, esi */
  eax = esi;
/* d9984f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d99850: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d99857: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d99858: mov esp, ebp */
  esp = ebp;
/* d9985a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9985b: ret  */
  esp += 4; SPILL(); return;
}

void f_d9985c(void) {
  LOAD_REGS();
L_d9985c: /* d9985c: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d9985f: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d99864: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d99867: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d99868: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* d9986b: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd99870u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d99870(); return;
}

void f_d99870(void) {
  LOAD_REGS();
L_d99870: /* d99870: push 0xdc2b68 */
  { uint32_t v = 0xdc2b68u; esp -= 4; W32(esp, v); }
/* d99875: push 0xde1dd8 */
  { uint32_t v = 0xde1dd8u; esp -= 4; W32(esp, v); }
/* d9987a: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd99880u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d99880: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d99883: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d99885: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d99887: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9988cu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9988c: guest_badaddr(0xd9988c); return;
}

void f_d998d0(void) {
  LOAD_REGS();
L_d998d0: /* d998d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d998d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d998d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d998d3: mov edi, ecx */
  edi = ecx;
/* d998d5: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* d998d8: xor esi, esi */
  esi = 0;
/* d998da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d998dc: jle 0xd998fa */
  if ((zf || sf != of)) goto L_d998fa;
L_d998de: /* d998de: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_d998e2: /* d998e2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* d998e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d998e5: lea ecx, [eax + esi*4] */
  ecx = (uint32_t)(eax + esi*4);
/* d998e8: call dword ptr [0xde89e0] */
  esp -= 4; W32(esp, 0xd998eeu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* d998ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d998f0: jne 0xd99903 */
  if (!zf) goto L_d99903;
L_d998f2: /* d998f2: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* d998f5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* d998f6: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d998f8: jl 0xd998e2 */
  if ((sf != of)) goto L_d998e2;
L_d998fa: /* d998fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d998fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d998fc: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d998ff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d99900: ret 4 */
  esp += 8; SPILL(); return;
L_d99903: /* d99903: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d99904: mov eax, esi */
  eax = esi;
/* d99906: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d99907: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d99908: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d99920(void) {
  LOAD_REGS();
L_d99920: /* d99920: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d99921: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d99923: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d99925: mov esi, ecx */
  esi = ecx;
/* d99927: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9992du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9992d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d99931: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d99933: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* d99935: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* d99938: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d99939: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d99950(void) {
  LOAD_REGS();
L_d99950: /* d99950: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d99951: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d99953: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d99955: mov esi, ecx */
  esi = ecx;
/* d99957: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9995du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9995d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d99961: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d99963: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* d99965: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* d99968: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d99969: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d99980(void) {
  LOAD_REGS();
L_d99980: /* d99980: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d99981: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d99983: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d99985: mov esi, ecx */
  esi = ecx;
/* d99987: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9998du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9998d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d99991: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d99993: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* d99995: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* d99998: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d99999: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d999b0(void) {
  LOAD_REGS();
L_d999b0: /* d999b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d999b1: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* d999b3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d999b5: mov esi, ecx */
  esi = ecx;
/* d999b7: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd999bdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d999bd: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d999bf: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d999c3: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* d999c5: mov dword ptr [edx + eax*8], esi */
  W32((uint32_t)(edx + eax*8), esi);
/* d999c8: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d999cb: mov dword ptr [edx + eax*8 + 4], ecx */
  W32((uint32_t)(edx + eax*8 + 0x4u), ecx);
/* d999cf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d999d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d999f0(void) {
  LOAD_REGS();
L_d999f0: /* d999f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d999f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d999f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d999f7: mov esi, ecx */
  esi = ecx;
/* d999f9: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* d999fb: je 0xd99a0e */
  if (zf) goto L_d99a0e;
L_d999fd: /* d999fd: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* d99a00: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* d99a03: call 0xd81041 */
  esp -= 4; W32(esp, 0xd99a08u); SPILL(); f_d81041(); if (g_unwind) return; RELOAD();
/* d99a08: mov eax, esi */
  eax = esi;
/* d99a0a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d99a0b: ret 4 */
  esp += 8; SPILL(); return;
L_d99a0e: /* d99a0e: xor eax, eax */
  eax = 0;
/* d99a10: mov ecx, esi */
  ecx = esi;
/* d99a12: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* d99a15: call 0xd81041 */
  esp -= 4; W32(esp, 0xd99a1au); SPILL(); f_d81041(); if (g_unwind) return; RELOAD();
/* d99a1a: mov eax, esi */
  eax = esi;
/* d99a1c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d99a1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d99a30(void) {
  LOAD_REGS();
L_d99a30: /* d99a30: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d99a33: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* d99a36: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* d99a39: jmp 0xd81041 */
  SPILL(); f_d81041(); return;
}

void f_d99a50(void) {
  LOAD_REGS();
L_d99a50: /* d99a50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d99a51: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* d99a55: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d99a57: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d99a58: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d99a59: mov esi, dword ptr [0xde88a8] */
  esi = R32((uint32_t)(0xde88a8u));
/* d99a5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d99a60: mov ebp, ecx */
  ebp = ecx;
/* d99a62: jge 0xd99a78 */
  if ((sf == of)) goto L_d99a78;
L_d99a64: /* d99a64: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* d99a69: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d99a6e: push 0xde1e64 */
  { uint32_t v = 0xde1e64u; esp -= 4; W32(esp, v); }
/* d99a73: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd99a75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d99a75: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d99a78: /* d99a78: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d99a7b: jle 0xd99a91 */
  if ((zf || sf != of)) goto L_d99a91;
L_d99a7d: /* d99a7d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* d99a82: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d99a87: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* d99a8c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd99a8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d99a8e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d99a91: /* d99a91: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* d99a95: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* d99a98: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d99a9b: jle 0xd99ab1 */
  if ((zf || sf != of)) goto L_d99ab1;
L_d99a9d: /* d99a9d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* d99aa2: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d99aa7: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* d99aac: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd99aaeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d99aae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d99ab1: /* d99ab1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d99ab3: jge 0xd99ad1 */
  if ((sf == of)) goto L_d99ad1;
L_d99ab5: /* d99ab5: mov esi, ebx */
  esi = ebx;
/* d99ab7: imul esi, esi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x2cu);
  esi = (uint32_t)r;
  }
/* d99aba: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d99abc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_d99ac0: /* d99ac0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* d99ac3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d99ac5: call dword ptr [0xde8990] */
  esp -= 4; W32(esp, 0xd99acbu); SPILL(); f_4e3ad5(); if (g_unwind) return; /* Core!??1FPreferencesInfo@@QAE@XZ */ RELOAD();
/* d99acb: add esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d99ace: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* d99acf: jne 0xd99ac0 */
  if (!zf) goto L_d99ac0;
L_d99ad1: /* d99ad1: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* d99ad5: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* d99ad7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d99ad8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d99ad9: mov ecx, ebp */
  ecx = ebp;
/* d99adb: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xd99ae1u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* d99ae1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d99ae2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d99ae3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d99ae4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d99ae5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d99b20(void) {
  LOAD_REGS();
L_d99b20: /* d99b20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d99b21: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* d99b25: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d99b27: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d99b28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d99b29: mov esi, dword ptr [0xde88a8] */
  esi = R32((uint32_t)(0xde88a8u));
/* d99b2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d99b30: mov ebp, ecx */
  ebp = ecx;
/* d99b32: jge 0xd99b48 */
  if ((sf == of)) goto L_d99b48;
L_d99b34: /* d99b34: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* d99b39: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d99b3e: push 0xde1e64 */
  { uint32_t v = 0xde1e64u; esp -= 4; W32(esp, v); }
/* d99b43: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd99b45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d99b45: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d99b48: /* d99b48: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d99b4b: jle 0xd99b61 */
  if ((zf || sf != of)) goto L_d99b61;
L_d99b4d: /* d99b4d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* d99b52: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d99b57: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* d99b5c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd99b5eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d99b5e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d99b61: /* d99b61: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* d99b65: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* d99b68: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d99b6b: jle 0xd99b81 */
  if ((zf || sf != of)) goto L_d99b81;
L_d99b6d: /* d99b6d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* d99b72: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d99b77: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* d99b7c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd99b7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d99b7e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d99b81: /* d99b81: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d99b83: jge 0xd99ba1 */
  if ((sf == of)) goto L_d99ba1;
L_d99b85: /* d99b85: mov esi, ebx */
  esi = ebx;
/* d99b87: imul esi, esi, 0x3c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x3cu);
  esi = (uint32_t)r;
  }
/* d99b8a: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d99b8c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_d99b90: /* d99b90: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* d99b93: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d99b95: call dword ptr [0xde8994] */
  esp -= 4; W32(esp, 0xd99b9bu); SPILL(); f_4e3d00(); if (g_unwind) return; /* Core!??1FRegistryObjectInfo@@QAE@XZ */ RELOAD();
/* d99b9b: add esi, 0x3c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d99b9e: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* d99b9f: jne 0xd99b90 */
  if (!zf) goto L_d99b90;
L_d99ba1: /* d99ba1: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* d99ba5: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* d99ba7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d99ba8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d99ba9: mov ecx, ebp */
  ecx = ebp;
/* d99bab: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xd99bb1u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* d99bb1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d99bb2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d99bb3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d99bb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d99bb5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d99bf0(void) {
  LOAD_REGS();
L_d99bf0: /* d99bf0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d99bf1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d99bf2: mov ebp, dword ptr [0xde88a8] */
  ebp = R32((uint32_t)(0xde88a8u));
/* d99bf8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d99bf9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d99bfa: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* d99bfe: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d99c00: mov esi, ecx */
  esi = ecx;
/* d99c02: jge 0xd99c18 */
  if ((sf == of)) goto L_d99c18;
L_d99c04: /* d99c04: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* d99c09: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d99c0e: push 0xde1e64 */
  { uint32_t v = 0xde1e64u; esp -= 4; W32(esp, v); }
/* d99c13: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd99c15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d99c15: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d99c18: /* d99c18: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d99c1b: jle 0xd99c31 */
  if ((zf || sf != of)) goto L_d99c31;
L_d99c1d: /* d99c1d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* d99c22: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d99c27: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* d99c2c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd99c2eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d99c2e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d99c31: /* d99c31: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* d99c35: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d99c38: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* d99c3b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d99c3d: jle 0xd99c53 */
  if ((zf || sf != of)) goto L_d99c53;
L_d99c3f: /* d99c3f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* d99c44: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d99c49: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* d99c4e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd99c50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d99c50: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d99c53: /* d99c53: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d99c55: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d99c56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d99c57: mov ecx, esi */
  ecx = esi;
/* d99c59: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xd99c5fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* d99c5f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d99c60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d99c61: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d99c62: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d99c63: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d99c90(void) {
  LOAD_REGS();
L_d99c90: /* d99c90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d99c91: mov ebp, esp */
  ebp = esp;
/* d99c93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d99c95: push 0xdb9c10 */
  { uint32_t v = 0xdb9c10u; esp -= 4; W32(esp, v); }
/* d99c9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d99ca0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d99ca1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d99ca8: sub esp, 0x114 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d99cae: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d99cb1: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d99cb4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d99cb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d99cb6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d99cb7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d99cba: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d99cc1: jl 0xd99e50 */
  if ((sf != of)) goto L_d99e50;
L_d99cc7: /* d99cc7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d99cca: mov dword ptr [ebp - 0x120], eax */
  W32((uint32_t)(ebp + 0xfffffee0u), eax);
/* d99cd0: lea eax, [eax + ecx*4 - 4] */
  eax = (uint32_t)(eax + ecx*4 + 0xfffffffcu);
/* d99cd4: mov dword ptr [ebp - 0x11c], eax */
  W32((uint32_t)(ebp + 0xfffffee4u), eax);
/* d99cda: xor eax, eax */
  eax = 0;
/* d99cdc: mov ecx, 0x3e */
  ecx = 0x3eu;
/* d99ce1: lea edi, [ebp - 0x118] */
  edi = (uint32_t)(ebp + 0xfffffee8u);
/* d99ce7: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* d99ce9: lea eax, [ebp - 0x120] */
  eax = (uint32_t)(ebp + 0xfffffee0u);
L_d99cef: /* d99cef: lea ecx, [ebp - 0x120] */
  ecx = (uint32_t)(ebp + 0xfffffee0u);
/* d99cf5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d99cf7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* d99cfa: jb 0xd99e50 */
  if (cf) goto L_d99e50;
L_d99d00: /* d99d00: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* d99d03: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* d99d05: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
L_d99d08: /* d99d08: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* d99d0b: mov eax, edi */
  eax = edi;
/* d99d0d: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d99d0f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d99d12: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d99d13: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d99d16: jg 0xd99d59 */
  if ((!zf && sf == of)) goto L_d99d59;
L_d99d18: /* d99d18: jmp 0xd99d20 */
  goto L_d99d20;
L_d99d20: /* d99d20: cmp dword ptr [ebp - 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d99d23: jbe 0xd99e3a */
  if ((cf | zf)) goto L_d99e3a;
L_d99d29: /* d99d29: mov ebx, esi */
  ebx = esi;
/* d99d2b: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* d99d2e: mov edi, edi */
  edi = edi;
L_d99d30: /* d99d30: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d99d33: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d99d35: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* d99d37: ja 0xd99d4b */
  if ((!cf && !zf)) goto L_d99d4b;
L_d99d39: /* d99d39: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d99d3b: call 0xd8fdb0 */
  esp -= 4; W32(esp, 0xd99d40u); SPILL(); f_d8fdb0(); if (g_unwind) return; RELOAD();
/* d99d40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d99d42: jle 0xd99d46 */
  if ((zf || sf != of)) goto L_d99d46;
L_d99d44: /* d99d44: mov ebx, edi */
  ebx = edi;
L_d99d46: /* d99d46: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d99d49: jmp 0xd99d30 */
  goto L_d99d30;
L_d99d4b: /* d99d4b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d99d4d: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* d99d4f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d99d51: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d99d54: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d99d57: jmp 0xd99d20 */
  goto L_d99d20;
L_d99d59: /* d99d59: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* d99d5a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d99d5c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d99d5e: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d99d60: mov ecx, dword ptr [esi + eax*4] */
  ecx = R32((uint32_t)(esi + eax*4));
/* d99d63: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* d99d66: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d99d68: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* d99d6a: mov ebx, esi */
  ebx = esi;
/* d99d6c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d99d6f: nop  */
L_d99d70: /* d99d70: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d99d73: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* d99d76: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d99d78: ja 0xd99d87 */
  if ((!cf && !zf)) goto L_d99d87;
L_d99d7a: /* d99d7a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d99d7c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* d99d7e: call 0xd8fdb0 */
  esp -= 4; W32(esp, 0xd99d83u); SPILL(); f_d8fdb0(); if (g_unwind) return; RELOAD();
/* d99d83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d99d85: jle 0xd99d70 */
  if ((zf || sf != of)) goto L_d99d70;
L_d99d87: /* d99d87: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d99d8a: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d99d8c: jbe 0xd99d9b */
  if ((cf | zf)) goto L_d99d9b;
L_d99d8e: /* d99d8e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d99d90: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d99d92: call 0xd8fdb0 */
  esp -= 4; W32(esp, 0xd99d97u); SPILL(); f_d8fdb0(); if (g_unwind) return; RELOAD();
/* d99d97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d99d99: jge 0xd99d87 */
  if ((sf == of)) goto L_d99d87;
L_d99d9b: /* d99d9b: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d99d9d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d99d9f: jbe 0xd99e45 */
  if ((cf | zf)) goto L_d99e45;
L_d99da5: /* d99da5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d99da7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d99daa: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* d99dac: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* d99dae: mov eax, edi */
  eax = edi;
/* d99db0: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d99db2: mov edx, ecx */
  edx = ecx;
/* d99db4: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d99db7: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d99db9: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d99dbc: and edx, 0xfffffffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* d99dbf: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d99dc1: jl 0xd99e16 */
  if ((sf != of)) goto L_d99e16;
L_d99dc3: /* d99dc3: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* d99dc6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d99dc8: jae 0xd99ddb */
  if (!cf) goto L_d99ddb;
L_d99dca: /* d99dca: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d99dcd: add edi, -4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d99dd0: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* d99dd2: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* d99dd5: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d99dd8: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_d99ddb: /* d99ddb: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d99ddd: jbe 0xd99e3a */
  if ((cf | zf)) goto L_d99e3a;
L_d99ddf: /* d99ddf: mov esi, ebx */
  esi = ebx;
/* d99de1: jmp 0xd99d08 */
  goto L_d99d08;
L_d99e16: /* d99e16: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d99e18: jbe 0xd99e28 */
  if ((cf | zf)) goto L_d99e28;
L_d99e1a: /* d99e1a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d99e1d: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d99e1f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d99e22: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d99e25: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_d99e28: /* d99e28: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* d99e2b: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d99e2d: jae 0xd99e3a */
  if (!cf) goto L_d99e3a;
L_d99e2f: /* d99e2f: add edi, -4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d99e32: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* d99e35: jmp 0xd99d08 */
  goto L_d99d08;
L_d99e3a: /* d99e3a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d99e3d: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d99e40: jmp 0xd99cef */
  goto L_d99cef;
L_d99e45: /* d99e45: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* d99e47: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* d99e49: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* d99e4b: jmp 0xd99d70 */
  goto L_d99d70;
L_d99e50: /* d99e50: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d99e53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d99e54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d99e55: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d99e5c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d99e5d: mov esp, ebp */
  esp = ebp;
/* d99e5f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d99e60: ret  */
  esp += 4; SPILL(); return;
}

void f_d99d1a(void) {
  LOAD_REGS();
  goto L_d99d1a;
L_d99cef: /* d99cef: lea ecx, [ebp - 0x120] */
  ecx = (uint32_t)(ebp + 0xfffffee0u);
/* d99cf5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d99cf7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* d99cfa: jb 0xd99e50 */
  if (cf) goto L_d99e50;
L_d99d00: /* d99d00: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* d99d03: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* d99d05: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
L_d99d08: /* d99d08: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* d99d0b: mov eax, edi */
  eax = edi;
/* d99d0d: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d99d0f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d99d12: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d99d13: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d99d16: jg 0xd99d59 */
  if ((!zf && sf == of)) goto L_d99d59;
L_d99d18: /* d99d18: jmp 0xd99d20 */
  goto L_d99d20;
L_d99d1a: /* d99d1a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_d99d20: /* d99d20: cmp dword ptr [ebp - 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d99d23: jbe 0xd99e3a */
  if ((cf | zf)) goto L_d99e3a;
L_d99d29: /* d99d29: mov ebx, esi */
  ebx = esi;
/* d99d2b: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* d99d2e: mov edi, edi */
  edi = edi;
L_d99d30: /* d99d30: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d99d33: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d99d35: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* d99d37: ja 0xd99d4b */
  if ((!cf && !zf)) goto L_d99d4b;
L_d99d39: /* d99d39: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d99d3b: call 0xd8fdb0 */
  esp -= 4; W32(esp, 0xd99d40u); SPILL(); f_d8fdb0(); if (g_unwind) return; RELOAD();
/* d99d40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d99d42: jle 0xd99d46 */
  if ((zf || sf != of)) goto L_d99d46;
L_d99d44: /* d99d44: mov ebx, edi */
  ebx = edi;
L_d99d46: /* d99d46: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d99d49: jmp 0xd99d30 */
  goto L_d99d30;
L_d99d4b: /* d99d4b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d99d4d: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* d99d4f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d99d51: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d99d54: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d99d57: jmp 0xd99d20 */
  goto L_d99d20;
L_d99d59: /* d99d59: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* d99d5a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d99d5c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d99d5e: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d99d60: mov ecx, dword ptr [esi + eax*4] */
  ecx = R32((uint32_t)(esi + eax*4));
/* d99d63: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* d99d66: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d99d68: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* d99d6a: mov ebx, esi */
  ebx = esi;
/* d99d6c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d99d6f: nop  */
L_d99d70: /* d99d70: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d99d73: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* d99d76: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d99d78: ja 0xd99d87 */
  if ((!cf && !zf)) goto L_d99d87;
L_d99d7a: /* d99d7a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d99d7c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* d99d7e: call 0xd8fdb0 */
  esp -= 4; W32(esp, 0xd99d83u); SPILL(); f_d8fdb0(); if (g_unwind) return; RELOAD();
/* d99d83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d99d85: jle 0xd99d70 */
  if ((zf || sf != of)) goto L_d99d70;
L_d99d87: /* d99d87: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d99d8a: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d99d8c: jbe 0xd99d9b */
  if ((cf | zf)) goto L_d99d9b;
L_d99d8e: /* d99d8e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d99d90: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d99d92: call 0xd8fdb0 */
  esp -= 4; W32(esp, 0xd99d97u); SPILL(); f_d8fdb0(); if (g_unwind) return; RELOAD();
/* d99d97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d99d99: jge 0xd99d87 */
  if ((sf == of)) goto L_d99d87;
L_d99d9b: /* d99d9b: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d99d9d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d99d9f: jbe 0xd99e45 */
  if ((cf | zf)) goto L_d99e45;
L_d99da5: /* d99da5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d99da7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d99daa: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* d99dac: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* d99dae: mov eax, edi */
  eax = edi;
/* d99db0: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d99db2: mov edx, ecx */
  edx = ecx;
/* d99db4: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d99db7: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d99db9: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d99dbc: and edx, 0xfffffffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* d99dbf: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d99dc1: jl 0xd99e16 */
  if ((sf != of)) goto L_d99e16;
L_d99dc3: /* d99dc3: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* d99dc6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d99dc8: jae 0xd99ddb */
  if (!cf) goto L_d99ddb;
L_d99dca: /* d99dca: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d99dcd: add edi, -4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d99dd0: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* d99dd2: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* d99dd5: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d99dd8: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_d99ddb: /* d99ddb: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d99ddd: jbe 0xd99e3a */
  if ((cf | zf)) goto L_d99e3a;
L_d99ddf: /* d99ddf: mov esi, ebx */
  esi = ebx;
/* d99de1: jmp 0xd99d08 */
  goto L_d99d08;
L_d99e16: /* d99e16: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d99e18: jbe 0xd99e28 */
  if ((cf | zf)) goto L_d99e28;
L_d99e1a: /* d99e1a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d99e1d: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d99e1f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d99e22: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d99e25: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_d99e28: /* d99e28: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* d99e2b: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d99e2d: jae 0xd99e3a */
  if (!cf) goto L_d99e3a;
L_d99e2f: /* d99e2f: add edi, -4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d99e32: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* d99e35: jmp 0xd99d08 */
  goto L_d99d08;
L_d99e3a: /* d99e3a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d99e3d: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d99e40: jmp 0xd99cef */
  goto L_d99cef;
L_d99e45: /* d99e45: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* d99e47: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* d99e49: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* d99e4b: jmp 0xd99d70 */
  goto L_d99d70;
L_d99e50: /* d99e50: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d99e53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d99e54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d99e55: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d99e5c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d99e5d: mov esp, ebp */
  esp = ebp;
/* d99e5f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d99e60: ret  */
  esp += 4; SPILL(); return;
}

void f_d99de6(void) {
  LOAD_REGS();
L_d99de6: /* d99de6: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* d99de9: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d99dee: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* d99df1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d99df2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* d99df5: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd99dfau); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d99dfa(); return;
}

void f_d99dfa(void) {
  LOAD_REGS();
  goto L_d99dfa;
L_d99cef: /* d99cef: lea ecx, [ebp - 0x120] */
  ecx = (uint32_t)(ebp + 0xfffffee0u);
/* d99cf5: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d99cf7: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* d99cfa: jb 0xd99e50 */
  if (cf) goto L_d99e50;
L_d99d00: /* d99d00: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* d99d03: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* d99d05: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
L_d99d08: /* d99d08: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* d99d0b: mov eax, edi */
  eax = edi;
/* d99d0d: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d99d0f: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d99d12: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d99d13: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d99d16: jg 0xd99d59 */
  if ((!zf && sf == of)) goto L_d99d59;
L_d99d18: /* d99d18: jmp 0xd99d20 */
  goto L_d99d20;
L_d99d20: /* d99d20: cmp dword ptr [ebp - 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d99d23: jbe 0xd99e3a */
  if ((cf | zf)) goto L_d99e3a;
L_d99d29: /* d99d29: mov ebx, esi */
  ebx = esi;
/* d99d2b: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* d99d2e: mov edi, edi */
  edi = edi;
L_d99d30: /* d99d30: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d99d33: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d99d35: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* d99d37: ja 0xd99d4b */
  if ((!cf && !zf)) goto L_d99d4b;
L_d99d39: /* d99d39: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d99d3b: call 0xd8fdb0 */
  esp -= 4; W32(esp, 0xd99d40u); SPILL(); f_d8fdb0(); if (g_unwind) return; RELOAD();
/* d99d40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d99d42: jle 0xd99d46 */
  if ((zf || sf != of)) goto L_d99d46;
L_d99d44: /* d99d44: mov ebx, edi */
  ebx = edi;
L_d99d46: /* d99d46: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d99d49: jmp 0xd99d30 */
  goto L_d99d30;
L_d99d4b: /* d99d4b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* d99d4d: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* d99d4f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d99d51: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d99d54: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d99d57: jmp 0xd99d20 */
  goto L_d99d20;
L_d99d59: /* d99d59: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* d99d5a: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d99d5c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* d99d5e: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d99d60: mov ecx, dword ptr [esi + eax*4] */
  ecx = R32((uint32_t)(esi + eax*4));
/* d99d63: lea eax, [esi + eax*4] */
  eax = (uint32_t)(esi + eax*4);
/* d99d66: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d99d68: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* d99d6a: mov ebx, esi */
  ebx = esi;
/* d99d6c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d99d6f: nop  */
L_d99d70: /* d99d70: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d99d73: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* d99d76: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d99d78: ja 0xd99d87 */
  if ((!cf && !zf)) goto L_d99d87;
L_d99d7a: /* d99d7a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d99d7c: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* d99d7e: call 0xd8fdb0 */
  esp -= 4; W32(esp, 0xd99d83u); SPILL(); f_d8fdb0(); if (g_unwind) return; RELOAD();
/* d99d83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d99d85: jle 0xd99d70 */
  if ((zf || sf != of)) goto L_d99d70;
L_d99d87: /* d99d87: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d99d8a: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d99d8c: jbe 0xd99d9b */
  if ((cf | zf)) goto L_d99d9b;
L_d99d8e: /* d99d8e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d99d90: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d99d92: call 0xd8fdb0 */
  esp -= 4; W32(esp, 0xd99d97u); SPILL(); f_d8fdb0(); if (g_unwind) return; RELOAD();
/* d99d97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d99d99: jge 0xd99d87 */
  if ((sf == of)) goto L_d99d87;
L_d99d9b: /* d99d9b: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d99d9d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* d99d9f: jbe 0xd99e45 */
  if ((cf | zf)) goto L_d99e45;
L_d99da5: /* d99da5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d99da7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d99daa: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* d99dac: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* d99dae: mov eax, edi */
  eax = edi;
/* d99db0: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d99db2: mov edx, ecx */
  edx = ecx;
/* d99db4: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d99db7: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d99db9: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d99dbc: and edx, 0xfffffffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* d99dbf: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d99dc1: jl 0xd99e16 */
  if ((sf != of)) goto L_d99e16;
L_d99dc3: /* d99dc3: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* d99dc6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d99dc8: jae 0xd99ddb */
  if (!cf) goto L_d99ddb;
L_d99dca: /* d99dca: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d99dcd: add edi, -4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d99dd0: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* d99dd2: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* d99dd5: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d99dd8: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_d99ddb: /* d99ddb: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d99ddd: jbe 0xd99e3a */
  if ((cf | zf)) goto L_d99e3a;
L_d99ddf: /* d99ddf: mov esi, ebx */
  esi = ebx;
/* d99de1: jmp 0xd99d08 */
  goto L_d99d08;
L_d99dfa: /* d99dfa: push 0xdc2b80 */
  { uint32_t v = 0xdc2b80u; esp -= 4; W32(esp, v); }
/* d99dff: push 0xde312c */
  { uint32_t v = 0xde312cu; esp -= 4; W32(esp, v); }
/* d99e04: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd99e0au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d99e0a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d99e0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d99e0f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d99e11: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd99e16u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d99e16: /* d99e16: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d99e18: jbe 0xd99e28 */
  if ((cf | zf)) goto L_d99e28;
L_d99e1a: /* d99e1a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d99e1d: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d99e1f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d99e22: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d99e25: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_d99e28: /* d99e28: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* d99e2b: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d99e2d: jae 0xd99e3a */
  if (!cf) goto L_d99e3a;
L_d99e2f: /* d99e2f: add edi, -4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d99e32: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* d99e35: jmp 0xd99d08 */
  goto L_d99d08;
L_d99e3a: /* d99e3a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d99e3d: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d99e40: jmp 0xd99cef */
  goto L_d99cef;
L_d99e45: /* d99e45: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* d99e47: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* d99e49: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* d99e4b: jmp 0xd99d70 */
  goto L_d99d70;
L_d99e50: /* d99e50: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d99e53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d99e54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d99e55: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d99e5c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d99e5d: mov esp, ebp */
  esp = ebp;
/* d99e5f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d99e60: ret  */
  esp += 4; SPILL(); return;
}

void f_d99ef0(void) {
  LOAD_REGS();
L_d99ef0: /* d99ef0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d99ef1: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* d99ef4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d99ef5: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* d99ef9: mov eax, esi */
  eax = esi;
/* d99efb: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d99efd: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* d99eff: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d99f01: jge 0xd99f05 */
  if ((sf == of)) goto L_d99f05;
L_d99f03: /* d99f03: mov edi, eax */
  edi = eax;
L_d99f05: /* d99f05: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* d99f08: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d99f0c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* d99f0f: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* d99f11: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d99f14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d99f15: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* d99f18: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* d99f1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d99f1c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d99f30(void) {
  LOAD_REGS();
L_d99f30: /* d99f30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d99f32: push 0xdb9c29 */
  { uint32_t v = 0xdb9c29u; esp -= 4; W32(esp, v); }
/* d99f37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d99f3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d99f3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d99f45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d99f46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d99f47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d99f48: mov esi, ecx */
  esi = ecx;
/* d99f4a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d99f4b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* d99f4f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* d99f52: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d99f54: mov ebx, dword ptr [0xde88a8] */
  ebx = R32((uint32_t)(0xde88a8u));
/* d99f5a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* d99f62: jge 0xd99f78 */
  if ((sf == of)) goto L_d99f78;
L_d99f64: /* d99f64: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* d99f69: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d99f6e: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* d99f73: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd99f75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d99f75: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d99f78: /* d99f78: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d99f7b: jle 0xd99f91 */
  if ((zf || sf != of)) goto L_d99f91;
L_d99f7d: /* d99f7d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* d99f82: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d99f87: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* d99f8c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd99f8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d99f8e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d99f91: /* d99f91: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d99f93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d99f94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d99f96: mov ecx, esi */
  ecx = esi;
/* d99f98: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xd99f9eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* d99f9e: mov ecx, esi */
  ecx = esi;
/* d99fa0: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* d99fa8: call dword ptr [0xde8900] */
  esp -= 4; W32(esp, 0xd99faeu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* d99fae: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d99fb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d99fb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d99fb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d99fb5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d99fbc: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d99fbf: ret  */
  esp += 4; SPILL(); return;
}

void f_d99ff0(void) {
  LOAD_REGS();
L_d99ff0: /* d99ff0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d99ff1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d99ff3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d99ff5: mov esi, ecx */
  esi = ecx;
/* d99ff7: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd99ffdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d99ffd: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d9a001: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d9a003: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* d9a005: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* d9a008: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9a009: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9a020(void) {
  LOAD_REGS();
L_d9a020: /* d9a020: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9a022: push 0xdb9c49 */
  { uint32_t v = 0xdb9c49u; esp -= 4; W32(esp, v); }
/* d9a027: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9a02d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9a02e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9a035: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9a036: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9a037: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9a038: mov esi, ecx */
  esi = ecx;
/* d9a03a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9a03b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* d9a03f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* d9a042: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d9a044: mov ebx, dword ptr [0xde88a8] */
  ebx = R32((uint32_t)(0xde88a8u));
/* d9a04a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* d9a052: jge 0xd9a068 */
  if ((sf == of)) goto L_d9a068;
L_d9a054: /* d9a054: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* d9a059: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d9a05e: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* d9a063: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd9a065u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9a065: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9a068: /* d9a068: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9a06b: jle 0xd9a081 */
  if ((zf || sf != of)) goto L_d9a081;
L_d9a06d: /* d9a06d: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* d9a072: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d9a077: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* d9a07c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0xd9a07eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9a07e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9a081: /* d9a081: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9a083: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9a084: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9a086: mov ecx, esi */
  ecx = esi;
/* d9a088: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xd9a08eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* d9a08e: mov ecx, esi */
  ecx = esi;
/* d9a090: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* d9a098: call dword ptr [0xde8900] */
  esp -= 4; W32(esp, 0xd9a09eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* d9a09e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d9a0a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9a0a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9a0a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9a0a5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9a0ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9a0af: ret  */
  esp += 4; SPILL(); return;
}

void f_d9a0e0(void) {
  LOAD_REGS();
L_d9a0e0: /* d9a0e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d9a0e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9a0e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9a0e7: mov esi, ecx */
  esi = ecx;
/* d9a0e9: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* d9a0eb: je 0xd9a0fe */
  if (zf) goto L_d9a0fe;
L_d9a0ed: /* d9a0ed: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* d9a0f0: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* d9a0f3: call 0xd8223e */
  esp -= 4; W32(esp, 0xd9a0f8u); SPILL(); f_d8223e(); if (g_unwind) return; RELOAD();
/* d9a0f8: mov eax, esi */
  eax = esi;
/* d9a0fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9a0fb: ret 4 */
  esp += 8; SPILL(); return;
L_d9a0fe: /* d9a0fe: xor eax, eax */
  eax = 0;
/* d9a100: mov ecx, esi */
  ecx = esi;
/* d9a102: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* d9a105: call 0xd8223e */
  esp -= 4; W32(esp, 0xd9a10au); SPILL(); f_d8223e(); if (g_unwind) return; RELOAD();
/* d9a10a: mov eax, esi */
  eax = esi;
/* d9a10c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9a10d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9a120(void) {
  LOAD_REGS();
L_d9a120: /* d9a120: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d9a123: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* d9a126: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* d9a129: jmp 0xd8223e */
  SPILL(); f_d8223e(); return;
}

void f_d9a140(void) {
  LOAD_REGS();
L_d9a140: /* d9a140: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d9a143: mov ecx, dword ptr [0xde8950] */
  ecx = R32((uint32_t)(0xde8950u));
/* d9a149: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9a14b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* d9a14e: ret  */
  esp += 4; SPILL(); return;
}

void f_d9a160(void) {
  LOAD_REGS();
L_d9a160: /* d9a160: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d9a163: mov ecx, dword ptr [0xde8950] */
  ecx = R32((uint32_t)(0xde8950u));
/* d9a169: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9a16b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* d9a16e: ret  */
  esp += 4; SPILL(); return;
}

void f_d9a180(void) {
  LOAD_REGS();
L_d9a180: /* d9a180: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9a181: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9a183: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9a185: mov esi, ecx */
  esi = ecx;
/* d9a187: call dword ptr [0xde88d0] */
  esp -= 4; W32(esp, 0xd9a18du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* d9a18d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d9a191: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* d9a193: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* d9a195: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* d9a198: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9a199: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9a1b0(void) {
  LOAD_REGS();
L_d9a1b0: /* d9a1b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9a1b1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9a1b2: mov ebp, dword ptr [0xde88a8] */
  ebp = R32((uint32_t)(0xde88a8u));
/* d9a1b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9a1b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9a1ba: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* d9a1be: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d9a1c0: mov esi, ecx */
  esi = ecx;
/* d9a1c2: jge 0xd9a1d8 */
  if ((sf == of)) goto L_d9a1d8;
L_d9a1c4: /* d9a1c4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* d9a1c9: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d9a1ce: push 0xde1e64 */
  { uint32_t v = 0xde1e64u; esp -= 4; W32(esp, v); }
/* d9a1d3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd9a1d5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9a1d5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9a1d8: /* d9a1d8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9a1db: jle 0xd9a1f1 */
  if ((zf || sf != of)) goto L_d9a1f1;
L_d9a1dd: /* d9a1dd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* d9a1e2: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d9a1e7: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* d9a1ec: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd9a1eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9a1ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9a1f1: /* d9a1f1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* d9a1f5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d9a1f8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* d9a1fb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9a1fd: jle 0xd9a213 */
  if ((zf || sf != of)) goto L_d9a213;
L_d9a1ff: /* d9a1ff: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* d9a204: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d9a209: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* d9a20e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd9a210u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9a210: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9a213: /* d9a213: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9a215: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9a216: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9a217: mov ecx, esi */
  ecx = esi;
/* d9a219: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xd9a21fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* d9a21f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9a220: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9a221: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9a222: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9a223: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d9a250(void) {
  LOAD_REGS();
L_d9a250: /* d9a250: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d9a254: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9a255: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9a257: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xd9a25du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* d9a25d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9a270(void) {
  LOAD_REGS();
L_d9a270: /* d9a270: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9a271: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9a272: mov ebp, dword ptr [0xde88a8] */
  ebp = R32((uint32_t)(0xde88a8u));
/* d9a278: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9a279: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9a27a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* d9a27e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d9a280: mov esi, ecx */
  esi = ecx;
/* d9a282: jge 0xd9a298 */
  if ((sf == of)) goto L_d9a298;
L_d9a284: /* d9a284: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* d9a289: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d9a28e: push 0xde1e64 */
  { uint32_t v = 0xde1e64u; esp -= 4; W32(esp, v); }
/* d9a293: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd9a295u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9a295: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9a298: /* d9a298: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9a29b: jle 0xd9a2b1 */
  if ((zf || sf != of)) goto L_d9a2b1;
L_d9a29d: /* d9a29d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* d9a2a2: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d9a2a7: push 0xde1e50 */
  { uint32_t v = 0xde1e50u; esp -= 4; W32(esp, v); }
/* d9a2ac: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd9a2aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9a2ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9a2b1: /* d9a2b1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* d9a2b5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d9a2b8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* d9a2bb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9a2bd: jle 0xd9a2d3 */
  if ((zf || sf != of)) goto L_d9a2d3;
L_d9a2bf: /* d9a2bf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* d9a2c4: push 0xde1e70 */
  { uint32_t v = 0xde1e70u; esp -= 4; W32(esp, v); }
/* d9a2c9: push 0xde1e34 */
  { uint32_t v = 0xde1e34u; esp -= 4; W32(esp, v); }
/* d9a2ce: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xd9a2d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9a2d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9a2d3: /* d9a2d3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9a2d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9a2d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9a2d7: mov ecx, esi */
  ecx = esi;
/* d9a2d9: call dword ptr [0xde88fc] */
  esp -= 4; W32(esp, 0xd9a2dfu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* d9a2df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9a2e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9a2e1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9a2e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9a2e3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d9a310(void) {
  LOAD_REGS();
L_d9a310: /* d9a310: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d9a314: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9a315: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9a317: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xd9a31du); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* d9a31d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9a330(void) {
  LOAD_REGS();
L_d9a330: /* d9a330: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9a331: mov ebp, esp */
  ebp = esp;
/* d9a333: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9a335: push 0xdb9c60 */
  { uint32_t v = 0xdb9c60u; esp -= 4; W32(esp, v); }
/* d9a33a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9a340: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9a341: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9a348: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9a34b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9a34c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9a34d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9a34e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9a351: mov esi, ecx */
  esi = ecx;
/* d9a353: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9a35a: xor edi, edi */
  edi = 0;
/* d9a35c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_d9a360: /* d9a360: cmp edi, dword ptr [esi + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9a363: jge 0xd9a379 */
  if ((sf == of)) goto L_d9a379;
L_d9a365: /* d9a365: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* d9a368: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* d9a36b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9a36d: je 0xd9a376 */
  if (zf) goto L_d9a376;
L_d9a36f: /* d9a36f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9a371: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9a373: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xd9a376u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9a376: /* d9a376: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d9a377: jmp 0xd9a360 */
  goto L_d9a360;
L_d9a379: /* d9a379: lea ecx, [esi + 0x30] */
  ecx = (uint32_t)(esi + 0x30u);
/* d9a37c: xor eax, eax */
  eax = 0;
/* d9a37e: mov edi, edi */
  edi = edi;
L_d9a380: /* d9a380: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9a383: jge 0xd9a388 */
  if ((sf == of)) goto L_d9a388;
L_d9a385: /* d9a385: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d9a386: jmp 0xd9a380 */
  goto L_d9a380;
L_d9a388: /* d9a388: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9a38a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9a38c: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xd9a392u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* d9a392: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9a395: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9a396: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9a397: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9a39e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9a39f: mov esp, ebp */
  esp = ebp;
/* d9a3a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9a3a2: ret  */
  esp += 4; SPILL(); return;
}

void f_d9a3a3(void) {
  LOAD_REGS();
L_d9a3a3: /* d9a3a3: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9a3a6: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9a3ab: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d9a3ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9a3af: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9a3b2: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9a3b7u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9a3b7(); return;
}

void f_d9a3b7(void) {
  LOAD_REGS();
L_d9a3b7: /* d9a3b7: push 0xdc2b8c */
  { uint32_t v = 0xdc2b8cu; esp -= 4; W32(esp, v); }
/* d9a3bc: push 0xde2178 */
  { uint32_t v = 0xde2178u; esp -= 4; W32(esp, v); }
/* d9a3c1: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9a3c7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9a3c7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9a3ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9a3cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9a3ce: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9a3d3u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9a3d3: guest_badaddr(0xd9a3d3); return;
}

void f_d9a410(void) {
  LOAD_REGS();
L_d9a410: /* d9a410: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9a411: mov ebp, esp */
  ebp = esp;
/* d9a413: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9a415: push 0xdb9c70 */
  { uint32_t v = 0xdb9c70u; esp -= 4; W32(esp, v); }
/* d9a41a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9a420: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9a421: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9a428: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9a42b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9a42c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9a42d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9a42e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9a431: mov esi, ecx */
  esi = ecx;
/* d9a433: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9a43a: xor edi, edi */
  edi = 0;
/* d9a43c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_d9a440: /* d9a440: cmp edi, dword ptr [esi + 0x28] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9a443: jge 0xd9a459 */
  if ((sf == of)) goto L_d9a459;
L_d9a445: /* d9a445: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* d9a448: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* d9a44b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9a44d: je 0xd9a456 */
  if (zf) goto L_d9a456;
L_d9a44f: /* d9a44f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9a451: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9a453: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xd9a456u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9a456: /* d9a456: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d9a457: jmp 0xd9a440 */
  goto L_d9a440;
L_d9a459: /* d9a459: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* d9a45c: xor eax, eax */
  eax = 0;
/* d9a45e: mov edi, edi */
  edi = edi;
L_d9a460: /* d9a460: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9a463: jge 0xd9a468 */
  if ((sf == of)) goto L_d9a468;
L_d9a465: /* d9a465: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d9a466: jmp 0xd9a460 */
  goto L_d9a460;
L_d9a468: /* d9a468: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9a46a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* d9a46c: call dword ptr [0xde89c4] */
  esp -= 4; W32(esp, 0xd9a472u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* d9a472: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9a474: mov ecx, esi */
  ecx = esi;
/* d9a476: mov dword ptr [esi + 0x20], 0 */
  W32((uint32_t)(esi + 0x20u), 0x0u);
/* d9a47d: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0xd9a480u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9a480: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d9a483: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9a485: je 0xd9a4a2 */
  if (zf) goto L_d9a4a2;
L_d9a487: /* d9a487: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d9a48a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9a48c: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0xd9a492u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9a492: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* d9a495: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9a497: je 0xd9a4a2 */
  if (zf) goto L_d9a4a2;
L_d9a499: /* d9a499: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d9a49c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9a49e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9a49f: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0xd9a4a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9a4a2: /* d9a4a2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9a4a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9a4a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9a4a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9a4ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9a4af: mov esp, ebp */
  esp = ebp;
/* d9a4b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9a4b2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9a4b5(void) {
  LOAD_REGS();
L_d9a4b5: /* d9a4b5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9a4b8: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9a4bd: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* d9a4c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9a4c1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* d9a4c4: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9a4c9u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9a4c9(); return;
}

void f_d9a4c9(void) {
  LOAD_REGS();
L_d9a4c9: /* d9a4c9: push 0xdc2bc8 */
  { uint32_t v = 0xdc2bc8u; esp -= 4; W32(esp, v); }
/* d9a4ce: push 0xde2198 */
  { uint32_t v = 0xde2198u; esp -= 4; W32(esp, v); }
/* d9a4d3: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9a4d9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9a4d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9a4dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9a4de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9a4e0: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9a4e5u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9a4e5: guest_badaddr(0xd9a4e5); return;
}

void f_d9a530(void) {
  LOAD_REGS();
L_d9a530: /* d9a530: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9a531: mov ebp, esp */
  ebp = esp;
/* d9a533: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9a535: push 0xdb9c80 */
  { uint32_t v = 0xdb9c80u; esp -= 4; W32(esp, v); }
/* d9a53a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9a540: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9a541: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9a548: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9a54b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9a54c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9a54d: mov esi, ecx */
  esi = ecx;
/* d9a54f: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* d9a552: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d9a554: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9a555: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9a558: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9a55f: je 0xd9a571 */
  if (zf) goto L_d9a571;
L_d9a561: /* d9a561: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* d9a564: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9a565: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* d9a568: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9a569: call 0xd82423 */
  esp -= 4; W32(esp, 0xd9a56eu); SPILL(); f_d82423(); if (g_unwind) return; RELOAD();
/* d9a56e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d9a571: /* d9a571: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d9a574: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9a576: call dword ptr [edx + 0xe8] */
  { uint32_t t = R32((uint32_t)(edx + 0xe8u)); esp -= 4; W32(esp, 0xd9a57cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9a57c: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9a57e: jne 0xd9a59c */
  if (!zf) goto L_d9a59c;
L_d9a580: /* d9a580: xor edi, edi */
  edi = 0;
L_d9a582: /* d9a582: cmp edi, dword ptr [esi + 0x34] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d9a585: jge 0xd9a5bc */
  if ((sf == of)) goto L_d9a5bc;
L_d9a587: /* d9a587: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* d9a58a: mov ecx, dword ptr [eax + edi*4] */
  ecx = R32((uint32_t)(eax + edi*4));
/* d9a58d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d9a58e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d9a591: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d9a594: call 0xd8220c */
  esp -= 4; W32(esp, 0xd9a599u); SPILL(); f_d8220c(); if (g_unwind) return; RELOAD();
/* d9a599: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d9a59a: jmp 0xd9a582 */
  goto L_d9a582;
L_d9a59c: /* d9a59c: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* d9a59f: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
L_d9a5a2: /* d9a5a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d9a5a4: jl 0xd9a5bc */
  if ((sf != of)) goto L_d9a5bc;
L_d9a5a6: /* d9a5a6: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* d9a5a9: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* d9a5ac: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d9a5af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9a5b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9a5b1: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d9a5b4: call 0xd82707 */
  esp -= 4; W32(esp, 0xd9a5b9u); SPILL(); f_d82707(); if (g_unwind) return; RELOAD();
/* d9a5b9: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* d9a5ba: jmp 0xd9a5a2 */
  goto L_d9a5a2;
L_d9a5bc: /* d9a5bc: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d9a5bf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9a5c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9a5c3: call dword ptr [edx + 0xf4] */
  { uint32_t t = R32((uint32_t)(edx + 0xf4u)); esp -= 4; W32(esp, 0xd9a5c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9a5c9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d9a5cc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9a5ce: call dword ptr [eax + 0xf0] */
  { uint32_t t = R32((uint32_t)(eax + 0xf0u)); esp -= 4; W32(esp, 0xd9a5d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d9a5d4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9a5d7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9a5d8: mov dword ptr [esi + 0x14], 1 */
  W32((uint32_t)(esi + 0x14u), 0x1u);
/* d9a5df: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9a5e0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9a5e7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9a5e8: mov esp, ebp */
  esp = ebp;
/* d9a5ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9a5eb: ret  */
  esp += 4; SPILL(); return;
}

void f_d9a5ec(void) {
  LOAD_REGS();
L_d9a5ec: /* d9a5ec: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9a5ef: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9a5f4: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d9a5f7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9a5f8: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d9a5fb: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9a600u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9a600(); return;
}

void f_d9a600(void) {
  LOAD_REGS();
L_d9a600: /* d9a600: push 0xdc2c08 */
  { uint32_t v = 0xdc2c08u; esp -= 4; W32(esp, v); }
/* d9a605: push 0xde2210 */
  { uint32_t v = 0xde2210u; esp -= 4; W32(esp, v); }
/* d9a60a: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9a610u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9a610: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9a613: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9a615: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d9a617: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9a61cu); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9a61c: guest_badaddr(0xd9a61c); return;
}

void f_d9a660(void) {
  LOAD_REGS();
L_d9a660: /* d9a660: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9a661: mov ebp, esp */
  ebp = esp;
/* d9a663: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9a665: push 0xdb9c90 */
  { uint32_t v = 0xdb9c90u; esp -= 4; W32(esp, v); }
/* d9a66a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9a670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9a671: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9a678: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9a67b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9a67c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* d9a67f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9a680: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9a681: xor edi, edi */
  edi = 0;
/* d9a683: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9a685: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9a688: mov esi, ecx */
  esi = ecx;
/* d9a68a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* d9a68d: jne 0xd9a697 */
  if (!zf) goto L_d9a697;
L_d9a68f: /* d9a68f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d9a691: call dword ptr [eax + 0x9c] */
  { uint32_t t = R32((uint32_t)(eax + 0x9cu)); esp -= 4; W32(esp, 0xd9a697u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9a697: /* d9a697: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* d9a69a: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9a69c: je 0xd9a6a5 */
  if (zf) goto L_d9a6a5;
L_d9a69e: /* d9a69e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9a6a0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9a6a2: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xd9a6a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9a6a5: /* d9a6a5: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* d9a6a8: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9a6aa: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* d9a6ad: je 0xd9a6b6 */
  if (zf) goto L_d9a6b6;
L_d9a6af: /* d9a6af: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9a6b1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9a6b3: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0xd9a6b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9a6b6: /* d9a6b6: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* d9a6b9: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9a6bb: mov dword ptr [esi + 0x4c], edi */
  W32((uint32_t)(esi + 0x4cu), edi);
/* d9a6be: je 0xd9a6c7 */
  if (zf) goto L_d9a6c7;
L_d9a6c0: /* d9a6c0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d9a6c2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9a6c4: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xd9a6c7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9a6c7: /* d9a6c7: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* d9a6ca: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d9a6cc: mov dword ptr [esi + 0x50], edi */
  W32((uint32_t)(esi + 0x50u), edi);
/* d9a6cf: je 0xd9a6d8 */
  if (zf) goto L_d9a6d8;
L_d9a6d1: /* d9a6d1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* d9a6d3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d9a6d5: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0xd9a6d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_d9a6d8: /* d9a6d8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9a6d9: mov ecx, esi */
  ecx = esi;
/* d9a6db: mov dword ptr [esi + 0x54], edi */
  W32((uint32_t)(esi + 0x54u), edi);
/* d9a6de: call 0xd8165e */
  esp -= 4; W32(esp, 0xd9a6e3u); SPILL(); f_d8165e(); if (g_unwind) return; RELOAD();
/* d9a6e3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9a6e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9a6e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9a6e8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9a6ef: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9a6f0: mov esp, ebp */
  esp = ebp;
/* d9a6f2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9a6f3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d9a6f6(void) {
  LOAD_REGS();
L_d9a6f6: /* d9a6f6: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d9a6f9: push 0xdc7d64 */
  { uint32_t v = 0xdc7d64u; esp -= 4; W32(esp, v); }
/* d9a6fe: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* d9a701: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d9a702: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* d9a705: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9a70au); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
  SPILL(); f_d9a70a(); return;
}

void f_d9a70a(void) {
  LOAD_REGS();
L_d9a70a: /* d9a70a: push 0xdc2c34 */
  { uint32_t v = 0xdc2c34u; esp -= 4; W32(esp, v); }
/* d9a70f: push 0xde2554 */
  { uint32_t v = 0xde2554u; esp -= 4; W32(esp, v); }
/* d9a714: call dword ptr [0xde8b64] */
  esp -= 4; W32(esp, 0xd9a71au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* d9a71a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d9a71d: xor edi, edi */
  edi = 0;
/* d9a71f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9a720: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9a721: call 0xdb7af0 */
  esp -= 4; W32(esp, 0xd9a726u); SPILL(); f_db7af0(); if (g_unwind) return; RELOAD();
L_d9a726: guest_badaddr(0xd9a726); return;
}

void f_d9a770(void) {
  LOAD_REGS();
L_d9a770: /* d9a770: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d9a771: mov ebp, esp */
  ebp = esp;
/* d9a773: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d9a775: push 0xdb9ca0 */
  { uint32_t v = 0xdb9ca0u; esp -= 4; W32(esp, v); }
/* d9a77a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d9a780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d9a781: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d9a788: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d9a78b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d9a78c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d9a78d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d9a78e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d9a791: mov esi, ecx */
  esi = ecx;
/* d9a793: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d9a79a: call 0xd8233d */
  esp -= 4; W32(esp, 0xd9a79fu); SPILL(); f_d8233d(); if (g_unwind) return; RELOAD();
/* d9a79f: mov ecx, esi */
  ecx = esi;
/* d9a7a1: call 0xd820f9 */
  esp -= 4; W32(esp, 0xd9a7a6u); SPILL(); f_d820f9(); if (g_unwind) return; RELOAD();
/* d9a7a6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d9a7a9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d9a7aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d9a7ab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d9a7b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d9a7b3: mov esp, ebp */
  esp = ebp;
/* d9a7b5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d9a7b6: ret  */
  esp += 4; SPILL(); return;
}
