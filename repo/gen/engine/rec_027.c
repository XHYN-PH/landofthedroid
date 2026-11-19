#include "recomp.h"
#include "rec_mod.h"

void f_77cd30(void) {
  LOAD_REGS();
L_77cd30: /* 77cd30: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 77cd33: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77cd38: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 77cd3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77cd3c: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 77cd3f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77cd44u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77cd44(); return;
}

void f_77cd44(void) {
  LOAD_REGS();
L_77cd44: /* 77cd44: push 0xa08858 */
  { uint32_t v = 0xa08858u; esp -= 4; W32(esp, v); }
/* 77cd49: push 0xac57bc */
  { uint32_t v = 0xac57bcu; esp -= 4; W32(esp, v); }
/* 77cd4e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77cd54u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77cd54: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77cd57: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77cd59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77cd5b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77cd60u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77cd60: guest_badaddr(0x77cd60); return;
}

void f_77ce30(void) {
  LOAD_REGS();
L_77ce30: /* 77ce30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77ce31: mov ebp, esp */
  ebp = esp;
/* 77ce33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77ce35: push 0x9cc630 */
  { uint32_t v = 0x9cc630u; esp -= 4; W32(esp, v); }
/* 77ce3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77ce40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ce41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77ce48: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77ce4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77ce4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ce4d: mov esi, ecx */
  esi = ecx;
/* 77ce4f: mov al, byte ptr [esi + 0x50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x50u))) & 0xffu);
/* 77ce52: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77ce54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77ce55: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77ce58: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77ce5f: je 0x77ce7d */
  if (zf) goto L_77ce7d;
L_77ce61: /* 77ce61: cmp al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77ce63: je 0x77ce7d */
  if (zf) goto L_77ce7d;
L_77ce65: /* 77ce65: push 0x166 */
  { uint32_t v = 0x166u; esp -= 4; W32(esp, v); }
/* 77ce6a: push 0xac57c4 */
  { uint32_t v = 0xac57c4u; esp -= 4; W32(esp, v); }
/* 77ce6f: push 0xac57d0 */
  { uint32_t v = 0xac57d0u; esp -= 4; W32(esp, v); }
/* 77ce74: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x77ce7au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 77ce7a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77ce7d: /* 77ce7d: cmp byte ptr [esi + 0x50], 0xe */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77ce81: mov ecx, esi */
  ecx = esi;
/* 77ce83: jne 0x77cea1 */
  if (!zf) goto L_77cea1;
L_77ce85: /* 77ce85: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77ce88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ce89: call 0x6c4453 */
  esp -= 4; W32(esp, 0x77ce8eu); SPILL(); f_6c4453(); if (g_unwind) return; RELOAD();
L_77ce8e: /* 77ce8e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77ce91: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77ce98: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77ce99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77ce9a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77ce9b: mov esp, ebp */
  esp = ebp;
/* 77ce9d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77ce9e: ret 4 */
  esp += 8; SPILL(); return;
L_77cea1: /* 77cea1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77cea3: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x77cea9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77cea9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ceab: je 0x77ce8e */
  if (zf) goto L_77ce8e;
L_77cead: /* 77cead: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ceae: call 0x925ce0 */
  esp -= 4; W32(esp, 0x77ceb3u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 77ceb3: mov edi, eax */
  edi = eax;
/* 77ceb5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ceb7: je 0x77ce8e */
  if (zf) goto L_77ce8e;
L_77ceb9: /* 77ceb9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77ceba: call 0x90e1a0 */
  esp -= 4; W32(esp, 0x77cebfu); SPILL(); f_90e1a0(); if (g_unwind) return; RELOAD();
/* 77cebf: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 77cec2: mov eax, dword ptr [esi + 0x16c] */
  eax = R32((uint32_t)(esi + 0x16cu));
/* 77cec8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ceca: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 77ced1: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 77ced8: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 77cedf: je 0x77cf07 */
  if (zf) goto L_77cf07;
L_77cee1: /* 77cee1: add eax, 0x3c4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 77cee6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 77cee8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77ceeb: mov ecx, esp */
  ecx = esp;
/* 77ceed: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 77ceef: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 77cef2: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 77cef5: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 77cef8: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 77cefb: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 77cefe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77ceff: call 0x6c882d */
  esp -= 4; W32(esp, 0x77cf04u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 77cf04: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77cf07: /* 77cf07: mov eax, dword ptr [esi + 0x30c] */
  eax = R32((uint32_t)(esi + 0x30cu));
/* 77cf0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77cf0f: je 0x77cf1e */
  if (zf) goto L_77cf1e;
L_77cf11: /* 77cf11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77cf12: call 0x6c82e7 */
  esp -= 4; W32(esp, 0x77cf17u); SPILL(); f_6c82e7(); if (g_unwind) return; RELOAD();
/* 77cf17: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77cf1a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77cf1c: jne 0x77cf48 */
  if (!zf) goto L_77cf48;
L_77cf1e: /* 77cf1e: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 77cf24: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 77cf26: push 0xac5808 */
  { uint32_t v = 0xac5808u; esp -= 4; W32(esp, v); }
/* 77cf2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77cf2c: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x77cf32u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 77cf32: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77cf35: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77cf38: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77cf3f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77cf40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77cf41: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77cf42: mov esp, ebp */
  esp = ebp;
/* 77cf44: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77cf45: ret 4 */
  esp += 8; SPILL(); return;
L_77cf48: /* 77cf48: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 77cf4e: fld dword ptr [eax + 0x88] */
  { double v = F32((uint32_t)(eax + 0x88u)); FPUSH(v); }
/* 77cf54: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77cf56: je 0x77cf5e */
  if (zf) goto L_77cf5e;
L_77cf58: /* 77cf58: fmul dword ptr [ecx + 0x400] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x400u)));
L_77cf5e: /* 77cf5e: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 77cf61: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 77cf67: mov edx, dword ptr [eax + 0x60] */
  edx = R32((uint32_t)(eax + 0x60u));
/* 77cf6a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77cf6d: mov ecx, dword ptr [esi + 0x16c] */
  ecx = R32((uint32_t)(esi + 0x16cu));
/* 77cf73: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 77cf76: test byte ptr [ecx + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 77cf7d: je 0x77cfa2 */
  if (zf) goto L_77cfa2;
L_77cf7f: /* 77cf7f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77cf81: fld dword ptr [ecx + 0x430] */
  { double v = F32((uint32_t)(ecx + 0x430u)); FPUSH(v); }
/* 77cf87: fmul dword ptr [eax + 0x64] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x64u)));
/* 77cf8a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 77cf8d: fadd dword ptr [ecx + 0x428] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x428u)));
/* 77cf93: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 77cf96: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 77cf99: fadd dword ptr [ecx + 0x42c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x42cu)));
/* 77cf9f: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
L_77cfa2: /* 77cfa2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77cfa4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 77cfa7: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 77cfaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77cfab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77cfac: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 77cfaf: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 77cfb2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77cfb4: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 77cfb7: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 77cfba: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 77cfbd: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 77cfc3: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 77cfc5: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 77cfc8: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 77cfca: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 77cfcd: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 77cfd0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77cfd2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77cfd4: call 0x90ea70 */
  esp -= 4; W32(esp, 0x77cfd9u); SPILL(); f_90ea70(); if (g_unwind) return; RELOAD();
/* 77cfd9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77cfdc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77cfdd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77cfde: call 0x90ea90 */
  esp -= 4; W32(esp, 0x77cfe3u); SPILL(); f_90ea90(); if (g_unwind) return; RELOAD();
/* 77cfe3: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 77cfe6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77cfe7: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 77cfea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77cfeb: mov ecx, esi */
  ecx = esi;
/* 77cfed: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 77cff4: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 77cffb: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 77d002: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 77d009: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 77d010: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 77d017: call 0x6c986d */
  esp -= 4; W32(esp, 0x77d01cu); SPILL(); f_6c986d(); if (g_unwind) return; RELOAD();
/* 77d01c: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 77d01f: fadd dword ptr [ebp - 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 77d022: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77d025: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 77d029: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 77d02c: fadd dword ptr [ebp - 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 77d02f: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 77d033: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 77d036: fadd dword ptr [ebp - 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 77d039: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 77d03c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77d03d: call 0x90f380 */
  esp -= 4; W32(esp, 0x77d042u); SPILL(); f_90f380(); if (g_unwind) return; RELOAD();
/* 77d042: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 77d045: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 77d048: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 77d04b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77d04c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77d04d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77d04e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77d04f: call 0x90f450 */
  esp -= 4; W32(esp, 0x77d054u); SPILL(); f_90f450(); if (g_unwind) return; RELOAD();
/* 77d054: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77d057: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77d058: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77d059: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77d060: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77d061: mov esp, ebp */
  esp = ebp;
/* 77d063: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77d064: ret 4 */
  esp += 8; SPILL(); return;
}

void f_77d067(void) {
  LOAD_REGS();
L_77d067: /* 77d067: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 77d06a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77d06f: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 77d072: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77d073: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 77d076: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77d07bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77d07b(); return;
}

void f_77d07b(void) {
  LOAD_REGS();
L_77d07b: /* 77d07b: push 0xa088a0 */
  { uint32_t v = 0xa088a0u; esp -= 4; W32(esp, v); }
/* 77d080: push 0xac5864 */
  { uint32_t v = 0xac5864u; esp -= 4; W32(esp, v); }
/* 77d085: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77d08bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77d08b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77d08e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77d090: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77d092: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77d097u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77d097: guest_badaddr(0x77d097); return;
}

void f_77d140(void) {
  LOAD_REGS();
L_77d140: /* 77d140: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77d141: mov ebp, esp */
  ebp = esp;
/* 77d143: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77d145: push 0x9cc640 */
  { uint32_t v = 0x9cc640u; esp -= 4; W32(esp, v); }
/* 77d14a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77d150: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77d151: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77d158: sub esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77d15e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77d161: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 77d164: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 77d166: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 77d169: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 77d16c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 77d16f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77d170: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 77d173: fst dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0);
/* 77d176: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 77d179: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 77d17c: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 77d17f: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 77d182: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 77d185: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 77d188: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77d189: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77d18a: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 77d18d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 77d190: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 77d193: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 77d199: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77d19c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77d1a3: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 77d1a6: call 0x77be20 */
  esp -= 4; W32(esp, 0x77d1abu); SPILL(); f_77be20(); if (g_unwind) return; RELOAD();
/* 77d1ab: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 77d1b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77d1b2: lea edx, [ebp - 0x58] */
  edx = (uint32_t)(ebp + 0xffffffa8u);
/* 77d1b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77d1b6: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x77d1bbu); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 77d1bb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77d1be: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 77d1c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77d1c5: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 77d1c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77d1c9: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x77d1ceu); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 77d1ce: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77d1d1: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 77d1d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77d1d5: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 77d1d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77d1d9: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x77d1deu); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 77d1de: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 77d1e1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 77d1e4: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 77d1e7: mov bl, 0xff */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 77d1e9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77d1ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77d1ee: mov byte ptr [ebp + 0xf], bl */
  W8((uint32_t)(ebp + 0xfu), (ebx & 0xffu));
/* 77d1f1: mov byte ptr [ebp + 0xe], bl */
  W8((uint32_t)(ebp + 0xeu), (ebx & 0xffu));
/* 77d1f4: jne 0x77d37b */
  if (!zf) goto L_77d37b;
L_77d1fa: /* 77d1fa: fmul dword ptr [0xa0891c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0891cu)));
/* 77d200: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 77d203: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 77d206: mov byte ptr [ebp + 0xc], 0 */
  W8((uint32_t)(ebp + 0xcu), 0x0u);
/* 77d20a: fmul dword ptr [0xa0891c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0891cu)));
/* 77d210: mov byte ptr [ebp + 0xd], 0 */
  W8((uint32_t)(ebp + 0xdu), 0x0u);
/* 77d214: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 77d217: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77d218: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 77d21b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77d21e: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 77d221: mov edx, esp */
  edx = esp;
/* 77d223: fmul dword ptr [0xa0891c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0891cu)));
/* 77d229: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77d22c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 77d22f: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 77d232: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 77d235: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 77d238: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 77d23b: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 77d23e: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 77d241: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77d244: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 77d246: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 77d249: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77d24c: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 77d24f: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 77d252: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 77d255: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 77d258: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 77d25b: mov ecx, esp */
  ecx = esp;
/* 77d25d: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 77d25f: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 77d262: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 77d265: mov ecx, dword ptr [0xcd8a5c] */
  ecx = R32((uint32_t)(0xcd8a5cu));
/* 77d26b: call 0x6c5b37 */
  esp -= 4; W32(esp, 0x77d270u); SPILL(); f_6c5b37(); if (g_unwind) return; RELOAD();
/* 77d270: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 77d273: fmul dword ptr [0xa0891c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0891cu)));
/* 77d279: mov byte ptr [ebp + 0xc], 0 */
  W8((uint32_t)(ebp + 0xcu), 0x0u);
/* 77d27d: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 77d280: mov byte ptr [ebp + 0xd], bl */
  W8((uint32_t)(ebp + 0xdu), (ebx & 0xffu));
/* 77d283: fmul dword ptr [0xa0891c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0891cu)));
/* 77d289: mov byte ptr [ebp + 0xe], 0 */
  W8((uint32_t)(ebp + 0xeu), 0x0u);
/* 77d28d: mov byte ptr [ebp + 0xf], bl */
  W8((uint32_t)(ebp + 0xfu), (ebx & 0xffu));
/* 77d290: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 77d293: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 77d296: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77d297: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 77d29a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77d29d: fmul dword ptr [0xa0891c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0891cu)));
/* 77d2a3: mov ecx, esp */
  ecx = esp;
/* 77d2a5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77d2a8: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 77d2ab: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 77d2ae: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 77d2b1: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 77d2b4: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 77d2b7: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 77d2ba: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 77d2bd: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77d2c0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 77d2c2: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 77d2c5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77d2c8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 77d2cb: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 77d2ce: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77d2d1: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 77d2d4: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 77d2d7: mov eax, esp */
  eax = esp;
/* 77d2d9: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 77d2db: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 77d2de: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 77d2e1: mov ecx, dword ptr [0xcd8a5c] */
  ecx = R32((uint32_t)(0xcd8a5cu));
/* 77d2e7: call 0x6c5b37 */
  esp -= 4; W32(esp, 0x77d2ecu); SPILL(); f_6c5b37(); if (g_unwind) return; RELOAD();
/* 77d2ec: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 77d2ef: fmul dword ptr [0xa0891c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0891cu)));
/* 77d2f5: mov byte ptr [ebp + 0xd], 0 */
  W8((uint32_t)(ebp + 0xdu), 0x0u);
/* 77d2f9: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 77d2fc: mov byte ptr [ebp + 0xe], 0 */
  W8((uint32_t)(ebp + 0xeu), 0x0u);
/* 77d300: fmul dword ptr [0xa0891c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0891cu)));
/* 77d306: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 77d309: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 77d30c: fmul dword ptr [0xa0891c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0891cu)));
L_77d312: /* 77d312: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 77d315: mov byte ptr [ebp + 0xc], bl */
  W8((uint32_t)(ebp + 0xcu), (ebx & 0xffu));
/* 77d318: mov byte ptr [ebp + 0xf], bl */
  W8((uint32_t)(ebp + 0xfu), (ebx & 0xffu));
/* 77d31b: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 77d31e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 77d321: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 77d324: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77d325: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 77d328: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77d32b: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 77d32e: mov eax, esp */
  eax = esp;
/* 77d330: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 77d333: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77d336: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 77d339: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77d33c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 77d33e: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 77d341: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77d344: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 77d347: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 77d34a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77d34d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 77d350: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 77d353: mov ecx, dword ptr [0xcd8a5c] */
  ecx = R32((uint32_t)(0xcd8a5cu));
/* 77d359: mov edx, esp */
  edx = esp;
/* 77d35b: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 77d35d: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 77d360: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 77d363: call 0x6c5b37 */
  esp -= 4; W32(esp, 0x77d368u); SPILL(); f_6c5b37(); if (g_unwind) return; RELOAD();
/* 77d368: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77d36b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77d36c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77d36d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77d374: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77d375: mov esp, ebp */
  esp = ebp;
/* 77d377: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77d378: ret 8 */
  esp += 12; SPILL(); return;
L_77d37b: /* 77d37b: fmul dword ptr [0xa08918] */
  ST0 = ST0 * (F32((uint32_t)(0xa08918u)));
/* 77d381: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 77d384: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 77d387: mov byte ptr [ebp + 0xc], 0x80 */
  W8((uint32_t)(ebp + 0xcu), 0x80u);
/* 77d38b: fmul dword ptr [0xa08918] */
  ST0 = ST0 * (F32((uint32_t)(0xa08918u)));
/* 77d391: mov byte ptr [ebp + 0xd], 0x80 */
  W8((uint32_t)(ebp + 0xdu), 0x80u);
/* 77d395: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 77d398: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77d399: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 77d39c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77d39f: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 77d3a2: mov edx, esp */
  edx = esp;
/* 77d3a4: fmul dword ptr [0xa08918] */
  ST0 = ST0 * (F32((uint32_t)(0xa08918u)));
/* 77d3aa: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77d3ad: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 77d3b0: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 77d3b3: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 77d3b6: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 77d3b9: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 77d3bc: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 77d3bf: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 77d3c2: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77d3c5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 77d3c7: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 77d3ca: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77d3cd: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 77d3d0: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 77d3d3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 77d3d6: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 77d3d9: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 77d3dc: mov ecx, esp */
  ecx = esp;
/* 77d3de: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 77d3e0: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 77d3e3: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 77d3e6: mov ecx, dword ptr [0xcd8a5c] */
  ecx = R32((uint32_t)(0xcd8a5cu));
/* 77d3ec: call 0x6c5b37 */
  esp -= 4; W32(esp, 0x77d3f1u); SPILL(); f_6c5b37(); if (g_unwind) return; RELOAD();
/* 77d3f1: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 77d3f4: fmul dword ptr [0xa08918] */
  ST0 = ST0 * (F32((uint32_t)(0xa08918u)));
/* 77d3fa: mov byte ptr [ebp + 0xc], 0x80 */
  W8((uint32_t)(ebp + 0xcu), 0x80u);
/* 77d3fe: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 77d401: mov byte ptr [ebp + 0xd], bl */
  W8((uint32_t)(ebp + 0xdu), (ebx & 0xffu));
/* 77d404: fmul dword ptr [0xa08918] */
  ST0 = ST0 * (F32((uint32_t)(0xa08918u)));
/* 77d40a: mov byte ptr [ebp + 0xe], 0x80 */
  W8((uint32_t)(ebp + 0xeu), 0x80u);
/* 77d40e: mov byte ptr [ebp + 0xf], bl */
  W8((uint32_t)(ebp + 0xfu), (ebx & 0xffu));
/* 77d411: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 77d414: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 77d417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77d418: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 77d41b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77d41e: fmul dword ptr [0xa08918] */
  ST0 = ST0 * (F32((uint32_t)(0xa08918u)));
/* 77d424: mov ecx, esp */
  ecx = esp;
/* 77d426: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77d429: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 77d42c: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 77d42f: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 77d432: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 77d435: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 77d438: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 77d43b: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 77d43e: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77d441: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 77d443: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 77d446: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77d449: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 77d44c: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 77d44f: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77d452: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 77d455: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 77d458: mov eax, esp */
  eax = esp;
/* 77d45a: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 77d45c: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 77d45f: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 77d462: mov ecx, dword ptr [0xcd8a5c] */
  ecx = R32((uint32_t)(0xcd8a5cu));
/* 77d468: call 0x6c5b37 */
  esp -= 4; W32(esp, 0x77d46du); SPILL(); f_6c5b37(); if (g_unwind) return; RELOAD();
/* 77d46d: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 77d470: fmul dword ptr [0xa08918] */
  ST0 = ST0 * (F32((uint32_t)(0xa08918u)));
/* 77d476: mov byte ptr [ebp + 0xd], 0x80 */
  W8((uint32_t)(ebp + 0xdu), 0x80u);
/* 77d47a: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 77d47d: mov byte ptr [ebp + 0xe], 0x80 */
  W8((uint32_t)(ebp + 0xeu), 0x80u);
/* 77d481: fmul dword ptr [0xa08918] */
  ST0 = ST0 * (F32((uint32_t)(0xa08918u)));
/* 77d487: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 77d48a: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 77d48d: fmul dword ptr [0xa08918] */
  ST0 = ST0 * (F32((uint32_t)(0xa08918u)));
/* 77d493: jmp 0x77d312 */
  goto L_77d312;
}

void f_77d498(void) {
  LOAD_REGS();
L_77d498: /* 77d498: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 77d49b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77d4a0: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 77d4a3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77d4a4: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 77d4a7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77d4acu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77d4ac(); return;
}

void f_77d4ac(void) {
  LOAD_REGS();
L_77d4ac: /* 77d4ac: push 0xa088d4 */
  { uint32_t v = 0xa088d4u; esp -= 4; W32(esp, v); }
/* 77d4b1: push 0xac57ac */
  { uint32_t v = 0xac57acu; esp -= 4; W32(esp, v); }
/* 77d4b6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77d4bcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77d4bc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77d4bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77d4c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77d4c3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77d4c8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77d4c8: guest_badaddr(0x77d4c8); return;
}

void f_77d5c0(void) {
  LOAD_REGS();
L_77d5c0: /* 77d5c0: sub esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77d5c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77d5c4: mov edi, ecx */
  edi = ecx;
/* 77d5c6: cmp byte ptr [edi + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77d5ca: je 0x77d5e4 */
  if (zf) goto L_77d5e4;
L_77d5cc: /* 77d5cc: push 0x1f9 */
  { uint32_t v = 0x1f9u; esp -= 4; W32(esp, v); }
/* 77d5d1: push 0xac58e8 */
  { uint32_t v = 0xac58e8u; esp -= 4; W32(esp, v); }
/* 77d5d6: push 0xac58f4 */
  { uint32_t v = 0xac58f4u; esp -= 4; W32(esp, v); }
/* 77d5db: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x77d5e1u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 77d5e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77d5e4: /* 77d5e4: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 77d5e8: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x77d5eeu); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 77d5ee: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 77d5f4: mov ecx, dword ptr [eax + 0x115c] */
  ecx = R32((uint32_t)(eax + 0x115cu));
/* 77d5fa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77d5fc: jne 0x77d61c */
  if (!zf) goto L_77d61c;
L_77d5fe: /* 77d5fe: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 77d604: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77d606: push 0xac5910 */
  { uint32_t v = 0xac5910u; esp -= 4; W32(esp, v); }
/* 77d60b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77d60c: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x77d612u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 77d612: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77d615: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77d616: add esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77d619: ret 4 */
  esp += 8; SPILL(); return;
L_77d61c: /* 77d61c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 77d61e: mov ecx, edi */
  ecx = edi;
/* 77d620: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x77d626u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77d626: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77d628: je 0x77d929 */
  if (zf) goto L_77d929;
L_77d62e: /* 77d62e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77d62f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77d630: call 0x925ce0 */
  esp -= 4; W32(esp, 0x77d635u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 77d635: mov esi, eax */
  esi = eax;
/* 77d637: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77d639: je 0x77d928 */
  if (zf) goto L_77d928;
L_77d63f: /* 77d63f: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* 77d643: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x77d649u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 77d649: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 77d64d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77d64e: mov ecx, edi */
  ecx = edi;
/* 77d650: call 0x6cb799 */
  esp -= 4; W32(esp, 0x77d655u); SPILL(); f_6cb799(); if (g_unwind) return; RELOAD();
/* 77d655: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77d657: je 0x77d8dc */
  if (zf) goto L_77d8dc;
L_77d65d: /* 77d65d: fld dword ptr [esp + 0x4c] */
  { double v = F32((uint32_t)(esp + 0x4cu)); FPUSH(v); }
/* 77d661: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 77d665: fld dword ptr [esp + 0x50] */
  { double v = F32((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* 77d669: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 77d66d: fld dword ptr [esp + 0x54] */
  { double v = F32((uint32_t)(esp + 0x54u)); FPUSH(v); }
/* 77d671: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 77d675: fld dword ptr [esp + 0x58] */
  { double v = F32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* 77d679: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* 77d67d: fmul dword ptr [esp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x58u)));
/* 77d681: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 77d685: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 77d689: mov dword ptr [esp + 0x20], ecx */
  W32((uint32_t)(esp + 0x20u), ecx);
/* 77d68d: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 77d68f: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 77d691: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 77d695: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77d697: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 77d699: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 77d69b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77d69d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77d69f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 77d6a1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77d6a3: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 77d6a5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77d6a7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77d6a9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 77d6ab: fabs  */
  ST0 = fabs(ST0);
/* 77d6ad: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 77d6b3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 77d6b5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 77d6b8: jp 0x77d6e3 */
  if (pf) goto L_77d6e3;
L_77d6ba: /* 77d6ba: mov ecx, edi */
  ecx = edi;
/* 77d6bc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77d6be: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x77d6c4u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 77d6c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77d6c5: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 77d6ca: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 77d6cc: push 0xac5980 */
  { uint32_t v = 0xac5980u; esp -= 4; W32(esp, v); }
/* 77d6d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77d6d2: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x77d6d8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 77d6d8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77d6db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77d6dc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77d6dd: add esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77d6e0: ret 4 */
  esp += 8; SPILL(); return;
L_77d6e3: /* 77d6e3: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 77d6e9: fabs  */
  ST0 = fabs(ST0);
/* 77d6eb: fcomp dword ptr [0xa0892c] */
  fpu_com(ST0, F32((uint32_t)(0xa0892cu)));
  FPOP();
/* 77d6f1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 77d6f3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 77d6f6: jnp 0x77d742 */
  if (!pf) goto L_77d742;
L_77d6f8: /* 77d6f8: mov ecx, edi */
  ecx = edi;
/* 77d6fa: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x77d700u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 77d700: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 77d704: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 77d70a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77d70b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 77d70d: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77d710: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 77d714: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 77d718: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 77d71c: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 77d720: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 77d724: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* 77d728: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 77d72b: push 0xac59d8 */
  { uint32_t v = 0xac59d8u; esp -= 4; W32(esp, v); }
/* 77d730: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77d731: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x77d737u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 77d737: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77d73a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77d73b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77d73c: add esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77d73f: ret 4 */
  esp += 8; SPILL(); return;
L_77d742: /* 77d742: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77d743: call 0x90f170 */
  esp -= 4; W32(esp, 0x77d748u); SPILL(); f_90f170(); if (g_unwind) return; RELOAD();
/* 77d748: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77d74a: jne 0x77d752 */
  if (!zf) goto L_77d752;
L_77d74c: /* 77d74c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77d74d: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x77d752u); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
L_77d752: /* 77d752: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 77d756: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77d757: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77d758: call 0x90e1f0 */
  esp -= 4; W32(esp, 0x77d75du); SPILL(); f_90e1f0(); if (g_unwind) return; RELOAD();
/* 77d75d: fld dword ptr [esp + 0x40] */
  { double v = F32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* 77d761: fmul dword ptr [0xa08580] */
  ST0 = ST0 * (F32((uint32_t)(0xa08580u)));
/* 77d767: fld dword ptr [esp + 0x44] */
  { double v = F32((uint32_t)(esp + 0x44u)); FPUSH(v); }
/* 77d76b: fmul dword ptr [0xa08580] */
  ST0 = ST0 * (F32((uint32_t)(0xa08580u)));
/* 77d771: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 77d775: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* 77d779: fmul dword ptr [0xa08580] */
  ST0 = ST0 * (F32((uint32_t)(0xa08580u)));
/* 77d77f: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 77d783: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 77d787: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 77d789: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 77d78d: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 77d791: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 77d795: fsub dword ptr [esp + 0x30] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x30u)));
/* 77d799: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 77d79b: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 77d79f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77d7a1: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 77d7a3: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 77d7a7: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 77d7ab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77d7ad: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77d7af: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 77d7b1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77d7b3: fcomp dword ptr [0xa08928] */
  fpu_com(ST0, F32((uint32_t)(0xa08928u)));
  FPOP();
/* 77d7b9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 77d7bb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77d7bd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 77d7c0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 77d7c2: jp 0x77d838 */
  if (pf) goto L_77d838;
L_77d7c4: /* 77d7c4: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 77d7c8: fmul dword ptr [0xa08924] */
  ST0 = ST0 * (F32((uint32_t)(0xa08924u)));
/* 77d7ce: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 77d7d0: fmul dword ptr [0xa08920] */
  ST0 = ST0 * (F32((uint32_t)(0xa08920u)));
/* 77d7d6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77d7d8: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 77d7dc: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 77d7e0: fmul dword ptr [0xa08924] */
  ST0 = ST0 * (F32((uint32_t)(0xa08924u)));
/* 77d7e6: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 77d7ea: fmul dword ptr [0xa08920] */
  ST0 = ST0 * (F32((uint32_t)(0xa08920u)));
/* 77d7f0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77d7f2: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 77d7f6: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 77d7fa: fmul dword ptr [0xa08924] */
  ST0 = ST0 * (F32((uint32_t)(0xa08924u)));
/* 77d800: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 77d804: fmul dword ptr [0xa08920] */
  ST0 = ST0 * (F32((uint32_t)(0xa08920u)));
/* 77d80a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 77d80c: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 77d810: fsub dword ptr [esp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0xcu)));
/* 77d814: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 77d818: fsub dword ptr [esp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x10u)));
/* 77d81c: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 77d820: fsub dword ptr [esp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x14u)));
/* 77d824: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 77d828: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 77d82c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 77d82e: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 77d832: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 77d836: jmp 0x77d856 */
  goto L_77d856;
L_77d838: /* 77d838: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 77d83c: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 77d840: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 77d844: xor edx, edx */
  edx = 0;
/* 77d846: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 77d84a: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 77d84e: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 77d852: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
L_77d856: /* 77d856: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 77d85a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 77d85e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77d85f: mov dword ptr [esp + 0x24], edx */
  W32((uint32_t)(esp + 0x24u), edx);
/* 77d863: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 77d867: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77d868: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77d869: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77d86a: call 0x90e7c0 */
  esp -= 4; W32(esp, 0x77d86fu); SPILL(); f_90e7c0(); if (g_unwind) return; RELOAD();
/* 77d86f: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 77d873: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 77d877: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 77d87b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77d87c: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 77d880: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77d881: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77d882: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77d883: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77d884: call 0x90e860 */
  esp -= 4; W32(esp, 0x77d889u); SPILL(); f_90e860(); if (g_unwind) return; RELOAD();
/* 77d889: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 77d88d: fmul dword ptr [0xa08580] */
  ST0 = ST0 * (F32((uint32_t)(0xa08580u)));
/* 77d893: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77d896: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 77d89a: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 77d89e: fld dword ptr [esp + 0x6c] */
  { double v = F32((uint32_t)(esp + 0x6cu)); FPUSH(v); }
/* 77d8a2: fmul dword ptr [0xa08580] */
  ST0 = ST0 * (F32((uint32_t)(0xa08580u)));
/* 77d8a8: fadd dword ptr [esp + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x28u)));
/* 77d8ac: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 77d8b0: fld dword ptr [esp + 0x68] */
  { double v = F32((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* 77d8b4: fmul dword ptr [0xa08580] */
  ST0 = ST0 * (F32((uint32_t)(0xa08580u)));
/* 77d8ba: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* 77d8be: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 77d8c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77d8c2: call 0x90ea10 */
  esp -= 4; W32(esp, 0x77d8c7u); SPILL(); f_90ea10(); if (g_unwind) return; RELOAD();
/* 77d8c7: mov ecx, dword ptr [esp + 0x70] */
  ecx = R32((uint32_t)(esp + 0x70u));
/* 77d8cb: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 77d8cf: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 77d8d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77d8d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77d8d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77d8d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77d8d7: call 0x90ea40 */
  esp -= 4; W32(esp, 0x77d8dcu); SPILL(); f_90ea40(); if (g_unwind) return; RELOAD();
L_77d8dc: /* 77d8dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77d8dd: call 0x90f170 */
  esp -= 4; W32(esp, 0x77d8e2u); SPILL(); f_90f170(); if (g_unwind) return; RELOAD();
/* 77d8e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77d8e4: je 0x77d8f6 */
  if (zf) goto L_77d8f6;
L_77d8e6: /* 77d8e6: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 77d8ec: mov eax, dword ptr [ecx + 0x15224] */
  eax = R32((uint32_t)(ecx + 0x15224u));
/* 77d8f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77d8f4: jne 0x77d928 */
  if (!zf) goto L_77d928;
L_77d8f6: /* 77d8f6: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 77d8fe: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 77d902: add edi, 0x188 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 77d908: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 77d910: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 77d914: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 77d916: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 77d91e: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 77d922: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 77d925: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
L_77d928: /* 77d928: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_77d929: /* 77d929: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77d92a: add esp, 0x6c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77d92d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_77da10(void) {
  LOAD_REGS();
L_77da10: /* 77da10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77da11: mov ebp, esp */
  ebp = esp;
/* 77da13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77da15: push 0x9cc650 */
  { uint32_t v = 0x9cc650u; esp -= 4; W32(esp, v); }
/* 77da1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77da20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77da21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77da28: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77da2b: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 77da30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77da31: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77da32: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77da35: mov ecx, dword ptr [0xce8330] */
  ecx = R32((uint32_t)(0xce8330u));
/* 77da3b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77da3c: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77da3f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77da46: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 77da49: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 77da4b: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* 77da4d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 77da50: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77da53: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77da54: call 0x6cac86 */
  esp -= 4; W32(esp, 0x77da59u); SPILL(); f_6cac86(); if (g_unwind) return; RELOAD();
/* 77da59: mov eax, dword ptr [0xce8220] */
  eax = R32((uint32_t)(0xce8220u));
/* 77da5e: mov ecx, dword ptr [0xce8330] */
  ecx = R32((uint32_t)(0xce8330u));
/* 77da64: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 77da67: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 77da69: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77da6b: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 77da6e: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 77da70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77da71: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 77da73: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77da76: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77da77: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77da7e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77da7f: mov esp, ebp */
  esp = ebp;
/* 77da81: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77da82: ret 4 */
  esp += 8; SPILL(); return;
}

void f_77da85(void) {
  LOAD_REGS();
L_77da85: /* 77da85: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77da88: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77da8d: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 77da90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77da91: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 77da94: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77da99u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77da99(); return;
}

void f_77da99(void) {
  LOAD_REGS();
L_77da99: /* 77da99: push 0xa08930 */
  { uint32_t v = 0xa08930u; esp -= 4; W32(esp, v); }
/* 77da9e: push 0xac5a58 */
  { uint32_t v = 0xac5a58u; esp -= 4; W32(esp, v); }
/* 77daa3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77daa9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77daa9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77daac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77daae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77dab0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77dab5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77dab5: guest_badaddr(0x77dab5); return;
}

void f_77daf0(void) {
  LOAD_REGS();
L_77daf0: /* 77daf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 77daf4: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77daf7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77daf8: mov esi, ecx */
  esi = ecx;
/* 77dafa: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 77dafd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 77dafe: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 77db01: cmp byte ptr [ecx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77db04: jne 0x77db1b */
  if (!zf) goto L_77db1b;
L_77db06: /* 77db06: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 77db07: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 77db0a: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 77db0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77db0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77db10: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77db15: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x77db1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77db1b: /* 77db1b: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 77db20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77db22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77db24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77db26: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 77db2a: call dword ptr [0xcfa358] */
  esp -= 4; W32(esp, 0x77db30u); SPILL(); f_4e3864(); if (g_unwind) return; /* Core!??0FQuat@@QAE@MMMM@Z */ RELOAD();
/* 77db30: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77db32: mov ecx, esi */
  ecx = esi;
/* 77db34: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x77db3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77db3a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77db3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77db3d: je 0x77db74 */
  if (zf) goto L_77db74;
L_77db3f: /* 77db3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77db40: call 0x925ce0 */
  esp -= 4; W32(esp, 0x77db45u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 77db45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77db47: je 0x77db74 */
  if (zf) goto L_77db74;
L_77db49: /* 77db49: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 77db4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77db4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77db4f: call 0x90e220 */
  esp -= 4; W32(esp, 0x77db54u); SPILL(); f_90e220(); if (g_unwind) return; RELOAD();
/* 77db54: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 77db58: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 77db5c: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 77db60: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 77db64: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 77db68: mov dword ptr [esp], eax */
  W32((uint32_t)(esp), eax);
/* 77db6c: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 77db70: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
L_77db74: /* 77db74: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* 77db78: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 77db7c: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 77db80: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 77db82: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 77db86: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 77db89: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 77db8d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 77db90: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 77db93: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77db96: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77dbd0(void) {
  LOAD_REGS();
L_77dbd0: /* 77dbd0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77dbd1: mov ebp, esp */
  ebp = esp;
/* 77dbd3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77dbd5: push 0x9cc660 */
  { uint32_t v = 0x9cc660u; esp -= 4; W32(esp, v); }
/* 77dbda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77dbe0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77dbe1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77dbe8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77dbeb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77dbec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77dbed: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77dbf0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77dbf3: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77dbf6: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77dbf9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77dbfa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77dbfb: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77dbfe: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77dc01: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 77dc04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77dc05: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77dc0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77dc0b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77dc12: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77dc15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77dc15: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77dc18: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77dc19: mov eax, edx */
  eax = edx;
/* 77dc1b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 77dc1e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77dc21: jne 0x77dc39 */
  if (!zf) goto L_77dc39;
L_77dc23: /* 77dc23: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77dc26: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77dc27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77dc29: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77dc2c: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 77dc32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77dc33: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x77dc39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77dc39: /* 77dc39: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 77dc3c: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 77dc3f: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 77dc42: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 77dc45: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 77dc48: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 77dc4b: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 77dc4e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 77dc50: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 77dc53: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 77dc56: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77dc59: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 77dc5c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77dc5d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 77dc60: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77dc63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77dc64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77dc6b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77dc6c: mov esp, ebp */
  esp = ebp;
/* 77dc6e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77dc6f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77dc72(void) {
  LOAD_REGS();
L_77dc72: /* 77dc72: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77dc75: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77dc7a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 77dc7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77dc7e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 77dc81: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77dc86u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77dc86(); return;
}

void f_77dc86(void) {
  LOAD_REGS();
L_77dc86: /* 77dc86: push 0xa08968 */
  { uint32_t v = 0xa08968u; esp -= 4; W32(esp, v); }
/* 77dc8b: push 0xac5ecc */
  { uint32_t v = 0xac5eccu; esp -= 4; W32(esp, v); }
/* 77dc90: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77dc96u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77dc96: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77dc99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77dc9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77dc9d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77dca2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77dca2: guest_badaddr(0x77dca2); return;
}

void f_77dcf0(void) {
  LOAD_REGS();
L_77dcf0: /* 77dcf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77dcf1: mov ebp, esp */
  ebp = esp;
/* 77dcf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77dcf5: push 0x9cc670 */
  { uint32_t v = 0x9cc670u; esp -= 4; W32(esp, v); }
/* 77dcfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77dd00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77dd01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77dd08: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77dd0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77dd0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77dd0d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77dd10: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77dd13: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77dd16: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77dd19: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77dd1a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77dd1b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77dd1e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77dd21: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 77dd24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77dd25: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77dd2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77dd2b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77dd32: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77dd35u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77dd35: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77dd38: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77dd39: mov eax, edx */
  eax = edx;
/* 77dd3b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 77dd3e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77dd41: jne 0x77dd59 */
  if (!zf) goto L_77dd59;
L_77dd43: /* 77dd43: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77dd46: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77dd47: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77dd49: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77dd4c: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 77dd52: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77dd53: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x77dd59u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77dd59: /* 77dd59: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 77dd5c: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 77dd5f: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 77dd62: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 77dd65: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 77dd68: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 77dd6b: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 77dd6e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 77dd70: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 77dd73: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 77dd76: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77dd79: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 77dd7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77dd7d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 77dd80: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77dd83: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77dd84: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77dd8b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77dd8c: mov esp, ebp */
  esp = ebp;
/* 77dd8e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77dd8f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77dd92(void) {
  LOAD_REGS();
L_77dd92: /* 77dd92: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77dd95: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77dd9a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 77dd9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77dd9e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 77dda1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77dda6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77dda6(); return;
}

void f_77dda6(void) {
  LOAD_REGS();
L_77dda6: /* 77dda6: push 0xa089a8 */
  { uint32_t v = 0xa089a8u; esp -= 4; W32(esp, v); }
/* 77ddab: push 0xac5ed4 */
  { uint32_t v = 0xac5ed4u; esp -= 4; W32(esp, v); }
/* 77ddb0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77ddb6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77ddb6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77ddb9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ddbb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ddbd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77ddc2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77ddc2: guest_badaddr(0x77ddc2); return;
}

void f_77de10(void) {
  LOAD_REGS();
L_77de10: /* 77de10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77de11: mov ebp, esp */
  ebp = esp;
/* 77de13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77de15: push 0x9cc680 */
  { uint32_t v = 0x9cc680u; esp -= 4; W32(esp, v); }
/* 77de1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77de20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77de21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77de28: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77de2b: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 77de30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77de31: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 77de37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77de38: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77de3b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77de3e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77de41: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77de42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77de43: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77de46: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77de49: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 77de4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77de4d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77de52: mov edi, ecx */
  edi = ecx;
/* 77de54: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77de57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77de58: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77de5f: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77de62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77de62: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 77de68: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 77de6a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77de6c: je 0x77de7b */
  if (zf) goto L_77de7b;
L_77de6e: /* 77de6e: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 77de73: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 77de75: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77de77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77de78: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x77de7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77de7b: /* 77de7b: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 77de81: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 77de83: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77de85: mov ebx, eax */
  ebx = eax;
/* 77de87: jne 0x77de8c */
  if (!zf) goto L_77de8c;
L_77de89: /* 77de89: lea ebx, [ebp - 0x24] */
  ebx = (uint32_t)(ebp + 0xffffffdcu);
L_77de8c: /* 77de8c: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77de8f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77de90: mov eax, edx */
  eax = edx;
/* 77de92: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 77de95: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77de98: jne 0x77deb0 */
  if (!zf) goto L_77deb0;
L_77de9a: /* 77de9a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77de9d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77de9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77dea0: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77dea3: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 77dea9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77deaa: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x77deb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77deb0: /* 77deb0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 77deb2: mov ecx, edi */
  ecx = edi;
/* 77deb4: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x77debau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77deba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77debc: je 0x77dedf */
  if (zf) goto L_77dedf;
L_77debe: /* 77debe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77debf: call 0x925ce0 */
  esp -= 4; W32(esp, 0x77dec4u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 77dec4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77dec6: je 0x77dedf */
  if (zf) goto L_77dedf;
L_77dec8: /* 77dec8: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 77decb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77decc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77decd: call 0x90e6a0 */
  esp -= 4; W32(esp, 0x77ded2u); SPILL(); f_90e6a0(); if (g_unwind) return; RELOAD();
/* 77ded2: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 77ded5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77ded6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77ded7: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x77dedcu); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 77dedc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77dedf: /* 77dedf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77dee2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77dee3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77dee4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77deeb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77deec: mov esp, ebp */
  esp = ebp;
/* 77deee: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77deef: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77def2(void) {
  LOAD_REGS();
L_77def2: /* 77def2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77def5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77defa: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 77defd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77defe: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 77df01: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77df06u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77df06(); return;
}

void f_77df06(void) {
  LOAD_REGS();
L_77df06: /* 77df06: push 0xa089f0 */
  { uint32_t v = 0xa089f0u; esp -= 4; W32(esp, v); }
/* 77df0b: push 0xac5f0c */
  { uint32_t v = 0xac5f0cu; esp -= 4; W32(esp, v); }
/* 77df10: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77df16u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77df16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77df19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77df1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77df1d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77df22u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77df22: guest_badaddr(0x77df22); return;
}

void f_77df80(void) {
  LOAD_REGS();
L_77df80: /* 77df80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77df81: mov ebp, esp */
  ebp = esp;
/* 77df83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77df85: push 0x9cc690 */
  { uint32_t v = 0x9cc690u; esp -= 4; W32(esp, v); }
/* 77df8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77df90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77df91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77df98: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77df9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77df9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77df9d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77dfa0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77dfa3: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 77dfaa: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77dfad: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77dfae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77dfaf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77dfb2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77dfb5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 77dfb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77dfb9: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77dfbe: mov edi, ecx */
  edi = ecx;
/* 77dfc0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77dfc3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77dfc4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77dfcb: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77dfceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77dfce: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77dfd1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77dfd2: mov eax, edx */
  eax = edx;
/* 77dfd4: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 77dfd7: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77dfda: jne 0x77dff2 */
  if (!zf) goto L_77dff2;
L_77dfdc: /* 77dfdc: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77dfdf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77dfe0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77dfe2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77dfe5: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 77dfeb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77dfec: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x77dff2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77dff2: /* 77dff2: mov eax, dword ptr [edi + 0x30c] */
  eax = R32((uint32_t)(edi + 0x30cu));
/* 77dff8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77dffa: je 0x77e002 */
  if (zf) goto L_77e002;
L_77dffc: /* 77dffc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77dfff: mov dword ptr [eax + 0x40], ecx */
  W32((uint32_t)(eax + 0x40u), ecx);
L_77e002: /* 77e002: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77e005: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77e006: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77e007: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77e00e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77e00f: mov esp, ebp */
  esp = ebp;
/* 77e011: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77e012: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77e015(void) {
  LOAD_REGS();
L_77e015: /* 77e015: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77e018: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77e01d: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 77e020: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e021: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 77e024: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77e029u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77e029(); return;
}

void f_77e029(void) {
  LOAD_REGS();
L_77e029: /* 77e029: push 0xa08a34 */
  { uint32_t v = 0xa08a34u; esp -= 4; W32(esp, v); }
/* 77e02e: push 0xac5f24 */
  { uint32_t v = 0xac5f24u; esp -= 4; W32(esp, v); }
/* 77e033: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77e039u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77e039: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77e03c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e03e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e040: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77e045u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77e045: guest_badaddr(0x77e045); return;
}

void f_77e090(void) {
  LOAD_REGS();
L_77e090: /* 77e090: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77e091: mov ebp, esp */
  ebp = esp;
/* 77e093: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77e095: push 0x9cc6a0 */
  { uint32_t v = 0x9cc6a0u; esp -= 4; W32(esp, v); }
/* 77e09a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77e0a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e0a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77e0a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77e0ab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77e0ae: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 77e0b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77e0b2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77e0b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77e0b4: mov esi, ecx */
  esi = ecx;
/* 77e0b6: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 77e0b9: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77e0bc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77e0bd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77e0c0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77e0c7: jne 0x77e0de */
  if (!zf) goto L_77e0de;
L_77e0c9: /* 77e0c9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 77e0cc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77e0cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e0cf: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 77e0d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e0d3: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77e0d8: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x77e0deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77e0de: /* 77e0de: mov eax, dword ptr [esi + 0x30c] */
  eax = R32((uint32_t)(esi + 0x30cu));
/* 77e0e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77e0e6: je 0x77e0f0 */
  if (zf) goto L_77e0f0;
L_77e0e8: /* 77e0e8: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 77e0eb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 77e0ee: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_77e0f0: /* 77e0f0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77e0f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77e0f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77e0f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77e0fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77e0fd: mov esp, ebp */
  esp = ebp;
/* 77e0ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77e100: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77e103(void) {
  LOAD_REGS();
L_77e103: /* 77e103: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77e106: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77e10b: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 77e10e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77e10f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77e112: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77e117u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77e117(); return;
}

void f_77e117(void) {
  LOAD_REGS();
L_77e117: /* 77e117: push 0xa08a78 */
  { uint32_t v = 0xa08a78u; esp -= 4; W32(esp, v); }
/* 77e11c: push 0xac5f2c */
  { uint32_t v = 0xac5f2cu; esp -= 4; W32(esp, v); }
/* 77e121: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77e127u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77e127: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77e12a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e12c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e12e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77e133u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77e133: guest_badaddr(0x77e133); return;
}

void f_77e170(void) {
  LOAD_REGS();
L_77e170: /* 77e170: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77e171: mov ebp, esp */
  ebp = esp;
/* 77e173: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77e175: push 0x9cc6b0 */
  { uint32_t v = 0x9cc6b0u; esp -= 4; W32(esp, v); }
/* 77e17a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77e180: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e181: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77e188: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77e18b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77e18c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77e18d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77e190: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77e193: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 77e19a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77e19d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77e19e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77e19f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77e1a2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77e1a5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 77e1a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e1a9: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77e1ae: mov edi, ecx */
  edi = ecx;
/* 77e1b0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77e1b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77e1b4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77e1bb: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77e1beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77e1be: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77e1c1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77e1c2: mov eax, edx */
  eax = edx;
/* 77e1c4: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 77e1c7: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77e1ca: jne 0x77e1e2 */
  if (!zf) goto L_77e1e2;
L_77e1cc: /* 77e1cc: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77e1cf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77e1d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e1d2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77e1d5: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 77e1db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77e1dc: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x77e1e2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77e1e2: /* 77e1e2: mov eax, dword ptr [edi + 0x30c] */
  eax = R32((uint32_t)(edi + 0x30cu));
/* 77e1e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77e1ea: je 0x77e1f2 */
  if (zf) goto L_77e1f2;
L_77e1ec: /* 77e1ec: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77e1ef: mov dword ptr [eax + 0x3c], ecx */
  W32((uint32_t)(eax + 0x3cu), ecx);
L_77e1f2: /* 77e1f2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77e1f5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77e1f6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77e1f7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77e1fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77e1ff: mov esp, ebp */
  esp = ebp;
/* 77e201: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77e202: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77e205(void) {
  LOAD_REGS();
L_77e205: /* 77e205: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77e208: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77e20d: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 77e210: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e211: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 77e214: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77e219u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77e219(); return;
}

void f_77e219(void) {
  LOAD_REGS();
L_77e219: /* 77e219: push 0xa08abc */
  { uint32_t v = 0xa08abcu; esp -= 4; W32(esp, v); }
/* 77e21e: push 0xac5f34 */
  { uint32_t v = 0xac5f34u; esp -= 4; W32(esp, v); }
/* 77e223: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77e229u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77e229: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77e22c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e22e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e230: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77e235u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77e235: guest_badaddr(0x77e235); return;
}

void f_77e280(void) {
  LOAD_REGS();
L_77e280: /* 77e280: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77e281: mov ebp, esp */
  ebp = esp;
/* 77e283: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77e285: push 0x9cc6c0 */
  { uint32_t v = 0x9cc6c0u; esp -= 4; W32(esp, v); }
/* 77e28a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77e290: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e291: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77e298: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77e29b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77e29e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 77e2a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77e2a2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77e2a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77e2a4: mov esi, ecx */
  esi = ecx;
/* 77e2a6: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 77e2a9: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77e2ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77e2ad: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77e2b0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77e2b7: jne 0x77e2ce */
  if (!zf) goto L_77e2ce;
L_77e2b9: /* 77e2b9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 77e2bc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77e2bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e2bf: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 77e2c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e2c3: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77e2c8: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x77e2ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77e2ce: /* 77e2ce: mov eax, dword ptr [esi + 0x30c] */
  eax = R32((uint32_t)(esi + 0x30cu));
/* 77e2d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77e2d6: je 0x77e2e0 */
  if (zf) goto L_77e2e0;
L_77e2d8: /* 77e2d8: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 77e2db: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 77e2de: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_77e2e0: /* 77e2e0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77e2e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77e2e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77e2e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77e2ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77e2ed: mov esp, ebp */
  esp = ebp;
/* 77e2ef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77e2f0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77e2f3(void) {
  LOAD_REGS();
L_77e2f3: /* 77e2f3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77e2f6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77e2fb: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 77e2fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77e2ff: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77e302: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77e307u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77e307(); return;
}

void f_77e307(void) {
  LOAD_REGS();
L_77e307: /* 77e307: push 0xa08af8 */
  { uint32_t v = 0xa08af8u; esp -= 4; W32(esp, v); }
/* 77e30c: push 0xac5f3c */
  { uint32_t v = 0xac5f3cu; esp -= 4; W32(esp, v); }
/* 77e311: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77e317u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77e317: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77e31a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e31c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e31e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77e323u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77e323: guest_badaddr(0x77e323); return;
}

void f_77e360(void) {
  LOAD_REGS();
L_77e360: /* 77e360: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77e361: mov ebp, esp */
  ebp = esp;
/* 77e363: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77e365: push 0x9cc6d0 */
  { uint32_t v = 0x9cc6d0u; esp -= 4; W32(esp, v); }
/* 77e36a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77e370: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e371: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77e378: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77e37b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77e37c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77e37d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77e380: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77e383: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 77e38a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77e38d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77e38e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77e38f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77e392: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77e395: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 77e398: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e399: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77e39e: mov edi, ecx */
  edi = ecx;
/* 77e3a0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77e3a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77e3a4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77e3ab: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77e3aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77e3ae: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77e3b1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77e3b2: mov eax, edx */
  eax = edx;
/* 77e3b4: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 77e3b7: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77e3ba: jne 0x77e3d2 */
  if (!zf) goto L_77e3d2;
L_77e3bc: /* 77e3bc: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77e3bf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77e3c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e3c2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77e3c5: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 77e3cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77e3cc: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x77e3d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77e3d2: /* 77e3d2: mov eax, dword ptr [edi + 0x30c] */
  eax = R32((uint32_t)(edi + 0x30cu));
/* 77e3d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77e3da: je 0x77e3e2 */
  if (zf) goto L_77e3e2;
L_77e3dc: /* 77e3dc: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77e3df: mov dword ptr [eax + 0x44], ecx */
  W32((uint32_t)(eax + 0x44u), ecx);
L_77e3e2: /* 77e3e2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77e3e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77e3e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77e3e7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77e3ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77e3ef: mov esp, ebp */
  esp = ebp;
/* 77e3f1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77e3f2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77e3f5(void) {
  LOAD_REGS();
L_77e3f5: /* 77e3f5: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77e3f8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77e3fd: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 77e400: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e401: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 77e404: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77e409u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77e409(); return;
}

void f_77e409(void) {
  LOAD_REGS();
L_77e409: /* 77e409: push 0xa08b38 */
  { uint32_t v = 0xa08b38u; esp -= 4; W32(esp, v); }
/* 77e40e: push 0xac5f44 */
  { uint32_t v = 0xac5f44u; esp -= 4; W32(esp, v); }
/* 77e413: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77e419u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77e419: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77e41c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e41e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e420: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77e425u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77e425: guest_badaddr(0x77e425); return;
}

void f_77e470(void) {
  LOAD_REGS();
L_77e470: /* 77e470: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77e471: mov ebp, esp */
  ebp = esp;
/* 77e473: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77e475: push 0x9cc6e0 */
  { uint32_t v = 0x9cc6e0u; esp -= 4; W32(esp, v); }
/* 77e47a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77e480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e481: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77e488: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77e48b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77e48e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 77e491: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77e492: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77e493: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77e494: mov esi, ecx */
  esi = ecx;
/* 77e496: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 77e499: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77e49c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77e49d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77e4a0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77e4a7: jne 0x77e4be */
  if (!zf) goto L_77e4be;
L_77e4a9: /* 77e4a9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 77e4ac: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77e4ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e4af: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 77e4b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e4b3: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77e4b8: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x77e4beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77e4be: /* 77e4be: mov eax, dword ptr [esi + 0x30c] */
  eax = R32((uint32_t)(esi + 0x30cu));
/* 77e4c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77e4c6: je 0x77e4d0 */
  if (zf) goto L_77e4d0;
L_77e4c8: /* 77e4c8: mov eax, dword ptr [eax + 0x44] */
  eax = R32((uint32_t)(eax + 0x44u));
/* 77e4cb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 77e4ce: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_77e4d0: /* 77e4d0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77e4d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77e4d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77e4d5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77e4dc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77e4dd: mov esp, ebp */
  esp = ebp;
/* 77e4df: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77e4e0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77e4e3(void) {
  LOAD_REGS();
L_77e4e3: /* 77e4e3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77e4e6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77e4eb: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 77e4ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77e4ef: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77e4f2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77e4f7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77e4f7(); return;
}

void f_77e4f7(void) {
  LOAD_REGS();
L_77e4f7: /* 77e4f7: push 0xa08b88 */
  { uint32_t v = 0xa08b88u; esp -= 4; W32(esp, v); }
/* 77e4fc: push 0xac5f4c */
  { uint32_t v = 0xac5f4cu; esp -= 4; W32(esp, v); }
/* 77e501: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77e507u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77e507: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77e50a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e50c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e50e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77e513u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77e513: guest_badaddr(0x77e513); return;
}

void f_77e550(void) {
  LOAD_REGS();
L_77e550: /* 77e550: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77e551: mov ebp, esp */
  ebp = esp;
/* 77e553: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77e555: push 0x9cc6f0 */
  { uint32_t v = 0x9cc6f0u; esp -= 4; W32(esp, v); }
/* 77e55a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77e560: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e561: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77e568: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77e56b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77e56e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 77e571: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77e572: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77e573: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77e574: mov esi, ecx */
  esi = ecx;
/* 77e576: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 77e579: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77e57c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77e57d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77e580: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77e587: jne 0x77e59e */
  if (!zf) goto L_77e59e;
L_77e589: /* 77e589: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 77e58c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77e58d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e58f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 77e592: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e593: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77e598: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x77e59eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77e59e: /* 77e59e: mov ecx, esi */
  ecx = esi;
/* 77e5a0: call 0x6c6726 */
  esp -= 4; W32(esp, 0x77e5a5u); SPILL(); f_6c6726(); if (g_unwind) return; RELOAD();
/* 77e5a5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77e5a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77e5a9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77e5aa: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77e5b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77e5b2: mov esp, ebp */
  esp = ebp;
/* 77e5b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77e5b5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77e5b8(void) {
  LOAD_REGS();
L_77e5b8: /* 77e5b8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77e5bb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77e5c0: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 77e5c3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77e5c4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77e5c7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77e5ccu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77e5cc(); return;
}

void f_77e5cc(void) {
  LOAD_REGS();
L_77e5cc: /* 77e5cc: push 0xa08bd4 */
  { uint32_t v = 0xa08bd4u; esp -= 4; W32(esp, v); }
/* 77e5d1: push 0xac5f6c */
  { uint32_t v = 0xac5f6cu; esp -= 4; W32(esp, v); }
/* 77e5d6: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77e5dcu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77e5dc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77e5df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e5e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e5e3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77e5e8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77e5e8: guest_badaddr(0x77e5e8); return;
}

void f_77e620(void) {
  LOAD_REGS();
L_77e620: /* 77e620: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77e621: mov ebp, esp */
  ebp = esp;
/* 77e623: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77e625: push 0x9cc700 */
  { uint32_t v = 0x9cc700u; esp -= 4; W32(esp, v); }
/* 77e62a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77e630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e631: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77e638: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77e63b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77e63e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 77e641: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77e642: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77e643: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77e644: mov esi, ecx */
  esi = ecx;
/* 77e646: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 77e649: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77e64c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77e64d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77e650: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77e657: jne 0x77e66e */
  if (!zf) goto L_77e66e;
L_77e659: /* 77e659: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 77e65c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77e65d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e65f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 77e662: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e663: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77e668: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x77e66eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77e66e: /* 77e66e: mov ecx, esi */
  ecx = esi;
/* 77e670: call 0x6c9b51 */
  esp -= 4; W32(esp, 0x77e675u); SPILL(); f_6c9b51(); if (g_unwind) return; RELOAD();
/* 77e675: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 77e678: xor ecx, ecx */
  ecx = 0;
/* 77e67a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77e67c: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 77e67f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77e680: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77e681: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77e682: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 77e684: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77e687: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77e68e: mov esp, ebp */
  esp = ebp;
/* 77e690: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77e691: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77e694(void) {
  LOAD_REGS();
L_77e694: /* 77e694: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77e697: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77e69c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 77e69f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77e6a0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 77e6a3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77e6a8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77e6a8(); return;
}

void f_77e6a8(void) {
  LOAD_REGS();
L_77e6a8: /* 77e6a8: push 0xa08c00 */
  { uint32_t v = 0xa08c00u; esp -= 4; W32(esp, v); }
/* 77e6ad: push 0xac5f74 */
  { uint32_t v = 0xac5f74u; esp -= 4; W32(esp, v); }
/* 77e6b2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77e6b8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77e6b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77e6bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e6bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e6bf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77e6c4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77e6c4: guest_badaddr(0x77e6c4); return;
}

void f_77e700(void) {
  LOAD_REGS();
L_77e700: /* 77e700: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77e701: mov ebp, esp */
  ebp = esp;
/* 77e703: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77e705: push 0x9cc710 */
  { uint32_t v = 0x9cc710u; esp -= 4; W32(esp, v); }
/* 77e70a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77e710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e711: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77e718: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77e71b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77e71e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 77e721: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77e722: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77e723: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77e724: mov esi, ecx */
  esi = ecx;
/* 77e726: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 77e729: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77e72c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77e72d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77e730: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77e737: jne 0x77e74e */
  if (!zf) goto L_77e74e;
L_77e739: /* 77e739: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 77e73c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77e73d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e73f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 77e742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e743: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77e748: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x77e74eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77e74e: /* 77e74e: mov ecx, esi */
  ecx = esi;
/* 77e750: call 0x6c3175 */
  esp -= 4; W32(esp, 0x77e755u); SPILL(); f_6c3175(); if (g_unwind) return; RELOAD();
/* 77e755: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77e758: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77e759: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77e75a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77e761: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77e762: mov esp, ebp */
  esp = ebp;
/* 77e764: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77e765: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77e768(void) {
  LOAD_REGS();
L_77e768: /* 77e768: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77e76b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77e770: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 77e773: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77e774: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77e777: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77e77cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77e77c(); return;
}

void f_77e77c(void) {
  LOAD_REGS();
L_77e77c: /* 77e77c: push 0xa08c34 */
  { uint32_t v = 0xa08c34u; esp -= 4; W32(esp, v); }
/* 77e781: push 0xac64a0 */
  { uint32_t v = 0xac64a0u; esp -= 4; W32(esp, v); }
/* 77e786: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77e78cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77e78c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77e78f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e791: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e793: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77e798u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77e798: guest_badaddr(0x77e798); return;
}

void f_77e7d0(void) {
  LOAD_REGS();
L_77e7d0: /* 77e7d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77e7d1: mov ebp, esp */
  ebp = esp;
/* 77e7d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77e7d5: push 0x9cc720 */
  { uint32_t v = 0x9cc720u; esp -= 4; W32(esp, v); }
/* 77e7da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77e7e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e7e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77e7e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77e7eb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77e7ee: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 77e7f1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77e7f2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77e7f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77e7f4: mov esi, ecx */
  esi = ecx;
/* 77e7f6: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 77e7f9: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77e7fc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77e7fd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77e800: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77e807: jne 0x77e81e */
  if (!zf) goto L_77e81e;
L_77e809: /* 77e809: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 77e80c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77e80d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e80f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 77e812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e813: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77e818: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x77e81eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77e81e: /* 77e81e: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 77e824: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77e826: je 0x77e88c */
  if (zf) goto L_77e88c;
L_77e828: /* 77e828: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 77e82e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77e830: je 0x77e88c */
  if (zf) goto L_77e88c;
L_77e832: /* 77e832: mov ecx, dword ptr [ecx + 0x1170] */
  ecx = R32((uint32_t)(ecx + 0x1170u));
/* 77e838: cmp ecx, dword ptr [eax + 0x3fc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x3fcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77e83e: jge 0x77e88c */
  if ((sf == of)) goto L_77e88c;
L_77e840: /* 77e840: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 77e843: mov dword ptr [edx], 1 */
  W32((uint32_t)(edx), 0x1u);
/* 77e849: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77e84c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77e853: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77e854: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77e855: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77e856: mov esp, ebp */
  esp = ebp;
/* 77e858: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77e859: ret 8 */
  esp += 12; SPILL(); return;
L_77e88c: /* 77e88c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 77e88f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77e892: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77e893: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77e894: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 77e89a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77e8a1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77e8a2: mov esp, ebp */
  esp = ebp;
/* 77e8a4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77e8a5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77e85c(void) {
  LOAD_REGS();
L_77e85c: /* 77e85c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77e85f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77e864: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 77e867: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77e868: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77e86b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77e870u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77e870(); return;
}

void f_77e870(void) {
  LOAD_REGS();
L_77e870: /* 77e870: push 0xa08c78 */
  { uint32_t v = 0xa08c78u; esp -= 4; W32(esp, v); }
/* 77e875: push 0xac64a8 */
  { uint32_t v = 0xac64a8u; esp -= 4; W32(esp, v); }
/* 77e87a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77e880u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77e880: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77e883: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e885: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77e887: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77e88cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 77e88c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 77e88f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77e892: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77e893: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77e894: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 77e89a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77e8a1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77e8a2: mov esp, ebp */
  esp = ebp;
/* 77e8a4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77e8a5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77e8f0(void) {
  LOAD_REGS();
L_77e8f0: /* 77e8f0: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 77e8f4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 77e8f6: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 77e8f8: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 77e8fc: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 77e8ff: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 77e902: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 77e906: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 77e909: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 77e90c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_77e920(void) {
  LOAD_REGS();
L_77e920: /* 77e920: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77e922: push 0x9cc745 */
  { uint32_t v = 0x9cc745u; esp -= 4; W32(esp, v); }
/* 77e927: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77e92d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e92e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77e935: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77e936: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77e937: mov esi, ecx */
  esi = ecx;
/* 77e939: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77e93a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 77e93e: call dword ptr [0xcfa31c] */
  esp -= 4; W32(esp, 0x77e944u); SPILL(); f_4e3adf(); if (g_unwind) return; /* Core!??0FInterpCurve@@QAE@XZ */ RELOAD();
/* 77e944: lea edi, [esi + 0xc] */
  edi = (uint32_t)(esi + 0xcu);
/* 77e947: mov ecx, edi */
  ecx = edi;
/* 77e949: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 77e951: call dword ptr [0xcfa31c] */
  esp -= 4; W32(esp, 0x77e957u); SPILL(); f_4e3adf(); if (g_unwind) return; /* Core!??0FInterpCurve@@QAE@XZ */ RELOAD();
/* 77e957: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 77e95b: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 77e95f: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 77e963: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 77e966: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77e967: mov ecx, esi */
  ecx = esi;
/* 77e969: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* 77e96e: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 77e971: call dword ptr [0xcfa324] */
  esp -= 4; W32(esp, 0x77e977u); SPILL(); f_4e3ca1(); if (g_unwind) return; /* Core!??4FInterpCurve@@QAEXABV0@@Z */ RELOAD();
/* 77e977: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 77e97b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e97c: mov ecx, edi */
  ecx = edi;
/* 77e97e: call dword ptr [0xcfa324] */
  esp -= 4; W32(esp, 0x77e984u); SPILL(); f_4e3ca1(); if (g_unwind) return; /* Core!??4FInterpCurve@@QAEXABV0@@Z */ RELOAD();
/* 77e984: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 77e988: mov dword ptr [esi + 0x20], 0 */
  W32((uint32_t)(esi + 0x20u), 0x0u);
/* 77e98f: mov dword ptr [esi + 0x24], 0 */
  W32((uint32_t)(esi + 0x24u), 0x0u);
/* 77e996: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77e997: mov eax, esi */
  eax = esi;
/* 77e999: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77e99a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77e9a1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77e9a4: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_77e9e0(void) {
  LOAD_REGS();
L_77e9e0: /* 77e9e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77e9e1: mov ebp, esp */
  ebp = esp;
/* 77e9e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77e9e5: push 0x9cc760 */
  { uint32_t v = 0x9cc760u; esp -= 4; W32(esp, v); }
/* 77e9ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77e9f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77e9f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77e9f8: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77e9fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77e9fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77e9fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77e9fe: mov ebx, ecx */
  ebx = ecx;
/* 77ea00: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 77ea03: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77ea06: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77ea0d: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x77ea13u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 77ea13: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 77ea18: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77ea1b: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 77ea21: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77ea24: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77ea27: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77ea2a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77ea2b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77ea2e: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 77ea31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ea32: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77ea37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ea38: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77ea3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77ea3b: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 77ea41: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 77ea43: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ea45: je 0x77ea54 */
  if (zf) goto L_77ea54;
L_77ea47: /* 77ea47: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 77ea4c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 77ea4e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77ea50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ea51: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x77ea54u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77ea54: /* 77ea54: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 77ea5a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 77ea5c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ea5e: mov edi, eax */
  edi = eax;
/* 77ea60: jne 0x77ea65 */
  if (!zf) goto L_77ea65;
L_77ea62: /* 77ea62: lea edi, [ebp - 0x4c] */
  edi = (uint32_t)(ebp + 0xffffffb4u);
L_77ea65: /* 77ea65: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77ea68: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77ea69: mov eax, edx */
  eax = edx;
/* 77ea6b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 77ea6e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77ea71: jne 0x77ea89 */
  if (!zf) goto L_77ea89;
L_77ea73: /* 77ea73: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77ea76: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77ea77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ea79: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77ea7c: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 77ea82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ea83: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x77ea89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77ea89: /* 77ea89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77ea8a: mov ecx, ebx */
  ecx = ebx;
/* 77ea8c: call 0x6cb33e */
  esp -= 4; W32(esp, 0x77ea91u); SPILL(); f_6cb33e(); if (g_unwind) return; RELOAD();
/* 77ea91: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77ea94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77ea95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77ea96: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77ea9d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77ea9e: mov esp, ebp */
  esp = ebp;
/* 77eaa0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77eaa1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77eaa4(void) {
  LOAD_REGS();
L_77eaa4: /* 77eaa4: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77eaa7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77eaac: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 77eaaf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77eab0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 77eab3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77eab8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77eab8(); return;
}

void f_77eab8(void) {
  LOAD_REGS();
L_77eab8: /* 77eab8: push 0xa08cc4 */
  { uint32_t v = 0xa08cc4u; esp -= 4; W32(esp, v); }
/* 77eabd: push 0xac5ebc */
  { uint32_t v = 0xac5ebcu; esp -= 4; W32(esp, v); }
/* 77eac2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77eac8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77eac8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77eacb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77eacd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77eacf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77ead4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77ead4: guest_badaddr(0x77ead4); return;
}

void f_77eb20(void) {
  LOAD_REGS();
L_77eb20: /* 77eb20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77eb21: mov ebp, esp */
  ebp = esp;
/* 77eb23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77eb25: push 0x9cc770 */
  { uint32_t v = 0x9cc770u; esp -= 4; W32(esp, v); }
/* 77eb2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77eb30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77eb31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77eb38: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77eb3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77eb3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77eb3d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77eb3e: mov edi, ecx */
  edi = ecx;
/* 77eb40: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 77eb43: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77eb46: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77eb4d: call dword ptr [0xcfa2d8] */
  esp -= 4; W32(esp, 0x77eb53u); SPILL(); f_4e36de(); if (g_unwind) return; /* Core!??0FQuat@@QAE@XZ */ RELOAD();
/* 77eb53: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77eb56: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77eb59: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77eb5c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77eb5f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77eb60: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77eb63: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 77eb66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77eb67: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77eb6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77eb6d: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77eb70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77eb70: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77eb73: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77eb76: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 77eb7d: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77eb80: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77eb81: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77eb84: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 77eb87: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77eb88: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77eb8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77eb8e: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77eb91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77eb91: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77eb94: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77eb95: mov eax, edx */
  eax = edx;
/* 77eb97: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 77eb9a: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77eb9d: jne 0x77ebb5 */
  if (!zf) goto L_77ebb5;
L_77eb9f: /* 77eb9f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77eba2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77eba3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77eba5: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77eba8: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 77ebae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ebaf: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x77ebb5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77ebb5: /* 77ebb5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 77ebb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ebb9: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 77ebbc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77ebbd: mov ecx, edi */
  ecx = edi;
/* 77ebbf: call 0x6c5ad8 */
  esp -= 4; W32(esp, 0x77ebc4u); SPILL(); f_6c5ad8(); if (g_unwind) return; RELOAD();
/* 77ebc4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77ebc7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77ebc8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77ebc9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77ebd0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77ebd1: mov esp, ebp */
  esp = ebp;
/* 77ebd3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77ebd4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77ebd7(void) {
  LOAD_REGS();
L_77ebd7: /* 77ebd7: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77ebda: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77ebdf: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 77ebe2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ebe3: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 77ebe6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77ebebu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77ebeb(); return;
}

void f_77ebeb(void) {
  LOAD_REGS();
L_77ebeb: /* 77ebeb: push 0xa08d10 */
  { uint32_t v = 0xa08d10u; esp -= 4; W32(esp, v); }
/* 77ebf0: push 0xac5ec4 */
  { uint32_t v = 0xac5ec4u; esp -= 4; W32(esp, v); }
/* 77ebf5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77ebfbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77ebfb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77ebfe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ec00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ec02: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77ec07u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77ec07: guest_badaddr(0x77ec07); return;
}

void f_77ec50(void) {
  LOAD_REGS();
L_77ec50: /* 77ec50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77ec51: mov ebp, esp */
  ebp = esp;
/* 77ec53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77ec55: push 0x9cc780 */
  { uint32_t v = 0x9cc780u; esp -= 4; W32(esp, v); }
/* 77ec5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77ec60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ec61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77ec68: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77ec6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77ec6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ec6d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77ec70: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77ec73: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 77ec7a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77ec7d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77ec7e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77ec7f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77ec82: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77ec85: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 77ec88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ec89: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77ec8e: mov edi, ecx */
  edi = ecx;
/* 77ec90: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77ec93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ec94: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77ec9b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77ec9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77ec9e: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77eca1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77eca2: mov eax, edx */
  eax = edx;
/* 77eca4: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 77eca7: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77ecaa: jne 0x77ecc2 */
  if (!zf) goto L_77ecc2;
L_77ecac: /* 77ecac: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77ecaf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77ecb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ecb2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77ecb5: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 77ecbb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ecbc: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x77ecc2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77ecc2: /* 77ecc2: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 77ecc8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77eccb: shr eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 77ecce: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 77ecd1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77ecd3: je 0x77ed0e */
  if (zf) goto L_77ed0e;
L_77ecd5: /* 77ecd5: push 0xb1c480 */
  { uint32_t v = 0xb1c480u; esp -= 4; W32(esp, v); }
/* 77ecda: mov ecx, edi */
  ecx = edi;
/* 77ecdc: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77ece2u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77ece2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ece4: jne 0x77ed0e */
  if (!zf) goto L_77ed0e;
L_77ece6: /* 77ece6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77ece9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77ecea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77eceb: call 0x6c3cab */
  esp -= 4; W32(esp, 0x77ecf0u); SPILL(); f_6c3cab(); if (g_unwind) return; RELOAD();
/* 77ecf0: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77ecf3: mov esi, dword ptr [edi + 0x88] */
  esi = R32((uint32_t)(edi + 0x88u));
/* 77ecf9: shl edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 77ecfc: xor edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 77ecfe: and edx, 0x400 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 77ed04: mov eax, esi */
  eax = esi;
/* 77ed06: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 77ed08: mov dword ptr [edi + 0x88], eax */
  W32((uint32_t)(edi + 0x88u), eax);
L_77ed0e: /* 77ed0e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77ed11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77ed12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77ed13: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77ed1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77ed1b: mov esp, ebp */
  esp = ebp;
/* 77ed1d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77ed1e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77ed21(void) {
  LOAD_REGS();
L_77ed21: /* 77ed21: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77ed24: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77ed29: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 77ed2c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77ed2d: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 77ed30: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77ed35u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77ed35(); return;
}

void f_77ed35(void) {
  LOAD_REGS();
L_77ed35: /* 77ed35: push 0xa08d5c */
  { uint32_t v = 0xa08d5cu; esp -= 4; W32(esp, v); }
/* 77ed3a: push 0xac5f64 */
  { uint32_t v = 0xac5f64u; esp -= 4; W32(esp, v); }
/* 77ed3f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77ed45u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77ed45: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77ed48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ed4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ed4c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77ed51u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77ed51: guest_badaddr(0x77ed51); return;
}

void f_77edb0(void) {
  LOAD_REGS();
L_77edb0: /* 77edb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77edb1: mov ebp, esp */
  ebp = esp;
/* 77edb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77edb5: push 0x9cc790 */
  { uint32_t v = 0x9cc790u; esp -= 4; W32(esp, v); }
/* 77edba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77edc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77edc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77edc8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77edcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77edcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77edcd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77edd0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77edd3: xor ebx, ebx */
  ebx = 0;
/* 77edd5: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 77edd8: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77eddb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77eddc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77eddd: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77ede0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77ede3: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 77ede6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ede7: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77edec: mov edi, ecx */
  edi = ecx;
/* 77edee: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77edf1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77edf2: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 77edf5: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77edf8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77edf8: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77edfb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77edfc: mov eax, edx */
  eax = edx;
/* 77edfe: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 77ee01: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77ee04: jne 0x77ee1b */
  if (!zf) goto L_77ee1b;
L_77ee06: /* 77ee06: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77ee09: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77ee0a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77ee0b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77ee0e: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 77ee14: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ee15: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x77ee1bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77ee1b: /* 77ee1b: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77ee1e: je 0x77ee58 */
  if (zf) goto L_77ee58;
L_77ee20: /* 77ee20: mov ebx, dword ptr [edi + 0xb4] */
  ebx = R32((uint32_t)(edi + 0xb4u));
/* 77ee26: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ee28: je 0x77ee58 */
  if (zf) goto L_77ee58;
L_77ee2a: /* 77ee2a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 77ee2c: mov ecx, edi */
  ecx = edi;
/* 77ee2e: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x77ee34u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77ee34: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77ee37: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77ee39: mov esi, eax */
  esi = eax;
/* 77ee3b: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x77ee41u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77ee41: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ee43: je 0x77ee58 */
  if (zf) goto L_77ee58;
L_77ee45: /* 77ee45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ee47: je 0x77ee58 */
  if (zf) goto L_77ee58;
L_77ee49: /* 77ee49: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77ee4b: je 0x77ee58 */
  if (zf) goto L_77ee58;
L_77ee4d: /* 77ee4d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77ee4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ee4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ee50: call 0x6cacb8 */
  esp -= 4; W32(esp, 0x77ee55u); SPILL(); f_6cacb8(); if (g_unwind) return; RELOAD();
/* 77ee55: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77ee58: /* 77ee58: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77ee5b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77ee5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77ee5d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77ee64: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77ee65: mov esp, ebp */
  esp = ebp;
/* 77ee67: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77ee68: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77ee6b(void) {
  LOAD_REGS();
L_77ee6b: /* 77ee6b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77ee6e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77ee73: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 77ee76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77ee77: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 77ee7a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77ee7fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77ee7f(); return;
}

void f_77ee7f(void) {
  LOAD_REGS();
L_77ee7f: /* 77ee7f: push 0xa08d9c */
  { uint32_t v = 0xa08d9cu; esp -= 4; W32(esp, v); }
/* 77ee84: push 0xac657c */
  { uint32_t v = 0xac657cu; esp -= 4; W32(esp, v); }
/* 77ee89: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77ee8fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77ee8f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77ee92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ee94: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ee96: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77ee9bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77ee9b: guest_badaddr(0x77ee9b); return;
}

void f_77eee0(void) {
  LOAD_REGS();
L_77eee0: /* 77eee0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77eee1: mov ebp, esp */
  ebp = esp;
/* 77eee3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77eee5: push 0x9cc7a0 */
  { uint32_t v = 0x9cc7a0u; esp -= 4; W32(esp, v); }
/* 77eeea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77eef0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77eef1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77eef8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77eefb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77eefc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77eefd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77ef00: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77ef03: xor ebx, ebx */
  ebx = 0;
/* 77ef05: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 77ef08: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77ef0b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77ef0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77ef0d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77ef10: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77ef13: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 77ef16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ef17: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77ef1c: mov edi, ecx */
  edi = ecx;
/* 77ef1e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77ef21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ef22: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 77ef25: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77ef28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77ef28: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77ef2b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77ef2c: mov eax, edx */
  eax = edx;
/* 77ef2e: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 77ef31: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77ef34: jne 0x77ef4b */
  if (!zf) goto L_77ef4b;
L_77ef36: /* 77ef36: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77ef39: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77ef3a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77ef3b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77ef3e: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 77ef44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ef45: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x77ef4bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77ef4b: /* 77ef4b: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77ef4e: je 0x77ef88 */
  if (zf) goto L_77ef88;
L_77ef50: /* 77ef50: mov ebx, dword ptr [edi + 0xb4] */
  ebx = R32((uint32_t)(edi + 0xb4u));
/* 77ef56: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ef58: je 0x77ef88 */
  if (zf) goto L_77ef88;
L_77ef5a: /* 77ef5a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 77ef5c: mov ecx, edi */
  ecx = edi;
/* 77ef5e: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x77ef64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77ef64: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77ef67: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77ef69: mov esi, eax */
  esi = eax;
/* 77ef6b: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x77ef71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77ef71: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ef73: je 0x77ef88 */
  if (zf) goto L_77ef88;
L_77ef75: /* 77ef75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ef77: je 0x77ef88 */
  if (zf) goto L_77ef88;
L_77ef79: /* 77ef79: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77ef7b: je 0x77ef88 */
  if (zf) goto L_77ef88;
L_77ef7d: /* 77ef7d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77ef7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ef7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ef80: call 0x6c6d5c */
  esp -= 4; W32(esp, 0x77ef85u); SPILL(); f_6c6d5c(); if (g_unwind) return; RELOAD();
/* 77ef85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_77ef88: /* 77ef88: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77ef8b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77ef8c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77ef8d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77ef94: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77ef95: mov esp, ebp */
  esp = ebp;
/* 77ef97: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77ef98: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77ef9b(void) {
  LOAD_REGS();
L_77ef9b: /* 77ef9b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77ef9e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77efa3: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 77efa6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77efa7: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 77efaa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77efafu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77efaf(); return;
}

void f_77efaf(void) {
  LOAD_REGS();
L_77efaf: /* 77efaf: push 0xa08de4 */
  { uint32_t v = 0xa08de4u; esp -= 4; W32(esp, v); }
/* 77efb4: push 0xac6584 */
  { uint32_t v = 0xac6584u; esp -= 4; W32(esp, v); }
/* 77efb9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77efbfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77efbf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77efc2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77efc4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77efc6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77efcbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77efcb: guest_badaddr(0x77efcb); return;
}

void f_77f010(void) {
  LOAD_REGS();
L_77f010: /* 77f010: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f011: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 77f015: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f017: je 0x77f02e */
  if (zf) goto L_77f02e;
L_77f019: /* 77f019: push 0xb1f868 */
  { uint32_t v = 0xb1f868u; esp -= 4; W32(esp, v); }
/* 77f01e: mov ecx, esi */
  ecx = esi;
/* 77f020: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77f026u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77f026: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f028: je 0x77f02e */
  if (zf) goto L_77f02e;
L_77f02a: /* 77f02a: mov eax, esi */
  eax = esi;
/* 77f02c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77f02d: ret  */
  esp += 4; SPILL(); return;
L_77f02e: /* 77f02e: xor eax, eax */
  eax = 0;
/* 77f030: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77f031: ret  */
  esp += 4; SPILL(); return;
}

void f_77f050(void) {
  LOAD_REGS();
L_77f050: /* 77f050: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77f051: mov ebp, esp */
  ebp = esp;
/* 77f053: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77f055: push 0x9cc7b0 */
  { uint32_t v = 0x9cc7b0u; esp -= 4; W32(esp, v); }
/* 77f05a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77f060: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77f061: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77f068: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77f06b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77f06c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f06d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77f070: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77f073: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 77f07a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77f07d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77f07e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77f07f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77f082: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77f085: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 77f088: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77f089: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77f08e: mov edi, ecx */
  edi = ecx;
/* 77f090: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77f093: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f094: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77f09b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77f09eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77f09e: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77f0a1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77f0a2: mov eax, edx */
  eax = edx;
/* 77f0a4: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 77f0a7: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77f0aa: jne 0x77f0c2 */
  if (!zf) goto L_77f0c2;
L_77f0ac: /* 77f0ac: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77f0af: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77f0b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77f0b2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77f0b5: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 77f0bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f0bc: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x77f0c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77f0c2: /* 77f0c2: mov esi, dword ptr [edi + 0x30c] */
  esi = R32((uint32_t)(edi + 0x30cu));
/* 77f0c8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f0ca: je 0x77f0ea */
  if (zf) goto L_77f0ea;
L_77f0cc: /* 77f0cc: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 77f0d1: mov ecx, esi */
  ecx = esi;
/* 77f0d3: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77f0d9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77f0d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f0db: je 0x77f0ea */
  if (zf) goto L_77f0ea;
L_77f0dd: /* 77f0dd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 77f0e0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77f0e2: mov ecx, esi */
  ecx = esi;
/* 77f0e4: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 77f0e7: call dword ptr [edx + 0x44] */
  { uint32_t t = R32((uint32_t)(edx + 0x44u)); esp -= 4; W32(esp, 0x77f0eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77f0ea: /* 77f0ea: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77f0ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77f0ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77f0ef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77f0f6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77f0f7: mov esp, ebp */
  esp = ebp;
/* 77f0f9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77f0fa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77f0fd(void) {
  LOAD_REGS();
L_77f0fd: /* 77f0fd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77f100: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77f105: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 77f108: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77f109: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 77f10c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77f111u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77f111(); return;
}

void f_77f111(void) {
  LOAD_REGS();
L_77f111: /* 77f111: push 0xa08e2c */
  { uint32_t v = 0xa08e2cu; esp -= 4; W32(esp, v); }
/* 77f116: push 0xac5edc */
  { uint32_t v = 0xac5edcu; esp -= 4; W32(esp, v); }
/* 77f11b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77f121u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77f121: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77f124: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77f126: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77f128: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77f12du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77f12d: guest_badaddr(0x77f12d); return;
}

void f_77f170(void) {
  LOAD_REGS();
L_77f170: /* 77f170: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77f171: mov ebp, esp */
  ebp = esp;
/* 77f173: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77f175: push 0x9cc7c0 */
  { uint32_t v = 0x9cc7c0u; esp -= 4; W32(esp, v); }
/* 77f17a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77f180: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77f181: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77f188: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77f18b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77f18e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 77f191: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77f192: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77f193: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f194: mov esi, ecx */
  esi = ecx;
/* 77f196: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 77f199: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77f19c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77f19d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77f1a0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77f1a7: jne 0x77f1be */
  if (!zf) goto L_77f1be;
L_77f1a9: /* 77f1a9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 77f1ac: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77f1ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77f1af: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 77f1b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77f1b3: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77f1b8: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x77f1beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77f1be: /* 77f1be: mov esi, dword ptr [esi + 0x30c] */
  esi = R32((uint32_t)(esi + 0x30cu));
/* 77f1c4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f1c6: je 0x77f1e1 */
  if (zf) goto L_77f1e1;
L_77f1c8: /* 77f1c8: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 77f1cd: mov ecx, esi */
  ecx = esi;
/* 77f1cf: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77f1d5u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77f1d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f1d7: je 0x77f1e1 */
  if (zf) goto L_77f1e1;
L_77f1d9: /* 77f1d9: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 77f1dc: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 77f1df: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_77f1e1: /* 77f1e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77f1e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77f1e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77f1e6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77f1ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77f1ee: mov esp, ebp */
  esp = ebp;
/* 77f1f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77f1f1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77f1f4(void) {
  LOAD_REGS();
L_77f1f4: /* 77f1f4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77f1f7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77f1fc: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 77f1ff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77f200: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77f203: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77f208u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77f208(); return;
}

void f_77f208(void) {
  LOAD_REGS();
L_77f208: /* 77f208: push 0xa08e60 */
  { uint32_t v = 0xa08e60u; esp -= 4; W32(esp, v); }
/* 77f20d: push 0xac5ee4 */
  { uint32_t v = 0xac5ee4u; esp -= 4; W32(esp, v); }
/* 77f212: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77f218u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77f218: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77f21b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77f21d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77f21f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77f224u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77f224: guest_badaddr(0x77f224); return;
}

void f_77f260(void) {
  LOAD_REGS();
L_77f260: /* 77f260: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77f261: mov ebp, esp */
  ebp = esp;
/* 77f263: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77f265: push 0x9cc7d0 */
  { uint32_t v = 0x9cc7d0u; esp -= 4; W32(esp, v); }
/* 77f26a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77f270: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77f271: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77f278: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77f27b: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 77f280: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77f281: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 77f287: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f288: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77f28b: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77f28e: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77f291: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77f292: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77f293: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77f296: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77f299: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 77f29c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77f29d: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77f2a2: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77f2a5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77f2a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f2a9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77f2b0: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77f2b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77f2b3: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 77f2b9: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 77f2bb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f2bd: je 0x77f2cc */
  if (zf) goto L_77f2cc;
L_77f2bf: /* 77f2bf: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 77f2c4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 77f2c6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77f2c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77f2c9: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x77f2ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77f2cc: /* 77f2cc: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 77f2d2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 77f2d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f2d6: mov ebx, eax */
  ebx = eax;
/* 77f2d8: jne 0x77f2dd */
  if (!zf) goto L_77f2dd;
L_77f2da: /* 77f2da: lea ebx, [ebp - 0x28] */
  ebx = (uint32_t)(ebp + 0xffffffd8u);
L_77f2dd: /* 77f2dd: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 77f2e3: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77f2e6: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77f2e9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77f2ec: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77f2ed: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77f2f0: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 77f2f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77f2f4: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77f2f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f2fa: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77f2fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77f2fd: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 77f303: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 77f305: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f307: je 0x77f316 */
  if (zf) goto L_77f316;
L_77f309: /* 77f309: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 77f30e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 77f310: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77f312: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77f313: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x77f316u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77f316: /* 77f316: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 77f31c: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 77f31e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f320: jne 0x77f325 */
  if (!zf) goto L_77f325;
L_77f322: /* 77f322: lea edi, [ebp - 0x34] */
  edi = (uint32_t)(ebp + 0xffffffccu);
L_77f325: /* 77f325: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77f328: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77f329: mov eax, edx */
  eax = edx;
/* 77f32b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 77f32e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77f331: jne 0x77f349 */
  if (!zf) goto L_77f349;
L_77f333: /* 77f333: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77f336: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77f337: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77f339: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77f33c: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 77f342: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f343: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x77f349u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77f349: /* 77f349: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 77f34c: mov esi, dword ptr [eax + 0x30c] */
  esi = R32((uint32_t)(eax + 0x30cu));
/* 77f352: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f354: je 0x77f39b */
  if (zf) goto L_77f39b;
L_77f356: /* 77f356: push 0xb1f338 */
  { uint32_t v = 0xb1f338u; esp -= 4; W32(esp, v); }
/* 77f35b: mov ecx, esi */
  ecx = esi;
/* 77f35d: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77f363u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77f363: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f365: je 0x77f3ae */
  if (zf) goto L_77f3ae;
L_77f367: /* 77f367: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* 77f36d: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 77f36f: mov edx, dword ptr [esi + 0xb0] */
  edx = R32((uint32_t)(esi + 0xb0u));
/* 77f375: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 77f378: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 77f37e: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 77f381: mov ecx, dword ptr [esi + 0xb8] */
  ecx = R32((uint32_t)(esi + 0xb8u));
/* 77f387: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 77f389: mov edx, dword ptr [esi + 0xbc] */
  edx = R32((uint32_t)(esi + 0xbcu));
/* 77f38f: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 77f392: mov eax, dword ptr [esi + 0xc0] */
  eax = R32((uint32_t)(esi + 0xc0u));
/* 77f398: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
L_77f39b: /* 77f39b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77f39e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77f3a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77f3a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77f3a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77f3a8: mov esp, ebp */
  esp = ebp;
/* 77f3aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77f3ab: ret 8 */
  esp += 12; SPILL(); return;
L_77f3ae: /* 77f3ae: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77f3b1: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 77f3b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f3b6: je 0x77f39b */
  if (zf) goto L_77f39b;
L_77f3b8: /* 77f3b8: mov ecx, dword ptr [eax + 0x168] */
  ecx = R32((uint32_t)(eax + 0x168u));
/* 77f3be: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f3c0: je 0x77f39b */
  if (zf) goto L_77f39b;
L_77f3c2: /* 77f3c2: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* 77f3c5: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 77f3c7: mov ecx, dword ptr [eax + 0x168] */
  ecx = R32((uint32_t)(eax + 0x168u));
/* 77f3cd: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 77f3d0: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 77f3d3: mov ecx, dword ptr [eax + 0x168] */
  ecx = R32((uint32_t)(eax + 0x168u));
/* 77f3d9: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 77f3dc: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 77f3df: mov ecx, dword ptr [eax + 0x168] */
  ecx = R32((uint32_t)(eax + 0x168u));
/* 77f3e5: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* 77f3e8: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 77f3ea: mov ecx, dword ptr [eax + 0x168] */
  ecx = R32((uint32_t)(eax + 0x168u));
/* 77f3f0: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* 77f3f3: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 77f3f6: mov eax, dword ptr [eax + 0x168] */
  eax = R32((uint32_t)(eax + 0x168u));
/* 77f3fc: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 77f3ff: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 77f402: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77f405: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77f406: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77f407: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77f40e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77f40f: mov esp, ebp */
  esp = ebp;
/* 77f411: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77f412: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77f415(void) {
  LOAD_REGS();
L_77f415: /* 77f415: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77f418: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77f41d: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 77f420: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77f421: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 77f424: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77f429u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77f429(); return;
}

void f_77f429(void) {
  LOAD_REGS();
L_77f429: /* 77f429: push 0xa08e94 */
  { uint32_t v = 0xa08e94u; esp -= 4; W32(esp, v); }
/* 77f42e: push 0xac5eec */
  { uint32_t v = 0xac5eecu; esp -= 4; W32(esp, v); }
/* 77f433: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77f439u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77f439: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77f43c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77f43e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77f440: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77f445u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77f445: guest_badaddr(0x77f445); return;
}

void f_77f4d0(void) {
  LOAD_REGS();
L_77f4d0: /* 77f4d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77f4d1: mov ebp, esp */
  ebp = esp;
/* 77f4d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77f4d5: push 0x9cc7e0 */
  { uint32_t v = 0x9cc7e0u; esp -= 4; W32(esp, v); }
/* 77f4da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77f4e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77f4e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77f4e8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77f4eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77f4ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f4ed: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77f4f0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77f4f3: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77f4f6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77f4f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77f4f8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77f4fb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77f4fe: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 77f501: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77f502: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77f507: mov edi, ecx */
  edi = ecx;
/* 77f509: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77f50c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f50d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77f514: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77f517u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77f517: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77f51a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77f51d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77f520: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77f521: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77f524: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 77f527: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77f528: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77f52d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f52e: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77f531u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77f531: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77f534: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77f535: mov eax, edx */
  eax = edx;
/* 77f537: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 77f53a: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77f53d: jne 0x77f555 */
  if (!zf) goto L_77f555;
L_77f53f: /* 77f53f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77f542: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77f543: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77f545: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77f548: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 77f54e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f54f: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x77f555u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77f555: /* 77f555: mov esi, dword ptr [edi + 0x30c] */
  esi = R32((uint32_t)(edi + 0x30cu));
/* 77f55b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f55d: je 0x77f5b1 */
  if (zf) goto L_77f5b1;
L_77f55f: /* 77f55f: push 0xb1f338 */
  { uint32_t v = 0xb1f338u; esp -= 4; W32(esp, v); }
/* 77f564: mov ecx, esi */
  ecx = esi;
/* 77f566: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77f56cu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77f56c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f56e: je 0x77f5b1 */
  if (zf) goto L_77f5b1;
L_77f570: /* 77f570: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 77f573: mov dword ptr [esi + 0xac], eax */
  W32((uint32_t)(esi + 0xacu), eax);
/* 77f579: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 77f57c: mov dword ptr [esi + 0xb0], ecx */
  W32((uint32_t)(esi + 0xb0u), ecx);
/* 77f582: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77f585: mov dword ptr [esi + 0xb4], edx */
  W32((uint32_t)(esi + 0xb4u), edx);
/* 77f58b: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 77f58e: mov dword ptr [esi + 0xb8], eax */
  W32((uint32_t)(esi + 0xb8u), eax);
/* 77f594: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 77f597: mov dword ptr [esi + 0xbc], ecx */
  W32((uint32_t)(esi + 0xbcu), ecx);
/* 77f59d: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 77f5a0: mov dword ptr [esi + 0xc0], edx */
  W32((uint32_t)(esi + 0xc0u), edx);
/* 77f5a6: mov ecx, dword ptr [edi + 0x30c] */
  ecx = R32((uint32_t)(edi + 0x30cu));
/* 77f5ac: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 77f5ae: call dword ptr [eax + 0x44] */
  { uint32_t t = R32((uint32_t)(eax + 0x44u)); esp -= 4; W32(esp, 0x77f5b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77f5b1: /* 77f5b1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77f5b4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77f5b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77f5b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77f5bd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77f5be: mov esp, ebp */
  esp = ebp;
/* 77f5c0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77f5c1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77f5c4(void) {
  LOAD_REGS();
L_77f5c4: /* 77f5c4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77f5c7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77f5cc: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 77f5cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77f5d0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77f5d3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77f5d8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77f5d8(); return;
}

void f_77f5d8(void) {
  LOAD_REGS();
L_77f5d8: /* 77f5d8: push 0xa08edc */
  { uint32_t v = 0xa08edcu; esp -= 4; W32(esp, v); }
/* 77f5dd: push 0xac5ef4 */
  { uint32_t v = 0xac5ef4u; esp -= 4; W32(esp, v); }
/* 77f5e2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77f5e8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77f5e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77f5eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77f5ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77f5ef: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77f5f4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77f5f4: guest_badaddr(0x77f5f4); return;
}

void f_77f650(void) {
  LOAD_REGS();
L_77f650: /* 77f650: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77f651: mov ebp, esp */
  ebp = esp;
/* 77f653: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77f655: push 0x9cc7f0 */
  { uint32_t v = 0x9cc7f0u; esp -= 4; W32(esp, v); }
/* 77f65a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77f660: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77f661: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77f668: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77f66b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77f66c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f66d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77f670: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77f673: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77f676: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77f677: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77f678: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77f67b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77f67e: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 77f681: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77f682: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77f687: mov edi, ecx */
  edi = ecx;
/* 77f689: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77f68c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f68d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77f694: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77f697u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77f697: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77f69a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77f69b: mov eax, edx */
  eax = edx;
/* 77f69d: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 77f6a0: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77f6a3: jne 0x77f6bb */
  if (!zf) goto L_77f6bb;
L_77f6a5: /* 77f6a5: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77f6a8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77f6a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77f6ab: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77f6ae: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 77f6b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f6b5: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x77f6bbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77f6bb: /* 77f6bb: mov esi, dword ptr [edi + 0x30c] */
  esi = R32((uint32_t)(edi + 0x30cu));
/* 77f6c1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f6c3: je 0x77f6f8 */
  if (zf) goto L_77f6f8;
L_77f6c5: /* 77f6c5: push 0xb1f338 */
  { uint32_t v = 0xb1f338u; esp -= 4; W32(esp, v); }
/* 77f6ca: mov ecx, esi */
  ecx = esi;
/* 77f6cc: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77f6d2u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77f6d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f6d4: je 0x77f6f8 */
  if (zf) goto L_77f6f8;
L_77f6d6: /* 77f6d6: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 77f6d9: add esi, 0xc4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 77f6df: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 77f6e1: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 77f6e4: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 77f6e7: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77f6ea: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 77f6ed: mov ecx, dword ptr [edi + 0x30c] */
  ecx = R32((uint32_t)(edi + 0x30cu));
/* 77f6f3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 77f6f5: call dword ptr [eax + 0x44] */
  { uint32_t t = R32((uint32_t)(eax + 0x44u)); esp -= 4; W32(esp, 0x77f6f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77f6f8: /* 77f6f8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77f6fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77f6fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77f6fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77f704: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77f705: mov esp, ebp */
  esp = ebp;
/* 77f707: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77f708: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77f70b(void) {
  LOAD_REGS();
L_77f70b: /* 77f70b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77f70e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77f713: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 77f716: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77f717: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77f71a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77f71fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77f71f(); return;
}

void f_77f71f(void) {
  LOAD_REGS();
L_77f71f: /* 77f71f: push 0xa08f24 */
  { uint32_t v = 0xa08f24u; esp -= 4; W32(esp, v); }
/* 77f724: push 0xac5efc */
  { uint32_t v = 0xac5efcu; esp -= 4; W32(esp, v); }
/* 77f729: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77f72fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77f72f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77f732: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77f734: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77f736: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77f73bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77f73b: guest_badaddr(0x77f73b); return;
}

void f_77f780(void) {
  LOAD_REGS();
L_77f780: /* 77f780: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77f781: mov ebp, esp */
  ebp = esp;
/* 77f783: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77f785: push 0x9cc800 */
  { uint32_t v = 0x9cc800u; esp -= 4; W32(esp, v); }
/* 77f78a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77f790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77f791: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77f798: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77f79b: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 77f7a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77f7a1: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 77f7a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f7a8: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77f7ab: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77f7ae: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77f7b1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77f7b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77f7b3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77f7b6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77f7b9: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 77f7bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77f7bd: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77f7c2: mov ebx, ecx */
  ebx = ecx;
/* 77f7c4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77f7c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f7c8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77f7cf: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77f7d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77f7d2: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 77f7d8: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 77f7da: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f7dc: je 0x77f7eb */
  if (zf) goto L_77f7eb;
L_77f7de: /* 77f7de: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 77f7e3: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 77f7e5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77f7e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77f7e8: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x77f7ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77f7eb: /* 77f7eb: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 77f7f1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 77f7f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f7f5: mov edi, eax */
  edi = eax;
/* 77f7f7: jne 0x77f7fc */
  if (!zf) goto L_77f7fc;
L_77f7f9: /* 77f7f9: lea edi, [ebp - 0x24] */
  edi = (uint32_t)(ebp + 0xffffffdcu);
L_77f7fc: /* 77f7fc: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77f7ff: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77f800: mov eax, edx */
  eax = edx;
/* 77f802: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 77f805: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77f808: jne 0x77f820 */
  if (!zf) goto L_77f820;
L_77f80a: /* 77f80a: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77f80d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77f80e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77f810: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77f813: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 77f819: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f81a: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x77f820u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77f820: /* 77f820: mov esi, dword ptr [ebx + 0x30c] */
  esi = R32((uint32_t)(ebx + 0x30cu));
/* 77f826: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f828: je 0x77f851 */
  if (zf) goto L_77f851;
L_77f82a: /* 77f82a: push 0xb1f338 */
  { uint32_t v = 0xb1f338u; esp -= 4; W32(esp, v); }
/* 77f82f: mov ecx, esi */
  ecx = esi;
/* 77f831: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77f837u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77f837: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f839: je 0x77f864 */
  if (zf) goto L_77f864;
L_77f83b: /* 77f83b: add esi, 0xc4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xc4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 77f841: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 77f843: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 77f845: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 77f848: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 77f84b: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 77f84e: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
L_77f851: /* 77f851: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77f854: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77f85b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77f85c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77f85d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77f85e: mov esp, ebp */
  esp = ebp;
/* 77f860: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77f861: ret 8 */
  esp += 12; SPILL(); return;
L_77f864: /* 77f864: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 77f867: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f869: je 0x77f851 */
  if (zf) goto L_77f851;
L_77f86b: /* 77f86b: mov eax, dword ptr [eax + 0x168] */
  eax = R32((uint32_t)(eax + 0x168u));
/* 77f871: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f873: je 0x77f851 */
  if (zf) goto L_77f851;
L_77f875: /* 77f875: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 77f878: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 77f87a: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 77f87c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 77f87f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77f882: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 77f885: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 77f888: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 77f88b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77f88c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77f88d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77f894: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77f895: mov esp, ebp */
  esp = ebp;
/* 77f897: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77f898: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77f89b(void) {
  LOAD_REGS();
L_77f89b: /* 77f89b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77f89e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77f8a3: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 77f8a6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77f8a7: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77f8aa: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77f8afu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77f8af(); return;
}

void f_77f8af(void) {
  LOAD_REGS();
L_77f8af: /* 77f8af: push 0xa08f64 */
  { uint32_t v = 0xa08f64u; esp -= 4; W32(esp, v); }
/* 77f8b4: push 0xac5f04 */
  { uint32_t v = 0xac5f04u; esp -= 4; W32(esp, v); }
/* 77f8b9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77f8bfu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77f8bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77f8c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77f8c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77f8c6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77f8cbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77f8cb: guest_badaddr(0x77f8cb); return;
}

void f_77f930(void) {
  LOAD_REGS();
L_77f930: /* 77f930: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77f931: mov ebp, esp */
  ebp = esp;
/* 77f933: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77f935: push 0x9cc810 */
  { uint32_t v = 0x9cc810u; esp -= 4; W32(esp, v); }
/* 77f93a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77f940: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77f941: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77f948: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77f94b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77f94c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f94d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77f950: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77f953: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 77f95a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77f95d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77f95e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77f95f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77f962: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77f965: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 77f968: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77f969: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77f96e: mov edi, ecx */
  edi = ecx;
/* 77f970: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77f973: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f974: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77f97b: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77f97eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77f97e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77f981: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77f984: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 77f98b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77f98e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77f98f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77f992: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 77f995: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77f996: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77f99b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f99c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77f99fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77f99f: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77f9a2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77f9a3: mov eax, edx */
  eax = edx;
/* 77f9a5: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 77f9a8: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77f9ab: jne 0x77f9c3 */
  if (!zf) goto L_77f9c3;
L_77f9ad: /* 77f9ad: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77f9b0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77f9b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77f9b3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77f9b6: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 77f9bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77f9bd: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x77f9c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77f9c3: /* 77f9c3: mov esi, dword ptr [edi + 0x30c] */
  esi = R32((uint32_t)(edi + 0x30cu));
/* 77f9c9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f9cb: je 0x77f9f1 */
  if (zf) goto L_77f9f1;
L_77f9cd: /* 77f9cd: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 77f9d2: mov ecx, esi */
  ecx = esi;
/* 77f9d4: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77f9dau); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77f9da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77f9dc: je 0x77f9f1 */
  if (zf) goto L_77f9f1;
L_77f9de: /* 77f9de: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 77f9e1: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 77f9e3: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 77f9e6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 77f9e9: mov dword ptr [esi + 0x60], ecx */
  W32((uint32_t)(esi + 0x60u), ecx);
/* 77f9ec: mov ecx, esi */
  ecx = esi;
/* 77f9ee: call dword ptr [edx + 0x44] */
  { uint32_t t = R32((uint32_t)(edx + 0x44u)); esp -= 4; W32(esp, 0x77f9f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77f9f1: /* 77f9f1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77f9f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77f9f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77f9f6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77f9fd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77f9fe: mov esp, ebp */
  esp = ebp;
/* 77fa00: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77fa01: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77fa04(void) {
  LOAD_REGS();
L_77fa04: /* 77fa04: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77fa07: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77fa0c: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 77fa0f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77fa10: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 77fa13: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77fa18u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77fa18(); return;
}

void f_77fa18(void) {
  LOAD_REGS();
L_77fa18: /* 77fa18: push 0xa08fa4 */
  { uint32_t v = 0xa08fa4u; esp -= 4; W32(esp, v); }
/* 77fa1d: push 0xac5f14 */
  { uint32_t v = 0xac5f14u; esp -= 4; W32(esp, v); }
/* 77fa22: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77fa28u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77fa28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77fa2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77fa2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77fa2f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77fa34u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77fa34: guest_badaddr(0x77fa34); return;
}

void f_77fa90(void) {
  LOAD_REGS();
L_77fa90: /* 77fa90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77fa91: mov ebp, esp */
  ebp = esp;
/* 77fa93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77fa95: push 0x9cc820 */
  { uint32_t v = 0x9cc820u; esp -= 4; W32(esp, v); }
/* 77fa9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77faa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77faa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77faa8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77faab: mov eax, dword ptr [0xcfa514] */
  eax = R32((uint32_t)(0xcfa514u));
/* 77fab0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77fab1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77fab2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77fab5: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 77fabc: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 77fac2: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77fac5: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77fac8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77fac9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77faca: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77facd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77fad0: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 77fad3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77fad4: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77fad9: mov ebx, ecx */
  ebx = ecx;
/* 77fadb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77fade: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77fadf: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77fae6: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77fae9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77fae9: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 77faef: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 77faf1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77faf3: je 0x77fb02 */
  if (zf) goto L_77fb02;
L_77faf5: /* 77faf5: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 77fafa: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 77fafc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77fafe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77faff: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x77fb02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77fb02: /* 77fb02: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 77fb08: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 77fb0a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77fb0c: je 0x77fb13 */
  if (zf) goto L_77fb13;
L_77fb0e: /* 77fb0e: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 77fb11: jmp 0x77fb19 */
  goto L_77fb19;
L_77fb13: /* 77fb13: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 77fb16: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
L_77fb19: /* 77fb19: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 77fb20: mov dword ptr [ecx], 0 */
  W32((uint32_t)(ecx), 0x0u);
/* 77fb26: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77fb29: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77fb2c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77fb2f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77fb30: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77fb33: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 77fb36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77fb37: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77fb3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77fb3d: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77fb40u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77fb40: mov ecx, dword ptr [0xcfa510] */
  ecx = R32((uint32_t)(0xcfa510u));
/* 77fb46: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 77fb48: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77fb4a: je 0x77fb59 */
  if (zf) goto L_77fb59;
L_77fb4c: /* 77fb4c: mov eax, dword ptr [0xcfa50c] */
  eax = R32((uint32_t)(0xcfa50cu));
/* 77fb51: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 77fb53: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 77fb55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77fb56: call dword ptr [edx + 0x64] */
  { uint32_t t = R32((uint32_t)(edx + 0x64u)); esp -= 4; W32(esp, 0x77fb59u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77fb59: /* 77fb59: mov ecx, dword ptr [0xcfa514] */
  ecx = R32((uint32_t)(0xcfa514u));
/* 77fb5f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 77fb61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77fb63: mov edi, eax */
  edi = eax;
/* 77fb65: jne 0x77fb6a */
  if (!zf) goto L_77fb6a;
L_77fb67: /* 77fb67: lea edi, [ebp - 0x18] */
  edi = (uint32_t)(ebp + 0xffffffe8u);
L_77fb6a: /* 77fb6a: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77fb6d: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77fb6e: mov eax, edx */
  eax = edx;
/* 77fb70: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 77fb73: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77fb76: jne 0x77fb8e */
  if (!zf) goto L_77fb8e;
L_77fb78: /* 77fb78: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77fb7b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77fb7c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77fb7e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77fb81: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 77fb87: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77fb88: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x77fb8eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77fb8e: /* 77fb8e: mov esi, dword ptr [ebx + 0x30c] */
  esi = R32((uint32_t)(ebx + 0x30cu));
/* 77fb94: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77fb96: je 0x77fbb6 */
  if (zf) goto L_77fbb6;
L_77fb98: /* 77fb98: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 77fb9d: mov ecx, esi */
  ecx = esi;
/* 77fb9f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77fba5u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77fba5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77fba7: je 0x77fbb6 */
  if (zf) goto L_77fbb6;
L_77fba9: /* 77fba9: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 77fbac: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 77fbaf: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 77fbb1: mov edx, dword ptr [esi + 0x60] */
  edx = R32((uint32_t)(esi + 0x60u));
/* 77fbb4: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
L_77fbb6: /* 77fbb6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77fbb9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77fbba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77fbbb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77fbc2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77fbc3: mov esp, ebp */
  esp = ebp;
/* 77fbc5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77fbc6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77fbc9(void) {
  LOAD_REGS();
L_77fbc9: /* 77fbc9: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 77fbcc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77fbd1: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 77fbd4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77fbd5: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 77fbd8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77fbddu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77fbdd(); return;
}

void f_77fbdd(void) {
  LOAD_REGS();
L_77fbdd: /* 77fbdd: push 0xa08fec */
  { uint32_t v = 0xa08fecu; esp -= 4; W32(esp, v); }
/* 77fbe2: push 0xac5f1c */
  { uint32_t v = 0xac5f1cu; esp -= 4; W32(esp, v); }
/* 77fbe7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77fbedu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77fbed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77fbf0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77fbf2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77fbf4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77fbf9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77fbf9: guest_badaddr(0x77fbf9); return;
}

void f_77fc60(void) {
  LOAD_REGS();
L_77fc60: /* 77fc60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77fc61: mov ebp, esp */
  ebp = esp;
/* 77fc63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77fc65: push 0x9cc830 */
  { uint32_t v = 0x9cc830u; esp -= 4; W32(esp, v); }
/* 77fc6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77fc70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77fc71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77fc78: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77fc7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77fc7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77fc7d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77fc80: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77fc83: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 77fc8a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77fc8d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77fc8e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77fc8f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77fc92: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77fc95: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 77fc98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77fc99: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77fc9e: mov edi, ecx */
  edi = ecx;
/* 77fca0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77fca3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77fca4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77fcab: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77fcaeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77fcae: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77fcb1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77fcb2: mov eax, edx */
  eax = edx;
/* 77fcb4: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 77fcb7: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77fcba: jne 0x77fcd2 */
  if (!zf) goto L_77fcd2;
L_77fcbc: /* 77fcbc: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77fcbf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77fcc0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77fcc2: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77fcc5: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 77fccb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77fccc: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x77fcd2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77fcd2: /* 77fcd2: mov esi, dword ptr [edi + 0x30c] */
  esi = R32((uint32_t)(edi + 0x30cu));
/* 77fcd8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77fcda: je 0x77fcf6 */
  if (zf) goto L_77fcf6;
L_77fcdc: /* 77fcdc: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 77fce1: mov ecx, esi */
  ecx = esi;
/* 77fce3: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77fce9u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77fce9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77fceb: je 0x77fcf6 */
  if (zf) goto L_77fcf6;
L_77fced: /* 77fced: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 77fcf0: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
L_77fcf6: /* 77fcf6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77fcf9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77fcfa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77fcfb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77fd02: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77fd03: mov esp, ebp */
  esp = ebp;
/* 77fd05: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77fd06: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77fd09(void) {
  LOAD_REGS();
L_77fd09: /* 77fd09: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 77fd0c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77fd11: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 77fd14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77fd15: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 77fd18: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77fd1du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77fd1d(); return;
}

void f_77fd1d(void) {
  LOAD_REGS();
L_77fd1d: /* 77fd1d: push 0xa09034 */
  { uint32_t v = 0xa09034u; esp -= 4; W32(esp, v); }
/* 77fd22: push 0xac5f54 */
  { uint32_t v = 0xac5f54u; esp -= 4; W32(esp, v); }
/* 77fd27: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77fd2du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77fd2d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77fd30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77fd32: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77fd34: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77fd39u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77fd39: guest_badaddr(0x77fd39); return;
}

void f_77fd80(void) {
  LOAD_REGS();
L_77fd80: /* 77fd80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77fd81: mov ebp, esp */
  ebp = esp;
/* 77fd83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77fd85: push 0x9cc840 */
  { uint32_t v = 0x9cc840u; esp -= 4; W32(esp, v); }
/* 77fd8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77fd90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77fd91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77fd98: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77fd9b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 77fd9e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 77fda1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77fda2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77fda3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77fda4: mov esi, ecx */
  esi = ecx;
/* 77fda6: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 77fda9: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77fdac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77fdad: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77fdb0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 77fdb7: jne 0x77fdce */
  if (!zf) goto L_77fdce;
L_77fdb9: /* 77fdb9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 77fdbc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77fdbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77fdbf: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 77fdc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77fdc3: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77fdc8: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x77fdceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77fdce: /* 77fdce: mov esi, dword ptr [esi + 0x30c] */
  esi = R32((uint32_t)(esi + 0x30cu));
/* 77fdd4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77fdd6: je 0x77fdf4 */
  if (zf) goto L_77fdf4;
L_77fdd8: /* 77fdd8: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 77fddd: mov ecx, esi */
  ecx = esi;
/* 77fddf: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77fde5u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77fde5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77fde7: je 0x77fdf4 */
  if (zf) goto L_77fdf4;
L_77fde9: /* 77fde9: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 77fdef: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 77fdf2: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_77fdf4: /* 77fdf4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 77fdf7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 77fdf8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 77fdf9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 77fe00: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 77fe01: mov esp, ebp */
  esp = ebp;
/* 77fe03: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 77fe04: ret 8 */
  esp += 12; SPILL(); return;
}

void f_77fe07(void) {
  LOAD_REGS();
L_77fe07: /* 77fe07: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 77fe0a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 77fe0f: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 77fe12: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 77fe13: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 77fe16: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77fe1bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_77fe1b(); return;
}

void f_77fe1b(void) {
  LOAD_REGS();
L_77fe1b: /* 77fe1b: push 0xa09080 */
  { uint32_t v = 0xa09080u; esp -= 4; W32(esp, v); }
/* 77fe20: push 0xac5f5c */
  { uint32_t v = 0xac5f5cu; esp -= 4; W32(esp, v); }
/* 77fe25: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x77fe2bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 77fe2b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 77fe2e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77fe30: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77fe32: call 0x99caf8 */
  esp -= 4; W32(esp, 0x77fe37u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_77fe37: guest_badaddr(0x77fe37); return;
}

void f_77fe70(void) {
  LOAD_REGS();
L_77fe70: /* 77fe70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 77fe71: mov ebp, esp */
  ebp = esp;
/* 77fe73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 77fe75: push 0x9cc850 */
  { uint32_t v = 0x9cc850u; esp -= 4; W32(esp, v); }
/* 77fe7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 77fe80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77fe81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 77fe88: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 77fe8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 77fe8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77fe8d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 77fe90: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77fe93: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77fe96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77fe97: xor edi, edi */
  edi = 0;
/* 77fe99: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77fe9a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77fe9d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 77fea0: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 77fea3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77fea4: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77fea9: mov ebx, ecx */
  ebx = ecx;
/* 77feab: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77feae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77feaf: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 77feb2: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77feb5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77feb5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77feb8: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77febb: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77febe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77febf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77fec2: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 77fec5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77fec6: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77fecb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77fecc: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77fecfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77fecf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77fed0: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 77fed3: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x77fed9u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 77fed9: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 77fedc: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 77fedf: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77fee2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77fee3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77fee6: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 77fee9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77feea: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 77feef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77fef0: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x77fef3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77fef3: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 77fef6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 77fef7: mov eax, edx */
  eax = edx;
/* 77fef9: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 77fefc: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77feff: jne 0x77ff16 */
  if (!zf) goto L_77ff16;
L_77ff01: /* 77ff01: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 77ff04: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 77ff05: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 77ff06: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 77ff09: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 77ff0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 77ff10: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x77ff16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_77ff16: /* 77ff16: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 77ff1b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77ff1d: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 77ff20: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 77ff23: je 0x77ff31 */
  if (zf) goto L_77ff31;
L_77ff25: /* 77ff25: cmp dword ptr [eax + 0x15228], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x15228u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77ff2b: je 0x78007f */
  if (zf) goto L_78007f;
L_77ff31: /* 77ff31: mov edi, dword ptr [ebx + 0xec] */
  edi = R32((uint32_t)(ebx + 0xecu));
/* 77ff37: xor esi, esi */
  esi = 0;
/* 77ff39: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ff3b: je 0x77ff52 */
  if (zf) goto L_77ff52;
L_77ff3d: /* 77ff3d: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 77ff42: mov ecx, edi */
  ecx = edi;
/* 77ff44: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x77ff4au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 77ff4a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 77ff4c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 77ff4e: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 77ff50: mov esi, eax */
  esi = eax;
L_77ff52: /* 77ff52: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 77ff54: mov ecx, ebx */
  ecx = ebx;
/* 77ff56: call dword ptr [eax + 0x13c] */
  { uint32_t t = R32((uint32_t)(eax + 0x13cu)); esp -= 4; W32(esp, 0x77ff5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77ff5c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ff5e: je 0x77ff7a */
  if (zf) goto L_77ff7a;
L_77ff60: /* 77ff60: cmp byte ptr [ebx + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77ff64: jne 0x77ff7a */
  if (!zf) goto L_77ff7a;
L_77ff66: /* 77ff66: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 77ff68: mov ecx, ebx */
  ecx = ebx;
/* 77ff6a: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x77ff70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 77ff70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ff71: call 0x925ce0 */
  esp -= 4; W32(esp, 0x77ff76u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 77ff76: mov esi, eax */
  esi = eax;
/* 77ff78: jmp 0x77fff7 */
  goto L_77fff7;
L_77ff7a: /* 77ff7a: cmp byte ptr [ebx + 0x50], 0xe */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x50u))); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 77ff7e: jne 0x77fff4 */
  if (!zf) goto L_77fff4;
L_77ff80: /* 77ff80: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ff82: je 0x77fff4 */
  if (zf) goto L_77fff4;
L_77ff84: /* 77ff84: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 77ff86: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 77ff89: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x77ff8fu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 77ff8f: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 77ff92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ff93: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 77ff96: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x77ff9cu); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 77ff9c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ff9e: je 0x77ffb6 */
  if (zf) goto L_77ffb6;
L_77ffa0: /* 77ffa0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 77ffa3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 77ffa4: mov ecx, esi */
  ecx = esi;
/* 77ffa6: call 0x6cceaa */
  esp -= 4; W32(esp, 0x77ffabu); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 77ffab: mov edx, dword ptr [esi + 0x2dc] */
  edx = R32((uint32_t)(esi + 0x2dcu));
/* 77ffb1: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 77ffb4: jmp 0x77ffd6 */
  goto L_77ffd6;
L_77ffb6: /* 77ffb6: mov eax, dword ptr [esi + 0x2f8] */
  eax = R32((uint32_t)(esi + 0x2f8u));
/* 77ffbc: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 77ffbf: je 0x77ffe3 */
  if (zf) goto L_77ffe3;
L_77ffc1: /* 77ffc1: cmp eax, dword ptr [esi + 0x2e0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 77ffc7: jge 0x77ffe3 */
  if ((sf == of)) goto L_77ffe3;
L_77ffc9: /* 77ffc9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 77ffcb: jl 0x77ffe3 */
  if ((sf != of)) goto L_77ffe3;
L_77ffcd: /* 77ffcd: mov ecx, dword ptr [esi + 0x2dc] */
  ecx = R32((uint32_t)(esi + 0x2dcu));
/* 77ffd3: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
L_77ffd6: /* 77ffd6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 77ffd8: je 0x77ffe3 */
  if (zf) goto L_77ffe3;
L_77ffda: /* 77ffda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 77ffdb: call 0x925ce0 */
  esp -= 4; W32(esp, 0x77ffe0u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 77ffe0: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_77ffe3: /* 77ffe3: mov dword ptr [esi + 0x2f8], 0xffffffff */
  W32((uint32_t)(esi + 0x2f8u), 0xffffffffu);
/* 77ffed: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
L_77fff4: /* 77fff4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_77fff7: /* 77fff7: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 77fffa: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 77fffd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 780000: mov edx, esp */
  edx = esp;
/* 780002: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 780004: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 780007: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 78000a: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 78000d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78000e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 780011: call 0x6c882d */
  esp -= 4; W32(esp, 0x780016u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 780016: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 780019: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 78001c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78001f: mov edx, esp */
  edx = esp;
/* 780021: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 780023: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 780026: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 780029: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 78002c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78002d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 780030: call 0x6c882d */
  esp -= 4; W32(esp, 0x780035u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 780035: fld dword ptr [0xa0895c] */
  { double v = F32((uint32_t)(0xa0895cu)); FPUSH(v); }
/* 78003b: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 78003e: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 780041: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 780044: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780046: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 780049: fld dword ptr [0xa0895c] */
  { double v = F32((uint32_t)(0xa0895cu)); FPUSH(v); }
/* 78004f: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 780052: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 780055: fld dword ptr [0xa0895c] */
  { double v = F32((uint32_t)(0xa0895cu)); FPUSH(v); }
/* 78005b: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 78005e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 780061: je 0x780092 */
  if (zf) goto L_780092;
L_780063: /* 780063: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780065: je 0x78007f */
  if (zf) goto L_78007f;
L_780067: /* 780067: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78006a: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 78006d: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 780070: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 780071: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 780072: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 780073: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 780074: call 0x90f480 */
  esp -= 4; W32(esp, 0x780079u); SPILL(); f_90f480(); if (g_unwind) return; RELOAD();
L_780079: /* 780079: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78007a: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x78007fu); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
L_78007f: /* 78007f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 780082: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 780083: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 780084: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78008b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78008c: mov esp, ebp */
  esp = ebp;
/* 78008e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78008f: ret 8 */
  esp += 12; SPILL(); return;
L_780092: /* 780092: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780094: je 0x78007f */
  if (zf) goto L_78007f;
L_780096: /* 780096: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 780099: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 78009c: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 78009f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7800a0: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7800a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7800a4: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7800a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7800a8: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7800ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7800ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7800ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7800ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7800af: call 0x90f4d0 */
  esp -= 4; W32(esp, 0x7800b4u); SPILL(); f_90f4d0(); if (g_unwind) return; RELOAD();
/* 7800b4: jmp 0x780079 */
  goto L_780079;
}

void f_780041(void) {
  LOAD_REGS();
L_780041: /* 780041: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 780044: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780046: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 780049: fld dword ptr [0xa0895c] */
  { double v = F32((uint32_t)(0xa0895cu)); FPUSH(v); }
/* 78004f: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 780052: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 780055: fld dword ptr [0xa0895c] */
  { double v = F32((uint32_t)(0xa0895cu)); FPUSH(v); }
/* 78005b: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 78005e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 780061: je 0x780092 */
  if (zf) goto L_780092;
L_780063: /* 780063: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780065: je 0x78007f */
  if (zf) goto L_78007f;
L_780067: /* 780067: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78006a: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 78006d: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 780070: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 780071: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 780072: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 780073: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 780074: call 0x90f480 */
  esp -= 4; W32(esp, 0x780079u); SPILL(); f_90f480(); if (g_unwind) return; RELOAD();
L_780079: /* 780079: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78007a: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x78007fu); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
L_78007f: /* 78007f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 780082: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 780083: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 780084: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78008b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78008c: mov esp, ebp */
  esp = ebp;
/* 78008e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78008f: ret 8 */
  esp += 12; SPILL(); return;
L_780092: /* 780092: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780094: je 0x78007f */
  if (zf) goto L_78007f;
L_780096: /* 780096: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 780099: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 78009c: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 78009f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7800a0: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7800a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7800a4: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7800a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7800a8: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7800ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7800ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7800ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7800ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7800af: call 0x90f4d0 */
  esp -= 4; W32(esp, 0x7800b4u); SPILL(); f_90f4d0(); if (g_unwind) return; RELOAD();
/* 7800b4: jmp 0x780079 */
  goto L_780079;
}

void f_780061(void) {
  LOAD_REGS();
L_780061: /* 780061: je 0x780092 */
  if (zf) goto L_780092;
L_780063: /* 780063: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780065: je 0x78007f */
  if (zf) goto L_78007f;
L_780067: /* 780067: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78006a: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 78006d: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 780070: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 780071: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 780072: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 780073: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 780074: call 0x90f480 */
  esp -= 4; W32(esp, 0x780079u); SPILL(); f_90f480(); if (g_unwind) return; RELOAD();
L_780079: /* 780079: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78007a: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x78007fu); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
L_78007f: /* 78007f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 780082: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 780083: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 780084: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78008b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78008c: mov esp, ebp */
  esp = ebp;
/* 78008e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78008f: ret 8 */
  esp += 12; SPILL(); return;
L_780092: /* 780092: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780094: je 0x78007f */
  if (zf) goto L_78007f;
L_780096: /* 780096: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 780099: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 78009c: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 78009f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7800a0: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7800a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7800a4: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7800a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7800a8: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7800ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7800ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7800ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7800ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7800af: call 0x90f4d0 */
  esp -= 4; W32(esp, 0x7800b4u); SPILL(); f_90f4d0(); if (g_unwind) return; RELOAD();
/* 7800b4: jmp 0x780079 */
  goto L_780079;
}

void f_780065(void) {
  LOAD_REGS();
L_780065: /* 780065: je 0x78007f */
  if (zf) goto L_78007f;
L_780067: /* 780067: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78006a: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 78006d: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 780070: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 780071: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 780072: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 780073: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 780074: call 0x90f480 */
  esp -= 4; W32(esp, 0x780079u); SPILL(); f_90f480(); if (g_unwind) return; RELOAD();
/* 780079: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78007a: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x78007fu); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
L_78007f: /* 78007f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 780082: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 780083: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 780084: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78008b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78008c: mov esp, ebp */
  esp = ebp;
/* 78008e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78008f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7800b6(void) {
  LOAD_REGS();
L_7800b6: /* 7800b6: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7800b9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7800be: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7800c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7800c2: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7800c5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7800cau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7800ca(); return;
}

void f_7800ca(void) {
  LOAD_REGS();
L_7800ca: /* 7800ca: push 0xa090cc */
  { uint32_t v = 0xa090ccu; esp -= 4; W32(esp, v); }
/* 7800cf: push 0xac5f7c */
  { uint32_t v = 0xac5f7cu; esp -= 4; W32(esp, v); }
/* 7800d4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7800dau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7800da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7800dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7800df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7800e1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7800e6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7800e6: guest_badaddr(0x7800e6); return;
}

void f_780190(void) {
  LOAD_REGS();
L_780190: /* 780190: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 780191: mov ebp, esp */
  ebp = esp;
/* 780193: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 780195: push 0x9cc860 */
  { uint32_t v = 0x9cc860u; esp -= 4; W32(esp, v); }
/* 78019a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7801a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7801a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7801a8: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7801ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7801ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7801ad: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7801b0: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7801b3: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7801b6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7801b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7801b8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7801bb: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7801be: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 7801c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7801c2: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7801c7: mov edi, ecx */
  edi = ecx;
/* 7801c9: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7801cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7801cd: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7801d4: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7801d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7801d7: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7801da: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7801dd: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 7801e4: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 7801eb: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 7801f2: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7801f5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7801f6: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7801f9: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 7801fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7801fd: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 780202: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 780203: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x780206u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 780206: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 780209: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 78020c: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 780213: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 780216: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 780217: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 78021a: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 78021d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78021e: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 780223: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 780224: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x780227u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 780227: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 78022a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 78022b: mov eax, edx */
  eax = edx;
/* 78022d: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 780230: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 780233: jne 0x78024b */
  if (!zf) goto L_78024b;
L_780235: /* 780235: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 780238: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 780239: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78023b: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 78023e: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 780244: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 780245: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x78024bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_78024b: /* 78024b: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 780251: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780253: je 0x7802c9 */
  if (zf) goto L_7802c9;
L_780255: /* 780255: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 78025a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x780260u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 780260: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780262: je 0x7802c9 */
  if (zf) goto L_7802c9;
L_780264: /* 780264: mov esi, dword ptr [edi + 0xec] */
  esi = R32((uint32_t)(edi + 0xecu));
/* 78026a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78026c: je 0x78027f */
  if (zf) goto L_78027f;
L_78026e: /* 78026e: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 780273: mov ecx, esi */
  ecx = esi;
/* 780275: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x78027bu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 78027b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78027d: jne 0x780281 */
  if (!zf) goto L_780281;
L_78027f: /* 78027f: xor esi, esi */
  esi = 0;
L_780281: /* 780281: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 780284: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 780287: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78028a: mov eax, esp */
  eax = esp;
/* 78028c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78028e: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 780291: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 780294: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 780297: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 78029a: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 78029d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7802a0: mov edx, esp */
  edx = esp;
/* 7802a2: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 7802a4: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7802a7: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 7802aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7802ab: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 7802ae: call 0x6c3a08 */
  esp -= 4; W32(esp, 0x7802b3u); SPILL(); f_6c3a08(); if (g_unwind) return; RELOAD();
/* 7802b3: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7802b6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7802b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7802c0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7802c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7802c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7802c3: mov esp, ebp */
  esp = ebp;
/* 7802c5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7802c6: ret 8 */
  esp += 12; SPILL(); return;
L_7802c9: /* 7802c9: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7802cf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7802d1: push 0xac5f88 */
  { uint32_t v = 0xac5f88u; esp -= 4; W32(esp, v); }
/* 7802d6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7802d7: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7802ddu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7802dd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7802e0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7802e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7802e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7802e5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7802ec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7802ed: mov esp, ebp */
  esp = ebp;
/* 7802ef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7802f0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7802f3(void) {
  LOAD_REGS();
L_7802f3: /* 7802f3: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7802f6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7802fb: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7802fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7802ff: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 780302: call 0x99caf8 */
  esp -= 4; W32(esp, 0x780307u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_780307(); return;
}

void f_780307(void) {
  LOAD_REGS();
L_780307: /* 780307: push 0xa09108 */
  { uint32_t v = 0xa09108u; esp -= 4; W32(esp, v); }
/* 78030c: push 0xac5fe0 */
  { uint32_t v = 0xac5fe0u; esp -= 4; W32(esp, v); }
/* 780311: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x780317u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 780317: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78031a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78031c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78031e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x780323u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_780323: guest_badaddr(0x780323); return;
}

void f_7803a0(void) {
  LOAD_REGS();
L_7803a0: /* 7803a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7803a1: mov ebp, esp */
  ebp = esp;
/* 7803a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7803a5: push 0x9cc882 */
  { uint32_t v = 0x9cc882u; esp -= 4; W32(esp, v); }
/* 7803aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7803b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7803b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7803b8: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7803bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7803bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7803bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7803be: mov edi, ecx */
  edi = ecx;
/* 7803c0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7803c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7803c5: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7803c8: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 7803cb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7803d2: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x7803d8u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 7803d8: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7803db: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 7803de: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 7803e1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7803e4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7803e5: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 7803e8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7803eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7803ec: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7803f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7803f2: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x7803f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7803f5: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7803f8: call dword ptr [0xcfa31c] */
  esp -= 4; W32(esp, 0x7803feu); SPILL(); f_4e3adf(); if (g_unwind) return; /* Core!??0FInterpCurve@@QAE@XZ */ RELOAD();
/* 7803fe: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 780401: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 780404: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 780407: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 780408: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 78040b: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 78040e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78040f: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 780414: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 780415: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 780419: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x78041cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78041c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 78041f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 780422: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 780429: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 78042c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78042d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 780430: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 780433: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 780434: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 780439: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78043a: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x78043du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78043d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 780440: call dword ptr [0xcfa31c] */
  esp -= 4; W32(esp, 0x780446u); SPILL(); f_4e3adf(); if (g_unwind) return; /* Core!??0FInterpCurve@@QAE@XZ */ RELOAD();
/* 780446: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 780449: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 78044c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 78044f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 780450: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 780453: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 780456: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 780457: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 78045c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78045d: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 780461: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x780464u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 780464: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 780467: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 780468: mov eax, edx */
  eax = edx;
/* 78046a: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 78046d: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 780470: jne 0x780488 */
  if (!zf) goto L_780488;
L_780472: /* 780472: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 780475: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 780476: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 780478: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 78047b: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 780481: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 780482: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x780488u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_780488: /* 780488: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 78048e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780490: je 0x7805d5 */
  if (zf) goto L_7805d5;
L_780496: /* 780496: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 78049b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7804a1u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7804a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7804a3: je 0x7805d5 */
  if (zf) goto L_7805d5;
L_7804a9: /* 7804a9: mov esi, dword ptr [edi + 0xec] */
  esi = R32((uint32_t)(edi + 0xecu));
/* 7804af: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7804b1: je 0x7804c4 */
  if (zf) goto L_7804c4;
L_7804b3: /* 7804b3: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 7804b8: mov ecx, esi */
  ecx = esi;
/* 7804ba: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7804c0u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7804c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7804c2: jne 0x7804c6 */
  if (!zf) goto L_7804c6;
L_7804c4: /* 7804c4: xor esi, esi */
  esi = 0;
L_7804c6: /* 7804c6: mov eax, dword ptr [esi + 0x2f4] */
  eax = R32((uint32_t)(esi + 0x2f4u));
/* 7804cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7804ce: jne 0x7804df */
  if (!zf) goto L_7804df;
L_7804d0: /* 7804d0: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7804d5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7804d7: push 0xac6048 */
  { uint32_t v = 0xac6048u; esp -= 4; W32(esp, v); }
/* 7804dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7804dd: jmp 0x780536 */
  goto L_780536;
L_7804df: /* 7804df: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 7804e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7804e3: mov ecx, esi */
  ecx = esi;
/* 7804e5: call 0x6cceaa */
  esp -= 4; W32(esp, 0x7804eau); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 7804ea: mov edi, eax */
  edi = eax;
/* 7804ec: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7804ef: jne 0x780500 */
  if (!zf) goto L_780500;
L_7804f1: /* 7804f1: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7804f6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7804f8: push 0xac60b8 */
  { uint32_t v = 0xac60b8u; esp -= 4; W32(esp, v); }
/* 7804fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7804fe: jmp 0x780536 */
  goto L_780536;
L_780500: /* 780500: mov edx, dword ptr [esi + 0x2dc] */
  edx = R32((uint32_t)(esi + 0x2dcu));
/* 780506: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* 780509: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78050b: jne 0x78051c */
  if (!zf) goto L_78051c;
L_78050d: /* 78050d: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 780512: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 780514: push 0xac6118 */
  { uint32_t v = 0xac6118u; esp -= 4; W32(esp, v); }
/* 780519: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78051a: jmp 0x780536 */
  goto L_780536;
L_78051c: /* 78051c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78051d: call 0x925ce0 */
  esp -= 4; W32(esp, 0x780522u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 780522: mov ebx, eax */
  ebx = eax;
/* 780524: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780526: jne 0x78056c */
  if (!zf) goto L_78056c;
L_780528: /* 780528: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 78052e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 780530: push 0xac6188 */
  { uint32_t v = 0xac6188u; esp -= 4; W32(esp, v); }
/* 780535: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_780536: /* 780536: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78053cu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78053c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78053f: /* 78053f: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 780542: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 780546: call dword ptr [0xcfa318] */
  esp -= 4; W32(esp, 0x78054cu); SPILL(); f_4e3134(); if (g_unwind) return; /* Core!??1FInterpCurve@@QAE@XZ */ RELOAD();
/* 78054c: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 78054f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 780553: call dword ptr [0xcfa318] */
  esp -= 4; W32(esp, 0x780559u); SPILL(); f_4e3134(); if (g_unwind) return; /* Core!??1FInterpCurve@@QAE@XZ */ RELOAD();
/* 780559: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78055c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78055d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78055e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 780565: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 780566: mov esp, ebp */
  esp = ebp;
/* 780568: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 780569: ret 8 */
  esp += 12; SPILL(); return;
L_78056c: /* 78056c: add esi, 0x31c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x31cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 780572: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 780573: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 780575: call 0x6c5d03 */
  esp -= 4; W32(esp, 0x78057au); SPILL(); f_6c5d03(); if (g_unwind) return; RELOAD();
/* 78057a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78057d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78057f: je 0x780599 */
  if (zf) goto L_780599;
L_780581: /* 780581: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 780584: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 780587: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 780588: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 780589: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 78058c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78058d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78058e: mov ecx, eax */
  ecx = eax;
/* 780590: call 0x6cad6c */
  esp -= 4; W32(esp, 0x780595u); SPILL(); f_6cad6c(); if (g_unwind) return; RELOAD();
/* 780595: mov edi, eax */
  edi = eax;
/* 780597: jmp 0x78059b */
  goto L_78059b;
L_780599: /* 780599: xor edi, edi */
  edi = 0;
L_78059b: /* 78059b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78059e: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 7805a4: mov eax, dword ptr [eax + 0x115c] */
  eax = R32((uint32_t)(eax + 0x115cu));
/* 7805aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7805ab: call 0x90fc60 */
  esp -= 4; W32(esp, 0x7805b0u); SPILL(); f_90fc60(); if (g_unwind) return; RELOAD();
/* 7805b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7805b2: mov esi, eax */
  esi = eax;
/* 7805b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7805b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7805b6: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x7805bbu); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 7805bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7805bc: call 0x90c130 */
  esp -= 4; W32(esp, 0x7805c1u); SPILL(); f_90c130(); if (g_unwind) return; RELOAD();
/* 7805c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7805c2: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x7805c7u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 7805c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7805c8: call 0x90bc20 */
  esp -= 4; W32(esp, 0x7805cdu); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
/* 7805cd: mov dword ptr [edi + 0x24], esi */
  W32((uint32_t)(edi + 0x24u), esi);
/* 7805d0: jmp 0x78053f */
  goto L_78053f;
L_7805d5: /* 7805d5: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7805db: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7805dd: push 0xac5fe8 */
  { uint32_t v = 0xac5fe8u; esp -= 4; W32(esp, v); }
/* 7805e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7805e3: jmp 0x780536 */
  goto L_780536;
}

void f_7805e8(void) {
  LOAD_REGS();
L_7805e8: /* 7805e8: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7805eb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7805f0: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 7805f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7805f4: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 7805f7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7805fcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7805fc(); return;
}

void f_7805fc(void) {
  LOAD_REGS();
L_7805fc: /* 7805fc: push 0xa09144 */
  { uint32_t v = 0xa09144u; esp -= 4; W32(esp, v); }
/* 780601: push 0xac61f0 */
  { uint32_t v = 0xac61f0u; esp -= 4; W32(esp, v); }
/* 780606: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78060cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78060c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78060f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 780611: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 780613: call 0x99caf8 */
  esp -= 4; W32(esp, 0x780618u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_780618: guest_badaddr(0x780618); return;
}

void f_7806c0(void) {
  LOAD_REGS();
L_7806c0: /* 7806c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7806c1: mov ebp, esp */
  ebp = esp;
/* 7806c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7806c5: push 0x9cc8a0 */
  { uint32_t v = 0x9cc8a0u; esp -= 4; W32(esp, v); }
/* 7806ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7806d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7806d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7806d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7806db: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7806de: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7806e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7806e2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7806e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7806e4: mov esi, ecx */
  esi = ecx;
/* 7806e6: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7806e9: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7806ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7806ed: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7806f0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7806f7: jne 0x78070e */
  if (!zf) goto L_78070e;
L_7806f9: /* 7806f9: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7806fc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7806fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7806ff: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 780702: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 780703: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 780708: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x78070eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_78070e: /* 78070e: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 780711: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 780717: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 78071d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78071f: je 0x7807f0 */
  if (zf) goto L_7807f0;
L_780725: /* 780725: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 78072a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x780730u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 780730: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780732: je 0x7807f0 */
  if (zf) goto L_7807f0;
L_780738: /* 780738: mov edi, dword ptr [esi + 0xec] */
  edi = R32((uint32_t)(esi + 0xecu));
/* 78073e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780740: je 0x780753 */
  if (zf) goto L_780753;
L_780742: /* 780742: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 780747: mov ecx, edi */
  ecx = edi;
/* 780749: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x78074fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 78074f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780751: jne 0x780755 */
  if (!zf) goto L_780755;
L_780753: /* 780753: xor edi, edi */
  edi = 0;
L_780755: /* 780755: mov eax, dword ptr [edi + 0x2f4] */
  eax = R32((uint32_t)(edi + 0x2f4u));
/* 78075b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78075d: jne 0x780766 */
  if (!zf) goto L_780766;
L_78075f: /* 78075f: push 0xac63d0 */
  { uint32_t v = 0xac63d0u; esp -= 4; W32(esp, v); }
/* 780764: jmp 0x7807b3 */
  goto L_7807b3;
L_780766: /* 780766: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 78076d: xor esi, esi */
  esi = 0;
/* 78076f: nop  */
L_780770: /* 780770: cmp esi, dword ptr [edi + 0x2e0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 780776: jge 0x78079e */
  if ((sf == of)) goto L_78079e;
L_780778: /* 780778: mov eax, dword ptr [edi + 0x2dc] */
  eax = R32((uint32_t)(edi + 0x2dcu));
/* 78077e: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 780781: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780783: je 0x78079b */
  if (zf) goto L_78079b;
L_780785: /* 780785: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 780786: call 0x925ce0 */
  esp -= 4; W32(esp, 0x78078bu); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 78078b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78078d: je 0x78079b */
  if (zf) goto L_78079b;
L_78078f: /* 78078f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 780790: call 0x90e1a0 */
  esp -= 4; W32(esp, 0x780795u); SPILL(); f_90e1a0(); if (g_unwind) return; RELOAD();
/* 780795: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 780798: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
L_78079b: /* 78079b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78079c: jmp 0x780770 */
  goto L_780770;
L_78079e: /* 78079e: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 7807a1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 7807a7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7807a9: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7807ac: jp 0x7807d8 */
  if (pf) goto L_7807d8;
L_7807ae: /* 7807ae: push 0xac6438 */
  { uint32_t v = 0xac6438u; esp -= 4; W32(esp, v); }
L_7807b3: /* 7807b3: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 7807b9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7807bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7807bc: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7807c2u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7807c2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7807c5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7807c8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7807cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7807d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7807d1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7807d2: mov esp, ebp */
  esp = ebp;
/* 7807d4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7807d5: ret 8 */
  esp += 12; SPILL(); return;
L_7807d8: /* 7807d8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7807db: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7807de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7807df: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 7807e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7807e2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7807e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7807ea: mov esp, ebp */
  esp = ebp;
/* 7807ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7807ed: ret 8 */
  esp += 12; SPILL(); return;
L_7807f0: /* 7807f0: push 0xac6370 */
  { uint32_t v = 0xac6370u; esp -= 4; W32(esp, v); }
/* 7807f5: jmp 0x7807b3 */
  goto L_7807b3;
}

void f_7807f7(void) {
  LOAD_REGS();
L_7807f7: /* 7807f7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7807fa: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7807ff: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 780802: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 780803: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 780806: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78080bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_78080b(); return;
}

void f_78080b(void) {
  LOAD_REGS();
L_78080b: /* 78080b: push 0xa09184 */
  { uint32_t v = 0xa09184u; esp -= 4; W32(esp, v); }
/* 780810: push 0xac6498 */
  { uint32_t v = 0xac6498u; esp -= 4; W32(esp, v); }
/* 780815: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x78081bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 78081b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78081e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 780820: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 780822: call 0x99caf8 */
  esp -= 4; W32(esp, 0x780827u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_780827: guest_badaddr(0x780827); return;
}

void f_780890(void) {
  LOAD_REGS();
L_780890: /* 780890: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 780891: mov ebp, esp */
  ebp = esp;
/* 780893: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 780895: push 0x9cc8b0 */
  { uint32_t v = 0x9cc8b0u; esp -= 4; W32(esp, v); }
/* 78089a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7808a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7808a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7808a8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7808ab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7808ae: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 7808b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7808b2: xor ebx, ebx */
  ebx = 0;
/* 7808b4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7808b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7808b6: mov esi, ecx */
  esi = ecx;
/* 7808b8: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7808bb: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7808be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7808bf: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7808c2: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 7808c5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 7808c8: jne 0x7808de */
  if (!zf) goto L_7808de;
L_7808ca: /* 7808ca: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 7808cd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7808ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7808cf: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 7808d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7808d3: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 7808d8: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x7808deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7808de: /* 7808de: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 7808e4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7808e6: je 0x780a0e */
  if (zf) goto L_780a0e;
L_7808ec: /* 7808ec: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 7808f2: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7808f4: je 0x780a0e */
  if (zf) goto L_780a0e;
L_7808fa: /* 7808fa: mov eax, dword ptr [eax + 0x3fc] */
  eax = R32((uint32_t)(eax + 0x3fcu));
/* 780900: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 780902: je 0x780a0e */
  if (zf) goto L_780a0e;
L_780908: /* 780908: mov ecx, dword ptr [ecx + 0x1170] */
  ecx = R32((uint32_t)(ecx + 0x1170u));
/* 78090e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 780910: jl 0x780a0e */
  if ((sf != of)) goto L_780a0e;
L_780916: /* 780916: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 780918: jg 0x780932 */
  if ((!zf && sf == of)) goto L_780932;
L_78091a: /* 78091a: push 0x416 */
  { uint32_t v = 0x416u; esp -= 4; W32(esp, v); }
/* 78091f: push 0xac64b0 */
  { uint32_t v = 0xac64b0u; esp -= 4; W32(esp, v); }
/* 780924: push 0xac64bc */
  { uint32_t v = 0xac64bcu; esp -= 4; W32(esp, v); }
/* 780929: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78092fu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78092f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_780932: /* 780932: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 780935: jmp 0x780940 */
  goto L_780940;
L_780940: /* 780940: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 780946: cmp ebx, dword ptr [eax + 0x1170] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1170u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78094c: jge 0x7809dd */
  if ((sf == of)) goto L_7809dd;
L_780952: /* 780952: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 780955: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780957: jne 0x7809dd */
  if (!zf) goto L_7809dd;
L_78095d: /* 78095d: mov ecx, dword ptr [eax + 0x116c] */
  ecx = R32((uint32_t)(eax + 0x116cu));
/* 780963: mov edi, dword ptr [ecx + ebx*4] */
  edi = R32((uint32_t)(ecx + ebx*4));
/* 780966: mov eax, dword ptr [edi + 0x30c] */
  eax = R32((uint32_t)(edi + 0x30cu));
/* 78096c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78096e: jne 0x780988 */
  if (!zf) goto L_780988;
L_780970: /* 780970: push 0x41d */
  { uint32_t v = 0x41du; esp -= 4; W32(esp, v); }
/* 780975: push 0xac64d8 */
  { uint32_t v = 0xac64d8u; esp -= 4; W32(esp, v); }
/* 78097a: push 0xac64e4 */
  { uint32_t v = 0xac64e4u; esp -= 4; W32(esp, v); }
/* 78097f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x780985u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 780985: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_780988: /* 780988: mov esi, dword ptr [edi + 0x30c] */
  esi = R32((uint32_t)(edi + 0x30cu));
/* 78098e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780990: je 0x7809a3 */
  if (zf) goto L_7809a3;
L_780992: /* 780992: push 0xb1f868 */
  { uint32_t v = 0xb1f868u; esp -= 4; W32(esp, v); }
/* 780997: mov ecx, esi */
  ecx = esi;
/* 780999: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x78099fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 78099f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7809a1: jne 0x7809bd */
  if (!zf) goto L_7809bd;
L_7809a3: /* 7809a3: push 0x41f */
  { uint32_t v = 0x41fu; esp -= 4; W32(esp, v); }
/* 7809a8: push 0xac64f8 */
  { uint32_t v = 0xac64f8u; esp -= 4; W32(esp, v); }
/* 7809ad: push 0xac6504 */
  { uint32_t v = 0xac6504u; esp -= 4; W32(esp, v); }
/* 7809b2: xor esi, esi */
  esi = 0;
/* 7809b4: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7809bau); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7809ba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7809bd: /* 7809bd: test byte ptr [esi + 0xe0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xe0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7809c4: jne 0x7809d4 */
  if (!zf) goto L_7809d4;
L_7809c6: /* 7809c6: mov ecx, edi */
  ecx = edi;
/* 7809c8: call 0x6c3175 */
  esp -= 4; W32(esp, 0x7809cdu); SPILL(); f_6c3175(); if (g_unwind) return; RELOAD();
/* 7809cd: mov dword ptr [ebp + 8], 1 */
  W32((uint32_t)(ebp + 0x8u), 0x1u);
L_7809d4: /* 7809d4: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7809d7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7809d8: jmp 0x780940 */
  goto L_780940;
L_7809dd: /* 7809dd: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 7809e3: mov eax, dword ptr [edx + 0x1170] */
  eax = R32((uint32_t)(edx + 0x1170u));
/* 7809e9: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 7809ef: cmp eax, dword ptr [ecx + 0x3fc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3fcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7809f5: jl 0x780a0e */
  if ((sf != of)) goto L_780a0e;
L_7809f7: /* 7809f7: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7809fd: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7809ff: push 0xac6510 */
  { uint32_t v = 0xac6510u; esp -= 4; W32(esp, v); }
/* 780a04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 780a05: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x780a0bu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 780a0b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_780a0e: /* 780a0e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 780a11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 780a12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 780a13: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 780a1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 780a1b: mov esp, ebp */
  esp = ebp;
/* 780a1d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 780a1e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_780937(void) {
  LOAD_REGS();
L_780937: /* 780937: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 78093e: mov edi, edi */
  edi = edi;
L_780940: /* 780940: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 780946: cmp ebx, dword ptr [eax + 0x1170] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x1170u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78094c: jge 0x7809dd */
  if ((sf == of)) goto L_7809dd;
L_780952: /* 780952: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 780955: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780957: jne 0x7809dd */
  if (!zf) goto L_7809dd;
L_78095d: /* 78095d: mov ecx, dword ptr [eax + 0x116c] */
  ecx = R32((uint32_t)(eax + 0x116cu));
/* 780963: mov edi, dword ptr [ecx + ebx*4] */
  edi = R32((uint32_t)(ecx + ebx*4));
/* 780966: mov eax, dword ptr [edi + 0x30c] */
  eax = R32((uint32_t)(edi + 0x30cu));
/* 78096c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78096e: jne 0x780988 */
  if (!zf) goto L_780988;
L_780970: /* 780970: push 0x41d */
  { uint32_t v = 0x41du; esp -= 4; W32(esp, v); }
/* 780975: push 0xac64d8 */
  { uint32_t v = 0xac64d8u; esp -= 4; W32(esp, v); }
/* 78097a: push 0xac64e4 */
  { uint32_t v = 0xac64e4u; esp -= 4; W32(esp, v); }
/* 78097f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x780985u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 780985: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_780988: /* 780988: mov esi, dword ptr [edi + 0x30c] */
  esi = R32((uint32_t)(edi + 0x30cu));
/* 78098e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780990: je 0x7809a3 */
  if (zf) goto L_7809a3;
L_780992: /* 780992: push 0xb1f868 */
  { uint32_t v = 0xb1f868u; esp -= 4; W32(esp, v); }
/* 780997: mov ecx, esi */
  ecx = esi;
/* 780999: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x78099fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 78099f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7809a1: jne 0x7809bd */
  if (!zf) goto L_7809bd;
L_7809a3: /* 7809a3: push 0x41f */
  { uint32_t v = 0x41fu; esp -= 4; W32(esp, v); }
/* 7809a8: push 0xac64f8 */
  { uint32_t v = 0xac64f8u; esp -= 4; W32(esp, v); }
/* 7809ad: push 0xac6504 */
  { uint32_t v = 0xac6504u; esp -= 4; W32(esp, v); }
/* 7809b2: xor esi, esi */
  esi = 0;
/* 7809b4: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x7809bau); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 7809ba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7809bd: /* 7809bd: test byte ptr [esi + 0xe0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xe0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7809c4: jne 0x7809d4 */
  if (!zf) goto L_7809d4;
L_7809c6: /* 7809c6: mov ecx, edi */
  ecx = edi;
/* 7809c8: call 0x6c3175 */
  esp -= 4; W32(esp, 0x7809cdu); SPILL(); f_6c3175(); if (g_unwind) return; RELOAD();
/* 7809cd: mov dword ptr [ebp + 8], 1 */
  W32((uint32_t)(ebp + 0x8u), 0x1u);
L_7809d4: /* 7809d4: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 7809d7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7809d8: jmp 0x780940 */
  goto L_780940;
L_7809dd: /* 7809dd: mov edx, dword ptr [esi + 0xb4] */
  edx = R32((uint32_t)(esi + 0xb4u));
/* 7809e3: mov eax, dword ptr [edx + 0x1170] */
  eax = R32((uint32_t)(edx + 0x1170u));
/* 7809e9: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 7809ef: cmp eax, dword ptr [ecx + 0x3fc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3fcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7809f5: jl 0x780a0e */
  if ((sf != of)) goto L_780a0e;
L_7809f7: /* 7809f7: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7809fd: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7809ff: push 0xac6510 */
  { uint32_t v = 0xac6510u; esp -= 4; W32(esp, v); }
/* 780a04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 780a05: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x780a0bu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 780a0b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_780a0e: /* 780a0e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 780a11: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 780a12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 780a13: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 780a1a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 780a1b: mov esp, ebp */
  esp = ebp;
/* 780a1d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 780a1e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_780a21(void) {
  LOAD_REGS();
L_780a21: /* 780a21: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 780a24: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 780a29: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 780a2c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 780a2d: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 780a30: call 0x99caf8 */
  esp -= 4; W32(esp, 0x780a35u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_780a35(); return;
}

void f_780a35(void) {
  LOAD_REGS();
L_780a35: /* 780a35: push 0xa091c0 */
  { uint32_t v = 0xa091c0u; esp -= 4; W32(esp, v); }
/* 780a3a: push 0xac6574 */
  { uint32_t v = 0xac6574u; esp -= 4; W32(esp, v); }
/* 780a3f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x780a45u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 780a45: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 780a48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 780a4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 780a4c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x780a51u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_780a51: guest_badaddr(0x780a51); return;
}

void f_780ae0(void) {
  LOAD_REGS();
L_780ae0: /* 780ae0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 780ae1: mov ebp, esp */
  ebp = esp;
/* 780ae3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 780ae5: push 0x9cc8c0 */
  { uint32_t v = 0x9cc8c0u; esp -= 4; W32(esp, v); }
/* 780aea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 780af0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 780af1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 780af8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 780afb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 780afc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 780afd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 780b00: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 780b03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 780b04: xor edi, edi */
  edi = 0;
/* 780b06: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 780b09: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 780b0c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 780b0d: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 780b10: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 780b13: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 780b16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 780b17: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 780b1c: mov ebx, ecx */
  ebx = ecx;
/* 780b1e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 780b21: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 780b22: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 780b25: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x780b28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 780b28: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 780b2b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 780b2e: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 780b31: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 780b34: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 780b35: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 780b38: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 780b3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 780b3c: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 780b41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 780b42: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x780b45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 780b45: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 780b48: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 780b49: mov eax, edx */
  eax = edx;
/* 780b4b: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 780b4e: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 780b51: jne 0x780b68 */
  if (!zf) goto L_780b68;
L_780b53: /* 780b53: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 780b56: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 780b57: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 780b58: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 780b5b: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 780b61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 780b62: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x780b68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_780b68: /* 780b68: mov esi, dword ptr [ebx + 0x30c] */
  esi = R32((uint32_t)(ebx + 0x30cu));
/* 780b6e: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 780b70: je 0x780bbe */
  if (zf) goto L_780bbe;
L_780b72: /* 780b72: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 780b77: mov ecx, esi */
  ecx = esi;
/* 780b79: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x780b7fu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 780b7f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 780b81: je 0x780bbe */
  if (zf) goto L_780bbe;
L_780b83: /* 780b83: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 780b86: mov ebx, dword ptr [esi + 0x90] */
  ebx = R32((uint32_t)(esi + 0x90u));
/* 780b8c: lea ecx, [eax*8] */
  ecx = (uint32_t)(eax*8);
/* 780b93: xor ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 780b95: and ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 780b98: mov edx, ebx */
  edx = ebx;
/* 780b9a: xor edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 780b9c: mov dword ptr [esi + 0x90], edx */
  W32((uint32_t)(esi + 0x90u), edx);
/* 780ba2: mov eax, edx */
  eax = edx;
/* 780ba4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 780ba7: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 780baa: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 780bac: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 780baf: xor edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 780bb1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 780bb3: mov ecx, esi */
  ecx = esi;
/* 780bb5: mov dword ptr [esi + 0x90], edx */
  W32((uint32_t)(esi + 0x90u), edx);
/* 780bbb: call dword ptr [eax + 0x44] */
  { uint32_t t = R32((uint32_t)(eax + 0x44u)); esp -= 4; W32(esp, 0x780bbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_780bbe: /* 780bbe: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 780bc1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 780bc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 780bc3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 780bca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 780bcb: mov esp, ebp */
  esp = ebp;
/* 780bcd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 780bce: ret 8 */
  esp += 12; SPILL(); return;
}

void f_780bd1(void) {
  LOAD_REGS();
L_780bd1: /* 780bd1: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 780bd4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 780bd9: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 780bdc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 780bdd: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 780be0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x780be5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_780be5(); return;
}

void f_780be5(void) {
  LOAD_REGS();
L_780be5: /* 780be5: push 0xa09214 */
  { uint32_t v = 0xa09214u; esp -= 4; W32(esp, v); }
/* 780bea: push 0xac658c */
  { uint32_t v = 0xac658cu; esp -= 4; W32(esp, v); }
/* 780bef: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x780bf5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 780bf5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 780bf8: xor edi, edi */
  edi = 0;
/* 780bfa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 780bfb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 780bfc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x780c01u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_780c01: guest_badaddr(0x780c01); return;
}

void f_780c60(void) {
  LOAD_REGS();
L_780c60: /* 780c60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 780c61: mov ebp, esp */
  ebp = esp;
/* 780c63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 780c65: push 0x9cc8d0 */
  { uint32_t v = 0x9cc8d0u; esp -= 4; W32(esp, v); }
/* 780c6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 780c70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 780c71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 780c78: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 780c7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 780c7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 780c7d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 780c80: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 780c83: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 780c8a: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 780c8d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 780c8e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 780c8f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 780c92: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 780c95: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 780c98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 780c99: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 780c9e: mov edi, ecx */
  edi = ecx;
/* 780ca0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 780ca3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 780ca4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 780cab: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x780caeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 780cae: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 780cb1: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 780cb4: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 780cbb: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 780cbe: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 780cbf: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 780cc2: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 780cc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 780cc6: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 780ccb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 780ccc: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x780ccfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 780ccf: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 780cd2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 780cd3: mov eax, edx */
  eax = edx;
/* 780cd5: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 780cd8: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 780cdb: jne 0x780cf3 */
  if (!zf) goto L_780cf3;
L_780cdd: /* 780cdd: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 780ce0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 780ce1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 780ce3: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 780ce6: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 780cec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 780ced: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x780cf3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_780cf3: /* 780cf3: mov esi, dword ptr [edi + 0x30c] */
  esi = R32((uint32_t)(edi + 0x30cu));
/* 780cf9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780cfb: je 0x780d27 */
  if (zf) goto L_780d27;
L_780cfd: /* 780cfd: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 780d02: mov ecx, esi */
  ecx = esi;
/* 780d04: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x780d0au); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 780d0a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780d0c: je 0x780d27 */
  if (zf) goto L_780d27;
L_780d0e: /* 780d0e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 780d11: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 780d13: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* 780d19: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 780d1c: mov dword ptr [esi + 0x98], ecx */
  W32((uint32_t)(esi + 0x98u), ecx);
/* 780d22: mov ecx, esi */
  ecx = esi;
/* 780d24: call dword ptr [edx + 0x44] */
  { uint32_t t = R32((uint32_t)(edx + 0x44u)); esp -= 4; W32(esp, 0x780d27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_780d27: /* 780d27: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 780d2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 780d2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 780d2c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 780d33: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 780d34: mov esp, ebp */
  esp = ebp;
/* 780d36: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 780d37: ret 8 */
  esp += 12; SPILL(); return;
}

void f_780d3a(void) {
  LOAD_REGS();
L_780d3a: /* 780d3a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 780d3d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 780d42: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 780d45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 780d46: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 780d49: call 0x99caf8 */
  esp -= 4; W32(esp, 0x780d4eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_780d4e(); return;
}

void f_780d4e(void) {
  LOAD_REGS();
L_780d4e: /* 780d4e: push 0xa09258 */
  { uint32_t v = 0xa09258u; esp -= 4; W32(esp, v); }
/* 780d53: push 0xac6594 */
  { uint32_t v = 0xac6594u; esp -= 4; W32(esp, v); }
/* 780d58: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x780d5eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 780d5e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 780d61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 780d63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 780d65: call 0x99caf8 */
  esp -= 4; W32(esp, 0x780d6au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_780d6a: guest_badaddr(0x780d6a); return;
}

void f_780dc0(void) {
  LOAD_REGS();
L_780dc0: /* 780dc0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 780dc1: mov ebp, esp */
  ebp = esp;
/* 780dc3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 780dc5: push 0x9cc8e0 */
  { uint32_t v = 0x9cc8e0u; esp -= 4; W32(esp, v); }
/* 780dca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 780dd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 780dd1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 780dd8: sub esp, 0xcc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 780dde: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 780ddf: mov ebx, ecx */
  ebx = ecx;
/* 780de1: cmp byte ptr [ebx + 0x50], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x50u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 780de5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 780de6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 780de7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 780dea: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 780ded: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 780df4: jne 0x780e19 */
  if (!zf) goto L_780e19;
L_780df6: /* 780df6: mov edi, dword ptr [ebx + 0x30c] */
  edi = R32((uint32_t)(ebx + 0x30cu));
/* 780dfc: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780dfe: mov dword ptr [ebp - 0x54], edi */
  W32((uint32_t)(ebp + 0xffffffacu), edi);
/* 780e01: jne 0x780e2a */
  if (!zf) goto L_780e2a;
L_780e03: /* 780e03: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 780e08: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 780e0a: push 0xac5dd8 */
  { uint32_t v = 0xac5dd8u; esp -= 4; W32(esp, v); }
/* 780e0f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 780e10: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x780e16u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 780e16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_780e19: /* 780e19: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 780e1c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 780e1d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 780e1e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 780e25: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 780e26: mov esp, ebp */
  esp = ebp;
/* 780e28: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 780e29: ret  */
  esp += 4; SPILL(); return;
L_780e2a: /* 780e2a: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 780e2f: mov ecx, edi */
  ecx = edi;
/* 780e31: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x780e37u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 780e37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780e39: je 0x780e19 */
  if (zf) goto L_780e19;
L_780e3b: /* 780e3b: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 780e3d: mov ecx, ebx */
  ecx = ebx;
/* 780e3f: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x780e45u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 780e45: mov esi, eax */
  esi = eax;
/* 780e47: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 780e49: jne 0x780e60 */
  if (!zf) goto L_780e60;
L_780e4b: /* 780e4b: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 780e4d: push 0xac5e2c */
  { uint32_t v = 0xac5e2cu; esp -= 4; W32(esp, v); }
/* 780e52: push 0xac5e38 */
  { uint32_t v = 0xac5e38u; esp -= 4; W32(esp, v); }
/* 780e57: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x780e5du); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 780e5d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_780e60: /* 780e60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 780e61: call 0x925ce0 */
  esp -= 4; W32(esp, 0x780e66u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 780e66: xor ecx, ecx */
  ecx = 0;
/* 780e68: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 780e6a: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 780e6d: je 0x780e19 */
  if (zf) goto L_780e19;
L_780e6f: /* 780e6f: xor eax, eax */
  eax = 0;
L_780e71: /* 780e71: cmp eax, dword ptr [edi + 0xa4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xa4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 780e77: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 780e7a: jge 0x780e19 */
  if ((sf == of)) goto L_780e19;
L_780e7c: /* 780e7c: mov edx, dword ptr [edi + 0xa0] */
  edx = R32((uint32_t)(edi + 0xa0u));
/* 780e82: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* 780e85: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 780e87: je 0x781255 */
  if (zf) goto L_781255;
L_780e8d: /* 780e8d: fld dword ptr [esi + 0x34c] */
  { double v = F32((uint32_t)(esi + 0x34cu)); FPUSH(v); }
/* 780e93: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 780e99: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 780e9b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 780e9d: fmul dword ptr [esi + 0x348] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x348u)));
/* 780ea3: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 780ea6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 780ea9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 780eac: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 780eaf: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 780eb2: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 780eb5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 780eb7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 780eba: fmul dword ptr [esi + 0x344] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x344u)));
/* 780ec0: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 780ec7: mov edi, dword ptr [ebp - 0x74] */
  edi = R32((uint32_t)(ebp + 0xffffff8cu));
/* 780eca: mov dword ptr [ebp - 0x70], 0 */
  W32((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 780ed1: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 780ed4: mov dword ptr [ebp - 0x6c], 0 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x0u);
/* 780edb: mov dword ptr [ebp - 0xa4], ecx */
  W32((uint32_t)(ebp + 0xffffff5cu), ecx);
/* 780ee1: fmul dword ptr [esi + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x340u)));
/* 780ee7: mov dword ptr [ebp - 0xa0], ecx */
  W32((uint32_t)(ebp + 0xffffff60u), ecx);
/* 780eed: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 780ef3: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 780ef6: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 780efc: mov ecx, dword ptr [ebx + 0xb4] */
  ecx = R32((uint32_t)(ebx + 0xb4u));
/* 780f02: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 780f05: mov dword ptr [ebp - 0x9c], 0 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x0u);
/* 780f0f: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 780f12: mov dword ptr [ebp - 0x98], 0 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x0u);
/* 780f1c: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 780f1f: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* 780f29: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 780f2c: mov dword ptr [ebp - 0x90], 0 */
  W32((uint32_t)(ebp + 0xffffff70u), 0x0u);
/* 780f36: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 780f39: mov dword ptr [ebp - 0x8c], 0 */
  W32((uint32_t)(ebp + 0xffffff74u), 0x0u);
/* 780f43: fadd dword ptr [ebp - 0xd8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff28u)));
/* 780f49: mov dword ptr [ebp - 0x88], 0 */
  W32((uint32_t)(ebp + 0xffffff78u), 0x0u);
/* 780f53: mov dword ptr [ebp - 0x80], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x3f800000u);
/* 780f5a: mov dword ptr [ebp - 0x7c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff84u), 0xffffffffu);
/* 780f61: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 780f64: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 780f67: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 780f6a: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 780f6d: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 780f70: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 780f73: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 780f76: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 780f79: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 780f7c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 780f7e: mov edx, esp */
  edx = esp;
/* 780f80: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 780f82: mov edi, dword ptr [ebp - 0x70] */
  edi = R32((uint32_t)(ebp + 0xffffff90u));
/* 780f85: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 780f88: mov edi, dword ptr [ebp - 0x6c] */
  edi = R32((uint32_t)(ebp + 0xffffff94u));
/* 780f8b: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 780f8e: push 0x86 */
  { uint32_t v = 0x86u; esp -= 4; W32(esp, v); }
/* 780f93: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 780f96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 780f97: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 780f9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 780f9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 780f9c: lea edx, [ebp - 0xa4] */
  edx = (uint32_t)(ebp + 0xffffff5cu);
/* 780fa2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 780fa3: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x780fa9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 780fa9: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 780fae: mov ecx, dword ptr [eax + 0x15220] */
  ecx = R32((uint32_t)(eax + 0x15220u));
/* 780fb4: test ch, 0x10 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 780fb7: je 0x7810b5 */
  if (zf) goto L_7810b5;
L_780fbd: /* 780fbd: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 780fc0: mov ecx, dword ptr [esi + 0x34c] */
  ecx = R32((uint32_t)(esi + 0x34cu));
/* 780fc6: fmul dword ptr [esi + 0x348] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x348u)));
/* 780fcc: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 780fcf: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 780fd2: mov byte ptr [ebp - 0x1c], 0xff */
  W8((uint32_t)(ebp + 0xffffffe4u), 0xffu);
/* 780fd6: fmul dword ptr [esi + 0x344] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x344u)));
/* 780fdc: mov byte ptr [ebp - 0x1b], 0 */
  W8((uint32_t)(ebp + 0xffffffe5u), 0x0u);
/* 780fe0: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 780fe3: mov byte ptr [ebp - 0x1a], 0 */
  W8((uint32_t)(ebp + 0xffffffe6u), 0x0u);
/* 780fe7: fmul dword ptr [esi + 0x340] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x340u)));
/* 780fed: mov byte ptr [ebp - 0x19], 0xff */
  W8((uint32_t)(ebp + 0xffffffe7u), 0xffu);
/* 780ff1: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 780ff4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 780ff5: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
/* 780ffb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 780ffe: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 781000: mov eax, esp */
  eax = esp;
/* 781002: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 781005: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 781008: mov edx, esp */
  edx = esp;
/* 78100a: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 78100d: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 781010: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 781013: fld dword ptr [ebp - 0xcc] */
  { double v = F32((uint32_t)(ebp + 0xffffff34u)); FPUSH(v); }
/* 781019: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 78101c: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 781022: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 781025: fadd dword ptr [ebp - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffecu)));
/* 781028: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 78102b: fadd dword ptr [ebp - 0x30] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78102e: fld dword ptr [ebp - 0xc0] */
  { double v = F32((uint32_t)(ebp + 0xffffff40u)); FPUSH(v); }
/* 781034: fadd dword ptr [ebp - 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 781037: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 78103a: mov edi, dword ptr [ebp - 0x50] */
  edi = R32((uint32_t)(ebp + 0xffffffb0u));
/* 78103d: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 78103f: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 781042: mov ebx, dword ptr [ebp - 0x4c] */
  ebx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 781045: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 781048: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 78104b: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 78104e: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 781051: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 781054: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 781057: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 781059: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78105c: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 78105f: mov ecx, dword ptr [0xcd8a5c] */
  ecx = R32((uint32_t)(0xcd8a5cu));
/* 781065: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 781068: call 0x6c5b37 */
  esp -= 4; W32(esp, 0x78106du); SPILL(); f_6c5b37(); if (g_unwind) return; RELOAD();
/* 78106d: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 781070: mov byte ptr [ebp - 0x18], 0 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 781074: mov byte ptr [ebp - 0x17], 0 */
  W8((uint32_t)(ebp + 0xffffffe9u), 0x0u);
/* 781078: mov byte ptr [ebp - 0x16], 0xff */
  W8((uint32_t)(ebp + 0xffffffeau), 0xffu);
/* 78107c: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 781080: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 781083: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 781084: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 781087: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78108a: mov edx, esp */
  edx = esp;
/* 78108c: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 78108e: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 781091: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 781094: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 781097: mov edx, dword ptr [ebp - 0x48] */
  edx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 78109a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78109d: mov ecx, esp */
  ecx = esp;
/* 78109f: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 7810a1: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 7810a4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7810a7: mov ecx, dword ptr [0xcd8a5c] */
  ecx = R32((uint32_t)(0xcd8a5cu));
/* 7810ad: call 0x6c5b37 */
  esp -= 4; W32(esp, 0x7810b2u); SPILL(); f_6c5b37(); if (g_unwind) return; RELOAD();
/* 7810b2: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
L_7810b5: /* 7810b5: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 7810b8: mov edi, dword ptr [esi + 0x358] */
  edi = R32((uint32_t)(esi + 0x358u));
/* 7810be: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 7810c4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7810c6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7810c9: jp 0x781263 */
  if (pf) goto L_781263;
L_7810cf: /* 7810cf: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 7810d5: fcomp qword ptr [0xa092e8] */
  fpu_com(ST0, F64((uint32_t)(0xa092e8u)));
  FPOP();
/* 7810db: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7810dd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7810e0: jne 0x781263 */
  if (!zf) goto L_781263;
L_7810e6: /* 7810e6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7810e8: jne 0x78113b */
  if (!zf) goto L_78113b;
L_7810ea: /* 7810ea: mov eax, dword ptr [ebx + 0xb4] */
  eax = R32((uint32_t)(ebx + 0xb4u));
/* 7810f0: mov eax, dword ptr [eax + 0x115c] */
  eax = R32((uint32_t)(eax + 0x115cu));
/* 7810f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7810f7: call 0x90fc60 */
  esp -= 4; W32(esp, 0x7810fcu); SPILL(); f_90fc60(); if (g_unwind) return; RELOAD();
/* 7810fc: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7810ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 781101: mov edi, eax */
  edi = eax;
/* 781103: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 781104: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 781105: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x78110au); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 78110a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78110b: call 0x90c130 */
  esp -= 4; W32(esp, 0x781110u); SPILL(); f_90c130(); if (g_unwind) return; RELOAD();
/* 781110: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 781111: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x781116u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 781116: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 781117: call 0x90bc20 */
  esp -= 4; W32(esp, 0x78111cu); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
/* 78111c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78111e: mov dword ptr [esi + 0x358], edi */
  W32((uint32_t)(esi + 0x358u), edi);
/* 781124: jne 0x78113b */
  if (!zf) goto L_78113b;
L_781126: /* 781126: push 0x56 */
  { uint32_t v = 0x56u; esp -= 4; W32(esp, v); }
/* 781128: push 0xac5e40 */
  { uint32_t v = 0xac5e40u; esp -= 4; W32(esp, v); }
/* 78112d: push 0xac5e4c */
  { uint32_t v = 0xac5e4cu; esp -= 4; W32(esp, v); }
/* 781132: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x781138u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 781138: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78113b: /* 78113b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78113c: call 0x90fe50 */
  esp -= 4; W32(esp, 0x781141u); SPILL(); f_90fe50(); if (g_unwind) return; RELOAD();
/* 781141: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 781143: jne 0x78114b */
  if (!zf) goto L_78114b;
L_781145: /* 781145: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 781146: call 0x90ff80 */
  esp -= 4; W32(esp, 0x78114bu); SPILL(); f_90ff80(); if (g_unwind) return; RELOAD();
L_78114b: /* 78114b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78114c: call 0x90fe50 */
  esp -= 4; W32(esp, 0x781151u); SPILL(); f_90fe50(); if (g_unwind) return; RELOAD();
/* 781151: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 781154: je 0x78116b */
  if (zf) goto L_78116b;
L_781156: /* 781156: push 0x5b */
  { uint32_t v = 0x5bu; esp -= 4; W32(esp, v); }
/* 781158: push 0xac5e50 */
  { uint32_t v = 0xac5e50u; esp -= 4; W32(esp, v); }
/* 78115d: push 0xac5e5c */
  { uint32_t v = 0xac5e5cu; esp -= 4; W32(esp, v); }
/* 781162: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x781168u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 781168: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78116b: /* 78116b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78116c: call 0x90fe20 */
  esp -= 4; W32(esp, 0x781171u); SPILL(); f_90fe20(); if (g_unwind) return; RELOAD();
/* 781171: mov ebx, eax */
  ebx = eax;
/* 781173: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 781174: call 0x90f9b0 */
  esp -= 4; W32(esp, 0x781179u); SPILL(); f_90f9b0(); if (g_unwind) return; RELOAD();
/* 781179: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 78117c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 78117f: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 781182: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 781185: mov edx, esp */
  edx = esp;
/* 781187: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 781189: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 78118c: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 78118f: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 781195: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 781196: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 781199: call 0x6c882d */
  esp -= 4; W32(esp, 0x78119eu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78119e: mov edx, dword ptr [ebp - 0xa8] */
  edx = R32((uint32_t)(ebp + 0xffffff58u));
/* 7811a4: mov eax, dword ptr [ebp - 0xac] */
  eax = R32((uint32_t)(ebp + 0xffffff54u));
/* 7811aa: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 7811b0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7811b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7811b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7811b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7811b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7811b7: call 0x90fae0 */
  esp -= 4; W32(esp, 0x7811bcu); SPILL(); f_90fae0(); if (g_unwind) return; RELOAD();
/* 7811bc: fld dword ptr [esi + 0x348] */
  { double v = F32((uint32_t)(esi + 0x348u)); FPUSH(v); }
/* 7811c2: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7811c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7811cb: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 7811cf: fld dword ptr [esi + 0x344] */
  { double v = F32((uint32_t)(esi + 0x344u)); FPUSH(v); }
/* 7811d5: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7811db: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7811df: fld dword ptr [esi + 0x340] */
  { double v = F32((uint32_t)(esi + 0x340u)); FPUSH(v); }
/* 7811e5: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 7811eb: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7811ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7811ef: call 0x90fb10 */
  esp -= 4; W32(esp, 0x7811f4u); SPILL(); f_90fb10(); if (g_unwind) return; RELOAD();
/* 7811f4: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7811fa: fsub dword ptr [ebp - 0x80] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff80u)));
/* 7811fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7811fe: fmul dword ptr [esi + 0x354] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x354u)));
/* 781204: fmul dword ptr [esi + 0x34c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34cu)));
/* 78120a: fmul dword ptr [0xa08960] */
  ST0 = ST0 * (F32((uint32_t)(0xa08960u)));
/* 781210: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 781213: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 781214: call 0x90fb40 */
  esp -= 4; W32(esp, 0x781219u); SPILL(); f_90fb40(); if (g_unwind) return; RELOAD();
/* 781219: fld dword ptr [esi + 0x350] */
  { double v = F32((uint32_t)(esi + 0x350u)); FPUSH(v); }
/* 78121f: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 781222: fabs  */
  ST0 = fabs(ST0);
/* 781224: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 781225: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 781228: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 781229: call 0x912090 */
  esp -= 4; W32(esp, 0x78122eu); SPILL(); f_912090(); if (g_unwind) return; RELOAD();
/* 78122e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 781230: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 781231: call 0x911f10 */
  esp -= 4; W32(esp, 0x781236u); SPILL(); f_911f10(); if (g_unwind) return; RELOAD();
/* 781236: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 781237: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x78123cu); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 78123c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78123d: call 0x90bd20 */
  esp -= 4; W32(esp, 0x781242u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 781242: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 781244: jne 0x781252 */
  if (!zf) goto L_781252;
L_781246: /* 781246: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 781247: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x78124cu); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 78124c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78124d: call 0x90bc20 */
  esp -= 4; W32(esp, 0x781252u); SPILL(); f_90bc20(); if (g_unwind) return; RELOAD();
L_781252: /* 781252: mov ebx, dword ptr [ebp - 0x2c] */
  ebx = R32((uint32_t)(ebp + 0xffffffd4u));
L_781255: /* 781255: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 781258: mov edi, dword ptr [ebp - 0x54] */
  edi = R32((uint32_t)(ebp + 0xffffffacu));
/* 78125b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78125c: xor ecx, ecx */
  ecx = 0;
/* 78125e: jmp 0x780e71 */
  goto L_780e71;
L_781263: /* 781263: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 781265: je 0x781255 */
  if (zf) goto L_781255;
L_781267: /* 781267: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 781268: call 0x90fe50 */
  esp -= 4; W32(esp, 0x78126du); SPILL(); f_90fe50(); if (g_unwind) return; RELOAD();
/* 78126d: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 781270: jl 0x781287 */
  if ((sf != of)) goto L_781287;
L_781272: /* 781272: push 0x7a */
  { uint32_t v = 0x7au; esp -= 4; W32(esp, v); }
/* 781274: push 0xac5e80 */
  { uint32_t v = 0xac5e80u; esp -= 4; W32(esp, v); }
/* 781279: push 0xac5e8c */
  { uint32_t v = 0xac5e8cu; esp -= 4; W32(esp, v); }
/* 78127e: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x781284u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 781284: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_781287: /* 781287: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 781288: call 0x90fe20 */
  esp -= 4; W32(esp, 0x78128du); SPILL(); f_90fe20(); if (g_unwind) return; RELOAD();
/* 78128d: cmp eax, dword ptr [0xa20e00] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xa20e00u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 781293: je 0x78129c */
  if (zf) goto L_78129c;
L_781295: /* 781295: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 781296: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 781297: call 0x90ffc0 */
  esp -= 4; W32(esp, 0x78129cu); SPILL(); f_90ffc0(); if (g_unwind) return; RELOAD();
L_78129c: /* 78129c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78129d: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x7812a2u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 7812a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7812a3: call 0x90bd20 */
  esp -= 4; W32(esp, 0x7812a8u); SPILL(); f_90bd20(); if (g_unwind) return; RELOAD();
/* 7812a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7812aa: je 0x781255 */
  if (zf) goto L_781255;
L_7812ac: /* 7812ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7812ad: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x7812b2u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 7812b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7812b3: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x7812b8u); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 7812b8: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 7812bb: mov edi, dword ptr [ebp - 0x54] */
  edi = R32((uint32_t)(ebp + 0xffffffacu));
/* 7812be: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7812bf: xor ecx, ecx */
  ecx = 0;
/* 7812c1: jmp 0x780e71 */
  goto L_780e71;
}

void f_7812c6(void) {
  LOAD_REGS();
L_7812c6: /* 7812c6: mov edx, dword ptr [ebp - 0xb4] */
  edx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 7812cc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7812d1: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 7812d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7812d5: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 7812d8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7812ddu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7812dd(); return;
}

void f_7812dd(void) {
  LOAD_REGS();
L_7812dd: /* 7812dd: push 0xa092ac */
  { uint32_t v = 0xa092acu; esp -= 4; W32(esp, v); }
/* 7812e2: push 0xac5eac */
  { uint32_t v = 0xac5eacu; esp -= 4; W32(esp, v); }
/* 7812e7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7812edu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7812ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7812f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7812f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7812f4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7812f9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7812f9: guest_badaddr(0x7812f9); return;
}

void f_781450(void) {
  LOAD_REGS();
L_781450: /* 781450: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 781451: mov ebp, esp */
  ebp = esp;
/* 781453: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 781455: push 0x9cc8f0 */
  { uint32_t v = 0x9cc8f0u; esp -= 4; W32(esp, v); }
/* 78145a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 781460: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 781461: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 781468: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78146b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78146c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78146d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78146e: xor edi, edi */
  edi = 0;
/* 781470: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 781473: mov esi, ecx */
  esi = ecx;
/* 781475: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 781478: call 0x6ca272 */
  esp -= 4; W32(esp, 0x78147du); SPILL(); f_6ca272(); if (g_unwind) return; RELOAD();
/* 78147d: mov ecx, edi */
  ecx = edi;
/* 78147f: lea eax, [esi + 0x390] */
  eax = (uint32_t)(esi + 0x390u);
/* 781485: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 781487: mov edx, edi */
  edx = edi;
/* 781489: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 78148c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 78148f: mov eax, dword ptr [esi + 0x388] */
  eax = R32((uint32_t)(esi + 0x388u));
/* 781495: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 781498: mov dword ptr [esi + 0x38c], edi */
  W32((uint32_t)(esi + 0x38cu), edi);
/* 78149e: mov dword ptr [esi + 0x3a0], edi */
  W32((uint32_t)(esi + 0x3a0u), edi);
/* 7814a4: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 7814a7: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7814aa: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 7814ad: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 7814b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7814b1: mov dword ptr [esi + 0x388], eax */
  W32((uint32_t)(esi + 0x388u), eax);
/* 7814b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7814b8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7814bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7814c0: mov esp, ebp */
  esp = ebp;
/* 7814c2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7814c3: ret  */
  esp += 4; SPILL(); return;
}

void f_7814c4(void) {
  LOAD_REGS();
L_7814c4: /* 7814c4: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7814c7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7814cc: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7814cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7814d0: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7814d3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7814d8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7814d8(); return;
}

void f_7814d8(void) {
  LOAD_REGS();
L_7814d8: /* 7814d8: push 0xa092f4 */
  { uint32_t v = 0xa092f4u; esp -= 4; W32(esp, v); }
/* 7814dd: push 0xac5eb4 */
  { uint32_t v = 0xac5eb4u; esp -= 4; W32(esp, v); }
/* 7814e2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7814e8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7814e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7814eb: xor edi, edi */
  edi = 0;
/* 7814ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7814ee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7814ef: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7814f4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7814f4: guest_badaddr(0x7814f4); return;
}

void f_781530(void) {
  LOAD_REGS();
L_781530: /* 781530: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 781531: mov ebp, esp */
  ebp = esp;
/* 781533: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 781535: push 0x9cc900 */
  { uint32_t v = 0x9cc900u; esp -= 4; W32(esp, v); }
/* 78153a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 781540: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 781541: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 781548: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78154b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78154c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78154d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78154e: xor ebx, ebx */
  ebx = 0;
/* 781550: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 781553: mov edi, ecx */
  edi = ecx;
/* 781555: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 781556: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 781559: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 78155c: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x781562u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 781562: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 781565: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 781568: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 78156b: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 78156e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78156f: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 781572: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 781575: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 781576: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 78157b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78157c: call dword ptr [eax + edx*4] */
  { uint32_t t = R32((uint32_t)(eax + edx*4)); esp -= 4; W32(esp, 0x78157fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78157f: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 781582: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 781583: mov eax, edx */
  eax = edx;
/* 781585: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 781588: cmp byte ptr [eax], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 78158b: jne 0x7815a2 */
  if (!zf) goto L_7815a2;
L_78158d: /* 78158d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 781590: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 781591: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 781592: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 781595: mov edx, dword ptr [0xcfa3c8] */
  edx = R32((uint32_t)(0xcfa3c8u));
/* 78159b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78159c: call dword ptr [edx + 0x108] */
  { uint32_t t = R32((uint32_t)(edx + 0x108u)); esp -= 4; W32(esp, 0x7815a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7815a2: /* 7815a2: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 7815a8: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7815aa: je 0x781695 */
  if (zf) goto L_781695;
L_7815b0: /* 7815b0: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 7815b5: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7815bbu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7815bb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7815bd: je 0x781695 */
  if (zf) goto L_781695;
L_7815c3: /* 7815c3: mov edi, dword ptr [edi + 0xec] */
  edi = R32((uint32_t)(edi + 0xecu));
/* 7815c9: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7815cb: je 0x7815e3 */
  if (zf) goto L_7815e3;
L_7815cd: /* 7815cd: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 7815d2: mov ecx, edi */
  ecx = edi;
/* 7815d4: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7815dau); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7815da: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7815dc: je 0x7815e3 */
  if (zf) goto L_7815e3;
L_7815de: /* 7815de: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 7815e1: jmp 0x7815e8 */
  goto L_7815e8;
L_7815e3: /* 7815e3: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 7815e6: mov edi, ebx */
  edi = ebx;
L_7815e8: /* 7815e8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7815eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7815ec: mov ecx, edi */
  ecx = edi;
/* 7815ee: call 0x6cceaa */
  esp -= 4; W32(esp, 0x7815f3u); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 7815f3: mov ecx, eax */
  ecx = eax;
/* 7815f5: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7815f8: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 7815fb: jne 0x781627 */
  if (!zf) goto L_781627;
L_7815fd: /* 7815fd: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 781603: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 781605: push 0xac6268 */
  { uint32_t v = 0xac6268u; esp -= 4; W32(esp, v); }
/* 78160a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_78160b: /* 78160b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x781611u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 781611: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_781614: /* 781614: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 781617: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 781618: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 781619: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 781620: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 781621: mov esp, ebp */
  esp = ebp;
/* 781623: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 781624: ret 8 */
  esp += 12; SPILL(); return;
L_781627: /* 781627: xor esi, esi */
  esi = 0;
/* 781629: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_781630: /* 781630: cmp esi, dword ptr [edi + 0x320] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x320u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 781636: jge 0x781614 */
  if ((sf == of)) goto L_781614;
L_781638: /* 781638: mov edx, dword ptr [edi + 0x31c] */
  edx = R32((uint32_t)(edi + 0x31cu));
/* 78163e: lea ebx, [edi + 0x31c] */
  ebx = (uint32_t)(edi + 0x31cu);
/* 781644: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 781647: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 78164a: cmp dword ptr [eax + 0x18], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78164d: jne 0x781692 */
  if (!zf) goto L_781692;
L_78164f: /* 78164f: mov edi, dword ptr [eax + 0x24] */
  edi = R32((uint32_t)(eax + 0x24u));
/* 781652: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 781654: jne 0x78166e */
  if (!zf) goto L_78166e;
L_781656: /* 781656: push 0x38f */
  { uint32_t v = 0x38fu; esp -= 4; W32(esp, v); }
/* 78165b: push 0xac62d0 */
  { uint32_t v = 0xac62d0u; esp -= 4; W32(esp, v); }
/* 781660: push 0xac62dc */
  { uint32_t v = 0xac62dcu; esp -= 4; W32(esp, v); }
/* 781665: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78166bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78166b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78166e: /* 78166e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78166f: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x781674u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 781674: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 781675: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x78167au); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 78167a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78167b: call 0x90fcd0 */
  esp -= 4; W32(esp, 0x781680u); SPILL(); f_90fcd0(); if (g_unwind) return; RELOAD();
/* 781680: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 781682: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 781683: mov ecx, ebx */
  ecx = ebx;
/* 781685: call 0x6c7847 */
  esp -= 4; W32(esp, 0x78168au); SPILL(); f_6c7847(); if (g_unwind) return; RELOAD();
/* 78168a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78168d: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 781690: jmp 0x781630 */
  goto L_781630;
L_781692: /* 781692: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 781693: jmp 0x781630 */
  goto L_781630;
L_781695: /* 781695: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 78169a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78169c: push 0xac61f8 */
  { uint32_t v = 0xac61f8u; esp -= 4; W32(esp, v); }
/* 7816a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7816a2: jmp 0x78160b */
  goto L_78160b;
}

void f_7816a7(void) {
  LOAD_REGS();
L_7816a7: /* 7816a7: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7816aa: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7816af: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 7816b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7816b3: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7816b6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7816bbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7816bb(); return;
}

void f_7816bb(void) {
  LOAD_REGS();
L_7816bb: /* 7816bb: push 0xa09330 */
  { uint32_t v = 0xa09330u; esp -= 4; W32(esp, v); }
/* 7816c0: push 0xac62e0 */
  { uint32_t v = 0xac62e0u; esp -= 4; W32(esp, v); }
/* 7816c5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7816cbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7816cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7816ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7816d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7816d2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7816d7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7816d7: guest_badaddr(0x7816d7); return;
}

void f_781750(void) {
  LOAD_REGS();
L_781750: /* 781750: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 781751: mov ebp, esp */
  ebp = esp;
/* 781753: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 781755: push 0x9cc919 */
  { uint32_t v = 0x9cc919u; esp -= 4; W32(esp, v); }
/* 78175a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 781760: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 781761: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 781768: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78176b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78176e: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 781771: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 781772: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 781773: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 781774: mov esi, ecx */
  esi = ecx;
/* 781776: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 781779: cmp byte ptr [edx], 0x42 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x42u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 78177c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78177d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 781780: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 781787: jne 0x78179e */
  if (!zf) goto L_78179e;
L_781789: /* 781789: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 78178c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 78178d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78178f: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 781792: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 781793: mov eax, dword ptr [0xcfa3c8] */
  eax = R32((uint32_t)(0xcfa3c8u));
/* 781798: call dword ptr [eax + 0x108] */
  { uint32_t t = R32((uint32_t)(eax + 0x108u)); esp -= 4; W32(esp, 0x78179eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_78179e: /* 78179e: mov ecx, dword ptr [esi + 0xec] */
  ecx = R32((uint32_t)(esi + 0xecu));
/* 7817a4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7817a6: je 0x78187b */
  if (zf) goto L_78187b;
L_7817ac: /* 7817ac: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 7817b1: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7817b7u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7817b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7817b9: je 0x78187b */
  if (zf) goto L_78187b;
L_7817bf: /* 7817bf: mov ebx, dword ptr [esi + 0xec] */
  ebx = R32((uint32_t)(esi + 0xecu));
/* 7817c5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7817c7: je 0x7817da */
  if (zf) goto L_7817da;
L_7817c9: /* 7817c9: push 0xce2cc8 */
  { uint32_t v = 0xce2cc8u; esp -= 4; W32(esp, v); }
/* 7817ce: mov ecx, ebx */
  ecx = ebx;
/* 7817d0: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7817d6u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7817d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7817d8: jne 0x7817dc */
  if (!zf) goto L_7817dc;
L_7817da: /* 7817da: xor ebx, ebx */
  ebx = 0;
L_7817dc: /* 7817dc: xor esi, esi */
  esi = 0;
/* 7817de: mov edi, edi */
  edi = edi;
L_7817e0: /* 7817e0: cmp esi, dword ptr [ebx + 0x320] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x320u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7817e6: jge 0x781826 */
  if ((sf == of)) goto L_781826;
L_7817e8: /* 7817e8: mov edx, dword ptr [ebx + 0x31c] */
  edx = R32((uint32_t)(ebx + 0x31cu));
/* 7817ee: lea ecx, [esi + esi*4] */
  ecx = (uint32_t)(esi + esi*4);
/* 7817f1: mov edi, dword ptr [edx + ecx*8 + 0x24] */
  edi = R32((uint32_t)(edx + ecx*8 + 0x24u));
/* 7817f5: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7817f7: jne 0x781811 */
  if (!zf) goto L_781811;
L_7817f9: /* 7817f9: push 0x3ad */
  { uint32_t v = 0x3adu; esp -= 4; W32(esp, v); }
/* 7817fe: push 0xac6354 */
  { uint32_t v = 0xac6354u; esp -= 4; W32(esp, v); }
/* 781803: push 0xac6360 */
  { uint32_t v = 0xac6360u; esp -= 4; W32(esp, v); }
/* 781808: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x78180eu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 78180e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_781811: /* 781811: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 781812: call 0x90fdf0 */
  esp -= 4; W32(esp, 0x781817u); SPILL(); f_90fdf0(); if (g_unwind) return; RELOAD();
/* 781817: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 781818: call 0x90bcb0 */
  esp -= 4; W32(esp, 0x78181du); SPILL(); f_90bcb0(); if (g_unwind) return; RELOAD();
/* 78181d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78181e: call 0x90fcd0 */
  esp -= 4; W32(esp, 0x781823u); SPILL(); f_90fcd0(); if (g_unwind) return; RELOAD();
/* 781823: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 781824: jmp 0x7817e0 */
  goto L_7817e0;
L_781826: /* 781826: add ebx, 0x31c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x31cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 78182c: xor esi, esi */
  esi = 0;
/* 78182e: mov edi, edi */
  edi = edi;
L_781830: /* 781830: cmp esi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 781833: jge 0x78185c */
  if ((sf == of)) goto L_78185c;
L_781835: /* 781835: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 781837: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 78183a: lea edi, [ecx + eax*8] */
  edi = (uint32_t)(ecx + eax*8);
/* 78183d: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 781840: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 781843: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 781847: call dword ptr [0xcfa318] */
  esp -= 4; W32(esp, 0x78184du); SPILL(); f_4e3134(); if (g_unwind) return; /* Core!??1FInterpCurve@@QAE@XZ */ RELOAD();
/* 78184d: mov ecx, edi */
  ecx = edi;
/* 78184f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 781853: call dword ptr [0xcfa318] */
  esp -= 4; W32(esp, 0x781859u); SPILL(); f_4e3134(); if (g_unwind) return; /* Core!??1FInterpCurve@@QAE@XZ */ RELOAD();
/* 781859: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 78185a: jmp 0x781830 */
  goto L_781830;
L_78185c: /* 78185c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78185e: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 781860: mov ecx, ebx */
  ecx = ebx;
/* 781862: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x781868u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 781868: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78186b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 781872: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 781873: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 781874: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 781875: mov esp, ebp */
  esp = ebp;
/* 781877: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 781878: ret 8 */
  esp += 12; SPILL(); return;
L_78187b: /* 78187b: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 781881: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 781883: push 0xac62e8 */
  { uint32_t v = 0xac62e8u; esp -= 4; W32(esp, v); }
/* 781888: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 781889: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x78188fu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 78188f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 781892: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 781895: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 781896: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 781897: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78189e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78189f: mov esp, ebp */
  esp = ebp;
/* 7818a1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7818a2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7818a5(void) {
  LOAD_REGS();
L_7818a5: /* 7818a5: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7818a8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7818ad: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7818b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7818b1: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7818b4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7818b9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7818b9(); return;
}

void f_7818b9(void) {
  LOAD_REGS();
L_7818b9: /* 7818b9: push 0xa09388 */
  { uint32_t v = 0xa09388u; esp -= 4; W32(esp, v); }
/* 7818be: push 0xac6364 */
  { uint32_t v = 0xac6364u; esp -= 4; W32(esp, v); }
/* 7818c3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7818c9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7818c9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7818cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7818ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7818d0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7818d5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7818d5: guest_badaddr(0x7818d5); return;
}

void f_781950(void) {
  LOAD_REGS();
L_781950: /* 781950: mov eax, edi */
  eax = edi;
/* 781952: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
L_781955: /* 781955: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 781957: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 781958: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78195a: jne 0x781955 */
  if (!zf) goto L_781955;
L_78195c: /* 78195c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 78195e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78195f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 781960: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 781961: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x781967u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 781967: mov esi, eax */
  esi = eax;
/* 781969: mov ecx, edi */
  ecx = edi;
/* 78196b: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 78196d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_781970: /* 781970: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 781972: mov byte ptr [esi + ecx], dl */
  W8((uint32_t)(esi + ecx), (edx & 0xffu));
/* 781975: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 781976: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 781978: jne 0x781970 */
  if (!zf) goto L_781970;
L_78197a: /* 78197a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78197b: ret  */
  esp += 4; SPILL(); return;
}

void f_781990(void) {
  LOAD_REGS();
L_781990: /* 781990: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 781994: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 781995: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 781997: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x78199du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 78199d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7819b0(void) {
  LOAD_REGS();
L_7819b0: /* 7819b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7819b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7819b5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7819b7: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x7819bdu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 7819bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7819d0(void) {
  LOAD_REGS();
L_7819d0: /* 7819d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7819d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7819d5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7819d7: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x7819ddu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 7819dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7819f0(void) {
  LOAD_REGS();
L_7819f0: /* 7819f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7819f1: mov esi, ecx */
  esi = ecx;
/* 7819f3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x7819f9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 7819f9: mov eax, esi */
  eax = esi;
/* 7819fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7819fc: ret  */
  esp += 4; SPILL(); return;
}

void f_781a10(void) {
  LOAD_REGS();
L_781a10: /* 781a10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 781a14: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 781a16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 781a17: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x781a1du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 781a1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_781a30(void) {
  LOAD_REGS();
L_781a30: /* 781a30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 781a34: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 781a36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 781a37: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x781a3du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 781a3d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_781a50(void) {
  LOAD_REGS();
L_781a50: /* 781a50: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 781a52: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 781a54: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 781a57: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 781a5a: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 781a5d: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 781a60: ret  */
  esp += 4; SPILL(); return;
}

void f_781a80(void) {
  LOAD_REGS();
L_781a80: /* 781a80: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 781a82: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 781a84: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 781a86: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 781a89: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 781a8c: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 781a8f: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 781a92: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 781a95: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 781a98: ret  */
  esp += 4; SPILL(); return;
}

void f_781ab0(void) {
  LOAD_REGS();
L_781ab0: /* 781ab0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 781ab2: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 781ab4: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 781ab6: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 781ab9: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 781abc: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 781abf: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 781ac2: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 781ac5: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 781ac8: ret  */
  esp += 4; SPILL(); return;
}

void f_781ae0(void) {
  LOAD_REGS();
L_781ae0: /* 781ae0: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 781ae3: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 781ae6: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 781ae9: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 781aec: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 781aee: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 781af0: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 781af3: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 781af5: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 781af8: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 781afa: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 781afc: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 781aff: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 781b01: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 781b04: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 781b06: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 781b09: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 781b0b: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 781b0e: ret  */
  esp += 4; SPILL(); return;
}

void f_781b20(void) {
  LOAD_REGS();
L_781b20: /* 781b20: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 781b23: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 781b25: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 781b28: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 781b2a: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 781b2c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 781b2e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 781b30: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 781b32: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 781b34: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 781b36: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 781b38: fstp st(3) */
  STI(3) = ST0; FPOP();
/* 781b3a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 781b3c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 781b3e: ret  */
  esp += 4; SPILL(); return;
}

void f_781b50(void) {
  LOAD_REGS();
L_781b50: /* 781b50: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 781b54: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 781b56: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 781b58: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 781b5c: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 781b5f: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 781b62: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 781b66: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 781b69: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 781b6c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_781b80(void) {
  LOAD_REGS();
L_781b80: /* 781b80: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 781b82: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 781b85: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 781b88: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 781b8a: fmulp st(3) */
  STI(3) = STI(3) * ST0;
  FPOP();
/* 781b8c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 781b8e: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 781b90: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 781b92: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 781b94: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 781b96: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 781b98: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 781b9a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 781b9c: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 781ba2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 781ba4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 781ba7: jne 0x781bc8 */
  if (!zf) goto L_781bc8;
L_781ba9: /* 781ba9: fsqrt  */
  ST0 = sqrt(ST0);
/* 781bab: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 781bb1: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 781bb3: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 781bb5: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 781bb7: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 781bb9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 781bbb: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 781bbe: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 781bc1: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 781bc4: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 781bc7: ret  */
  esp += 4; SPILL(); return;
L_781bc8: /* 781bc8: xor eax, eax */
  eax = 0;
/* 781bca: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 781bcc: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 781bd2: mov dword ptr [ecx], 0x3f800000 */
  W32((uint32_t)(ecx), 0x3f800000u);
/* 781bd8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 781bdb: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 781bde: ret  */
  esp += 4; SPILL(); return;
}

void f_781c00(void) {
  LOAD_REGS();
L_781c00: /* 781c00: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 781c04: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 781c06: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 781c08: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 781c0c: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 781c0f: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 781c12: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 781c16: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 781c19: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 781c1c: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 781c20: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 781c23: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 781c26: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 781c2a: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 781c2d: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 781c30: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 781c34: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 781c37: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 781c3a: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 781c3e: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 781c41: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 781c44: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 781c48: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 781c4b: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 781c4e: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 781c52: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 781c55: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* 781c58: ret 4 */
  esp += 8; SPILL(); return;
}

void f_781c80(void) {
  LOAD_REGS();
L_781c80: /* 781c80: xor ecx, ecx */
  ecx = 0;
/* 781c82: mov edx, 0x3f800000 */
  edx = 0x3f800000u;
/* 781c87: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 781c89: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 781c8c: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 781c8f: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 781c92: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 781c95: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 781c98: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 781c9b: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 781c9e: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 781ca1: mov dword ptr [eax + 0x24], ecx */
  W32((uint32_t)(eax + 0x24u), ecx);
/* 781ca4: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 781ca7: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 781caa: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 781cad: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 781cb0: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 781cb3: mov dword ptr [eax + 0x3c], edx */
  W32((uint32_t)(eax + 0x3cu), edx);
/* 781cb6: ret  */
  esp += 4; SPILL(); return;
}

void f_781cd0(void) {
  LOAD_REGS();
L_781cd0: /* 781cd0: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 781cd2: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 781cd4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 781cd7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 781cda: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 781cdd: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 781ce0: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 781ce3: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 781ce6: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 781ce9: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 781cec: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 781cef: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 781cf2: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 781cf5: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 781cf8: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 781cfb: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* 781cfe: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 781d01: mov dword ptr [ecx + 0x20], edx */
  W32((uint32_t)(ecx + 0x20u), edx);
/* 781d04: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 781d07: mov dword ptr [ecx + 0x24], edx */
  W32((uint32_t)(ecx + 0x24u), edx);
/* 781d0a: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 781d0d: mov dword ptr [ecx + 0x28], edx */
  W32((uint32_t)(ecx + 0x28u), edx);
/* 781d10: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 781d13: mov dword ptr [ecx + 0x2c], edx */
  W32((uint32_t)(ecx + 0x2cu), edx);
/* 781d16: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 781d19: mov dword ptr [ecx + 0x30], edx */
  W32((uint32_t)(ecx + 0x30u), edx);
/* 781d1c: mov edx, dword ptr [eax + 0x34] */
  edx = R32((uint32_t)(eax + 0x34u));
/* 781d1f: mov dword ptr [ecx + 0x34], edx */
  W32((uint32_t)(ecx + 0x34u), edx);
/* 781d22: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 781d25: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
/* 781d28: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 781d2b: mov dword ptr [ecx + 0x3c], eax */
  W32((uint32_t)(ecx + 0x3cu), eax);
/* 781d2e: ret  */
  esp += 4; SPILL(); return;
}

void f_781d50(void) {
  LOAD_REGS();
L_781d50: /* 781d50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 781d51: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 781d54: mov esi, 4 */
  esi = 0x4u;
/* 781d59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_781d60: /* 781d60: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 781d63: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 781d66: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 781d68: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 781d6b: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 781d6e: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 781d71: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 781d74: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 781d77: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 781d7a: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 781d7b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 781d7d: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 781d80: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* 781d83: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 781d85: fld dword ptr [eax - 0x18] */
  { double v = F32((uint32_t)(eax + 0xffffffe8u)); FPUSH(v); }
/* 781d88: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 781d8a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 781d8c: fstp dword ptr [edx - 0x10] */
  WF32((uint32_t)(edx + 0xfffffff0u), ST0); FPOP();
/* 781d8f: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 781d92: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 781d95: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* 781d98: fmul dword ptr [eax - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff4u)));
/* 781d9b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 781d9d: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 781da0: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* 781da3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 781da5: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 781da8: fmul dword ptr [eax - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe8u)));
/* 781dab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 781dad: fstp dword ptr [edx - 0xc] */
  WF32((uint32_t)(edx + 0xfffffff4u), ST0); FPOP();
/* 781db0: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 781db3: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 781db6: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* 781db9: fmul dword ptr [eax - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff4u)));
/* 781dbc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 781dbe: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 781dc1: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* 781dc4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 781dc6: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 781dc9: fmul dword ptr [eax - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe8u)));
/* 781dcc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 781dce: fstp dword ptr [edx - 8] */
  WF32((uint32_t)(edx + 0xfffffff8u), ST0); FPOP();
/* 781dd1: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 781dd4: fmul dword ptr [eax - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff0u)));
/* 781dd7: fld dword ptr [ecx + 0x3c] */
  { double v = F32((uint32_t)(ecx + 0x3cu)); FPUSH(v); }
/* 781dda: fmul dword ptr [eax - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xfffffff4u)));
/* 781ddd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 781ddf: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 781de2: fmul dword ptr [eax - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffecu)));
/* 781de5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 781de7: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 781dea: fmul dword ptr [eax - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xffffffe8u)));
/* 781ded: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 781def: fstp dword ptr [edx - 4] */
  WF32((uint32_t)(edx + 0xfffffffcu), ST0); FPOP();
/* 781df2: jne 0x781d60 */
  if (!zf) goto L_781d60;
L_781df8: /* 781df8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 781df9: ret  */
  esp += 4; SPILL(); return;
}

void f_781e30(void) {
  LOAD_REGS();
L_781e30: /* 781e30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 781e31: mov ebp, esp */
  ebp = esp;
/* 781e33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 781e35: push 0x9cc930 */
  { uint32_t v = 0x9cc930u; esp -= 4; W32(esp, v); }
/* 781e3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 781e40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 781e41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 781e48: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 781e4b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 781e4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 781e4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 781e50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 781e51: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 781e54: xor esi, esi */
  esi = 0;
/* 781e56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 781e57: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 781e5a: call 0x97a4e0 */
  esp -= 4; W32(esp, 0x781e5fu); SPILL(); f_97a4e0(); if (g_unwind) return; RELOAD();
/* 781e5f: mov edi, eax */
  edi = eax;
/* 781e61: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 781e62: call 0x979ef0 */
  esp -= 4; W32(esp, 0x781e67u); SPILL(); f_979ef0(); if (g_unwind) return; RELOAD();
/* 781e67: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 781e6a: mov ebx, eax */
  ebx = eax;
/* 781e6c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 781e6d: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 781e70: call 0x928490 */
  esp -= 4; W32(esp, 0x781e75u); SPILL(); f_928490(); if (g_unwind) return; RELOAD();
/* 781e75: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 781e78: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 781e7b: jne 0x781e95 */
  if (!zf) goto L_781e95;
L_781e7d: /* 781e7d: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 781e7f: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 781e81: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x781e87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 781e87: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 781e8a: mov ebx, eax */
  ebx = eax;
/* 781e8c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 781e8d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 781e8e: call 0x928740 */
  esp -= 4; W32(esp, 0x781e93u); SPILL(); f_928740(); if (g_unwind) return; RELOAD();
/* 781e93: jmp 0x781ea8 */
  goto L_781ea8;
L_781e95: /* 781e95: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 781e98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 781e99: call 0x90dd30 */
  esp -= 4; W32(esp, 0x781e9eu); SPILL(); f_90dd30(); if (g_unwind) return; RELOAD();
/* 781e9e: mov esi, eax */
  esi = eax;
/* 781ea0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 781ea1: call 0x90e0e0 */
  esp -= 4; W32(esp, 0x781ea6u); SPILL(); f_90e0e0(); if (g_unwind) return; RELOAD();
/* 781ea6: mov ebx, eax */
  ebx = eax;
L_781ea8: /* 781ea8: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 781eab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 781ead: je 0x781ec4 */
  if (zf) goto L_781ec4;
L_781eaf: /* 781eaf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 781eb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 781eb3: call 0x97a540 */
  esp -= 4; W32(esp, 0x781eb8u); SPILL(); f_97a540(); if (g_unwind) return; RELOAD();
/* 781eb8: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 781ebb: mov edx, ebx */
  edx = ebx;
/* 781ebd: call 0x781d50 */
  esp -= 4; W32(esp, 0x781ec2u); SPILL(); f_781d50(); if (g_unwind) return; RELOAD();
/* 781ec2: jmp 0x781ed4 */
  goto L_781ed4;
L_781ec4: /* 781ec4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 781ec7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 781ec8: call 0x97a540 */
  esp -= 4; W32(esp, 0x781ecdu); SPILL(); f_97a540(); if (g_unwind) return; RELOAD();
/* 781ecd: mov ecx, ebx */
  ecx = ebx;
/* 781ecf: call 0x781cd0 */
  esp -= 4; W32(esp, 0x781ed4u); SPILL(); f_781cd0(); if (g_unwind) return; RELOAD();
L_781ed4: /* 781ed4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 781ed7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 781ed9: je 0x781ee4 */
  if (zf) goto L_781ee4;
L_781edb: /* 781edb: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 781ede: jne 0x781f8b */
  if (!zf) goto L_781f8b;
L_781ee4: /* 781ee4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 781ee5: call 0x90f0f0 */
  esp -= 4; W32(esp, 0x781eeau); SPILL(); f_90f0f0(); if (g_unwind) return; RELOAD();
/* 781eea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 781eeb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 781eec: call 0x90e790 */
  esp -= 4; W32(esp, 0x781ef1u); SPILL(); f_90e790(); if (g_unwind) return; RELOAD();
/* 781ef1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 781ef2: call 0x979f60 */
  esp -= 4; W32(esp, 0x781ef7u); SPILL(); f_979f60(); if (g_unwind) return; RELOAD();
/* 781ef7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 781ef8: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 781efb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 781efc: call 0x6caf74 */
  esp -= 4; W32(esp, 0x781f01u); SPILL(); f_6caf74(); if (g_unwind) return; RELOAD();
/* 781f01: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 781f04: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 781f07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 781f08: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 781f09: call 0x979f40 */
  esp -= 4; W32(esp, 0x781f0eu); SPILL(); f_979f40(); if (g_unwind) return; RELOAD();
/* 781f0e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 781f11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 781f12: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 781f13: call 0x90eea0 */
  esp -= 4; W32(esp, 0x781f18u); SPILL(); f_90eea0(); if (g_unwind) return; RELOAD();
/* 781f18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 781f19: call 0x90f6a0 */
  esp -= 4; W32(esp, 0x781f1eu); SPILL(); f_90f6a0(); if (g_unwind) return; RELOAD();
/* 781f1e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 781f1f: call 0x90f6d0 */
  esp -= 4; W32(esp, 0x781f24u); SPILL(); f_90f6d0(); if (g_unwind) return; RELOAD();
/* 781f24: lea edx, [ebp - 0x4c] */
  edx = (uint32_t)(ebp + 0xffffffb4u);
/* 781f27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 781f28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 781f29: call 0x979f80 */
  esp -= 4; W32(esp, 0x781f2eu); SPILL(); f_979f80(); if (g_unwind) return; RELOAD();
/* 781f2e: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 781f31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 781f32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 781f33: call 0x6c75d6 */
  esp -= 4; W32(esp, 0x781f38u); SPILL(); f_6c75d6(); if (g_unwind) return; RELOAD();
/* 781f38: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 781f3b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 781f3c: call 0x979fe0 */
  esp -= 4; W32(esp, 0x781f41u); SPILL(); f_979fe0(); if (g_unwind) return; RELOAD();
/* 781f41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 781f42: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 781f45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 781f46: call 0x90ea70 */
  esp -= 4; W32(esp, 0x781f4bu); SPILL(); f_90ea70(); if (g_unwind) return; RELOAD();
/* 781f4b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 781f4c: call 0x979ff0 */
  esp -= 4; W32(esp, 0x781f51u); SPILL(); f_979ff0(); if (g_unwind) return; RELOAD();
/* 781f51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 781f52: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 781f55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 781f56: call 0x90ea90 */
  esp -= 4; W32(esp, 0x781f5bu); SPILL(); f_90ea90(); if (g_unwind) return; RELOAD();
/* 781f5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 781f5c: call 0x97a020 */
  esp -= 4; W32(esp, 0x781f61u); SPILL(); f_97a020(); if (g_unwind) return; RELOAD();
/* 781f61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 781f63: je 0x781f81 */
  if (zf) goto L_781f81;
L_781f65: /* 781f65: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 781f68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 781f69: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 781f6a: call 0x97a000 */
  esp -= 4; W32(esp, 0x781f6fu); SPILL(); f_97a000(); if (g_unwind) return; RELOAD();
/* 781f6f: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 781f72: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 781f75: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 781f78: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 781f79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 781f7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 781f7b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 781f7c: call 0x90eab0 */
  esp -= 4; W32(esp, 0x781f81u); SPILL(); f_90eab0(); if (g_unwind) return; RELOAD();
L_781f81: /* 781f81: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 781f84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 781f85: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 781f86: call 0x925a30 */
  esp -= 4; W32(esp, 0x781f8bu); SPILL(); f_925a30(); if (g_unwind) return; RELOAD();
L_781f8b: /* 781f8b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 781f8e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 781f91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 781f92: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 781f93: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 781f9a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 781f9b: mov esp, ebp */
  esp = ebp;
/* 781f9d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 781f9e: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_781fa1(void) {
  LOAD_REGS();
L_781fa1: /* 781fa1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 781fa4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 781fa9: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 781fac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 781fad: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 781fb0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x781fb5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_781fb5(); return;
}

void f_781fb5(void) {
  LOAD_REGS();
L_781fb5: /* 781fb5: push 0xa093ec */
  { uint32_t v = 0xa093ecu; esp -= 4; W32(esp, v); }
/* 781fba: push 0xac684c */
  { uint32_t v = 0xac684cu; esp -= 4; W32(esp, v); }
/* 781fbf: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x781fc5u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 781fc5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 781fc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 781fca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 781fcc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x781fd1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_781fd1: guest_badaddr(0x781fd1); return;
}

void f_782050(void) {
  LOAD_REGS();
L_782050: /* 782050: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 782051: mov ebp, esp */
  ebp = esp;
/* 782053: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 782055: push 0x9cc940 */
  { uint32_t v = 0x9cc940u; esp -= 4; W32(esp, v); }
/* 78205a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 782060: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782061: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 782068: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78206b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78206c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 78206f: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 782071: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 782072: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782073: xor edi, edi */
  edi = 0;
/* 782075: mov ecx, ebx */
  ecx = ebx;
/* 782077: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78207a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 78207d: call dword ptr [eax + 0x8c] */
  { uint32_t t = R32((uint32_t)(eax + 0x8cu)); esp -= 4; W32(esp, 0x782083u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 782083: mov esi, eax */
  esi = eax;
/* 782085: cmp byte ptr [esi + 0x50], 0xe */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 782089: jne 0x782205 */
  if (!zf) goto L_782205;
L_78208f: /* 78208f: cmp dword ptr [ebx + 0x2f4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x2f4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 782095: je 0x782205 */
  if (zf) goto L_782205;
L_78209b: /* 78209b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 78209e: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7820a1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7820a4: mov ecx, esp */
  ecx = esp;
/* 7820a6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7820a8: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7820ab: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7820ae: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 7820b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7820b2: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7820b5: call 0x6c882d */
  esp -= 4; W32(esp, 0x7820bau); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 7820ba: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7820bd: add esi, 0x170 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7820c3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 7820c5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7820c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7820cb: mov ecx, esp */
  ecx = esp;
/* 7820cd: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7820cf: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 7820d2: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 7820d5: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 7820d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7820d9: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 7820dc: call 0x6c882d */
  esp -= 4; W32(esp, 0x7820e1u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 7820e1: fld dword ptr [0xa093e0] */
  { double v = F32((uint32_t)(0xa093e0u)); FPUSH(v); }
/* 7820e7: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 7820ea: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7820ed: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7820f0: fld dword ptr [0xa093e0] */
  { double v = F32((uint32_t)(0xa093e0u)); FPUSH(v); }
/* 7820f6: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 7820f9: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 7820fc: fld dword ptr [0xa093e0] */
  { double v = F32((uint32_t)(0xa093e0u)); FPUSH(v); }
/* 782102: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 782105: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 782108: jmp 0x782110 */
  goto L_782110;
L_782110: /* 782110: cmp edi, dword ptr [ebx + 0x2e0] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 782116: jge 0x782205 */
  if ((sf == of)) goto L_782205;
L_78211c: /* 78211c: mov ecx, dword ptr [ebx + 0x2dc] */
  ecx = R32((uint32_t)(ebx + 0x2dcu));
/* 782122: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 782125: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782127: je 0x7821cf */
  if (zf) goto L_7821cf;
L_78212d: /* 78212d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78212e: call 0x925ce0 */
  esp -= 4; W32(esp, 0x782133u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 782133: mov esi, eax */
  esi = eax;
/* 782135: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782137: je 0x7821cf */
  if (zf) goto L_7821cf;
L_78213d: /* 78213d: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 782140: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 782143: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 782146: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 782149: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 78214c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78214d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78214e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 782151: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 782154: call 0x90e6a0 */
  esp -= 4; W32(esp, 0x782159u); SPILL(); f_90e6a0(); if (g_unwind) return; RELOAD();
/* 782159: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 78215c: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 78215f: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 782162: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 782165: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 782168: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 78216b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 78216e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 782170: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 782172: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 782175: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 782177: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 78217a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 78217c: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 78217f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 782181: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 782184: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 782186: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 782189: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78218c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 78218e: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 782191: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 782193: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 782196: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 782199: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78219c: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78219f: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7821a2: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7821a5: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7821a8: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7821ab: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7821ae: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7821b1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7821b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7821b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7821b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7821b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7821b8: call 0x90ea10 */
  esp -= 4; W32(esp, 0x7821bdu); SPILL(); f_90ea10(); if (g_unwind) return; RELOAD();
/* 7821bd: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7821c0: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7821c3: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7821c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7821c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7821c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7821c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7821ca: call 0x90ea40 */
  esp -= 4; W32(esp, 0x7821cfu); SPILL(); f_90ea40(); if (g_unwind) return; RELOAD();
L_7821cf: /* 7821cf: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7821d0: jmp 0x782110 */
  goto L_782110;
L_782205: /* 782205: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 782208: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 782209: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78220a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 782211: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 782212: mov esp, ebp */
  esp = ebp;
/* 782214: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 782215: ret  */
  esp += 4; SPILL(); return;
}

void f_78210a(void) {
  LOAD_REGS();
L_78210a: /* 78210a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_782110: /* 782110: cmp edi, dword ptr [ebx + 0x2e0] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2e0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 782116: jge 0x782205 */
  if ((sf == of)) goto L_782205;
L_78211c: /* 78211c: mov ecx, dword ptr [ebx + 0x2dc] */
  ecx = R32((uint32_t)(ebx + 0x2dcu));
/* 782122: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 782125: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782127: je 0x7821cf */
  if (zf) goto L_7821cf;
L_78212d: /* 78212d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78212e: call 0x925ce0 */
  esp -= 4; W32(esp, 0x782133u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 782133: mov esi, eax */
  esi = eax;
/* 782135: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782137: je 0x7821cf */
  if (zf) goto L_7821cf;
L_78213d: /* 78213d: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 782140: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 782143: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 782146: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 782149: lea edx, [ebp - 0x48] */
  edx = (uint32_t)(ebp + 0xffffffb8u);
/* 78214c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78214d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78214e: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 782151: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 782154: call 0x90e6a0 */
  esp -= 4; W32(esp, 0x782159u); SPILL(); f_90e6a0(); if (g_unwind) return; RELOAD();
/* 782159: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 78215c: fsub dword ptr [ebp - 0x54] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffacu)));
/* 78215f: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 782162: fsub dword ptr [ebp - 0x50] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 782165: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 782168: fsub dword ptr [ebp - 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 78216b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 78216e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 782170: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 782172: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 782175: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 782177: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 78217a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 78217c: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 78217f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 782181: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 782184: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 782186: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 782189: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 78218c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 78218e: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 782191: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 782193: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 782196: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 782199: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78219c: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 78219f: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 7821a2: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7821a5: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7821a8: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7821ab: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7821ae: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 7821b1: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7821b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7821b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7821b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7821b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7821b8: call 0x90ea10 */
  esp -= 4; W32(esp, 0x7821bdu); SPILL(); f_90ea10(); if (g_unwind) return; RELOAD();
/* 7821bd: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7821c0: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 7821c3: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7821c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7821c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7821c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7821c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7821ca: call 0x90ea40 */
  esp -= 4; W32(esp, 0x7821cfu); SPILL(); f_90ea40(); if (g_unwind) return; RELOAD();
L_7821cf: /* 7821cf: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 7821d0: jmp 0x782110 */
  goto L_782110;
L_782205: /* 782205: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 782208: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 782209: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78220a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 782211: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 782212: mov esp, ebp */
  esp = ebp;
/* 782214: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 782215: ret  */
  esp += 4; SPILL(); return;
}

void f_7821d5(void) {
  LOAD_REGS();
L_7821d5: /* 7821d5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7821d8: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7821dd: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 7821e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7821e1: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7821e4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7821e9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7821e9(); return;
}

void f_7821e9(void) {
  LOAD_REGS();
L_7821e9: /* 7821e9: push 0xa09434 */
  { uint32_t v = 0xa09434u; esp -= 4; W32(esp, v); }
/* 7821ee: push 0xac7228 */
  { uint32_t v = 0xac7228u; esp -= 4; W32(esp, v); }
/* 7821f3: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7821f9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7821f9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7821fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7821fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782200: call 0x99caf8 */
  esp -= 4; W32(esp, 0x782205u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 782205: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 782208: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 782209: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78220a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 782211: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 782212: mov esp, ebp */
  esp = ebp;
/* 782214: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 782215: ret  */
  esp += 4; SPILL(); return;
}

void f_7822a0(void) {
  LOAD_REGS();
L_7822a0: /* 7822a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7822a4: mov ecx, dword ptr [eax + 0x2ec] */
  ecx = R32((uint32_t)(eax + 0x2ecu));
/* 7822aa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7822ab: xor ebx, ebx */
  ebx = 0;
/* 7822ad: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 7822af: jle 0x782392 */
  if ((zf || sf != of)) goto L_782392;
L_7822b5: /* 7822b5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7822b6: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 7822ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7822bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7822bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_7822c0: /* 7822c0: mov eax, dword ptr [eax + 0x2e8] */
  eax = R32((uint32_t)(eax + 0x2e8u));
/* 7822c6: mov esi, dword ptr [eax + ebx*4] */
  esi = R32((uint32_t)(eax + ebx*4));
/* 7822c9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7822cb: je 0x78237c */
  if (zf) goto L_78237c;
L_7822d1: /* 7822d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7822d2: call 0x90d4e0 */
  esp -= 4; W32(esp, 0x7822d7u); SPILL(); f_90d4e0(); if (g_unwind) return; RELOAD();
/* 7822d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7822d8: mov edi, eax */
  edi = eax;
/* 7822da: call 0x912440 */
  esp -= 4; W32(esp, 0x7822dfu); SPILL(); f_912440(); if (g_unwind) return; RELOAD();
/* 7822df: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7822e1: mov esi, eax */
  esi = eax;
/* 7822e3: je 0x782349 */
  if (zf) goto L_782349;
L_7822e5: /* 7822e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7822e6: call 0x90d500 */
  esp -= 4; W32(esp, 0x7822ebu); SPILL(); f_90d500(); if (g_unwind) return; RELOAD();
/* 7822eb: mov esi, eax */
  esi = eax;
/* 7822ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7822ee: call 0x90c9e0 */
  esp -= 4; W32(esp, 0x7822f3u); SPILL(); f_90c9e0(); if (g_unwind) return; RELOAD();
/* 7822f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7822f4: call 0x90c850 */
  esp -= 4; W32(esp, 0x7822f9u); SPILL(); f_90c850(); if (g_unwind) return; RELOAD();
/* 7822f9: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 7822fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7822fe: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 782301: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 782302: call 0x90c9e0 */
  esp -= 4; W32(esp, 0x782307u); SPILL(); f_90c9e0(); if (g_unwind) return; RELOAD();
/* 782307: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782308: call 0x90c890 */
  esp -= 4; W32(esp, 0x78230du); SPILL(); f_90c890(); if (g_unwind) return; RELOAD();
/* 78230d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78230e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78230f: call 0x90c9e0 */
  esp -= 4; W32(esp, 0x782314u); SPILL(); f_90c9e0(); if (g_unwind) return; RELOAD();
/* 782314: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782315: call 0x90c8a0 */
  esp -= 4; W32(esp, 0x78231au); SPILL(); f_90c8a0(); if (g_unwind) return; RELOAD();
/* 78231a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78231b: call 0x90c9d0 */
  esp -= 4; W32(esp, 0x782320u); SPILL(); f_90c9d0(); if (g_unwind) return; RELOAD();
/* 782320: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782321: call 0x90c850 */
  esp -= 4; W32(esp, 0x782326u); SPILL(); f_90c850(); if (g_unwind) return; RELOAD();
/* 782326: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 78232a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78232b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78232e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78232f: call 0x90c9d0 */
  esp -= 4; W32(esp, 0x782334u); SPILL(); f_90c9d0(); if (g_unwind) return; RELOAD();
/* 782334: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782335: call 0x90c890 */
  esp -= 4; W32(esp, 0x78233au); SPILL(); f_90c890(); if (g_unwind) return; RELOAD();
/* 78233a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 78233b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78233c: call 0x90c9d0 */
  esp -= 4; W32(esp, 0x782341u); SPILL(); f_90c9d0(); if (g_unwind) return; RELOAD();
/* 782341: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782342: call 0x90c8a0 */
  esp -= 4; W32(esp, 0x782347u); SPILL(); f_90c8a0(); if (g_unwind) return; RELOAD();
/* 782347: jmp 0x78237c */
  goto L_78237c;
L_782349: /* 782349: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78234b: je 0x78237c */
  if (zf) goto L_78237c;
L_78234d: /* 78234d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78234e: call 0x912470 */
  esp -= 4; W32(esp, 0x782353u); SPILL(); f_912470(); if (g_unwind) return; RELOAD();
/* 782353: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 782357: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782358: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78235b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78235c: call 0x912950 */
  esp -= 4; W32(esp, 0x782361u); SPILL(); f_912950(); if (g_unwind) return; RELOAD();
/* 782361: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 782362: call 0x912490 */
  esp -= 4; W32(esp, 0x782367u); SPILL(); f_912490(); if (g_unwind) return; RELOAD();
/* 782367: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 78236b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78236c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 78236f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 782370: call 0x912970 */
  esp -= 4; W32(esp, 0x782375u); SPILL(); f_912970(); if (g_unwind) return; RELOAD();
/* 782375: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 782376: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 782377: call 0x912990 */
  esp -= 4; W32(esp, 0x78237cu); SPILL(); f_912990(); if (g_unwind) return; RELOAD();
L_78237c: /* 78237c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 782380: mov ecx, dword ptr [eax + 0x2ec] */
  ecx = R32((uint32_t)(eax + 0x2ecu));
/* 782386: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 782387: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 782389: jl 0x7822c0 */
  if ((sf != of)) goto L_7822c0;
L_78238f: /* 78238f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 782390: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 782391: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_782392: /* 782392: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 782393: ret  */
  esp += 4; SPILL(); return;
}

void f_7823e0(void) {
  LOAD_REGS();
L_7823e0: /* 7823e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7823e1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 7823e3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 7823e5: mov esi, ecx */
  esi = ecx;
/* 7823e7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x7823edu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 7823ed: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 7823f1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 7823f3: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 7823f5: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 7823f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7823f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_782410(void) {
  LOAD_REGS();
L_782410: /* 782410: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 782411: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 782413: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 782415: mov esi, ecx */
  esi = ecx;
/* 782417: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x78241du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 78241d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 782421: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 782423: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 782425: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 782428: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 782429: ret 4 */
  esp += 8; SPILL(); return;
}

void f_782440(void) {
  LOAD_REGS();
L_782440: /* 782440: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 782441: mov ebp, esp */
  ebp = esp;
/* 782443: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 782445: push 0x9cc950 */
  { uint32_t v = 0x9cc950u; esp -= 4; W32(esp, v); }
/* 78244a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 782450: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782451: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 782458: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78245b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78245c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78245d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 782460: mov ebx, dword ptr [esi + 0x30c] */
  ebx = R32((uint32_t)(esi + 0x30cu));
/* 782466: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 78246c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78246d: xor edi, edi */
  edi = 0;
/* 78246f: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 782471: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 782474: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 782477: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 78247a: je 0x78248d */
  if (zf) goto L_78248d;
L_78247c: /* 78247c: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 782481: mov ecx, ebx */
  ecx = ebx;
/* 782483: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x782489u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 782489: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 78248b: jne 0x7824b5 */
  if (!zf) goto L_7824b5;
L_78248d: /* 78248d: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 782493: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 782495: push 0xac7230 */
  { uint32_t v = 0xac7230u; esp -= 4; W32(esp, v); }
/* 78249a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_78249b: /* 78249b: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7824a1u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7824a1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7824a4: /* 7824a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7824a7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7824ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7824af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7824b0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7824b1: mov esp, ebp */
  esp = ebp;
/* 7824b3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7824b4: ret  */
  esp += 4; SPILL(); return;
L_7824b5: /* 7824b5: mov eax, dword ptr [ebx + 0x90] */
  eax = R32((uint32_t)(ebx + 0x90u));
/* 7824bb: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 7824be: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* 7824c1: je 0x7824c8 */
  if (zf) goto L_7824c8;
L_7824c3: /* 7824c3: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7824c6: je 0x7824a4 */
  if (zf) goto L_7824a4;
L_7824c8: /* 7824c8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7824ca: jne 0x7824d1 */
  if (!zf) goto L_7824d1;
L_7824cc: /* 7824cc: cmp dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7824cf: jne 0x7824a4 */
  if (!zf) goto L_7824a4;
L_7824d1: /* 7824d1: cmp byte ptr [esi + 0x50], 0xe */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x50u))); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7824d5: jne 0x782515 */
  if (!zf) goto L_782515;
L_7824d7: /* 7824d7: mov ecx, dword ptr [esi + 0xd0] */
  ecx = R32((uint32_t)(esi + 0xd0u));
/* 7824dd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7824df: je 0x782515 */
  if (zf) goto L_782515;
L_7824e1: /* 7824e1: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 7824e6: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7824ecu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7824ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7824ee: je 0x782515 */
  if (zf) goto L_782515;
L_7824f0: /* 7824f0: mov eax, dword ptr [esi + 0xd0] */
  eax = R32((uint32_t)(esi + 0xd0u));
/* 7824f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7824f7: call 0x6ca8ad */
  esp -= 4; W32(esp, 0x7824fcu); SPILL(); f_6ca8ad(); if (g_unwind) return; RELOAD();
/* 7824fc: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7824fe: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 782501: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 782502: mov ecx, eax */
  ecx = eax;
/* 782504: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x78250au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78250a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78250b: call 0x6c8116 */
  esp -= 4; W32(esp, 0x782510u); SPILL(); f_6c8116(); if (g_unwind) return; RELOAD();
/* 782510: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 782513: mov edi, eax */
  edi = eax;
L_782515: /* 782515: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 782518: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78251a: je 0x7824a4 */
  if (zf) goto L_7824a4;
L_78251c: /* 78251c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78251e: je 0x7824a4 */
  if (zf) goto L_7824a4;
L_782520: /* 782520: mov eax, dword ptr [edi + 0x2f4] */
  eax = R32((uint32_t)(edi + 0x2f4u));
/* 782526: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782528: je 0x7824a4 */
  if (zf) goto L_7824a4;
L_78252e: /* 78252e: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 782534: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 782537: jne 0x7824a4 */
  if (!zf) goto L_7824a4;
L_78253d: /* 78253d: mov edi, dword ptr [ebx + 0x50] */
  edi = R32((uint32_t)(ebx + 0x50u));
/* 782540: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782542: jne 0x782556 */
  if (!zf) goto L_782556;
L_782544: /* 782544: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 782549: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78254b: push 0xac7290 */
  { uint32_t v = 0xac7290u; esp -= 4; W32(esp, v); }
/* 782550: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782551: jmp 0x78249b */
  goto L_78249b;
L_782556: /* 782556: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 78255c: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78255f: jne 0x78257b */
  if (!zf) goto L_78257b;
L_782561: /* 782561: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782562: call 0x6c1f0a */
  esp -= 4; W32(esp, 0x782567u); SPILL(); f_6c1f0a(); if (g_unwind) return; RELOAD();
/* 782567: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78256a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78256d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 782574: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 782575: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 782576: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 782577: mov esp, ebp */
  esp = ebp;
/* 782579: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78257a: ret  */
  esp += 4; SPILL(); return;
L_78257b: /* 78257b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 78257d: mov ecx, esi */
  ecx = esi;
/* 78257f: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x782585u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 782585: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 782587: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 782588: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 78258b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78258c: mov ecx, eax */
  ecx = eax;
/* 78258e: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x782591u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 782591: mov al, byte ptr [ebp - 0x2c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffd4u))) & 0xffu);
/* 782594: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 782596: je 0x78262a */
  if (zf) goto L_78262a;
L_78259c: /* 78259c: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 78259f: fcomp qword ptr [0xa09498] */
  fpu_com(ST0, F64((uint32_t)(0xa09498u)));
  FPOP();
/* 7825a5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7825a7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7825aa: je 0x78262a */
  if (zf) goto L_78262a;
L_7825ac: /* 7825ac: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 7825af: fcomp qword ptr [0xa09488] */
  fpu_com(ST0, F64((uint32_t)(0xa09488u)));
  FPOP();
/* 7825b5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7825b7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7825ba: jnp 0x78262a */
  if (!pf) goto L_78262a;
L_7825bc: /* 7825bc: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 7825bf: fcomp qword ptr [0xa09498] */
  fpu_com(ST0, F64((uint32_t)(0xa09498u)));
  FPOP();
/* 7825c5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7825c7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7825ca: je 0x78262a */
  if (zf) goto L_78262a;
L_7825cc: /* 7825cc: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 7825cf: fcomp qword ptr [0xa09488] */
  fpu_com(ST0, F64((uint32_t)(0xa09488u)));
  FPOP();
/* 7825d5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7825d7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7825da: jnp 0x78262a */
  if (!pf) goto L_78262a;
L_7825dc: /* 7825dc: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7825df: fcomp qword ptr [0xa09498] */
  fpu_com(ST0, F64((uint32_t)(0xa09498u)));
  FPOP();
/* 7825e5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7825e7: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7825ea: je 0x78262a */
  if (zf) goto L_78262a;
L_7825ec: /* 7825ec: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 7825ef: fcomp qword ptr [0xa09488] */
  fpu_com(ST0, F64((uint32_t)(0xa09488u)));
  FPOP();
/* 7825f5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 7825f7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 7825fa: jnp 0x78262a */
  if (!pf) goto L_78262a;
L_7825fc: /* 7825fc: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 7825fe: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 782601: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782602: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 782605: call dword ptr [0xcfa55c] */
  esp -= 4; W32(esp, 0x78260bu); SPILL(); f_4e34c2(); if (g_unwind) return; /* Core!??0FSphere@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 78260b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 78260e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78260f: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 782612: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782613: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782614: call 0x6c6c5d */
  esp -= 4; W32(esp, 0x782619u); SPILL(); f_6c6c5d(); if (g_unwind) return; RELOAD();
/* 782619: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78261c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78261d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78261e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 782625: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 782626: mov esp, ebp */
  esp = ebp;
/* 782628: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 782629: ret  */
  esp += 4; SPILL(); return;
L_78262a: /* 78262a: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 782630: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 782632: push 0xac7310 */
  { uint32_t v = 0xac7310u; esp -= 4; W32(esp, v); }
/* 782637: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782638: jmp 0x78249b */
  goto L_78249b;
}

void f_78263d(void) {
  LOAD_REGS();
L_78263d: /* 78263d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 782640: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 782645: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 782648: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782649: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 78264c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x782651u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_782651(); return;
}

void f_782651(void) {
  LOAD_REGS();
L_782651: /* 782651: push 0xa09450 */
  { uint32_t v = 0xa09450u; esp -= 4; W32(esp, v); }
/* 782656: push 0xac7380 */
  { uint32_t v = 0xac7380u; esp -= 4; W32(esp, v); }
/* 78265b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x782661u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 782661: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 782664: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782666: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782668: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78266du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78266d: guest_badaddr(0x78266d); return;
}

void f_782700(void) {
  LOAD_REGS();
L_782700: /* 782700: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 782701: mov ebp, esp */
  ebp = esp;
/* 782703: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 782705: push 0x9cc960 */
  { uint32_t v = 0x9cc960u; esp -= 4; W32(esp, v); }
/* 78270a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 782710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782711: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 782718: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78271b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78271c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78271d: mov ebx, ecx */
  ebx = ecx;
/* 78271f: mov esi, dword ptr [ebx + 0xd0] */
  esi = R32((uint32_t)(ebx + 0xd0u));
/* 782725: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782727: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782728: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78272b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 782732: je 0x782745 */
  if (zf) goto L_782745;
L_782734: /* 782734: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 782739: mov ecx, esi */
  ecx = esi;
/* 78273b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x782741u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 782741: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782743: jne 0x78274c */
  if (!zf) goto L_78274c;
L_782745: /* 782745: push 0xac7388 */
  { uint32_t v = 0xac7388u; esp -= 4; W32(esp, v); }
/* 78274a: jmp 0x782765 */
  goto L_782765;
L_78274c: /* 78274c: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 78274e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78274f: mov ecx, esi */
  ecx = esi;
/* 782751: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x782757u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 782757: mov esi, eax */
  esi = eax;
/* 782759: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78275b: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 78275e: jne 0x782789 */
  if (!zf) goto L_782789;
L_782760: /* 782760: push 0xac73a4 */
  { uint32_t v = 0xac73a4u; esp -= 4; W32(esp, v); }
L_782765: /* 782765: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 78276a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78276c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_78276d: /* 78276d: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x782773u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 782773: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_782776: /* 782776: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 782779: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78277a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78277b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 782782: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 782783: mov esp, ebp */
  esp = ebp;
/* 782785: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 782786: ret 4 */
  esp += 8; SPILL(); return;
L_782789: /* 782789: mov edi, dword ptr [ebx + 0x30c] */
  edi = R32((uint32_t)(ebx + 0x30cu));
/* 78278f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782791: je 0x7827a4 */
  if (zf) goto L_7827a4;
L_782793: /* 782793: push 0xb1f868 */
  { uint32_t v = 0xb1f868u; esp -= 4; W32(esp, v); }
/* 782798: mov ecx, edi */
  ecx = edi;
/* 78279a: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x7827a0u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 7827a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7827a2: jne 0x7827b4 */
  if (!zf) goto L_7827b4;
L_7827a4: /* 7827a4: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 7827aa: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 7827ac: push 0xac73d8 */
  { uint32_t v = 0xac73d8u; esp -= 4; W32(esp, v); }
/* 7827b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7827b2: jmp 0x78276d */
  goto L_78276d;
L_7827b4: /* 7827b4: mov eax, dword ptr [ebx + 0x16c] */
  eax = R32((uint32_t)(ebx + 0x16cu));
/* 7827ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7827bc: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 7827c3: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 7827ca: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 7827d1: je 0x7827f9 */
  if (zf) goto L_7827f9;
L_7827d3: /* 7827d3: add eax, 0x3c4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7827d8: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 7827da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7827dd: mov ecx, esp */
  ecx = esp;
/* 7827df: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 7827e1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 7827e4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 7827e7: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 7827ea: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 7827ed: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 7827f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7827f1: call 0x6c882d */
  esp -= 4; W32(esp, 0x7827f6u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 7827f6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7827f9: /* 7827f9: mov eax, dword ptr [ebx + 0xb0] */
  eax = R32((uint32_t)(ebx + 0xb0u));
/* 7827ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782801: mov edx, dword ptr [edi + 0x88] */
  edx = R32((uint32_t)(edi + 0x88u));
/* 782807: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 78280a: je 0x782818 */
  if (zf) goto L_782818;
L_78280c: /* 78280c: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 78280f: fmul dword ptr [eax + 0x400] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x400u)));
/* 782815: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
L_782818: /* 782818: mov ecx, dword ptr [esi + 0x328] */
  ecx = R32((uint32_t)(esi + 0x328u));
L_78281e: /* 78281e: cmp ecx, dword ptr [esi + 0x32c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 782824: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 782827: jg 0x782776 */
  if ((!zf && sf == of)) goto L_782776;
L_78282d: /* 78282d: mov eax, dword ptr [esi + 0x2dc] */
  eax = R32((uint32_t)(esi + 0x2dcu));
/* 782833: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 782836: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782838: je 0x7828dd */
  if (zf) goto L_7828dd;
L_78283e: /* 78283e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78283f: call 0x925ce0 */
  esp -= 4; W32(esp, 0x782844u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 782844: mov esi, eax */
  esi = eax;
/* 782846: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 782847: call 0x90e1a0 */
  esp -= 4; W32(esp, 0x78284cu); SPILL(); f_90e1a0(); if (g_unwind) return; RELOAD();
/* 78284c: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 78284f: mov ecx, dword ptr [edi + 0x5c] */
  ecx = R32((uint32_t)(edi + 0x5cu));
/* 782852: mov eax, dword ptr [ebx + 0x16c] */
  eax = R32((uint32_t)(ebx + 0x16cu));
/* 782858: mov edx, dword ptr [edi + 0x60] */
  edx = R32((uint32_t)(edi + 0x60u));
/* 78285b: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 78285e: test byte ptr [eax + 0x410], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x410u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 782865: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 78286c: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 78286f: je 0x78288f */
  if (zf) goto L_78288f;
L_782871: /* 782871: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 782874: mov ecx, dword ptr [edi + 0x64] */
  ecx = R32((uint32_t)(edi + 0x64u));
/* 782877: fadd dword ptr [eax + 0x428] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x428u)));
/* 78287d: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 782880: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 782883: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 782886: fadd dword ptr [eax + 0x42c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x42cu)));
/* 78288c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
L_78288f: /* 78288f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 782892: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782893: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 782894: call 0x90ea70 */
  esp -= 4; W32(esp, 0x782899u); SPILL(); f_90ea70(); if (g_unwind) return; RELOAD();
/* 782899: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78289c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78289d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78289e: call 0x90ea90 */
  esp -= 4; W32(esp, 0x7828a3u); SPILL(); f_90ea90(); if (g_unwind) return; RELOAD();
/* 7828a3: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7828a6: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7828a9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7828ac: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 7828b2: fsub dword ptr [ebp - 0x20] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 7828b5: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 7828b8: fmul dword ptr [ebp - 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 7828bb: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 7828be: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 7828c2: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 7828c5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 7828c7: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 7828cb: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 7828ce: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 7828d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7828d2: call 0x90f380 */
  esp -= 4; W32(esp, 0x7828d7u); SPILL(); f_90f380(); if (g_unwind) return; RELOAD();
/* 7828d7: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7828da: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
L_7828dd: /* 7828dd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 7828de: jmp 0x78281e */
  goto L_78281e;
}

void f_7828e3(void) {
  LOAD_REGS();
L_7828e3: /* 7828e3: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7828e6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7828eb: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
/* 7828ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7828ef: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 7828f2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7828f7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7828f7(); return;
}

void f_7828f7(void) {
  LOAD_REGS();
L_7828f7: /* 7828f7: push 0xa094a4 */
  { uint32_t v = 0xa094a4u; esp -= 4; W32(esp, v); }
/* 7828fc: push 0xac7450 */
  { uint32_t v = 0xac7450u; esp -= 4; W32(esp, v); }
/* 782901: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x782907u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 782907: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78290a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78290c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78290e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x782913u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_782913: guest_badaddr(0x782913); return;
}

void f_7829b0(void) {
  LOAD_REGS();
L_7829b0: /* 7829b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7829b1: mov ebp, esp */
  ebp = esp;
/* 7829b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7829b5: push 0x9cc97c */
  { uint32_t v = 0x9cc97cu; esp -= 4; W32(esp, v); }
/* 7829ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7829c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7829c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7829c8: sub esp, 0x30c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7829ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7829cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7829d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7829d1: mov edi, ecx */
  edi = ecx;
/* 7829d3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7829d6: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 7829d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7829db: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 7829e1: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 7829e8: call dword ptr [0xcfa260] */
  esp -= 4; W32(esp, 0x7829eeu); SPILL(); f_4e2ffe(); if (g_unwind) return; /* Core!??0FBox@@QAE@H@Z */ RELOAD();
/* 7829ee: mov ebx, dword ptr [edi + 0xd0] */
  ebx = R32((uint32_t)(edi + 0xd0u));
/* 7829f4: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7829f6: mov dword ptr [ebp - 0x54], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x3f800000u);
/* 7829fd: mov dword ptr [ebp - 0x50], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x3f800000u);
/* 782a04: mov dword ptr [ebp - 0x4c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x3f800000u);
/* 782a0b: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 782a0e: je 0x782a21 */
  if (zf) goto L_782a21;
L_782a10: /* 782a10: push 0xce2798 */
  { uint32_t v = 0xce2798u; esp -= 4; W32(esp, v); }
/* 782a15: mov ecx, ebx */
  ecx = ebx;
/* 782a17: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x782a1du); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 782a1d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782a1f: jne 0x782a28 */
  if (!zf) goto L_782a28;
L_782a21: /* 782a21: push 0xac7458 */
  { uint32_t v = 0xac7458u; esp -= 4; W32(esp, v); }
/* 782a26: jmp 0x782a3e */
  goto L_782a3e;
L_782a28: /* 782a28: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 782a2a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782a2b: mov ecx, ebx */
  ecx = ebx;
/* 782a2d: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x782a33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 782a33: mov esi, eax */
  esi = eax;
/* 782a35: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782a37: jne 0x782a70 */
  if (!zf) goto L_782a70;
L_782a39: /* 782a39: push 0xac74a8 */
  { uint32_t v = 0xac74a8u; esp -= 4; W32(esp, v); }
L_782a3e: /* 782a3e: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 782a43: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 782a45: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782a46: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x782a4cu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 782a4c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_782a4f: /* 782a4f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_782a53: /* 782a53: lea ecx, [ebp - 0x1f8] */
  ecx = (uint32_t)(ebp + 0xfffffe08u);
/* 782a59: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x782a5fu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 782a5f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 782a62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 782a63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 782a64: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 782a6b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 782a6c: mov esp, ebp */
  esp = ebp;
/* 782a6e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 782a6f: ret  */
  esp += 4; SPILL(); return;
L_782a70: /* 782a70: fld dword ptr [edi + 0x284] */
  { double v = F32((uint32_t)(edi + 0x284u)); FPUSH(v); }
/* 782a76: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 782a79: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 782a7b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782a7c: fmul dword ptr [ebx + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x80u)));
/* 782a82: lea eax, [ebp - 0x124] */
  eax = (uint32_t)(ebp + 0xfffffedcu);
/* 782a88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782a89: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 782a8c: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 782a8f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 782a91: fmul dword ptr [ebx + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x7cu)));
/* 782a94: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 782a97: fmul dword ptr [ebx + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x78u)));
/* 782a9a: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 782aa0: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 782aa3: fmul dword ptr [edi + 0x290] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x290u)));
/* 782aa9: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 782aac: fmul dword ptr [edi + 0x28c] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x28cu)));
/* 782ab2: fld dword ptr [ebp - 0x94] */
  { double v = F32((uint32_t)(ebp + 0xffffff6cu)); FPUSH(v); }
/* 782ab8: fmul dword ptr [edi + 0x288] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x288u)));
/* 782abe: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 782ac1: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 782ac4: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 782ac7: call dword ptr [0xcfa570] */
  esp -= 4; W32(esp, 0x782acdu); SPILL(); f_4e19a1(); if (g_unwind) return; /* Core!??_0FVector@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 782acd: fld dword ptr [0xa093dc] */
  { double v = F32((uint32_t)(0xa093dcu)); FPUSH(v); }
/* 782ad3: mov ebx, dword ptr [esi + 0x328] */
  ebx = R32((uint32_t)(esi + 0x328u));
/* 782ad9: fmul dword ptr [0xa095c8] */
  ST0 = ST0 * (F32((uint32_t)(0xa095c8u)));
/* 782adf: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 782ae3: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* 782aea: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 782aed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_782af0: /* 782af0: cmp ebx, dword ptr [esi + 0x32c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x32cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 782af6: jg 0x78316c */
  if ((!zf && sf == of)) goto L_78316c;
L_782afc: /* 782afc: mov ecx, dword ptr [esi + 0x2dc] */
  ecx = R32((uint32_t)(esi + 0x2dcu));
/* 782b02: cmp dword ptr [ecx + ebx*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + ebx*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 782b06: je 0x7830c7 */
  if (zf) goto L_7830c7;
L_782b0c: /* 782b0c: mov edx, ecx */
  edx = ecx;
/* 782b0e: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 782b11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782b12: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 782b16: call 0x925ce0 */
  esp -= 4; W32(esp, 0x782b1bu); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 782b1b: lea ecx, [ebp - 0x2b8] */
  ecx = (uint32_t)(ebp + 0xfffffd48u);
/* 782b21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782b22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782b23: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 782b26: call 0x90e0f0 */
  esp -= 4; W32(esp, 0x782b2bu); SPILL(); f_90e0f0(); if (g_unwind) return; RELOAD();
/* 782b2b: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 782b2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782b30: jne 0x782be7 */
  if (!zf) goto L_782be7;
L_782b36: /* 782b36: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 782b39: mov eax, dword ptr [edx + 0x1dc] */
  eax = R32((uint32_t)(edx + 0x1dcu));
/* 782b3f: mov edx, dword ptr [esi + 0x2dc] */
  edx = R32((uint32_t)(esi + 0x2dcu));
/* 782b45: mov ecx, ebx */
  ecx = ebx;
/* 782b47: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 782b4a: lea edi, [ecx + eax] */
  edi = (uint32_t)(ecx + eax);
/* 782b4d: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 782b50: mov edx, dword ptr [edx + ecx*4] */
  edx = R32((uint32_t)(edx + ecx*4));
/* 782b53: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782b55: jne 0x782bcf */
  if (!zf) goto L_782bcf;
L_782b57: /* 782b57: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 782b5a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 782b5c: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x782b62u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 782b62: mov ecx, edi */
  ecx = edi;
/* 782b64: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 782b67: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x782b6du); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 782b6d: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 782b70: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 782b76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782b77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782b78: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 782b7a: push 0xac7510 */
  { uint32_t v = 0xac7510u; esp -= 4; W32(esp, v); }
/* 782b7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782b80: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x782b86u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 782b86: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 782b89: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 782b8c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 782b90: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 782b91: jmp 0x782af0 */
  goto L_782af0;
L_782bcf: /* 782bcf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782bd0: call 0x925ce0 */
  esp -= 4; W32(esp, 0x782bd5u); SPILL(); f_925ce0(); if (g_unwind) return; RELOAD();
/* 782bd5: lea ecx, [ebp - 0xe4] */
  ecx = (uint32_t)(ebp + 0xffffff1cu);
/* 782bdb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782bdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782bdd: call 0x90e0f0 */
  esp -= 4; W32(esp, 0x782be2u); SPILL(); f_90e0f0(); if (g_unwind) return; RELOAD();
/* 782be2: jmp 0x782c87 */
  goto L_782c87;
L_782be7: /* 782be7: mov dword ptr [ebp - 0xe4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff1cu), 0x3f800000u);
/* 782bf1: mov dword ptr [ebp - 0xe0], 0 */
  W32((uint32_t)(ebp + 0xffffff20u), 0x0u);
/* 782bfb: mov dword ptr [ebp - 0xdc], 0 */
  W32((uint32_t)(ebp + 0xffffff24u), 0x0u);
/* 782c05: mov dword ptr [ebp - 0xd8], 0 */
  W32((uint32_t)(ebp + 0xffffff28u), 0x0u);
/* 782c0f: mov dword ptr [ebp - 0xd4], 0 */
  W32((uint32_t)(ebp + 0xffffff2cu), 0x0u);
/* 782c19: mov dword ptr [ebp - 0xd0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x3f800000u);
/* 782c23: mov dword ptr [ebp - 0xcc], 0 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x0u);
/* 782c2d: mov dword ptr [ebp - 0xc8], 0 */
  W32((uint32_t)(ebp + 0xffffff38u), 0x0u);
/* 782c37: mov dword ptr [ebp - 0xc4], 0 */
  W32((uint32_t)(ebp + 0xffffff3cu), 0x0u);
/* 782c41: mov dword ptr [ebp - 0xc0], 0 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x0u);
/* 782c4b: mov dword ptr [ebp - 0xbc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x3f800000u);
/* 782c55: mov dword ptr [ebp - 0xb8], 0 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x0u);
/* 782c5f: mov dword ptr [ebp - 0xb4], 0 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x0u);
/* 782c69: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 782c73: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 782c7d: mov dword ptr [ebp - 0xa8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x3f800000u);
L_782c87: /* 782c87: lea ecx, [ebp - 0x160] */
  ecx = (uint32_t)(ebp + 0xfffffea0u);
/* 782c8d: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 782c94: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x782c9au); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 782c9a: lea eax, [ebp - 0xe4] */
  eax = (uint32_t)(ebp + 0xffffff1cu);
/* 782ca0: lea ecx, [ebp - 0x238] */
  ecx = (uint32_t)(ebp + 0xfffffdc8u);
/* 782ca6: call 0x781cd0 */
  esp -= 4; W32(esp, 0x782cabu); SPILL(); f_781cd0(); if (g_unwind) return; RELOAD();
/* 782cab: lea edx, [ebp - 0x238] */
  edx = (uint32_t)(ebp + 0xfffffdc8u);
/* 782cb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782cb2: call 0x974350 */
  esp -= 4; W32(esp, 0x782cb7u); SPILL(); f_974350(); if (g_unwind) return; RELOAD();
/* 782cb7: lea ecx, [ebp - 0x238] */
  ecx = (uint32_t)(ebp + 0xfffffdc8u);
/* 782cbd: lea eax, [ebp - 0x2b8] */
  eax = (uint32_t)(ebp + 0xfffffd48u);
/* 782cc3: lea edx, [ebp - 0x278] */
  edx = (uint32_t)(ebp + 0xfffffd88u);
/* 782cc9: call 0x781d50 */
  esp -= 4; W32(esp, 0x782cceu); SPILL(); f_781d50(); if (g_unwind) return; RELOAD();
/* 782cce: lea eax, [ebp - 0x278] */
  eax = (uint32_t)(ebp + 0xfffffd88u);
/* 782cd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782cd5: lea ecx, [ebp - 0x160] */
  ecx = (uint32_t)(ebp + 0xfffffea0u);
/* 782cdb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782cdc: call 0x6c759a */
  esp -= 4; W32(esp, 0x782ce1u); SPILL(); f_6c759a(); if (g_unwind) return; RELOAD();
/* 782ce1: fld dword ptr [ebp - 0x158] */
  { double v = F32((uint32_t)(ebp + 0xfffffea8u)); FPUSH(v); }
/* 782ce7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 782cea: xor ecx, ecx */
  ecx = 0;
/* 782cec: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 782cef: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 782cf1: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 782cf5: je 0x782f0a */
  if (zf) goto L_782f0a;
L_782cfb: /* 782cfb: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 782cfe: fsub dword ptr [eax + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x178u)));
/* 782d04: mov edi, dword ptr [eax + 0xb4] */
  edi = R32((uint32_t)(eax + 0xb4u));
/* 782d0a: fld dword ptr [ebp - 0x15c] */
  { double v = F32((uint32_t)(ebp + 0xfffffea4u)); FPUSH(v); }
/* 782d10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782d11: fsub dword ptr [eax + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x174u)));
/* 782d17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782d18: fld dword ptr [ebp - 0x160] */
  { double v = F32((uint32_t)(ebp + 0xfffffea0u)); FPUSH(v); }
/* 782d1e: mov dword ptr [ebp - 0x114], ecx */
  W32((uint32_t)(ebp + 0xfffffeecu), ecx);
/* 782d24: fsub dword ptr [eax + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x170u)));
/* 782d2a: mov dword ptr [ebp - 0x110], ecx */
  W32((uint32_t)(ebp + 0xfffffef0u), ecx);
/* 782d30: mov dword ptr [ebp - 0x10c], ecx */
  W32((uint32_t)(ebp + 0xfffffef4u), ecx);
/* 782d36: mov dword ptr [ebp - 0x108], ecx */
  W32((uint32_t)(ebp + 0xfffffef8u), ecx);
/* 782d3c: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 782d3f: mov dword ptr [ebp - 0x104], ecx */
  W32((uint32_t)(ebp + 0xfffffefcu), ecx);
/* 782d45: mov dword ptr [ebp - 0x100], ecx */
  W32((uint32_t)(ebp + 0xffffff00u), ecx);
/* 782d4b: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 782d4e: mov dword ptr [ebp - 0xfc], ecx */
  W32((uint32_t)(ebp + 0xffffff04u), ecx);
/* 782d54: mov dword ptr [ebp - 0xf8], ecx */
  W32((uint32_t)(ebp + 0xffffff08u), ecx);
/* 782d5a: mov dword ptr [ebp - 0xf4], ecx */
  W32((uint32_t)(ebp + 0xffffff0cu), ecx);
/* 782d60: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 782d63: mov dword ptr [ebp - 0xe8], ecx */
  W32((uint32_t)(ebp + 0xffffff18u), ecx);
/* 782d69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782d6a: lea ecx, [ebp - 0x1b8] */
  ecx = (uint32_t)(ebp + 0xfffffe48u);
/* 782d70: mov dword ptr [ebp - 0xf0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x3f800000u);
/* 782d7a: mov dword ptr [ebp - 0xec], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff14u), 0xffffffffu);
/* 782d84: mov dword ptr [ebp - 0x80], edi */
  W32((uint32_t)(ebp + 0xffffff80u), edi);
/* 782d87: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x782d8du); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 782d8d: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 782d8f: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 782d91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782d93: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782d95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782d97: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782d99: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 782d9f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782da0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 782da3: mov ecx, esp */
  ecx = esp;
/* 782da5: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 782da7: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 782daa: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 782dad: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 782db0: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 782db3: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 782db6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 782db9: mov ecx, esp */
  ecx = esp;
/* 782dbb: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 782dbd: mov eax, dword ptr [ebp - 0x5c] */
  eax = R32((uint32_t)(ebp + 0xffffffa4u));
/* 782dc0: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 782dc3: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 782dc6: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 782dc9: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 782dcc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782dcd: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 782dd0: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x782dd6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 782dd6: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 782dd9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782ddb: je 0x782a4f */
  if (zf) goto L_782a4f;
L_782de1: /* 782de1: mov ecx, dword ptr [eax + 0x80] */
  ecx = R32((uint32_t)(eax + 0x80u));
/* 782de7: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 782dea: jne 0x782a4f */
  if (!zf) goto L_782a4f;
L_782df0: /* 782df0: mov eax, dword ptr [esi + 0x2f4] */
  eax = R32((uint32_t)(esi + 0x2f4u));
/* 782df6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782df8: je 0x782a4f */
  if (zf) goto L_782a4f;
L_782dfe: /* 782dfe: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 782e01: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x782e07u); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 782e07: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 782e09: jne 0x782e31 */
  if (!zf) goto L_782e31;
L_782e0b: /* 782e0b: lea edx, [ebp - 0x1ac] */
  edx = (uint32_t)(ebp + 0xfffffe54u);
/* 782e11: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782e12: lea ecx, [ebp - 0x160] */
  ecx = (uint32_t)(ebp + 0xfffffea0u);
/* 782e18: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x782e1eu); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 782e1e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 782e20: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 782e23: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 782e26: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 782e29: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 782e2c: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 782e2f: jmp 0x782e6e */
  goto L_782e6e;
L_782e31: /* 782e31: lea ecx, [ebp - 0x160] */
  ecx = (uint32_t)(ebp + 0xfffffea0u);
/* 782e37: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782e38: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 782e3e: lea edx, [ebp - 0x318] */
  edx = (uint32_t)(ebp + 0xfffffce8u);
/* 782e44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782e45: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 782e48: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x782e4eu); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 782e4e: lea ecx, [ebp - 0x1a0] */
  ecx = (uint32_t)(ebp + 0xfffffe60u);
/* 782e54: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782e55: mov ecx, eax */
  ecx = eax;
/* 782e57: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x782e5du); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 782e5d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 782e5f: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 782e62: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 782e65: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 782e68: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 782e6b: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
L_782e6e: /* 782e6e: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 782e71: mov edx, dword ptr [ecx + 0x1dc] */
  edx = R32((uint32_t)(ecx + 0x1dcu));
/* 782e77: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 782e7c: mov eax, ebx */
  eax = ebx;
/* 782e7e: shl eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 782e81: mov edi, dword ptr [eax + edx] */
  edi = R32((uint32_t)(eax + edx));
/* 782e84: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 782e87: mov eax, esp */
  eax = esp;
/* 782e89: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 782e90: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 782e93: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 782e95: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 782e9c: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 782e9f: mov dword ptr [ebp - 0x74], 0 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x0u);
/* 782ea6: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 782ea9: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 782eac: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 782eaf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782eb0: mov ecx, esi */
  ecx = esi;
/* 782eb2: call 0x6c291e */
  esp -= 4; W32(esp, 0x782eb7u); SPILL(); f_6c291e(); if (g_unwind) return; RELOAD();
/* 782eb7: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 782eba: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 782ebd: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 782ec2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782ec4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 782ec7: mov edx, esp */
  edx = esp;
/* 782ec9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 782ecb: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 782ece: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 782ed1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782ed2: mov ecx, esi */
  ecx = esi;
/* 782ed4: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 782ed7: call 0x6c7a22 */
  esp -= 4; W32(esp, 0x782edcu); SPILL(); f_6c7a22(); if (g_unwind) return; RELOAD();
/* 782edc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 782edf: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 782ee5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782ee6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782ee7: call 0x90e2b0 */
  esp -= 4; W32(esp, 0x782eecu); SPILL(); f_90e2b0(); if (g_unwind) return; RELOAD();
/* 782eec: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 782eef: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 782ef5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782ef6: add ecx, 0x188 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 782efc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782efd: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x782f02u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 782f02: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 782f05: jmp 0x782fb6 */
  goto L_782fb6;
L_782f0a: /* 782f0a: fmul dword ptr [ebp - 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb4u)));
/* 782f0d: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 782f13: fld dword ptr [ebp - 0x15c] */
  { double v = F32((uint32_t)(ebp + 0xfffffea4u)); FPUSH(v); }
/* 782f19: lea edx, [ebp - 0x160] */
  edx = (uint32_t)(ebp + 0xfffffea0u);
/* 782f1f: fmul dword ptr [ebp - 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb0u)));
/* 782f22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782f23: fld dword ptr [ebp - 0x160] */
  { double v = F32((uint32_t)(ebp + 0xfffffea0u)); FPUSH(v); }
/* 782f29: lea eax, [ebp - 0x2e8] */
  eax = (uint32_t)(ebp + 0xfffffd18u);
/* 782f2f: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 782f32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782f33: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 782f36: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 782f39: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 782f3c: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 782f3f: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x782f45u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 782f45: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* 782f4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782f4c: mov ecx, eax */
  ecx = eax;
/* 782f4e: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x782f54u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 782f54: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 782f57: mov ecx, dword ptr [eax + 0x1dc] */
  ecx = R32((uint32_t)(eax + 0x1dcu));
/* 782f5d: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 782f60: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 782f65: mov edx, ebx */
  edx = ebx;
/* 782f67: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 782f6a: mov edi, dword ptr [edx + ecx] */
  edi = R32((uint32_t)(edx + ecx));
/* 782f6d: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 782f70: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 782f73: mov edx, esp */
  edx = esp;
/* 782f75: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 782f77: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 782f7a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 782f7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782f7e: mov ecx, esi */
  ecx = esi;
/* 782f80: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 782f83: call 0x6c291e */
  esp -= 4; W32(esp, 0x782f88u); SPILL(); f_6c291e(); if (g_unwind) return; RELOAD();
/* 782f88: mov edx, dword ptr [ebp - 0xa4] */
  edx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 782f8e: mov eax, dword ptr [ebp - 0xa0] */
  eax = R32((uint32_t)(ebp + 0xffffff60u));
/* 782f94: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 782f99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 782f9b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 782f9e: mov ecx, esp */
  ecx = esp;
/* 782fa0: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 782fa2: mov edx, dword ptr [ebp - 0x9c] */
  edx = R32((uint32_t)(ebp + 0xffffff64u));
/* 782fa8: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 782fab: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 782fae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782faf: mov ecx, esi */
  ecx = esi;
/* 782fb1: call 0x6c7a22 */
  esp -= 4; W32(esp, 0x782fb6u); SPILL(); f_6c7a22(); if (g_unwind) return; RELOAD();
L_782fb6: /* 782fb6: mov eax, dword ptr [esi + 0x2dc] */
  eax = R32((uint32_t)(esi + 0x2dcu));
/* 782fbc: mov edi, dword ptr [eax + ebx*4] */
  edi = R32((uint32_t)(eax + ebx*4));
/* 782fbf: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 782fc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782fc7: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 782fcb: call 0x9287f0 */
  esp -= 4; W32(esp, 0x782fd0u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 782fd0: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 782fd3: je 0x783041 */
  if (zf) goto L_783041;
L_782fd5: /* 782fd5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782fd6: call 0x928630 */
  esp -= 4; W32(esp, 0x782fdbu); SPILL(); f_928630(); if (g_unwind) return; RELOAD();
/* 782fdb: lea ecx, [ebp - 0x124] */
  ecx = (uint32_t)(ebp + 0xfffffedcu);
/* 782fe1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782fe2: lea edx, [ebp - 0x178] */
  edx = (uint32_t)(ebp + 0xfffffe88u);
/* 782fe8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 782fe9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 782fea: call 0x928710 */
  esp -= 4; W32(esp, 0x782fefu); SPILL(); f_928710(); if (g_unwind) return; RELOAD();
/* 782fef: lea eax, [ebp - 0x178] */
  eax = (uint32_t)(ebp + 0xfffffe88u);
/* 782ff5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 782ff6: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 782ffc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 782ffd: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x783002u); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 783002: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 783005: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 78300b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78300c: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 783012: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x783018u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
/* 783018: lea eax, [ebp - 0x124] */
  eax = (uint32_t)(ebp + 0xfffffedcu);
/* 78301e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78301f: lea ecx, [ebp - 0x94] */
  ecx = (uint32_t)(ebp + 0xffffff6cu);
/* 783025: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 783026: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x78302bu); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 78302b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78302e: lea edx, [ebp - 0x94] */
  edx = (uint32_t)(ebp + 0xffffff6cu);
/* 783034: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783035: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* 78303b: call dword ptr [0xcfa560] */
  esp -= 4; W32(esp, 0x783041u); SPILL(); f_4e1b09(); if (g_unwind) return; /* Core!??YFBox@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
L_783041: /* 783041: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 783044: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 783047: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 783048: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783049: call 0x90e2b0 */
  esp -= 4; W32(esp, 0x78304eu); SPILL(); f_90e2b0(); if (g_unwind) return; RELOAD();
/* 78304e: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 783051: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 783054: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 783057: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 78305a: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 78305c: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 78305e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 783060: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 783062: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 783064: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 783066: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 783068: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 78306a: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 78306d: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 783070: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 783072: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 783074: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 783076: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 783079: jne 0x7830b2 */
  if (!zf) goto L_7830b2;
L_78307b: /* 78307b: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 78307e: call 0x781b80 */
  esp -= 4; W32(esp, 0x783083u); SPILL(); f_781b80(); if (g_unwind) return; RELOAD();
/* 783083: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 783085: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 783088: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 78308b: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 78308e: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 783091: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 783094: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 783097: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 78309a: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 78309d: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7830a0: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7830a3: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7830a6: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 7830a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7830aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7830ab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7830ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7830ad: call 0x90ea10 */
  esp -= 4; W32(esp, 0x7830b2u); SPILL(); f_90ea10(); if (g_unwind) return; RELOAD();
L_7830b2: /* 7830b2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7830b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7830b7: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7830be: je 0x7830c7 */
  if (zf) goto L_7830c7;
L_7830c0: /* 7830c0: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_7830c7: /* 7830c7: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7830ca: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 7830cb: jmp 0x782af0 */
  goto L_782af0;
L_78316c: /* 78316c: test byte ptr [edi + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 783173: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 78317a: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 78317e: je 0x7831c4 */
  if (zf) goto L_7831c4;
L_783180: /* 783180: mov eax, dword ptr [edi + 0xb4] */
  eax = R32((uint32_t)(edi + 0xb4u));
/* 783186: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783188: je 0x7831c4 */
  if (zf) goto L_7831c4;
L_78318a: /* 78318a: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 783190: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 783192: je 0x7831c4 */
  if (zf) goto L_7831c4;
L_783194: /* 783194: mov eax, ecx */
  eax = ecx;
/* 783196: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 783198: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 783199: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x78319cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78319c: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78319f: lea edi, [esi + 0x2fc] */
  edi = (uint32_t)(esi + 0x2fcu);
/* 7831a5: mov ecx, 7 */
  ecx = 0x7u;
/* 7831aa: lea esi, [ebp - 0x194] */
  esi = (uint32_t)(ebp + 0xfffffe6cu);
/* 7831b0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7831b2: mov eax, dword ptr [edx + 0xb4] */
  eax = R32((uint32_t)(edx + 0xb4u));
/* 7831b8: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 7831be: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 7831c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7831c1: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x7831c4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7831c4: /* 7831c4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7831cb: jmp 0x782a53 */
  goto L_782a53;
}
