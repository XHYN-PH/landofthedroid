#include "recomp.h"
#include "rec_mod.h"

void f_83ccb8(void) {
  LOAD_REGS();
L_83ccb8: /* 83ccb8: mov edx, dword ptr [ebp - 0x114] */
  edx = R32((uint32_t)(ebp + 0xfffffeecu));
/* 83ccbe: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 83ccc3: lea eax, [ebp - 0xd0] */
  eax = (uint32_t)(ebp + 0xffffff30u);
/* 83ccc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83ccca: mov dword ptr [ebp - 0xd0], edx */
  W32((uint32_t)(ebp + 0xffffff30u), edx);
/* 83ccd0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83ccd5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_83ccd5(); return;
}

void f_83ccd5(void) {
  LOAD_REGS();
L_83ccd5: /* 83ccd5: push 0xa15e90 */
  { uint32_t v = 0xa15e90u; esp -= 4; W32(esp, v); }
/* 83ccda: push 0xae3b48 */
  { uint32_t v = 0xae3b48u; esp -= 4; W32(esp, v); }
/* 83ccdf: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x83cce5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 83cce5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83cce8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83ccea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83ccec: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83ccf1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_83ccf1: guest_badaddr(0x83ccf1); return;
}

void f_83d070(void) {
  LOAD_REGS();
L_83d070: /* 83d070: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 83d071: mov ebp, esp */
  ebp = esp;
/* 83d073: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83d075: push 0x9d3440 */
  { uint32_t v = 0x9d3440u; esp -= 4; W32(esp, v); }
/* 83d07a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83d080: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d081: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83d088: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83d08b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 83d08e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83d08f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83d090: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d091: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 83d094: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d095: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 83d09c: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x83d0a2u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* 83d0a2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83d0a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83d0a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83d0a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83d0ae: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83d0af: mov esp, ebp */
  esp = ebp;
/* 83d0b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83d0b2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_83d0b5(void) {
  LOAD_REGS();
L_83d0b5: /* 83d0b5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83d0b8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 83d0bd: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 83d0c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83d0c1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 83d0c4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83d0c9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_83d0c9(); return;
}

void f_83d0c9(void) {
  LOAD_REGS();
L_83d0c9: /* 83d0c9: push 0xa15ec0 */
  { uint32_t v = 0xa15ec0u; esp -= 4; W32(esp, v); }
/* 83d0ce: push 0xae3d24 */
  { uint32_t v = 0xae3d24u; esp -= 4; W32(esp, v); }
/* 83d0d3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x83d0d9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 83d0d9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83d0dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83d0de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83d0e0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83d0e5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_83d0e5: guest_badaddr(0x83d0e5); return;
}

void f_83d110(void) {
  LOAD_REGS();
L_83d110: /* 83d110: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 83d111: mov ebp, esp */
  ebp = esp;
/* 83d113: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83d115: push 0x9d3450 */
  { uint32_t v = 0x9d3450u; esp -= 4; W32(esp, v); }
/* 83d11a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83d120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d121: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83d128: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83d12b: mov eax, dword ptr [0xcfa78c] */
  eax = R32((uint32_t)(0xcfa78cu));
/* 83d130: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83d131: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83d132: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d133: mov esi, ecx */
  esi = ecx;
/* 83d135: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83d137: xor edi, edi */
  edi = 0;
/* 83d139: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 83d13b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 83d13e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 83d141: je 0x83d177 */
  if (zf) goto L_83d177;
L_83d143: /* 83d143: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 83d146: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 83d148: je 0x83d177 */
  if (zf) goto L_83d177;
L_83d14a: /* 83d14a: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 83d150: mov dword ptr [eax + 0x4c0], edi */
  W32((uint32_t)(eax + 0x4c0u), edi);
/* 83d156: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 83d159: mov edx, dword ptr [eax + 0x540] */
  edx = R32((uint32_t)(eax + 0x540u));
/* 83d15f: cmp edx, 0x14 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 83d162: je 0x83d174 */
  if (zf) goto L_83d174;
L_83d164: /* 83d164: cmp edx, 0x15 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x15u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 83d167: je 0x83d174 */
  if (zf) goto L_83d174;
L_83d169: /* 83d169: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83d16b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 83d16d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d16e: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x83d174u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_83d174: /* 83d174: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
L_83d177: /* 83d177: mov ecx, esi */
  ecx = esi;
/* 83d179: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x83d17fu); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 83d17f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83d182: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83d183: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83d184: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83d18b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83d18c: mov esp, ebp */
  esp = ebp;
/* 83d18e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83d18f: ret  */
  esp += 4; SPILL(); return;
}

void f_83d190(void) {
  LOAD_REGS();
L_83d190: /* 83d190: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83d193: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 83d198: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 83d19b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83d19c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 83d19f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83d1a4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_83d1a4(); return;
}

void f_83d1a4(void) {
  LOAD_REGS();
L_83d1a4: /* 83d1a4: push 0xa15ef0 */
  { uint32_t v = 0xa15ef0u; esp -= 4; W32(esp, v); }
/* 83d1a9: push 0xae3d2c */
  { uint32_t v = 0xae3d2cu; esp -= 4; W32(esp, v); }
/* 83d1ae: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x83d1b4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 83d1b4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83d1b7: xor edi, edi */
  edi = 0;
/* 83d1b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d1ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d1bb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83d1c0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_83d1c0: guest_badaddr(0x83d1c0); return;
}

void f_83d200(void) {
  LOAD_REGS();
L_83d200: /* 83d200: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 83d201: mov ebp, esp */
  ebp = esp;
/* 83d203: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83d205: push 0x9d3460 */
  { uint32_t v = 0x9d3460u; esp -= 4; W32(esp, v); }
/* 83d20a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83d210: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d211: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83d218: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83d21b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83d21c: mov ebx, ecx */
  ebx = ecx;
/* 83d21e: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 83d221: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d223: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83d224: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d225: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 83d228: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 83d22f: jne 0x83d244 */
  if (!zf) goto L_83d244;
L_83d231: /* 83d231: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83d234: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83d23b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83d23c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83d23d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83d23e: mov esp, ebp */
  esp = ebp;
/* 83d240: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83d241: ret 8 */
  esp += 12; SPILL(); return;
L_83d244: /* 83d244: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 83d247: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 83d24d: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 83d250: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 83d252: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83d253: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d254: call dword ptr [eax + 0x88] */
  { uint32_t t = R32((uint32_t)(eax + 0x88u)); esp -= 4; W32(esp, 0x83d25au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83d25a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d25c: je 0x83d276 */
  if (zf) goto L_83d276;
L_83d25e: /* 83d25e: mov eax, 1 */
  eax = 0x1u;
/* 83d263: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83d266: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83d26d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83d26e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83d26f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83d270: mov esp, ebp */
  esp = ebp;
/* 83d272: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83d273: ret 8 */
  esp += 12; SPILL(); return;
L_83d276: /* 83d276: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 83d279: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 83d27f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d281: je 0x83d29f */
  if (zf) goto L_83d29f;
L_83d283: /* 83d283: mov ecx, dword ptr [ecx + 0x508] */
  ecx = R32((uint32_t)(ecx + 0x508u));
/* 83d289: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d28b: je 0x83d29f */
  if (zf) goto L_83d29f;
L_83d28d: /* 83d28d: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 83d293: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83d295: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d296: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83d297: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d298: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x83d29bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83d29b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d29d: jne 0x83d25e */
  if (!zf) goto L_83d25e;
L_83d29f: /* 83d29f: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 83d2a2: mov ecx, dword ptr [eax + 0x648] */
  ecx = R32((uint32_t)(eax + 0x648u));
/* 83d2a8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d2aa: je 0x83d2be */
  if (zf) goto L_83d2be;
L_83d2ac: /* 83d2ac: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 83d2b2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83d2b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d2b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83d2b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d2b7: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x83d2bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83d2ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d2bc: jne 0x83d25e */
  if (!zf) goto L_83d25e;
L_83d2be: /* 83d2be: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 83d2c1: mov ecx, dword ptr [eax + 0x784] */
  ecx = R32((uint32_t)(eax + 0x784u));
/* 83d2c7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d2c9: je 0x83d2dd */
  if (zf) goto L_83d2dd;
L_83d2cb: /* 83d2cb: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 83d2d1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83d2d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d2d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83d2d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d2d6: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x83d2d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83d2d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d2db: jne 0x83d25e */
  if (!zf) goto L_83d25e;
L_83d2dd: /* 83d2dd: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 83d2e0: mov eax, dword ptr [ecx + 0x33c] */
  eax = R32((uint32_t)(ecx + 0x33cu));
/* 83d2e6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83d2e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d2e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83d2ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d2eb: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x83d2eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83d2ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d2f0: jne 0x83d25e */
  if (!zf) goto L_83d25e;
L_83d2f6: /* 83d2f6: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 83d2f9: mov ecx, dword ptr [eax + 0x78c] */
  ecx = R32((uint32_t)(eax + 0x78cu));
/* 83d2ff: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d301: je 0x83d319 */
  if (zf) goto L_83d319;
L_83d303: /* 83d303: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 83d309: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83d30b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d30c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83d30d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d30e: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x83d311u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83d311: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d313: jne 0x83d25e */
  if (!zf) goto L_83d25e;
L_83d319: /* 83d319: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 83d31c: mov ecx, dword ptr [ecx + 0x33c] */
  ecx = R32((uint32_t)(ecx + 0x33cu));
/* 83d322: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d324: je 0x83d37c */
  if (zf) goto L_83d37c;
L_83d326: /* 83d326: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83d328: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83d329: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83d32a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d32b: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x83d32eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83d32e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d330: jne 0x83d25e */
  if (!zf) goto L_83d25e;
L_83d336: /* 83d336: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 83d339: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 83d33f: mov ecx, dword ptr [eax + 0x438] */
  ecx = R32((uint32_t)(eax + 0x438u));
/* 83d345: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d347: je 0x83d359 */
  if (zf) goto L_83d359;
L_83d349: /* 83d349: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83d34b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d34c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83d34d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d34e: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x83d351u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83d351: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d353: jne 0x83d25e */
  if (!zf) goto L_83d25e;
L_83d359: /* 83d359: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 83d35c: mov eax, dword ptr [eax + 0x33c] */
  eax = R32((uint32_t)(eax + 0x33cu));
/* 83d362: mov ecx, dword ptr [eax + 0x440] */
  ecx = R32((uint32_t)(eax + 0x440u));
/* 83d368: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d36a: je 0x83d37c */
  if (zf) goto L_83d37c;
L_83d36c: /* 83d36c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83d36e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d36f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83d370: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d371: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x83d374u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83d374: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d376: jne 0x83d25e */
  if (!zf) goto L_83d25e;
L_83d37c: /* 83d37c: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 83d37f: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 83d385: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 83d388: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 83d38b: lea ecx, [eax + 0x28] */
  ecx = (uint32_t)(eax + 0x28u);
/* 83d38e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83d38f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d390: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x83d392u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83d392: xor ecx, ecx */
  ecx = 0;
/* 83d394: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d396: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 83d399: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83d39a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83d39b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83d39c: mov eax, ecx */
  eax = ecx;
/* 83d39e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83d3a1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83d3a8: mov esp, ebp */
  esp = ebp;
/* 83d3aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83d3ab: ret 8 */
  esp += 12; SPILL(); return;
}

void f_83d3ae(void) {
  LOAD_REGS();
L_83d3ae: /* 83d3ae: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83d3b1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 83d3b6: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 83d3b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d3ba: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 83d3bd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83d3c2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_83d3c2(); return;
}

void f_83d3c2(void) {
  LOAD_REGS();
L_83d3c2: /* 83d3c2: push 0xa15f18 */
  { uint32_t v = 0xa15f18u; esp -= 4; W32(esp, v); }
/* 83d3c7: push 0xae3d34 */
  { uint32_t v = 0xae3d34u; esp -= 4; W32(esp, v); }
/* 83d3cc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x83d3d2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 83d3d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83d3d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83d3d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83d3d9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83d3deu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_83d3de: guest_badaddr(0x83d3de); return;
}

void f_83d460(void) {
  LOAD_REGS();
L_83d460: /* 83d460: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83d462: push 0x9d3479 */
  { uint32_t v = 0x9d3479u; esp -= 4; W32(esp, v); }
/* 83d467: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83d46d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d46e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83d475: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83d476: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83d477: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83d478: mov esi, ecx */
  esi = ecx;
/* 83d47a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d47b: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 83d47f: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x83d485u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 83d485: lea edi, [esi + 0x28] */
  edi = (uint32_t)(esi + 0x28u);
/* 83d488: mov ecx, edi */
  ecx = edi;
/* 83d48a: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 83d492: call dword ptr [0xcfa780] */
  esp -= 4; W32(esp, 0x83d498u); SPILL(); f_4e22ed(); if (g_unwind) return; /* Core!??0FOutputDevice@@QAE@XZ */ RELOAD();
/* 83d498: lea ebx, [esi + 0x2c] */
  ebx = (uint32_t)(esi + 0x2cu);
/* 83d49b: mov ecx, ebx */
  ecx = ebx;
/* 83d49d: call dword ptr [0xcfab04] */
  esp -= 4; W32(esp, 0x83d4a3u); SPILL(); f_4e2aef(); if (g_unwind) return; /* Core!??0FExec@@QAE@XZ */ RELOAD();
/* 83d4a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83d4a5: lea ecx, [esi + 0x58] */
  ecx = (uint32_t)(esi + 0x58u);
/* 83d4a8: mov dword ptr [esi], 0x9f8e38 */
  W32((uint32_t)(esi), 0x9f8e38u);
/* 83d4ae: mov dword ptr [edi], 0x9f8e28 */
  W32((uint32_t)(edi), 0x9f8e28u);
/* 83d4b4: mov dword ptr [ebx], 0x9f8e24 */
  W32((uint32_t)(ebx), 0x9f8e24u);
/* 83d4ba: call dword ptr [0xcfa37c] */
  esp -= 4; W32(esp, 0x83d4c0u); SPILL(); f_4e448f(); if (g_unwind) return; /* Core!??0FArray@@QAE@W4ENoInit@@@Z */ RELOAD();
/* 83d4c0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 83d4c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83d4c5: mov eax, esi */
  eax = esi;
/* 83d4c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83d4c8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83d4c9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83d4d0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83d4d3: ret  */
  esp += 4; SPILL(); return;
}

void f_83d500(void) {
  LOAD_REGS();
L_83d500: /* 83d500: mov eax, 1 */
  eax = 0x1u;
/* 83d505: ret 4 */
  esp += 8; SPILL(); return;
}

void f_83d520(void) {
  LOAD_REGS();
L_83d520: /* 83d520: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 83d521: mov ebp, esp */
  ebp = esp;
/* 83d523: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83d525: push 0x9d3490 */
  { uint32_t v = 0x9d3490u; esp -= 4; W32(esp, v); }
/* 83d52a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83d530: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d531: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83d538: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83d53b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 83d53e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d540: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83d541: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83d542: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d543: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 83d546: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 83d54d: je 0x83d60d */
  if (zf) goto L_83d60d;
L_83d553: /* 83d553: fld dword ptr [eax + 0x2d8] */
  { double v = F32((uint32_t)(eax + 0x2d8u)); FPUSH(v); }
/* 83d559: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 83d55c: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 83d562: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 83d565: fld dword ptr [eax + 0x2d4] */
  { double v = F32((uint32_t)(eax + 0x2d4u)); FPUSH(v); }
/* 83d56b: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 83d571: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 83d574: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83d577: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83d579: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 83d57f: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 83d582: fadd dword ptr [eax + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x174u)));
/* 83d588: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 83d58b: fadd dword ptr [eax + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x170u)));
/* 83d591: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 83d594: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83d597: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 83d59a: fsubr dword ptr [eax + 0x178] */
  ST0 = (F32((uint32_t)(eax + 0x178u))) - ST0;
/* 83d5a0: fld dword ptr [eax + 0x174] */
  { double v = F32((uint32_t)(eax + 0x174u)); FPUSH(v); }
/* 83d5a6: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 83d5a9: fld dword ptr [eax + 0x170] */
  { double v = F32((uint32_t)(eax + 0x170u)); FPUSH(v); }
/* 83d5af: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 83d5b2: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 83d5b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d5b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83d5b7: mov ecx, esi */
  ecx = esi;
/* 83d5b9: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83d5bc: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83d5bf: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 83d5c2: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x83d5c8u); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 83d5c8: mov eax, esi */
  eax = esi;
/* 83d5ca: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83d5cd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83d5d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83d5d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83d5d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83d5d7: mov esp, ebp */
  esp = ebp;
/* 83d5d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83d5da: ret 8 */
  esp += 12; SPILL(); return;
L_83d60d: /* 83d60d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 83d610: lea esi, [ecx + 0x28] */
  esi = (uint32_t)(ecx + 0x28u);
/* 83d613: mov ecx, 7 */
  ecx = 0x7u;
/* 83d618: mov edi, eax */
  edi = eax;
/* 83d61a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 83d61c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83d61f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83d620: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83d621: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83d628: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83d629: mov esp, ebp */
  esp = ebp;
/* 83d62b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83d62c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_83d5dd(void) {
  LOAD_REGS();
L_83d5dd: /* 83d5dd: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83d5e0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 83d5e5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 83d5e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d5e9: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 83d5ec: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83d5f1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_83d5f1(); return;
}

void f_83d5f1(void) {
  LOAD_REGS();
L_83d5f1: /* 83d5f1: push 0xa15f40 */
  { uint32_t v = 0xa15f40u; esp -= 4; W32(esp, v); }
/* 83d5f6: push 0xae3d74 */
  { uint32_t v = 0xae3d74u; esp -= 4; W32(esp, v); }
/* 83d5fb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x83d601u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 83d601: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83d604: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83d606: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83d608: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83d60du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 83d60d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 83d610: lea esi, [ecx + 0x28] */
  esi = (uint32_t)(ecx + 0x28u);
/* 83d613: mov ecx, 7 */
  ecx = 0x7u;
/* 83d618: mov edi, eax */
  edi = eax;
/* 83d61a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 83d61c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83d61f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83d620: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83d621: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83d628: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83d629: mov esp, ebp */
  esp = ebp;
/* 83d62b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83d62c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_83d680(void) {
  LOAD_REGS();
L_83d680: /* 83d680: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 83d681: mov ebp, esp */
  ebp = esp;
/* 83d683: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83d685: push 0x9d34a0 */
  { uint32_t v = 0x9d34a0u; esp -= 4; W32(esp, v); }
/* 83d68a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83d690: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d691: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83d698: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83d69b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 83d69e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d6a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83d6a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83d6a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d6a3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 83d6a6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 83d6ad: je 0x83d747 */
  if (zf) goto L_83d747;
L_83d6b3: /* 83d6b3: fld dword ptr [eax + 0x2d8] */
  { double v = F32((uint32_t)(eax + 0x2d8u)); FPUSH(v); }
/* 83d6b9: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 83d6bc: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 83d6c2: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 83d6c5: fld dword ptr [eax + 0x2d4] */
  { double v = F32((uint32_t)(eax + 0x2d4u)); FPUSH(v); }
/* 83d6cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83d6cc: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 83d6d2: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 83d6d5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83d6d6: mov ecx, esi */
  ecx = esi;
/* 83d6d8: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* 83d6db: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 83d6de: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 83d6e1: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 83d6e4: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 83d6e7: fchs  */
  ST0 = -ST0;
/* 83d6e9: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 83d6ec: fchs  */
  ST0 = -ST0;
/* 83d6ee: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 83d6f1: fchs  */
  ST0 = -ST0;
/* 83d6f3: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83d6f6: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83d6f9: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 83d6fc: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x83d702u); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 83d702: mov eax, esi */
  eax = esi;
/* 83d704: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83d707: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83d70e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83d70f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83d710: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83d711: mov esp, ebp */
  esp = ebp;
/* 83d713: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83d714: ret 8 */
  esp += 12; SPILL(); return;
L_83d747: /* 83d747: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 83d74a: lea esi, [ecx + 0x28] */
  esi = (uint32_t)(ecx + 0x28u);
/* 83d74d: mov ecx, 7 */
  ecx = 0x7u;
/* 83d752: mov edi, eax */
  edi = eax;
/* 83d754: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 83d756: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83d759: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83d75a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83d75b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83d762: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83d763: mov esp, ebp */
  esp = ebp;
/* 83d765: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83d766: ret 8 */
  esp += 12; SPILL(); return;
}

void f_83d717(void) {
  LOAD_REGS();
L_83d717: /* 83d717: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83d71a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 83d71f: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 83d722: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83d723: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 83d726: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83d72bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_83d72b(); return;
}

void f_83d72b(void) {
  LOAD_REGS();
L_83d72b: /* 83d72b: push 0xa15f98 */
  { uint32_t v = 0xa15f98u; esp -= 4; W32(esp, v); }
/* 83d730: push 0xae3d7c */
  { uint32_t v = 0xae3d7cu; esp -= 4; W32(esp, v); }
/* 83d735: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x83d73bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 83d73b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83d73e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83d740: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83d742: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83d747u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 83d747: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 83d74a: lea esi, [ecx + 0x28] */
  esi = (uint32_t)(ecx + 0x28u);
/* 83d74d: mov ecx, 7 */
  ecx = 0x7u;
/* 83d752: mov edi, eax */
  edi = eax;
/* 83d754: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 83d756: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83d759: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83d75a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83d75b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83d762: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83d763: mov esp, ebp */
  esp = ebp;
/* 83d765: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83d766: ret 8 */
  esp += 12; SPILL(); return;
}

void f_83d7b0(void) {
  LOAD_REGS();
L_83d7b0: /* 83d7b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 83d7b4: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83d7b9: mov ecx, eax */
  ecx = eax;
/* 83d7bb: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 83d7bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83d7c0: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 83d7c2: mov edx, eax */
  edx = eax;
/* 83d7c4: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 83d7c6: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 83d7c9: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 83d7cc: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83d7cf: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 83d7d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83d7d3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_83d7f0(void) {
  LOAD_REGS();
L_83d7f0: /* 83d7f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 83d7f1: mov ebp, esp */
  ebp = esp;
/* 83d7f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83d7f5: push 0x9d34b0 */
  { uint32_t v = 0x9d34b0u; esp -= 4; W32(esp, v); }
/* 83d7fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83d800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d801: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83d808: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83d80b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83d80c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83d80d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d80e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 83d811: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 83d814: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d815: mov esi, ecx */
  esi = ecx;
/* 83d817: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 83d81e: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x83d824u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* 83d824: lea eax, [esi + 0x28] */
  eax = (uint32_t)(esi + 0x28u);
/* 83d827: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d828: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d829: call 0x6cc3f1 */
  esp -= 4; W32(esp, 0x83d82eu); SPILL(); f_6cc3f1(); if (g_unwind) return; RELOAD();
/* 83d82e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83d831: add esi, 0x44 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 83d834: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83d835: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d836: call 0x6cb186 */
  esp -= 4; W32(esp, 0x83d83bu); SPILL(); f_6cb186(); if (g_unwind) return; RELOAD();
/* 83d83b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83d83e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83d841: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83d842: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83d843: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83d84a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83d84b: mov esp, ebp */
  esp = ebp;
/* 83d84d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83d84e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_83d851(void) {
  LOAD_REGS();
L_83d851: /* 83d851: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83d854: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 83d859: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 83d85c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83d85d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 83d860: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83d865u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_83d865(); return;
}

void f_83d865(void) {
  LOAD_REGS();
L_83d865: /* 83d865: push 0xa15fe8 */
  { uint32_t v = 0xa15fe8u; esp -= 4; W32(esp, v); }
/* 83d86a: push 0xae3d6c */
  { uint32_t v = 0xae3d6cu; esp -= 4; W32(esp, v); }
/* 83d86f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x83d875u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 83d875: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83d878: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83d87a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83d87c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83d881u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_83d881: guest_badaddr(0x83d881); return;
}

void f_83d8c0(void) {
  LOAD_REGS();
L_83d8c0: /* 83d8c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 83d8c1: mov ebp, esp */
  ebp = esp;
/* 83d8c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83d8c5: push 0x9d34c0 */
  { uint32_t v = 0x9d34c0u; esp -= 4; W32(esp, v); }
/* 83d8ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83d8d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d8d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83d8d8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83d8db: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 83d8de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83d8e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83d8e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83d8e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83d8e3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 83d8e6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 83d8ed: je 0x83d96a */
  if (zf) goto L_83d96a;
L_83d8ef: /* 83d8ef: fld dword ptr [eax + 0x2d4] */
  { double v = F32((uint32_t)(eax + 0x2d4u)); FPUSH(v); }
/* 83d8f5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83d8f8: fld dword ptr [eax + 0x2d8] */
  { double v = F32((uint32_t)(eax + 0x2d8u)); FPUSH(v); }
/* 83d8fe: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 83d905: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83d907: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 83d90e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83d910: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 83d917: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 83d919: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 83d91b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83d91d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 83d920: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83d922: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83d924: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x83d92au); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 83d92a: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 83d92d: fst qword ptr [ebp - 0x20] */
  WF64((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 83d930: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83d933: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 83d936: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83d939: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83d93c: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 83d940: mov eax, esp */
  eax = esp;
/* 83d942: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83d944: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 83d947: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83d94a: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83d94d: mov ecx, esi */
  ecx = esi;
/* 83d94f: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x83d955u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
L_83d955: /* 83d955: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83d958: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83d959: mov eax, esi */
  eax = esi;
/* 83d95b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83d95c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83d963: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83d964: mov esp, ebp */
  esp = ebp;
/* 83d966: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83d967: ret 8 */
  esp += 12; SPILL(); return;
L_83d96a: /* 83d96a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 83d96d: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 83d970: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83d971: mov ecx, esi */
  ecx = esi;
/* 83d973: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x83d979u); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 83d979: jmp 0x83d955 */
  goto L_83d955;
}

void f_83d97b(void) {
  LOAD_REGS();
L_83d97b: /* 83d97b: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83d97e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 83d983: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 83d986: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83d987: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 83d98a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83d98fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_83d98f(); return;
}

void f_83d98f(void) {
  LOAD_REGS();
L_83d98f: /* 83d98f: push 0xa16020 */
  { uint32_t v = 0xa16020u; esp -= 4; W32(esp, v); }
/* 83d994: push 0xae3d84 */
  { uint32_t v = 0xae3d84u; esp -= 4; W32(esp, v); }
/* 83d999: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x83d99fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 83d99f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83d9a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83d9a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83d9a6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83d9abu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_83d9ab: guest_badaddr(0x83d9ab); return;
}

void f_83d9f0(void) {
  LOAD_REGS();
L_83d9f0: /* 83d9f0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 83d9f4: fld dword ptr [eax + 0x2d8] */
  { double v = F32((uint32_t)(eax + 0x2d8u)); FPUSH(v); }
/* 83d9fa: mov ecx, dword ptr [eax + 0x2d4] */
  ecx = R32((uint32_t)(eax + 0x2d4u));
/* 83da00: fld dword ptr [eax + 0x2d4] */
  { double v = F32((uint32_t)(eax + 0x2d4u)); FPUSH(v); }
/* 83da06: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 83da0a: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 83da0d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83da0f: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 83da12: ret 8 */
  esp += 12; SPILL(); return;
}

void f_83da30(void) {
  LOAD_REGS();
L_83da30: /* 83da30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 83da31: mov ebp, esp */
  ebp = esp;
/* 83da33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83da35: push 0x9d34d0 */
  { uint32_t v = 0x9d34d0u; esp -= 4; W32(esp, v); }
/* 83da3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83da40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83da41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83da48: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83da4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83da4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83da4d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 83da50: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83da52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83da53: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 83da56: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 83da5d: je 0x83dc76 */
  if (zf) goto L_83dc76;
L_83da63: /* 83da63: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 83da69: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 83da6c: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 83da6f: fadd dword ptr [esi + 0x2d8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x2d8u)));
/* 83da75: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 83da77: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 83da79: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 83da7b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 83da7d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 83da7f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83da81: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83da83: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83da86: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83da88: jne 0x83dc76 */
  if (!zf) goto L_83dc76;
L_83da8e: /* 83da8e: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 83da94: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* 83da97: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 83da9d: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* 83daa0: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 83daa3: fadd dword ptr [esi + 0x2d4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x2d4u)));
/* 83daa9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 83daab: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 83daad: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 83daaf: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 83dab1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83dab3: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 83dab5: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 83dab7: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 83dab9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83dabb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83dabd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83dabf: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83dac2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83dac4: jne 0x83dc76 */
  if (!zf) goto L_83dc76;
L_83daca: /* 83daca: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 83dacd: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 83dad0: mov dword ptr [edi + 4], esi */
  W32((uint32_t)(edi + 0x4u), esi);
/* 83dad3: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 83dad9: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 83dadc: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 83dadf: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 83dae5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83dae6: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 83dae9: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 83daec: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 83daf2: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 83daf5: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83daf8: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 83dafb: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x83db01u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 83db01: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 83db03: lea ecx, [edi + 0x14] */
  ecx = (uint32_t)(edi + 0x14u);
/* 83db06: mov edx, ecx */
  edx = ecx;
/* 83db08: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 83db0a: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 83db0d: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 83db10: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83db13: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83db16: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 83db19: fcomp qword ptr [0xa0b5d8] */
  fpu_com(ST0, F64((uint32_t)(0xa0b5d8u)));
  FPOP();
/* 83db1f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83db21: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83db24: jp 0x83db65 */
  if (pf) goto L_83db65;
L_83db26: /* 83db26: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 83db2c: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 83db2f: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 83db32: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 83db35: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 83db38: mov eax, ecx */
  eax = ecx;
/* 83db3a: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 83db3c: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 83db3f: mov ecx, edx */
  ecx = edx;
/* 83db41: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 83db44: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 83db47: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83db4a: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 83db4d: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 83db50: xor eax, eax */
  eax = 0;
/* 83db52: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83db55: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83db5c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83db5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83db5e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83db5f: mov esp, ebp */
  esp = ebp;
/* 83db61: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83db62: ret 0x24 */
  esp += 40; SPILL(); return;
L_83db65: /* 83db65: fld dword ptr [edi + 0x1c] */
  { double v = F32((uint32_t)(edi + 0x1cu)); FPUSH(v); }
/* 83db68: fcomp qword ptr [0xa07e30] */
  fpu_com(ST0, F64((uint32_t)(0xa07e30u)));
  FPOP();
/* 83db6e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83db70: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83db73: jne 0x83dbb4 */
  if (!zf) goto L_83dbb4;
L_83db75: /* 83db75: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 83db7b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 83db7e: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 83db81: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 83db84: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 83db87: mov edx, eax */
  edx = eax;
/* 83db89: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 83db8c: mov eax, ecx */
  eax = ecx;
/* 83db8e: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 83db90: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 83db93: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 83db96: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83db99: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 83db9c: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 83db9f: xor eax, eax */
  eax = 0;
/* 83dba1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83dba4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83dbab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83dbac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83dbad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83dbae: mov esp, ebp */
  esp = ebp;
/* 83dbb0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83dbb1: ret 0x24 */
  esp += 40; SPILL(); return;
L_83dbb4: /* 83dbb4: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 83dbb7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 83dbb9: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 83dbbf: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 83dbc2: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 83dbc5: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 83dbc8: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 83dbcb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83dbcc: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 83dbcf: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 83dbd2: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 83dbd5: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 83dbd8: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x83dbdeu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 83dbde: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 83dbe1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83dbe2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83dbe3: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 83dbe6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83dbe7: call 0x6cb802 */
  esp -= 4; W32(esp, 0x83dbecu); SPILL(); f_6cb802(); if (g_unwind) return; RELOAD();
/* 83dbec: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 83dbf2: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 83dbf4: add edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 83dbf7: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 83dbfd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83dc00: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 83dc03: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 83dc09: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 83dc0c: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* 83dc0f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83dc11: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 83dc14: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 83dc17: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 83dc19: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 83dc1c: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 83dc1f: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 83dc22: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 83dc25: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 83dc28: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 83dc2b: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 83dc2e: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 83dc31: xor eax, eax */
  eax = 0;
/* 83dc33: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83dc36: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83dc3d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83dc3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83dc3f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83dc40: mov esp, ebp */
  esp = ebp;
/* 83dc42: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83dc43: ret 0x24 */
  esp += 40; SPILL(); return;
L_83dc76: /* 83dc76: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83dc79: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83dc7a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83dc7b: mov eax, 1 */
  eax = 0x1u;
/* 83dc80: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83dc87: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83dc88: mov esp, ebp */
  esp = ebp;
/* 83dc8a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83dc8b: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_83dc46(void) {
  LOAD_REGS();
L_83dc46: /* 83dc46: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83dc49: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 83dc4e: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 83dc51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83dc52: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 83dc55: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83dc5au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_83dc5a(); return;
}

void f_83dc5a(void) {
  LOAD_REGS();
L_83dc5a: /* 83dc5a: push 0xa16078 */
  { uint32_t v = 0xa16078u; esp -= 4; W32(esp, v); }
/* 83dc5f: push 0xae3d8c */
  { uint32_t v = 0xae3d8cu; esp -= 4; W32(esp, v); }
/* 83dc64: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x83dc6au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 83dc6a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83dc6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83dc6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83dc71: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83dc76u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 83dc76: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83dc79: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83dc7a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83dc7b: mov eax, 1 */
  eax = 0x1u;
/* 83dc80: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83dc87: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83dc88: mov esp, ebp */
  esp = ebp;
/* 83dc8a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83dc8b: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_83dd30(void) {
  LOAD_REGS();
L_83dd30: /* 83dd30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 83dd31: mov ebp, esp */
  ebp = esp;
/* 83dd33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83dd35: push 0x9d34e0 */
  { uint32_t v = 0x9d34e0u; esp -= 4; W32(esp, v); }
/* 83dd3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83dd40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83dd41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83dd48: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83dd4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83dd4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83dd4d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 83dd50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83dd51: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 83dd54: xor ebx, ebx */
  ebx = 0;
/* 83dd56: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 83dd58: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 83dd5b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 83dd5e: mov dword ptr [edi + 0x24], 0x3f800000 */
  W32((uint32_t)(edi + 0x24u), 0x3f800000u);
/* 83dd65: je 0x83ddb9 */
  if (zf) goto L_83ddb9;
L_83dd67: /* 83dd67: fld dword ptr [esi + 0x2d8] */
  { double v = F32((uint32_t)(esi + 0x2d8u)); FPUSH(v); }
/* 83dd6d: mov eax, dword ptr [esi + 0x2d4] */
  eax = R32((uint32_t)(esi + 0x2d4u));
/* 83dd73: fld dword ptr [esi + 0x2d4] */
  { double v = F32((uint32_t)(esi + 0x2d4u)); FPUSH(v); }
/* 83dd79: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 83dd7c: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 83dd7f: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 83dd81: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83dd84: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 83dd87: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 83dd89: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 83dd8c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83dd8e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83dd90: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 83dd93: fadd dword ptr [ebp - 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 83dd96: fst dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0);
/* 83dd99: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 83dd9f: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 83dda2: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 83dda4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83dda6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83dda9: jne 0x83ddd1 */
  if (!zf) goto L_83ddd1;
L_83ddab: /* 83ddab: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 83ddae: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 83ddb0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83ddb2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83ddb4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83ddb7: jne 0x83ddd3 */
  if (!zf) goto L_83ddd3;
L_83ddb9: /* 83ddb9: mov eax, 1 */
  eax = 0x1u;
/* 83ddbe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83ddc1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83ddc8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83ddc9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83ddca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83ddcb: mov esp, ebp */
  esp = ebp;
/* 83ddcd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83ddce: ret 0x34 */
  esp += 56; SPILL(); return;
L_83ddd1: /* 83ddd1: fstp st(0) */
  STI(0) = ST0; FPOP();
L_83ddd3: /* 83ddd3: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 83ddd9: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 83dddc: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 83dddf: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 83dde1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83dde3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83dde6: jp 0x83ddf8 */
  if (pf) goto L_83ddf8;
L_83dde8: /* 83dde8: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 83ddeb: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 83dded: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83ddef: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83ddf1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83ddf4: jp 0x83ddfa */
  if (pf) goto L_83ddfa;
L_83ddf6: /* 83ddf6: jmp 0x83ddb9 */
  goto L_83ddb9;
L_83ddf8: /* 83ddf8: fstp st(0) */
  STI(0) = ST0; FPOP();
L_83ddfa: /* 83ddfa: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 83ddfd: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 83de03: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 83de06: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 83de08: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83de0a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83de0d: jne 0x83de1f */
  if (!zf) goto L_83de1f;
L_83de0f: /* 83de0f: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 83de12: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 83de14: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83de16: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83de18: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83de1b: jne 0x83de21 */
  if (!zf) goto L_83de21;
L_83de1d: /* 83de1d: jmp 0x83ddb9 */
  goto L_83ddb9;
L_83de1f: /* 83de1f: fstp st(0) */
  STI(0) = ST0; FPOP();
L_83de21: /* 83de21: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 83de27: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 83de2a: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 83de2d: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 83de2f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83de31: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83de34: jp 0x83de49 */
  if (pf) goto L_83de49;
L_83de36: /* 83de36: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 83de39: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 83de3b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83de3d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83de3f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83de42: jp 0x83de4b */
  if (pf) goto L_83de4b;
L_83de44: /* 83de44: jmp 0x83ddb9 */
  goto L_83ddb9;
L_83de49: /* 83de49: fstp st(0) */
  STI(0) = ST0; FPOP();
L_83de4b: /* 83de4b: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 83de4e: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 83de54: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 83de57: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 83de5a: fcomp dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
  FPOP();
/* 83de5d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83de5f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83de62: jne 0x83de75 */
  if (!zf) goto L_83de75;
L_83de64: /* 83de64: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 83de67: fcomp dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
  FPOP();
/* 83de6a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83de6c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83de6f: je 0x83ddb9 */
  if (zf) goto L_83ddb9;
L_83de75: /* 83de75: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 83de7b: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 83de7e: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 83de81: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 83de84: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 83de87: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83de89: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83de8c: jp 0x83de9f */
  if (pf) goto L_83de9f;
L_83de8e: /* 83de8e: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 83de91: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 83de94: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83de96: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83de99: jnp 0x83ddb9 */
  if (!pf) goto L_83ddb9;
L_83de9f: /* 83de9f: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 83dea2: mov dword ptr [ebp + 0x30], 0 */
  W32((uint32_t)(ebp + 0x30u), 0x0u);
/* 83dea9: fcomp dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
  FPOP();
/* 83deac: mov dword ptr [ebp - 0x14], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x3f800000u);
/* 83deb3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83deb5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83deb8: jne 0x83df1d */
  if (!zf) goto L_83df1d;
L_83deba: /* 83deba: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 83debd: fcomp dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
  FPOP();
/* 83dec0: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83dec2: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83dec5: jp 0x83df1d */
  if (pf) goto L_83df1d;
L_83dec7: /* 83dec7: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 83deca: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 83decd: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 83ded0: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 83ded3: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 83ded5: fst dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0);
/* 83ded8: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83dede: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83dee0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83dee3: jne 0x83df59 */
  if (!zf) goto L_83df59;
L_83dee5: /* 83dee5: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 83dee8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83dee9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83deea: call 0x6c47be */
  esp -= 4; W32(esp, 0x83deefu); SPILL(); f_6c47be(); if (g_unwind) return; RELOAD();
/* 83deef: fstp dword ptr [ebp + 0x30] */
  WF32((uint32_t)(ebp + 0x30u), ST0); FPOP();
/* 83def2: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 83def9: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 83defc: lea edx, [edi + 0x14] */
  edx = (uint32_t)(edi + 0x14u);
/* 83deff: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 83df01: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 83df08: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 83df0b: mov dword ptr [ebp - 0x28], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x3f800000u);
/* 83df12: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83df15: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83df18: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83df1b: jmp 0x83df56 */
  goto L_83df56;
L_83df1d: /* 83df1d: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 83df20: fcomp dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
  FPOP();
/* 83df23: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83df25: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83df28: jp 0x83df59 */
  if (pf) goto L_83df59;
L_83df2a: /* 83df2a: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 83df2d: fcomp dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
  FPOP();
/* 83df30: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83df32: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83df35: jne 0x83df59 */
  if (!zf) goto L_83df59;
L_83df37: /* 83df37: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 83df3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83df3b: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 83df3e: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 83df41: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 83df44: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 83df46: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 83df49: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 83df4e: call 0x6cb8f2 */
  esp -= 4; W32(esp, 0x83df53u); SPILL(); f_6cb8f2(); if (g_unwind) return; RELOAD();
/* 83df53: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
L_83df56: /* 83df56: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_83df59: /* 83df59: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 83df5c: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 83df5f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83df61: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83df64: jp 0x83dfc9 */
  if (pf) goto L_83dfc9;
L_83df66: /* 83df66: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 83df69: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 83df6c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83df6e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83df71: jne 0x83dfc9 */
  if (!zf) goto L_83dfc9;
L_83df73: /* 83df73: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 83df76: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 83df79: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 83df7c: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 83df7f: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 83df81: fst dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0);
/* 83df84: fcomp dword ptr [ebp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x30u)));
  FPOP();
/* 83df87: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83df89: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83df8c: jne 0x83e004 */
  if (!zf) goto L_83e004;
L_83df8e: /* 83df8e: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 83df91: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 83df94: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83df95: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83df96: call 0x6c47be */
  esp -= 4; W32(esp, 0x83df9bu); SPILL(); f_6c47be(); if (g_unwind) return; RELOAD();
/* 83df9b: fstp dword ptr [ebp + 0x30] */
  WF32((uint32_t)(ebp + 0x30u), ST0); FPOP();
/* 83df9e: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 83dfa5: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 83dfa8: lea eax, [edi + 0x14] */
  eax = (uint32_t)(edi + 0x14u);
/* 83dfab: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83dfad: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 83dfb4: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 83dfb7: mov dword ptr [ebp - 0x28], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0xbf800000u);
/* 83dfbe: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83dfc1: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83dfc4: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83dfc7: jmp 0x83e001 */
  goto L_83e001;
L_83dfc9: /* 83dfc9: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 83dfcc: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 83dfcf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83dfd1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83dfd4: jne 0x83e004 */
  if (!zf) goto L_83e004;
L_83dfd6: /* 83dfd6: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 83dfd9: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 83dfdc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83dfde: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83dfe1: jp 0x83e004 */
  if (pf) goto L_83e004;
L_83dfe3: /* 83dfe3: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 83dfe6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 83dfe9: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 83dfec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83dfed: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 83dff0: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 83dff3: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 83dff5: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 83dff8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83dff9: call 0x6cb8f2 */
  esp -= 4; W32(esp, 0x83dffeu); SPILL(); f_6cb8f2(); if (g_unwind) return; RELOAD();
/* 83dffe: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
L_83e001: /* 83e001: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_83e004: /* 83e004: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 83e007: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 83e00a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83e00c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83e00f: je 0x83ddb9 */
  if (zf) goto L_83ddb9;
L_83e015: /* 83e015: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 83e018: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 83e01e: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 83e021: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 83e027: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 83e02a: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 83e02d: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 83e030: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 83e033: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 83e036: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* 83e039: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83e03b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83e03d: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 83e03f: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 83e041: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83e043: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83e046: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 83e048: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83e04a: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 83e04c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83e04e: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* 83e050: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 83e053: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83e055: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83e057: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 83e059: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 83e05b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83e05d: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83e060: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 83e063: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 83e065: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 83e068: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83e06a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83e06c: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 83e06f: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 83e072: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 83e075: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 83e078: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 83e07e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 83e080: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83e083: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 83e086: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 83e08c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83e08e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83e091: jp 0x83e1d0 */
  if (pf) goto L_83e1d0;
L_83e097: /* 83e097: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 83e09a: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 83e09d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83e09f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83e0a2: jne 0x83e1d0 */
  if (!zf) goto L_83e1d0;
L_83e0a8: /* 83e0a8: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 83e0ab: fcomp dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
  FPOP();
/* 83e0ae: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83e0b0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83e0b3: jp 0x83e1d0 */
  if (pf) goto L_83e1d0;
L_83e0b9: /* 83e0b9: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 83e0bc: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 83e0c2: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 83e0c5: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 83e0cb: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 83e0ce: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 83e0d4: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 83e0d7: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 83e0da: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 83e0dd: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 83e0e0: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 83e0e3: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 83e0e6: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 83e0ec: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 83e0ef: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83e0f1: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 83e0f4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83e0f6: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 83e0f9: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 83e0fb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83e0fd: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 83e100: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 83e102: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83e104: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 83e106: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83e108: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83e10a: fcomp dword ptr [0xa0e1e8] */
  fpu_com(ST0, F32((uint32_t)(0xa0e1e8u)));
  FPOP();
/* 83e110: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83e112: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83e115: jp 0x83ddb9 */
  if (pf) goto L_83ddb9;
L_83e11b: /* 83e11b: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 83e11e: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 83e121: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 83e124: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 83e127: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83e129: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 83e12c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83e12f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83e132: mov dword ptr [edi + 0x24], ebx */
  W32((uint32_t)(edi + 0x24u), ebx);
/* 83e135: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 83e13b: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 83e13e: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 83e141: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 83e147: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83e148: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 83e14b: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 83e14e: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 83e154: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 83e156: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 83e15c: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 83e15f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 83e162: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 83e165: mov dword ptr [ebp + 0x24], eax */
  W32((uint32_t)(ebp + 0x24u), eax);
/* 83e168: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 83e16b: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* 83e16e: mov dword ptr [ebp + 0x20], edx */
  W32((uint32_t)(ebp + 0x20u), edx);
/* 83e171: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x83e177u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 83e177: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83e179: lea edx, [edi + 0x14] */
  edx = (uint32_t)(edi + 0x14u);
/* 83e17c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 83e17e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83e181: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83e184: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83e187: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83e18a: mov dword ptr [edi + 4], esi */
  W32((uint32_t)(edi + 0x4u), esi);
/* 83e18d: mov dword ptr [edi + 0x20], ebx */
  W32((uint32_t)(edi + 0x20u), ebx);
/* 83e190: cmp dword ptr [esi + 0x2a4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x2a4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 83e196: je 0x83e1b8 */
  if (zf) goto L_83e1b8;
L_83e198: /* 83e198: mov ecx, dword ptr [esi + 0x2a0] */
  ecx = R32((uint32_t)(esi + 0x2a0u));
/* 83e19e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83e1a0: mov dword ptr [edi + 0x2c], edx */
  W32((uint32_t)(edi + 0x2cu), edx);
/* 83e1a3: xor eax, eax */
  eax = 0;
/* 83e1a5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83e1a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83e1af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83e1b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83e1b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83e1b2: mov esp, ebp */
  esp = ebp;
/* 83e1b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83e1b5: ret 0x34 */
  esp += 56; SPILL(); return;
L_83e1b8: /* 83e1b8: mov dword ptr [edi + 0x2c], ebx */
  W32((uint32_t)(edi + 0x2cu), ebx);
/* 83e1bb: xor eax, eax */
  eax = 0;
/* 83e1bd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83e1c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83e1c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83e1c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83e1c9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83e1ca: mov esp, ebp */
  esp = ebp;
/* 83e1cc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83e1cd: ret 0x34 */
  esp += 56; SPILL(); return;
L_83e1d0: /* 83e1d0: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83e1d3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83e1d9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83e1db: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83e1de: jnp 0x83ddb9 */
  if (!pf) goto L_83ddb9;
L_83e1e4: /* 83e1e4: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 83e1e7: fcomp dword ptr [0xa160e4] */
  fpu_com(ST0, F32((uint32_t)(0xa160e4u)));
  FPOP();
/* 83e1ed: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83e1ef: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83e1f2: jp 0x83e20d */
  if (pf) goto L_83e20d;
L_83e1f4: /* 83e1f4: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 83e1f7: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83e1fd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83e1ff: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83e202: jne 0x83e2fa */
  if (!zf) goto L_83e2fa;
L_83e208: /* 83e208: jmp 0x83ddb9 */
  goto L_83ddb9;
L_83e20d: /* 83e20d: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83e210: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83e213: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 83e216: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x83e21cu); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 83e21c: fst qword ptr [ebp - 0x2c] */
  WF64((uint32_t)(ebp + 0xffffffd4u), ST0);
/* 83e21f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83e222: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83e225: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83e228: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 83e22b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83e22c: fdivr qword ptr [0xa07e30] */
  ST0 = (F64((uint32_t)(0xa07e30u))) / ST0;
/* 83e232: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 83e235: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83e238: fsub dword ptr [ebp - 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 83e23b: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83e23e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 83e241: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83e242: call 0x6cb8f2 */
  esp -= 4; W32(esp, 0x83e247u); SPILL(); f_6cb8f2(); if (g_unwind) return; RELOAD();
/* 83e247: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 83e24a: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83e24d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83e250: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 83e253: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83e256: fchs  */
  ST0 = -ST0;
/* 83e258: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 83e25b: fcomp dword ptr [ebp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x30u)));
  FPOP();
/* 83e25e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83e260: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83e263: jne 0x83e2e9 */
  if (!zf) goto L_83e2e9;
L_83e269: /* 83e269: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 83e26c: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83e26f: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 83e272: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 83e275: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 83e278: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 83e27b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83e27d: mov dword ptr [ebp + 0x30], ecx */
  W32((uint32_t)(ebp + 0x30u), ecx);
/* 83e280: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83e283: lea ecx, [edi + 0x14] */
  ecx = (uint32_t)(edi + 0x14u);
/* 83e286: mov eax, ecx */
  eax = ecx;
/* 83e288: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 83e28b: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83e28e: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83e291: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83e294: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 83e297: fadd dword ptr [ebp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x24u)));
/* 83e29a: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 83e29d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83e29f: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 83e2a2: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 83e2a5: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* 83e2a8: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 83e2ab: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 83e2ae: fsub dword ptr [esi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x178u)));
/* 83e2b4: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 83e2b7: fsub dword ptr [esi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x174u)));
/* 83e2bd: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83e2c0: fsub dword ptr [esi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x170u)));
/* 83e2c6: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83e2c9: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 83e2cc: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 83e2ce: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83e2d1: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 83e2d4: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83e2d7: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 83e2da: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 83e2dd: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 83e2e0: mov dword ptr [edi + 0x1c], ebx */
  W32((uint32_t)(edi + 0x1cu), ebx);
/* 83e2e3: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x83e2e9u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
L_83e2e9: /* 83e2e9: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 83e2ec: fcomp dword ptr [ebp - 0x14] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffecu)));
  FPOP();
/* 83e2ef: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83e2f1: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83e2f4: je 0x83ddb9 */
  if (zf) goto L_83ddb9;
L_83e2fa: /* 83e2fa: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 83e2fd: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 83e302: fsub dword ptr [0xa0892c] */
  ST0 = ST0 - (F32((uint32_t)(0xa0892cu)));
/* 83e308: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83e309: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83e30a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 83e30d: call 0x6c44ee */
  esp -= 4; W32(esp, 0x83e312u); SPILL(); f_6c44ee(); if (g_unwind) return; RELOAD();
/* 83e312: fst dword ptr [edi + 0x24] */
  WF32((uint32_t)(edi + 0x24u), ST0);
/* 83e315: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 83e318: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 83e31b: mov dword ptr [ebp + 0x2c], eax */
  W32((uint32_t)(ebp + 0x2cu), eax);
/* 83e31e: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 83e321: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 83e324: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 83e327: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83e32a: mov dword ptr [edi + 4], esi */
  W32((uint32_t)(edi + 0x4u), esi);
/* 83e32d: mov dword ptr [edi + 0x20], ebx */
  W32((uint32_t)(edi + 0x20u), ebx);
/* 83e330: fstp dword ptr [ebp + 0x30] */
  WF32((uint32_t)(ebp + 0x30u), ST0); FPOP();
/* 83e333: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83e335: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83e336: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 83e339: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83e33a: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83e33d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83e33e: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 83e341: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83e344: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 83e347: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 83e34a: fstp dword ptr [ebp + 0x30] */
  WF32((uint32_t)(ebp + 0x30u), ST0); FPOP();
/* 83e34d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83e34f: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* 83e352: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 83e355: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 83e358: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83e35a: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 83e35d: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 83e360: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 83e363: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 83e366: fadd dword ptr [ebp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x24u)));
/* 83e369: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83e36c: xor eax, eax */
  eax = 0;
/* 83e36e: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 83e371: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 83e374: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 83e377: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83e37a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83e381: mov esp, ebp */
  esp = ebp;
/* 83e383: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83e384: ret 0x34 */
  esp += 56; SPILL(); return;
}

void f_83e387(void) {
  LOAD_REGS();
L_83e387: /* 83e387: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 83e38a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 83e38f: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 83e392: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83e393: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 83e396: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83e39bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_83e39b(); return;
}

void f_83e39b(void) {
  LOAD_REGS();
L_83e39b: /* 83e39b: push 0xa160b0 */
  { uint32_t v = 0xa160b0u; esp -= 4; W32(esp, v); }
/* 83e3a0: push 0xae3d94 */
  { uint32_t v = 0xae3d94u; esp -= 4; W32(esp, v); }
/* 83e3a5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x83e3abu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 83e3ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83e3ae: xor ebx, ebx */
  ebx = 0;
/* 83e3b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83e3b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83e3b2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83e3b7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_83e3b7: guest_badaddr(0x83e3b7); return;
}

void f_83e570(void) {
  LOAD_REGS();
L_83e570: /* 83e570: xor eax, eax */
  eax = 0;
/* 83e572: ret 4 */
  esp += 8; SPILL(); return;
}

void f_83e590(void) {
  LOAD_REGS();
L_83e590: /* 83e590: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 83e594: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83e595: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 83e599: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83e59a: add esi, 0x418 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x418u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 83e5a0: mov ecx, 7 */
  ecx = 0x7u;
/* 83e5a5: mov edi, eax */
  edi = eax;
/* 83e5a7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 83e5a9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83e5aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83e5ab: ret 8 */
  esp += 12; SPILL(); return;
}

void f_83e5c0(void) {
  LOAD_REGS();
L_83e5c0: /* 83e5c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 83e5c1: mov ebp, esp */
  ebp = esp;
/* 83e5c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83e5c5: push 0x9d34f0 */
  { uint32_t v = 0x9d34f0u; esp -= 4; W32(esp, v); }
/* 83e5ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83e5d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83e5d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83e5d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83e5db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83e5dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83e5dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83e5de: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 83e5e1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 83e5e8: mov dword ptr [0xcc8780], 0 */
  W32((uint32_t)(0xcc8780u), 0x0u);
/* 83e5f2: call dword ptr [0xcfa22c] */
  esp -= 4; W32(esp, 0x83e5f8u); SPILL(); f_4e2a9a(); if (g_unwind) return; /* Core!?Destroy@UObject@@UAEXXZ */ RELOAD();
/* 83e5f8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83e5fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83e5fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83e5fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83e604: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83e605: mov esp, ebp */
  esp = ebp;
/* 83e607: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83e608: ret  */
  esp += 4; SPILL(); return;
}

void f_83e609(void) {
  LOAD_REGS();
L_83e609: /* 83e609: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83e60c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 83e611: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 83e614: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83e615: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 83e618: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83e61du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_83e61d(); return;
}

void f_83e61d(void) {
  LOAD_REGS();
L_83e61d: /* 83e61d: push 0xa160e8 */
  { uint32_t v = 0xa160e8u; esp -= 4; W32(esp, v); }
/* 83e622: push 0xae3de8 */
  { uint32_t v = 0xae3de8u; esp -= 4; W32(esp, v); }
/* 83e627: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x83e62du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 83e62d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83e630: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83e632: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83e634: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83e639u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_83e639: guest_badaddr(0x83e639); return;
}

void f_83e660(void) {
  LOAD_REGS();
L_83e660: /* 83e660: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 83e661: mov ebp, esp */
  ebp = esp;
/* 83e663: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83e665: push 0x9d3500 */
  { uint32_t v = 0x9d3500u; esp -= 4; W32(esp, v); }
/* 83e66a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83e670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83e671: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83e678: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83e67b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 83e67e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 83e681: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83e682: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 83e683: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83e684: mov esi, ecx */
  esi = ecx;
/* 83e686: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 83e689: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 83e68c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83e68d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 83e690: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 83e697: jne 0x83e6ae */
  if (!zf) goto L_83e6ae;
L_83e699: /* 83e699: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 83e69c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 83e69d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83e69f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 83e6a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83e6a3: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 83e6a8: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x83e6aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_83e6ae: /* 83e6ae: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 83e6b0: mov ecx, esi */
  ecx = esi;
/* 83e6b2: call dword ptr [edx + 0x190] */
  { uint32_t t = R32((uint32_t)(edx + 0x190u)); esp -= 4; W32(esp, 0x83e6b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83e6b8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83e6bb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83e6bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83e6bd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83e6c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83e6c5: mov esp, ebp */
  esp = ebp;
/* 83e6c7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83e6c8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_83e6cb(void) {
  LOAD_REGS();
L_83e6cb: /* 83e6cb: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83e6ce: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 83e6d3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 83e6d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83e6d7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 83e6da: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83e6dfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_83e6df(); return;
}

void f_83e6df(void) {
  LOAD_REGS();
L_83e6df: /* 83e6df: push 0xa16130 */
  { uint32_t v = 0xa16130u; esp -= 4; W32(esp, v); }
/* 83e6e4: push 0xae3e28 */
  { uint32_t v = 0xae3e28u; esp -= 4; W32(esp, v); }
/* 83e6e9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x83e6efu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 83e6ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83e6f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83e6f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83e6f6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83e6fbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_83e6fb: guest_badaddr(0x83e6fb); return;
}

void f_83e730(void) {
  LOAD_REGS();
L_83e730: /* 83e730: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 83e731: mov ebp, esp */
  ebp = esp;
/* 83e733: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83e735: push 0x9d3510 */
  { uint32_t v = 0x9d3510u; esp -= 4; W32(esp, v); }
/* 83e73a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83e740: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83e741: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83e748: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83e74b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83e74c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83e74d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 83e750: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 83e753: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 83e75a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 83e75d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 83e75e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83e75f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 83e762: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 83e765: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 83e768: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83e769: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 83e76e: mov edi, ecx */
  edi = ecx;
/* 83e770: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 83e773: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83e774: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 83e77b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x83e77eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83e77e: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 83e781: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 83e782: mov eax, edx */
  eax = edx;
/* 83e784: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 83e787: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 83e78a: jne 0x83e7a2 */
  if (!zf) goto L_83e7a2;
L_83e78c: /* 83e78c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 83e78f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 83e790: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83e792: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 83e795: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 83e79b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83e79c: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x83e7a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_83e7a2: /* 83e7a2: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 83e7a5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 83e7a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83e7a8: mov ecx, edi */
  ecx = edi;
/* 83e7aa: call dword ptr [eax + 0x194] */
  { uint32_t t = R32((uint32_t)(eax + 0x194u)); esp -= 4; W32(esp, 0x83e7b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83e7b0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83e7b3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83e7b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83e7b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83e7bc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83e7bd: mov esp, ebp */
  esp = ebp;
/* 83e7bf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83e7c0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_83e7c3(void) {
  LOAD_REGS();
L_83e7c3: /* 83e7c3: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83e7c6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 83e7cb: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 83e7ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83e7cf: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 83e7d2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83e7d7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_83e7d7(); return;
}

void f_83e7d7(void) {
  LOAD_REGS();
L_83e7d7: /* 83e7d7: push 0xa16180 */
  { uint32_t v = 0xa16180u; esp -= 4; W32(esp, v); }
/* 83e7dc: push 0xae3e30 */
  { uint32_t v = 0xae3e30u; esp -= 4; W32(esp, v); }
/* 83e7e1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x83e7e7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 83e7e7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83e7ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83e7ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83e7ee: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83e7f3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_83e7f3: guest_badaddr(0x83e7f3); return;
}

void f_83e840(void) {
  LOAD_REGS();
L_83e840: /* 83e840: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 83e841: mov ebp, esp */
  ebp = esp;
/* 83e843: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83e845: push 0x9d3520 */
  { uint32_t v = 0x9d3520u; esp -= 4; W32(esp, v); }
/* 83e84a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83e850: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83e851: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83e858: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83e85b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83e85c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83e85d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 83e860: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 83e863: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 83e86a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 83e86d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 83e86e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83e86f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 83e872: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 83e875: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 83e878: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83e879: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 83e87e: mov edi, ecx */
  edi = ecx;
/* 83e880: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 83e883: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83e884: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 83e88b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x83e88eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83e88e: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 83e891: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 83e892: mov eax, edx */
  eax = edx;
/* 83e894: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 83e897: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 83e89a: jne 0x83e8b2 */
  if (!zf) goto L_83e8b2;
L_83e89c: /* 83e89c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 83e89f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 83e8a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83e8a2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 83e8a5: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 83e8ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83e8ac: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x83e8b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_83e8b2: /* 83e8b2: mov ecx, dword ptr [edi + 0x434] */
  ecx = R32((uint32_t)(edi + 0x434u));
/* 83e8b8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83e8ba: je 0x83e8de */
  if (zf) goto L_83e8de;
L_83e8bc: /* 83e8bc: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83e8bf: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 83e8c5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83e8c7: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83e8ca: jnp 0x83e8de */
  if (!pf) goto L_83e8de;
L_83e8cc: /* 83e8cc: mov eax, dword ptr [edi + 0xb0] */
  eax = R32((uint32_t)(edi + 0xb0u));
/* 83e8d2: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 83e8d5: fadd dword ptr [eax + 0x3ac] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x3acu)));
/* 83e8db: fstp qword ptr [ecx + 0x10] */
  WF64((uint32_t)(ecx + 0x10u), ST0); FPOP();
L_83e8de: /* 83e8de: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 83e8e0: mov ecx, edi */
  ecx = edi;
/* 83e8e2: call dword ptr [edx + 0x198] */
  { uint32_t t = R32((uint32_t)(edx + 0x198u)); esp -= 4; W32(esp, 0x83e8e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83e8e8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 83e8eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83e8ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83e8ed: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83e8f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83e8f5: mov esp, ebp */
  esp = ebp;
/* 83e8f7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83e8f8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_83e8fb(void) {
  LOAD_REGS();
L_83e8fb: /* 83e8fb: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83e8fe: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 83e903: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 83e906: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83e907: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 83e90a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83e90fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_83e90f(); return;
}

void f_83e90f(void) {
  LOAD_REGS();
L_83e90f: /* 83e90f: push 0xa161d0 */
  { uint32_t v = 0xa161d0u; esp -= 4; W32(esp, v); }
/* 83e914: push 0xae3e38 */
  { uint32_t v = 0xae3e38u; esp -= 4; W32(esp, v); }
/* 83e919: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x83e91fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 83e91f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83e922: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83e924: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83e926: call 0x99caf8 */
  esp -= 4; W32(esp, 0x83e92bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_83e92b: guest_badaddr(0x83e92b); return;
}

void f_83e970(void) {
  LOAD_REGS();
L_83e970: /* 83e970: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 83e974: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83e977: je 0x83e981 */
  if (zf) goto L_83e981;
L_83e979: /* 83e979: mov eax, 1 */
  eax = 0x1u;
/* 83e97e: ret 8 */
  esp += 12; SPILL(); return;
L_83e981: /* 83e981: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* 83e985: jmp 0x6c9462 */
  SPILL(); f_6c9462(); return;
}

void f_83e9a0(void) {
  LOAD_REGS();
L_83e9a0: /* 83e9a0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 83e9a4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 83e9a8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 83e9ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83e9ad: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83e9b0: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 83e9b3: mov esi, 4 */
  esi = 0x4u;
/* 83e9b8: jmp 0x83e9c0 */
  goto L_83e9c0;
L_83e9c0: /* 83e9c0: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 83e9c3: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83e9c6: fmul dword ptr [eax - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff4u)));
/* 83e9c9: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 83e9cc: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 83e9cd: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 83e9d0: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 83e9d3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83e9d5: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 83e9d8: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* 83e9db: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83e9dd: fld dword ptr [eax - 0x18] */
  { double v = F32((uint32_t)(eax + 0xffffffe8u)); FPUSH(v); }
/* 83e9e0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 83e9e2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83e9e4: fstp dword ptr [edx - 0x18] */
  WF32((uint32_t)(edx + 0xffffffe8u), ST0); FPOP();
/* 83e9e7: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* 83e9ea: fmul dword ptr [eax - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff4u)));
/* 83e9ed: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 83e9f0: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 83e9f3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83e9f5: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 83e9f8: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* 83e9fb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83e9fd: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 83ea00: fmul dword ptr [eax - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe8u)));
/* 83ea03: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83ea05: fstp dword ptr [edx - 0x14] */
  WF32((uint32_t)(edx + 0xffffffecu), ST0); FPOP();
/* 83ea08: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* 83ea0b: fmul dword ptr [eax - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff4u)));
/* 83ea0e: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 83ea11: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 83ea14: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83ea16: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 83ea19: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* 83ea1c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83ea1e: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 83ea21: fmul dword ptr [eax - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe8u)));
/* 83ea24: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83ea26: fstp dword ptr [edx - 0x10] */
  WF32((uint32_t)(edx + 0xfffffff0u), ST0); FPOP();
/* 83ea29: fld dword ptr [ecx + 0x3c] */
  { double v = F32((uint32_t)(ecx + 0x3cu)); FPUSH(v); }
/* 83ea2c: fmul dword ptr [eax - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff4u)));
/* 83ea2f: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 83ea32: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 83ea35: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83ea37: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 83ea3a: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* 83ea3d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83ea3f: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 83ea42: fmul dword ptr [eax - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe8u)));
/* 83ea45: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83ea47: fstp dword ptr [edx - 0xc] */
  WF32((uint32_t)(edx + 0xfffffff4u), ST0); FPOP();
/* 83ea4a: jne 0x83e9c0 */
  if (!zf) goto L_83e9c0;
L_83ea50: /* 83ea50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83ea51: ret  */
  esp += 4; SPILL(); return;
}

void f_83e9ba(void) {
  LOAD_REGS();
L_83e9ba: /* 83e9ba: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_83e9c0: /* 83e9c0: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 83e9c3: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83e9c6: fmul dword ptr [eax - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff4u)));
/* 83e9c9: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 83e9cc: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 83e9cd: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 83e9d0: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 83e9d3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83e9d5: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 83e9d8: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* 83e9db: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83e9dd: fld dword ptr [eax - 0x18] */
  { double v = F32((uint32_t)(eax + 0xffffffe8u)); FPUSH(v); }
/* 83e9e0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 83e9e2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83e9e4: fstp dword ptr [edx - 0x18] */
  WF32((uint32_t)(edx + 0xffffffe8u), ST0); FPOP();
/* 83e9e7: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* 83e9ea: fmul dword ptr [eax - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff4u)));
/* 83e9ed: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 83e9f0: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 83e9f3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83e9f5: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 83e9f8: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* 83e9fb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83e9fd: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 83ea00: fmul dword ptr [eax - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe8u)));
/* 83ea03: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83ea05: fstp dword ptr [edx - 0x14] */
  WF32((uint32_t)(edx + 0xffffffecu), ST0); FPOP();
/* 83ea08: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* 83ea0b: fmul dword ptr [eax - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff4u)));
/* 83ea0e: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 83ea11: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 83ea14: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83ea16: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 83ea19: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* 83ea1c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83ea1e: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 83ea21: fmul dword ptr [eax - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe8u)));
/* 83ea24: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83ea26: fstp dword ptr [edx - 0x10] */
  WF32((uint32_t)(edx + 0xfffffff0u), ST0); FPOP();
/* 83ea29: fld dword ptr [ecx + 0x3c] */
  { double v = F32((uint32_t)(ecx + 0x3cu)); FPUSH(v); }
/* 83ea2c: fmul dword ptr [eax - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff4u)));
/* 83ea2f: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 83ea32: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 83ea35: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83ea37: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 83ea3a: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* 83ea3d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83ea3f: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 83ea42: fmul dword ptr [eax - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe8u)));
/* 83ea45: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83ea47: fstp dword ptr [edx - 0xc] */
  WF32((uint32_t)(edx + 0xfffffff4u), ST0); FPOP();
/* 83ea4a: jne 0x83e9c0 */
  if (!zf) goto L_83e9c0;
L_83ea50: /* 83ea50: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83ea51: ret  */
  esp += 4; SPILL(); return;
}

void f_83ea90(void) {
  LOAD_REGS();
L_83ea90: /* 83ea90: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 83ea94: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* 83ea97: mov byte ptr [edx + 0x1c], 0 */
  W8((uint32_t)(edx + 0x1cu), 0x0u);
/* 83ea9b: fcomp dword ptr [0xa16220] */
  fpu_com(ST0, F32((uint32_t)(0xa16220u)));
  FPOP();
/* 83eaa1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83eaa3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83eaa6: jp 0x83eaac */
  if (pf) goto L_83eaac;
L_83eaa8: /* 83eaa8: mov byte ptr [edx + 0x1c], 1 */
  W8((uint32_t)(edx + 0x1cu), 0x1u);
L_83eaac: /* 83eaac: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 83eaaf: fadd dword ptr [0xa0892c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0892cu)));
/* 83eab5: fcom dword ptr [edx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edx + 0xcu)));
/* 83eab8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83eaba: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83eabd: jp 0x83eac3 */
  if (pf) goto L_83eac3;
L_83eabf: /* 83eabf: or byte ptr [edx + 0x1c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x1cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(edx + 0x1cu), r);
  }
L_83eac3: /* 83eac3: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 83eac6: fcomp dword ptr [0xa16220] */
  fpu_com(ST0, F32((uint32_t)(0xa16220u)));
  FPOP();
/* 83eacc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83eace: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83ead1: jp 0x83ead7 */
  if (pf) goto L_83ead7;
L_83ead3: /* 83ead3: or byte ptr [edx + 0x1c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x1cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(edx + 0x1cu), r);
  }
L_83ead7: /* 83ead7: fcomp dword ptr [edx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x10u)));
  FPOP();
/* 83eada: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83eadc: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83eadf: jp 0x83eae5 */
  if (pf) goto L_83eae5;
L_83eae1: /* 83eae1: or byte ptr [edx + 0x1c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x1cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(edx + 0x1cu), r);
  }
L_83eae5: /* 83eae5: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 83eae8: fsub dword ptr [0xa0892c] */
  ST0 = ST0 - (F32((uint32_t)(0xa0892cu)));
/* 83eaee: fcomp dword ptr [edx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x14u)));
  FPOP();
/* 83eaf1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83eaf3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83eaf6: jne 0x83eafc */
  if (!zf) goto L_83eafc;
L_83eaf8: /* 83eaf8: or byte ptr [edx + 0x1c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x1cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(edx + 0x1cu), r);
  }
L_83eafc: /* 83eafc: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 83eaff: fadd dword ptr [0xa0892c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0892cu)));
/* 83eb05: fcomp dword ptr [edx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x14u)));
  FPOP();
/* 83eb08: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 83eb0a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 83eb0d: jp 0x83eb13 */
  if (pf) goto L_83eb13;
L_83eb0f: /* 83eb0f: or byte ptr [edx + 0x1c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x1cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(edx + 0x1cu), r);
  }
L_83eb13: /* 83eb13: ret 4 */
  esp += 8; SPILL(); return;
}

void f_83eb50(void) {
  LOAD_REGS();
L_83eb50: /* 83eb50: mov eax, ecx */
  eax = ecx;
/* 83eb52: ret  */
  esp += 4; SPILL(); return;
}

void f_83eb70(void) {
  LOAD_REGS();
L_83eb70: /* 83eb70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 83eb74: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 83eb76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83eb77: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x83eb7du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 83eb7d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_83eb90(void) {
  LOAD_REGS();
L_83eb90: /* 83eb90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83eb91: mov esi, ecx */
  esi = ecx;
/* 83eb93: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x83eb99u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 83eb99: mov eax, esi */
  eax = esi;
/* 83eb9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83eb9c: ret  */
  esp += 4; SPILL(); return;
}

void f_83ebb0(void) {
  LOAD_REGS();
L_83ebb0: /* 83ebb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 83ebb4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83ebb6: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 83ebb9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83ebbb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_83ebd0(void) {
  LOAD_REGS();
L_83ebd0: /* 83ebd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 83ebd4: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 83ebd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83ebd7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x83ebddu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 83ebdd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_83ebf0(void) {
  LOAD_REGS();
L_83ebf0: /* 83ebf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83ebf1: mov esi, ecx */
  esi = ecx;
/* 83ebf3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x83ebf9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 83ebf9: mov eax, esi */
  eax = esi;
/* 83ebfb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83ebfc: ret  */
  esp += 4; SPILL(); return;
}

void f_83ec10(void) {
  LOAD_REGS();
L_83ec10: /* 83ec10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 83ec14: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83ec16: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 83ec19: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83ec1b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_83ec30(void) {
  LOAD_REGS();
L_83ec30: /* 83ec30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 83ec34: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 83ec36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83ec37: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x83ec3du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 83ec3d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_83ec50(void) {
  LOAD_REGS();
L_83ec50: /* 83ec50: mov eax, 1 */
  eax = 0x1u;
/* 83ec55: ret  */
  esp += 4; SPILL(); return;
}

void f_83ec70(void) {
  LOAD_REGS();
L_83ec70: /* 83ec70: mov eax, 1 */
  eax = 0x1u;
/* 83ec75: ret  */
  esp += 4; SPILL(); return;
}

void f_83ec90(void) {
  LOAD_REGS();
L_83ec90: /* 83ec90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83ec91: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 83ec95: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 83ec97: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 83ec99: mov ecx, esi */
  ecx = esi;
/* 83ec9b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x83eca1u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 83eca1: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 83eca4: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83eca6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83eca7: ret  */
  esp += 4; SPILL(); return;
}

void f_83ecc0(void) {
  LOAD_REGS();
L_83ecc0: /* 83ecc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83ecc2: push 0x9d3557 */
  { uint32_t v = 0x9d3557u; esp -= 4; W32(esp, v); }
/* 83ecc7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83eccd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83ecce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83ecd5: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83ecd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83ecd9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 83ecda: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83ecdb: mov ebx, ecx */
  ebx = ecx;
/* 83ecdd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83ecde: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 83ece2: mov dword ptr [esp + 0x68], 1 */
  W32((uint32_t)(esp + 0x68u), 0x1u);
/* 83ecea: lea esi, [ebx + 0xbc] */
  esi = (uint32_t)(ebx + 0xbcu);
/* 83ecf0: mov edi, 6 */
  edi = 0x6u;
L_83ecf5: /* 83ecf5: mov ecx, esi */
  ecx = esi;
/* 83ecf7: call dword ptr [0xcfa36c] */
  esp -= 4; W32(esp, 0x83ecfdu); SPILL(); f_4e159b(); if (g_unwind) return; /* Core!??0FPlane@@QAE@XZ */ RELOAD();
/* 83ecfd: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 83ed00: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 83ed01: jne 0x83ecf5 */
  if (!zf) goto L_83ecf5;
L_83ed03: /* 83ed03: fld dword ptr [esp + 0x74] */
  { double v = F32((uint32_t)(esp + 0x74u)); FPUSH(v); }
/* 83ed07: mov ebp, dword ptr [esp + 0x70] */
  ebp = R32((uint32_t)(esp + 0x70u));
/* 83ed0b: fstp qword ptr [ebx + 0x10] */
  WF64((uint32_t)(ebx + 0x10u), ST0); FPOP();
/* 83ed0e: xor eax, eax */
  eax = 0;
/* 83ed10: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* 83ed13: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* 83ed16: mov dword ptr [ebx + 0xc], eax */
  W32((uint32_t)(ebx + 0xcu), eax);
/* 83ed19: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 83ed1b: mov eax, dword ptr [ebp + 0x340] */
  eax = R32((uint32_t)(ebp + 0x340u));
/* 83ed21: mov dword ptr [ebx + 0x18], eax */
  W32((uint32_t)(ebx + 0x18u), eax);
/* 83ed24: mov cl, byte ptr [ebp + 0x33c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x33cu))) & 0xffu);
/* 83ed2a: mov byte ptr [ebx + 0x20], cl */
  W8((uint32_t)(ebx + 0x20u), (ecx & 0xffu));
/* 83ed2d: mov dl, byte ptr [ebp + 0x33d] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x33du))) & 0xffu);
/* 83ed33: lea eax, [ebx + 0x24] */
  eax = (uint32_t)(ebx + 0x24u);
/* 83ed36: mov edi, eax */
  edi = eax;
/* 83ed38: mov byte ptr [ebx + 0x21], dl */
  W8((uint32_t)(ebx + 0x21u), (edx & 0xffu));
/* 83ed3b: lea esi, [ebp + 0x47c] */
  esi = (uint32_t)(ebp + 0x47cu);
/* 83ed41: mov ecx, 0x10 */
  ecx = 0x10u;
/* 83ed46: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 83ed48: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 83ed4c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83ed4d: mov ecx, eax */
  ecx = eax;
/* 83ed4f: mov byte ptr [esp + 0x6c], 2 */
  W8((uint32_t)(esp + 0x6cu), 0x2u);
/* 83ed54: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x83ed5au); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 83ed5a: mov esi, eax */
  esi = eax;
/* 83ed5c: lea edi, [ebx + 0x64] */
  edi = (uint32_t)(ebx + 0x64u);
/* 83ed5f: mov ecx, 0x10 */
  ecx = 0x10u;
/* 83ed64: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 83ed66: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* 83ed6a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x83ed70u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 83ed70: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 83ed74: lea esi, [ebp + 0x418] */
  esi = (uint32_t)(ebp + 0x418u);
/* 83ed7a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83ed7b: mov ecx, esi */
  ecx = esi;
/* 83ed7d: call dword ptr [0xcfa34c] */
  esp -= 4; W32(esp, 0x83ed83u); SPILL(); f_4e3139(); if (g_unwind) return; /* Core!?GetCenter@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 83ed83: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83ed85: lea ecx, [ebx + 0xa4] */
  ecx = (uint32_t)(ebx + 0xa4u);
/* 83ed8b: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83ed8d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83ed90: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83ed93: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83ed96: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83ed99: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 83ed9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83ed9e: mov ecx, esi */
  ecx = esi;
/* 83eda0: call dword ptr [0xcfa348] */
  esp -= 4; W32(esp, 0x83eda6u); SPILL(); f_4e1703(); if (g_unwind) return; /* Core!?GetExtent@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 83eda6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83eda8: lea edx, [ebx + 0xb0] */
  edx = (uint32_t)(ebx + 0xb0u);
/* 83edae: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 83edb0: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83edb3: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83edb6: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83edb9: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 83edbb: lea ecx, [ebp + 0x358] */
  ecx = (uint32_t)(ebp + 0x358u);
/* 83edc1: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83edc4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83edc5: lea eax, [ebx + 0xbc] */
  eax = (uint32_t)(ebx + 0xbcu);
/* 83edcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83edcc: call 0x6ca83f */
  esp -= 4; W32(esp, 0x83edd1u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 83edd1: mov edx, dword ptr [ebp + 0x438] */
  edx = R32((uint32_t)(ebp + 0x438u));
/* 83edd7: mov dword ptr [ebx + 0x1c], edx */
  W32((uint32_t)(ebx + 0x1cu), edx);
/* 83edda: lea esi, [ebp + 0x43c] */
  esi = (uint32_t)(ebp + 0x43cu);
/* 83ede0: lea edi, [ebx + 0x11c] */
  edi = (uint32_t)(ebx + 0x11cu);
/* 83ede6: mov ecx, 0x10 */
  ecx = 0x10u;
/* 83edeb: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 83eded: mov eax, dword ptr [ebp + 0x34c] */
  eax = R32((uint32_t)(ebp + 0x34cu));
/* 83edf3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83edf6: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 83edf9: je 0x83ee0c */
  if (zf) goto L_83ee0c;
L_83edfb: /* 83edfb: mov ecx, dword ptr [ebp + 0x438] */
  ecx = R32((uint32_t)(ebp + 0x438u));
/* 83ee01: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83ee03: je 0x83ee0c */
  if (zf) goto L_83ee0c;
L_83ee05: /* 83ee05: mov ecx, 4 */
  ecx = 0x4u;
/* 83ee0a: jmp 0x83ee0e */
  goto L_83ee0e;
L_83ee0c: /* 83ee0c: xor ecx, ecx */
  ecx = 0;
L_83ee0e: /* 83ee0e: mov edi, dword ptr [ebp + 0x344] */
  edi = R32((uint32_t)(ebp + 0x344u));
/* 83ee14: mov edx, eax */
  edx = eax;
/* 83ee16: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 83ee18: and edx, 0x400 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 83ee1e: mov esi, eax */
  esi = eax;
/* 83ee20: and esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 83ee26: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 83ee28: and eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 83ee2d: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 83ee2f: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 83ee31: xor eax, eax */
  eax = 0;
/* 83ee33: shr edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 83ee36: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83ee38: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 83ee3b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83ee3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83ee3d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83ee3e: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 83ee40: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 83ee42: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 83ee46: mov dword ptr [ebx + 0x15c], edx */
  W32((uint32_t)(ebx + 0x15cu), edx);
/* 83ee4c: mov eax, ebx */
  eax = ebx;
/* 83ee4e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83ee4f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83ee56: add esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83ee59: ret 8 */
  esp += 12; SPILL(); return;
}

void f_83eed0(void) {
  LOAD_REGS();
L_83eed0: /* 83eed0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83eed2: push 0x9d3578 */
  { uint32_t v = 0x9d3578u; esp -= 4; W32(esp, v); }
/* 83eed7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83eedd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83eede: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83eee5: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83eee8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83eee9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 83eeea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83eeeb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83eeec: mov edi, dword ptr [esp + 0x40] */
  edi = R32((uint32_t)(esp + 0x40u));
/* 83eef0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 83eef2: mov esi, ecx */
  esi = ecx;
/* 83eef4: mov ecx, dword ptr [0xcfa350] */
  ecx = R32((uint32_t)(0xcfa350u));
/* 83eefa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83eefb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 83eefd: mov ecx, edi */
  ecx = edi;
/* 83eeff: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x83ef02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83ef02: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 83ef04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83ef05: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* 83ef09: call 0x6c460b */
  esp -= 4; W32(esp, 0x83ef0eu); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 83ef0e: mov bl, 0xff */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 83ef10: mov byte ptr [esp + 0x40], bl */
  W8((uint32_t)(esp + 0x40u), (ebx & 0xffu));
/* 83ef14: mov byte ptr [esp + 0x41], bl */
  W8((uint32_t)(esp + 0x41u), (ebx & 0xffu));
/* 83ef18: mov byte ptr [esp + 0x42], 0 */
  W8((uint32_t)(esp + 0x42u), 0x0u);
/* 83ef1d: mov byte ptr [esp + 0x43], bl */
  W8((uint32_t)(esp + 0x43u), (ebx & 0xffu));
/* 83ef21: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 83ef25: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83ef26: lea edi, [esi + 0x3c4] */
  edi = (uint32_t)(esi + 0x3c4u);
/* 83ef2c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83ef2f: mov eax, edi */
  eax = edi;
/* 83ef31: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83ef33: mov ecx, esp */
  ecx = esp;
/* 83ef35: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83ef37: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83ef3a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83ef3d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83ef40: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83ef43: lea ebp, [esi + 0x3b8] */
  ebp = (uint32_t)(esi + 0x3b8u);
/* 83ef49: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83ef4c: mov ecx, ebp */
  ecx = ebp;
/* 83ef4e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 83ef50: mov edx, esp */
  edx = esp;
/* 83ef52: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 83ef54: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 83ef57: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83ef5a: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 83ef5d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 83ef60: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 83ef64: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* 83ef6c: call 0x6cc74d */
  esp -= 4; W32(esp, 0x83ef71u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 83ef71: mov byte ptr [esp + 0x40], bl */
  W8((uint32_t)(esp + 0x40u), (ebx & 0xffu));
/* 83ef75: mov byte ptr [esp + 0x41], bl */
  W8((uint32_t)(esp + 0x41u), (ebx & 0xffu));
/* 83ef79: mov byte ptr [esp + 0x42], 0 */
  W8((uint32_t)(esp + 0x42u), 0x0u);
/* 83ef7e: mov byte ptr [esp + 0x43], bl */
  W8((uint32_t)(esp + 0x43u), (ebx & 0xffu));
/* 83ef82: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 83ef86: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83ef87: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83ef8a: lea eax, [esi + 0x3d0] */
  eax = (uint32_t)(esi + 0x3d0u);
/* 83ef90: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83ef92: mov ecx, esp */
  ecx = esp;
/* 83ef94: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83ef96: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83ef99: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83ef9c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83ef9f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83efa2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83efa5: mov ecx, edi */
  ecx = edi;
/* 83efa7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 83efa9: mov edx, esp */
  edx = esp;
/* 83efab: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 83efad: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 83efb0: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83efb3: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 83efb6: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 83efb9: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 83efbd: call 0x6cc74d */
  esp -= 4; W32(esp, 0x83efc2u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 83efc2: mov byte ptr [esp + 0x40], bl */
  W8((uint32_t)(esp + 0x40u), (ebx & 0xffu));
/* 83efc6: mov byte ptr [esp + 0x41], bl */
  W8((uint32_t)(esp + 0x41u), (ebx & 0xffu));
/* 83efca: mov byte ptr [esp + 0x42], 0 */
  W8((uint32_t)(esp + 0x42u), 0x0u);
/* 83efcf: mov byte ptr [esp + 0x43], bl */
  W8((uint32_t)(esp + 0x43u), (ebx & 0xffu));
/* 83efd3: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 83efd7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83efd8: lea eax, [esi + 0x3dc] */
  eax = (uint32_t)(esi + 0x3dcu);
/* 83efde: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83efe1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83efe3: mov ecx, esp */
  ecx = esp;
/* 83efe5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83efe7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83efea: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83efed: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83eff0: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83eff3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83eff6: lea eax, [esi + 0x3d0] */
  eax = (uint32_t)(esi + 0x3d0u);
/* 83effc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83effe: mov ecx, esp */
  ecx = esp;
/* 83f000: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83f002: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83f005: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83f008: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83f00b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83f00e: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 83f012: call 0x6cc74d */
  esp -= 4; W32(esp, 0x83f017u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 83f017: mov byte ptr [esp + 0x40], bl */
  W8((uint32_t)(esp + 0x40u), (ebx & 0xffu));
/* 83f01b: mov byte ptr [esp + 0x41], bl */
  W8((uint32_t)(esp + 0x41u), (ebx & 0xffu));
/* 83f01f: mov byte ptr [esp + 0x42], 0 */
  W8((uint32_t)(esp + 0x42u), 0x0u);
/* 83f024: mov byte ptr [esp + 0x43], bl */
  W8((uint32_t)(esp + 0x43u), (ebx & 0xffu));
/* 83f028: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 83f02c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83f02d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83f030: mov edx, ebp */
  edx = ebp;
/* 83f032: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 83f034: mov eax, esp */
  eax = esp;
/* 83f036: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83f038: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 83f03b: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 83f03e: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 83f041: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 83f044: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83f047: lea eax, [esi + 0x3dc] */
  eax = (uint32_t)(esi + 0x3dcu);
/* 83f04d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83f04f: mov ecx, esp */
  ecx = esp;
/* 83f051: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83f053: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83f056: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83f059: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83f05c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83f05f: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 83f063: call 0x6cc74d */
  esp -= 4; W32(esp, 0x83f068u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 83f068: mov byte ptr [esp + 0x40], bl */
  W8((uint32_t)(esp + 0x40u), (ebx & 0xffu));
/* 83f06c: mov byte ptr [esp + 0x41], bl */
  W8((uint32_t)(esp + 0x41u), (ebx & 0xffu));
/* 83f070: mov byte ptr [esp + 0x42], 0 */
  W8((uint32_t)(esp + 0x42u), 0x0u);
/* 83f075: mov byte ptr [esp + 0x43], bl */
  W8((uint32_t)(esp + 0x43u), (ebx & 0xffu));
/* 83f079: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 83f07d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83f07e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83f081: lea eax, [esi + 0x3f4] */
  eax = (uint32_t)(esi + 0x3f4u);
/* 83f087: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83f089: mov edx, esp */
  edx = esp;
/* 83f08b: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 83f08d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83f090: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83f093: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83f096: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83f099: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83f09c: lea eax, [esi + 0x3e8] */
  eax = (uint32_t)(esi + 0x3e8u);
/* 83f0a2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83f0a4: mov ecx, esp */
  ecx = esp;
/* 83f0a6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83f0a8: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83f0ab: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83f0ae: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83f0b1: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83f0b4: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 83f0b8: call 0x6cc74d */
  esp -= 4; W32(esp, 0x83f0bdu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 83f0bd: mov byte ptr [esp + 0x40], bl */
  W8((uint32_t)(esp + 0x40u), (ebx & 0xffu));
/* 83f0c1: mov byte ptr [esp + 0x41], bl */
  W8((uint32_t)(esp + 0x41u), (ebx & 0xffu));
/* 83f0c5: mov byte ptr [esp + 0x42], 0 */
  W8((uint32_t)(esp + 0x42u), 0x0u);
/* 83f0ca: mov byte ptr [esp + 0x43], bl */
  W8((uint32_t)(esp + 0x43u), (ebx & 0xffu));
/* 83f0ce: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 83f0d2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83f0d3: lea eax, [esi + 0x400] */
  eax = (uint32_t)(esi + 0x400u);
/* 83f0d9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83f0db: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83f0de: mov edx, esp */
  edx = esp;
/* 83f0e0: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 83f0e2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83f0e5: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83f0e8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83f0eb: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83f0ee: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83f0f1: lea eax, [esi + 0x3f4] */
  eax = (uint32_t)(esi + 0x3f4u);
/* 83f0f7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83f0f9: mov ecx, esp */
  ecx = esp;
/* 83f0fb: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83f0fd: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83f100: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83f103: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83f106: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83f109: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 83f10d: call 0x6cc74d */
  esp -= 4; W32(esp, 0x83f112u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 83f112: mov byte ptr [esp + 0x40], bl */
  W8((uint32_t)(esp + 0x40u), (ebx & 0xffu));
/* 83f116: mov byte ptr [esp + 0x41], bl */
  W8((uint32_t)(esp + 0x41u), (ebx & 0xffu));
/* 83f11a: mov byte ptr [esp + 0x42], 0 */
  W8((uint32_t)(esp + 0x42u), 0x0u);
/* 83f11f: mov byte ptr [esp + 0x43], bl */
  W8((uint32_t)(esp + 0x43u), (ebx & 0xffu));
/* 83f123: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 83f127: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83f128: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83f12b: lea eax, [esi + 0x40c] */
  eax = (uint32_t)(esi + 0x40cu);
/* 83f131: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83f133: mov edx, esp */
  edx = esp;
/* 83f135: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 83f137: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83f13a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83f13d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83f140: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83f143: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83f146: lea eax, [esi + 0x400] */
  eax = (uint32_t)(esi + 0x400u);
/* 83f14c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83f14e: mov ecx, esp */
  ecx = esp;
/* 83f150: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83f152: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83f155: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83f158: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83f15b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83f15e: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 83f162: call 0x6cc74d */
  esp -= 4; W32(esp, 0x83f167u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 83f167: mov byte ptr [esp + 0x40], bl */
  W8((uint32_t)(esp + 0x40u), (ebx & 0xffu));
/* 83f16b: mov byte ptr [esp + 0x41], bl */
  W8((uint32_t)(esp + 0x41u), (ebx & 0xffu));
/* 83f16f: mov byte ptr [esp + 0x42], 0 */
  W8((uint32_t)(esp + 0x42u), 0x0u);
/* 83f174: mov byte ptr [esp + 0x43], bl */
  W8((uint32_t)(esp + 0x43u), (ebx & 0xffu));
/* 83f178: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 83f17c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83f17d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83f180: lea eax, [esi + 0x3e8] */
  eax = (uint32_t)(esi + 0x3e8u);
/* 83f186: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 83f188: mov edx, esp */
  edx = esp;
/* 83f18a: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 83f18c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 83f18f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83f192: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83f195: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83f198: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83f19b: lea eax, [esi + 0x40c] */
  eax = (uint32_t)(esi + 0x40cu);
/* 83f1a1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 83f1a3: mov ecx, esp */
  ecx = esp;
/* 83f1a5: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83f1a7: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 83f1aa: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 83f1ad: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 83f1b0: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 83f1b3: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 83f1b7: call 0x6cc74d */
  esp -= 4; W32(esp, 0x83f1bcu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 83f1bc: mov eax, dword ptr [esi + 0x3e8] */
  eax = R32((uint32_t)(esi + 0x3e8u));
/* 83f1c2: mov byte ptr [esp + 0x40], bl */
  W8((uint32_t)(esp + 0x40u), (ebx & 0xffu));
/* 83f1c6: mov byte ptr [esp + 0x41], bl */
  W8((uint32_t)(esp + 0x41u), (ebx & 0xffu));
/* 83f1ca: mov byte ptr [esp + 0x42], 0 */
  W8((uint32_t)(esp + 0x42u), 0x0u);
/* 83f1cf: mov byte ptr [esp + 0x43], bl */
  W8((uint32_t)(esp + 0x43u), (ebx & 0xffu));
/* 83f1d3: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 83f1d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83f1d8: mov ecx, dword ptr [esi + 0x3ec] */
  ecx = R32((uint32_t)(esi + 0x3ecu));
/* 83f1de: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83f1e1: mov edx, esp */
  edx = esp;
/* 83f1e3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 83f1e5: mov eax, dword ptr [esi + 0x3f0] */
  eax = R32((uint32_t)(esi + 0x3f0u));
/* 83f1eb: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83f1ee: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83f1f1: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 83f1f4: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 83f1f7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83f1fa: mov ecx, esp */
  ecx = esp;
/* 83f1fc: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83f1fe: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 83f201: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83f204: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 83f207: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 83f20b: call 0x6cc74d */
  esp -= 4; W32(esp, 0x83f210u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 83f210: mov edx, dword ptr [esi + 0x3f4] */
  edx = R32((uint32_t)(esi + 0x3f4u));
/* 83f216: mov byte ptr [esp + 0x40], bl */
  W8((uint32_t)(esp + 0x40u), (ebx & 0xffu));
/* 83f21a: mov byte ptr [esp + 0x41], bl */
  W8((uint32_t)(esp + 0x41u), (ebx & 0xffu));
/* 83f21e: mov byte ptr [esp + 0x42], 0 */
  W8((uint32_t)(esp + 0x42u), 0x0u);
/* 83f223: mov byte ptr [esp + 0x43], bl */
  W8((uint32_t)(esp + 0x43u), (ebx & 0xffu));
/* 83f227: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 83f22b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83f22c: mov eax, dword ptr [esi + 0x3f8] */
  eax = R32((uint32_t)(esi + 0x3f8u));
/* 83f232: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83f235: mov ecx, esp */
  ecx = esp;
/* 83f237: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83f239: mov edx, dword ptr [esi + 0x3fc] */
  edx = R32((uint32_t)(esi + 0x3fcu));
/* 83f23f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83f242: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 83f245: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 83f247: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 83f24a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83f24d: mov eax, esp */
  eax = esp;
/* 83f24f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83f251: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 83f254: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83f257: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83f25a: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 83f25e: call 0x6cc74d */
  esp -= 4; W32(esp, 0x83f263u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 83f263: mov ecx, dword ptr [esi + 0x400] */
  ecx = R32((uint32_t)(esi + 0x400u));
/* 83f269: mov byte ptr [esp + 0x40], bl */
  W8((uint32_t)(esp + 0x40u), (ebx & 0xffu));
/* 83f26d: mov byte ptr [esp + 0x41], bl */
  W8((uint32_t)(esp + 0x41u), (ebx & 0xffu));
/* 83f271: mov byte ptr [esp + 0x42], 0 */
  W8((uint32_t)(esp + 0x42u), 0x0u);
/* 83f276: mov byte ptr [esp + 0x43], bl */
  W8((uint32_t)(esp + 0x43u), (ebx & 0xffu));
/* 83f27a: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 83f27e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83f27f: mov edx, dword ptr [esi + 0x404] */
  edx = R32((uint32_t)(esi + 0x404u));
/* 83f285: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83f288: mov eax, esp */
  eax = esp;
/* 83f28a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83f28c: mov ecx, dword ptr [esi + 0x408] */
  ecx = R32((uint32_t)(esi + 0x408u));
/* 83f292: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83f295: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83f298: mov eax, dword ptr [esi + 0x3d0] */
  eax = R32((uint32_t)(esi + 0x3d0u));
/* 83f29e: mov ecx, dword ptr [esi + 0x3d4] */
  ecx = R32((uint32_t)(esi + 0x3d4u));
/* 83f2a4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83f2a7: mov edx, esp */
  edx = esp;
/* 83f2a9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 83f2ab: mov eax, dword ptr [esi + 0x3d8] */
  eax = R32((uint32_t)(esi + 0x3d8u));
/* 83f2b1: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83f2b4: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 83f2b8: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83f2bb: call 0x6cc74d */
  esp -= 4; W32(esp, 0x83f2c0u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 83f2c0: mov eax, dword ptr [esi + 0x40c] */
  eax = R32((uint32_t)(esi + 0x40cu));
/* 83f2c6: mov byte ptr [esp + 0x40], bl */
  W8((uint32_t)(esp + 0x40u), (ebx & 0xffu));
/* 83f2ca: mov byte ptr [esp + 0x41], bl */
  W8((uint32_t)(esp + 0x41u), (ebx & 0xffu));
/* 83f2ce: mov byte ptr [esp + 0x42], 0 */
  W8((uint32_t)(esp + 0x42u), 0x0u);
/* 83f2d3: mov byte ptr [esp + 0x43], bl */
  W8((uint32_t)(esp + 0x43u), (ebx & 0xffu));
/* 83f2d7: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 83f2db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83f2dc: mov ecx, dword ptr [esi + 0x410] */
  ecx = R32((uint32_t)(esi + 0x410u));
/* 83f2e2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83f2e5: mov edx, esp */
  edx = esp;
/* 83f2e7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 83f2e9: mov eax, dword ptr [esi + 0x414] */
  eax = R32((uint32_t)(esi + 0x414u));
/* 83f2ef: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 83f2f2: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 83f2f5: mov edx, dword ptr [esi + 0x3dc] */
  edx = R32((uint32_t)(esi + 0x3dcu));
/* 83f2fb: mov eax, dword ptr [esi + 0x3e0] */
  eax = R32((uint32_t)(esi + 0x3e0u));
/* 83f301: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83f304: mov ecx, esp */
  ecx = esp;
/* 83f306: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 83f308: mov edx, dword ptr [esi + 0x3e4] */
  edx = R32((uint32_t)(esi + 0x3e4u));
/* 83f30e: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 83f311: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 83f314: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* 83f318: call 0x6cc74d */
  esp -= 4; W32(esp, 0x83f31du); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 83f31d: mov byte ptr [esp + 0x40], 0 */
  W8((uint32_t)(esp + 0x40u), 0x0u);
/* 83f322: mov byte ptr [esp + 0x41], bl */
  W8((uint32_t)(esp + 0x41u), (ebx & 0xffu));
/* 83f326: mov byte ptr [esp + 0x42], bl */
  W8((uint32_t)(esp + 0x42u), (ebx & 0xffu));
/* 83f32a: mov byte ptr [esp + 0x43], bl */
  W8((uint32_t)(esp + 0x43u), (ebx & 0xffu));
/* 83f32e: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 83f332: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83f333: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83f336: mov edi, esp */
  edi = esp;
/* 83f338: add esi, 0x418 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x418u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 83f33e: mov ecx, 7 */
  ecx = 0x7u;
/* 83f343: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 83f345: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 83f349: call 0x6c9eb7 */
  esp -= 4; W32(esp, 0x83f34eu); SPILL(); f_6c9eb7(); if (g_unwind) return; RELOAD();
/* 83f34e: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 83f352: mov dword ptr [esp + 0x38], 0xffffffff */
  W32((uint32_t)(esp + 0x38u), 0xffffffffu);
/* 83f35a: call 0x6cadcb */
  esp -= 4; W32(esp, 0x83f35fu); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 83f35f: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 83f363: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 83f364: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 83f365: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 83f366: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 83f36d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 83f36e: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83f371: ret 4 */
  esp += 8; SPILL(); return;
}

void f_83f4b0(void) {
  LOAD_REGS();
L_83f4b0: /* 83f4b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 83f4b1: mov ebp, esp */
  ebp = esp;
/* 83f4b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 83f4b5: push 0x9d35a8 */
  { uint32_t v = 0x9d35a8u; esp -= 4; W32(esp, v); }
/* 83f4ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 83f4c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83f4c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 83f4c8: sub esp, 0x1c4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1c4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83f4ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 83f4cf: mov eax, ecx */
  eax = ecx;
/* 83f4d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83f4d2: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 83f4d5: mov ecx, dword ptr [eax + 0x340] */
  ecx = R32((uint32_t)(eax + 0x340u));
/* 83f4db: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83f4dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 83f4de: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 83f4e1: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 83f4e8: je 0x840796 */
  if (zf) goto L_840796;
L_83f4ee: /* 83f4ee: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 83f4f4: add eax, 0x17c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83f4f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83f4fa: lea eax, [ebp - 0xe0] */
  eax = (uint32_t)(ebp + 0xffffff20u);
/* 83f500: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83f501: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 83f504: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x83f50au); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 83f50a: fld dword ptr [ebp - 0xc0] */
  { double v = F32((uint32_t)(ebp + 0xffffff40u)); FPUSH(v); }
/* 83f510: mov ecx, dword ptr [ebp - 0xd4] */
  ecx = R32((uint32_t)(ebp + 0xffffff2cu));
/* 83f516: fchs  */
  ST0 = -ST0;
/* 83f518: mov edx, dword ptr [ebp - 0xd0] */
  edx = R32((uint32_t)(ebp + 0xffffff30u));
/* 83f51e: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 83f521: fld dword ptr [ebp - 0xc4] */
  { double v = F32((uint32_t)(ebp + 0xffffff3cu)); FPUSH(v); }
/* 83f527: mov eax, dword ptr [ebp - 0xcc] */
  eax = R32((uint32_t)(ebp + 0xffffff34u));
/* 83f52d: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 83f530: fchs  */
  ST0 = -ST0;
/* 83f532: mov ecx, dword ptr [ebp - 0xbc] */
  ecx = R32((uint32_t)(ebp + 0xffffff44u));
/* 83f538: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 83f53b: fld dword ptr [ebp - 0xc8] */
  { double v = F32((uint32_t)(ebp + 0xffffff38u)); FPUSH(v); }
/* 83f541: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 83f544: mov edx, dword ptr [ebp - 0xb8] */
  edx = R32((uint32_t)(ebp + 0xffffff48u));
/* 83f54a: fchs  */
  ST0 = -ST0;
/* 83f54c: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 83f54f: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 83f552: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 83f555: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 83f558: mov ecx, dword ptr [ecx + 0x340] */
  ecx = R32((uint32_t)(ecx + 0x340u));
/* 83f55e: mov eax, dword ptr [ebp - 0xb4] */
  eax = R32((uint32_t)(ebp + 0xffffff4cu));
/* 83f564: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 83f567: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83f569: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 83f56c: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x83f56fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83f56f: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 83f572: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83f575: fild dword ptr [ebp - 0x68] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 83f578: mov ecx, dword ptr [eax + 0x340] */
  ecx = R32((uint32_t)(eax + 0x340u));
/* 83f57e: fmul dword ptr [eax + 0x284] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x284u)));
/* 83f584: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 83f586: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 83f58c: call dword ptr [eax + 0x7c] */
  { uint32_t t = R32((uint32_t)(eax + 0x7cu)); esp -= 4; W32(esp, 0x83f58fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83f58f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 83f592: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 83f595: fild dword ptr [ebp - 0x68] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 83f598: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83f59b: fmul dword ptr [ecx + 0x284] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x284u)));
/* 83f5a1: fst dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0);
/* 83f5a7: fmul dword ptr [ebp - 0x8c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff74u)));
/* 83f5ad: fmul dword ptr [0xa0e1c0] */
  ST0 = ST0 * (F32((uint32_t)(0xa0e1c0u)));
/* 83f5b3: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 83f5b9: fmul dword ptr [ebp - 0x84] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 83f5bf: fmul dword ptr [0xa0e1c0] */
  ST0 = ST0 * (F32((uint32_t)(0xa0e1c0u)));
/* 83f5c5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83f5c7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 83f5ca: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x83f5d0u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 83f5d0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83f5d3: fst qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 83f5d6: mov cl, byte ptr [eax + 0x50] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x50u))) & 0xffu);
/* 83f5d9: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 83f5dc: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 83f5df: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83f5e2: cmp cl, 5 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 83f5e5: fadd dword ptr [ebp - 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff94u)));
/* 83f5e8: jne 0x83f7d2 */
  if (!zf) goto L_83f7d2;
L_83f5ee: /* 83f5ee: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83f5f0: add eax, 0x3b8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83f5f5: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 83f5f8: fadd dword ptr [ebp - 0x64] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 83f5fb: fst dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0);
/* 83f601: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 83f604: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 83f607: fst dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0);
/* 83f60d: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83f610: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83f612: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 83f615: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 83f618: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 83f61b: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 83f61e: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83f621: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 83f624: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83f627: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 83f62a: fadd dword ptr [eax - 0x240] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffdc0u)));
/* 83f630: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 83f633: fadd dword ptr [eax - 0x244] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffdbcu)));
/* 83f639: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83f63c: fadd dword ptr [eax - 0x248] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffdb8u)));
/* 83f642: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83f645: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83f648: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 83f64a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 83f64d: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83f650: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 83f653: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83f656: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83f659: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 83f65c: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 83f65f: fsub dword ptr [ebp - 0x6c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff94u)));
/* 83f662: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83f665: add eax, 0x3c4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83f66a: fst dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0);
/* 83f670: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 83f673: fsub dword ptr [ebp - 0x64] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 83f676: fst dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0);
/* 83f679: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 83f67c: fsub dword ptr [ebp - 0x60] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 83f67f: fst dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0);
/* 83f682: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83f685: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83f687: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 83f68a: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 83f68d: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 83f690: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 83f693: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83f696: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 83f699: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83f69c: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 83f69f: fadd dword ptr [eax - 0x24c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffdb4u)));
/* 83f6a5: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 83f6a8: fadd dword ptr [eax - 0x250] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffdb0u)));
/* 83f6ae: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83f6b1: fadd dword ptr [eax - 0x254] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffdacu)));
/* 83f6b7: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83f6ba: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83f6bd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83f6bf: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 83f6c2: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83f6c5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83f6c8: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83f6cb: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83f6ce: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 83f6d1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83f6d4: fchs  */
  ST0 = -ST0;
/* 83f6d6: fst dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0);
/* 83f6d9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 83f6db: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 83f6de: fchs  */
  ST0 = -ST0;
/* 83f6e0: fst dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0);
/* 83f6e6: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 83f6e9: fchs  */
  ST0 = -ST0;
/* 83f6eb: fst dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0);
/* 83f6ee: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83f6f1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83f6f3: fsub dword ptr [ebp - 0x6c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff94u)));
/* 83f6f6: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 83f6f9: fsub dword ptr [ebp - 0x64] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 83f6fc: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83f6ff: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83f702: add eax, 0x3d0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3d0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83f707: fsub dword ptr [ebp - 0x60] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 83f70a: mov esi, dword ptr [0xcfa578] */
  esi = R32((uint32_t)(0xcfa578u));
/* 83f710: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83f713: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 83f716: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 83f719: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83f71b: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 83f71e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83f721: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 83f724: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83f727: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83f72a: fadd dword ptr [eax - 0x258] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffda8u)));
/* 83f730: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83f733: fadd dword ptr [eax - 0x25c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffda4u)));
/* 83f739: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83f73c: fadd dword ptr [eax - 0x260] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffda0u)));
/* 83f742: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83f745: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83f748: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 83f74a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 83f74d: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83f750: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 83f753: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83f756: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83f759: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 83f75f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 83f762: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 83f765: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83f767: fadd dword ptr [ebp - 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff94u)));
/* 83f76a: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 83f76d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83f770: add eax, 0x3dc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3dcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83f775: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83f778: fadd dword ptr [ebp - 0x64] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 83f77b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83f77e: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 83f781: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83f784: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 83f787: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83f78a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83f78c: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 83f78f: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 83f792: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 83f795: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83f798: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83f79b: fadd dword ptr [eax - 0x264] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffd9cu)));
/* 83f7a1: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83f7a4: fadd dword ptr [eax - 0x268] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffd98u)));
/* 83f7aa: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83f7ad: fadd dword ptr [eax - 0x26c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffd94u)));
/* 83f7b3: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83f7b6: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83f7b9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83f7bb: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 83f7be: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83f7c1: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83f7c4: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83f7c7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83f7ca: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83f7cd: jmp 0x83f9fd */
  goto L_83f9fd;
L_83f7d2: /* 83f7d2: mov esi, dword ptr [0xcfa578] */
  esi = R32((uint32_t)(0xcfa578u));
/* 83f7d8: fst dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0);
/* 83f7db: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 83f7de: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 83f7e4: fadd dword ptr [ebp - 0x64] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 83f7e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83f7e8: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 83f7eb: fst dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0);
/* 83f7f1: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 83f7f4: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 83f7f7: fst dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0);
/* 83f7fd: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 83f800: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83f803: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83f806: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x83f808u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83f808: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 83f80b: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 83f80e: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 83f811: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 83f814: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83f817: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 83f81a: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 83f81c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83f81f: add eax, 0x3b8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83f824: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83f827: fadd dword ptr [eax - 0x240] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffdc0u)));
/* 83f82d: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83f830: fadd dword ptr [eax - 0x244] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffdbcu)));
/* 83f836: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83f839: fadd dword ptr [eax - 0x248] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffdb8u)));
/* 83f83f: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83f842: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83f845: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83f847: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 83f84a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83f84d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83f850: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83f853: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83f856: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 83f859: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83f85c: fsub dword ptr [ebp - 0x6c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff94u)));
/* 83f85f: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 83f865: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83f866: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 83f869: fst dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0);
/* 83f86f: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 83f872: fsub dword ptr [ebp - 0x64] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 83f875: fst dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0);
/* 83f878: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 83f87b: fsub dword ptr [ebp - 0x60] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 83f87e: fst dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0);
/* 83f881: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 83f884: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83f887: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83f88a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x83f88cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83f88c: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 83f88f: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 83f892: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 83f895: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 83f898: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83f89b: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 83f89e: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 83f8a0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83f8a3: add eax, 0x3c4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83f8a8: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83f8ab: fadd dword ptr [eax - 0x24c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffdb4u)));
/* 83f8b1: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83f8b4: fadd dword ptr [eax - 0x250] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffdb0u)));
/* 83f8ba: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83f8bd: fadd dword ptr [eax - 0x254] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffdacu)));
/* 83f8c3: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83f8c6: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83f8c9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83f8cb: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 83f8ce: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83f8d1: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83f8d4: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83f8d7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83f8da: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 83f8dd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83f8e0: fchs  */
  ST0 = -ST0;
/* 83f8e2: fst dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0);
/* 83f8e5: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 83f8eb: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 83f8ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83f8ef: fchs  */
  ST0 = -ST0;
/* 83f8f1: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 83f8f4: fst dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0);
/* 83f8fa: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83f8fd: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 83f900: fchs  */
  ST0 = -ST0;
/* 83f902: fst dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0);
/* 83f905: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83f908: fsub dword ptr [ebp - 0x6c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff94u)));
/* 83f90b: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83f90e: fsub dword ptr [ebp - 0x64] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 83f911: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83f914: fsub dword ptr [ebp - 0x60] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 83f917: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 83f91a: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83f91d: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83f920: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x83f922u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83f922: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 83f925: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 83f928: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 83f92b: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 83f92e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83f931: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 83f934: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 83f936: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83f939: add eax, 0x3d0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3d0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83f93e: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83f941: fadd dword ptr [eax - 0x258] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffda8u)));
/* 83f947: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83f94a: fadd dword ptr [eax - 0x25c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffda4u)));
/* 83f950: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83f953: fadd dword ptr [eax - 0x260] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffda0u)));
/* 83f959: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83f95c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83f95f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83f961: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 83f964: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83f967: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83f96a: mov edx, dword ptr [ebp - 0x88] */
  edx = R32((uint32_t)(ebp + 0xffffff78u));
/* 83f970: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83f973: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83f976: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 83f979: fadd dword ptr [ebp - 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff94u)));
/* 83f97c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83f97f: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 83f982: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 83f985: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83f988: fadd dword ptr [ebp - 0x64] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 83f98b: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 83f98e: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83f991: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 83f997: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 83f99a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83f99b: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 83f99e: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 83f9a1: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83f9a4: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83f9a7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x83f9a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83f9a9: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 83f9ac: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 83f9af: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 83f9b2: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 83f9b5: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83f9b8: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 83f9bb: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 83f9bd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83f9c0: add eax, 0x3dc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3dcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83f9c5: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83f9c8: fadd dword ptr [eax - 0x264] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffd9cu)));
/* 83f9ce: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83f9d1: fadd dword ptr [eax - 0x268] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffd98u)));
/* 83f9d7: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83f9da: fadd dword ptr [eax - 0x26c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffd94u)));
/* 83f9e0: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83f9e3: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83f9e6: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 83f9e9: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83f9ec: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83f9ef: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83f9f2: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 83f9f4: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83f9f7: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 83f9fa: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
L_83f9fd: /* 83f9fd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83fa00: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 83fa03: mov edi, dword ptr [ebp - 0x70] */
  edi = R32((uint32_t)(ebp + 0xffffff90u));
/* 83fa06: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 83fa0c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83fa0e: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 83fa11: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 83fa14: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83fa17: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 83fa1a: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 83fa1d: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 83fa20: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 83fa23: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 83fa26: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 83fa29: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 83fa2c: add eax, 0x358 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x358u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83fa31: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83fa33: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 83fa36: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83fa38: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 83fa3b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83fa3e: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 83fa41: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83fa43: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 83fa49: mov edx, dword ptr [ebp - 0x90] */
  edx = R32((uint32_t)(ebp + 0xffffff70u));
/* 83fa4f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 83fa52: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83fa55: mov ecx, dword ptr [eax + 0x344] */
  ecx = R32((uint32_t)(eax + 0x344u));
/* 83fa5b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 83fa5d: jne 0x83ff53 */
  if (!zf) goto L_83ff53;
L_83fa63: /* 83fa63: fld dword ptr [ebp - 0xa0] */
  { double v = F32((uint32_t)(ebp + 0xffffff60u)); FPUSH(v); }
/* 83fa69: mov eax, dword ptr [ebp - 0xa8] */
  eax = R32((uint32_t)(ebp + 0xffffff58u));
/* 83fa6f: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 83fa75: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 83fa78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83fa79: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 83fa7c: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 83fa7f: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 83fa82: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x83fa84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83fa84: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 83fa87: fchs  */
  ST0 = -ST0;
/* 83fa89: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 83fa8c: fchs  */
  ST0 = -ST0;
/* 83fa8e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 83fa90: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83fa93: fchs  */
  ST0 = -ST0;
/* 83fa95: lea edx, [eax + 0x3b8] */
  edx = (uint32_t)(eax + 0x3b8u);
/* 83fa9b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 83fa9d: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83faa0: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 83faa3: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 83faa6: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 83faa9: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 83faac: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 83faae: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83fab1: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83fab4: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 83fab7: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 83faba: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 83fabd: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83fac0: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 83fac3: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 83fac6: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83fac9: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 83facb: add eax, 0x368 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x368u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83fad0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83fad2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83fad4: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83fad7: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 83fada: mov edx, dword ptr [ebp - 0x68] */
  edx = R32((uint32_t)(ebp + 0xffffff98u));
/* 83fadd: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 83fadf: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 83fae2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83fae4: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83fae7: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 83faea: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 83faed: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83faef: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 83faf5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83faf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83faf8: fld dword ptr [ebp - 0xa4] */
  { double v = F32((uint32_t)(ebp + 0xffffff5cu)); FPUSH(v); }
/* 83fafe: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 83fb01: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 83fb04: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 83fb07: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 83fb0a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 83fb0d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x83fb0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83fb0f: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 83fb12: fchs  */
  ST0 = -ST0;
/* 83fb14: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 83fb17: fchs  */
  ST0 = -ST0;
/* 83fb19: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 83fb1b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83fb1e: fchs  */
  ST0 = -ST0;
/* 83fb20: lea ecx, [eax + 0x3c4] */
  ecx = (uint32_t)(eax + 0x3c4u);
/* 83fb26: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83fb28: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83fb2b: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 83fb2e: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 83fb31: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 83fb34: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83fb37: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 83fb39: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83fb3c: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83fb3f: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 83fb42: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 83fb45: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 83fb48: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83fb4b: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 83fb4e: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 83fb51: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83fb54: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 83fb56: add eax, 0x378 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x378u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83fb5b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83fb5d: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 83fb60: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83fb62: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83fb65: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 83fb68: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 83fb6b: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 83fb6d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83fb6f: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83fb72: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 83fb75: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 83fb78: mov eax, dword ptr [ebp - 0x88] */
  eax = R32((uint32_t)(ebp + 0xffffff78u));
/* 83fb7e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83fb80: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83fb82: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 83fb85: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 83fb88: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 83fb8b: fsub dword ptr [ebp - 0x6c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff94u)));
/* 83fb8e: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 83fb94: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83fb97: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83fb98: fsub dword ptr [ebp - 0x64] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 83fb9b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 83fb9e: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83fba1: fsub dword ptr [ebp - 0x60] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 83fba4: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83fba7: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 83fbaa: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 83fbad: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x83fbafu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83fbaf: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 83fbb2: fchs  */
  ST0 = -ST0;
/* 83fbb4: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 83fbb7: fchs  */
  ST0 = -ST0;
/* 83fbb9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 83fbbb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83fbbe: fchs  */
  ST0 = -ST0;
/* 83fbc0: lea ecx, [eax + 0x3d0] */
  ecx = (uint32_t)(eax + 0x3d0u);
/* 83fbc6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83fbc8: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83fbcb: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 83fbce: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 83fbd1: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 83fbd4: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83fbd7: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 83fbd9: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83fbdc: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83fbdf: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 83fbe2: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 83fbe5: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83fbe8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83fbea: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 83fbed: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 83fbf0: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83fbf3: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 83fbf5: add eax, 0x388 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x388u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83fbfa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83fbfc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83fbfe: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 83fc01: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 83fc04: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83fc07: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 83fc0a: mov dword ptr [eax + 8], edi */
  W32((uint32_t)(eax + 0x8u), edi);
/* 83fc0d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83fc0f: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83fc12: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 83fc15: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 83fc18: mov eax, dword ptr [ebp - 0x88] */
  eax = R32((uint32_t)(ebp + 0xffffff78u));
/* 83fc1e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83fc20: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83fc22: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 83fc25: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 83fc28: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 83fc2b: fadd dword ptr [ebp - 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff94u)));
/* 83fc2e: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83fc31: fadd dword ptr [ebp - 0x64] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff9cu)));
/* 83fc34: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83fc37: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 83fc3a: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83fc3d: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 83fc40: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 83fc46: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 83fc49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83fc4a: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 83fc4d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x83fc4fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 83fc4f: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 83fc52: fchs  */
  ST0 = -ST0;
/* 83fc54: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 83fc57: fchs  */
  ST0 = -ST0;
/* 83fc59: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 83fc5b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83fc5e: fchs  */
  ST0 = -ST0;
/* 83fc60: lea ecx, [eax + 0x3dc] */
  ecx = (uint32_t)(eax + 0x3dcu);
/* 83fc66: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 83fc69: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 83fc6b: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 83fc6e: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 83fc71: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 83fc74: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 83fc77: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 83fc79: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83fc7c: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 83fc7f: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 83fc82: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 83fc85: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83fc87: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 83fc8a: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 83fc8d: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 83fc90: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 83fc92: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 83fc95: add eax, 0x398 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x398u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83fc9a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83fc9c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83fc9e: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83fca1: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 83fca4: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 83fca7: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 83fcaa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 83fcac: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83fcaf: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 83fcb2: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 83fcb5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83fcb7: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 83fcba: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83fcbc: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 83fcbf: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 83fcc2: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 83fcc8: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 83fccb: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 83fcce: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 83fcd1: fchs  */
  ST0 = -ST0;
/* 83fcd3: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 83fcd6: fchs  */
  ST0 = -ST0;
/* 83fcd8: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 83fcdb: fchs  */
  ST0 = -ST0;
/* 83fcdd: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 83fce0: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83fce3: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83fce6: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 83fce9: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 83fcef: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 83fcf2: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 83fcf8: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 83fcfb: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 83fd01: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 83fd04: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83fd06: fmul dword ptr [ebp - 0x8c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff74u)));
/* 83fd0c: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 83fd0f: fmul dword ptr [ebp - 0x8c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff74u)));
/* 83fd15: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 83fd18: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 83fd1b: fmul dword ptr [ebp - 0x8c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff74u)));
/* 83fd21: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 83fd24: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 83fd27: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 83fd2d: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 83fd30: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 83fd36: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 83fd39: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 83fd3f: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 83fd42: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83fd44: fmul dword ptr [ebp - 0x84] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 83fd4a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83fd4d: mov ecx, dword ptr [ebp - 0x8c] */
  ecx = R32((uint32_t)(ebp + 0xffffff74u));
/* 83fd53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83fd54: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83fd57: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 83fd5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83fd5e: fmul dword ptr [ebp - 0x84] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 83fd64: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 83fd67: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 83fd6a: fmul dword ptr [ebp - 0x84] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff7cu)));
/* 83fd70: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83fd73: fadd dword ptr [eax + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x178u)));
/* 83fd79: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83fd7c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 83fd7e: fadd dword ptr [eax + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x174u)));
/* 83fd84: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 83fd87: fadd dword ptr [eax + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x170u)));
/* 83fd8d: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 83fd90: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83fd93: fadd dword ptr [ebp - 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 83fd96: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 83fd99: fadd dword ptr [ebp - 0x80] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff80u)));
/* 83fd9c: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 83fd9f: fadd dword ptr [ebp - 0x54] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffacu)));
/* 83fda2: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 83fda5: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 83fda8: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 83fdab: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x83fdb1u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 83fdb1: mov esi, eax */
  esi = eax;
/* 83fdb3: mov eax, dword ptr [ebp - 0x84] */
  eax = R32((uint32_t)(ebp + 0xffffff7cu));
/* 83fdb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83fdba: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 83fdbd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83fdbe: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 83fdc1: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x83fdc7u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 83fdc7: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 83fdca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 83fdcb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 83fdcc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83fdcd: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 83fdd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 83fdd1: lea ecx, [ebp - 0x150] */
  ecx = (uint32_t)(ebp + 0xfffffeb0u);
/* 83fdd7: call dword ptr [0xcfa5b0] */
  esp -= 4; W32(esp, 0x83fdddu); SPILL(); f_4e317f(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@000@Z */ RELOAD();
/* 83fddd: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 83fde3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 83fde4: lea ecx, [ebp - 0x150] */
  ecx = (uint32_t)(ebp + 0xfffffeb0u);
/* 83fdea: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x83fdf0u); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 83fdf0: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 83fdf3: mov esi, eax */
  esi = eax;
/* 83fdf5: add edi, 0x47c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x47cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 83fdfb: mov ecx, 0x10 */
  ecx = 0x10u;
/* 83fe00: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 83fe02: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 83fe08: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x83fe0eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 83fe0e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83fe11: add eax, 0x3e8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3e8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83fe16: fild dword ptr [eax - 0xa0] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0xffffff60u)); FPUSH(v); }
/* 83fe1c: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 83fe1f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83fe21: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83fe24: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 83fe27: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83fe29: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 83fe2c: fmul dword ptr [ebp - 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff88u)));
/* 83fe2f: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83fe32: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83fe35: fadd dword ptr [eax - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffd8u)));
/* 83fe38: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83fe3b: fadd dword ptr [eax - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffd4u)));
/* 83fe3e: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83fe41: fadd dword ptr [eax - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffd0u)));
/* 83fe44: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 83fe47: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 83fe4a: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 83fe4c: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83fe4f: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 83fe52: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 83fe55: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83fe58: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 83fe5b: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 83fe5e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83fe61: fild dword ptr [eax + 0x348] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x348u)); FPUSH(v); }
/* 83fe67: add eax, 0x3f4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3f4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83fe6c: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 83fe6f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83fe71: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83fe74: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 83fe77: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83fe79: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 83fe7c: fmul dword ptr [ebp - 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff88u)));
/* 83fe7f: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83fe82: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83fe85: fadd dword ptr [eax - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffd8u)));
/* 83fe88: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83fe8b: fadd dword ptr [eax - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffd4u)));
/* 83fe8e: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83fe91: fadd dword ptr [eax - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffd0u)));
/* 83fe94: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 83fe97: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 83fe9a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83fe9c: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83fe9f: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 83fea2: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83fea5: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83fea8: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 83feab: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83feae: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83feb1: fild dword ptr [eax + 0x348] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x348u)); FPUSH(v); }
/* 83feb7: add eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83febc: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 83febf: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83fec1: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83fec4: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 83fec7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83fec9: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 83fecc: fmul dword ptr [ebp - 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff88u)));
/* 83fecf: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83fed2: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83fed5: fadd dword ptr [eax - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffd8u)));
/* 83fed8: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83fedb: fadd dword ptr [eax - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffd4u)));
/* 83fede: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83fee1: fadd dword ptr [eax - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffd0u)));
/* 83fee4: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 83fee7: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 83feea: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 83feec: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83feef: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 83fef2: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 83fef5: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83fef8: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 83fefb: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 83fefe: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83ff01: fild dword ptr [eax + 0x348] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x348u)); FPUSH(v); }
/* 83ff07: add eax, 0x40c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83ff0c: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 83ff0f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83ff11: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83ff14: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 83ff17: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83ff19: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 83ff1c: fmul dword ptr [ebp - 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff88u)));
/* 83ff1f: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83ff22: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 83ff25: fadd dword ptr [eax - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffd8u)));
/* 83ff28: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 83ff2b: fadd dword ptr [eax - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffd4u)));
/* 83ff2e: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 83ff31: fadd dword ptr [eax - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffd0u)));
/* 83ff34: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 83ff37: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 83ff3a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 83ff3c: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 83ff3f: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 83ff42: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 83ff45: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 83ff48: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 83ff4b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 83ff4e: jmp 0x840584 */
  goto L_840584;
L_83ff53: /* 83ff53: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 83ff55: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83ff58: fild dword ptr [eax + 0x344] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x344u)); FPUSH(v); }
/* 83ff5e: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 83ff64: fmul qword ptr [0xa16260] */
  ST0 = ST0 * (F64((uint32_t)(0xa16260u)));
/* 83ff6a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 83ff6d: call dword ptr [0xcfab08] */
  esp -= 4; W32(esp, 0x83ff73u); SPILL(); f_4e2a3b(); if (g_unwind) return; /* Core!?appTan@@YANN@Z */ RELOAD();
/* 83ff73: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 83ff76: fst qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 83ff79: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 83ff7c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83ff7f: fild dword ptr [edx + 0x344] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x344u)); FPUSH(v); }
/* 83ff85: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83ff88: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 83ff8e: fmul qword ptr [0xa16260] */
  ST0 = ST0 * (F64((uint32_t)(0xa16260u)));
/* 83ff94: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 83ff97: call dword ptr [0xcfa89c] */
  esp -= 4; W32(esp, 0x83ff9du); SPILL(); f_4e1807(); if (g_unwind) return; /* Core!?appCos@@YANN@Z */ RELOAD();
/* 83ff9d: fst qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 83ffa0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 83ffa3: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 83ffa6: lea ecx, [eax + 0x3b8] */
  ecx = (uint32_t)(eax + 0x3b8u);
/* 83ffac: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 83ffb2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 83ffb5: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 83ffbb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83ffbe: mov edx, esp */
  edx = esp;
/* 83ffc0: add eax, 0x3c4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 83ffc5: fdiv dword ptr [ebp - 0x68] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffff98u)));
/* 83ffc8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 83ffcb: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 83ffce: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83ffd0: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 83ffd3: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 83ffd6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 83ffd8: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 83ffdb: fmul dword ptr [ebp - 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff88u)));
/* 83ffde: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 83ffe1: fld dword ptr [eax - 0x24c] */
  { double v = F32((uint32_t)(eax + 0xfffffdb4u)); FPUSH(v); }
/* 83ffe7: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 83ffea: fld dword ptr [eax - 0x250] */
  { double v = F32((uint32_t)(eax + 0xfffffdb0u)); FPUSH(v); }
/* 83fff0: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 83fff3: fld dword ptr [eax - 0x254] */
  { double v = F32((uint32_t)(eax + 0xfffffdacu)); FPUSH(v); }
/* 83fff9: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 83fffc: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 83ffff: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 840002: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 840005: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 840007: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 840009: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 84000c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 84000f: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 840012: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 840015: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 840017: mov edx, esp */
  edx = esp;
/* 840019: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 84001b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 84001e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 840021: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 840024: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 840027: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 84002a: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 84002d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 840030: mov ecx, esp */
  ecx = esp;
/* 840032: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 840034: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 840037: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84003a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84003d: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 840043: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x840049u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 840049: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84004c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 84004e: add ecx, 0x368 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x368u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 840054: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 840056: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 840059: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 84005c: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 84005f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 840062: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 840065: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 840068: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84006b: lea ecx, [eax + 0x3c4] */
  ecx = (uint32_t)(eax + 0x3c4u);
/* 840071: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 840073: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 840076: mov edx, esp */
  edx = esp;
/* 840078: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 84007a: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 84007d: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 840080: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 840083: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 840086: add eax, 0x3d0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3d0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84008b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84008d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 840090: mov edx, esp */
  edx = esp;
/* 840092: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 840094: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 840097: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 84009a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 84009d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8400a0: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8400a3: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8400a6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8400a9: mov ecx, esp */
  ecx = esp;
/* 8400ab: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8400ad: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8400b0: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8400b3: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8400b6: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 8400bc: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x8400c2u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 8400c2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8400c4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8400c7: add ecx, 0x378 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x378u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8400cd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8400cf: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8400d2: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8400d5: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8400d8: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8400db: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8400de: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 8400e1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8400e4: lea ecx, [eax + 0x3d0] */
  ecx = (uint32_t)(eax + 0x3d0u);
/* 8400ea: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 8400ec: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8400ef: mov edx, esp */
  edx = esp;
/* 8400f1: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 8400f3: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 8400f6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8400f9: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 8400fc: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8400ff: add eax, 0x3dc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3dcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 840104: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 840106: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 840109: mov edx, esp */
  edx = esp;
/* 84010b: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 84010d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 840110: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 840113: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 840116: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 840119: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 84011c: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 84011f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 840122: mov ecx, esp */
  ecx = esp;
/* 840124: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 840126: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 840129: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84012c: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84012f: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 840135: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x84013bu); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 84013b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84013e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 840140: add ecx, 0x388 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x388u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 840146: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 840148: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84014b: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 84014e: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 840151: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 840154: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 840157: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 84015a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84015d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 840160: lea ecx, [eax + 0x3dc] */
  ecx = (uint32_t)(eax + 0x3dcu);
/* 840166: mov edx, esp */
  edx = esp;
/* 840168: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 84016a: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 84016c: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 84016f: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 840172: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 840175: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 840178: add eax, 0x3b8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3b8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 84017d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84017f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 840182: mov edx, esp */
  edx = esp;
/* 840184: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 840186: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 840189: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 84018c: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 84018f: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 840192: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 840195: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 840198: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84019b: mov ecx, esp */
  ecx = esp;
/* 84019d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84019f: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8401a2: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8401a5: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8401a8: lea ecx, [ebp - 0x9c] */
  ecx = (uint32_t)(ebp + 0xffffff64u);
/* 8401ae: call dword ptr [0xcfaad0] */
  esp -= 4; W32(esp, 0x8401b4u); SPILL(); f_4e21da(); if (g_unwind) return; /* Core!??0FPlane@@QAE@VFVector@@00@Z */ RELOAD();
/* 8401b4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8401b7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8401b9: add ecx, 0x398 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x398u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8401bf: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8401c1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8401c4: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8401c7: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8401ca: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8401cd: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8401d0: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 8401d3: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8401d6: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 8401dc: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 8401df: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8401e2: lea edx, [ebp - 0x78] */
  edx = (uint32_t)(ebp + 0xffffff88u);
/* 8401e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8401e6: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8401e9: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8401ec: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 8401ef: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 8401f2: fchs  */
  ST0 = -ST0;
/* 8401f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8401f5: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 8401f8: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8401fb: fchs  */
  ST0 = -ST0;
/* 8401fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8401fe: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 840201: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 840204: fchs  */
  ST0 = -ST0;
/* 840206: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 840207: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 84020a: lea ecx, [ebp - 0x150] */
  ecx = (uint32_t)(ebp + 0xfffffeb0u);
/* 840210: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 840214: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 840217: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 84021a: call dword ptr [0xcfa5b0] */
  esp -= 4; W32(esp, 0x840220u); SPILL(); f_4e317f(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@000@Z */ RELOAD();
/* 840220: lea eax, [ebp - 0x190] */
  eax = (uint32_t)(ebp + 0xfffffe70u);
/* 840226: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 840227: lea ecx, [ebp - 0x150] */
  ecx = (uint32_t)(ebp + 0xfffffeb0u);
/* 84022d: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x840233u); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 840233: mov esi, eax */
  esi = eax;
/* 840235: mov ecx, 0x10 */
  ecx = 0x10u;
/* 84023a: lea edi, [ebp - 0x1d0] */
  edi = (uint32_t)(ebp + 0xfffffe30u);
/* 840240: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 840242: lea ecx, [ebp - 0x190] */
  ecx = (uint32_t)(ebp + 0xfffffe70u);
/* 840248: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x84024eu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 84024e: lea ecx, [ebp - 0x120] */
  ecx = (uint32_t)(ebp + 0xfffffee0u);
/* 840254: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 840257: mov ecx, 0x40 */
  ecx = 0x40u;
/* 84025c: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84025f: xor eax, eax */
  eax = 0;
/* 840261: mov ebx, ecx */
  ebx = ecx;
/* 840263: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 840266: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 840269: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 84026b: mov ecx, ebx */
  ecx = ebx;
/* 84026d: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 84026f: fld dword ptr [0x9f7194] */
  { double v = F32((uint32_t)(0x9f7194u)); FPUSH(v); }
/* 840275: mov dword ptr [ebp - 0x100], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x3f000000u);
/* 84027f: fdiv dword ptr [ebp - 0x68] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffff98u)));
/* 840282: fst dword ptr [ebp - 0x120] */
  WF32((uint32_t)(ebp + 0xfffffee0u), ST0);
/* 840288: fstp dword ptr [ebp - 0x10c] */
  WF32((uint32_t)(ebp + 0xfffffef4u), ST0); FPOP();
/* 84028e: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 840291: mov edi, esp */
  edi = esp;
/* 840293: mov dword ptr [ebp - 0xfc], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffff04u), 0x3f000000u);
/* 84029d: mov dword ptr [ebp - 0xf8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff08u), 0x3f800000u);
/* 8402a7: mov dword ptr [ebp - 0xe4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff1cu), 0x3f800000u);
/* 8402b1: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8402b6: lea esi, [ebp - 0x120] */
  esi = (uint32_t)(ebp + 0xfffffee0u);
/* 8402bc: lea edx, [ebp - 0x190] */
  edx = (uint32_t)(ebp + 0xfffffe70u);
/* 8402c2: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8402c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8402c5: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 8402cb: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8402d1u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8402d1: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8402d4: mov esi, eax */
  esi = eax;
/* 8402d6: add edi, 0x47c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x47cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8402dc: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8402e1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8402e3: lea ecx, [ebp - 0x190] */
  ecx = (uint32_t)(ebp + 0xfffffe70u);
/* 8402e9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8402efu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8402ef: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8402f2: mov esi, dword ptr [0xcfa578] */
  esi = R32((uint32_t)(0xcfa578u));
/* 8402f8: fld dword ptr [eax + 0x3c0] */
  { double v = F32((uint32_t)(eax + 0x3c0u)); FPUSH(v); }
/* 8402fe: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 840301: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 840304: fld dword ptr [eax + 0x3bc] */
  { double v = F32((uint32_t)(eax + 0x3bcu)); FPUSH(v); }
/* 84030a: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 84030d: fld dword ptr [eax + 0x3b8] */
  { double v = F32((uint32_t)(eax + 0x3b8u)); FPUSH(v); }
/* 840313: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 840319: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 84031c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84031d: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 840320: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 840323: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 840326: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x840328u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 840328: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84032b: fild dword ptr [ecx + 0x348] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x348u)); FPUSH(v); }
/* 840331: mov edi, dword ptr [ebp - 0x80] */
  edi = R32((uint32_t)(ebp + 0xffffff80u));
/* 840334: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 840335: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 840338: fst dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0);
/* 84033b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84033c: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 84033f: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 840342: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 840345: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 840348: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 84034b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 84034d: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 840350: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 840353: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 840356: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x84035cu); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 84035c: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 84035f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 840362: fadd dword ptr [ecx + 0x3c0] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x3c0u)));
/* 840368: add ecx, 0x3e8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3e8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 84036e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 840371: fadd dword ptr [ecx - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffd4u)));
/* 840374: fld dword ptr [ecx - 0x30] */
  { double v = F32((uint32_t)(ecx + 0xffffffd0u)); FPUSH(v); }
/* 840377: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 840379: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 84037c: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 84037f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 840381: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 840384: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 840387: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 84038a: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 84038d: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 840390: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 840393: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 840396: fld dword ptr [eax + 0x3cc] */
  { double v = F32((uint32_t)(eax + 0x3ccu)); FPUSH(v); }
/* 84039c: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 8403a2: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8403a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8403a6: fld dword ptr [eax + 0x3c8] */
  { double v = F32((uint32_t)(eax + 0x3c8u)); FPUSH(v); }
/* 8403ac: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8403af: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 8403b2: fld dword ptr [eax + 0x3c4] */
  { double v = F32((uint32_t)(eax + 0x3c4u)); FPUSH(v); }
/* 8403b8: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 8403bb: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8403be: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8403c1: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8403c4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8403c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8403c6: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8403c9: fild dword ptr [edx + 0x348] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x348u)); FPUSH(v); }
/* 8403cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8403d0: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8403d3: fst dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0);
/* 8403d6: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8403d9: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8403dc: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8403df: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8403e2: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8403e4: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 8403e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8403e8: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 8403eb: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 8403ee: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 8403f1: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8403f7u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8403f7: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8403fa: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8403fd: fadd dword ptr [ecx + 0x3cc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x3ccu)));
/* 840403: add ecx, 0x3f4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3f4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 840409: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 84040c: fadd dword ptr [ecx - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffd4u)));
/* 84040f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 840411: fadd dword ptr [ecx - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffd0u)));
/* 840414: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 840417: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 84041a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84041c: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 84041f: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 840422: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 840425: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 840428: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 84042b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 84042e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 840431: fld dword ptr [eax + 0x3d8] */
  { double v = F32((uint32_t)(eax + 0x3d8u)); FPUSH(v); }
/* 840437: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 84043a: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 84043d: fld dword ptr [eax + 0x3d4] */
  { double v = F32((uint32_t)(eax + 0x3d4u)); FPUSH(v); }
/* 840443: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 840446: fld dword ptr [eax + 0x3d0] */
  { double v = F32((uint32_t)(eax + 0x3d0u)); FPUSH(v); }
/* 84044c: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 840452: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 840455: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 840456: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 840459: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 84045c: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 84045f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x840461u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 840461: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 840464: fild dword ptr [ecx + 0x348] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x348u)); FPUSH(v); }
/* 84046a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84046b: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 84046e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84046f: fst dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0);
/* 840472: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 840475: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 840478: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 84047b: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 84047e: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 840481: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 840483: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 840486: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 840489: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 84048c: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x840492u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 840492: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 840495: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 840498: fadd dword ptr [ecx + 0x3d8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x3d8u)));
/* 84049e: add ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8404a4: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8404a7: fadd dword ptr [ecx - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffd4u)));
/* 8404aa: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8404ac: fadd dword ptr [ecx - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffd0u)));
/* 8404af: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8404b2: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8404b5: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8404b7: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8404ba: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8404bd: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8404c0: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8404c3: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8404c6: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8404c9: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8404cc: fld dword ptr [eax + 0x3e4] */
  { double v = F32((uint32_t)(eax + 0x3e4u)); FPUSH(v); }
/* 8404d2: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 8404d8: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 8404db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8404dc: fld dword ptr [eax + 0x3e0] */
  { double v = F32((uint32_t)(eax + 0x3e0u)); FPUSH(v); }
/* 8404e2: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8404e5: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 8404e8: fld dword ptr [eax + 0x3dc] */
  { double v = F32((uint32_t)(eax + 0x3dcu)); FPUSH(v); }
/* 8404ee: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 8404f1: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8404f4: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8404f7: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8404fa: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8404fcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8404fc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8404ff: fild dword ptr [edx + 0x348] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x348u)); FPUSH(v); }
/* 840505: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 840506: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 840509: fst dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0);
/* 84050c: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 84050f: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 840512: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 840515: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 840518: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 84051a: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 84051d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 84051e: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 840521: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 840524: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 840527: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x84052du); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 84052d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 840530: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 840533: fadd dword ptr [ecx + 0x3e4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x3e4u)));
/* 840539: add ecx, 0x40c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 84053f: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 840542: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 840546: fadd dword ptr [ecx - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffd4u)));
/* 840549: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 84054b: fadd dword ptr [ecx - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xffffffd0u)));
/* 84054e: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 840551: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 840554: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 840556: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 840559: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 84055c: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 84055f: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 840562: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 840565: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 840568: lea ecx, [ebp - 0x1d0] */
  ecx = (uint32_t)(ebp + 0xfffffe30u);
/* 84056e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x840574u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 840574: lea ecx, [ebp - 0x120] */
  ecx = (uint32_t)(ebp + 0xfffffee0u);
/* 84057a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84057e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x840584u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_840584: /* 840584: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 840587: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84058a: fchs  */
  ST0 = -ST0;
/* 84058c: lea ecx, [eax + 0x40c] */
  ecx = (uint32_t)(eax + 0x40cu);
/* 840592: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 840595: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 840597: fchs  */
  ST0 = -ST0;
/* 840599: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 84059c: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 84059f: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8405a2: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8405a5: fchs  */
  ST0 = -ST0;
/* 8405a7: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 8405aa: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8405ad: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8405b0: fst dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0);
/* 8405b3: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 8405b6: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8405b9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8405bb: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 8405be: mov esi, dword ptr [ebp - 0x58] */
  esi = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8405c1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8405c3: add eax, 0x3a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8405c8: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 8405cb: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8405cd: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8405cf: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8405d2: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 8405d5: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 8405d8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8405da: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8405dd: fmul dword ptr [ebp - 0x60] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 8405e0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8405e2: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 8405e8: mov edx, dword ptr [ebp - 0x90] */
  edx = R32((uint32_t)(ebp + 0xffffff70u));
/* 8405ee: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 8405f1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8405f4: mov eax, dword ptr [ecx + 0x34c] */
  eax = R32((uint32_t)(ecx + 0x34cu));
/* 8405fa: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8405fd: je 0x84070f */
  if (zf) goto L_84070f;
L_840603: /* 840603: mov eax, dword ptr [ecx + 0x438] */
  eax = R32((uint32_t)(ecx + 0x438u));
/* 840609: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84060b: je 0x84070f */
  if (zf) goto L_84070f;
L_840611: /* 840611: mov esi, dword ptr [eax + 0x44] */
  esi = R32((uint32_t)(eax + 0x44u));
/* 840614: mov eax, dword ptr [ecx + 0x348] */
  eax = R32((uint32_t)(ecx + 0x348u));
/* 84061a: lea edx, [esi - 2] */
  edx = (uint32_t)(esi + 0xfffffffeu);
/* 84061d: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 840620: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 840623: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 840624: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x840624);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 840626: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 84062d: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 840634: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 84063b: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 840642: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 840649: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 840650: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 840651: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 840654: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 840657: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 84065a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 84065c: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 84065f: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 840662: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 840664: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 840667: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 84066a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 84066c: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 84066f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 840671: fld dword ptr [ecx + 0x178] */
  { double v = F32((uint32_t)(ecx + 0x178u)); FPUSH(v); }
/* 840677: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 84067a: fld dword ptr [ecx + 0x174] */
  { double v = F32((uint32_t)(ecx + 0x174u)); FPUSH(v); }
/* 840680: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 840683: fld dword ptr [ecx + 0x170] */
  { double v = F32((uint32_t)(ecx + 0x170u)); FPUSH(v); }
/* 840689: fsub dword ptr [ebp - 0x60] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 84068c: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 84068f: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 840692: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 840695: mov eax, dword ptr [ecx + 0x438] */
  eax = R32((uint32_t)(ecx + 0x438u));
/* 84069b: mov edx, dword ptr [eax + 0x44] */
  edx = R32((uint32_t)(eax + 0x44u));
/* 84069e: imul edx, dword ptr [ecx + 0x348] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ecx + 0x348u)));
  edx = (uint32_t)r;
  }
/* 8406a5: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8406a8: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 8406ae: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8406b1: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8406b4: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 8406b6: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8406b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8406ba: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8406bc: call dword ptr [0xcfa3e4] */
  esp -= 4; W32(esp, 0x8406c2u); SPILL(); f_4e2a7c(); if (g_unwind) return; /* Core!??KFVector@@QBE?AV0@M@Z */ RELOAD();
/* 8406c2: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8406c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8406c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8406c7: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 8406ca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8406cb: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 8406ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8406cf: lea ecx, [ebp - 0x150] */
  ecx = (uint32_t)(ebp + 0xfffffeb0u);
/* 8406d5: call dword ptr [0xcfa5b0] */
  esp -= 4; W32(esp, 0x8406dbu); SPILL(); f_4e317f(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@000@Z */ RELOAD();
/* 8406db: lea ecx, [ebp - 0x190] */
  ecx = (uint32_t)(ebp + 0xfffffe70u);
/* 8406e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8406e2: lea ecx, [ebp - 0x150] */
  ecx = (uint32_t)(ebp + 0xfffffeb0u);
/* 8406e8: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x8406eeu); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 8406ee: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8406f1: add edi, 0x43c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x43cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8406f7: mov esi, eax */
  esi = eax;
/* 8406f9: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8406fe: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 840700: lea ecx, [ebp - 0x190] */
  ecx = (uint32_t)(ebp + 0xfffffe70u);
/* 840706: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x84070cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 84070c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_84070f: /* 84070f: add ecx, 0x418 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x418u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 840715: call dword ptr [0xcfa644] */
  esp -= 4; W32(esp, 0x84071bu); SPILL(); f_4e303a(); if (g_unwind) return; /* Core!?Init@FBox@@QAEXXZ */ RELOAD();
/* 84071b: xor esi, esi */
  esi = 0;
/* 84071d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_840720: /* 840720: cmp esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 840723: jge 0x840742 */
  if ((sf == of)) goto L_840742;
L_840725: /* 840725: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 840728: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 84072b: lea ecx, [eax + edx*4 + 0x3b8] */
  ecx = (uint32_t)(eax + edx*4 + 0x3b8u);
/* 840732: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 840733: lea ecx, [eax + 0x418] */
  ecx = (uint32_t)(eax + 0x418u);
/* 840739: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x84073fu); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 84073f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 840740: jmp 0x840720 */
  goto L_840720;
L_840742: /* 840742: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 840745: mov eax, dword ptr [ecx + 0x434] */
  eax = R32((uint32_t)(ecx + 0x434u));
/* 84074b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84074d: je 0x840796 */
  if (zf) goto L_840796;
L_84074f: /* 84074f: lea esi, [ecx + 0x47c] */
  esi = (uint32_t)(ecx + 0x47cu);
/* 840755: lea edi, [eax + 0x24] */
  edi = (uint32_t)(eax + 0x24u);
/* 840758: mov ecx, 0x10 */
  ecx = 0x10u;
/* 84075d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 84075f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 840762: lea edx, [ebp - 0x190] */
  edx = (uint32_t)(ebp + 0xfffffe70u);
/* 840768: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 840769: add ecx, 0x47c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x47cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 84076f: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x840775u); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 840775: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 840778: mov edi, dword ptr [ecx + 0x434] */
  edi = R32((uint32_t)(ecx + 0x434u));
/* 84077e: add edi, 0x64 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 840781: mov esi, eax */
  esi = eax;
/* 840783: mov ecx, 0x10 */
  ecx = 0x10u;
/* 840788: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 84078a: lea ecx, [ebp - 0x190] */
  ecx = (uint32_t)(ebp + 0xfffffe70u);
/* 840790: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x840796u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_840796: /* 840796: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 840799: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84079a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84079b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8407a2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8407a3: mov esp, ebp */
  esp = ebp;
/* 8407a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8407a6: ret  */
  esp += 4; SPILL(); return;
}

void f_8407a7(void) {
  LOAD_REGS();
L_8407a7: /* 8407a7: mov edx, dword ptr [ebp - 0xb0] */
  edx = R32((uint32_t)(ebp + 0xffffff50u));
/* 8407ad: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8407b2: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 8407b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8407b9: mov dword ptr [ebp - 0xac], edx */
  W32((uint32_t)(ebp + 0xffffff54u), edx);
/* 8407bf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8407c4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8407c4(); return;
}

void f_8407c4(void) {
  LOAD_REGS();
L_8407c4: /* 8407c4: push 0xa16224 */
  { uint32_t v = 0xa16224u; esp -= 4; W32(esp, v); }
/* 8407c9: push 0xae3e50 */
  { uint32_t v = 0xae3e50u; esp -= 4; W32(esp, v); }
/* 8407ce: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8407d4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8407d4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8407d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8407d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8407db: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8407e0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8407e0: guest_badaddr(0x8407e0); return;
}

void f_840cc0(void) {
  LOAD_REGS();
L_840cc0: /* 840cc0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 840cc4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 840cc6: jge 0x840cd6 */
  if ((sf == of)) goto L_840cd6;
L_840cc8: /* 840cc8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 840cc9: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 840ccc: mov edx, eax */
  edx = eax;
/* 840cce: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 840cd1: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 840cd3: ret 4 */
  esp += 8; SPILL(); return;
L_840cd6: /* 840cd6: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 840cd9: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 840cdc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 840cde: ret 4 */
  esp += 8; SPILL(); return;
}

void f_840d00(void) {
  LOAD_REGS();
L_840d00: /* 840d00: mov eax, ecx */
  eax = ecx;
/* 840d02: ret  */
  esp += 4; SPILL(); return;
}

void f_840d20(void) {
  LOAD_REGS();
L_840d20: /* 840d20: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 840d23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 840d24: xor eax, eax */
  eax = 0;
/* 840d26: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 840d28: jle 0x840d3e */
  if ((zf || sf != of)) goto L_840d3e;
L_840d2a: /* 840d2a: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 840d2e: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 840d30: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
L_840d32: /* 840d32: cmp dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 840d34: je 0x840d41 */
  if (zf) goto L_840d41;
L_840d36: /* 840d36: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 840d37: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 840d3a: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 840d3c: jl 0x840d32 */
  if ((sf != of)) goto L_840d32;
L_840d3e: /* 840d3e: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_840d41: /* 840d41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 840d42: ret 4 */
  esp += 8; SPILL(); return;
}

void f_840d60(void) {
  LOAD_REGS();
L_840d60: /* 840d60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 840d61: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 840d63: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 840d65: mov esi, ecx */
  esi = ecx;
/* 840d67: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x840d6du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 840d6d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 840d71: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 840d73: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 840d75: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 840d78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 840d79: ret 4 */
  esp += 8; SPILL(); return;
}

void f_840d90(void) {
  LOAD_REGS();
L_840d90: /* 840d90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 840d91: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 840d92: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 840d98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 840d99: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 840d9a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 840d9e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 840da0: mov esi, ecx */
  esi = ecx;
/* 840da2: jge 0x840db8 */
  if ((sf == of)) goto L_840db8;
L_840da4: /* 840da4: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 840da9: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 840dae: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 840db3: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x840db5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 840db5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_840db8: /* 840db8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 840dbb: jle 0x840dd1 */
  if ((zf || sf != of)) goto L_840dd1;
L_840dbd: /* 840dbd: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 840dc2: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 840dc7: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 840dcc: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x840dceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 840dce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_840dd1: /* 840dd1: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 840dd5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 840dd8: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 840ddb: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 840ddd: jle 0x840df3 */
  if ((zf || sf != of)) goto L_840df3;
L_840ddf: /* 840ddf: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 840de4: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 840de9: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 840dee: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x840df0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 840df0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_840df3: /* 840df3: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 840df5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 840df6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 840df7: mov ecx, esi */
  ecx = esi;
/* 840df9: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x840dffu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 840dff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 840e00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 840e01: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 840e02: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 840e03: ret 8 */
  esp += 12; SPILL(); return;
}

void f_840e30(void) {
  LOAD_REGS();
L_840e30: /* 840e30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 840e31: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 840e32: mov ebp, dword ptr [0xcfa2fc] */
  ebp = R32((uint32_t)(0xcfa2fcu));
/* 840e38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 840e39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 840e3a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 840e3e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 840e40: mov esi, ecx */
  esi = ecx;
/* 840e42: jge 0x840e58 */
  if ((sf == of)) goto L_840e58;
L_840e44: /* 840e44: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 840e49: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 840e4e: push 0xac3c34 */
  { uint32_t v = 0xac3c34u; esp -= 4; W32(esp, v); }
/* 840e53: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x840e55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 840e55: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_840e58: /* 840e58: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 840e5b: jle 0x840e71 */
  if ((zf || sf != of)) goto L_840e71;
L_840e5d: /* 840e5d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 840e62: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 840e67: push 0xac3c20 */
  { uint32_t v = 0xac3c20u; esp -= 4; W32(esp, v); }
/* 840e6c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x840e6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 840e6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_840e71: /* 840e71: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 840e75: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 840e78: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 840e7b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 840e7d: jle 0x840e93 */
  if ((zf || sf != of)) goto L_840e93;
L_840e7f: /* 840e7f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 840e84: push 0xac3bb0 */
  { uint32_t v = 0xac3bb0u; esp -= 4; W32(esp, v); }
/* 840e89: push 0xac3c04 */
  { uint32_t v = 0xac3c04u; esp -= 4; W32(esp, v); }
/* 840e8e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x840e90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 840e90: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_840e93: /* 840e93: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 840e95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 840e96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 840e97: mov ecx, esi */
  ecx = esi;
/* 840e99: call dword ptr [0xcfa390] */
  esp -= 4; W32(esp, 0x840e9fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 840e9f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 840ea0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 840ea1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 840ea2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 840ea3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_840ed0(void) {
  LOAD_REGS();
L_840ed0: /* 840ed0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 840ed1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 840ed5: push 0xcc91e8 */
  { uint32_t v = 0xcc91e8u; esp -= 4; W32(esp, v); }
/* 840eda: mov ecx, esi */
  ecx = esi;
/* 840edc: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x840ee2u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 840ee2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 840ee4: jne 0x840efe */
  if (!zf) goto L_840efe;
L_840ee6: /* 840ee6: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 840eeb: push 0xae3ef0 */
  { uint32_t v = 0xae3ef0u; esp -= 4; W32(esp, v); }
/* 840ef0: push 0xae3f34 */
  { uint32_t v = 0xae3f34u; esp -= 4; W32(esp, v); }
/* 840ef5: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x840efbu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 840efb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_840efe: /* 840efe: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 840f02: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 840f05: jne 0x840f0d */
  if (!zf) goto L_840f0d;
L_840f07: /* 840f07: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x840f0du); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_840f0d: /* 840f0d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 840f13: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 840f15: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 840f19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 840f1b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 840f1c: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 840f20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 840f22: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 840f23: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 840f24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 840f25: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 840f26: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x840f2cu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 840f2c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 840f2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 840f30: ret  */
  esp += 4; SPILL(); return;
}

void f_840f60(void) {
  LOAD_REGS();
L_840f60: /* 840f60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 840f61: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 840f65: push 0xcc8788 */
  { uint32_t v = 0xcc8788u; esp -= 4; W32(esp, v); }
/* 840f6a: mov ecx, esi */
  ecx = esi;
/* 840f6c: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x840f72u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 840f72: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 840f74: jne 0x840f8e */
  if (!zf) goto L_840f8e;
L_840f76: /* 840f76: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 840f7b: push 0xae3f58 */
  { uint32_t v = 0xae3f58u; esp -= 4; W32(esp, v); }
/* 840f80: push 0xae3f9c */
  { uint32_t v = 0xae3f9cu; esp -= 4; W32(esp, v); }
/* 840f85: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x840f8bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 840f8b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_840f8e: /* 840f8e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 840f92: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 840f95: jne 0x840f9d */
  if (!zf) goto L_840f9d;
L_840f97: /* 840f97: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x840f9du); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
L_840f9d: /* 840f9d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 840fa3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 840fa5: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 840fa9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 840fab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 840fac: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 840fb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 840fb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 840fb3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 840fb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 840fb5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 840fb6: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x840fbcu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 840fbc: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 840fbf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 840fc0: ret  */
  esp += 4; SPILL(); return;
}

void f_840ff0(void) {
  LOAD_REGS();
L_840ff0: /* 840ff0: sub esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 840ff6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 840ff7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 840ff8: mov esi, dword ptr [esp + 0xa8] */
  esi = R32((uint32_t)(esp + 0xa8u));
/* 840fff: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 841001: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 841002: je 0x841019 */
  if (zf) goto L_841019;
L_841004: /* 841004: push 0xcc8cb8 */
  { uint32_t v = 0xcc8cb8u; esp -= 4; W32(esp, v); }
/* 841009: mov ecx, esi */
  ecx = esi;
/* 84100b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x841011u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 841011: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 841013: je 0x841019 */
  if (zf) goto L_841019;
L_841015: /* 841015: mov ebx, esi */
  ebx = esi;
/* 841017: jmp 0x84101b */
  goto L_84101b;
L_841019: /* 841019: xor ebx, ebx */
  ebx = 0;
L_84101b: /* 84101b: xor edx, edx */
  edx = 0;
/* 84101d: lea ecx, [ebx + 0x360] */
  ecx = (uint32_t)(ebx + 0x360u);
/* 841023: mov esi, 0x7fffffff */
  esi = 0x7fffffffu;
/* 841028: jmp 0x841030 */
  goto L_841030;
L_841030: /* 841030: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 841037: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 84103a: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 84103e: fld dword ptr [esp + 0xc0] */
  { double v = F32((uint32_t)(esp + 0xc0u)); FPUSH(v); }
/* 841045: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 841049: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 84104c: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 84104e: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 841052: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 841056: fld dword ptr [esp + 0xc4] */
  { double v = F32((uint32_t)(esp + 0xc4u)); FPUSH(v); }
/* 84105d: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 841061: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 841063: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 841065: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 841069: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 84106d: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 841074: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 841078: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 84107b: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 84107d: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 841084: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 841088: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 84108a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84108c: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 841093: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 841096: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 841098: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 84109b: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 84109f: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 8410a3: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 8410a7: fchs  */
  ST0 = -ST0;
/* 8410a9: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8410ab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8410ad: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8410b0: je 0x841386 */
  if (zf) goto L_841386;
L_8410b6: /* 8410b6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8410b7: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8410ba: cmp edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8410bd: jl 0x841030 */
  if ((sf != of)) goto L_841030;
L_8410c3: /* 8410c3: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 8410ca: lea esi, [ebx + 0x418] */
  esi = (uint32_t)(ebx + 0x418u);
/* 8410d0: mov ecx, 7 */
  ecx = 0x7u;
/* 8410d5: lea edi, [esp + 0x28] */
  edi = (uint32_t)(esp + 0x28u);
/* 8410d9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8410db: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 8410df: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8410e3: fld dword ptr [esp + 0xc0] */
  { double v = F32((uint32_t)(esp + 0xc0u)); FPUSH(v); }
/* 8410ea: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 8410ee: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8410f2: fld dword ptr [esp + 0xc4] */
  { double v = F32((uint32_t)(esp + 0xc4u)); FPUSH(v); }
/* 8410f9: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 8410fd: lea esi, [esp + 0x44] */
  esi = (uint32_t)(esp + 0x44u);
/* 841101: mov edi, 6 */
  edi = 0x6u;
/* 841106: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 84110a: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 84110e: fsub dword ptr [esp + 0xbc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xbcu)));
/* 841115: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 841119: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 84111d: fsub dword ptr [esp + 0xc0] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xc0u)));
/* 841124: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 841128: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 84112c: fsub dword ptr [esp + 0xc4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xc4u)));
/* 841133: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
L_841137: /* 841137: mov ecx, esi */
  ecx = esi;
/* 841139: call dword ptr [0xcfa36c] */
  esp -= 4; W32(esp, 0x84113fu); SPILL(); f_4e159b(); if (g_unwind) return; /* Core!??0FPlane@@QAE@XZ */ RELOAD();
/* 84113f: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 841142: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 841143: jne 0x841137 */
  if (!zf) goto L_841137;
L_841145: /* 841145: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 841149: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 84114d: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 841151: fchs  */
  ST0 = -ST0;
/* 841153: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 84115b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 84115f: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 841163: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 841167: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 84116f: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 841173: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 841177: mov dword ptr [esp + 0x14], 0x3f800000 */
  W32((uint32_t)(esp + 0x14u), 0x3f800000u);
/* 84117f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 841183: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 841187: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 84118b: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 841193: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 841197: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 84119b: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8411a3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8411a7: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 8411ab: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 8411af: mov dword ptr [esp + 0x14], 0xbf800000 */
  W32((uint32_t)(esp + 0x14u), 0xbf800000u);
/* 8411b7: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8411bb: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 8411bf: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8411c3: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8411c7: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8411cb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8411cf: fchs  */
  ST0 = -ST0;
/* 8411d1: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 8411d5: mov dword ptr [esp + 0xc], 0x3f800000 */
  W32((uint32_t)(esp + 0xcu), 0x3f800000u);
/* 8411dd: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8411e1: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 8411e5: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8411e9: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8411f1: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8411f5: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8411fd: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 841201: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 841205: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 841209: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 84120d: mov dword ptr [esp + 0xc], 0xbf800000 */
  W32((uint32_t)(esp + 0xcu), 0xbf800000u);
/* 841215: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 841219: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 841221: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 841225: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 84122d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 841231: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 841235: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 841239: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 84123d: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 841241: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 841245: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 841249: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 84124d: fchs  */
  ST0 = -ST0;
/* 84124f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 841253: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 84125b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 84125f: mov dword ptr [esp + 0x80], edx */
  W32((uint32_t)(esp + 0x80u), edx);
/* 841266: mov dword ptr [esp + 0x10], 0x3f800000 */
  W32((uint32_t)(esp + 0x10u), 0x3f800000u);
/* 84126e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 841272: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 84127a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 84127e: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 841285: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 841289: mov dword ptr [esp + 0x88], edx */
  W32((uint32_t)(esp + 0x88u), edx);
/* 841290: mov dword ptr [esp + 0x8c], eax */
  W32((uint32_t)(esp + 0x8cu), eax);
/* 841297: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 84129f: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8412a3: mov dword ptr [esp + 0x10], 0xbf800000 */
  W32((uint32_t)(esp + 0x10u), 0xbf800000u);
/* 8412ab: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8412af: mov dword ptr [esp + 0x90], ecx */
  W32((uint32_t)(esp + 0x90u), ecx);
/* 8412b6: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8412be: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8412c2: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8412c6: mov dword ptr [esp + 0x94], edx */
  W32((uint32_t)(esp + 0x94u), edx);
/* 8412cd: mov dword ptr [esp + 0x98], eax */
  W32((uint32_t)(esp + 0x98u), eax);
/* 8412d4: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8412d8: mov dword ptr [esp + 0x9c], ecx */
  W32((uint32_t)(esp + 0x9cu), ecx);
/* 8412df: mov dword ptr [esp + 0xa0], edx */
  W32((uint32_t)(esp + 0xa0u), edx);
/* 8412e6: xor edx, edx */
  edx = 0;
/* 8412e8: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 8412ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8412f0: /* 8412f0: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 8412f7: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 8412fa: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 841301: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 841304: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 841306: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 84130d: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 84130f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 841311: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 841314: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 84131a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84131c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84131f: jnp 0x841386 */
  if (!pf) goto L_841386;
L_841321: /* 841321: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 841322: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 841325: cmp edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 841328: jl 0x8412f0 */
  if ((sf != of)) goto L_8412f0;
L_84132a: /* 84132a: mov esi, dword ptr [esp + 0xa8] */
  esi = R32((uint32_t)(esp + 0xa8u));
/* 841331: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 841335: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 841336: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 84133c: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 84133f: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x841345u); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 841345: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 841347: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 84134a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84134c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84134f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 841352: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 841355: mov edx, dword ptr [esp + 0xb4] */
  edx = R32((uint32_t)(esp + 0xb4u));
/* 84135c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 84135f: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 841366: mov eax, dword ptr [esp + 0xb8] */
  eax = R32((uint32_t)(esp + 0xb8u));
/* 84136d: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 841370: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 841372: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 841375: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 841376: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 841379: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84137a: xor eax, eax */
  eax = 0;
/* 84137c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84137d: add esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 841383: ret 0x24 */
  esp += 40; SPILL(); return;
L_841386: /* 841386: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 841387: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 841388: mov eax, 1 */
  eax = 0x1u;
/* 84138d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84138e: add esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 841394: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_84102a(void) {
  LOAD_REGS();
L_84102a: /* 84102a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_841030: /* 841030: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 841037: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 84103a: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 84103e: fld dword ptr [esp + 0xc0] */
  { double v = F32((uint32_t)(esp + 0xc0u)); FPUSH(v); }
/* 841045: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 841049: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 84104c: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 84104e: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 841052: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 841056: fld dword ptr [esp + 0xc4] */
  { double v = F32((uint32_t)(esp + 0xc4u)); FPUSH(v); }
/* 84105d: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* 841061: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 841063: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 841065: mov dword ptr [esp + 0x20], edi */
  W32((uint32_t)(esp + 0x20u), edi);
/* 841069: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 84106d: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 841074: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 841078: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 84107b: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 84107d: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 841084: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 841088: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 84108a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84108c: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 841093: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 841096: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 841098: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 84109b: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 84109f: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* 8410a3: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 8410a7: fchs  */
  ST0 = -ST0;
/* 8410a9: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8410ab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8410ad: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8410b0: je 0x841386 */
  if (zf) goto L_841386;
L_8410b6: /* 8410b6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8410b7: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8410ba: cmp edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8410bd: jl 0x841030 */
  if ((sf != of)) goto L_841030;
L_8410c3: /* 8410c3: fld dword ptr [esp + 0xbc] */
  { double v = F32((uint32_t)(esp + 0xbcu)); FPUSH(v); }
/* 8410ca: lea esi, [ebx + 0x418] */
  esi = (uint32_t)(ebx + 0x418u);
/* 8410d0: mov ecx, 7 */
  ecx = 0x7u;
/* 8410d5: lea edi, [esp + 0x28] */
  edi = (uint32_t)(esp + 0x28u);
/* 8410d9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8410db: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 8410df: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8410e3: fld dword ptr [esp + 0xc0] */
  { double v = F32((uint32_t)(esp + 0xc0u)); FPUSH(v); }
/* 8410ea: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 8410ee: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8410f2: fld dword ptr [esp + 0xc4] */
  { double v = F32((uint32_t)(esp + 0xc4u)); FPUSH(v); }
/* 8410f9: fadd dword ptr [esp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x3cu)));
/* 8410fd: lea esi, [esp + 0x44] */
  esi = (uint32_t)(esp + 0x44u);
/* 841101: mov edi, 6 */
  edi = 0x6u;
/* 841106: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 84110a: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 84110e: fsub dword ptr [esp + 0xbc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xbcu)));
/* 841115: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 841119: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 84111d: fsub dword ptr [esp + 0xc0] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xc0u)));
/* 841124: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 841128: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 84112c: fsub dword ptr [esp + 0xc4] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xc4u)));
/* 841133: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
L_841137: /* 841137: mov ecx, esi */
  ecx = esi;
/* 841139: call dword ptr [0xcfa36c] */
  esp -= 4; W32(esp, 0x84113fu); SPILL(); f_4e159b(); if (g_unwind) return; /* Core!??0FPlane@@QAE@XZ */ RELOAD();
/* 84113f: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 841142: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 841143: jne 0x841137 */
  if (!zf) goto L_841137;
L_841145: /* 841145: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 841149: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 84114d: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 841151: fchs  */
  ST0 = -ST0;
/* 841153: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 84115b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 84115f: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 841163: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 841167: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 84116f: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 841173: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 841177: mov dword ptr [esp + 0x14], 0x3f800000 */
  W32((uint32_t)(esp + 0x14u), 0x3f800000u);
/* 84117f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 841183: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 841187: mov dword ptr [esp + 0x50], ecx */
  W32((uint32_t)(esp + 0x50u), ecx);
/* 84118b: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 841193: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 841197: mov dword ptr [esp + 0x54], edx */
  W32((uint32_t)(esp + 0x54u), edx);
/* 84119b: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8411a3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8411a7: mov dword ptr [esp + 0x58], eax */
  W32((uint32_t)(esp + 0x58u), eax);
/* 8411ab: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 8411af: mov dword ptr [esp + 0x14], 0xbf800000 */
  W32((uint32_t)(esp + 0x14u), 0xbf800000u);
/* 8411b7: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8411bb: mov dword ptr [esp + 0x5c], ecx */
  W32((uint32_t)(esp + 0x5cu), ecx);
/* 8411bf: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8411c3: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8411c7: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8411cb: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8411cf: fchs  */
  ST0 = -ST0;
/* 8411d1: mov dword ptr [esp + 0x60], edx */
  W32((uint32_t)(esp + 0x60u), edx);
/* 8411d5: mov dword ptr [esp + 0xc], 0x3f800000 */
  W32((uint32_t)(esp + 0xcu), 0x3f800000u);
/* 8411dd: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8411e1: mov dword ptr [esp + 0x64], ecx */
  W32((uint32_t)(esp + 0x64u), ecx);
/* 8411e5: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8411e9: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 8411f1: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8411f5: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8411fd: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 841201: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 841205: mov dword ptr [esp + 0x6c], eax */
  W32((uint32_t)(esp + 0x6cu), eax);
/* 841209: mov dword ptr [esp + 0x70], ecx */
  W32((uint32_t)(esp + 0x70u), ecx);
/* 84120d: mov dword ptr [esp + 0xc], 0xbf800000 */
  W32((uint32_t)(esp + 0xcu), 0xbf800000u);
/* 841215: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 841219: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* 841221: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 841225: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 84122d: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 841231: mov dword ptr [esp + 0x74], edx */
  W32((uint32_t)(esp + 0x74u), edx);
/* 841235: mov dword ptr [esp + 0x78], eax */
  W32((uint32_t)(esp + 0x78u), eax);
/* 841239: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 84123d: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 841241: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 841245: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 841249: mov dword ptr [esp + 0x7c], ecx */
  W32((uint32_t)(esp + 0x7cu), ecx);
/* 84124d: fchs  */
  ST0 = -ST0;
/* 84124f: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 841253: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 84125b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 84125f: mov dword ptr [esp + 0x80], edx */
  W32((uint32_t)(esp + 0x80u), edx);
/* 841266: mov dword ptr [esp + 0x10], 0x3f800000 */
  W32((uint32_t)(esp + 0x10u), 0x3f800000u);
/* 84126e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 841272: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 84127a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 84127e: mov dword ptr [esp + 0x84], ecx */
  W32((uint32_t)(esp + 0x84u), ecx);
/* 841285: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 841289: mov dword ptr [esp + 0x88], edx */
  W32((uint32_t)(esp + 0x88u), edx);
/* 841290: mov dword ptr [esp + 0x8c], eax */
  W32((uint32_t)(esp + 0x8cu), eax);
/* 841297: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 84129f: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8412a3: mov dword ptr [esp + 0x10], 0xbf800000 */
  W32((uint32_t)(esp + 0x10u), 0xbf800000u);
/* 8412ab: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8412af: mov dword ptr [esp + 0x90], ecx */
  W32((uint32_t)(esp + 0x90u), ecx);
/* 8412b6: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8412be: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8412c2: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8412c6: mov dword ptr [esp + 0x94], edx */
  W32((uint32_t)(esp + 0x94u), edx);
/* 8412cd: mov dword ptr [esp + 0x98], eax */
  W32((uint32_t)(esp + 0x98u), eax);
/* 8412d4: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8412d8: mov dword ptr [esp + 0x9c], ecx */
  W32((uint32_t)(esp + 0x9cu), ecx);
/* 8412df: mov dword ptr [esp + 0xa0], edx */
  W32((uint32_t)(esp + 0xa0u), edx);
/* 8412e6: xor edx, edx */
  edx = 0;
/* 8412e8: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 8412ec: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8412f0: /* 8412f0: fld dword ptr [esp + 0xb4] */
  { double v = F32((uint32_t)(esp + 0xb4u)); FPUSH(v); }
/* 8412f7: fmul dword ptr [ecx - 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffffcu)));
/* 8412fa: fld dword ptr [esp + 0xb0] */
  { double v = F32((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* 841301: fmul dword ptr [ecx - 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xfffffff8u)));
/* 841304: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 841306: fld dword ptr [esp + 0xb8] */
  { double v = F32((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* 84130d: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 84130f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 841311: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 841314: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 84131a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 84131c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 84131f: jnp 0x841386 */
  if (!pf) goto L_841386;
L_841321: /* 841321: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 841322: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 841325: cmp edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 841328: jl 0x8412f0 */
  if ((sf != of)) goto L_8412f0;
L_84132a: /* 84132a: mov esi, dword ptr [esp + 0xa8] */
  esi = R32((uint32_t)(esp + 0xa8u));
/* 841331: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 841335: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 841336: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 84133c: mov dword ptr [esi + 4], ebx */
  W32((uint32_t)(esi + 0x4u), ebx);
/* 84133f: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x841345u); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 841345: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 841347: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* 84134a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 84134c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84134f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 841352: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 841355: mov edx, dword ptr [esp + 0xb4] */
  edx = R32((uint32_t)(esp + 0xb4u));
/* 84135c: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 84135f: mov ecx, dword ptr [esp + 0xb0] */
  ecx = R32((uint32_t)(esp + 0xb0u));
/* 841366: mov eax, dword ptr [esp + 0xb8] */
  eax = R32((uint32_t)(esp + 0xb8u));
/* 84136d: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 841370: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 841372: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 841375: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 841376: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 841379: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84137a: xor eax, eax */
  eax = 0;
/* 84137c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84137d: add esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 841383: ret 0x24 */
  esp += 40; SPILL(); return;
L_841386: /* 841386: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 841387: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 841388: mov eax, 1 */
  eax = 0x1u;
/* 84138d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 84138e: add esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 841394: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_841490(void) {
  LOAD_REGS();
L_841490: /* 841490: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 841491: mov ebp, esp */
  ebp = esp;
/* 841493: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 841495: push 0x9d35c0 */
  { uint32_t v = 0x9d35c0u; esp -= 4; W32(esp, v); }
/* 84149a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8414a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8414a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8414a8: sub esp, 0x128 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x128u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8414ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8414af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8414b0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8414b3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8414b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8414b6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8414b9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8414c0: je 0x841c8e */
  if (zf) goto L_841c8e;
L_8414c6: /* 8414c6: push 0xcc8cb8 */
  { uint32_t v = 0xcc8cb8u; esp -= 4; W32(esp, v); }
/* 8414cb: mov ecx, esi */
  ecx = esi;
/* 8414cd: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8414d3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8414d3: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 8414d6: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 8414d8: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 8414da: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8414dc: mov ebx, eax */
  ebx = eax;
/* 8414de: lea esi, [ebx + 0x418] */
  esi = (uint32_t)(ebx + 0x418u);
/* 8414e4: mov ecx, 7 */
  ecx = 0x7u;
/* 8414e9: lea edi, [ebp - 0x60] */
  edi = (uint32_t)(ebp + 0xffffffa0u);
/* 8414ec: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8414ee: fadd dword ptr [ebp - 0x54] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffacu)));
/* 8414f1: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8414f4: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 8414f7: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 8414fa: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8414fd: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 841500: fadd dword ptr [ebp - 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 841503: mov edi, dword ptr [0xcfa36c] */
  edi = R32((uint32_t)(0xcfa36cu));
/* 841509: mov dword ptr [ebp - 0x14], 0xc */
  W32((uint32_t)(ebp + 0xffffffecu), 0xcu);
/* 841510: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 841513: lea esi, [ebp - 0x130] */
  esi = (uint32_t)(ebp + 0xfffffed0u);
/* 841519: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 84151c: fsub dword ptr [ebp + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x28u)));
/* 84151f: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 841522: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 841525: fsub dword ptr [ebp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x2cu)));
/* 841528: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 84152b: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 84152e: fsub dword ptr [ebp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x30u)));
/* 841531: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
L_841534: /* 841534: dec dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 841537: js 0x841546 */
  if (sf) goto L_841546;
L_841539: /* 841539: mov ecx, esi */
  ecx = esi;
/* 84153b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x84153du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84153d: mov eax, 0x10 */
  eax = 0x10u;
/* 841542: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 841544: jmp 0x841534 */
  goto L_841534;
L_841546: /* 841546: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 841549: lea eax, [ebx + 0x358] */
  eax = (uint32_t)(ebx + 0x358u);
/* 84154f: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 841551: mov ecx, eax */
  ecx = eax;
/* 841553: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 841555: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 841558: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 84155b: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 84155e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 841561: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 841564: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 841567: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 84156a: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 84156d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 841570: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 841573: mov edx, eax */
  edx = eax;
/* 841575: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 841577: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 84157a: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 84157d: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 841580: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 841583: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 841586: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 841589: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 84158c: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 84158f: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 841592: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 841595: mov esi, 0x7fffffff */
  esi = 0x7fffffffu;
/* 84159a: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 84159c: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 84159e: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8415a0: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8415a3: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8415a6: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8415a9: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8415ac: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8415af: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8415b1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8415b4: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8415b7: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8415ba: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8415bd: mov dword ptr [ebp - 0x128], eax */
  W32((uint32_t)(ebp + 0xfffffed8u), eax);
/* 8415c3: mov dword ptr [ebp - 0x130], ecx */
  W32((uint32_t)(ebp + 0xfffffed0u), ecx);
/* 8415c9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8415cb: mov dword ptr [ebp - 0x12c], edx */
  W32((uint32_t)(ebp + 0xfffffed4u), edx);
/* 8415d1: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8415d4: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8415d6: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8415d9: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8415dc: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8415de: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8415e1: fld dword ptr [ebx + 0x3c0] */
  { double v = F32((uint32_t)(ebx + 0x3c0u)); FPUSH(v); }
/* 8415e7: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8415e9: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 8415eb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8415ed: fld dword ptr [ebx + 0x3bc] */
  { double v = F32((uint32_t)(ebx + 0x3bcu)); FPUSH(v); }
/* 8415f3: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8415f6: fld dword ptr [ebx + 0x3b8] */
  { double v = F32((uint32_t)(ebx + 0x3b8u)); FPUSH(v); }
/* 8415fc: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8415ff: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 841602: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 841604: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 841607: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 841609: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84160b: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 84160e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 841610: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 841612: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 841615: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 841618: mov dword ptr [ebp - 0x124], eax */
  W32((uint32_t)(ebp + 0xfffffedcu), eax);
/* 84161e: lea eax, [ebx + 0x368] */
  eax = (uint32_t)(ebx + 0x368u);
/* 841624: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 841626: mov ecx, eax */
  ecx = eax;
/* 841628: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84162a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 84162c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84162e: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 841631: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 841634: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 841637: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 84163a: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 84163d: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 841640: mov edx, eax */
  edx = eax;
/* 841642: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 841644: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 841646: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 841649: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 84164c: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 84164f: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 841652: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 841655: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 841658: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 84165b: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 84165e: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 841661: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 841663: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 841666: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 841669: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 84166c: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 84166f: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 841672: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 841674: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 841677: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84167a: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 84167d: mov dword ptr [ebp - 0x11c], edx */
  W32((uint32_t)(ebp + 0xfffffee4u), edx);
/* 841683: and dword ptr [ebp - 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 841686: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 841689: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84168b: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 84168e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 841691: mov dword ptr [ebp - 0x118], eax */
  W32((uint32_t)(ebp + 0xfffffee8u), eax);
/* 841697: mov dword ptr [ebp - 0x120], ecx */
  W32((uint32_t)(ebp + 0xfffffee0u), ecx);
/* 84169d: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 8416a0: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8416a3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8416a5: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8416a8: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8416aa: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8416ad: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8416b0: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8416b2: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8416b5: fld dword ptr [ebx + 0x3c0] */
  { double v = F32((uint32_t)(ebx + 0x3c0u)); FPUSH(v); }
/* 8416bb: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8416bd: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 8416bf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8416c1: fld dword ptr [ebx + 0x3bc] */
  { double v = F32((uint32_t)(ebx + 0x3bcu)); FPUSH(v); }
/* 8416c7: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8416ca: fld dword ptr [ebx + 0x3b8] */
  { double v = F32((uint32_t)(ebx + 0x3b8u)); FPUSH(v); }
/* 8416d0: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8416d3: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8416d6: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8416d8: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8416db: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8416dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8416df: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8416e2: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8416e4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8416e6: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8416e9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8416ec: mov dword ptr [ebp - 0x114], eax */
  W32((uint32_t)(ebp + 0xfffffeecu), eax);
/* 8416f2: lea eax, [ebx + 0x378] */
  eax = (uint32_t)(ebx + 0x378u);
/* 8416f8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8416fa: mov ecx, eax */
  ecx = eax;
/* 8416fc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8416fe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 841700: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 841702: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 841705: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 841708: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 84170b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 84170d: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 841710: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 841713: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 841716: mov edx, eax */
  edx = eax;
/* 841718: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 84171a: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 84171d: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 841720: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 841723: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 841726: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 841729: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 84172c: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 84172f: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 841732: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 841735: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 841737: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 84173a: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 84173d: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 841740: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 841743: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 841746: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 841748: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 84174b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 84174e: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 841751: mov dword ptr [ebp - 0x10c], edx */
  W32((uint32_t)(ebp + 0xfffffef4u), edx);
/* 841757: and dword ptr [ebp - 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 84175a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 84175d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84175f: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 841762: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 841765: mov dword ptr [ebp - 0x108], eax */
  W32((uint32_t)(ebp + 0xfffffef8u), eax);
/* 84176b: mov dword ptr [ebp - 0x110], ecx */
  W32((uint32_t)(ebp + 0xfffffef0u), ecx);
/* 841771: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 841774: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 841777: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 841779: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 84177c: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 84177e: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 841781: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 841784: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 841786: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 841789: fld dword ptr [ebx + 0x3cc] */
  { double v = F32((uint32_t)(ebx + 0x3ccu)); FPUSH(v); }
/* 84178f: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 841791: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 841793: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 841795: fld dword ptr [ebx + 0x3c8] */
  { double v = F32((uint32_t)(ebx + 0x3c8u)); FPUSH(v); }
/* 84179b: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 84179e: fld dword ptr [ebx + 0x3c4] */
  { double v = F32((uint32_t)(ebx + 0x3c4u)); FPUSH(v); }
/* 8417a4: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8417a7: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8417aa: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8417ac: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8417af: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8417b1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8417b3: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8417b6: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8417b8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8417ba: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8417bd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8417c0: mov dword ptr [ebp - 0x104], eax */
  W32((uint32_t)(ebp + 0xfffffefcu), eax);
/* 8417c6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8417c8: lea eax, [ebx + 0x388] */
  eax = (uint32_t)(ebx + 0x388u);
/* 8417ce: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8417d0: mov ecx, eax */
  ecx = eax;
/* 8417d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8417d4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8417d6: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 8417d9: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8417dc: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8417de: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8417e1: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8417e4: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 8417e7: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8417ea: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8417ed: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 8417f0: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8417f3: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8417f6: mov edx, eax */
  edx = eax;
/* 8417f8: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8417fa: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8417fd: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 841800: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 841803: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 841806: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 841809: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 84180c: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 84180f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 841812: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 841814: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 841817: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84181a: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 84181d: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 84181f: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 841821: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 841824: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 841827: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 84182a: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 84182d: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 841830: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 841832: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 841835: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 841838: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 84183b: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 84183e: mov dword ptr [ebp - 0x100], ecx */
  W32((uint32_t)(ebp + 0xffffff00u), ecx);
/* 841844: mov dword ptr [ebp - 0xf8], eax */
  W32((uint32_t)(ebp + 0xffffff08u), eax);
/* 84184a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 84184c: mov dword ptr [ebp - 0xfc], edx */
  W32((uint32_t)(ebp + 0xffffff04u), edx);
/* 841852: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 841855: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 841857: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 84185a: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 84185d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 84185f: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 841862: fld dword ptr [ebx + 0x3d8] */
  { double v = F32((uint32_t)(ebx + 0x3d8u)); FPUSH(v); }
/* 841868: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 84186a: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 84186c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84186e: fld dword ptr [ebx + 0x3d4] */
  { double v = F32((uint32_t)(ebx + 0x3d4u)); FPUSH(v); }
/* 841874: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 841877: fld dword ptr [ebx + 0x3d0] */
  { double v = F32((uint32_t)(ebx + 0x3d0u)); FPUSH(v); }
/* 84187d: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 841880: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 841883: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 841885: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 841888: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 84188a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84188c: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 84188f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 841891: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 841893: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 841896: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 841899: mov dword ptr [ebp - 0xf4], eax */
  W32((uint32_t)(ebp + 0xffffff0cu), eax);
/* 84189f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8418a1: lea eax, [ebx + 0x398] */
  eax = (uint32_t)(ebx + 0x398u);
/* 8418a7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8418a9: mov ecx, eax */
  ecx = eax;
/* 8418ab: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8418ad: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8418af: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 8418b2: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8418b5: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8418b7: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8418ba: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8418bd: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 8418c0: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8418c3: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8418c6: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 8418c9: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8418cc: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8418cf: mov edx, eax */
  edx = eax;
/* 8418d1: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8418d3: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8418d6: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8418d9: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8418dc: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 8418df: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8418e2: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8418e5: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8418e8: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8418eb: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8418ee: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8418f1: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 8418f3: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8418f6: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8418f8: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8418fa: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8418fd: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 841900: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 841903: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 841906: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 841909: fadd dword ptr [ebp - 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 84190c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 84190e: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 841911: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 841914: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 841917: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 841919: mov dword ptr [ebp - 0xf0], ecx */
  W32((uint32_t)(ebp + 0xffffff10u), ecx);
/* 84191f: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 841922: mov dword ptr [ebp - 0xe8], eax */
  W32((uint32_t)(ebp + 0xffffff18u), eax);
/* 841928: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 84192a: mov dword ptr [ebp - 0xec], edx */
  W32((uint32_t)(ebp + 0xffffff14u), edx);
/* 841930: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 841933: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 841936: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 841938: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 84193b: fld dword ptr [ebx + 0x3e4] */
  { double v = F32((uint32_t)(ebx + 0x3e4u)); FPUSH(v); }
/* 841941: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 841943: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 841945: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 841947: fld dword ptr [ebx + 0x3e0] */
  { double v = F32((uint32_t)(ebx + 0x3e0u)); FPUSH(v); }
/* 84194d: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 841950: fld dword ptr [ebx + 0x3dc] */
  { double v = F32((uint32_t)(ebx + 0x3dcu)); FPUSH(v); }
/* 841956: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 841959: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 84195c: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 84195e: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 841961: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 841963: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 841965: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 841968: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 84196a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84196c: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 84196f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 841972: mov dword ptr [ebp - 0xe4], eax */
  W32((uint32_t)(ebp + 0xffffff1cu), eax);
/* 841978: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 84197a: lea eax, [ebx + 0x3a8] */
  eax = (uint32_t)(ebx + 0x3a8u);
/* 841980: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 841982: mov ecx, eax */
  ecx = eax;
/* 841984: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 841986: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 841988: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 84198b: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 84198e: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 841990: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 841993: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 841996: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 841999: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 84199c: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 84199f: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 8419a2: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8419a5: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8419a8: mov edx, eax */
  edx = eax;
/* 8419aa: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8419ac: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8419af: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8419b2: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8419b5: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 8419b8: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8419bb: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8419be: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8419c1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8419c4: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8419c7: fstp dword ptr [ebp + 0x30] */
  WF32((uint32_t)(ebp + 0x30u), ST0); FPOP();
/* 8419ca: mov ecx, dword ptr [ebp + 0x30] */
  ecx = R32((uint32_t)(ebp + 0x30u));
/* 8419cd: and edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 8419cf: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8419d1: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8419d3: mov dword ptr [ebp + 0x30], ecx */
  W32((uint32_t)(ebp + 0x30u), ecx);
/* 8419d6: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 8419d9: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8419dc: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8419df: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 8419e2: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8419e5: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8419e8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8419ea: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8419ed: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8419ef: fstp dword ptr [ebp + 0x30] */
  WF32((uint32_t)(ebp + 0x30u), ST0); FPOP();
/* 8419f2: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8419f5: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8419f7: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8419fa: fld dword ptr [ebx + 0x3f0] */
  { double v = F32((uint32_t)(ebx + 0x3f0u)); FPUSH(v); }
/* 841a00: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 841a02: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 841a04: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 841a07: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 841a0a: mov dword ptr [ebp - 0xd8], eax */
  W32((uint32_t)(ebp + 0xffffff28u), eax);
/* 841a10: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 841a12: mov dword ptr [ebp - 0xe0], ecx */
  W32((uint32_t)(ebp + 0xffffff20u), ecx);
/* 841a18: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 841a1a: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 841a1d: fld dword ptr [ebx + 0x3ec] */
  { double v = F32((uint32_t)(ebx + 0x3ecu)); FPUSH(v); }
/* 841a23: mov dword ptr [ebp - 0xdc], edx */
  W32((uint32_t)(ebp + 0xffffff24u), edx);
/* 841a29: fsub dword ptr [ebp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x30u)));
/* 841a2c: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 841a33: fld dword ptr [ebx + 0x3e8] */
  { double v = F32((uint32_t)(ebx + 0x3e8u)); FPUSH(v); }
/* 841a39: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 841a3c: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 841a3f: mov dword ptr [ebp - 0xd0], edx */
  W32((uint32_t)(ebp + 0xffffff30u), edx);
/* 841a45: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 841a48: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 841a4f: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 841a51: mov dword ptr [ebp - 0x1c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3f800000u);
/* 841a58: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 841a5b: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 841a62: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 841a64: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 841a66: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 841a69: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 841a6b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 841a6d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 841a70: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 841a73: mov dword ptr [ebp - 0xd4], eax */
  W32((uint32_t)(ebp + 0xffffff2cu), eax);
/* 841a79: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 841a7c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 841a7e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 841a80: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 841a83: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 841a86: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 841a88: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 841a8b: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 841a8e: mov dword ptr [ebp - 0xcc], eax */
  W32((uint32_t)(ebp + 0xffffff34u), eax);
/* 841a94: fchs  */
  ST0 = -ST0;
/* 841a96: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 841a99: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 841a9c: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 841a9f: mov dword ptr [ebp - 0xc8], ecx */
  W32((uint32_t)(ebp + 0xffffff38u), ecx);
/* 841aa5: mov dword ptr [ebp - 0xc4], edx */
  W32((uint32_t)(ebp + 0xffffff3cu), edx);
/* 841aab: fchs  */
  ST0 = -ST0;
/* 841aad: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 841ab4: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 841ab7: mov dword ptr [ebp - 0x1c], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xbf800000u);
/* 841abe: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 841ac1: mov dword ptr [ebp - 0xc0], eax */
  W32((uint32_t)(ebp + 0xffffff40u), eax);
/* 841ac7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 841aca: mov dword ptr [ebp - 0xbc], ecx */
  W32((uint32_t)(ebp + 0xffffff44u), ecx);
/* 841ad0: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 841ad3: mov dword ptr [ebp - 0xb8], edx */
  W32((uint32_t)(ebp + 0xffffff48u), edx);
/* 841ad9: mov dword ptr [ebp - 0x24], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3f800000u);
/* 841ae0: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 841ae3: mov dword ptr [ebp - 0xb4], eax */
  W32((uint32_t)(ebp + 0xffffff4cu), eax);
/* 841ae9: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 841aec: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 841af3: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 841af6: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 841afd: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 841b00: mov dword ptr [ebp - 0xb0], edx */
  W32((uint32_t)(ebp + 0xffffff50u), edx);
/* 841b06: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 841b09: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 841b0c: mov dword ptr [ebp - 0xac], eax */
  W32((uint32_t)(ebp + 0xffffff54u), eax);
/* 841b12: mov dword ptr [ebp - 0x24], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xbf800000u);
/* 841b19: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 841b1c: mov dword ptr [ebp - 0xa8], ecx */
  W32((uint32_t)(ebp + 0xffffff58u), ecx);
/* 841b22: mov dword ptr [ebp - 0xa4], edx */
  W32((uint32_t)(ebp + 0xffffff5cu), edx);
/* 841b28: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 841b2f: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 841b32: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 841b39: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 841b3c: mov dword ptr [ebp - 0xa0], eax */
  W32((uint32_t)(ebp + 0xffffff60u), eax);
/* 841b42: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 841b45: mov dword ptr [ebp - 0x9c], ecx */
  W32((uint32_t)(ebp + 0xffffff64u), ecx);
/* 841b4b: mov dword ptr [ebp - 0x98], edx */
  W32((uint32_t)(ebp + 0xffffff68u), edx);
/* 841b51: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 841b54: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 841b57: fchs  */
  ST0 = -ST0;
/* 841b59: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 841b5c: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 841b63: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 841b66: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 841b6c: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 841b6f: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 841b72: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 841b75: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 841b7b: fsub dword ptr [ebp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x24u)));
/* 841b7e: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 841b85: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 841b88: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 841b8b: fsub dword ptr [ebp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x20u)));
/* 841b8e: mov dword ptr [ebp - 0x20], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3f800000u);
/* 841b95: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 841b98: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 841b9b: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* 841b9e: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 841ba4: mov dword ptr [ebp - 0x8c], eax */
  W32((uint32_t)(ebp + 0xffffff74u), eax);
/* 841baa: mov dword ptr [ebp - 0x20], 0xbf800000 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xbf800000u);
/* 841bb1: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 841bb4: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 841bb7: mov dword ptr [ebp - 0x7c], ecx */
  W32((uint32_t)(ebp + 0xffffff84u), ecx);
/* 841bba: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 841bc1: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 841bc4: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 841bc7: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 841bca: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 841bcd: mov dword ptr [ebp - 0x84], edx */
  W32((uint32_t)(ebp + 0xffffff7cu), edx);
/* 841bd3: mov dword ptr [ebp - 0x80], eax */
  W32((uint32_t)(ebp + 0xffffff80u), eax);
/* 841bd6: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 841bd9: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 841be0: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 841be3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 841be4: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 841be7: mov dword ptr [ebp - 0x78], edx */
  W32((uint32_t)(ebp + 0xffffff88u), edx);
/* 841bea: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 841bed: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 841bf0: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x841bf6u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 841bf6: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 841bf9: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x841bffu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 841bff: fstp dword ptr [ebp + 0x30] */
  WF32((uint32_t)(ebp + 0x30u), ST0); FPOP();
/* 841c02: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 841c05: mov eax, edx */
  eax = edx;
/* 841c07: xor ebx, ebx */
  ebx = 0;
/* 841c09: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 841c0c: mov dword ptr [ebp + 0x30], 0xff7fffff */
  W32((uint32_t)(ebp + 0x30u), 0xff7fffffu);
/* 841c13: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
/* 841c16: xor edi, edi */
  edi = 0;
/* 841c18: jmp 0x841c20 */
  goto L_841c20;
L_841c20: /* 841c20: cmp edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 841c23: jge 0x841d06 */
  if ((sf == of)) goto L_841d06;
L_841c29: /* 841c29: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 841c2c: mov edx, edi */
  edx = edi;
/* 841c2e: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 841c31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 841c32: lea ecx, [ebp + edx - 0x130] */
  ecx = (uint32_t)(ebp + edx + 0xfffffed0u);
/* 841c39: call dword ptr [0xcfa5d0] */
  esp -= 4; W32(esp, 0x841c3fu); SPILL(); f_4e1ba4(); if (g_unwind) return; /* Core!?Flip@FPlane@@QBE?AV1@XZ */ RELOAD();
/* 841c3f: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 841c42: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 841c45: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 841c48: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 841c4b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 841c4d: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 841c50: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 841c53: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 841c55: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 841c58: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 841c5b: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 841c5e: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 841c61: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 841c64: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 841c66: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 841c69: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 841c6c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 841c6e: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 841c71: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 841c74: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 841c7a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 841c7c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 841c7f: jp 0x841ca6 */
  if (pf) goto L_841ca6;
L_841c81: /* 841c81: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 841c87: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 841c89: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 841c8c: jne 0x841d00 */
  if (!zf) goto L_841d00;
L_841c8e: /* 841c8e: mov eax, 1 */
  eax = 0x1u;
/* 841c93: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 841c96: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 841c9d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 841c9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 841c9f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 841ca0: mov esp, ebp */
  esp = ebp;
/* 841ca2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 841ca3: ret 0x34 */
  esp += 56; SPILL(); return;
L_841ca6: /* 841ca6: fdiv dword ptr [ebp - 0x14] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffecu)));
/* 841ca9: fchs  */
  ST0 = -ST0;
/* 841cab: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 841cae: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 841cb4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 841cb6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 841cb9: jp 0x841cde */
  if (pf) goto L_841cde;
L_841cbb: /* 841cbb: fcom dword ptr [ebp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x18u)));
/* 841cbe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 841cc0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 841cc3: jne 0x841cc9 */
  if (!zf) goto L_841cc9;
L_841cc5: /* 841cc5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 841cc7: jmp 0x841c8e */
  goto L_841c8e;
L_841cc9: /* 841cc9: fcom dword ptr [ebp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x30u)));
/* 841ccc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 841cce: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 841cd1: jne 0x841cfe */
  if (!zf) goto L_841cfe;
L_841cd3: /* 841cd3: mov esi, edi */
  esi = edi;
/* 841cd5: fstp dword ptr [ebp + 0x30] */
  WF32((uint32_t)(ebp + 0x30u), ST0); FPOP();
/* 841cd8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 841cd9: jmp 0x841c20 */
  goto L_841c20;
L_841cde: /* 841cde: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 841ce4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 841ce6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 841ce9: jnp 0x841cc5 */
  if (!pf) goto L_841cc5;
L_841ceb: /* 841ceb: fcom dword ptr [ebp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x18u)));
/* 841cee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 841cf0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 841cf3: jp 0x841cfe */
  if (pf) goto L_841cfe;
L_841cf5: /* 841cf5: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 841cf8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 841cf9: jmp 0x841c20 */
  goto L_841c20;
L_841cfe: /* 841cfe: fstp st(0) */
  STI(0) = ST0; FPOP();
L_841d00: /* 841d00: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 841d01: jmp 0x841c20 */
  goto L_841c20;
L_841d06: /* 841d06: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 841d09: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 841d0f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 841d11: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 841d14: jne 0x841dec */
  if (!zf) goto L_841dec;
L_841d1a: /* 841d1a: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 841d1d: jne 0x841d37 */
  if (!zf) goto L_841d37;
L_841d1f: /* 841d1f: push 0xfc */
  { uint32_t v = 0xfcu; esp -= 4; W32(esp, v); }
/* 841d24: push 0xae3db8 */
  { uint32_t v = 0xae3db8u; esp -= 4; W32(esp, v); }
/* 841d29: push 0xae3dc8 */
  { uint32_t v = 0xae3dc8u; esp -= 4; W32(esp, v); }
/* 841d2e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x841d34u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 841d34: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_841d37: /* 841d37: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 841d3a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 841d3d: fdiv dword ptr [ebp - 0x28] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 841d40: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 841d43: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 841d46: mov dword ptr [eax + 0x20], ebx */
  W32((uint32_t)(eax + 0x20u), ebx);
/* 841d49: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 841d4c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 841d4e: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 841d51: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 841d54: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 841d56: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 841d59: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 841d5b: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 841d5e: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 841d61: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 841d63: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 841d66: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* 841d69: fstp dword ptr [ebp + 0x28] */
  WF32((uint32_t)(ebp + 0x28u), ST0); FPOP();
/* 841d6c: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 841d6f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 841d71: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 841d73: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 841d76: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 841d79: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 841d7c: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 841d7f: mov edx, dword ptr [ebp + 0x2c] */
  edx = R32((uint32_t)(ebp + 0x2cu));
/* 841d82: fadd dword ptr [ebp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x24u)));
/* 841d85: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 841d88: fstp dword ptr [ebp + 0x30] */
  WF32((uint32_t)(ebp + 0x30u), ST0); FPOP();
/* 841d8b: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 841d8e: fld dword ptr [ebp + esi - 0x130] */
  { double v = F32((uint32_t)(ebp + esi + 0xfffffed0u)); FPUSH(v); }
/* 841d95: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 841d9b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 841d9e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 841da1: mov dword ptr [eax - 0x10], ecx */
  W32((uint32_t)(eax + 0xfffffff0u), ecx);
/* 841da4: lea ecx, [ebp + esi - 0x130] */
  ecx = (uint32_t)(ebp + esi + 0xfffffed0u);
/* 841dab: fstp dword ptr [ebp + 0x28] */
  WF32((uint32_t)(ebp + 0x28u), ST0); FPOP();
/* 841dae: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 841db1: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 841db4: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 841dba: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 841dbc: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 841dbf: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 841dc2: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 841dc5: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 841dcb: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 841dce: fstp dword ptr [ebp + 0x30] */
  WF32((uint32_t)(ebp + 0x30u), ST0); FPOP();
/* 841dd1: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 841dd4: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 841dd7: xor eax, eax */
  eax = 0;
/* 841dd9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 841ddc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 841de3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 841de4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 841de5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 841de6: mov esp, ebp */
  esp = ebp;
/* 841de8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 841de9: ret 0x34 */
  esp += 56; SPILL(); return;
L_841dec: /* 841dec: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 841def: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 841df2: fcomp dword ptr [ebp - 0x28] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd8u)));
  FPOP();
/* 841df5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 841df6: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 841df9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 841dfa: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 841e00: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 841e02: fstp dword ptr [ebp + 0x28] */
  WF32((uint32_t)(ebp + 0x28u), ST0); FPOP();
/* 841e05: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 841e08: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  }
/* 841e0b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 841e0e: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 841e14: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 841e17: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 841e19: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 841e1c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 841e1f: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 841e22: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 841e25: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 841e28: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 841e2b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 841e2e: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 841e31: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 841e34: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 841e37: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 841e3d: mov dword ptr [eax + 0x20], ebx */
  W32((uint32_t)(eax + 0x20u), ebx);
/* 841e40: mov dword ptr [eax + 0x24], ebx */
  W32((uint32_t)(eax + 0x24u), ebx);
/* 841e43: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 841e46: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 841e48: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 841e4b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 841e4e: fstp dword ptr [ebp + 0x30] */
  WF32((uint32_t)(ebp + 0x30u), ST0); FPOP();
/* 841e51: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 841e54: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 841e57: xor eax, eax */
  eax = 0;
/* 841e59: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 841e60: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 841e61: mov esp, ebp */
  esp = ebp;
/* 841e63: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 841e64: ret 0x34 */
  esp += 56; SPILL(); return;
}

void f_841c1a(void) {
  LOAD_REGS();
L_841c1a: /* 841c1a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_841c20: /* 841c20: cmp edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 841c23: jge 0x841d06 */
  if ((sf == of)) goto L_841d06;
L_841c29: /* 841c29: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 841c2c: mov edx, edi */
  edx = edi;
/* 841c2e: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 841c31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 841c32: lea ecx, [ebp + edx - 0x130] */
  ecx = (uint32_t)(ebp + edx + 0xfffffed0u);
/* 841c39: call dword ptr [0xcfa5d0] */
  esp -= 4; W32(esp, 0x841c3fu); SPILL(); f_4e1ba4(); if (g_unwind) return; /* Core!?Flip@FPlane@@QBE?AV1@XZ */ RELOAD();
/* 841c3f: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 841c42: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 841c45: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 841c48: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 841c4b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 841c4d: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 841c50: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 841c53: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 841c55: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 841c58: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 841c5b: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 841c5e: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 841c61: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 841c64: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 841c66: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 841c69: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 841c6c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 841c6e: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 841c71: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 841c74: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 841c7a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 841c7c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 841c7f: jp 0x841ca6 */
  if (pf) goto L_841ca6;
L_841c81: /* 841c81: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 841c87: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 841c89: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 841c8c: jne 0x841d00 */
  if (!zf) goto L_841d00;
L_841c8e: /* 841c8e: mov eax, 1 */
  eax = 0x1u;
/* 841c93: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 841c96: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 841c9d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 841c9e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 841c9f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 841ca0: mov esp, ebp */
  esp = ebp;
/* 841ca2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 841ca3: ret 0x34 */
  esp += 56; SPILL(); return;
L_841ca6: /* 841ca6: fdiv dword ptr [ebp - 0x14] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffecu)));
/* 841ca9: fchs  */
  ST0 = -ST0;
/* 841cab: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 841cae: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 841cb4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 841cb6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 841cb9: jp 0x841cde */
  if (pf) goto L_841cde;
L_841cbb: /* 841cbb: fcom dword ptr [ebp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x18u)));
/* 841cbe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 841cc0: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 841cc3: jne 0x841cc9 */
  if (!zf) goto L_841cc9;
L_841cc5: /* 841cc5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 841cc7: jmp 0x841c8e */
  goto L_841c8e;
L_841cc9: /* 841cc9: fcom dword ptr [ebp + 0x30] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x30u)));
/* 841ccc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 841cce: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 841cd1: jne 0x841cfe */
  if (!zf) goto L_841cfe;
L_841cd3: /* 841cd3: mov esi, edi */
  esi = edi;
/* 841cd5: fstp dword ptr [ebp + 0x30] */
  WF32((uint32_t)(ebp + 0x30u), ST0); FPOP();
/* 841cd8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 841cd9: jmp 0x841c20 */
  goto L_841c20;
L_841cde: /* 841cde: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 841ce4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 841ce6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 841ce9: jnp 0x841cc5 */
  if (!pf) goto L_841cc5;
L_841ceb: /* 841ceb: fcom dword ptr [ebp + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x18u)));
/* 841cee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 841cf0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 841cf3: jp 0x841cfe */
  if (pf) goto L_841cfe;
L_841cf5: /* 841cf5: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 841cf8: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 841cf9: jmp 0x841c20 */
  goto L_841c20;
L_841cfe: /* 841cfe: fstp st(0) */
  STI(0) = ST0; FPOP();
L_841d00: /* 841d00: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 841d01: jmp 0x841c20 */
  goto L_841c20;
L_841d06: /* 841d06: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 841d09: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 841d0f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 841d11: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 841d14: jne 0x841dec */
  if (!zf) goto L_841dec;
L_841d1a: /* 841d1a: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 841d1d: jne 0x841d37 */
  if (!zf) goto L_841d37;
L_841d1f: /* 841d1f: push 0xfc */
  { uint32_t v = 0xfcu; esp -= 4; W32(esp, v); }
/* 841d24: push 0xae3db8 */
  { uint32_t v = 0xae3db8u; esp -= 4; W32(esp, v); }
/* 841d29: push 0xae3dc8 */
  { uint32_t v = 0xae3dc8u; esp -= 4; W32(esp, v); }
/* 841d2e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x841d34u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 841d34: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_841d37: /* 841d37: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 841d3a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 841d3d: fdiv dword ptr [ebp - 0x28] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 841d40: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 841d43: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 841d46: mov dword ptr [eax + 0x20], ebx */
  W32((uint32_t)(eax + 0x20u), ebx);
/* 841d49: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 841d4c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 841d4e: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 841d51: fld dword ptr [ebp - 0x6c] */
  { double v = F32((uint32_t)(ebp + 0xffffff94u)); FPUSH(v); }
/* 841d54: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 841d56: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 841d59: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 841d5b: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* 841d5e: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 841d61: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 841d63: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 841d66: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* 841d69: fstp dword ptr [ebp + 0x28] */
  WF32((uint32_t)(ebp + 0x28u), ST0); FPOP();
/* 841d6c: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 841d6f: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 841d71: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 841d73: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 841d76: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 841d79: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 841d7c: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 841d7f: mov edx, dword ptr [ebp + 0x2c] */
  edx = R32((uint32_t)(ebp + 0x2cu));
/* 841d82: fadd dword ptr [ebp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x24u)));
/* 841d85: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 841d88: fstp dword ptr [ebp + 0x30] */
  WF32((uint32_t)(ebp + 0x30u), ST0); FPOP();
/* 841d8b: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 841d8e: fld dword ptr [ebp + esi - 0x130] */
  { double v = F32((uint32_t)(ebp + esi + 0xfffffed0u)); FPUSH(v); }
/* 841d95: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 841d9b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 841d9e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 841da1: mov dword ptr [eax - 0x10], ecx */
  W32((uint32_t)(eax + 0xfffffff0u), ecx);
/* 841da4: lea ecx, [ebp + esi - 0x130] */
  ecx = (uint32_t)(ebp + esi + 0xfffffed0u);
/* 841dab: fstp dword ptr [ebp + 0x28] */
  WF32((uint32_t)(ebp + 0x28u), ST0); FPOP();
/* 841dae: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 841db1: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 841db4: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 841dba: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 841dbc: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 841dbf: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 841dc2: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 841dc5: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 841dcb: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 841dce: fstp dword ptr [ebp + 0x30] */
  WF32((uint32_t)(ebp + 0x30u), ST0); FPOP();
/* 841dd1: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 841dd4: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 841dd7: xor eax, eax */
  eax = 0;
/* 841dd9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 841ddc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 841de3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 841de4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 841de5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 841de6: mov esp, ebp */
  esp = ebp;
/* 841de8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 841de9: ret 0x34 */
  esp += 56; SPILL(); return;
L_841dec: /* 841dec: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 841def: mov edx, dword ptr [ebp + 0x1c] */
  edx = R32((uint32_t)(ebp + 0x1cu));
/* 841df2: fcomp dword ptr [ebp - 0x28] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd8u)));
  FPOP();
/* 841df5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 841df6: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 841df9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 841dfa: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 841e00: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 841e02: fstp dword ptr [ebp + 0x28] */
  WF32((uint32_t)(ebp + 0x28u), ST0); FPOP();
/* 841e05: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 841e08: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  }
/* 841e0b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 841e0e: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 841e14: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 841e17: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 841e19: mov edx, dword ptr [ebp + 0x20] */
  edx = R32((uint32_t)(ebp + 0x20u));
/* 841e1c: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 841e1f: mov edx, dword ptr [ebp + 0x24] */
  edx = R32((uint32_t)(ebp + 0x24u));
/* 841e22: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 841e25: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 841e28: mov edx, dword ptr [ebp + 0x28] */
  edx = R32((uint32_t)(ebp + 0x28u));
/* 841e2b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 841e2e: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* 841e31: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 841e34: mov ecx, dword ptr [ebp + 0x2c] */
  ecx = R32((uint32_t)(ebp + 0x2cu));
/* 841e37: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 841e3d: mov dword ptr [eax + 0x20], ebx */
  W32((uint32_t)(eax + 0x20u), ebx);
/* 841e40: mov dword ptr [eax + 0x24], ebx */
  W32((uint32_t)(eax + 0x24u), ebx);
/* 841e43: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 841e46: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 841e48: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 841e4b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 841e4e: fstp dword ptr [ebp + 0x30] */
  WF32((uint32_t)(ebp + 0x30u), ST0); FPOP();
/* 841e51: mov edx, dword ptr [ebp + 0x30] */
  edx = R32((uint32_t)(ebp + 0x30u));
/* 841e54: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 841e57: xor eax, eax */
  eax = 0;
/* 841e59: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 841e60: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 841e61: mov esp, ebp */
  esp = ebp;
/* 841e63: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 841e64: ret 0x34 */
  esp += 56; SPILL(); return;
}

void f_841e67(void) {
  LOAD_REGS();
L_841e67: /* 841e67: mov eax, dword ptr [ebp - 0x134] */
  eax = R32((uint32_t)(ebp + 0xfffffeccu));
/* 841e6d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 841e72: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 841e75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 841e76: mov dword ptr [ebp - 0x70], eax */
  W32((uint32_t)(ebp + 0xffffff90u), eax);
/* 841e79: call 0x99caf8 */
  esp -= 4; W32(esp, 0x841e7eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_841e7e(); return;
}

void f_841e7e(void) {
  LOAD_REGS();
L_841e7e: /* 841e7e: push 0xa1626c */
  { uint32_t v = 0xa1626cu; esp -= 4; W32(esp, v); }
/* 841e83: push 0xae3de0 */
  { uint32_t v = 0xae3de0u; esp -= 4; W32(esp, v); }
/* 841e88: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x841e8eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 841e8e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 841e91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 841e93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 841e95: call 0x99caf8 */
  esp -= 4; W32(esp, 0x841e9au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_841e9a: guest_badaddr(0x841e9a); return;
}

void f_842130(void) {
  LOAD_REGS();
L_842130: /* 842130: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 842131: mov ebp, esp */
  ebp = esp;
/* 842133: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 842135: push 0x9d35d0 */
  { uint32_t v = 0x9d35d0u; esp -= 4; W32(esp, v); }
/* 84213a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 842140: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 842141: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 842148: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84214b: mov eax, dword ptr [0xcc8780] */
  eax = R32((uint32_t)(0xcc8780u));
/* 842150: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 842152: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 842153: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 842154: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 842155: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 842158: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84215f: jne 0x8421c4 */
  if (!zf) goto L_8421c4;
L_842161: /* 842161: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 842162: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 842165: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x84216bu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 84216b: push 0xcc8788 */
  { uint32_t v = 0xcc8788u; esp -= 4; W32(esp, v); }
/* 842170: mov ecx, 0xcc8788 */
  ecx = 0xcc8788u;
/* 842175: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x84217bu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 84217b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84217d: jne 0x842197 */
  if (!zf) goto L_842197;
L_84217f: /* 84217f: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 842184: push 0xae3f58 */
  { uint32_t v = 0xae3f58u; esp -= 4; W32(esp, v); }
/* 842189: push 0xae3f9c */
  { uint32_t v = 0xae3f9cu; esp -= 4; W32(esp, v); }
/* 84218e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x842194u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 842194: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_842197: /* 842197: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x84219du); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 84219d: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8421a3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8421a5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8421a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8421aa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8421ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8421ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8421af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8421b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8421b1: push 0xcc8788 */
  { uint32_t v = 0xcc8788u; esp -= 4; W32(esp, v); }
/* 8421b6: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8421bcu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8421bc: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8421bf: mov dword ptr [0xcc8780], eax */
  W32((uint32_t)(0xcc8780u), eax);
L_8421c4: /* 8421c4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8421c7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8421c8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8421c9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8421d0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8421d1: mov esp, ebp */
  esp = ebp;
/* 8421d3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8421d4: ret  */
  esp += 4; SPILL(); return;
}

void f_8421d5(void) {
  LOAD_REGS();
L_8421d5: /* 8421d5: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8421d8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8421dd: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8421e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8421e1: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8421e4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8421e9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8421e9(); return;
}

void f_8421e9(void) {
  LOAD_REGS();
L_8421e9: /* 8421e9: push 0xa162b8 */
  { uint32_t v = 0xa162b8u; esp -= 4; W32(esp, v); }
/* 8421ee: push 0xae3e18 */
  { uint32_t v = 0xae3e18u; esp -= 4; W32(esp, v); }
/* 8421f3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8421f9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8421f9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8421fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8421fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 842200: call 0x99caf8 */
  esp -= 4; W32(esp, 0x842205u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_842205: guest_badaddr(0x842205); return;
}

void f_842250(void) {
  LOAD_REGS();
L_842250: /* 842250: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 842251: mov ebp, esp */
  ebp = esp;
/* 842253: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 842255: push 0x9d35e0 */
  { uint32_t v = 0x9d35e0u; esp -= 4; W32(esp, v); }
/* 84225a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 842260: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 842261: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 842268: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84226b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84226c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84226d: mov ebx, ecx */
  ebx = ecx;
/* 84226f: mov esi, dword ptr [ebx + 0x340] */
  esi = R32((uint32_t)(ebx + 0x340u));
/* 842275: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 842277: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 842278: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 84227b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 842282: je 0x8422c9 */
  if (zf) goto L_8422c9;
L_842284: /* 842284: push 0xb86630 */
  { uint32_t v = 0xb86630u; esp -= 4; W32(esp, v); }
/* 842289: mov ecx, esi */
  ecx = esi;
/* 84228b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x842291u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 842291: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 842293: je 0x8422c9 */
  if (zf) goto L_8422c9;
L_842295: /* 842295: mov ecx, esi */
  ecx = esi;
/* 842297: jmp 0x8422cb */
  goto L_8422cb;
L_8422c9: /* 8422c9: xor ecx, ecx */
  ecx = 0;
L_8422cb: /* 8422cb: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8422ce: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8422d1: imul edx, edx, 0x4c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x4cu);
  edx = (uint32_t)r;
  }
/* 8422d4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8422d6: mov dword ptr [eax + 0x68], ecx */
  W32((uint32_t)(eax + 0x68u), ecx);
/* 8422d9: lea esi, [ebx + 0x47c] */
  esi = (uint32_t)(ebx + 0x47cu);
/* 8422df: lea edi, [eax + 0x6c] */
  edi = (uint32_t)(eax + 0x6cu);
/* 8422e2: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8422e7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8422e9: mov edx, dword ptr [ebx + 0x344] */
  edx = R32((uint32_t)(ebx + 0x344u));
/* 8422ef: xor ecx, ecx */
  ecx = 0;
/* 8422f1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8422f3: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8422f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8422f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8422f8: mov dword ptr [eax + 0xac], ecx */
  W32((uint32_t)(eax + 0xacu), ecx);
/* 8422fe: movzx edx, byte ptr [ebx + 0x33d] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x33du)));
/* 842305: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 842308: mov dword ptr [eax + 0xb0], edx */
  W32((uint32_t)(eax + 0xb0u), edx);
/* 84230e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 842315: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 842316: mov esp, ebp */
  esp = ebp;
/* 842318: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 842319: ret 8 */
  esp += 12; SPILL(); return;
}

void f_842299(void) {
  LOAD_REGS();
L_842299: /* 842299: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 84229c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8422a1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8422a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8422a5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8422a8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8422adu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8422ad(); return;
}

void f_8422ad(void) {
  LOAD_REGS();
L_8422ad: /* 8422ad: push 0xa162f8 */
  { uint32_t v = 0xa162f8u; esp -= 4; W32(esp, v); }
/* 8422b2: push 0xae3e20 */
  { uint32_t v = 0xae3e20u; esp -= 4; W32(esp, v); }
/* 8422b7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8422bdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8422bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8422c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8422c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8422c4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8422c9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8422c9: xor ecx, ecx */
  ecx = 0;
/* 8422cb: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8422ce: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8422d1: imul edx, edx, 0x4c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x4cu);
  edx = (uint32_t)r;
  }
/* 8422d4: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8422d6: mov dword ptr [eax + 0x68], ecx */
  W32((uint32_t)(eax + 0x68u), ecx);
/* 8422d9: lea esi, [ebx + 0x47c] */
  esi = (uint32_t)(ebx + 0x47cu);
/* 8422df: lea edi, [eax + 0x6c] */
  edi = (uint32_t)(eax + 0x6cu);
/* 8422e2: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8422e7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8422e9: mov edx, dword ptr [ebx + 0x344] */
  edx = R32((uint32_t)(ebx + 0x344u));
/* 8422ef: xor ecx, ecx */
  ecx = 0;
/* 8422f1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8422f3: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8422f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8422f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8422f8: mov dword ptr [eax + 0xac], ecx */
  W32((uint32_t)(eax + 0xacu), ecx);
/* 8422fe: movzx edx, byte ptr [ebx + 0x33d] */
  edx = (uint32_t)(R8((uint32_t)(ebx + 0x33du)));
/* 842305: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 842308: mov dword ptr [eax + 0xb0], edx */
  W32((uint32_t)(eax + 0xb0u), edx);
/* 84230e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 842315: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 842316: mov esp, ebp */
  esp = ebp;
/* 842318: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 842319: ret 8 */
  esp += 12; SPILL(); return;
}

void f_842360(void) {
  LOAD_REGS();
L_842360: /* 842360: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 842361: mov ebp, esp */
  ebp = esp;
/* 842363: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 842365: push 0x9d35f0 */
  { uint32_t v = 0x9d35f0u; esp -= 4; W32(esp, v); }
/* 84236a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 842370: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 842371: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 842378: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84237b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84237c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84237d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 842380: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 842383: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 84238a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 84238d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 84238e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84238f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 842392: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 842395: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 842398: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 842399: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 84239e: mov edi, ecx */
  edi = ecx;
/* 8423a0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8423a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8423a4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8423ab: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x8423aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8423ae: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 8423b1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8423b2: mov eax, edx */
  eax = edx;
/* 8423b4: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 8423b7: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8423ba: jne 0x8423d2 */
  if (!zf) goto L_8423d2;
L_8423bc: /* 8423bc: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8423bf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8423c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8423c2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8423c5: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 8423cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8423cc: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x8423d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8423d2: /* 8423d2: mov eax, dword ptr [edi + 0x434] */
  eax = R32((uint32_t)(edi + 0x434u));
/* 8423d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8423da: je 0x84247a */
  if (zf) goto L_84247a;
L_8423e0: /* 8423e0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8423e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8423e5: je 0x84247a */
  if (zf) goto L_84247a;
L_8423eb: /* 8423eb: xor esi, esi */
  esi = 0;
/* 8423ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8423f0: /* 8423f0: cmp esi, dword ptr [eax + 0x264] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x264u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8423f6: jge 0x842434 */
  if ((sf == of)) goto L_842434;
L_8423f8: /* 8423f8: mov ecx, dword ptr [edi + 0xb0] */
  ecx = R32((uint32_t)(edi + 0xb0u));
/* 8423fe: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 842404: mov edx, dword ptr [eax + 0x260] */
  edx = R32((uint32_t)(eax + 0x260u));
/* 84240a: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 84240d: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 842410: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 842413: call 0x6ca46b */
  esp -= 4; W32(esp, 0x842418u); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 842418: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84241a: jne 0x84242e */
  if (!zf) goto L_84242e;
L_84241c: /* 84241c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 84241f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 842421: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 842422: add ecx, 0x260 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x260u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 842428: call 0x6cb320 */
  esp -= 4; W32(esp, 0x84242du); SPILL(); f_6cb320(); if (g_unwind) return; RELOAD();
/* 84242d: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_84242e: /* 84242e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 842431: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 842432: jmp 0x8423f0 */
  goto L_8423f0;
L_842434: /* 842434: xor ecx, ecx */
  ecx = 0;
L_842436: /* 842436: cmp ecx, dword ptr [eax + 0x264] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x264u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 84243c: jge 0x842457 */
  if ((sf == of)) goto L_842457;
L_84243e: /* 84243e: mov edx, dword ptr [eax + 0x260] */
  edx = R32((uint32_t)(eax + 0x260u));
/* 842444: mov edx, dword ptr [edx + ecx*4] */
  edx = R32((uint32_t)(edx + ecx*4));
/* 842447: cmp edx, dword ptr [edi + 0x434] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x434u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 84244d: je 0x842452 */
  if (zf) goto L_842452;
L_84244f: /* 84244f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 842450: jmp 0x842436 */
  goto L_842436;
L_842452: /* 842452: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 842455: jne 0x84247a */
  if (!zf) goto L_84247a;
L_842457: /* 842457: mov esi, dword ptr [edi + 0x434] */
  esi = R32((uint32_t)(edi + 0x434u));
/* 84245d: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 842460: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 842463: add edi, 0x260 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x260u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 842469: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 84246b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 84246d: mov ecx, edi */
  ecx = edi;
/* 84246f: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x842475u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 842475: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 842477: mov dword ptr [ecx + eax*4], esi */
  W32((uint32_t)(ecx + eax*4), esi);
L_84247a: /* 84247a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 84247d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 84247e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 84247f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 842486: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 842487: mov esp, ebp */
  esp = ebp;
/* 842489: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 84248a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_84248d(void) {
  LOAD_REGS();
L_84248d: /* 84248d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 842490: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 842495: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 842498: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 842499: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 84249c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8424a1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8424a1(); return;
}

void f_8424a1(void) {
  LOAD_REGS();
L_8424a1: /* 8424a1: push 0xa1634c */
  { uint32_t v = 0xa1634cu; esp -= 4; W32(esp, v); }
/* 8424a6: push 0xae3e40 */
  { uint32_t v = 0xae3e40u; esp -= 4; W32(esp, v); }
/* 8424ab: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8424b1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8424b1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8424b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8424b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8424b8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8424bdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8424bd: guest_badaddr(0x8424bd); return;
}

void f_842520(void) {
  LOAD_REGS();
L_842520: /* 842520: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 842521: mov ebp, esp */
  ebp = esp;
/* 842523: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 842525: push 0x9d3600 */
  { uint32_t v = 0x9d3600u; esp -= 4; W32(esp, v); }
/* 84252a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 842530: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 842531: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 842538: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 84253b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 84253c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84253d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 842540: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 842543: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 84254a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 84254d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 84254e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84254f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 842552: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 842555: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 842558: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 842559: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 84255e: mov edi, ecx */
  edi = ecx;
/* 842560: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 842563: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 842564: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 84256b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x84256eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 84256e: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 842571: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 842572: mov eax, edx */
  eax = edx;
/* 842574: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 842577: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 84257a: jne 0x842592 */
  if (!zf) goto L_842592;
L_84257c: /* 84257c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 84257f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 842580: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 842582: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 842585: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 84258b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 84258c: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x842592u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_842592: /* 842592: mov edi, dword ptr [edi + 0x434] */
  edi = R32((uint32_t)(edi + 0x434u));
/* 842598: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 84259a: je 0x8425eb */
  if (zf) goto L_8425eb;
L_84259c: /* 84259c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 84259f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8425a1: je 0x8425eb */
  if (zf) goto L_8425eb;
L_8425a3: /* 8425a3: xor esi, esi */
  esi = 0;
L_8425a5: /* 8425a5: cmp esi, dword ptr [eax + 0x264] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x264u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8425ab: jge 0x8425eb */
  if ((sf == of)) goto L_8425eb;
L_8425ad: /* 8425ad: mov ecx, dword ptr [eax + 0x260] */
  ecx = R32((uint32_t)(eax + 0x260u));
/* 8425b3: cmp dword ptr [ecx + esi*4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + esi*4))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8425b6: je 0x8425bb */
  if (zf) goto L_8425bb;
L_8425b8: /* 8425b8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8425b9: jmp 0x8425a5 */
  goto L_8425a5;
L_8425bb: /* 8425bb: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8425be: je 0x8425eb */
  if (zf) goto L_8425eb;
L_8425c0: /* 8425c0: dec dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(edi + 0x4u), r);
  }
/* 8425c3: jne 0x8425da */
  if (!zf) goto L_8425da;
L_8425c5: /* 8425c5: mov ecx, edi */
  ecx = edi;
/* 8425c7: call 0x6c75d1 */
  esp -= 4; W32(esp, 0x8425ccu); SPILL(); f_6c75d1(); if (g_unwind) return; RELOAD();
/* 8425cc: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 8425d2: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8425d4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8425d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8425d7: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8425dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8425da: /* 8425da: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8425dd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8425df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8425e0: add ecx, 0x260 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x260u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8425e6: call 0x6cb320 */
  esp -= 4; W32(esp, 0x8425ebu); SPILL(); f_6cb320(); if (g_unwind) return; RELOAD();
L_8425eb: /* 8425eb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8425ee: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8425ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8425f0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8425f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8425f8: mov esp, ebp */
  esp = ebp;
/* 8425fa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8425fb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8425fe(void) {
  LOAD_REGS();
L_8425fe: /* 8425fe: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 842601: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 842606: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 842609: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 84260a: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 84260d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x842612u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_842612(); return;
}

void f_842612(void) {
  LOAD_REGS();
L_842612: /* 842612: push 0xa16390 */
  { uint32_t v = 0xa16390u; esp -= 4; W32(esp, v); }
/* 842617: push 0xae3e48 */
  { uint32_t v = 0xae3e48u; esp -= 4; W32(esp, v); }
/* 84261c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x842622u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 842622: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 842625: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 842627: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 842629: call 0x99caf8 */
  esp -= 4; W32(esp, 0x84262eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_84262e: guest_badaddr(0x84262e); return;
}

void f_842680(void) {
  LOAD_REGS();
L_842680: /* 842680: sub esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 842686: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 842687: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 842688: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 842689: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 84268a: mov ebp, ecx */
  ebp = ecx;
/* 84268c: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 84268f: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 842691: lea edi, [ebp + 0x10] */
  edi = (uint32_t)(ebp + 0x10u);
/* 842694: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 842696: mov ecx, edi */
  ecx = edi;
/* 842698: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 84269c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8426a2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8426a2: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8426a5: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 8426a7: mov cl, byte ptr [esp + 0xa4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xa4u))) & 0xffu);
/* 8426ae: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8426b0: mov esi, dword ptr [esp + 0x9c] */
  esi = R32((uint32_t)(esp + 0x9cu));
/* 8426b7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8426b9: mov ebx, eax */
  ebx = eax;
/* 8426bb: mov eax, dword ptr [esp + 0xa0] */
  eax = R32((uint32_t)(esp + 0xa0u));
/* 8426c2: mov dword ptr [ebx + 0x20], esi */
  W32((uint32_t)(ebx + 0x20u), esi);
/* 8426c5: mov dword ptr [ebx + 0x24], eax */
  W32((uint32_t)(ebx + 0x24u), eax);
/* 8426c8: mov byte ptr [ebx + 0x28], cl */
  W8((uint32_t)(ebx + 0x28u), (ecx & 0xffu));
/* 8426cb: jge 0x8426da */
  if ((sf == of)) goto L_8426da;
L_8426cd: /* 8426cd: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8426ce: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8426d1: mov edx, esi */
  edx = esi;
/* 8426d3: mov esi, dword ptr [ebp + 4] */
  esi = R32((uint32_t)(ebp + 0x4u));
/* 8426d6: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8426d8: jmp 0x8426e1 */
  goto L_8426e1;
L_8426da: /* 8426da: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8426dc: imul esi, esi, 0x2c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x2cu);
  esi = (uint32_t)r;
  }
/* 8426df: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_8426e1: /* 8426e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8426e3: jge 0x8426f0 */
  if ((sf == of)) goto L_8426f0;
L_8426e5: /* 8426e5: mov edi, dword ptr [ebp + 4] */
  edi = R32((uint32_t)(ebp + 0x4u));
/* 8426e8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8426e9: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8426ec: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 8426ee: jmp 0x8426f9 */
  goto L_8426f9;
L_8426f0: /* 8426f0: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8426f2: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8426f5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8426f7: mov edi, eax */
  edi = eax;
L_8426f9: /* 8426f9: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8426fb: movzx eax, cl */
  eax = (uint32_t)((ecx & 0xffu));
/* 8426fe: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 842700: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 842701: cmp eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 842704: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 842708: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 84270b: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 84270e: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 842712: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 842715: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 842718: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 84271c: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 84271f: fsub dword ptr [esi + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xcu)));
/* 842722: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 842726: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 842729: fsub dword ptr [esi + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x10u)));
/* 84272c: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 842730: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 842733: fsub dword ptr [esi + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x14u)));
/* 842736: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 84273a: fld dword ptr [edi + 0x18] */
  { double v = F32((uint32_t)(edi + 0x18u)); FPUSH(v); }
/* 84273d: fsub dword ptr [esi + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x18u)));
/* 842740: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 842744: ja 0x8428ee */
  if ((!cf && !zf)) goto L_8428ee;
L_84274a: /* 84274a: movzx eax, byte ptr [eax + 0x842a40] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x842a40u)));
/* 842751: jmp dword ptr [eax*4 + 0x842a24] */
  switch (R32((uint32_t)(eax*4 + 0x842a24u))) {
    case 0x842758u: goto L_842758;
    case 0x842781u: goto L_842781;
    case 0x8427d4u: goto L_8427d4;
    case 0x842827u: goto L_842827;
    case 0x842867u: goto L_842867;
    case 0x8428adu: goto L_8428ad;
    case 0x8428eeu: goto L_8428ee;
    default: guest_badjump(0x842751, R32((uint32_t)(eax*4 + 0x842a24u))); return;
  }
L_842758: /* 842758: lea ecx, [esp + 0x8c] */
  ecx = (uint32_t)(esp + 0x8cu);
/* 84275f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 842760: mov dword ptr [esp + 0x6c], 0xbf800000 */
  W32((uint32_t)(esp + 0x6cu), 0xbf800000u);
/* 842768: mov dword ptr [esp + 0x70], 0 */
  W32((uint32_t)(esp + 0x70u), 0x0u);
/* 842770: mov dword ptr [esp + 0x74], 0 */
  W32((uint32_t)(esp + 0x74u), 0x0u);
/* 842778: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 84277c: jmp 0x842848 */
  goto L_842848;
L_842781: /* 842781: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 842788: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 842789: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* 84278d: mov dword ptr [esp + 0x60], 0x3f800000 */
  W32((uint32_t)(esp + 0x60u), 0x3f800000u);
/* 842795: mov dword ptr [esp + 0x64], 0 */
  W32((uint32_t)(esp + 0x64u), 0x0u);
/* 84279d: mov dword ptr [esp + 0x68], 0xbf800000 */
  W32((uint32_t)(esp + 0x68u), 0xbf800000u);
/* 8427a5: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8427abu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8427ab: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8427ad: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8427b0: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8427b3: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 8427bb: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 8427bf: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8427c3: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 8427c7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8427cb: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 8427cf: jmp 0x84292e */
  goto L_84292e;
L_8427d4: /* 8427d4: lea edx, [esp + 0x20] */
  edx = (uint32_t)(esp + 0x20u);
/* 8427d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8427d9: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 8427dd: mov dword ptr [esp + 0x78], 0 */
  W32((uint32_t)(esp + 0x78u), 0x0u);
/* 8427e5: mov dword ptr [esp + 0x7c], 0xbf800000 */
  W32((uint32_t)(esp + 0x7cu), 0xbf800000u);
/* 8427ed: mov dword ptr [esp + 0x80], 0 */
  W32((uint32_t)(esp + 0x80u), 0x0u);
/* 8427f8: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8427feu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8427fe: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 842800: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 842803: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 842806: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 84280e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 842812: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 842816: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 84281a: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 84281e: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 842822: jmp 0x84292e */
  goto L_84292e;
L_842827: /* 842827: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 84282b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 84282c: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* 842834: mov dword ptr [esp + 0x50], 0x3f800000 */
  W32((uint32_t)(esp + 0x50u), 0x3f800000u);
/* 84283c: mov dword ptr [esp + 0x54], 0xbf800000 */
  W32((uint32_t)(esp + 0x54u), 0xbf800000u);
/* 842844: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
L_842848: /* 842848: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x84284eu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 84284e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 842850: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 842853: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 842856: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 84285a: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 84285e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 842862: jmp 0x84291e */
  goto L_84291e;
L_842867: /* 842867: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 84286a: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 842872: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 842876: fchs  */
  ST0 = -ST0;
/* 842878: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 84287c: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 842884: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 842888: mov dword ptr [esp + 0x28], 0xbf800000 */
  W32((uint32_t)(esp + 0x28u), 0xbf800000u);
/* 842890: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 842894: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 842898: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 84289c: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 8428a0: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 8428a4: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 8428a8: jmp 0x84292e */
  goto L_84292e;
L_8428ad: /* 8428ad: fld dword ptr [ebp + 0x30] */
  { double v = F32((uint32_t)(ebp + 0x30u)); FPUSH(v); }
/* 8428b0: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8428b8: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 8428bc: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 8428c0: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 8428c8: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8428cc: mov dword ptr [esp + 0x28], 0x3f800000 */
  W32((uint32_t)(esp + 0x28u), 0x3f800000u);
/* 8428d4: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 8428d8: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 8428dc: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8428e0: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 8428e4: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8428e8: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 8428ec: jmp 0x84292e */
  goto L_84292e;
L_8428ee: /* 8428ee: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* 8428f6: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 8428fa: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 842902: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 842906: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 84290e: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 842912: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 842916: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 84291a: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
L_84291e: /* 84291e: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 842926: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 84292a: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
L_84292e: /* 84292e: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 842932: mov eax, ebx */
  eax = ebx;
/* 842934: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 842937: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 842938: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 84293c: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 84293f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 842941: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 842945: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 842948: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84294a: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 84294e: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 842952: fmul dword ptr [edi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x10u)));
/* 842955: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 842959: fmul dword ptr [edi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x14u)));
/* 84295c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 84295e: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 842962: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* 842965: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 842967: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 84296b: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 84296d: fdivr dword ptr [0xa08220] */
  ST0 = (F32((uint32_t)(0xa08220u))) / ST0;
/* 842973: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 842975: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 842979: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 84297b: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 84297f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 842981: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 842985: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 842987: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 84298b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 84298d: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 84298f: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 842993: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* 842997: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 84299a: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* 84299e: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 8429a2: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 8429a6: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 8429a9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8429ab: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8429ae: lea edx, [ebx + 0xc] */
  edx = (uint32_t)(ebx + 0xcu);
/* 8429b1: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8429b5: fld dword ptr [esp + 0x34] */
  { double v = F32((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 8429b9: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 8429bd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8429bf: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8429c2: fld dword ptr [esp + 0x38] */
  { double v = F32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* 8429c6: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8429c8: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 8429cc: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8429ce: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 8429d2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8429d4: fadd dword ptr [esi + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xcu)));
/* 8429d7: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8429db: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* 8429df: fadd dword ptr [esi + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x10u)));
/* 8429e2: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8429e6: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 8429ea: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* 8429ee: fadd dword ptr [esi + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x14u)));
/* 8429f1: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8429f3: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8429f6: mov ecx, ebp */
  ecx = ebp;
/* 8429f8: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* 8429fc: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 842a00: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 842a04: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 842a07: fadd dword ptr [esi + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x18u)));
/* 842a0a: fstp dword ptr [ebx + 0x18] */
  WF32((uint32_t)(ebx + 0x18u), ST0); FPOP();
/* 842a0d: call 0x6c5ec5 */
  esp -= 4; W32(esp, 0x842a12u); SPILL(); f_6c5ec5(); if (g_unwind) return; RELOAD();
/* 842a12: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 842a16: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 842a17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 842a18: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 842a19: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 842a1a: add esp, 0x88 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x88u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 842a20: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_842b60(void) {
  LOAD_REGS();
L_842b60: /* 842b60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 842b61: mov ebp, esp */
  ebp = esp;
/* 842b63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 842b65: push 0x9d3610 */
  { uint32_t v = 0x9d3610u; esp -= 4; W32(esp, v); }
/* 842b6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 842b70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 842b71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 842b78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 842b7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 842b7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 842b7d: mov esi, ecx */
  esi = ecx;
/* 842b7f: mov eax, dword ptr [esi + 0x434] */
  eax = R32((uint32_t)(esi + 0x434u));
/* 842b85: xor ebx, ebx */
  ebx = 0;
/* 842b87: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 842b89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 842b8a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 842b8d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 842b90: je 0x842bfd */
  if (zf) goto L_842bfd;
L_842b92: /* 842b92: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 842b94: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 842b9a: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 842ba0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 842ba6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 842ba8: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 842bab: jnp 0x842bb5 */
  if (!pf) goto L_842bb5;
L_842bad: /* 842bad: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 842bb3: jmp 0x842bbb */
  goto L_842bbb;
L_842bb5: /* 842bb5: fld dword ptr [0xa08220] */
  { double v = F32((uint32_t)(0xa08220u)); FPUSH(v); }
L_842bbb: /* 842bbb: mov eax, dword ptr [esi + 0x434] */
  eax = R32((uint32_t)(esi + 0x434u));
/* 842bc1: fstp qword ptr [eax + 0x10] */
  WF64((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 842bc4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 842bc7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 842bc9: je 0x842bd7 */
  if (zf) goto L_842bd7;
L_842bcb: /* 842bcb: mov ecx, dword ptr [esi + 0x434] */
  ecx = R32((uint32_t)(esi + 0x434u));
/* 842bd1: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 842bd4: mov dword ptr [ecx + 0xc], ebx */
  W32((uint32_t)(ecx + 0xcu), ebx);
L_842bd7: /* 842bd7: mov edi, dword ptr [esi + 0x434] */
  edi = R32((uint32_t)(esi + 0x434u));
/* 842bdd: dec dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(edi + 0x4u), r);
  }
/* 842be0: jne 0x842bf7 */
  if (!zf) goto L_842bf7;
L_842be2: /* 842be2: mov ecx, edi */
  ecx = edi;
/* 842be4: call 0x6c75d1 */
  esp -= 4; W32(esp, 0x842be9u); SPILL(); f_6c75d1(); if (g_unwind) return; RELOAD();
/* 842be9: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 842bef: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 842bf1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 842bf3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 842bf4: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x842bf7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_842bf7: /* 842bf7: mov dword ptr [esi + 0x434], ebx */
  W32((uint32_t)(esi + 0x434u), ebx);
L_842bfd: /* 842bfd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 842c00: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 842c01: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 842c02: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 842c09: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 842c0a: mov esp, ebp */
  esp = ebp;
/* 842c0c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 842c0d: ret 4 */
  esp += 8; SPILL(); return;
}
