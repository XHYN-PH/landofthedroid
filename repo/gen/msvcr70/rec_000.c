#include "recomp.h"
#include "rec_mod.h"

void f_401000(void) {
  LOAD_REGS();
L_401000: /* 401000: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 401002: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 401003: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 401009: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40100a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 40100e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 401015: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* 401019: lea ebp, [esp + 0xc] */
  ebp = (uint32_t)(esp + 0xcu);
/* 40101d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40101e: ret  */
  esp += 4; SPILL(); return;
}

void f_40101f(void) {
  LOAD_REGS();
L_40101f: /* 40101f: push 0x406ebd */
  { uint32_t v = 0x406ebdu; esp -= 4; W32(esp, v); }
/* 401024: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 40102a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40102b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 40102f: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 401033: lea ebp, [esp + 0x10] */
  ebp = (uint32_t)(esp + 0x10u);
/* 401037: sub esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 401039: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40103a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40103b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40103c: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 40103f: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 401042: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 401043: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 401046: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 40104d: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 401050: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 401053: mov dword ptr fs:[0], eax */
  W32((uint32_t)(FS_BASE + 0x0u), eax);
/* 401059: ret  */
  esp += 4; SPILL(); return;
}

void f_40105a(void) {
  LOAD_REGS();
L_40105a: /* 40105a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 40105d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 401064: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401065: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 401066: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 401067: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 401068: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 401069: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40106a: ret  */
  esp += 4; SPILL(); return;
}

void f_40106b(void) {
  LOAD_REGS();
L_40106b: /* 40106b: cmp dword ptr [esp + 4], -0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 401070: ja 0x401085 */
  if ((!cf && !zf)) goto L_401085;
L_401072: /* 401072: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 401076: call 0x401089 */
  esp -= 4; W32(esp, 0x40107bu); SPILL(); f_401089(); if (g_unwind) return; RELOAD();
/* 40107b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40107d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40107e: je 0x40bfe7 */
  if (zf) goto L_40bfe7;
L_401084: /* 401084: ret  */
  esp += 4; SPILL(); return;
L_401085: /* 401085: xor eax, eax */
  eax = 0;
/* 401087: jmp 0x401084 */
  goto L_401084;
L_40bfe7: /* 40bfe7: cmp dword ptr [esp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40bfeb: je 0x401084 */
  if (zf) goto L_401084;
L_40bff1: /* 40bff1: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 40bff5: call 0x40f297 */
  esp -= 4; W32(esp, 0x40bffau); SPILL(); f_40f297(); if (g_unwind) return; RELOAD();
/* 40bffa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40bffc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bffd: jne 0x401072 */
  if (!zf) goto L_401072;
L_40c003: /* 40c003: jmp 0x401085 */
  goto L_401085;
}

void f_401089(void) {
  LOAD_REGS();
L_401089: /* 401089: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 40108b: push 0x43df98 */
  { uint32_t v = 0x43df98u; esp -= 4; W32(esp, v); }
/* 401090: call 0x40101f */
  esp -= 4; W32(esp, 0x401095u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 401095: mov eax, dword ptr [0x44a84c] */
  eax = R32((uint32_t)(0x44a84cu));
/* 40109a: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40109d: je 0x40bf3e */
  if (zf) goto L_40bf3e;
L_4010a3: /* 4010a3: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4010a6: je 0x40bf7d */
  if (zf) goto L_40bf7d;
L_4010ac: /* 4010ac: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_4010af: /* 4010af: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4010b1: je 0x40bfd6 */
  if (zf) goto L_40bfd6;
L_4010b7: /* 4010b7: cmp dword ptr [0x44a84c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44a84cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4010be: jne 0x40bfdc */
  if (!zf) goto L_40bfdc;
L_4010c4: /* 4010c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4010c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4010c7: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 4010cd: call dword ptr [0x43907c] */
  esp -= 4; W32(esp, 0x4010d3u); SPILL(); call_ind(R32(0x43907cu)); if (g_unwind) return; /* KERNEL32!HeapAlloc */ RELOAD();
L_4010d3: /* 4010d3: call 0x40105a */
  esp -= 4; W32(esp, 0x4010d8u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4010d8: ret  */
  esp += 4; SPILL(); return;
L_4010d9: /* 4010d9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4010dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4010de: je 0x4010af */
  if (zf) goto L_4010af;
L_4010e0: /* 4010e0: jmp 0x4010d3 */
  goto L_4010d3;
L_4010e2: /* 4010e2: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 4010e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4010e7: jne 0x4010d3 */
  if (!zf) goto L_4010d3;
L_4010e9: /* 4010e9: jmp 0x4010c4 */
  goto L_4010c4;
L_40bf3e: /* 40bf3e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 40bf41: cmp esi, dword ptr [0x44f678] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44f678u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40bf47: ja 0x4010af */
  if ((!cf && !zf)) goto L_4010af;
L_40bf4d: /* 40bf4d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40bf4f: call 0x4011b7 */
  esp -= 4; W32(esp, 0x40bf54u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 40bf54: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bf55: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40bf59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40bf5a: call 0x41170d */
  esp -= 4; W32(esp, 0x40bf5fu); SPILL(); f_41170d(); if (g_unwind) return; RELOAD();
/* 40bf5f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bf60: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 40bf63: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40bf67: call 0x40bf74 */
  esp -= 4; W32(esp, 0x40bf6cu); SPILL(); f_40bf74(); if (g_unwind) return; RELOAD();
/* 40bf6c: jmp 0x4010d9 */
  goto L_4010d9;
L_40bf7d: /* 40bf7d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40bf80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40bf82: je 0x40bf8c */
  if (zf) goto L_40bf8c;
L_40bf84: /* 40bf84: lea esi, [eax + 0xf] */
  esi = (uint32_t)(eax + 0xfu);
/* 40bf87: and esi, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 40bf8a: jmp 0x40bf8f */
  goto L_40bf8f;
L_40bf8c: /* 40bf8c: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 40bf8e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_40bf8f: /* 40bf8f: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 40bf92: cmp esi, dword ptr [0x44dca4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44dca4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40bf98: ja 0x4010c4 */
  if ((!cf && !zf)) goto L_4010c4;
L_40bf9e: /* 40bf9e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40bfa0: call 0x4011b7 */
  esp -= 4; W32(esp, 0x40bfa5u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 40bfa5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bfa6: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 40bfad: mov eax, esi */
  eax = esi;
/* 40bfaf: shr eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 40bfb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40bfb3: call 0x411a09 */
  esp -= 4; W32(esp, 0x40bfb8u); SPILL(); f_411a09(); if (g_unwind) return; RELOAD();
/* 40bfb8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bfb9: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 40bfbc: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40bfc0: call 0x40bfcd */
  esp -= 4; W32(esp, 0x40bfc5u); SPILL(); f_40bfcd(); if (g_unwind) return; RELOAD();
/* 40bfc5: jmp 0x4010e2 */
  goto L_4010e2;
L_40bfd6: /* 40bfd6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40bfd7: jmp 0x4010b7 */
  goto L_4010b7;
L_40bfdc: /* 40bfdc: add esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40bfdf: and esi, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 40bfe2: jmp 0x4010c4 */
  goto L_4010c4;
}

void f_4010eb(void) {
  LOAD_REGS();
L_4010eb: /* 4010eb: push dword ptr [0x44a854] */
  { uint32_t v = R32((uint32_t)(0x44a854u)); esp -= 4; W32(esp, v); }
/* 4010f1: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4010f5: call 0x40106b */
  esp -= 4; W32(esp, 0x4010fau); SPILL(); f_40106b(); if (g_unwind) return; RELOAD();
/* 4010fa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4010fb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4010fc: ret  */
  esp += 4; SPILL(); return;
}

void f_4010fd(void) { hle_memset(); }

void f_401156(void) {
  LOAD_REGS();
L_401156: /* 401156: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 401158: push 0x43dfb0 */
  { uint32_t v = 0x43dfb0u; esp -= 4; W32(esp, v); }
/* 40115d: call 0x40101f */
  esp -= 4; W32(esp, 0x401162u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 401162: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 401165: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401167: je 0x40118f */
  if (zf) goto L_40118f;
L_401169: /* 401169: mov eax, dword ptr [0x44a84c] */
  eax = R32((uint32_t)(0x44a84cu));
/* 40116e: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401171: je 0x40c008 */
  if (zf) goto L_40c008;
L_401177: /* 401177: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40117a: je 0x40c043 */
  if (zf) goto L_40c043;
L_401180: /* 401180: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_401181: /* 401181: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 401183: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 401189: call dword ptr [0x439080] */
  esp -= 4; W32(esp, 0x40118fu); SPILL(); call_ind(R32(0x439080u)); if (g_unwind) return; /* KERNEL32!HeapFree */ RELOAD();
L_40118f: /* 40118f: call 0x40105a */
  esp -= 4; W32(esp, 0x401194u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 401194: ret  */
  esp += 4; SPILL(); return;
L_40c008: /* 40c008: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40c00a: call 0x4011b7 */
  esp -= 4; W32(esp, 0x40c00fu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 40c00f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c010: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40c014: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40c015: call 0x410467 */
  esp -= 4; W32(esp, 0x40c01au); SPILL(); f_410467(); if (g_unwind) return; RELOAD();
/* 40c01a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c01b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 40c01e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40c020: je 0x40c02b */
  if (zf) goto L_40c02b;
L_40c022: /* 40c022: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40c023: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c024: call 0x410492 */
  esp -= 4; W32(esp, 0x40c029u); SPILL(); f_410492(); if (g_unwind) return; RELOAD();
/* 40c029: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c02a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40c02b: /* 40c02b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40c02f: call 0x40c03a */
  esp -= 4; W32(esp, 0x40c034u); SPILL(); f_40c03a(); if (g_unwind) return; RELOAD();
/* 40c034: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c038: jmp 0x40c086 */
  goto L_40c086;
L_40c043: /* 40c043: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40c045: call 0x4011b7 */
  esp -= 4; W32(esp, 0x40c04au); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 40c04a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c04b: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 40c052: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 40c055: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c056: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 40c059: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c05a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40c05b: call 0x411288 */
  esp -= 4; W32(esp, 0x40c060u); SPILL(); f_411288(); if (g_unwind) return; RELOAD();
/* 40c060: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40c063: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 40c066: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40c068: je 0x40c079 */
  if (zf) goto L_40c079;
L_40c06a: /* 40c06a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c06b: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 40c06e: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 40c071: call 0x4112de */
  esp -= 4; W32(esp, 0x40c076u); SPILL(); f_4112de(); if (g_unwind) return; RELOAD();
/* 40c076: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_40c079: /* 40c079: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40c07d: call 0x40c094 */
  esp -= 4; W32(esp, 0x40c082u); SPILL(); f_40c094(); if (g_unwind) return; RELOAD();
/* 40c082: cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_40c086: /* 40c086: jne 0x40118f */
  if (!zf) goto L_40118f;
L_40c08c: /* 40c08c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40c08f: jmp 0x401181 */
  goto L_401181;
}

void f_401195(void) {
  LOAD_REGS();
L_401195: /* 401195: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 401199: mov dx, word ptr [esp + 8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x8u))) & 0xffffu);
L_40119e: /* 40119e: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 4011a1: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 4011a4: je 0x4011af */
  if (zf) goto L_4011af;
L_4011a6: /* 4011a6: cmp cx, dx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4011a9: je 0x4011b6 */
  if (zf) goto L_4011b6;
L_4011ab: /* 4011ab: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4011ac: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4011ad: jmp 0x40119e */
  goto L_40119e;
L_4011af: /* 4011af: cmp cx, dx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4011b2: je 0x4011b6 */
  if (zf) goto L_4011b6;
L_4011b4: /* 4011b4: xor eax, eax */
  eax = 0;
L_4011b6: /* 4011b6: ret  */
  esp += 4; SPILL(); return;
}

void f_4011b7(void) {
  LOAD_REGS();
L_4011b7: /* 4011b7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4011b8: mov ebp, esp */
  ebp = esp;
/* 4011ba: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4011bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4011be: lea esi, [eax*8 + 0x44a9b8] */
  esi = (uint32_t)(eax*8 + 0x44a9b8u);
/* 4011c5: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4011c8: je 0x40bc0b */
  if (zf) goto L_40bc0b;
L_4011ce: /* 4011ce: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 4011d0: call dword ptr [0x43903c] */
  esp -= 4; W32(esp, 0x4011d6u); SPILL(); call_ind(R32(0x43903cu)); if (g_unwind) return; /* KERNEL32!EnterCriticalSection */ RELOAD();
/* 4011d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4011d7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4011d8: ret  */
  esp += 4; SPILL(); return;
L_40bc0b: /* 40bc0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40bc0c: call 0x40fa82 */
  esp -= 4; W32(esp, 0x40bc11u); SPILL(); f_40fa82(); if (g_unwind) return; RELOAD();
/* 40bc11: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40bc13: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bc14: jne 0x4011ce */
  if (!zf) goto L_4011ce;
L_40bc1a: /* 40bc1a: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 40bc1c: call 0x40f95e */
  esp -= 4; W32(esp, 0x40bc21u); SPILL(); f_40f95e(); if (g_unwind) return; RELOAD();
/* 40bc21: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bc22: jmp 0x4011ce */
  goto L_4011ce;
}

void f_4011d9(void) {
  LOAD_REGS();
L_4011d9: /* 4011d9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4011da: mov ebp, esp */
  ebp = esp;
/* 4011dc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4011df: push dword ptr [eax*8 + 0x44a9b8] */
  { uint32_t v = R32((uint32_t)(eax*8 + 0x44a9b8u)); esp -= 4; W32(esp, v); }
/* 4011e6: call dword ptr [0x439038] */
  esp -= 4; W32(esp, 0x4011ecu); SPILL(); call_ind(R32(0x439038u)); if (g_unwind) return; /* KERNEL32!LeaveCriticalSection */ RELOAD();
/* 4011ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4011ed: ret  */
  esp += 4; SPILL(); return;
}

void f_4011ee(void) {
  LOAD_REGS();
L_4011ee: /* 4011ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4011ef: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
L_4011f3: /* 4011f3: cmp esi, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4011f7: jae 0x401206 */
  if (!cf) goto L_401206;
L_4011f9: /* 4011f9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4011fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4011fd: je 0x401201 */
  if (zf) goto L_401201;
L_4011ff: /* 4011ff: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0x401201u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_401201: /* 401201: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 401204: jmp 0x4011f3 */
  goto L_4011f3;
L_401206: /* 401206: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 401207: ret  */
  esp += 4; SPILL(); return;
}

void f_401208(void) {
  LOAD_REGS();
L_401208: /* 401208: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40120a: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40120e: call 0x40106b */
  esp -= 4; W32(esp, 0x401213u); SPILL(); f_40106b(); if (g_unwind) return; RELOAD();
/* 401213: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401214: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401215: ret  */
  esp += 4; SPILL(); return;
}

void f_401216(void) {
  LOAD_REGS();
L_401216: /* 401216: jmp 0x401156 */
  SPILL(); f_401156(); return;
}

void f_401248(void) {
  LOAD_REGS();
L_401248: /* 401248: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 40124a: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 40124c: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 40124e: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 401251: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 401254: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 401257: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40125a: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 40125d: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 401260: jb 0x4012a2 */
  if (cf) goto L_4012a2;
L_401262: /* 401262: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 401264: jmp dword ptr [edx*4 + 0x40131c] */
  switch (R32((uint32_t)(edx*4 + 0x40131cu))) {
    case 0x40132cu: goto L_40132c;
    case 0x401346u: goto L_401346;
    case 0x407690u: goto L_407690;
    case 0x40769bu: goto L_40769b;
    default: guest_badjump(0x401264, R32((uint32_t)(edx*4 + 0x40131cu))); return;
  }
L_4012a2: /* 4012a2: jmp dword ptr [ecx*4 + 0x4012b0] */
  switch (R32((uint32_t)(ecx*4 + 0x4012b0u))) {
    case 0x4012d0u: goto L_4012d0;
    case 0x4012d8u: goto L_4012d8;
    case 0x4012e0u: goto L_4012e0;
    case 0x4012e8u: goto L_4012e8;
    case 0x4012f0u: goto L_4012f0;
    case 0x4012f8u: goto L_4012f8;
    case 0x401300u: goto L_401300;
    case 0x401313u: goto L_401313;
    default: guest_badjump(0x4012a2, R32((uint32_t)(ecx*4 + 0x4012b0u))); return;
  }
L_4012d0: /* 4012d0: mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xffffffe4u));
/* 4012d4: mov dword ptr [edi + ecx*4 - 0x1c], eax */
  W32((uint32_t)(edi + ecx*4 + 0xffffffe4u), eax);
L_4012d8: /* 4012d8: mov eax, dword ptr [esi + ecx*4 - 0x18] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xffffffe8u));
/* 4012dc: mov dword ptr [edi + ecx*4 - 0x18], eax */
  W32((uint32_t)(edi + ecx*4 + 0xffffffe8u), eax);
L_4012e0: /* 4012e0: mov eax, dword ptr [esi + ecx*4 - 0x14] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xffffffecu));
/* 4012e4: mov dword ptr [edi + ecx*4 - 0x14], eax */
  W32((uint32_t)(edi + ecx*4 + 0xffffffecu), eax);
L_4012e8: /* 4012e8: mov eax, dword ptr [esi + ecx*4 - 0x10] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffff0u));
/* 4012ec: mov dword ptr [edi + ecx*4 - 0x10], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffff0u), eax);
L_4012f0: /* 4012f0: mov eax, dword ptr [esi + ecx*4 - 0xc] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffff4u));
/* 4012f4: mov dword ptr [edi + ecx*4 - 0xc], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffff4u), eax);
L_4012f8: /* 4012f8: mov eax, dword ptr [esi + ecx*4 - 8] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffff8u));
/* 4012fc: mov dword ptr [edi + ecx*4 - 8], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffff8u), eax);
L_401300: /* 401300: mov eax, dword ptr [esi + ecx*4 - 4] */
  eax = R32((uint32_t)(esi + ecx*4 + 0xfffffffcu));
/* 401304: mov dword ptr [edi + ecx*4 - 4], eax */
  W32((uint32_t)(edi + ecx*4 + 0xfffffffcu), eax);
/* 401308: lea eax, [ecx*4] */
  eax = (uint32_t)(ecx*4);
/* 40130f: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 401311: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_401313: /* 401313: jmp dword ptr [edx*4 + 0x40131c] */
  switch (R32((uint32_t)(edx*4 + 0x40131cu))) {
    case 0x40132cu: goto L_40132c;
    case 0x401346u: goto L_401346;
    case 0x407690u: goto L_407690;
    case 0x40769bu: goto L_40769b;
    default: guest_badjump(0x401313, R32((uint32_t)(edx*4 + 0x40131cu))); return;
  }
L_40132c: /* 40132c: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 40132e: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 401330: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 401333: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 401336: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 401339: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40133a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40133b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40133c: ret  */
  esp += 4; SPILL(); return;
L_401346: /* 401346: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 401349: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40134a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40134b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40134c: ret  */
  esp += 4; SPILL(); return;
L_407690: /* 407690: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 407692: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 407694: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 407697: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 407698: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 407699: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40769a: ret  */
  esp += 4; SPILL(); return;
L_40769b: /* 40769b: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 40769d: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 40769f: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 4076a2: mov byte ptr [edi + 1], al */
  W8((uint32_t)(edi + 0x1u), (eax & 0xffu));
/* 4076a5: mov al, byte ptr [esi + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x2u))) & 0xffu);
/* 4076a8: mov byte ptr [edi + 2], al */
  W8((uint32_t)(edi + 0x2u), (eax & 0xffu));
/* 4076ab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4076ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4076af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4076b0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4076b1: ret  */
  esp += 4; SPILL(); return;
}

void f_40126b(void) { hle_memcpy(); }

void f_40134d(void) {
  LOAD_REGS();
L_40134d: /* 40134d: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 401351: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 401352: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 401356: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_401357: /* 401357: mov cx, word ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 40135a: movzx eax, word ptr [edx] */
  eax = (uint32_t)(R16((uint32_t)(edx)));
/* 40135d: movzx edi, cx */
  edi = (uint32_t)((ecx & 0xffffu));
/* 401360: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 401362: jne 0x40136f */
  if (!zf) goto L_40136f;
L_401364: /* 401364: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 401367: je 0x40136f */
  if (zf) goto L_40136f;
L_401369: /* 401369: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 40136a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 40136b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40136c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40136d: jmp 0x401357 */
  goto L_401357;
L_40136f: /* 40136f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 401371: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 401372: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 401373: jl 0x40137b */
  if ((sf != of)) goto L_40137b;
L_401375: /* 401375: jle 0x40137a */
  if ((zf || sf != of)) goto L_40137a;
L_401377: /* 401377: xor eax, eax */
  eax = 0;
/* 401379: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_40137a: /* 40137a: ret  */
  esp += 4; SPILL(); return;
L_40137b: /* 40137b: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40137e: ret  */
  esp += 4; SPILL(); return;
}

void f_40137f(void) {
  LOAD_REGS();
L_40137f: /* 40137f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 401380: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 401381: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x401387u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 401387: push dword ptr [0x44a850] */
  { uint32_t v = R32((uint32_t)(0x44a850u)); esp -= 4; W32(esp, v); }
/* 40138d: mov ebx, eax */
  ebx = eax;
/* 40138f: call dword ptr [0x439048] */
  esp -= 4; W32(esp, 0x401395u); SPILL(); call_ind(R32(0x439048u)); if (g_unwind) return; /* KERNEL32!TlsGetValue */ RELOAD();
/* 401395: mov esi, eax */
  esi = eax;
/* 401397: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401399: je 0x40bd68 */
  if (zf) goto L_40bd68;
L_40139f: /* 40139f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4013a0: call dword ptr [0x43905c] */
  esp -= 4; W32(esp, 0x4013a6u); SPILL(); call_ind(R32(0x43905cu)); if (g_unwind) return; /* KERNEL32!SetLastError */ RELOAD();
/* 4013a6: mov eax, esi */
  eax = esi;
/* 4013a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4013a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4013aa: ret  */
  esp += 4; SPILL(); return;
L_40bd68: /* 40bd68: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 40bd6d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40bd6f: call 0x4016cb */
  esp -= 4; W32(esp, 0x40bd74u); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 40bd74: mov esi, eax */
  esi = eax;
/* 40bd76: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40bd78: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bd79: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bd7a: je 0x40bdac */
  if (zf) goto L_40bdac;
L_40bd7c: /* 40bd7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40bd7d: push dword ptr [0x44a850] */
  { uint32_t v = R32((uint32_t)(0x44a850u)); esp -= 4; W32(esp, v); }
/* 40bd83: call dword ptr [0x439028] */
  esp -= 4; W32(esp, 0x40bd89u); SPILL(); call_ind(R32(0x439028u)); if (g_unwind) return; /* KERNEL32!TlsSetValue */ RELOAD();
/* 40bd89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40bd8b: je 0x40bdac */
  if (zf) goto L_40bdac;
L_40bd8d: /* 40bd8d: mov dword ptr [esi + 0x54], 0x44aae8 */
  W32((uint32_t)(esi + 0x54u), 0x44aae8u);
/* 40bd94: mov dword ptr [esi + 0x14], 1 */
  W32((uint32_t)(esi + 0x14u), 0x1u);
/* 40bd9b: call dword ptr [0x439024] */
  esp -= 4; W32(esp, 0x40bda1u); SPILL(); call_ind(R32(0x439024u)); if (g_unwind) return; /* KERNEL32!GetCurrentThreadId */ RELOAD();
/* 40bda1: or dword ptr [esi + 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 40bda5: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 40bda7: jmp 0x40139f */
  goto L_40139f;
L_40bdac: /* 40bdac: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 40bdae: call 0x40f95e */
  esp -= 4; W32(esp, 0x40bdb3u); SPILL(); f_40f95e(); if (g_unwind) return; RELOAD();
/* 40bdb3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bdb4: jmp 0x40139f */
  goto L_40139f;
}

void f_4013ab(void) {
  LOAD_REGS();
L_4013ab: /* 4013ab: cmp ecx, dword ptr [0x44a9a8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a9a8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4013b1: jne 0x412505 */
  if (!zf) goto L_412505;
L_4013b7: /* 4013b7: ret  */
  esp += 4; SPILL(); return;
L_412505: /* 412505: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 412507: push 0x43eab8 */
  { uint32_t v = 0x43eab8u; esp -= 4; W32(esp, v); }
/* 41250c: call 0x40101f */
  esp -= 4; W32(esp, 0x412511u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 412511: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 412515: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 412517: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 412519: call 0x412b93 */
  esp -= 4; W32(esp, 0x41251eu); SPILL(); f_412b93(); if (g_unwind) return; RELOAD();
/* 41251e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41251f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 412520: jmp 0x412529 */
  goto L_412529;
L_412529: /* 412529: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41252d: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 41252f: call dword ptr [0x439008] */
  esp -= 4; W32(esp, 0x412535u); SPILL(); call_ind(R32(0x439008u)); if (g_unwind) return; /* KERNEL32!ExitProcess */ RELOAD();
  SPILL(); f_412535(); return;
}

void f_4013b8(void) {
  LOAD_REGS();
L_4013b8: /* 4013b8: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
L_4013bc: /* 4013bc: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 4013bf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4013c0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4013c1: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 4013c4: jne 0x4013bc */
  if (!zf) goto L_4013bc;
L_4013c6: /* 4013c6: sub eax, dword ptr [esp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4013ca: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4013cc: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 4013cd: ret  */
  esp += 4; SPILL(); return;
}

void f_4013ce(void) {
  LOAD_REGS();
L_4013ce: /* 4013ce: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4013d2: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
L_4013d6: /* 4013d6: mov ax, word ptr [edx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 4013d9: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 4013dc: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4013dd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4013de: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4013df: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4013e0: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 4013e3: jne 0x4013d6 */
  if (!zf) goto L_4013d6;
L_4013e5: /* 4013e5: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4013e9: ret  */
  esp += 4; SPILL(); return;
}

void f_4013ea(void) {
  LOAD_REGS();
L_4013ea: /* 4013ea: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4013ee: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4013f2: mov edx, eax */
  edx = eax;
/* 4013f4: je 0x4013fe */
  if (zf) goto L_4013fe;
L_4013f6: /* 4013f6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4013f7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4013f8: cmp word ptr [edx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4013fc: jne 0x4013f6 */
  if (!zf) goto L_4013f6;
L_4013fe: /* 4013fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4013ff: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
L_401403: /* 401403: mov cx, word ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 401406: mov word ptr [edx], cx */
  W16((uint32_t)(edx), (ecx & 0xffffu));
/* 401409: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 40140a: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 40140b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40140c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40140d: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 401410: jne 0x401403 */
  if (!zf) goto L_401403;
L_401412: /* 401412: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 401413: ret  */
  esp += 4; SPILL(); return;
}

void f_401414(void) {
  LOAD_REGS();
L_401414: /* 401414: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 401415: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 401419: cmp si, 0x100 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x100u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40141e: jae 0x40db33 */
  if (!cf) goto L_40db33;
L_401424: /* 401424: mov ecx, dword ptr [0x449034] */
  ecx = R32((uint32_t)(0x449034u));
/* 40142a: movzx eax, si */
  eax = (uint32_t)((esi & 0xffffu));
/* 40142d: movzx eax, word ptr [ecx + eax*2] */
  eax = (uint32_t)(R16((uint32_t)(ecx + eax*2)));
/* 401431: nop  */
/* 401432: movzx ecx, word ptr [esp + 0xc] */
  ecx = (uint32_t)(R16((uint32_t)(esp + 0xcu)));
/* 401437: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 401439: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40143a: ret  */
  esp += 4; SPILL(); return;
L_40db33: /* 40db33: cmp si, -1 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40db37: jne 0x40db3d */
  if (!zf) goto L_40db3d;
L_40db39: /* 40db39: xor eax, eax */
  eax = 0;
/* 40db3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40db3c: ret  */
  esp += 4; SPILL(); return;
L_40db3d: /* 40db3d: call 0x40137f */
  esp -= 4; W32(esp, 0x40db42u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 40db42: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 40db45: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40db4b: je 0x40db52 */
  if (zf) goto L_40db52;
L_40db4d: /* 40db4d: call 0x4025f2 */
  esp -= 4; W32(esp, 0x40db52u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_40db52: /* 40db52: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40db56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40db57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40db58: call 0x4018eb */
  esp -= 4; W32(esp, 0x40db5du); SPILL(); f_4018eb(); if (g_unwind) return; RELOAD();
/* 40db5d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40db60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40db61: ret  */
  esp += 4; SPILL(); return;
}

void f_40143b(void) {
  LOAD_REGS();
L_40143b: /* 40143b: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 40143d: push 0x43e0f8 */
  { uint32_t v = 0x43e0f8u; esp -= 4; W32(esp, v); }
/* 401442: call 0x40101f */
  esp -= 4; W32(esp, 0x401447u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 401447: mov eax, dword ptr [0x44a84c] */
  eax = R32((uint32_t)(0x44a84cu));
/* 40144c: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40144f: je 0x40de20 */
  if (zf) goto L_40de20;
L_401455: /* 401455: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401458: je 0x40de69 */
  if (zf) goto L_40de69;
L_40145e: /* 40145e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 401461: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 401463: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 401469: call dword ptr [0x439134] */
  esp -= 4; W32(esp, 0x40146fu); SPILL(); call_ind(R32(0x439134u)); if (g_unwind) return; /* KERNEL32!HeapSize */ RELOAD();
/* 40146f: mov esi, eax */
  esi = eax;
L_401471: /* 401471: mov eax, esi */
  eax = esi;
/* 401473: call 0x40105a */
  esp -= 4; W32(esp, 0x401478u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 401478: ret  */
  esp += 4; SPILL(); return;
L_401479: /* 401479: jne 0x401471 */
  if (!zf) goto L_401471;
L_40147b: /* 40147b: jmp 0x40145e */
  goto L_40145e;
L_40de20: /* 40de20: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40de22: call 0x4011b7 */
  esp -= 4; W32(esp, 0x40de27u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 40de27: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40de28: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40de2c: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 40de2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40de30: call 0x410467 */
  esp -= 4; W32(esp, 0x40de35u); SPILL(); f_410467(); if (g_unwind) return; RELOAD();
/* 40de35: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40de36: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 40de39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40de3b: je 0x40de48 */
  if (zf) goto L_40de48;
L_40de3d: /* 40de3d: mov esi, dword ptr [esi - 4] */
  esi = R32((uint32_t)(esi + 0xfffffffcu));
/* 40de40: sub esi, 9 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 40de43: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 40de46: jmp 0x40de4b */
  goto L_40de4b;
L_40de48: /* 40de48: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
L_40de4b: /* 40de4b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40de4f: call 0x40de60 */
  esp -= 4; W32(esp, 0x40de54u); SPILL(); f_40de60(); if (g_unwind) return; RELOAD();
/* 40de54: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40de58: jmp 0x401479 */
  goto L_401479;
L_40de69: /* 40de69: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40de6b: call 0x4011b7 */
  esp -= 4; W32(esp, 0x40de70u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 40de70: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40de71: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 40de78: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 40de7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40de7c: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 40de7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40de80: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40de83: call 0x411288 */
  esp -= 4; W32(esp, 0x40de88u); SPILL(); f_411288(); if (g_unwind) return; RELOAD();
/* 40de88: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40de8b: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 40de8e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40de90: je 0x40de9d */
  if (zf) goto L_40de9d;
L_40de92: /* 40de92: movzx esi, byte ptr [eax] */
  esi = (uint32_t)(R8((uint32_t)(eax)));
/* 40de95: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 40de98: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 40de9b: jmp 0x40dea0 */
  goto L_40dea0;
L_40de9d: /* 40de9d: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
L_40dea0: /* 40dea0: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40dea4: call 0x40deb5 */
  esp -= 4; W32(esp, 0x40dea9u); SPILL(); f_40deb5(); if (g_unwind) return; RELOAD();
/* 40dea9: cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40dead: jmp 0x401479 */
  goto L_401479;
}

void f_40149a(void) {
  LOAD_REGS();
  goto L_40149a;
L_40147d: /* 40147d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 40147f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 401481: cmp dl, cl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 401483: jne 0x4014d8 */
  if (!zf) goto L_4014d8;
L_401485: /* 401485: sub eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 401488: je 0x401497 */
  if (zf) goto L_401497;
L_40148a: /* 40148a: cmp dh, ch */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((ecx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40148c: jne 0x4014d8 */
  if (!zf) goto L_4014d8;
L_40148e: /* 40148e: sub eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 401491: jne 0x4078eb */
  if (!zf) goto L_4078eb;
L_401497: /* 401497: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 401498: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 401499: ret  */
  esp += 4; SPILL(); return;
L_40149a: /* 40149a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 40149e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4014a0: je 0x4014cd */
  if (zf) goto L_4014cd;
L_4014a2: /* 4014a2: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4014a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4014a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4014a8: mov esi, edx */
  esi = edx;
/* 4014aa: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 4014ae: or edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 4014b0: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* 4014b3: jne 0x40788c */
  if (!zf) goto L_40788c;
L_4014b9: /* 4014b9: mov ecx, eax */
  ecx = eax;
/* 4014bb: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4014be: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  of = (a >> 31) & 1;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ecx = r;
  }
/* 4014c1: je 0x4014c7 */
  if (zf) goto L_4014c7;
L_4014c3: /* 4014c3: repe cmpsd dword ptr [esi], dword ptr es:[edi] */
  { uint32_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R32(esi); b = R32(edi); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; any = 1; r = (uint32_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* 4014c5: jne 0x4014ce */
  if (!zf) goto L_4014ce;
L_4014c7: /* 4014c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4014c9: jne 0x40147d */
  if (!zf) goto L_40147d;
L_4014cb: /* 4014cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4014cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_4014cd: /* 4014cd: ret  */
  esp += 4; SPILL(); return;
L_4014ce: /* 4014ce: mov ecx, dword ptr [esi - 4] */
  ecx = R32((uint32_t)(esi + 0xfffffffcu));
/* 4014d1: mov edx, dword ptr [edi - 4] */
  edx = R32((uint32_t)(edi + 0xfffffffcu));
/* 4014d4: cmp cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4014d6: je 0x4014e5 */
  if (zf) goto L_4014e5;
L_4014d8: /* 4014d8: mov eax, 0 */
  eax = 0x0u;
L_4014dd: /* 4014dd: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* 4014df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4014e0: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4014e3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4014e4: ret  */
  esp += 4; SPILL(); return;
L_4014e5: /* 4014e5: cmp ch, dh */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((edx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4014e7: jne 0x4014d8 */
  if (!zf) goto L_4014d8;
L_4014e9: /* 4014e9: jmp 0x4078d6 */
  goto L_4078d6;
L_40788c: /* 40788c: test eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 407891: je 0x4078ac */
  if (zf) goto L_4078ac;
L_407893: /* 407893: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 407895: cmp cl, byte ptr [edi] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 407897: jne 0x4014dd */
  if (!zf) goto L_4014dd;
L_40789d: /* 40789d: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4078a0: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4078a3: sub eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 4078a6: je 0x4014cb */
  if (zf) goto L_4014cb;
L_4078ac: /* 4078ac: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 4078ae: mov dl, byte ptr [edi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 4078b0: cmp cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4078b2: jne 0x4014dd */
  if (!zf) goto L_4014dd;
L_4078b8: /* 4078b8: mov cl, byte ptr [esi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 4078bb: mov dl, byte ptr [edi + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* 4078be: cmp cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4078c0: jne 0x4014dd */
  if (!zf) goto L_4014dd;
L_4078c6: /* 4078c6: add edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4078c9: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4078cc: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 4078cf: jne 0x4078ac */
  if (!zf) goto L_4078ac;
L_4078d1: /* 4078d1: jmp 0x4014cb */
  goto L_4014cb;
L_4078d6: /* 4078d6: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 4078d9: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 4078dc: cmp cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4078de: jne 0x4014d8 */
  if (!zf) goto L_4014d8;
L_4078e4: /* 4078e4: cmp ch, dh */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((edx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 4078e6: jmp 0x4014d8 */
  goto L_4014d8;
L_4078eb: /* 4078eb: and ecx, 0xff0000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xff0000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4078f1: and edx, 0xff0000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xff0000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4078f7: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4078f9: jne 0x4014d8 */
  if (!zf) goto L_4014d8;
L_4078ff: /* 4078ff: sub eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 407902: jmp 0x401497 */
  goto L_401497;
}

void f_4014ee(void) {
  LOAD_REGS();
L_4014ee: /* 4014ee: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4014f3: jae 0x401503 */
  if (!cf) goto L_401503;
L_4014f5: /* 4014f5: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 4014f7: add eax, esp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4014f9: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4014fc: test dword ptr [eax], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* 4014fe: xchg esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  esp = b;
  eax = a;
  }
/* 4014ff: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 401501: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 401502: ret  */
  esp += 4; SPILL(); return;
L_401503: /* 401503: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 401504: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
L_401508: /* 401508: sub ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 40150e: sub eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 401513: test dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* 401515: cmp eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40151a: jae 0x401508 */
  if (!cf) goto L_401508;
L_40151c: /* 40151c: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 40151e: mov eax, esp */
  eax = esp;
/* 401520: test dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  }
/* 401522: mov esp, ecx */
  esp = ecx;
/* 401524: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 401526: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 401529: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40152a: ret  */
  esp += 4; SPILL(); return;
}

void f_40152b(void) {
  LOAD_REGS();
L_40152b: /* 40152b: call 0x40137f */
  esp -= 4; W32(esp, 0x401530u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 401530: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 401533: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401539: jne 0x40d9fd */
  if (!zf) goto L_40d9fd;
L_40153f: /* 40153f: cmp dword ptr [eax + 0x28], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x28u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 401543: jg 0x40da07 */
  if ((!zf && sf == of)) goto L_40da07;
L_401549: /* 401549: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 40154c: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 401550: movzx eax, byte ptr [eax + ecx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + ecx*2)));
/* 401554: nop  */
/* 401555: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 401558: ret  */
  esp += 4; SPILL(); return;
L_40d9fd: /* 40d9fd: call 0x4025f2 */
  esp -= 4; W32(esp, 0x40da02u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 40da02: jmp 0x40153f */
  goto L_40153f;
L_40da07: /* 40da07: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40da09: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40da0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40da0e: call 0x415666 */
  esp -= 4; W32(esp, 0x40da13u); SPILL(); f_415666(); if (g_unwind) return; RELOAD();
/* 40da13: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40da16: ret  */
  esp += 4; SPILL(); return;
}

void f_401624(void) {
  LOAD_REGS();
  goto L_401624;
L_401559: /* 401559: mov edi, 0x94 */
  edi = 0x94u;
/* 40155e: mov eax, edi */
  eax = edi;
/* 401560: call 0x4014ee */
  esp -= 4; W32(esp, 0x401565u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 401565: mov esi, esp */
  esi = esp;
/* 401567: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 401568: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 40156a: call dword ptr [0x439030] */
  esp -= 4; W32(esp, 0x401570u); SPILL(); call_ind(R32(0x439030u)); if (g_unwind) return; /* KERNEL32!GetVersionExA */ RELOAD();
/* 401570: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401572: je 0x4016c7 */
  if (zf) goto L_4016c7;
L_401578: /* 401578: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 40157b: mov dword ptr [0x4491d4], ecx */
  W32((uint32_t)(0x4491d4u), ecx);
/* 401581: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 401584: mov dword ptr [0x4491e0], eax */
  W32((uint32_t)(0x4491e0u), eax);
/* 401589: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 40158c: mov dword ptr [0x4491e4], edx */
  W32((uint32_t)(0x4491e4u), edx);
/* 401592: mov esi, dword ptr [esi + 0xc] */
  esi = R32((uint32_t)(esi + 0xcu));
/* 401595: and esi, 0x7fff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 40159b: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40159e: mov dword ptr [0x4491d8], esi */
  W32((uint32_t)(0x4491d8u), esi);
/* 4015a4: jne 0x40bbbb */
  if (!zf) goto L_40bbbb;
L_4015aa: /* 4015aa: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 4015ad: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4015af: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4015b1: mov dword ptr [0x4491dc], eax */
  W32((uint32_t)(0x4491dcu), eax);
/* 4015b6: call 0x404eaa */
  esp -= 4; W32(esp, 0x4015bbu); SPILL(); f_404eaa(); if (g_unwind) return; RELOAD();
/* 4015bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4015bd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4015be: je 0x4016c7 */
  if (zf) goto L_4016c7;
L_4015c4: /* 4015c4: call 0x404b44 */
  esp -= 4; W32(esp, 0x4015c9u); SPILL(); f_404b44(); if (g_unwind) return; RELOAD();
/* 4015c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4015cb: je 0x40bbcc */
  if (zf) goto L_40bbcc;
L_4015d1: /* 4015d1: call 0x4044ea */
  esp -= 4; W32(esp, 0x4015d6u); SPILL(); f_4044ea(); if (g_unwind) return; RELOAD();
/* 4015d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4015d8: jl 0x40bbd6 */
  if ((sf != of)) goto L_40bbd6;
L_4015de: /* 4015de: call 0x40453f */
  esp -= 4; W32(esp, 0x4015e3u); SPILL(); f_40453f(); if (g_unwind) return; RELOAD();
/* 4015e3: mov dword ptr [0x44aae4], eax */
  W32((uint32_t)(0x44aae4u), eax);
/* 4015e8: call dword ptr [0x43902c] */
  esp -= 4; W32(esp, 0x4015eeu); SPILL(); call_ind(R32(0x43902cu)); if (g_unwind) return; /* KERNEL32!GetCommandLineA */ RELOAD();
/* 4015ee: mov dword ptr [0x449210], eax */
  W32((uint32_t)(0x449210u), eax);
/* 4015f3: call 0x4045f4 */
  esp -= 4; W32(esp, 0x4015f8u); SPILL(); f_4045f4(); if (g_unwind) return; RELOAD();
/* 4015f8: mov dword ptr [0x44920c], eax */
  W32((uint32_t)(0x44920cu), eax);
/* 4015fd: call 0x404f5e */
  esp -= 4; W32(esp, 0x401602u); SPILL(); f_404f5e(); if (g_unwind) return; RELOAD();
/* 401602: call 0x404ab0 */
  esp -= 4; W32(esp, 0x401607u); SPILL(); f_404ab0(); if (g_unwind) return; RELOAD();
/* 401607: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 401609: jl 0x4016bd */
  if ((sf != of)) goto L_4016bd;
L_40160f: /* 40160f: call 0x404c5f */
  esp -= 4; W32(esp, 0x401614u); SPILL(); f_404c5f(); if (g_unwind) return; RELOAD();
/* 401614: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401616: jne 0x4016bd */
  if (!zf) goto L_4016bd;
L_40161c: /* 40161c: inc dword ptr [0x44aae0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44aae0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44aae0u), r);
  }
/* 401622: jmp 0x40167c */
  goto L_40167c;
L_401624: /* 401624: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 401625: mov ebp, esp */
  ebp = esp;
/* 401627: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 40162a: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40162d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40162e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40162f: je 0x401559 */
  if (zf) goto L_401559;
L_401635: /* 401635: xor edi, edi */
  edi = 0;
/* 401637: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401639: je 0x401696 */
  if (zf) goto L_401696;
L_40163b: /* 40163b: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40163e: jne 0x401688 */
  if (!zf) goto L_401688;
L_401640: /* 401640: push 0x88 */
  { uint32_t v = 0x88u; esp -= 4; W32(esp, v); }
/* 401645: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 401647: call 0x4016cb */
  esp -= 4; W32(esp, 0x40164cu); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 40164c: mov esi, eax */
  esi = eax;
/* 40164e: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401650: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401651: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401652: je 0x4016c7 */
  if (zf) goto L_4016c7;
L_401654: /* 401654: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 401655: push dword ptr [0x44a850] */
  { uint32_t v = R32((uint32_t)(0x44a850u)); esp -= 4; W32(esp, v); }
/* 40165b: call dword ptr [0x439028] */
  esp -= 4; W32(esp, 0x401661u); SPILL(); call_ind(R32(0x439028u)); if (g_unwind) return; /* KERNEL32!TlsSetValue */ RELOAD();
/* 401661: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401663: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 401664: je 0x40bbf1 */
  if (zf) goto L_40bbf1;
L_40166a: /* 40166a: call 0x40173b */
  esp -= 4; W32(esp, 0x40166fu); SPILL(); f_40173b(); if (g_unwind) return; RELOAD();
/* 40166f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401670: call dword ptr [0x439024] */
  esp -= 4; W32(esp, 0x401676u); SPILL(); call_ind(R32(0x439024u)); if (g_unwind) return; /* KERNEL32!GetCurrentThreadId */ RELOAD();
/* 401676: or dword ptr [esi + 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 40167a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_40167c: /* 40167c: xor eax, eax */
  eax = 0;
/* 40167e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_40167f: /* 40167f: lea esp, [ebp - 8] */
  esp = (uint32_t)(ebp + 0xfffffff8u);
/* 401682: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 401683: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 401684: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 401685: ret 0xc */
  esp += 16; SPILL(); return;
L_401688: /* 401688: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40168b: jne 0x40167c */
  if (!zf) goto L_40167c;
L_40168d: /* 40168d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40168e: call 0x401798 */
  esp -= 4; W32(esp, 0x401693u); SPILL(); f_401798(); if (g_unwind) return; RELOAD();
/* 401693: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401694: jmp 0x40167c */
  goto L_40167c;
L_401696: /* 401696: cmp dword ptr [0x44aae0], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44aae0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40169c: jle 0x4016c7 */
  if ((zf || sf != of)) goto L_4016c7;
L_40169e: /* 40169e: dec dword ptr [0x44aae0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44aae0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0x44aae0u), r);
  }
/* 4016a4: cmp dword ptr [0x44aadc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44aadcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4016aa: je 0x4016b6 */
  if (zf) goto L_4016b6;
L_4016ac: /* 4016ac: cmp dword ptr [ebp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4016af: jne 0x40167c */
  if (!zf) goto L_40167c;
L_4016b1: /* 4016b1: jmp 0x40bbdd */
  goto L_40bbdd;
L_4016b6: /* 4016b6: call 0x40446a */
  esp -= 4; W32(esp, 0x4016bbu); SPILL(); f_40446a(); if (g_unwind) return; RELOAD();
/* 4016bb: jmp 0x4016ac */
  goto L_4016ac;
L_4016bd: /* 4016bd: call 0x411c04 */
  esp -= 4; W32(esp, 0x4016c2u); SPILL(); f_411c04(); if (g_unwind) return; RELOAD();
/* 4016c2: jmp 0x40bbd6 */
  goto L_40bbd6;
L_4016c7: /* 4016c7: xor eax, eax */
  eax = 0;
/* 4016c9: jmp 0x40167f */
  goto L_40167f;
L_40bbbb: /* 40bbbb: or esi, 0x8000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 40bbc1: mov dword ptr [0x4491d8], esi */
  W32((uint32_t)(0x4491d8u), esi);
/* 40bbc7: jmp 0x4015aa */
  goto L_4015aa;
L_40bbcc: /* 40bbcc: call 0x410357 */
  esp -= 4; W32(esp, 0x40bbd1u); SPILL(); f_410357(); if (g_unwind) return; RELOAD();
/* 40bbd1: jmp 0x4016c7 */
  goto L_4016c7;
L_40bbd6: /* 40bbd6: call 0x40fc6f */
  esp -= 4; W32(esp, 0x40bbdbu); SPILL(); f_40fc6f(); if (g_unwind) return; RELOAD();
/* 40bbdb: jmp 0x40bbcc */
  goto L_40bbcc;
L_40bbdd: /* 40bbdd: call 0x411c04 */
  esp -= 4; W32(esp, 0x40bbe2u); SPILL(); f_411c04(); if (g_unwind) return; RELOAD();
/* 40bbe2: call 0x40fc6f */
  esp -= 4; W32(esp, 0x40bbe7u); SPILL(); f_40fc6f(); if (g_unwind) return; RELOAD();
/* 40bbe7: call 0x410357 */
  esp -= 4; W32(esp, 0x40bbecu); SPILL(); f_410357(); if (g_unwind) return; RELOAD();
/* 40bbec: jmp 0x40167c */
  goto L_40167c;
L_40bbf1: /* 40bbf1: call 0x401156 */
  esp -= 4; W32(esp, 0x40bbf6u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40bbf6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bbf7: jmp 0x4016c7 */
  goto L_4016c7;
}

void f_4016cb(void) {
  LOAD_REGS();
L_4016cb: /* 4016cb: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 4016cd: push 0x43e130 */
  { uint32_t v = 0x43e130u; esp -= 4; W32(esp, v); }
/* 4016d2: call 0x40101f */
  esp -= 4; W32(esp, 0x4016d7u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 4016d7: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4016da: imul esi, dword ptr [ebp + 0xc] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xcu)));
  esi = (uint32_t)r;
  }
/* 4016de: nop  */
/* 4016df: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 4016e2: xor ebx, ebx */
  ebx = 0;
/* 4016e4: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4016e6: je 0x40c09d */
  if (zf) goto L_40c09d;
L_4016ec: /* 4016ec: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 4016ef: cmp esi, -0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4016f2: ja 0x401722 */
  if ((!cf && !zf)) goto L_401722;
L_4016f4: /* 4016f4: mov eax, dword ptr [0x44a84c] */
  eax = R32((uint32_t)(0x44a84cu));
/* 4016f9: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4016fc: je 0x40c0a5 */
  if (zf) goto L_40c0a5;
L_401702: /* 401702: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401705: je 0x40c0f7 */
  if (zf) goto L_40c0f7;
L_40170b: /* 40170b: cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40170e: jne 0x40172b */
  if (!zf) goto L_40172b;
L_401710: /* 401710: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 401711: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 401713: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 401719: call dword ptr [0x43907c] */
  esp -= 4; W32(esp, 0x40171fu); SPILL(); call_ind(R32(0x43907cu)); if (g_unwind) return; /* KERNEL32!HeapAlloc */ RELOAD();
/* 40171f: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_401722: /* 401722: cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401725: je 0x40c14e */
  if (zf) goto L_40c14e;
L_40172b: /* 40172b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
L_40172e: /* 40172e: call 0x40105a */
  esp -= 4; W32(esp, 0x401733u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 401733: ret  */
  esp += 4; SPILL(); return;
L_401734: /* 401734: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401735: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401737: jne 0x4016ec */
  if (!zf) goto L_4016ec;
L_401739: /* 401739: jmp 0x40172e */
  goto L_40172e;
L_40c09d: /* 40c09d: xor esi, esi */
  esi = 0;
/* 40c09f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40c0a0: jmp 0x4016ec */
  goto L_4016ec;
L_40c0a5: /* 40c0a5: add esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40c0a8: and esi, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 40c0ab: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 40c0ae: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 40c0b1: cmp edi, dword ptr [0x44f678] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44f678u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40c0b7: ja 0x40170b */
  if ((!cf && !zf)) goto L_40170b;
L_40c0bd: /* 40c0bd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40c0bf: call 0x4011b7 */
  esp -= 4; W32(esp, 0x40c0c4u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 40c0c4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c0c5: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 40c0c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40c0c9: call 0x41170d */
  esp -= 4; W32(esp, 0x40c0ceu); SPILL(); f_41170d(); if (g_unwind) return; RELOAD();
/* 40c0ce: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c0cf: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 40c0d2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40c0d6: call 0x40c0ee */
  esp -= 4; W32(esp, 0x40c0dbu); SPILL(); f_40c0ee(); if (g_unwind) return; RELOAD();
/* 40c0db: cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c0de: je 0x401710 */
  if (zf) goto L_401710;
L_40c0e4: /* 40c0e4: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 40c0e7: jmp 0x40c13d */
  goto L_40c13d;
L_40c0f7: /* 40c0f7: add esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40c0fa: and esi, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 40c0fd: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 40c100: cmp esi, dword ptr [0x44dca4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44dca4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40c106: ja 0x40170b */
  if ((!cf && !zf)) goto L_40170b;
L_40c10c: /* 40c10c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40c10e: call 0x4011b7 */
  esp -= 4; W32(esp, 0x40c113u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 40c113: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c114: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 40c11b: mov eax, esi */
  eax = esi;
/* 40c11d: shr eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 40c120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c121: call 0x411a09 */
  esp -= 4; W32(esp, 0x40c126u); SPILL(); f_411a09(); if (g_unwind) return; RELOAD();
/* 40c126: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c127: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 40c12a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40c12e: call 0x40c16a */
  esp -= 4; W32(esp, 0x40c133u); SPILL(); f_40c16a(); if (g_unwind) return; RELOAD();
/* 40c133: cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c136: je 0x401710 */
  if (zf) goto L_401710;
L_40c13c: /* 40c13c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_40c13d: /* 40c13d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40c13e: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 40c141: call 0x4010fd */
  esp -= 4; W32(esp, 0x40c146u); SPILL(); hle_memset(); RELOAD();
/* 40c146: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40c149: jmp 0x40170b */
  goto L_40170b;
L_40c14e: /* 40c14e: cmp dword ptr [0x44a854], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44a854u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c154: je 0x40172b */
  if (zf) goto L_40172b;
L_40c15a: /* 40c15a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40c15b: call 0x40f297 */
  esp -= 4; W32(esp, 0x40c160u); SPILL(); f_40f297(); if (g_unwind) return; RELOAD();
/* 40c160: jmp 0x401734 */
  goto L_401734;
}

void f_40173b(void) {
  LOAD_REGS();
L_40173b: /* 40173b: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 40173f: mov dword ptr [eax + 0x54], 0x44aae8 */
  W32((uint32_t)(eax + 0x54u), 0x44aae8u);
/* 401746: mov dword ptr [eax + 0x14], 1 */
  W32((uint32_t)(eax + 0x14u), 0x1u);
/* 40174d: ret  */
  esp += 4; SPILL(); return;
}

void f_40174e(void) {
  LOAD_REGS();
L_40174e: /* 40174e: ret  */
  esp += 4; SPILL(); return;
}

void f_40174f(void) {
  LOAD_REGS();
L_40174f: /* 40174f: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* 401751: call 0x4011d9 */
  esp -= 4; W32(esp, 0x401756u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 401756: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401757: ret  */
  esp += 4; SPILL(); return;
}

void f_401798(void) {
  LOAD_REGS();
  goto L_401798;
L_401758: /* 401758: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
/* 40175a: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 40175d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40175f: je 0x401763 */
  if (zf) goto L_401763;
L_401761: /* 401761: dec dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ecx), r);
  }
L_401763: /* 401763: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 401766: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401768: je 0x40176c */
  if (zf) goto L_40176c;
L_40176a: /* 40176a: dec dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ecx), r);
  }
L_40176c: /* 40176c: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 40176f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401771: je 0x401775 */
  if (zf) goto L_401775;
L_401773: /* 401773: dec dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ecx), r);
  }
L_401775: /* 401775: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 401778: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40177a: je 0x40177e */
  if (zf) goto L_40177e;
L_40177c: /* 40177c: dec dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ecx), r);
  }
L_40177e: /* 40177e: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* 401781: dec dword ptr [ecx + 0xb4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xb4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ecx + 0xb4u), r);
  }
/* 401787: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40178d: je 0x40185d */
  if (zf) goto L_40185d;
L_401793: /* 401793: jmp 0x40be2d */
  goto L_40be2d;
L_401798: /* 401798: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 40179a: push 0x43e160 */
  { uint32_t v = 0x43e160u; esp -= 4; W32(esp, v); }
/* 40179f: call 0x40101f */
  esp -= 4; W32(esp, 0x4017a4u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 4017a4: mov eax, dword ptr [0x44a850] */
  eax = R32((uint32_t)(0x44a850u));
/* 4017a9: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4017ac: je 0x40187b */
  if (zf) goto L_40187b;
L_4017b2: /* 4017b2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4017b5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4017b7: jne 0x4017cd */
  if (!zf) goto L_4017cd;
L_4017b9: /* 4017b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4017ba: call dword ptr [0x439048] */
  esp -= 4; W32(esp, 0x4017c0u); SPILL(); call_ind(R32(0x439048u)); if (g_unwind) return; /* KERNEL32!TlsGetValue */ RELOAD();
/* 4017c0: mov esi, eax */
  esi = eax;
/* 4017c2: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 4017c5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4017c7: je 0x40186d */
  if (zf) goto L_40186d;
L_4017cd: /* 4017cd: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 4017d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4017d2: jne 0x40bdb9 */
  if (!zf) goto L_40bdb9;
L_4017d8: /* 4017d8: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 4017db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4017dd: jne 0x40bdc5 */
  if (!zf) goto L_40bdc5;
L_4017e3: /* 4017e3: mov eax, dword ptr [esi + 0x34] */
  eax = R32((uint32_t)(esi + 0x34u));
/* 4017e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4017e8: jne 0x40bdd1 */
  if (!zf) goto L_40bdd1;
L_4017ee: /* 4017ee: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 4017f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4017f3: jne 0x40bddd */
  if (!zf) goto L_40bddd;
L_4017f9: /* 4017f9: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 4017fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4017fe: jne 0x40bde9 */
  if (!zf) goto L_40bde9;
L_401804: /* 401804: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 401807: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401809: jne 0x40bdf5 */
  if (!zf) goto L_40bdf5;
L_40180f: /* 40180f: mov eax, dword ptr [esi + 0x54] */
  eax = R32((uint32_t)(esi + 0x54u));
/* 401812: cmp eax, 0x44aae8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44aae8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401817: jne 0x40be01 */
  if (!zf) goto L_40be01;
L_40181d: /* 40181d: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* 40181f: call 0x4011b7 */
  esp -= 4; W32(esp, 0x401824u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 401824: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401825: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 401829: mov eax, dword ptr [esi + 0x60] */
  eax = R32((uint32_t)(esi + 0x60u));
/* 40182c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 40182f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401831: jne 0x40be0d */
  if (!zf) goto L_40be0d;
L_401837: /* 401837: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40183b: call 0x40174f */
  esp -= 4; W32(esp, 0x401840u); SPILL(); f_40174f(); if (g_unwind) return; RELOAD();
/* 401840: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 401842: call 0x4011b7 */
  esp -= 4; W32(esp, 0x401847u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 401847: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401848: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 40184f: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 401852: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 401855: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401857: jne 0x401758 */
  if (!zf) goto L_401758;
L_40185d: /* 40185d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 401861: call 0x401881 */
  esp -= 4; W32(esp, 0x401866u); SPILL(); f_401881(); if (g_unwind) return; RELOAD();
/* 401866: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 401867: call 0x401156 */
  esp -= 4; W32(esp, 0x40186cu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40186c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40186d: /* 40186d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40186f: push dword ptr [0x44a850] */
  { uint32_t v = R32((uint32_t)(0x44a850u)); esp -= 4; W32(esp, v); }
/* 401875: call dword ptr [0x439028] */
  esp -= 4; W32(esp, 0x40187bu); SPILL(); call_ind(R32(0x439028u)); if (g_unwind) return; /* KERNEL32!TlsSetValue */ RELOAD();
L_40187b: /* 40187b: call 0x40105a */
  esp -= 4; W32(esp, 0x401880u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 401880: ret  */
  esp += 4; SPILL(); return;
L_40bdb9: /* 40bdb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40bdba: call 0x401156 */
  esp -= 4; W32(esp, 0x40bdbfu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40bdbf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bdc0: jmp 0x4017d8 */
  goto L_4017d8;
L_40bdc5: /* 40bdc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40bdc6: call 0x401156 */
  esp -= 4; W32(esp, 0x40bdcbu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40bdcb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bdcc: jmp 0x4017e3 */
  goto L_4017e3;
L_40bdd1: /* 40bdd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40bdd2: call 0x401156 */
  esp -= 4; W32(esp, 0x40bdd7u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40bdd7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bdd8: jmp 0x4017ee */
  goto L_4017ee;
L_40bddd: /* 40bddd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40bdde: call 0x401156 */
  esp -= 4; W32(esp, 0x40bde3u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40bde3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bde4: jmp 0x4017f9 */
  goto L_4017f9;
L_40bde9: /* 40bde9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40bdea: call 0x401156 */
  esp -= 4; W32(esp, 0x40bdefu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40bdef: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bdf0: jmp 0x401804 */
  goto L_401804;
L_40bdf5: /* 40bdf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40bdf6: call 0x401156 */
  esp -= 4; W32(esp, 0x40bdfbu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40bdfb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40bdfc: jmp 0x40180f */
  goto L_40180f;
L_40be01: /* 40be01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40be02: call 0x401156 */
  esp -= 4; W32(esp, 0x40be07u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40be07: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40be08: jmp 0x40181d */
  goto L_40181d;
L_40be0d: /* 40be0d: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(eax), r);
  }
/* 40be0f: jne 0x401837 */
  if (!zf) goto L_401837;
L_40be15: /* 40be15: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40be1b: je 0x401837 */
  if (zf) goto L_401837;
L_40be21: /* 40be21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40be22: call 0x401156 */
  esp -= 4; W32(esp, 0x40be27u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40be27: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40be28: jmp 0x401837 */
  goto L_401837;
L_40be2d: /* 40be2d: cmp eax, 0x44a920 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44a920u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40be32: je 0x40185d */
  if (zf) goto L_40185d;
L_40be38: /* 40be38: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40be3b: jne 0x40185d */
  if (!zf) goto L_40185d;
L_40be41: /* 40be41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40be42: call 0x4126c1 */
  esp -= 4; W32(esp, 0x40be47u); SPILL(); f_4126c1(); if (g_unwind) return; RELOAD();
/* 40be47: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40be48: jmp 0x40185d */
  goto L_40185d;
}

void f_401881(void) {
  LOAD_REGS();
L_401881: /* 401881: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 401883: call 0x4011d9 */
  esp -= 4; W32(esp, 0x401888u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 401888: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401889: ret  */
  esp += 4; SPILL(); return;
}

void f_4018b7(void) {
  LOAD_REGS();
  goto L_4018b7;
L_40188a: /* 40188a: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 40188d: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 401890: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 401892: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 401893: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 401895: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 401898: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 401899: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 40189e: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 4018a1: call 0x401944 */
  esp -= 4; W32(esp, 0x4018a6u); SPILL(); f_401944(); if (g_unwind) return; RELOAD();
/* 4018a6: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4018a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4018ab: mov ax, word ptr [ebp + 0xc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xcu))) & 0xffffu);
/* 4018af: je 0x4018e8 */
  if (zf) goto L_4018e8;
L_4018b1: /* 4018b1: mov ax, word ptr [ebp - 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffffcu))) & 0xffffu);
/* 4018b5: jmp 0x4018e8 */
  goto L_4018e8;
L_4018b7: /* 4018b7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4018b8: mov ebp, esp */
  ebp = esp;
/* 4018ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4018bb: mov eax, 0xffff */
  eax = 0xffffu;
/* 4018c0: cmp word ptr [ebp + 0xc], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xcu))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4018c4: je 0x4018e9 */
  if (zf) goto L_4018e9;
L_4018c6: /* 4018c6: cmp word ptr [ebp + 0xc], 0x100 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xcu))); uint16_t b = (uint16_t)(0x100u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 4018cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4018cd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4018d0: jae 0x40188a */
  if (!cf) goto L_40188a;
L_4018d2: /* 4018d2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4018d4: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4018d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4018d8: call 0x4018eb */
  esp -= 4; W32(esp, 0x4018ddu); SPILL(); f_4018eb(); if (g_unwind) return; RELOAD();
/* 4018dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4018e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4018e2: jne 0x40188a */
  if (!zf) goto L_40188a;
L_4018e4: /* 4018e4: mov ax, word ptr [ebp + 0xc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xcu))) & 0xffffu);
L_4018e8: /* 4018e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_4018e9: /* 4018e9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4018ea: ret  */
  esp += 4; SPILL(); return;
}

void f_4018eb(void) {
  LOAD_REGS();
L_4018eb: /* 4018eb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4018ec: mov ebp, esp */
  ebp = esp;
/* 4018ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4018ef: cmp word ptr [ebp + 0xc], -1 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xcu))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4018f4: je 0x40191c */
  if (zf) goto L_40191c;
L_4018f6: /* 4018f6: cmp word ptr [ebp + 0xc], 0x100 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xcu))); uint16_t b = (uint16_t)(0x100u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 4018fc: jae 0x40db06 */
  if (!cf) goto L_40db06;
L_401902: /* 401902: movzx eax, word ptr [ebp + 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xcu)));
/* 401906: mov ecx, dword ptr [0x449034] */
  ecx = R32((uint32_t)(0x449034u));
/* 40190c: mov ax, word ptr [ecx + eax*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + eax*2))) & 0xffffu);
L_401910: /* 401910: movzx ecx, word ptr [ebp + 0x10] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0x10u)));
/* 401914: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 401917: nop  */
/* 401918: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40191a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 40191b: ret  */
  esp += 4; SPILL(); return;
L_40191c: /* 40191c: xor eax, eax */
  eax = 0;
/* 40191e: jmp 0x401910 */
  goto L_401910;
L_40db06: /* 40db06: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40db09: push dword ptr [eax + 0x14] */
  { uint32_t v = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, v); }
/* 40db0c: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 40db0f: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 40db12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40db13: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40db15: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 40db18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40db19: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40db1b: call 0x416504 */
  esp -= 4; W32(esp, 0x40db20u); SPILL(); f_416504(); if (g_unwind) return; RELOAD();
/* 40db20: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40db23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40db25: je 0x40191c */
  if (zf) goto L_40191c;
L_40db2b: /* 40db2b: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 40db2e: jmp 0x401910 */
  goto L_401910;
}

void f_401944(void) {
  LOAD_REGS();
  goto L_401944;
L_401920: /* 401920: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 401921: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 401922: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 401923: push 0x43e0f4 */
  { uint32_t v = 0x43e0f4u; esp -= 4; W32(esp, v); }
/* 401928: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 40192d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40192e: call dword ptr [0x4390e4] */
  esp -= 4; W32(esp, 0x401934u); SPILL(); call_ind(R32(0x4390e4u)); if (g_unwind) return; /* KERNEL32!LCMapStringW */ RELOAD();
/* 401934: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401936: je 0x40deea */
  if (zf) goto L_40deea;
L_40193c: /* 40193c: mov dword ptr [0x44a9b0], edi */
  W32((uint32_t)(0x44a9b0u), edi);
/* 401942: jmp 0x40195d */
  goto L_40195d;
L_401944: /* 401944: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 401946: push 0x43e148 */
  { uint32_t v = 0x43e148u; esp -= 4; W32(esp, v); }
/* 40194b: call 0x40101f */
  esp -= 4; W32(esp, 0x401950u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 401950: xor ebx, ebx */
  ebx = 0;
/* 401952: xor edi, edi */
  edi = 0;
/* 401954: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 401955: cmp dword ptr [0x44a9b0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44a9b0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40195b: je 0x401920 */
  if (zf) goto L_401920;
L_40195d: /* 40195d: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 401960: jle 0x40197f */
  if ((zf || sf != of)) goto L_40197f;
L_401962: /* 401962: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 401965: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
L_401968: /* 401968: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 401969: cmp word ptr [eax], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40196c: je 0x401977 */
  if (zf) goto L_401977;
L_40196e: /* 40196e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40196f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 401970: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401972: jne 0x401968 */
  if (!zf) goto L_401968;
L_401974: /* 401974: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_401977: /* 401977: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40197a: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 40197c: add dword ptr [ebp + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x14u), r);
  }
L_40197f: /* 40197f: mov eax, dword ptr [0x44a9b0] */
  eax = R32((uint32_t)(0x44a9b0u));
/* 401984: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401986: jne 0x40df08 */
  if (!zf) goto L_40df08;
L_40198c: /* 40198c: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 40198f: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 401992: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 401995: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 401998: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40199b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40199e: call dword ptr [0x4390e4] */
  esp -= 4; W32(esp, 0x4019a4u); SPILL(); call_ind(R32(0x4390e4u)); if (g_unwind) return; /* KERNEL32!LCMapStringW */ RELOAD();
L_4019a4: /* 4019a4: lea esp, [ebp - 0x40] */
  esp = (uint32_t)(ebp + 0xffffffc0u);
/* 4019a7: call 0x40105a */
  esp -= 4; W32(esp, 0x4019acu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4019ac: ret  */
  esp += 4; SPILL(); return;
L_40deea: /* 40deea: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x40def0u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 40def0: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40def3: jne 0x40195d */
  if (!zf) goto L_40195d;
L_40def9: /* 40def9: mov dword ptr [0x44a9b0], 2 */
  W32((uint32_t)(0x44a9b0u), 0x2u);
/* 40df03: jmp 0x40195d */
  goto L_40195d;
L_40df08: /* 40df08: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40df0b: je 0x40df11 */
  if (zf) goto L_40df11;
L_40df0d: /* 40df0d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40df0f: jne 0x40df65 */
  if (!zf) goto L_40df65;
L_40df11: /* 40df11: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 40df14: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 40df17: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 40df1a: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40df1d: jne 0x40df27 */
  if (!zf) goto L_40df27;
L_40df1f: /* 40df1f: mov eax, dword ptr [0x449220] */
  eax = R32((uint32_t)(0x449220u));
/* 40df24: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_40df27: /* 40df27: cmp dword ptr [ebp + 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40df2a: jne 0x40df34 */
  if (!zf) goto L_40df34;
L_40df2c: /* 40df2c: mov eax, dword ptr [0x449230] */
  eax = R32((uint32_t)(0x449230u));
/* 40df31: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
L_40df34: /* 40df34: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40df37: call 0x4136de */
  esp -= 4; W32(esp, 0x40df3cu); SPILL(); f_4136de(); if (g_unwind) return; RELOAD();
/* 40df3c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40df3d: cmp dword ptr [ebp + 0x20], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40df40: je 0x40df4a */
  if (zf) goto L_40df4a;
L_40df42: /* 40df42: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40df45: je 0x40df4a */
  if (zf) goto L_40df4a;
L_40df47: /* 40df47: mov dword ptr [ebp + 0x20], eax */
  W32((uint32_t)(ebp + 0x20u), eax);
L_40df4a: /* 40df4a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40df4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40df4c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40df4d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40df4e: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40df51: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40df54: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40df55: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 40df58: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x40df5eu); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 40df5e: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 40df61: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40df63: jne 0x40df6c */
  if (!zf) goto L_40df6c;
L_40df65: /* 40df65: xor eax, eax */
  eax = 0;
/* 40df67: jmp 0x4019a4 */
  goto L_4019a4;
L_40df6c: /* 40df6c: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 40df6f: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40df72: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40df75: call 0x4014ee */
  esp -= 4; W32(esp, 0x40df7au); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 40df7a: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 40df7d: mov eax, esp */
  eax = esp;
/* 40df7f: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 40df82: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40df86: jmp 0x40dfa0 */
  goto L_40dfa0;
L_40dfa0: /* 40dfa0: cmp dword ptr [ebp - 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40dfa3: jne 0x40dfb8 */
  if (!zf) goto L_40dfb8;
L_40dfa5: /* 40dfa5: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 40dfa8: call 0x4010eb */
  esp -= 4; W32(esp, 0x40dfadu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40dfad: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40dfae: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 40dfb1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40dfb3: je 0x40df65 */
  if (zf) goto L_40df65;
L_40dfb5: /* 40dfb5: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
L_40dfb8: /* 40dfb8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dfb9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dfba: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 40dfbd: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40dfc0: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40dfc3: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40dfc6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dfc7: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 40dfca: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x40dfd0u); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 40dfd0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40dfd2: je 0x40e0a2 */
  if (zf) goto L_40e0a2;
L_40dfd8: /* 40dfd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dfd9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dfda: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 40dfdd: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40dfe0: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40dfe3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40dfe6: call dword ptr [0x4390e0] */
  esp -= 4; W32(esp, 0x40dfecu); SPILL(); call_ind(R32(0x4390e0u)); if (g_unwind) return; /* KERNEL32!LCMapStringA */ RELOAD();
/* 40dfec: mov esi, eax */
  esi = eax;
/* 40dfee: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 40dff1: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40dff3: je 0x40e0a2 */
  if (zf) goto L_40e0a2;
L_40dff9: /* 40dff9: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 40dffc: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40dfff: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40e002: call 0x4014ee */
  esp -= 4; W32(esp, 0x40e007u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 40e007: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 40e00a: mov edi, esp */
  edi = esp;
/* 40e00c: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 40e00f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40e013: jmp 0x40e02c */
  goto L_40e02c;
L_40e02c: /* 40e02c: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e02e: jne 0x40e044 */
  if (!zf) goto L_40e044;
L_40e030: /* 40e030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e031: call 0x4010eb */
  esp -= 4; W32(esp, 0x40e036u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40e036: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e037: mov edi, eax */
  edi = eax;
/* 40e039: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e03b: je 0x40e0a5 */
  if (zf) goto L_40e0a5;
L_40e03d: /* 40e03d: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
L_40e044: /* 40e044: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e045: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e046: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 40e049: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40e04c: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40e04f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40e052: call dword ptr [0x4390e0] */
  esp -= 4; W32(esp, 0x40e058u); SPILL(); call_ind(R32(0x4390e0u)); if (g_unwind) return; /* KERNEL32!LCMapStringA */ RELOAD();
/* 40e058: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e05a: je 0x40e0a5 */
  if (zf) goto L_40e0a5;
L_40e05c: /* 40e05c: test byte ptr [ebp + 0xd], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xdu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40e060: je 0x40e081 */
  if (zf) goto L_40e081;
L_40e062: /* 40e062: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 40e065: cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e068: je 0x40e0a5 */
  if (zf) goto L_40e0a5;
L_40e06a: /* 40e06a: cmp dword ptr [ebp + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40e06d: jge 0x40e072 */
  if ((sf == of)) goto L_40e072;
L_40e06f: /* 40e06f: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
L_40e072: /* 40e072: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e073: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e074: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 40e077: call 0x4053f1 */
  esp -= 4; W32(esp, 0x40e07cu); SPILL(); f_4053f1(); if (g_unwind) return; RELOAD();
/* 40e07c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40e07f: jmp 0x40e0a5 */
  goto L_40e0a5;
L_40e081: /* 40e081: cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e084: jne 0x40e08a */
  if (!zf) goto L_40e08a;
L_40e086: /* 40e086: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40e087: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40e088: jmp 0x40e090 */
  goto L_40e090;
L_40e08a: /* 40e08a: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 40e08d: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
L_40e090: /* 40e090: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e091: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e092: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40e094: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 40e097: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x40e09du); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 40e09d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 40e0a0: jmp 0x40e0a5 */
  goto L_40e0a5;
L_40e0a2: /* 40e0a2: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
L_40e0a5: /* 40e0a5: cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e0a8: je 0x40e0b1 */
  if (zf) goto L_40e0b1;
L_40e0aa: /* 40e0aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e0ab: call 0x401156 */
  esp -= 4; W32(esp, 0x40e0b0u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e0b0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40e0b1: /* 40e0b1: cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e0b4: je 0x40e0bf */
  if (zf) goto L_40e0bf;
L_40e0b6: /* 40e0b6: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40e0b9: call 0x401156 */
  esp -= 4; W32(esp, 0x40e0beu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e0be: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40e0bf: /* 40e0bf: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 40e0c2: jmp 0x4019a4 */
  goto L_4019a4;
}

void f_4019b9(void) {
  LOAD_REGS();
  goto L_4019b9;
L_4019ad: /* 4019ad: call 0x4025f2 */
  esp -= 4; W32(esp, 0x4019b2u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 4019b2: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4019b5: mov ecx, eax */
  ecx = eax;
/* 4019b7: jmp 0x4019d0 */
  goto L_4019d0;
L_4019b9: /* 4019b9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4019ba: mov ebp, esp */
  ebp = esp;
/* 4019bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4019bd: call 0x40137f */
  esp -= 4; W32(esp, 0x4019c2u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4019c2: mov ecx, dword ptr [eax + 0x64] */
  ecx = R32((uint32_t)(eax + 0x64u));
/* 4019c5: cmp ecx, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4019cb: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 4019ce: jne 0x4019ad */
  if (!zf) goto L_4019ad;
L_4019d0: /* 4019d0: cmp dword ptr [ecx + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4019d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4019d5: je 0x40d603 */
  if (zf) goto L_40d603;
L_4019db: /* 4019db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4019dc: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4019df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4019e0: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_4019e3: /* 4019e3: xor eax, eax */
  eax = 0;
/* 4019e5: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 4019e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4019e9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4019ea: call 0x4018b7 */
  esp -= 4; W32(esp, 0x4019efu); SPILL(); f_4018b7(); if (g_unwind) return; RELOAD();
/* 4019ef: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4019f0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4019f1: mov ebx, eax */
  ebx = eax;
/* 4019f3: xor eax, eax */
  eax = 0;
/* 4019f5: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 4019f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4019f9: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 4019fc: call 0x4018b7 */
  esp -= 4; W32(esp, 0x401a01u); SPILL(); f_4018b7(); if (g_unwind) return; RELOAD();
/* 401a01: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 401a04: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 401a05: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 401a06: test bx, bx */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 401a09: je 0x401a15 */
  if (zf) goto L_401a15;
L_401a0b: /* 401a0b: cmp bx, ax */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 401a0e: jne 0x401a15 */
  if (!zf) goto L_401a15;
L_401a10: /* 401a10: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 401a13: jmp 0x4019e3 */
  goto L_4019e3;
L_401a15: /* 401a15: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 401a16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_401a17: /* 401a17: movzx ecx, ax */
  ecx = (uint32_t)((eax & 0xffffu));
/* 401a1a: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* 401a1d: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 401a1f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 401a20: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 401a21: ret  */
  esp += 4; SPILL(); return;
L_40d603: /* 40d603: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 40d606: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_40d609: /* 40d609: xor ebx, ebx */
  ebx = 0;
/* 40d60b: mov bx, word ptr [ecx] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 40d60e: cmp bx, 0x41 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40d612: jb 0x40d61d */
  if (cf) goto L_40d61d;
L_40d614: /* 40d614: cmp bx, 0x5a */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40d618: ja 0x40d61d */
  if ((!cf && !zf)) goto L_40d61d;
L_40d61a: /* 40d61a: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_40d61d: /* 40d61d: xor eax, eax */
  eax = 0;
/* 40d61f: mov ax, word ptr [edx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 40d622: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40d626: jb 0x40d631 */
  if (cf) goto L_40d631;
L_40d628: /* 40d628: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40d62c: ja 0x40d631 */
  if ((!cf && !zf)) goto L_40d631;
L_40d62e: /* 40d62e: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_40d631: /* 40d631: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40d632: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40d633: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 40d634: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 40d635: test bx, bx */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 40d638: je 0x401a17 */
  if (zf) goto L_401a17;
L_40d63e: /* 40d63e: cmp bx, ax */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40d641: je 0x40d609 */
  if (zf) goto L_40d609;
L_40d643: /* 40d643: jmp 0x401a17 */
  goto L_401a17;
}

void f_401a22(void) {
  LOAD_REGS();
L_401a22: /* 401a22: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 401a26: mov edx, eax */
  edx = eax;
L_401a28: /* 401a28: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 401a2b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 401a2c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 401a2d: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 401a30: jne 0x401a28 */
  if (!zf) goto L_401a28;
L_401a32: /* 401a32: mov cx, word ptr [esp + 8] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x8u))) & 0xffffu);
L_401a37: /* 401a37: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 401a38: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 401a39: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401a3b: je 0x401a42 */
  if (zf) goto L_401a42;
L_401a3d: /* 401a3d: cmp word ptr [eax], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 401a40: jne 0x401a37 */
  if (!zf) goto L_401a37;
L_401a42: /* 401a42: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 401a45: sub dx, cx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 401a48: neg dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(0 - a);
  cf = (a) != 0;
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 401a4b: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 401a4d: not edx */
  edx = ~edx;
/* 401a4f: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 401a51: ret  */
  esp += 4; SPILL(); return;
}

void f_401a52(void) {
  LOAD_REGS();
L_401a52: /* 401a52: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 401a53: mov ebp, esp */
  ebp = esp;
/* 401a55: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 401a56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 401a57: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 401a58: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 401a5b: jecxz 0x401a7f */
  if (ecx == 0) goto L_401a7f;
L_401a5d: /* 401a5d: mov ebx, ecx */
  ebx = ecx;
/* 401a5f: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 401a62: mov esi, edi */
  esi = edi;
/* 401a64: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 401a66: repne scasb al, byte ptr es:[edi] */
  { uint8_t a = (uint8_t)eax, b = 0, r = 0; int any = 0;
  while (ecx) { b = R8(edi); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r == 0) break; }
  if (any) {
  } }
/* 401a68: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  ecx = r;
  }
/* 401a6a: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 401a6c: mov edi, esi */
  edi = esi;
/* 401a6e: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 401a71: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  } }
/* 401a73: mov al, byte ptr [esi - 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0xffffffffu))) & 0xffu);
/* 401a76: xor ecx, ecx */
  ecx = 0;
/* 401a78: cmp al, byte ptr [edi - 1] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edi + 0xffffffffu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 401a7b: jbe 0x401a86 */
  if ((cf | zf)) goto L_401a86;
L_401a7d: /* 401a7d: not ecx */
  ecx = ~ecx;
L_401a7f: /* 401a7f: mov eax, ecx */
  eax = ecx;
/* 401a81: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 401a82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 401a83: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 401a84: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 401a85: ret  */
  esp += 4; SPILL(); return;
L_401a86: /* 401a86: je 0x401a7f */
  if (zf) goto L_401a7f;
L_401a88: /* 401a88: sub ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 401a8b: jmp 0x401a7d */
  goto L_401a7d;
}

void f_401a95(void) {
  LOAD_REGS();
  goto L_401a95;
L_401a8d: /* 401a8d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 401a8e: je 0x401abf */
  if (zf) goto L_401abf;
L_401a90: /* 401a90: jmp 0x40d648 */
  goto L_40d648;
L_401a95: /* 401a95: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 401a99: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401a9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 401a9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 401a9d: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 401aa1: mov esi, edi */
  esi = edi;
/* 401aa3: je 0x401abf */
  if (zf) goto L_401abf;
L_401aa5: /* 401aa5: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
L_401aa9: /* 401aa9: mov ax, word ptr [edx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 401aac: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
/* 401aaf: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 401ab0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 401ab1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 401ab2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 401ab3: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 401ab6: je 0x401abb */
  if (zf) goto L_401abb;
L_401ab8: /* 401ab8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 401ab9: jne 0x401aa9 */
  if (!zf) goto L_401aa9;
L_401abb: /* 401abb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401abd: jne 0x401a8d */
  if (!zf) goto L_401a8d;
L_401abf: /* 401abf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 401ac0: mov eax, esi */
  eax = esi;
/* 401ac2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 401ac3: ret  */
  esp += 4; SPILL(); return;
L_40d648: /* 40d648: xor eax, eax */
  eax = 0;
/* 40d64a: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  ecx = r;
  }
/* 40d64c: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 40d64e: adc ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 40d650: rep stosw word ptr es:[edi], ax */
  if (!DF) { guest_stos16(edi, (uint16_t)eax, ecx); edi += ecx * 2; ecx = 0; } else { while (ecx) { W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2); ecx--; } }
/* 40d653: jmp 0x401abf */
  goto L_401abf;
}

void f_401adc(void) {
  LOAD_REGS();
  goto L_401adc;
L_401ac4: /* 401ac4: lea ecx, [edi + edi*4] */
  ecx = (uint32_t)(edi + edi*4);
/* 401ac7: lea edi, [eax + ecx*2] */
  edi = (uint32_t)(eax + ecx*2);
/* 401aca: movzx eax, word ptr [esi] */
  eax = (uint32_t)(R16((uint32_t)(esi)));
/* 401acd: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 401ace: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 401acf: jmp 0x401b0b */
  goto L_401b0b;
L_401ad1: /* 401ad1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 401ad2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 401ad3: jmp 0x401ae4 */
  goto L_401ae4;
L_401ad5: /* 401ad5: movzx eax, word ptr [esi] */
  eax = (uint32_t)(R16((uint32_t)(esi)));
/* 401ad8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 401ad9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 401ada: jmp 0x401b09 */
  goto L_401b09;
L_401adc: /* 401adc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 401add: mov ebp, esp */
  ebp = esp;
/* 401adf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 401ae0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 401ae3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_401ae4: /* 401ae4: xor eax, eax */
  eax = 0;
/* 401ae6: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 401ae9: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 401aeb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 401aec: call 0x401414 */
  esp -= 4; W32(esp, 0x401af1u); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 401af1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401af3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401af4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401af5: jne 0x401ad1 */
  if (!zf) goto L_401ad1;
L_401af7: /* 401af7: movzx eax, word ptr [esi] */
  eax = (uint32_t)(R16((uint32_t)(esi)));
/* 401afa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 401afb: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 401afc: cmp eax, 0x2d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401aff: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 401b02: je 0x401ad5 */
  if (zf) goto L_401ad5;
L_401b04: /* 401b04: cmp eax, 0x2b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401b07: je 0x401ad5 */
  if (zf) goto L_401ad5;
L_401b09: /* 401b09: xor edi, edi */
  edi = 0;
L_401b0b: /* 401b0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 401b0c: call 0x401b27 */
  esp -= 4; W32(esp, 0x401b11u); SPILL(); f_401b27(); if (g_unwind) return; RELOAD();
/* 401b11: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401b14: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401b15: jne 0x401ac4 */
  if (!zf) goto L_401ac4;
L_401b17: /* 401b17: cmp dword ptr [ebp + 8], 0x2d */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401b1b: mov eax, edi */
  eax = edi;
/* 401b1d: je 0x40e3a0 */
  if (zf) goto L_40e3a0;
L_401b23: /* 401b23: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 401b24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 401b25: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 401b26: ret  */
  esp += 4; SPILL(); return;
L_40e3a0: /* 40e3a0: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 40e3a2: jmp 0x401b23 */
  goto L_401b23;
}

void f_401b27(void) {
  LOAD_REGS();
L_401b27: /* 401b27: mov ax, word ptr [esp + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4u))) & 0xffffu);
/* 401b2c: cmp ax, 0x30 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 401b30: jb 0x401b44 */
  if (cf) goto L_401b44;
L_401b32: /* 401b32: cmp ax, 0x3a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 401b36: jae 0x40e4c9 */
  if (!cf) goto L_40e4c9;
L_401b3c: /* 401b3c: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 401b3f: nop  */
/* 401b40: sub eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 401b43: ret  */
  esp += 4; SPILL(); return;
L_401b44: /* 401b44: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 401b47: ret  */
  esp += 4; SPILL(); return;
L_40e4c9: /* 40e4c9: mov ecx, 0xff10 */
  ecx = 0xff10u;
/* 40e4ce: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e4d1: jae 0x40e637 */
  if (!cf) goto L_40e637;
L_40e4d7: /* 40e4d7: mov ecx, 0x660 */
  ecx = 0x660u;
/* 40e4dc: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e4df: jb 0x401b44 */
  if (cf) goto L_401b44;
L_40e4e5: /* 40e4e5: cmp ax, 0x66a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x66au);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e4e9: jb 0x40e641 */
  if (cf) goto L_40e641;
L_40e4ef: /* 40e4ef: mov ecx, 0x6f0 */
  ecx = 0x6f0u;
/* 40e4f4: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e4f7: jb 0x401b44 */
  if (cf) goto L_401b44;
L_40e4fd: /* 40e4fd: cmp ax, 0x6fa */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x6fau);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e501: jb 0x40e641 */
  if (cf) goto L_40e641;
L_40e507: /* 40e507: mov ecx, 0x966 */
  ecx = 0x966u;
/* 40e50c: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e50f: jb 0x401b44 */
  if (cf) goto L_401b44;
L_40e515: /* 40e515: cmp ax, 0x970 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x970u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e519: jb 0x40e641 */
  if (cf) goto L_40e641;
L_40e51f: /* 40e51f: mov ecx, 0x9e6 */
  ecx = 0x9e6u;
/* 40e524: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e527: jb 0x401b44 */
  if (cf) goto L_401b44;
L_40e52d: /* 40e52d: cmp ax, 0x9f0 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x9f0u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e531: jb 0x40e641 */
  if (cf) goto L_40e641;
L_40e537: /* 40e537: mov ecx, 0xa66 */
  ecx = 0xa66u;
/* 40e53c: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e53f: jb 0x401b44 */
  if (cf) goto L_401b44;
L_40e545: /* 40e545: cmp ax, 0xa70 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xa70u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e549: jb 0x40e641 */
  if (cf) goto L_40e641;
L_40e54f: /* 40e54f: mov ecx, 0xae6 */
  ecx = 0xae6u;
/* 40e554: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e557: jb 0x401b44 */
  if (cf) goto L_401b44;
L_40e55d: /* 40e55d: cmp ax, 0xaf0 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xaf0u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e561: jb 0x40e641 */
  if (cf) goto L_40e641;
L_40e567: /* 40e567: mov ecx, 0xb66 */
  ecx = 0xb66u;
/* 40e56c: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e56f: jb 0x401b44 */
  if (cf) goto L_401b44;
L_40e575: /* 40e575: cmp ax, 0xb70 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xb70u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e579: jb 0x40e641 */
  if (cf) goto L_40e641;
L_40e57f: /* 40e57f: mov ecx, 0xc66 */
  ecx = 0xc66u;
/* 40e584: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e587: jb 0x401b44 */
  if (cf) goto L_401b44;
L_40e58d: /* 40e58d: cmp ax, 0xc70 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xc70u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e591: jb 0x40e641 */
  if (cf) goto L_40e641;
L_40e597: /* 40e597: mov ecx, 0xce6 */
  ecx = 0xce6u;
/* 40e59c: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e59f: jb 0x401b44 */
  if (cf) goto L_401b44;
L_40e5a5: /* 40e5a5: cmp ax, 0xcf0 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xcf0u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e5a9: jb 0x40e641 */
  if (cf) goto L_40e641;
L_40e5af: /* 40e5af: mov ecx, 0xd66 */
  ecx = 0xd66u;
/* 40e5b4: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e5b7: jb 0x401b44 */
  if (cf) goto L_401b44;
L_40e5bd: /* 40e5bd: cmp ax, 0xd70 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xd70u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e5c1: jb 0x40e641 */
  if (cf) goto L_40e641;
L_40e5c3: /* 40e5c3: mov ecx, 0xe50 */
  ecx = 0xe50u;
/* 40e5c8: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e5cb: jb 0x401b44 */
  if (cf) goto L_401b44;
L_40e5d1: /* 40e5d1: cmp ax, 0xe5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xe5au);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e5d5: jb 0x40e641 */
  if (cf) goto L_40e641;
L_40e5d7: /* 40e5d7: mov ecx, 0xed0 */
  ecx = 0xed0u;
/* 40e5dc: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e5df: jb 0x401b44 */
  if (cf) goto L_401b44;
L_40e5e5: /* 40e5e5: cmp ax, 0xeda */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xedau);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e5e9: jb 0x40e641 */
  if (cf) goto L_40e641;
L_40e5eb: /* 40e5eb: add ecx, 0x50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 40e5ee: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e5f1: jb 0x401b44 */
  if (cf) goto L_401b44;
L_40e5f7: /* 40e5f7: cmp ax, 0xf2a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xf2au);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e5fb: jb 0x40e641 */
  if (cf) goto L_40e641;
L_40e5fd: /* 40e5fd: mov ecx, 0x1040 */
  ecx = 0x1040u;
/* 40e602: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e605: jb 0x401b44 */
  if (cf) goto L_401b44;
L_40e60b: /* 40e60b: cmp ax, 0x104a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x104au);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e60f: jb 0x40e641 */
  if (cf) goto L_40e641;
L_40e611: /* 40e611: mov ecx, 0x17e0 */
  ecx = 0x17e0u;
/* 40e616: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e619: jb 0x401b44 */
  if (cf) goto L_401b44;
L_40e61f: /* 40e61f: cmp ax, 0x17ea */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x17eau);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e623: jb 0x40e641 */
  if (cf) goto L_40e641;
L_40e625: /* 40e625: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 40e628: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e62b: jb 0x401b44 */
  if (cf) goto L_401b44;
L_40e631: /* 40e631: cmp ax, 0x181a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x181au);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40e635: jmp 0x40e63b */
  goto L_40e63b;
L_40e637: /* 40e637: cmp ax, 0xff1a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xff1au);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
L_40e63b: /* 40e63b: jae 0x401b44 */
  if (!cf) goto L_401b44;
L_40e641: /* 40e641: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 40e644: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 40e646: ret  */
  esp += 4; SPILL(); return;
}

void f_401b48(void) {
  LOAD_REGS();
L_401b48: /* 401b48: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 401b49: mov ebp, esp */
  ebp = esp;
/* 401b4b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 401b4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 401b4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 401b4e: xor edi, edi */
  edi = 0;
/* 401b50: call 0x40137f */
  esp -= 4; W32(esp, 0x401b55u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 401b55: mov esi, dword ptr [eax + 0x64] */
  esi = R32((uint32_t)(eax + 0x64u));
/* 401b58: cmp esi, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401b5e: jne 0x40eb87 */
  if (!zf) goto L_40eb87;
L_401b64: /* 401b64: cmp dword ptr [ebp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401b67: je 0x401bb7 */
  if (zf) goto L_401bb7;
L_401b69: /* 401b69: cmp dword ptr [esi + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401b6c: je 0x40eb93 */
  if (zf) goto L_40eb93;
L_401b72: /* 401b72: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 401b75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 401b76: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
L_401b79: /* 401b79: xor eax, eax */
  eax = 0;
/* 401b7b: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 401b7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 401b7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 401b80: call 0x4018b7 */
  esp -= 4; W32(esp, 0x401b85u); SPILL(); f_4018b7(); if (g_unwind) return; RELOAD();
/* 401b85: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 401b86: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 401b87: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 401b8a: xor eax, eax */
  eax = 0;
/* 401b8c: mov ax, word ptr [ebx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 401b8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 401b90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 401b91: call 0x4018b7 */
  esp -= 4; W32(esp, 0x401b96u); SPILL(); f_4018b7(); if (g_unwind) return; RELOAD();
/* 401b96: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 401b99: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 401b9a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 401b9b: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 401b9e: je 0x401bad */
  if (zf) goto L_401bad;
L_401ba0: /* 401ba0: cmp word ptr [ebp - 4], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 401ba5: je 0x401bad */
  if (zf) goto L_401bad;
L_401ba7: /* 401ba7: cmp word ptr [ebp - 4], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 401bab: je 0x401b79 */
  if (zf) goto L_401b79;
L_401bad: /* 401bad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_401bae: /* 401bae: movzx edi, word ptr [ebp - 4] */
  edi = (uint32_t)(R16((uint32_t)(ebp + 0xfffffffcu)));
/* 401bb2: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 401bb5: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_401bb7: /* 401bb7: mov eax, edi */
  eax = edi;
/* 401bb9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 401bba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 401bbb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 401bbc: ret  */
  esp += 4; SPILL(); return;
L_40eb87: /* 40eb87: call 0x4025f2 */
  esp -= 4; W32(esp, 0x40eb8cu); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 40eb8c: mov esi, eax */
  esi = eax;
/* 40eb8e: jmp 0x401b64 */
  goto L_401b64;
L_40eb93: /* 40eb93: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 40eb96: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
L_40eb99: /* 40eb99: xor eax, eax */
  eax = 0;
/* 40eb9b: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 40eb9e: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40eba2: jb 0x40ebad */
  if (cf) goto L_40ebad;
L_40eba4: /* 40eba4: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40eba8: ja 0x40ebad */
  if ((!cf && !zf)) goto L_40ebad;
L_40ebaa: /* 40ebaa: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_40ebad: /* 40ebad: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 40ebb0: xor eax, eax */
  eax = 0;
/* 40ebb2: mov ax, word ptr [edx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 40ebb5: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40ebb9: jb 0x40ebc4 */
  if (cf) goto L_40ebc4;
L_40ebbb: /* 40ebbb: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40ebbf: ja 0x40ebc4 */
  if ((!cf && !zf)) goto L_40ebc4;
L_40ebc1: /* 40ebc1: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_40ebc4: /* 40ebc4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40ebc5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40ebc6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 40ebc7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 40ebc8: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 40ebcb: je 0x401bae */
  if (zf) goto L_401bae;
L_40ebd1: /* 40ebd1: cmp word ptr [ebp - 4], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40ebd5: je 0x401bae */
  if (zf) goto L_401bae;
L_40ebdb: /* 40ebdb: cmp word ptr [ebp - 4], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40ebdf: je 0x40eb99 */
  if (zf) goto L_40eb99;
L_40ebe1: /* 40ebe1: jmp 0x401bae */
  goto L_401bae;
}

void f_401bbd(void) {
  LOAD_REGS();
L_401bbd: /* 401bbd: xor eax, eax */
  eax = 0;
/* 401bbf: mov ecx, dword ptr fs:[0] */
  ecx = R32((uint32_t)(FS_BASE + 0x0u));
/* 401bc6: cmp dword ptr [ecx + 4], 0x406fb5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(0x406fb5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401bcd: je 0x40703f */
  if (zf) goto L_40703f;
L_401bd3: /* 401bd3: ret  */
  esp += 4; SPILL(); return;
L_40703f: /* 40703f: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 407042: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 407045: cmp dword ptr [ecx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 407048: jne 0x401bd3 */
  if (!zf) goto L_401bd3;
L_40704e: /* 40704e: mov eax, 1 */
  eax = 0x1u;
/* 407053: jmp 0x401bd3 */
  goto L_401bd3;
}

void f_401bd4(void) {
  LOAD_REGS();
L_401bd4: /* 401bd4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 401bd5: mov ebp, esp */
  ebp = esp;
/* 401bd7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 401bd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 401bd9: call 0x40137f */
  esp -= 4; W32(esp, 0x401bdeu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 401bde: mov ebx, dword ptr [eax + 0x64] */
  ebx = R32((uint32_t)(eax + 0x64u));
/* 401be1: cmp ebx, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401be7: jne 0x40d658 */
  if (!zf) goto L_40d658;
L_401bed: /* 401bed: cmp dword ptr [ebx + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401bf1: je 0x40d664 */
  if (zf) goto L_40d664;
L_401bf7: /* 401bf7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 401bf8: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 401bfb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 401bfc: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_401bff: /* 401bff: movzx eax, byte ptr [esi] */
  eax = (uint32_t)(R8((uint32_t)(esi)));
/* 401c02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 401c03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 401c04: call 0x401c2f */
  esp -= 4; W32(esp, 0x401c09u); SPILL(); f_401c2f(); if (g_unwind) return; RELOAD();
/* 401c09: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 401c0c: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* 401c0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 401c10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 401c11: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 401c12: call 0x401c2f */
  esp -= 4; W32(esp, 0x401c17u); SPILL(); f_401c2f(); if (g_unwind) return; RELOAD();
/* 401c17: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 401c1a: mov ecx, eax */
  ecx = eax;
/* 401c1c: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 401c1f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 401c20: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401c22: je 0x401c28 */
  if (zf) goto L_401c28;
L_401c24: /* 401c24: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401c26: je 0x401bff */
  if (zf) goto L_401bff;
L_401c28: /* 401c28: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 401c29: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 401c2b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_401c2c: /* 401c2c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 401c2d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 401c2e: ret  */
  esp += 4; SPILL(); return;
L_40d658: /* 40d658: call 0x4025f2 */
  esp -= 4; W32(esp, 0x40d65du); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 40d65d: mov ebx, eax */
  ebx = eax;
/* 40d65f: jmp 0x401bed */
  goto L_401bed;
L_40d664: /* 40d664: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40d667: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40d66a: call 0x407907 */
  esp -= 4; W32(esp, 0x40d66fu); SPILL(); f_407907(); if (g_unwind) return; RELOAD();
/* 40d66f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d670: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d671: jmp 0x401c2c */
  goto L_401c2c;
}

void f_401c2f(void) {
  LOAD_REGS();
L_401c2f: /* 401c2f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 401c30: mov ebp, esp */
  ebp = esp;
/* 401c32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 401c33: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 401c34: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 401c37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 401c38: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 401c3b: cmp dword ptr [esi + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401c3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 401c40: je 0x401c55 */
  if (zf) goto L_401c55;
L_401c42: /* 401c42: cmp dword ptr [esi + 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x24u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401c46: je 0x40da6a */
  if (zf) goto L_40da6a;
L_401c4c: /* 401c4c: cmp ebx, 0x7f */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 401c4f: ja 0x40da6a */
  if ((!cf && !zf)) goto L_40da6a;
L_401c55: /* 401c55: cmp ebx, 0x41 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x41u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 401c58: jl 0x401c67 */
  if ((sf != of)) goto L_401c67;
L_401c5a: /* 401c5a: cmp ebx, 0x5a */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x5au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 401c5d: lea eax, [ebx + 0x20] */
  eax = (uint32_t)(ebx + 0x20u);
/* 401c60: jg 0x401c67 */
  if ((!zf && sf == of)) goto L_401c67;
L_401c62: /* 401c62: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 401c63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 401c64: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 401c65: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 401c66: ret  */
  esp += 4; SPILL(); return;
L_401c67: /* 401c67: mov eax, ebx */
  eax = ebx;
/* 401c69: jmp 0x401c62 */
  goto L_401c62;
L_40da6a: /* 40da6a: xor edi, edi */
  edi = 0;
/* 40da6c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 40da6d: cmp ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40da73: jae 0x40da98 */
  if (!cf) goto L_40da98;
L_40da75: /* 40da75: cmp dword ptr [esi + 0x28], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x28u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40da78: jle 0x40da87 */
  if ((zf || sf != of)) goto L_40da87;
L_40da7a: /* 40da7a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40da7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40da7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40da7d: call 0x415666 */
  esp -= 4; W32(esp, 0x40da82u); SPILL(); f_415666(); if (g_unwind) return; RELOAD();
/* 40da82: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40da85: jmp 0x40da90 */
  goto L_40da90;
L_40da87: /* 40da87: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 40da8a: movzx eax, byte ptr [eax + ebx*2] */
  eax = (uint32_t)(R8((uint32_t)(eax + ebx*2)));
/* 40da8e: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_40da90: /* 40da90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40da92: je 0x401c67 */
  if (zf) goto L_401c67;
L_40da98: /* 40da98: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 40da9b: mov eax, ebx */
  eax = ebx;
/* 40da9d: sar eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 40daa0: movzx ecx, al */
  ecx = (uint32_t)((eax & 0xffu));
/* 40daa3: test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + ecx*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40daa8: je 0x40dab9 */
  if (zf) goto L_40dab9;
L_40daaa: /* 40daaa: and byte ptr [ebp + 0xa], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xau))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xau), r);
  }
/* 40daae: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 40dab0: mov byte ptr [ebp + 8], al */
  W8((uint32_t)(ebp + 0x8u), (eax & 0xffu));
/* 40dab3: mov byte ptr [ebp + 9], bl */
  W8((uint32_t)(ebp + 0x9u), (ebx & 0xffu));
/* 40dab6: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40dab7: jmp 0x40dac2 */
  goto L_40dac2;
L_40dab9: /* 40dab9: and byte ptr [ebp + 9], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x9u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x9u), r);
  }
/* 40dabd: mov byte ptr [ebp + 8], bl */
  W8((uint32_t)(ebp + 0x8u), (ebx & 0xffu));
/* 40dac0: mov eax, edi */
  eax = edi;
L_40dac2: /* 40dac2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40dac3: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 40dac6: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 40dac9: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 40dacb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40dacc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40dacd: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 40dad0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40dad1: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 40dad6: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 40dad9: call 0x40462b */
  esp -= 4; W32(esp, 0x40dadeu); SPILL(); f_40462b(); if (g_unwind) return; RELOAD();
/* 40dade: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40dae1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40dae3: je 0x401c67 */
  if (zf) goto L_401c67;
L_40dae9: /* 40dae9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40daeb: jne 0x40daf6 */
  if (!zf) goto L_40daf6;
L_40daed: /* 40daed: movzx eax, byte ptr [ebp - 4] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xfffffffcu)));
/* 40daf1: jmp 0x401c62 */
  goto L_401c62;
L_40daf6: /* 40daf6: movzx ecx, byte ptr [ebp - 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xfffffffdu)));
/* 40dafa: xor eax, eax */
  eax = 0;
/* 40dafc: mov ah, byte ptr [ebp - 4] */
  eax = (eax & 0xffff00ffu) | (((uint32_t)(R8((uint32_t)(ebp + 0xfffffffcu))) & 0xffu) << 8);
/* 40daff: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40db01: jmp 0x401c62 */
  goto L_401c62;
}

void f_401c76(void) {
  LOAD_REGS();
  goto L_401c76;
L_401c6b: /* 401c6b: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 401c6e: call 0x4010eb */
  esp -= 4; W32(esp, 0x401c73u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 401c73: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401c74: jmp 0x401cd3 */
  goto L_401cd3;
L_401c76: /* 401c76: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 401c78: push 0x43e1e8 */
  { uint32_t v = 0x43e1e8u; esp -= 4; W32(esp, v); }
/* 401c7d: call 0x40101f */
  esp -= 4; W32(esp, 0x401c82u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 401c82: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 401c85: xor edi, edi */
  edi = 0;
/* 401c87: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401c89: je 0x401c6b */
  if (zf) goto L_401c6b;
L_401c8b: /* 401c8b: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 401c8e: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401c90: je 0x40db62 */
  if (zf) goto L_40db62;
L_401c96: /* 401c96: mov eax, dword ptr [0x44a84c] */
  eax = R32((uint32_t)(0x44a84cu));
/* 401c9b: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401c9e: je 0x40db6e */
  if (zf) goto L_40db6e;
L_401ca4: /* 401ca4: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401ca7: je 0x40dca7 */
  if (zf) goto L_40dca7;
L_401cad: /* 401cad: xor eax, eax */
  eax = 0;
/* 401caf: cmp esi, -0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 401cb2: ja 0x401ccb */
  if ((!cf && !zf)) goto L_401ccb;
L_401cb4: /* 401cb4: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401cb6: je 0x40ddf6 */
  if (zf) goto L_40ddf6;
L_401cbc: /* 401cbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 401cbd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 401cbe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 401cbf: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 401cc5: call dword ptr [0x439098] */
  esp -= 4; W32(esp, 0x401ccbu); SPILL(); call_ind(R32(0x439098u)); if (g_unwind) return; /* KERNEL32!HeapReAlloc */ RELOAD();
L_401ccb: /* 401ccb: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401ccd: je 0x40ddfe */
  if (zf) goto L_40ddfe;
L_401cd3: /* 401cd3: call 0x40105a */
  esp -= 4; W32(esp, 0x401cd8u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 401cd8: ret  */
  esp += 4; SPILL(); return;
L_40db62: /* 40db62: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40db63: call 0x401156 */
  esp -= 4; W32(esp, 0x40db68u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40db68: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40db69: jmp 0x40de19 */
  goto L_40de19;
L_40db6e: /* 40db6e: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 40db71: cmp esi, -0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40db74: ja 0x40dc6b */
  if ((!cf && !zf)) goto L_40dc6b;
L_40db7a: /* 40db7a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40db7c: call 0x4011b7 */
  esp -= 4; W32(esp, 0x40db81u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 40db81: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40db82: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 40db85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40db86: call 0x410467 */
  esp -= 4; W32(esp, 0x40db8bu); SPILL(); f_410467(); if (g_unwind) return; RELOAD();
/* 40db8b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40db8c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 40db8f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40db91: je 0x40dc3b */
  if (zf) goto L_40dc3b;
L_40db97: /* 40db97: cmp esi, dword ptr [0x44f678] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44f678u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40db9d: ja 0x40dbeb */
  if ((!cf && !zf)) goto L_40dbeb;
L_40db9f: /* 40db9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40dba0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dba1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40dba2: call 0x410967 */
  esp -= 4; W32(esp, 0x40dba7u); SPILL(); f_410967(); if (g_unwind) return; RELOAD();
/* 40dba7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40dbaa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40dbac: je 0x40dbb3 */
  if (zf) goto L_40dbb3;
L_40dbae: /* 40dbae: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 40dbb1: jmp 0x40dbeb */
  goto L_40dbeb;
L_40dbb3: /* 40dbb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40dbb4: call 0x41170d */
  esp -= 4; W32(esp, 0x40dbb9u); SPILL(); f_41170d(); if (g_unwind) return; RELOAD();
/* 40dbb9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40dbba: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 40dbbd: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40dbbf: je 0x40dbeb */
  if (zf) goto L_40dbeb;
L_40dbc1: /* 40dbc1: mov eax, dword ptr [ebx - 4] */
  eax = R32((uint32_t)(ebx + 0xfffffffcu));
/* 40dbc4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 40dbc5: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 40dbc8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40dbca: jb 0x40dbce */
  if (cf) goto L_40dbce;
L_40dbcc: /* 40dbcc: mov eax, esi */
  eax = esi;
L_40dbce: /* 40dbce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40dbcf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dbd0: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 40dbd3: call 0x40126b */
  esp -= 4; W32(esp, 0x40dbd8u); SPILL(); hle_memcpy(); RELOAD();
/* 40dbd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dbd9: call 0x410467 */
  esp -= 4; W32(esp, 0x40dbdeu); SPILL(); f_410467(); if (g_unwind) return; RELOAD();
/* 40dbde: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 40dbe1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dbe2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40dbe3: call 0x410492 */
  esp -= 4; W32(esp, 0x40dbe8u); SPILL(); f_410492(); if (g_unwind) return; RELOAD();
/* 40dbe8: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_40dbeb: /* 40dbeb: cmp dword ptr [ebp - 0x1c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40dbee: jne 0x40dc3b */
  if (!zf) goto L_40dc3b;
L_40dbf0: /* 40dbf0: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40dbf2: jne 0x40dbfa */
  if (!zf) goto L_40dbfa;
L_40dbf4: /* 40dbf4: xor esi, esi */
  esi = 0;
/* 40dbf6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40dbf7: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
L_40dbfa: /* 40dbfa: add esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40dbfd: and esi, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 40dc00: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 40dc03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40dc04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40dc05: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 40dc0b: call dword ptr [0x43907c] */
  esp -= 4; W32(esp, 0x40dc11u); SPILL(); call_ind(R32(0x43907cu)); if (g_unwind) return; /* KERNEL32!HeapAlloc */ RELOAD();
/* 40dc11: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 40dc14: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40dc16: je 0x40dc3b */
  if (zf) goto L_40dc3b;
L_40dc18: /* 40dc18: mov eax, dword ptr [ebx - 4] */
  eax = R32((uint32_t)(ebx + 0xfffffffcu));
/* 40dc1b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 40dc1c: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 40dc1f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40dc21: jb 0x40dc25 */
  if (cf) goto L_40dc25;
L_40dc23: /* 40dc23: mov eax, esi */
  eax = esi;
L_40dc25: /* 40dc25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40dc26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dc27: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 40dc2a: call 0x40126b */
  esp -= 4; W32(esp, 0x40dc2fu); SPILL(); hle_memcpy(); RELOAD();
/* 40dc2f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dc30: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 40dc33: call 0x410492 */
  esp -= 4; W32(esp, 0x40dc38u); SPILL(); f_410492(); if (g_unwind) return; RELOAD();
/* 40dc38: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_40dc3b: /* 40dc3b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40dc3f: call 0x40dc9e */
  esp -= 4; W32(esp, 0x40dc44u); SPILL(); f_40dc9e(); if (g_unwind) return; RELOAD();
/* 40dc44: cmp dword ptr [ebp - 0x20], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40dc47: jne 0x40dc6b */
  if (!zf) goto L_40dc6b;
L_40dc49: /* 40dc49: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40dc4b: jne 0x40dc50 */
  if (!zf) goto L_40dc50;
L_40dc4d: /* 40dc4d: xor esi, esi */
  esi = 0;
/* 40dc4f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_40dc50: /* 40dc50: add esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40dc53: and esi, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 40dc56: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 40dc59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40dc5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dc5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40dc5c: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 40dc62: call dword ptr [0x439098] */
  esp -= 4; W32(esp, 0x40dc68u); SPILL(); call_ind(R32(0x439098u)); if (g_unwind) return; /* KERNEL32!HeapReAlloc */ RELOAD();
/* 40dc68: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_40dc6b: /* 40dc6b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 40dc6e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40dc70: jne 0x401cd3 */
  if (!zf) goto L_401cd3;
L_40dc76: /* 40dc76: cmp dword ptr [0x44a854], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44a854u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40dc7c: je 0x401cd3 */
  if (zf) goto L_401cd3;
L_40dc82: /* 40dc82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40dc83: call 0x40f297 */
  esp -= 4; W32(esp, 0x40dc88u); SPILL(); f_40f297(); if (g_unwind) return; RELOAD();
/* 40dc88: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40dc89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40dc8b: jne 0x40db6e */
  if (!zf) goto L_40db6e;
L_40dc91: /* 40dc91: jmp 0x40de19 */
  goto L_40de19;
L_40dca7: /* 40dca7: cmp esi, -0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40dcaa: ja 0x40dcbe */
  if ((!cf && !zf)) goto L_40dcbe;
L_40dcac: /* 40dcac: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40dcae: jbe 0x40dcb8 */
  if ((cf | zf)) goto L_40dcb8;
L_40dcb0: /* 40dcb0: add esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40dcb3: and esi, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 40dcb6: jmp 0x40dcbb */
  goto L_40dcbb;
L_40dcb8: /* 40dcb8: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 40dcba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_40dcbb: /* 40dcbb: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
L_40dcbe: /* 40dcbe: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 40dcc1: cmp esi, -0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40dcc4: ja 0x40ddbd */
  if ((!cf && !zf)) goto L_40ddbd;
L_40dcca: /* 40dcca: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40dccc: call 0x4011b7 */
  esp -= 4; W32(esp, 0x40dcd1u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 40dcd1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40dcd2: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 40dcd9: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 40dcdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40dcdd: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 40dce0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40dce1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dce2: call 0x411288 */
  esp -= 4; W32(esp, 0x40dce7u); SPILL(); f_411288(); if (g_unwind) return; RELOAD();
/* 40dce7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40dcea: mov edi, eax */
  edi = eax;
/* 40dcec: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 40dcef: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40dcf1: je 0x40dda1 */
  if (zf) goto L_40dda1;
L_40dcf7: /* 40dcf7: cmp esi, dword ptr [0x44dca4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44dca4u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40dcfd: jae 0x40dd5b */
  if (!cf) goto L_40dd5b;
L_40dcff: /* 40dcff: mov ebx, esi */
  ebx = esi;
/* 40dd01: shr ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 40dd04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dd05: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40dd06: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 40dd09: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40dd0c: call 0x411443 */
  esp -= 4; W32(esp, 0x40dd11u); SPILL(); f_411443(); if (g_unwind) return; RELOAD();
/* 40dd11: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40dd14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40dd16: je 0x40dd20 */
  if (zf) goto L_40dd20;
L_40dd18: /* 40dd18: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40dd1b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 40dd1e: jmp 0x40dd58 */
  goto L_40dd58;
L_40dd20: /* 40dd20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dd21: call 0x411a09 */
  esp -= 4; W32(esp, 0x40dd26u); SPILL(); f_411a09(); if (g_unwind) return; RELOAD();
/* 40dd26: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40dd27: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 40dd2a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40dd2c: je 0x40dd58 */
  if (zf) goto L_40dd58;
L_40dd2e: /* 40dd2e: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* 40dd31: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 40dd34: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 40dd37: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40dd39: jb 0x40dd3d */
  if (cf) goto L_40dd3d;
L_40dd3b: /* 40dd3b: mov eax, esi */
  eax = esi;
L_40dd3d: /* 40dd3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40dd3e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40dd41: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 40dd44: call 0x40126b */
  esp -= 4; W32(esp, 0x40dd49u); SPILL(); hle_memcpy(); RELOAD();
/* 40dd49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40dd4a: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 40dd4d: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40dd50: call 0x4112de */
  esp -= 4; W32(esp, 0x40dd55u); SPILL(); f_4112de(); if (g_unwind) return; RELOAD();
/* 40dd55: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_40dd58: /* 40dd58: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_40dd5b: /* 40dd5b: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40dd5f: jne 0x40ddb4 */
  if (!zf) goto L_40ddb4;
L_40dd61: /* 40dd61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40dd62: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40dd64: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 40dd6a: call dword ptr [0x43907c] */
  esp -= 4; W32(esp, 0x40dd70u); SPILL(); call_ind(R32(0x43907cu)); if (g_unwind) return; /* KERNEL32!HeapAlloc */ RELOAD();
/* 40dd70: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 40dd73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40dd75: je 0x40ddb4 */
  if (zf) goto L_40ddb4;
L_40dd77: /* 40dd77: movzx eax, byte ptr [edi] */
  eax = (uint32_t)(R8((uint32_t)(edi)));
/* 40dd7a: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 40dd7d: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 40dd80: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40dd82: jb 0x40dd86 */
  if (cf) goto L_40dd86;
L_40dd84: /* 40dd84: mov eax, esi */
  eax = esi;
L_40dd86: /* 40dd86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40dd87: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dd88: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 40dd8b: call 0x40126b */
  esp -= 4; W32(esp, 0x40dd90u); SPILL(); hle_memcpy(); RELOAD();
/* 40dd90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40dd91: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 40dd94: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 40dd97: call 0x4112de */
  esp -= 4; W32(esp, 0x40dd9cu); SPILL(); f_4112de(); if (g_unwind) return; RELOAD();
/* 40dd9c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40dd9f: jmp 0x40ddb4 */
  goto L_40ddb4;
L_40dda1: /* 40dda1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40dda2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40dda3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40dda5: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 40ddab: call dword ptr [0x439098] */
  esp -= 4; W32(esp, 0x40ddb1u); SPILL(); call_ind(R32(0x439098u)); if (g_unwind) return; /* KERNEL32!HeapReAlloc */ RELOAD();
/* 40ddb1: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_40ddb4: /* 40ddb4: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40ddb8: call 0x40ddeb */
  esp -= 4; W32(esp, 0x40ddbdu); SPILL(); f_40ddeb(); if (g_unwind) return; RELOAD();
L_40ddbd: /* 40ddbd: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 40ddc0: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ddc2: jne 0x401cd3 */
  if (!zf) goto L_401cd3;
L_40ddc8: /* 40ddc8: cmp dword ptr [0x44a854], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44a854u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ddce: je 0x401cd3 */
  if (zf) goto L_401cd3;
L_40ddd4: /* 40ddd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40ddd5: call 0x40f297 */
  esp -= 4; W32(esp, 0x40dddau); SPILL(); f_40f297(); if (g_unwind) return; RELOAD();
/* 40ddda: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40dddb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40dddd: jne 0x40dcbe */
  if (!zf) goto L_40dcbe;
L_40dde3: /* 40dde3: jmp 0x40de19 */
  goto L_40de19;
L_40ddf6: /* 40ddf6: xor esi, esi */
  esi = 0;
/* 40ddf8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40ddf9: jmp 0x401cbc */
  goto L_401cbc;
L_40ddfe: /* 40ddfe: cmp dword ptr [0x44a854], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44a854u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40de04: je 0x401cd3 */
  if (zf) goto L_401cd3;
L_40de0a: /* 40de0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40de0b: call 0x40f297 */
  esp -= 4; W32(esp, 0x40de10u); SPILL(); f_40f297(); if (g_unwind) return; RELOAD();
/* 40de10: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40de11: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40de13: jne 0x401cad */
  if (!zf) goto L_401cad;
L_40de19: /* 40de19: xor eax, eax */
  eax = 0;
/* 40de1b: jmp 0x401cd3 */
  goto L_401cd3;
}

void f_401cd9(void) {
  LOAD_REGS();
L_401cd9: /* 401cd9: cmp dword ptr [esp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401cde: jne 0x40d9b7 */
  if (!zf) goto L_40d9b7;
L_401ce4: /* 401ce4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 401ce5: mov esi, ecx */
  esi = ecx;
L_401ce7: /* 401ce7: xor edx, edx */
  edx = 0;
/* 401ce9: div dword ptr [esp + 8] */
  { uint32_t d = R32((uint32_t)(esp + 0x8u)); if (!d) d = guest_divzero(0x401ce9);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 401ced: cmp edx, 9 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 401cf0: ja 0x40d9c2 */
  if ((!cf && !zf)) goto L_40d9c2;
L_401cf6: /* 401cf6: add dl, 0x30 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_401cf9: /* 401cf9: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 401cfb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 401cfc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 401cfe: ja 0x401ce7 */
  if ((!cf && !zf)) goto L_401ce7;
L_401d00: /* 401d00: and byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ecx), r);
  }
/* 401d03: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
L_401d04: /* 401d04: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 401d06: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 401d08: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 401d0a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 401d0b: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 401d0d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 401d0e: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 401d10: jb 0x401d04 */
  if (cf) goto L_401d04;
L_401d12: /* 401d12: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 401d13: ret  */
  esp += 4; SPILL(); return;
L_40d9b7: /* 40d9b7: mov byte ptr [ecx], 0x2d */
  W8((uint32_t)(ecx), 0x2du);
/* 40d9ba: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40d9bb: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 40d9bd: jmp 0x401ce4 */
  goto L_401ce4;
L_40d9c2: /* 40d9c2: add dl, 0x57 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x57u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40d9c5: jmp 0x401cf9 */
  goto L_401cf9;
}

void f_401d57(void) {
  LOAD_REGS();
  goto L_401d57;
L_401d14: /* 401d14: test eax, 0xff000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401d19: jne 0x401d68 */
  if (!zf) goto L_401d68;
L_401d1b: /* 401d1b: lea edi, [ecx - 1] */
  edi = (uint32_t)(ecx + 0xffffffffu);
/* 401d1e: jmp 0x401d95 */
  goto L_401d95;
L_401d20: /* 401d20: lea edi, [ecx - 3] */
  edi = (uint32_t)(ecx + 0xfffffffdu);
/* 401d23: jmp 0x401d95 */
  goto L_401d95;
L_401d25: /* 401d25: lea edi, [ecx - 4] */
  edi = (uint32_t)(ecx + 0xfffffffcu);
/* 401d28: jmp 0x401d95 */
  goto L_401d95;
L_401d2a: /* 401d2a: mov word ptr [edi], dx */
  W16((uint32_t)(edi), (edx & 0xffffu));
/* 401d2d: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 401d31: mov byte ptr [edi + 2], 0 */
  W8((uint32_t)(edi + 0x2u), 0x0u);
/* 401d35: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 401d36: ret  */
  esp += 4; SPILL(); return;
L_401d37: /* 401d37: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* 401d39: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 401d3d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 401d3e: ret  */
  esp += 4; SPILL(); return;
L_401d3f: /* 401d3f: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 401d41: add ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 401d44: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 401d46: je 0x401d37 */
  if (zf) goto L_401d37;
L_401d48: /* 401d48: mov byte ptr [edi], dl */
  W8((uint32_t)(edi), (edx & 0xffu));
/* 401d4a: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 401d4d: test ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401d53: jne 0x401d3f */
  if (!zf) goto L_401d3f;
L_401d55: /* 401d55: jmp 0x401da1 */
  goto L_401da1;
L_401d57: /* 401d57: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 401d5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 401d5c: test ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401d62: jne 0x407079 */
  if (!zf) goto L_407079;
L_401d68: /* 401d68: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 401d6a: mov edx, 0x7efefeff */
  edx = 0x7efefeffu;
/* 401d6f: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 401d71: xor eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 401d74: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 401d76: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 401d79: test eax, 0x81010100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x81010100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401d7e: je 0x401d68 */
  if (zf) goto L_401d68;
L_401d80: /* 401d80: mov eax, dword ptr [ecx - 4] */
  eax = R32((uint32_t)(ecx + 0xfffffffcu));
/* 401d83: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 401d85: je 0x401d25 */
  if (zf) goto L_401d25;
L_401d87: /* 401d87: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 401d89: je 0x401d20 */
  if (zf) goto L_401d20;
L_401d8b: /* 401d8b: test eax, 0xff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff0000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401d90: jne 0x401d14 */
  if (!zf) goto L_401d14;
L_401d92: /* 401d92: lea edi, [ecx - 2] */
  edi = (uint32_t)(ecx + 0xfffffffeu);
L_401d95: /* 401d95: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 401d99: test ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401d9f: jne 0x401d3f */
  if (!zf) goto L_401d3f;
L_401da1: /* 401da1: mov edx, 0x7efefeff */
  edx = 0x7efefeffu;
/* 401da6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 401da8: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 401daa: xor eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 401dad: xor eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 401daf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 401db1: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 401db4: test eax, 0x81010100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x81010100u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401db9: jne 0x401dc2 */
  if (!zf) goto L_401dc2;
L_401dbb: /* 401dbb: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 401dbd: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 401dc0: jmp 0x401da1 */
  goto L_401da1;
L_401dc2: /* 401dc2: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 401dc4: je 0x401d37 */
  if (zf) goto L_401d37;
L_401dca: /* 401dca: test dh, dh */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(((edx >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 401dcc: je 0x401dea */
  if (zf) goto L_401dea;
L_401dce: /* 401dce: test edx, 0xff0000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xff0000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401dd4: je 0x401d2a */
  if (zf) goto L_401d2a;
L_401dda: /* 401dda: test edx, 0xff000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xff000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401de0: jne 0x401dbb */
  if (!zf) goto L_401dbb;
L_401de2: /* 401de2: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 401de4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 401de8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 401de9: ret  */
  esp += 4; SPILL(); return;
L_401dea: /* 401dea: mov word ptr [edi], dx */
  W16((uint32_t)(edi), (edx & 0xffffu));
/* 401ded: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 401df1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 401df2: ret  */
  esp += 4; SPILL(); return;
L_407079: /* 407079: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 40707b: add ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 40707e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 407080: je 0x401d1b */
  if (zf) goto L_401d1b;
L_407086: /* 407086: test ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40708c: jne 0x407079 */
  if (!zf) goto L_407079;
L_40708e: /* 40708e: mov edi, edi */
  edi = edi;
/* 407090: jmp 0x401d68 */
  goto L_401d68;
}

void f_401df3(void) {
  LOAD_REGS();
L_401df3: /* 401df3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 401df7: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 401dfb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 401dfd: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 401e01: call 0x401cd9 */
  esp -= 4; W32(esp, 0x401e06u); SPILL(); f_401cd9(); if (g_unwind) return; RELOAD();
/* 401e06: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 401e0a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401e0b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401e0c: ret  */
  esp += 4; SPILL(); return;
}

void f_401f19(void) {
  LOAD_REGS();
L_401f19: /* 401f19: test byte ptr [edi + 0xc], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0xcu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 401f1d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 401f1e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 401f1f: mov esi, eax */
  esi = eax;
/* 401f21: mov ebx, ecx */
  ebx = ecx;
/* 401f23: je 0x401f2f */
  if (zf) goto L_401f2f;
L_401f25: /* 401f25: cmp dword ptr [edi + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401f29: je 0x40e770 */
  if (zf) goto L_40e770;
L_401f2f: /* 401f2f: cmp dword ptr [esp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 401f34: jle 0x401f4f */
  if ((zf || sf != of)) goto L_401f4f;
L_401f36: /* 401f36: dec dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esp + 0xcu), r);
  }
/* 401f3a: xor eax, eax */
  eax = 0;
/* 401f3c: mov ax, word ptr [ebx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 401f3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 401f40: mov eax, edi */
  eax = edi;
/* 401f42: call 0x401f52 */
  esp -= 4; W32(esp, 0x401f47u); SPILL(); f_401f52(); if (g_unwind) return; RELOAD();
/* 401f47: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 401f48: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 401f49: cmp dword ptr [esi], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401f4c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401f4d: jne 0x401f2f */
  if (!zf) goto L_401f2f;
L_401f4f: /* 401f4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 401f50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 401f51: ret  */
  esp += 4; SPILL(); return;
L_40e770: /* 40e770: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 40e774: add dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
/* 40e776: jmp 0x401f4f */
  goto L_401f4f;
}

void f_401f52(void) {
  LOAD_REGS();
L_401f52: /* 401f52: test byte ptr [eax + 0xc], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xcu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 401f56: je 0x401f5e */
  if (zf) goto L_401f5e;
L_401f58: /* 401f58: cmp dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401f5c: je 0x401f74 */
  if (zf) goto L_401f74;
L_401f5e: /* 401f5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 401f5f: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 401f63: call 0x401f77 */
  esp -= 4; W32(esp, 0x401f68u); SPILL(); f_401f77(); if (g_unwind) return; RELOAD();
/* 401f68: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 401f6c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401f6d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401f6e: je 0x40e76c */
  if (zf) goto L_40e76c;
L_401f74: /* 401f74: inc dword ptr [esi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi), r);
  }
/* 401f76: ret  */
  esp += 4; SPILL(); return;
L_40e76c: /* 40e76c: or dword ptr [esi], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 40e76f: ret  */
  esp += 4; SPILL(); return;
}

void f_401f77(void) {
  LOAD_REGS();
L_401f77: /* 401f77: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 401f78: mov ebp, esp */
  ebp = esp;
/* 401f7a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 401f7d: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 401f82: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 401f85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 401f86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 401f87: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 401f8a: test byte ptr [esi + 0xc], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xcu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 401f8e: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 401f91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 401f92: je 0x40e6c5 */
  if (zf) goto L_40e6c5;
L_401f98: /* 401f98: add dword ptr [esi + 4], -2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 401f9c: js 0x40e75a */
  if (sf) goto L_40e75a;
L_401fa2: /* 401fa2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 401fa4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 401fa7: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 401faa: add dword ptr [esi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi), r);
  }
L_401fad: /* 401fad: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 401fb0: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 401fb3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 401fb4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 401fb5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 401fb6: call 0x4013ab */
  esp -= 4; W32(esp, 0x401fbbu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 401fbb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 401fbc: ret  */
  esp += 4; SPILL(); return;
L_40e6c5: /* 40e6c5: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 40e6c8: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e6cb: je 0x40e6e4 */
  if (zf) goto L_40e6e4;
L_40e6cd: /* 40e6cd: mov ecx, eax */
  ecx = eax;
/* 40e6cf: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 40e6d2: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 40e6d9: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 40e6dc: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 40e6df: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 40e6e2: jmp 0x40e6e9 */
  goto L_40e6e9;
L_40e6e4: /* 40e6e4: mov eax, 0x449008 */
  eax = 0x449008u;
L_40e6e9: /* 40e6e9: test byte ptr [eax + 4], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40e6ed: je 0x401f98 */
  if (zf) goto L_401f98;
L_40e6f3: /* 40e6f3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40e6f6: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 40e6f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e6fa: call 0x402a4e */
  esp -= 4; W32(esp, 0x40e6ffu); SPILL(); f_402a4e(); if (g_unwind) return; RELOAD();
/* 40e6ff: mov ebx, eax */
  ebx = eax;
/* 40e701: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e704: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e705: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e706: jne 0x40e71c */
  if (!zf) goto L_40e71c;
L_40e708: /* 40e708: call 0x4102a5 */
  esp -= 4; W32(esp, 0x40e70du); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 40e70d: mov dword ptr [eax], 0x2a */
  W32((uint32_t)(eax), 0x2au);
L_40e713: /* 40e713: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 40e717: jmp 0x401fad */
  goto L_401fad;
L_40e71c: /* 40e71c: xor edi, edi */
  edi = 0;
/* 40e71e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40e720: jle 0x40e751 */
  if ((zf || sf != of)) goto L_40e751;
L_40e722: /* 40e722: dec dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 40e725: js 0x40e739 */
  if (sf) goto L_40e739;
L_40e727: /* 40e727: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 40e729: mov cl, byte ptr [ebp + edi - 0xc] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + edi + 0xfffffff4u))) & 0xffu);
/* 40e72d: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 40e72f: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 40e731: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 40e734: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40e735: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 40e737: jmp 0x40e747 */
  goto L_40e747;
L_40e739: /* 40e739: movsx eax, byte ptr [ebp + edi - 0xc] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + edi + 0xfffffff4u)));
/* 40e73e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e73f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e740: call 0x414470 */
  esp -= 4; W32(esp, 0x40e745u); SPILL(); f_414470(); if (g_unwind) return; RELOAD();
/* 40e745: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e746: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40e747: /* 40e747: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e74a: je 0x40e713 */
  if (zf) goto L_40e713;
L_40e74c: /* 40e74c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 40e74d: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40e74f: jl 0x40e722 */
  if ((sf != of)) goto L_40e722;
L_40e751: /* 40e751: mov ax, word ptr [ebp + 8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x8u))) & 0xffffu);
/* 40e755: jmp 0x401fad */
  goto L_401fad;
L_40e75a: /* 40e75a: movzx eax, word ptr [ebp + 8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0x8u)));
/* 40e75e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e75f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e760: call 0x42f675 */
  esp -= 4; W32(esp, 0x40e765u); SPILL(); f_42f675(); if (g_unwind) return; RELOAD();
/* 40e765: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e766: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e767: jmp 0x401fad */
  goto L_401fad;
}

void f_401feb(void) {
  LOAD_REGS();
  goto L_401feb;
L_401e0d: /* 401e0d: xor eax, eax */
  eax = 0;
/* 401e0f: or dword ptr [ebp - 0xc], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 401e13: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 401e16: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 401e19: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 401e1c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 401e1f: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 401e22: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 401e25: jmp 0x401fd7 */
  goto L_401fd7;
L_401e2a: /* 401e2a: cmp eax, 0x65 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x65u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 401e2d: jge 0x40e8cd */
  if ((sf == of)) goto L_40e8cd;
L_401e33: /* 401e33: cmp eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 401e36: jle 0x40e84c */
  if ((zf || sf != of)) goto L_40e84c;
L_401e3c: /* 401e3c: sub eax, 0x5a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 401e3f: je 0x40e956 */
  if (zf) goto L_40e956;
L_401e45: /* 401e45: sub eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 401e48: je 0x40e8fb */
  if (zf) goto L_40e8fb;
L_401e4e: /* 401e4e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 401e4f: jne 0x4020d9 */
  if (!zf) goto L_4020d9;
L_401e55: /* 401e55: or dword ptr [ebp - 8], 0x40 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_401e59: /* 401e59: mov dword ptr [ebp - 0x14], 0xa */
  W32((uint32_t)(ebp + 0xffffffecu), 0xau);
/* 401e60: jmp 0x4022af */
  goto L_4022af;
L_401e65: /* 401e65: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 401e68: cmp edx, -1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 401e6b: jne 0x401e72 */
  if (!zf) goto L_401e72;
L_401e6d: /* 401e6d: mov edx, 0x7fffffff */
  edx = 0x7fffffffu;
L_401e72: /* 401e72: add dword ptr [ebp + 0x10], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 401e76: test byte ptr [ebp - 8], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 401e7a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 401e7d: mov eax, dword ptr [eax - 4] */
  eax = R32((uint32_t)(eax + 0xfffffffcu));
/* 401e80: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 401e83: jne 0x40e880 */
  if (!zf) goto L_40e880;
L_401e89: /* 401e89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 401e8b: je 0x40ea57 */
  if (zf) goto L_40ea57;
L_401e91: /* 401e91: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 401e94: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 401e9b: jmp 0x4020cd */
  goto L_4020cd;
L_401ea0: /* 401ea0: add dword ptr [ebp + 0x10], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 401ea4: test bl, 0x20 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 401ea7: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 401eaa: jne 0x40eacf */
  if (!zf) goto L_40eacf;
L_401eb0: /* 401eb0: test bl, 0x40 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 401eb3: mov eax, dword ptr [eax - 4] */
  eax = R32((uint32_t)(eax + 0xfffffffcu));
/* 401eb6: je 0x40eae6 */
  if (zf) goto L_40eae6;
L_401ebc: /* 401ebc: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 401ebd: jmp 0x4022cd */
  goto L_4022cd;
L_401ec2: /* 401ec2: add ecx, dword ptr [ebp - 0x34] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 401ec5: jmp 0x402338 */
  goto L_402338;
L_401eca: /* 401eca: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 401ecd: jne 0x40eb3e */
  if (!zf) goto L_40eb3e;
L_401ed3: /* 401ed3: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 401ed5: jne 0x40eb46 */
  if (!zf) goto L_40eb46;
L_401edb: /* 401edb: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 401edd: je 0x4020ee */
  if (zf) goto L_4020ee;
L_401ee3: /* 401ee3: jmp 0x40eb4e */
  goto L_40eb4e;
L_401ee8: /* 401ee8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 401ee9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_401eea: /* 401eea: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 401eed: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 401ef0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 401ef3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 401ef4: call 0x4013ab */
  esp -= 4; W32(esp, 0x401ef9u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 401ef9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 401efa: ret  */
  esp += 4; SPILL(); return;
L_401f05: /* 401f05: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 401f08: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 401f0b: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 401f0e: call 0x401f19 */
  esp -= 4; W32(esp, 0x401f13u); SPILL(); f_401f19(); if (g_unwind) return; RELOAD();
/* 401f13: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 401f14: jmp 0x40217e */
  goto L_40217e;
L_401fbd: /* 401fbd: cmp bx, 0x2a */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x2au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 401fc1: je 0x40e77b */
  if (zf) goto L_40e77b;
L_401fc7: /* 401fc7: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 401fca: movzx ecx, bx */
  ecx = (uint32_t)((ebx & 0xffffu));
/* 401fcd: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 401fd0: lea eax, [ecx + eax*2 - 0x30] */
  eax = (uint32_t)(ecx + eax*2 + 0xffffffd0u);
/* 401fd4: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
L_401fd7: /* 401fd7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 401fda: mov bx, word ptr [eax] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 401fdd: test bx, bx */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 401fe0: je 0x401ee8 */
  if (zf) goto L_401ee8;
L_401fe6: /* 401fe6: mov ecx, dword ptr [ebp - 0x40] */
  ecx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 401fe9: jmp 0x40201e */
  goto L_40201e;
L_401feb: /* 401feb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 401fec: mov ebp, esp */
  ebp = esp;
/* 401fee: sub esp, 0x458 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x458u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 401ff4: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 401ff9: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 401ffc: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 401fff: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 402002: xor eax, eax */
  eax = 0;
/* 402004: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 402005: mov bx, word ptr [edx] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 402008: xor ecx, ecx */
  ecx = 0;
/* 40200a: cmp bx, ax */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40200d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 402010: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 402013: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 402016: je 0x401eea */
  if (zf) goto L_401eea;
L_40201c: /* 40201c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40201d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_40201e: /* 40201e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 402020: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 402021: add dword ptr [ebp + 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 402024: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 402028: jl 0x401ee8 */
  if ((sf != of)) goto L_401ee8;
L_40202e: /* 40202e: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 402030: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 402031: cmp bx, si */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 402034: jb 0x40243e */
  if (cf) goto L_40243e;
L_40203a: /* 40203a: cmp bx, 0x78 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x78u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40203e: ja 0x40243e */
  if ((!cf && !zf)) goto L_40243e;
L_402044: /* 402044: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* 402047: movsx eax, byte ptr [eax + 0x43e158] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + 0x43e158u)));
/* 40204e: and eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_402051: /* 402051: movsx eax, byte ptr [ecx + eax*8 + 0x43e178] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx + eax*8 + 0x43e178u)));
/* 402059: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 40205b: sar eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 40205e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40205f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 402061: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 402064: ja 0x401fd7 */
  if ((!cf && !zf)) goto L_401fd7;
L_40206a: /* 40206a: jmp dword ptr [eax*4 + 0x402071] */
  switch (R32((uint32_t)(eax*4 + 0x402071u))) {
    case 0x401e0du: goto L_401e0d;
    case 0x401fbdu: goto L_401fbd;
    case 0x402091u: goto L_402091;
    case 0x402251u: goto L_402251;
    case 0x4023c6u: goto L_4023c6;
    case 0x402410u: goto L_402410;
    case 0x40e79cu: goto L_40e79c;
    case 0x40e7a5u: goto L_40e7a5;
    default: guest_badjump(0x40206a, R32((uint32_t)(eax*4 + 0x402071u))); return;
  }
L_402091: /* 402091: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 402094: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 402095: lea esi, [ebp - 0x18] */
  esi = (uint32_t)(ebp + 0xffffffe8u);
/* 402098: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 40209f: call 0x401f52 */
  esp -= 4; W32(esp, 0x4020a4u); SPILL(); f_401f52(); if (g_unwind) return; RELOAD();
L_4020a4: /* 4020a4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4020a5: jmp 0x401fd7 */
  goto L_401fd7;
L_4020aa: /* 4020aa: lea eax, [ebp - 0x259] */
  eax = (uint32_t)(ebp + 0xfffffda7u);
/* 4020b0: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4020b2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4020b3: test byte ptr [ebp - 7], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4020b7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 4020ba: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 4020bd: je 0x4020d9 */
  if (zf) goto L_4020d9;
L_4020bf: /* 4020bf: jmp 0x40eb20 */
  goto L_40eb20;
L_4020c4: /* 4020c4: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 4020c5: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4020c9: je 0x4020d1 */
  if (zf) goto L_4020d1;
L_4020cb: /* 4020cb: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_4020cd: /* 4020cd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4020cf: jne 0x4020c4 */
  if (!zf) goto L_4020c4;
L_4020d1: /* 4020d1: sub eax, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4020d4: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_4020d6: /* 4020d6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_4020d9: /* 4020d9: cmp dword ptr [ebp - 0x38], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4020dd: jne 0x402188 */
  if (!zf) goto L_402188;
L_4020e3: /* 4020e3: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 4020e6: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4020e8: jne 0x401eca */
  if (!zf) goto L_401eca;
L_4020ee: /* 4020ee: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 4020f1: sub ebx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 4020f4: sub ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 4020f7: test byte ptr [ebp - 8], 0xc */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4020fb: je 0x40238d */
  if (zf) goto L_40238d;
L_402101: /* 402101: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 402104: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 402107: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 40210a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 40210d: call 0x401f19 */
  esp -= 4; W32(esp, 0x402112u); SPILL(); f_401f19(); if (g_unwind) return; RELOAD();
/* 402112: test byte ptr [ebp - 8], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 402116: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 402117: je 0x40212e */
  if (zf) goto L_40212e;
L_402119: /* 402119: test byte ptr [ebp - 8], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40211d: jne 0x40212e */
  if (!zf) goto L_40212e;
L_40211f: /* 40211f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 402120: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 402121: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 402123: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 402126: call 0x4023a3 */
  esp -= 4; W32(esp, 0x40212bu); SPILL(); f_4023a3(); if (g_unwind) return; RELOAD();
/* 40212b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_40212e: /* 40212e: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402132: jne 0x401f05 */
  if (!zf) goto L_401f05;
L_402138: /* 402138: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 40213b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40213d: jle 0x401f05 */
  if ((zf || sf != of)) goto L_401f05;
L_402143: /* 402143: mov edi, dword ptr [ebp - 0x10] */
  edi = R32((uint32_t)(ebp + 0xfffffff0u));
/* 402146: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
L_402149: /* 402149: push dword ptr [0x44902c] */
  { uint32_t v = R32((uint32_t)(0x44902cu)); esp -= 4; W32(esp, v); }
/* 40214f: dec dword ptr [ebp - 0x3c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffc4u), r);
  }
/* 402152: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 402155: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 402156: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402157: call 0x402197 */
  esp -= 4; W32(esp, 0x40215cu); SPILL(); f_402197(); if (g_unwind) return; RELOAD();
/* 40215c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40215f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 402161: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 402164: jle 0x40217e */
  if ((zf || sf != of)) goto L_40217e;
L_402166: /* 402166: push dword ptr [ebp - 0x48] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb8u)); esp -= 4; W32(esp, v); }
/* 402169: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40216c: lea esi, [ebp - 0x18] */
  esi = (uint32_t)(ebp + 0xffffffe8u);
/* 40216f: call 0x401f52 */
  esp -= 4; W32(esp, 0x402174u); SPILL(); f_401f52(); if (g_unwind) return; RELOAD();
/* 402174: add edi, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 402177: cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40217b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40217c: jg 0x402149 */
  if ((!zf && sf == of)) goto L_402149;
L_40217e: /* 40217e: test byte ptr [ebp - 8], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 402182: jne 0x40eb60 */
  if (!zf) goto L_40eb60;
L_402188: /* 402188: cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40218c: je 0x401fd7 */
  if (zf) goto L_401fd7;
L_402192: /* 402192: jmp 0x40eb76 */
  goto L_40eb76;
L_402236: /* 402236: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 402238: jg 0x4022d6 */
  if ((!zf && sf == of)) goto L_4022d6;
L_40223e: /* 40223e: jl 0x40eaed */
  if ((sf != of)) goto L_40eaed;
L_402244: /* 402244: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 402246: jae 0x4022d6 */
  if (!cf) goto L_4022d6;
L_40224c: /* 40224c: jmp 0x40eaed */
  goto L_40eaed;
L_402251: /* 402251: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* 402254: cmp eax, 0x67 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x67u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 402257: jle 0x401e2a */
  if ((zf || sf != of)) goto L_401e2a;
L_40225d: /* 40225d: sub eax, 0x69 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x69u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 402260: je 0x401e55 */
  if (zf) goto L_401e55;
L_402266: /* 402266: sub eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 402269: je 0x40eaa5 */
  if (zf) goto L_40eaa5;
L_40226f: /* 40226f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 402270: je 0x40ea8b */
  if (zf) goto L_40ea8b;
L_402276: /* 402276: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 402277: je 0x40ea64 */
  if (zf) goto L_40ea64;
L_40227d: /* 40227d: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 402280: je 0x401e65 */
  if (zf) goto L_401e65;
L_402286: /* 402286: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 402288: je 0x401e59 */
  if (zf) goto L_401e59;
L_40228e: /* 40228e: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 402291: jne 0x4020d9 */
  if (!zf) goto L_4020d9;
L_402297: /* 402297: mov dword ptr [ebp - 0x34], 0x27 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x27u);
L_40229e: /* 40229e: test byte ptr [ebp - 8], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4022a2: mov dword ptr [ebp - 0x14], 0x10 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x10u);
/* 4022a9: jne 0x40ea73 */
  if (!zf) goto L_40ea73;
L_4022af: /* 4022af: mov ebx, dword ptr [ebp - 8] */
  ebx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 4022b2: mov esi, 0x8000 */
  esi = 0x8000u;
/* 4022b7: test esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4022b9: je 0x401ea0 */
  if (zf) goto L_401ea0;
L_4022bf: /* 4022bf: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 4022c2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4022c4: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 4022c7: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4022ca: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
L_4022cd: /* 4022cd: test bl, 0x40 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4022d0: jne 0x402236 */
  if (!zf) goto L_402236;
L_4022d6: /* 4022d6: test dword ptr [ebp - 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4022d9: mov ebx, eax */
  ebx = eax;
/* 4022db: mov edi, edx */
  edi = edx;
/* 4022dd: je 0x402437 */
  if (zf) goto L_402437;
L_4022e3: /* 4022e3: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4022e7: jge 0x40eafd */
  if ((sf == of)) goto L_40eafd;
L_4022ed: /* 4022ed: mov dword ptr [ebp - 0xc], 1 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x1u);
L_4022f4: /* 4022f4: mov eax, ebx */
  eax = ebx;
/* 4022f6: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 4022f8: je 0x40eb17 */
  if (zf) goto L_40eb17;
L_4022fe: /* 4022fe: lea esi, [ebp - 0x259] */
  esi = (uint32_t)(ebp + 0xfffffda7u);
L_402304: /* 402304: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 402307: dec dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 40230a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40230c: jg 0x402318 */
  if ((!zf && sf == of)) goto L_402318;
L_40230e: /* 40230e: mov eax, ebx */
  eax = ebx;
/* 402310: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 402312: je 0x4020aa */
  if (zf) goto L_4020aa;
L_402318: /* 402318: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 40231b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 40231c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 40231d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40231e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40231f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 402320: call 0x40233d */
  esp -= 4; W32(esp, 0x402325u); SPILL(); f_40233d(); if (g_unwind) return; RELOAD();
/* 402325: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 402328: cmp ecx, 0x39 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x39u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40232b: mov dword ptr [ebp - 0x4c], ebx */
  W32((uint32_t)(ebp + 0xffffffb4u), ebx);
/* 40232e: mov ebx, eax */
  ebx = eax;
/* 402330: mov edi, edx */
  edi = edx;
/* 402332: jg 0x401ec2 */
  if ((!zf && sf == of)) goto L_401ec2;
L_402338: /* 402338: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* 40233a: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 40233b: jmp 0x402304 */
  goto L_402304;
L_40238d: /* 40238d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 402390: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 402393: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 402394: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 402396: call 0x4023a3 */
  esp -= 4; W32(esp, 0x40239bu); SPILL(); f_4023a3(); if (g_unwind) return; RELOAD();
/* 40239b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40239e: jmp 0x402101 */
  goto L_402101;
L_4023c6: /* 4023c6: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* 4023c9: cmp eax, 0x49 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x49u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4023cc: jne 0x4023f9 */
  if (!zf) goto L_4023f9;
L_4023ce: /* 4023ce: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4023d1: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 4023d4: cmp ax, 0x36 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x36u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4023d8: jne 0x402470 */
  if (!zf) goto L_402470;
L_4023de: /* 4023de: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 4023e1: cmp word ptr [ecx + 2], 0x34 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x2u))); uint16_t b = (uint16_t)(0x34u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4023e6: jne 0x402470 */
  if (!zf) goto L_402470;
L_4023ec: /* 4023ec: add dword ptr [ebp + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 4023f0: or byte ptr [ebp - 7], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
/* 4023f4: jmp 0x401fd7 */
  goto L_401fd7;
L_4023f9: /* 4023f9: cmp eax, 0x68 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4023fc: je 0x402468 */
  if (zf) goto L_402468;
L_4023fe: /* 4023fe: cmp eax, 0x6c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402401: jne 0x40e7de */
  if (!zf) goto L_40e7de;
L_402407: /* 402407: or dword ptr [ebp - 8], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 40240b: jmp 0x401fd7 */
  goto L_401fd7;
L_402410: /* 402410: movzx eax, bx */
  eax = (uint32_t)((ebx & 0xffffu));
/* 402413: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 402415: je 0x402460 */
  if (zf) goto L_402460;
L_402417: /* 402417: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 40241a: je 0x402457 */
  if (zf) goto L_402457;
L_40241c: /* 40241c: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 40241f: je 0x40244e */
  if (zf) goto L_40244e;
L_402421: /* 402421: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 402423: je 0x402445 */
  if (zf) goto L_402445;
L_402425: /* 402425: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 402428: jne 0x401fd7 */
  if (!zf) goto L_401fd7;
L_40242e: /* 40242e: or dword ptr [ebp - 8], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 402432: jmp 0x401fd7 */
  goto L_401fd7;
L_402437: /* 402437: xor edi, edi */
  edi = 0;
/* 402439: jmp 0x4022e3 */
  goto L_4022e3;
L_40243e: /* 40243e: xor eax, eax */
  eax = 0;
/* 402440: jmp 0x402051 */
  goto L_402051;
L_402445: /* 402445: or dword ptr [ebp - 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 402449: jmp 0x401fd7 */
  goto L_401fd7;
L_40244e: /* 40244e: or dword ptr [ebp - 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 402452: jmp 0x401fd7 */
  goto L_401fd7;
L_402457: /* 402457: or byte ptr [ebp - 8], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 40245b: jmp 0x401fd7 */
  goto L_401fd7;
L_402460: /* 402460: or dword ptr [ebp - 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 402463: jmp 0x401fd7 */
  goto L_401fd7;
L_402468: /* 402468: or dword ptr [ebp - 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 40246b: jmp 0x401fd7 */
  goto L_401fd7;
L_402470: /* 402470: cmp ax, 0x33 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x33u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 402474: jne 0x40e807 */
  if (!zf) goto L_40e807;
L_40247a: /* 40247a: jmp 0x40e7f0 */
  goto L_40e7f0;
L_40e77b: /* 40e77b: add dword ptr [ebp + 0x10], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 40e77f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 40e782: mov eax, dword ptr [eax - 4] */
  eax = R32((uint32_t)(eax + 0xfffffffcu));
/* 40e785: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40e787: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 40e78a: jge 0x401fd7 */
  if ((sf == of)) goto L_401fd7;
L_40e790: /* 40e790: or dword ptr [ebp - 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 40e794: neg dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(0 - a);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 40e797: jmp 0x401fd7 */
  goto L_401fd7;
L_40e79c: /* 40e79c: and dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 40e7a0: jmp 0x401fd7 */
  goto L_401fd7;
L_40e7a5: /* 40e7a5: cmp bx, 0x2a */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x2au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40e7a9: jne 0x40e7c9 */
  if (!zf) goto L_40e7c9;
L_40e7ab: /* 40e7ab: add dword ptr [ebp + 0x10], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 40e7af: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 40e7b2: mov eax, dword ptr [eax - 4] */
  eax = R32((uint32_t)(eax + 0xfffffffcu));
/* 40e7b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40e7b7: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 40e7ba: jge 0x401fd7 */
  if ((sf == of)) goto L_401fd7;
L_40e7c0: /* 40e7c0: or dword ptr [ebp - 0xc], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 40e7c4: jmp 0x401fd7 */
  goto L_401fd7;
L_40e7c9: /* 40e7c9: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 40e7cc: movzx ecx, bx */
  ecx = (uint32_t)((ebx & 0xffffu));
/* 40e7cf: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 40e7d2: lea eax, [ecx + eax*2 - 0x30] */
  eax = (uint32_t)(ecx + eax*2 + 0xffffffd0u);
/* 40e7d6: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 40e7d9: jmp 0x401fd7 */
  goto L_401fd7;
L_40e7de: /* 40e7de: cmp eax, 0x77 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x77u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e7e1: jne 0x401fd7 */
  if (!zf) goto L_401fd7;
L_40e7e7: /* 40e7e7: or byte ptr [ebp - 7], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
/* 40e7eb: jmp 0x401fd7 */
  goto L_401fd7;
L_40e7f0: /* 40e7f0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 40e7f3: cmp word ptr [ecx + 2], 0x32 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x2u))); uint16_t b = (uint16_t)(0x32u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40e7f8: jne 0x40e807 */
  if (!zf) goto L_40e807;
L_40e7fa: /* 40e7fa: add dword ptr [ebp + 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 40e7fe: and byte ptr [ebp - 7], 0x7f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
/* 40e802: jmp 0x401fd7 */
  goto L_401fd7;
L_40e807: /* 40e807: cmp ax, 0x64 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x64u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40e80b: je 0x401fd7 */
  if (zf) goto L_401fd7;
L_40e811: /* 40e811: cmp ax, 0x69 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x69u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40e815: je 0x401fd7 */
  if (zf) goto L_401fd7;
L_40e81b: /* 40e81b: cmp ax, 0x6f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x6fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40e81f: je 0x401fd7 */
  if (zf) goto L_401fd7;
L_40e825: /* 40e825: cmp ax, 0x75 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x75u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40e829: je 0x401fd7 */
  if (zf) goto L_401fd7;
L_40e82f: /* 40e82f: cmp ax, 0x78 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x78u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40e833: je 0x401fd7 */
  if (zf) goto L_401fd7;
L_40e839: /* 40e839: cmp ax, 0x58 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x58u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40e83d: je 0x401fd7 */
  if (zf) goto L_401fd7;
L_40e843: /* 40e843: and dword ptr [ebp - 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffc0u), r);
  }
/* 40e847: jmp 0x402091 */
  goto L_402091;
L_40e84c: /* 40e84c: je 0x40ea6b */
  if (zf) goto L_40ea6b;
L_40e852: /* 40e852: sub eax, 0x43 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x43u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 40e855: je 0x40e8f0 */
  if (zf) goto L_40e8f0;
L_40e85b: /* 40e85b: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 40e85d: je 0x40e8c4 */
  if (zf) goto L_40e8c4;
L_40e85f: /* 40e85f: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 40e861: je 0x40e8c4 */
  if (zf) goto L_40e8c4;
L_40e863: /* 40e863: sub eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 40e866: jne 0x4020d9 */
  if (!zf) goto L_4020d9;
L_40e86c: /* 40e86c: test word ptr [ebp - 8], 0x830 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff8u))); uint16_t b = (uint16_t)(0x830u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 40e872: jne 0x401e65 */
  if (!zf) goto L_401e65;
L_40e878: /* 40e878: or dword ptr [ebp - 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 40e87b: jmp 0x401e65 */
  goto L_401e65;
L_40e880: /* 40e880: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e882: jne 0x40e88c */
  if (!zf) goto L_40e88c;
L_40e884: /* 40e884: mov eax, dword ptr [0x44dd08] */
  eax = R32((uint32_t)(0x44dd08u));
/* 40e889: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
L_40e88c: /* 40e88c: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 40e890: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40e892: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 40e895: jle 0x4020d9 */
  if ((zf || sf != of)) goto L_4020d9;
L_40e89b: /* 40e89b: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 40e89d: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40e89f: je 0x4020d9 */
  if (zf) goto L_4020d9;
L_40e8a5: /* 40e8a5: mov esi, dword ptr [0x449030] */
  esi = R32((uint32_t)(0x449030u));
/* 40e8ab: movzx ecx, cl */
  ecx = (uint32_t)((ecx & 0xffu));
/* 40e8ae: test byte ptr [esi + ecx*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + ecx*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40e8b3: je 0x40e8b6 */
  if (zf) goto L_40e8b6;
L_40e8b5: /* 40e8b5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_40e8b6: /* 40e8b6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40e8b7: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 40e8ba: cmp dword ptr [ebp - 0x14], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40e8bd: jl 0x40e89b */
  if ((sf != of)) goto L_40e89b;
L_40e8bf: /* 40e8bf: jmp 0x4020d9 */
  goto L_4020d9;
L_40e8c4: /* 40e8c4: mov dword ptr [ebp - 0x44], 1 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x1u);
/* 40e8cb: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_40e8cd: /* 40e8cd: or dword ptr [ebp - 8], 0x40 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 40e8d1: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40e8d5: lea esi, [ebp - 0x458] */
  esi = (uint32_t)(ebp + 0xfffffba8u);
/* 40e8db: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 40e8de: jge 0x40e99f */
  if ((sf == of)) goto L_40e99f;
L_40e8e4: /* 40e8e4: mov dword ptr [ebp - 0xc], 6 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x6u);
/* 40e8eb: jmp 0x40e9e7 */
  goto L_40e9e7;
L_40e8f0: /* 40e8f0: test word ptr [ebp - 8], 0x830 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff8u))); uint16_t b = (uint16_t)(0x830u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 40e8f6: jne 0x40e8fb */
  if (!zf) goto L_40e8fb;
L_40e8f8: /* 40e8f8: or dword ptr [ebp - 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_40e8fb: /* 40e8fb: add dword ptr [ebp + 0x10], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 40e8ff: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 40e902: movzx eax, word ptr [eax - 4] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0xfffffffcu)));
/* 40e906: xor esi, esi */
  esi = 0;
/* 40e908: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40e909: test byte ptr [ebp - 8], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40e90d: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 40e910: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 40e913: je 0x40e93e */
  if (zf) goto L_40e93e;
L_40e915: /* 40e915: push dword ptr [0x44902c] */
  { uint32_t v = R32((uint32_t)(0x44902cu)); esp -= 4; W32(esp, v); }
/* 40e91b: and byte ptr [ebp - 0x2b], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffd5u), r);
  }
/* 40e91f: mov byte ptr [ebp - 0x2c], al */
  W8((uint32_t)(ebp + 0xffffffd4u), (eax & 0xffu));
/* 40e922: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 40e925: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e926: lea eax, [ebp - 0x458] */
  eax = (uint32_t)(ebp + 0xfffffba8u);
/* 40e92c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e92d: call 0x402197 */
  esp -= 4; W32(esp, 0x40e932u); SPILL(); f_402197(); if (g_unwind) return; RELOAD();
/* 40e932: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40e935: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40e937: jge 0x40e945 */
  if ((sf == of)) goto L_40e945;
L_40e939: /* 40e939: mov dword ptr [ebp - 0x38], esi */
  W32((uint32_t)(ebp + 0xffffffc8u), esi);
/* 40e93c: jmp 0x40e945 */
  goto L_40e945;
L_40e93e: /* 40e93e: mov word ptr [ebp - 0x458], ax */
  W16((uint32_t)(ebp + 0xfffffba8u), (eax & 0xffffu));
L_40e945: /* 40e945: lea eax, [ebp - 0x458] */
  eax = (uint32_t)(ebp + 0xfffffba8u);
/* 40e94b: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 40e94e: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 40e951: jmp 0x4020d9 */
  goto L_4020d9;
L_40e956: /* 40e956: add dword ptr [ebp + 0x10], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 40e95a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 40e95d: mov eax, dword ptr [eax - 4] */
  eax = R32((uint32_t)(eax + 0xfffffffcu));
/* 40e960: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e962: je 0x40e991 */
  if (zf) goto L_40e991;
L_40e964: /* 40e964: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 40e967: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e969: je 0x40e991 */
  if (zf) goto L_40e991;
L_40e96b: /* 40e96b: test byte ptr [ebp - 7], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40e96f: movsx eax, word ptr [eax] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax)));
/* 40e972: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 40e975: je 0x40e988 */
  if (zf) goto L_40e988;
L_40e977: /* 40e977: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 40e978: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 40e97a: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 40e97c: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 40e983: jmp 0x4020d6 */
  goto L_4020d6;
L_40e988: /* 40e988: and dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 40e98c: jmp 0x4020d6 */
  goto L_4020d6;
L_40e991: /* 40e991: mov eax, dword ptr [0x44dd08] */
  eax = R32((uint32_t)(0x44dd08u));
/* 40e996: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 40e999: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e99a: jmp 0x40ea4c */
  goto L_40ea4c;
L_40e99f: /* 40e99f: jne 0x40e9b0 */
  if (!zf) goto L_40e9b0;
L_40e9a1: /* 40e9a1: cmp bx, 0x67 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x67u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40e9a5: jne 0x40e9e7 */
  if (!zf) goto L_40e9e7;
L_40e9a7: /* 40e9a7: mov dword ptr [ebp - 0xc], 1 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x1u);
/* 40e9ae: jmp 0x40e9e7 */
  goto L_40e9e7;
L_40e9b0: /* 40e9b0: mov eax, 0x200 */
  eax = 0x200u;
/* 40e9b5: cmp dword ptr [ebp - 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40e9b8: jle 0x40e9bd */
  if ((zf || sf != of)) goto L_40e9bd;
L_40e9ba: /* 40e9ba: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
L_40e9bd: /* 40e9bd: mov edi, 0xa3 */
  edi = 0xa3u;
/* 40e9c2: cmp dword ptr [ebp - 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40e9c5: jle 0x40e9e7 */
  if ((zf || sf != of)) goto L_40e9e7;
L_40e9c7: /* 40e9c7: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 40e9ca: add eax, 0x15d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x15du);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40e9cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e9d0: call 0x4010eb */
  esp -= 4; W32(esp, 0x40e9d5u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40e9d5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e9d7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e9d8: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 40e9db: je 0x40e9e4 */
  if (zf) goto L_40e9e4;
L_40e9dd: /* 40e9dd: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 40e9e0: mov esi, eax */
  esi = eax;
/* 40e9e2: jmp 0x40e9e7 */
  goto L_40e9e7;
L_40e9e4: /* 40e9e4: mov dword ptr [ebp - 0xc], edi */
  W32((uint32_t)(ebp + 0xfffffff4u), edi);
L_40e9e7: /* 40e9e7: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 40e9ea: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 40e9ec: push dword ptr [ebp - 0x44] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffbcu)); esp -= 4; W32(esp, v); }
/* 40e9ef: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40e9f2: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 40e9f5: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 40e9f8: mov eax, dword ptr [eax - 4] */
  eax = R32((uint32_t)(eax + 0xfffffffcu));
/* 40e9fb: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 40e9fe: movsx eax, bl */
  eax = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 40ea01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40ea02: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 40ea05: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40ea06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40ea07: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 40ea0a: call dword ptr [0x44afa0] */
  { uint32_t t = R32((uint32_t)(0x44afa0u)); esp -= 4; W32(esp, 0x40ea10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40ea10: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 40ea13: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40ea16: and edi, 0x80 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edi = r;
  }
/* 40ea1c: je 0x40ea2c */
  if (zf) goto L_40ea2c;
L_40ea1e: /* 40ea1e: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ea22: jne 0x40ea2c */
  if (!zf) goto L_40ea2c;
L_40ea24: /* 40ea24: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40ea25: call dword ptr [0x44afac] */
  { uint32_t t = R32((uint32_t)(0x44afacu)); esp -= 4; W32(esp, 0x40ea2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40ea2b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40ea2c: /* 40ea2c: cmp bx, 0x67 */
  { uint16_t a = (uint16_t)((ebx & 0xffffu)); uint16_t b = (uint16_t)(0x67u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40ea30: jne 0x40ea3e */
  if (!zf) goto L_40ea3e;
L_40ea32: /* 40ea32: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40ea34: jne 0x40ea3e */
  if (!zf) goto L_40ea3e;
L_40ea36: /* 40ea36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40ea37: call dword ptr [0x44afa4] */
  { uint32_t t = R32((uint32_t)(0x44afa4u)); esp -= 4; W32(esp, 0x40ea3du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40ea3d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40ea3e: /* 40ea3e: cmp byte ptr [esi], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40ea41: jne 0x40ea4b */
  if (!zf) goto L_40ea4b;
L_40ea43: /* 40ea43: or byte ptr [ebp - 7], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
/* 40ea47: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40ea48: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
L_40ea4b: /* 40ea4b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_40ea4c: /* 40ea4c: call 0x402493 */
  esp -= 4; W32(esp, 0x40ea51u); SPILL(); hle_strlen(); RELOAD();
/* 40ea51: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ea52: jmp 0x4020d6 */
  goto L_4020d6;
L_40ea57: /* 40ea57: mov eax, dword ptr [0x44dd0c] */
  eax = R32((uint32_t)(0x44dd0cu));
/* 40ea5c: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 40ea5f: jmp 0x401e91 */
  goto L_401e91;
L_40ea64: /* 40ea64: mov dword ptr [ebp - 0xc], 8 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x8u);
L_40ea6b: /* 40ea6b: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 40ea6e: jmp 0x40229e */
  goto L_40229e;
L_40ea73: /* 40ea73: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 40ea76: add eax, 0x51 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x51u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40ea79: mov word ptr [ebp - 0x28], 0x30 */
  W16((uint32_t)(ebp + 0xffffffd8u), 0x30u);
/* 40ea7f: mov word ptr [ebp - 0x26], ax */
  W16((uint32_t)(ebp + 0xffffffdau), (eax & 0xffffu));
/* 40ea83: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 40ea86: jmp 0x4022af */
  goto L_4022af;
L_40ea8b: /* 40ea8b: test byte ptr [ebp - 8], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40ea8f: mov dword ptr [ebp - 0x14], 8 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x8u);
/* 40ea96: je 0x4022af */
  if (zf) goto L_4022af;
L_40ea9c: /* 40ea9c: or byte ptr [ebp - 7], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
/* 40eaa0: jmp 0x4022af */
  goto L_4022af;
L_40eaa5: /* 40eaa5: add dword ptr [ebp + 0x10], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 40eaa9: test byte ptr [ebp - 8], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff8u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40eaad: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 40eab0: mov eax, dword ptr [eax - 4] */
  eax = R32((uint32_t)(eax + 0xfffffffcu));
/* 40eab3: je 0x40eabe */
  if (zf) goto L_40eabe;
L_40eab5: /* 40eab5: mov cx, word ptr [ebp - 0x18] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffe8u))) & 0xffffu);
/* 40eab9: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 40eabc: jmp 0x40eac3 */
  goto L_40eac3;
L_40eabe: /* 40eabe: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 40eac1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_40eac3: /* 40eac3: mov dword ptr [ebp - 0x38], 1 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x1u);
/* 40eaca: jmp 0x402188 */
  goto L_402188;
L_40eacf: /* 40eacf: test bl, 0x40 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40ead2: je 0x40eadd */
  if (zf) goto L_40eadd;
L_40ead4: /* 40ead4: movsx eax, word ptr [eax - 4] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(eax + 0xfffffffcu)));
/* 40ead8: jmp 0x401ebc */
  goto L_401ebc;
L_40eadd: /* 40eadd: movzx eax, word ptr [eax - 4] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0xfffffffcu)));
/* 40eae1: jmp 0x401ebc */
  goto L_401ebc;
L_40eae6: /* 40eae6: xor edx, edx */
  edx = 0;
/* 40eae8: jmp 0x4022cd */
  goto L_4022cd;
L_40eaed: /* 40eaed: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 40eaef: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 40eaf2: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 40eaf4: or byte ptr [ebp - 7], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff9u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff9u), r);
  }
/* 40eaf8: jmp 0x4022d6 */
  goto L_4022d6;
L_40eafd: /* 40eafd: and dword ptr [ebp - 8], 0xfffffff7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 40eb01: mov eax, 0x200 */
  eax = 0x200u;
/* 40eb06: cmp dword ptr [ebp - 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40eb09: jle 0x4022f4 */
  if ((zf || sf != of)) goto L_4022f4;
L_40eb0f: /* 40eb0f: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 40eb12: jmp 0x4022f4 */
  goto L_4022f4;
L_40eb17: /* 40eb17: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 40eb1b: jmp 0x4022fe */
  goto L_4022fe;
L_40eb20: /* 40eb20: mov ecx, esi */
  ecx = esi;
/* 40eb22: cmp byte ptr [ecx], 0x30 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40eb25: jne 0x40eb2f */
  if (!zf) goto L_40eb2f;
L_40eb27: /* 40eb27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40eb29: jne 0x4020d9 */
  if (!zf) goto L_4020d9;
L_40eb2f: /* 40eb2f: dec dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 40eb32: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 40eb35: mov byte ptr [ecx], 0x30 */
  W8((uint32_t)(ecx), 0x30u);
/* 40eb38: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40eb39: jmp 0x4020d6 */
  goto L_4020d6;
L_40eb3e: /* 40eb3e: mov word ptr [ebp - 0x28], 0x2d */
  W16((uint32_t)(ebp + 0xffffffd8u), 0x2du);
/* 40eb44: jmp 0x40eb54 */
  goto L_40eb54;
L_40eb46: /* 40eb46: mov word ptr [ebp - 0x28], 0x2b */
  W16((uint32_t)(ebp + 0xffffffd8u), 0x2bu);
/* 40eb4c: jmp 0x40eb54 */
  goto L_40eb54;
L_40eb4e: /* 40eb4e: mov word ptr [ebp - 0x28], 0x20 */
  W16((uint32_t)(ebp + 0xffffffd8u), 0x20u);
L_40eb54: /* 40eb54: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 40eb5b: jmp 0x4020ee */
  goto L_4020ee;
L_40eb60: /* 40eb60: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40eb63: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 40eb66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40eb67: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 40eb69: call 0x4023a3 */
  esp -= 4; W32(esp, 0x40eb6eu); SPILL(); f_4023a3(); if (g_unwind) return; RELOAD();
/* 40eb6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40eb71: jmp 0x402188 */
  goto L_402188;
L_40eb76: /* 40eb76: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 40eb79: call 0x401156 */
  esp -= 4; W32(esp, 0x40eb7eu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40eb7e: and dword ptr [ebp - 0x30], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 40eb82: jmp 0x4020a4 */
  goto L_4020a4;
}

void f_402197(void) {
  LOAD_REGS();
  goto L_402197;
L_401efb: /* 401efb: call 0x4025f2 */
  esp -= 4; W32(esp, 0x401f00u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 401f00: jmp 0x4021ab */
  goto L_4021ab;
L_402197: /* 402197: call 0x40137f */
  esp -= 4; W32(esp, 0x40219cu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 40219c: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 40219f: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4021a5: jne 0x401efb */
  if (!zf) goto L_401efb;
L_4021ab: /* 4021ab: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4021af: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4021b3: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4021b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4021b8: call 0x4021c1 */
  esp -= 4; W32(esp, 0x4021bdu); SPILL(); f_4021c1(); if (g_unwind) return; RELOAD();
/* 4021bd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4021c0: ret  */
  esp += 4; SPILL(); return;
}

void f_4021c1(void) {
  LOAD_REGS();
L_4021c1: /* 4021c1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4021c2: mov ebp, esp */
  ebp = esp;
/* 4021c4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4021c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4021c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4021c7: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 4021ca: xor ebx, ebx */
  ebx = 0;
/* 4021cc: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4021ce: je 0x402232 */
  if (zf) goto L_402232;
L_4021d0: /* 4021d0: cmp dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4021d3: je 0x402232 */
  if (zf) goto L_402232;
L_4021d5: /* 4021d5: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 4021d7: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4021d9: je 0x40e3a7 */
  if (zf) goto L_40e3a7;
L_4021df: /* 4021df: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4021e2: cmp dword ptr [esi + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4021e5: je 0x402222 */
  if (zf) goto L_402222;
L_4021e7: /* 4021e7: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 4021ea: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 4021ed: test byte ptr [ecx + eax*2 + 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax*2 + 0x1u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4021f2: jne 0x40e3ba */
  if (!zf) goto L_40e3ba;
L_4021f8: /* 4021f8: xor eax, eax */
  eax = 0;
/* 4021fa: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4021fd: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 402200: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402201: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 402204: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 402206: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 402207: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 402209: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 40220c: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x402212u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 402212: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 402214: je 0x40e3f9 */
  if (zf) goto L_40e3f9;
L_40221a: /* 40221a: xor eax, eax */
  eax = 0;
/* 40221c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_40221d: /* 40221d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40221e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40221f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 402220: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 402221: ret  */
  esp += 4; SPILL(); return;
L_402222: /* 402222: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 402225: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402227: je 0x40221a */
  if (zf) goto L_40221a;
L_402229: /* 402229: movzx ax, al */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)((eax & 0xffu))) & 0xffffu);
/* 40222d: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 402230: jmp 0x40221a */
  goto L_40221a;
L_402232: /* 402232: xor eax, eax */
  eax = 0;
/* 402234: jmp 0x40221d */
  goto L_40221d;
L_40e3a7: /* 40e3a7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 40e3aa: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e3ac: je 0x402232 */
  if (zf) goto L_402232;
L_40e3b2: /* 40e3b2: mov word ptr [eax], bx */
  W16((uint32_t)(eax), (ebx & 0xffffu));
/* 40e3b5: jmp 0x402232 */
  goto L_402232;
L_40e3ba: /* 40e3ba: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 40e3bd: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40e3c0: jle 0x40e3e4 */
  if ((zf || sf != of)) goto L_40e3e4;
L_40e3c2: /* 40e3c2: cmp dword ptr [ebp + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40e3c5: jl 0x40e3e4 */
  if ((sf != of)) goto L_40e3e4;
L_40e3c7: /* 40e3c7: xor ecx, ecx */
  ecx = 0;
/* 40e3c9: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e3cc: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 40e3cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40e3d0: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40e3d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e3d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e3d5: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 40e3d7: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 40e3da: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x40e3e0u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 40e3e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e3e2: jne 0x40e3f1 */
  if (!zf) goto L_40e3f1;
L_40e3e4: /* 40e3e4: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 40e3e7: cmp eax, dword ptr [esi + 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40e3ea: jb 0x40e3f9 */
  if (cf) goto L_40e3f9;
L_40e3ec: /* 40e3ec: cmp byte ptr [edi + 1], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x1u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40e3ef: je 0x40e3f9 */
  if (zf) goto L_40e3f9;
L_40e3f1: /* 40e3f1: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 40e3f4: jmp 0x40221d */
  goto L_40221d;
L_40e3f9: /* 40e3f9: call 0x4102a5 */
  esp -= 4; W32(esp, 0x40e3feu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 40e3fe: mov dword ptr [eax], 0x2a */
  W32((uint32_t)(eax), 0x2au);
/* 40e404: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40e407: jmp 0x40221d */
  goto L_40221d;
}

void f_40233d(void) {
  LOAD_REGS();
L_40233d: /* 40233d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40233e: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 402342: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 402344: jne 0x4079b5 */
  if (!zf) goto L_4079b5;
L_40234a: /* 40234a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 40234e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 402352: xor edx, edx */
  edx = 0;
/* 402354: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x402354);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 402356: mov ebx, eax */
  ebx = eax;
/* 402358: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 40235c: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x40235c);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 40235e: mov esi, eax */
  esi = eax;
/* 402360: mov eax, ebx */
  eax = ebx;
/* 402362: mul dword ptr [esp + 0x10] */
  { uint64_t r = (uint64_t)eax * (uint64_t)(R32((uint32_t)(esp + 0x10u))); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 402366: mov ecx, eax */
  ecx = eax;
/* 402368: mov eax, esi */
  eax = esi;
/* 40236a: mul dword ptr [esp + 0x10] */
  { uint64_t r = (uint64_t)eax * (uint64_t)(R32((uint32_t)(esp + 0x10u))); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 40236e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_402370: /* 402370: sub eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 402374: sbb edx, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 402378: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* 40237a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 40237c: sbb edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 40237f: mov ecx, edx */
  ecx = edx;
/* 402381: mov edx, ebx */
  edx = ebx;
/* 402383: mov ebx, ecx */
  ebx = ecx;
/* 402385: mov ecx, eax */
  ecx = eax;
/* 402387: mov eax, esi */
  eax = esi;
/* 402389: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40238a: ret 0x10 */
  esp += 20; SPILL(); return;
L_4079b5: /* 4079b5: mov ecx, eax */
  ecx = eax;
/* 4079b7: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 4079bb: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4079bf: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
L_4079c3: /* 4079c3: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  ecx = r;
  }
/* 4079c5: rcr ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)(((uint32_t)a >> 1) | ((uint32_t)cf << 31));
  of = ((r >> 31) ^ (r >> 30)) & 1;
  cf = a & 1;
  ebx = r;
  }
/* 4079c7: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  cf = ((uint32_t)a >> (c - 1)) & 1;
  edx = r;
  }
/* 4079c9: rcr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)(((uint32_t)a >> 1) | ((uint32_t)cf << 31));
  of = ((r >> 31) ^ (r >> 30)) & 1;
  cf = a & 1;
  eax = r;
  }
/* 4079cb: or ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  ecx = r;
  }
/* 4079cd: jne 0x4079c3 */
  if (!zf) goto L_4079c3;
L_4079cf: /* 4079cf: div ebx */
  { uint32_t d = ebx; if (!d) d = guest_divzero(0x4079cf);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 4079d1: mov esi, eax */
  esi = eax;
/* 4079d3: mul dword ptr [esp + 0x14] */
  { uint64_t r = (uint64_t)eax * (uint64_t)(R32((uint32_t)(esp + 0x14u))); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 4079d7: mov ecx, eax */
  ecx = eax;
/* 4079d9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4079dd: mul esi */
  { uint64_t r = (uint64_t)eax * (uint64_t)(esi); eax = (uint32_t)r; edx = (uint32_t)(r >> 32); cf = of = (edx != 0); }
/* 4079df: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edx = r;
  }
/* 4079e1: jb 0x4079f1 */
  if (cf) goto L_4079f1;
L_4079e3: /* 4079e3: cmp edx, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4079e7: ja 0x4079f1 */
  if ((!cf && !zf)) goto L_4079f1;
L_4079e9: /* 4079e9: jb 0x4079fa */
  if (cf) goto L_4079fa;
L_4079eb: /* 4079eb: cmp eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4079ef: jbe 0x4079fa */
  if ((cf | zf)) goto L_4079fa;
L_4079f1: /* 4079f1: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 4079f2: sub eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 4079f6: sbb edx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
L_4079fa: /* 4079fa: xor ebx, ebx */
  ebx = 0;
/* 4079fc: jmp 0x402370 */
  goto L_402370;
}

void f_4023a3(void) {
  LOAD_REGS();
L_4023a3: /* 4023a3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4023a4: mov ebp, esp */
  ebp = esp;
/* 4023a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4023a7: mov esi, eax */
  esi = eax;
L_4023a9: /* 4023a9: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4023ad: jle 0x4023c3 */
  if ((zf || sf != of)) goto L_4023c3;
L_4023af: /* 4023af: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4023b2: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 4023b5: dec dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 4023b8: call 0x401f52 */
  esp -= 4; W32(esp, 0x4023bdu); SPILL(); f_401f52(); if (g_unwind) return; RELOAD();
/* 4023bd: cmp dword ptr [esi], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4023c0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4023c1: jne 0x4023a9 */
  if (!zf) goto L_4023a9;
L_4023c3: /* 4023c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4023c4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4023c5: ret  */
  esp += 4; SPILL(); return;
}

void f_402493(void) { hle_strlen(); }

void f_4024fe(void) {
  LOAD_REGS();
L_4024fe: /* 4024fe: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4024ff: mov ebp, esp */
  ebp = esp;
/* 402501: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 402504: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 402507: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 40250a: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 40250d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 402510: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 402512: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 402515: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 402516: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 402519: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40251a: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40251d: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 402520: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402521: mov dword ptr [ebp - 0x14], 0x42 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x42u);
/* 402528: call 0x401feb */
  esp -= 4; W32(esp, 0x40252du); SPILL(); f_401feb(); if (g_unwind) return; RELOAD();
/* 40252d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 402530: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 402533: mov esi, eax */
  esi = eax;
/* 402535: js 0x40e6a1 */
  if (sf) goto L_40e6a1;
L_40253b: /* 40253b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 40253e: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 402541: inc dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
L_402544: /* 402544: dec dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 402547: js 0x40e6b3 */
  if (sf) goto L_40e6b3;
L_40254d: /* 40254d: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 402550: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
L_402553: /* 402553: mov eax, esi */
  eax = esi;
/* 402555: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 402556: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 402557: ret  */
  esp += 4; SPILL(); return;
L_40e6a1: /* 40e6a1: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 40e6a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e6a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40e6a7: call 0x414470 */
  esp -= 4; W32(esp, 0x40e6acu); SPILL(); f_414470(); if (g_unwind) return; RELOAD();
/* 40e6ac: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e6ad: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e6ae: jmp 0x402544 */
  goto L_402544;
L_40e6b3: /* 40e6b3: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 40e6b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e6b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40e6b9: call 0x414470 */
  esp -= 4; W32(esp, 0x40e6beu); SPILL(); f_414470(); if (g_unwind) return; RELOAD();
/* 40e6be: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e6bf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e6c0: jmp 0x402553 */
  goto L_402553;
}

void f_402558(void) {
  LOAD_REGS();
L_402558: /* 402558: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 40255a: call 0x4011b7 */
  esp -= 4; W32(esp, 0x40255fu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 40255f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 402560: ret  */
  esp += 4; SPILL(); return;
}

void f_402561(void) {
  LOAD_REGS();
L_402561: /* 402561: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 402563: call 0x4011d9 */
  esp -= 4; W32(esp, 0x402568u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 402568: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 402569: ret  */
  esp += 4; SPILL(); return;
}

void f_40259b(void) {
  LOAD_REGS();
  goto L_40259b;
L_40256a: /* 40256a: mov eax, 0x800 */
  eax = 0x800u;
/* 40256f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 402571: jae 0x402575 */
  if (!cf) goto L_402575;
L_402573: /* 402573: mov eax, ebx */
  eax = ebx;
L_402575: /* 402575: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 402577: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402578: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 402579: call 0x401c76 */
  esp -= 4; W32(esp, 0x40257eu); SPILL(); f_401c76(); if (g_unwind) return; RELOAD();
/* 40257e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40257f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 402580: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 402583: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 402585: je 0x40c5e1 */
  if (zf) goto L_40c5e1;
L_40258b: /* 40258b: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 40258d: sub ecx, dword ptr [esi] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 40258f: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 402592: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 402595: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 402597: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 402599: jmp 0x4025cd */
  goto L_4025cd;
L_40259b: /* 40259b: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 40259d: push 0x43e110 */
  { uint32_t v = 0x43e110u; esp -= 4; W32(esp, v); }
/* 4025a2: call 0x40101f */
  esp -= 4; W32(esp, 0x4025a7u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 4025a7: call 0x402558 */
  esp -= 4; W32(esp, 0x4025acu); SPILL(); f_402558(); if (g_unwind) return; RELOAD();
/* 4025ac: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4025b0: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4025b3: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 4025b5: call 0x40143b */
  esp -= 4; W32(esp, 0x4025bau); SPILL(); f_40143b(); if (g_unwind) return; RELOAD();
/* 4025ba: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4025bb: mov ebx, eax */
  ebx = eax;
/* 4025bd: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 4025c0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 4025c2: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 4025c5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4025c7: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4025c9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4025cb: jbe 0x40256a */
  if ((cf | zf)) goto L_40256a;
L_4025cd: /* 4025cd: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 4025cf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4025d2: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 4025d4: add dword ptr [edi], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edi), r);
  }
/* 4025d7: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
L_4025da: /* 4025da: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4025de: call 0x4025ec */
  esp -= 4; W32(esp, 0x4025e3u); SPILL(); f_4025ec(); if (g_unwind) return; RELOAD();
/* 4025e3: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 4025e6: call 0x40105a */
  esp -= 4; W32(esp, 0x4025ebu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4025eb: ret  */
  esp += 4; SPILL(); return;
L_40c5e1: /* 40c5e1: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 40c5e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40c5e5: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 40c5e7: call 0x401c76 */
  esp -= 4; W32(esp, 0x40c5ecu); SPILL(); f_401c76(); if (g_unwind) return; RELOAD();
/* 40c5ec: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c5ed: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c5ee: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 40c5f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40c5f3: jne 0x40258b */
  if (!zf) goto L_40258b;
L_40c5f9: /* 40c5f9: and dword ptr [ebp - 0x24], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 40c5fc: jmp 0x4025da */
  goto L_4025da;
}

void f_4025ec(void) {
  LOAD_REGS();
L_4025ec: /* 4025ec: call 0x402561 */
  esp -= 4; W32(esp, 0x4025f1u); SPILL(); f_402561(); if (g_unwind) return; RELOAD();
/* 4025f1: ret  */
  esp += 4; SPILL(); return;
}

void f_4025f2(void) {
  LOAD_REGS();
L_4025f2: /* 4025f2: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4025f4: push 0x43e1d8 */
  { uint32_t v = 0x43e1d8u; esp -= 4; W32(esp, v); }
/* 4025f9: call 0x40101f */
  esp -= 4; W32(esp, 0x4025feu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 4025fe: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 402600: call 0x4011b7 */
  esp -= 4; W32(esp, 0x402605u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 402605: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 402606: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40260a: call 0x40263b */
  esp -= 4; W32(esp, 0x40260fu); SPILL(); f_40263b(); if (g_unwind) return; RELOAD();
/* 40260f: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 402612: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 402616: call 0x402624 */
  esp -= 4; W32(esp, 0x40261bu); SPILL(); f_402624(); if (g_unwind) return; RELOAD();
/* 40261b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 40261e: call 0x40105a */
  esp -= 4; W32(esp, 0x402623u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 402623: ret  */
  esp += 4; SPILL(); return;
}

void f_402624(void) {
  LOAD_REGS();
L_402624: /* 402624: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 402626: call 0x4011d9 */
  esp -= 4; W32(esp, 0x40262bu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 40262b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40262c: ret  */
  esp += 4; SPILL(); return;
}

void f_40263b(void) {
  LOAD_REGS();
  goto L_40263b;
L_40262d: /* 40262d: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402630: jne 0x4026b6 */
  if (!zf) goto L_4026b6;
L_402636: /* 402636: jmp 0x40c766 */
  goto L_40c766;
L_40263b: /* 40263b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40263c: call 0x40137f */
  esp -= 4; W32(esp, 0x402641u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 402641: mov esi, eax */
  esi = eax;
/* 402643: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 402646: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40264c: je 0x4026b6 */
  if (zf) goto L_4026b6;
L_40264e: /* 40264e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 402650: jne 0x4026bb */
  if (!zf) goto L_4026bb;
L_402652: /* 402652: mov ecx, dword ptr [0x44a918] */
  ecx = R32((uint32_t)(0x44a918u));
/* 402658: mov dword ptr [esi + 0x64], ecx */
  W32((uint32_t)(esi + 0x64u), ecx);
/* 40265b: mov ecx, dword ptr [0x44a918] */
  ecx = R32((uint32_t)(0x44a918u));
/* 402661: inc dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx), r);
  }
/* 402663: mov ecx, dword ptr [0x44a918] */
  ecx = R32((uint32_t)(0x44a918u));
/* 402669: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 40266c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40266e: je 0x402672 */
  if (zf) goto L_402672;
L_402670: /* 402670: inc dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx), r);
  }
L_402672: /* 402672: mov ecx, dword ptr [0x44a918] */
  ecx = R32((uint32_t)(0x44a918u));
/* 402678: mov ecx, dword ptr [ecx + 0x34] */
  ecx = R32((uint32_t)(ecx + 0x34u));
/* 40267b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40267d: je 0x402681 */
  if (zf) goto L_402681;
L_40267f: /* 40267f: inc dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx), r);
  }
L_402681: /* 402681: mov ecx, dword ptr [0x44a918] */
  ecx = R32((uint32_t)(0x44a918u));
/* 402687: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 40268a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40268c: je 0x402690 */
  if (zf) goto L_402690;
L_40268e: /* 40268e: inc dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx), r);
  }
L_402690: /* 402690: mov ecx, dword ptr [0x44a918] */
  ecx = R32((uint32_t)(0x44a918u));
/* 402696: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* 402699: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40269b: je 0x40269f */
  if (zf) goto L_40269f;
L_40269d: /* 40269d: inc dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx), r);
  }
L_40269f: /* 40269f: mov ecx, dword ptr [0x44a918] */
  ecx = R32((uint32_t)(0x44a918u));
/* 4026a5: mov ecx, dword ptr [ecx + 0x4c] */
  ecx = R32((uint32_t)(ecx + 0x4cu));
/* 4026a8: inc dword ptr [ecx + 0xb4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xb4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0xb4u), r);
  }
/* 4026ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4026b0: jne 0x40262d */
  if (!zf) goto L_40262d;
L_4026b6: /* 4026b6: mov eax, dword ptr [esi + 0x64] */
  eax = R32((uint32_t)(esi + 0x64u));
/* 4026b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4026ba: ret  */
  esp += 4; SPILL(); return;
L_4026bb: /* 4026bb: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 4026be: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
/* 4026c0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4026c2: jne 0x40c74a */
  if (!zf) goto L_40c74a;
L_4026c8: /* 4026c8: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* 4026cb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4026cd: jne 0x40c751 */
  if (!zf) goto L_40c751;
L_4026d3: /* 4026d3: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 4026d6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4026d8: jne 0x40c758 */
  if (!zf) goto L_40c758;
L_4026de: /* 4026de: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 4026e1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4026e3: jne 0x40c75f */
  if (!zf) goto L_40c75f;
L_4026e9: /* 4026e9: mov ecx, dword ptr [eax + 0x4c] */
  ecx = R32((uint32_t)(eax + 0x4cu));
/* 4026ec: dec dword ptr [ecx + 0xb4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xb4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ecx + 0xb4u), r);
  }
/* 4026f2: jmp 0x402652 */
  goto L_402652;
L_40c74a: /* 40c74a: dec dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ecx), r);
  }
/* 40c74c: jmp 0x4026c8 */
  goto L_4026c8;
L_40c751: /* 40c751: dec dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ecx), r);
  }
/* 40c753: jmp 0x4026d3 */
  goto L_4026d3;
L_40c758: /* 40c758: dec dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ecx), r);
  }
/* 40c75a: jmp 0x4026de */
  goto L_4026de;
L_40c75f: /* 40c75f: dec dword ptr [ecx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ecx), r);
  }
/* 40c761: jmp 0x4026e9 */
  goto L_4026e9;
L_40c766: /* 40c766: cmp eax, 0x44a920 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44a920u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40c76b: je 0x4026b6 */
  if (zf) goto L_4026b6;
L_40c771: /* 40c771: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40c772: call 0x4126c1 */
  esp -= 4; W32(esp, 0x40c777u); SPILL(); f_4126c1(); if (g_unwind) return; RELOAD();
/* 40c777: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40c778: jmp 0x4026b6 */
  goto L_4026b6;
}

void f_4026f7(void) {
  LOAD_REGS();
L_4026f7: /* 4026f7: call 0x40137f */
  esp -= 4; W32(esp, 0x4026fcu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4026fc: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 4026ff: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402705: jne 0x402729 */
  if (!zf) goto L_402729;
L_402707: /* 402707: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 40270b: cmp cx, -1 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40270f: je 0x40da4f */
  if (zf) goto L_40da4f;
L_402715: /* 402715: cmp dword ptr [eax + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402719: je 0x40da53 */
  if (zf) goto L_40da53;
L_40271f: /* 40271f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 402720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402721: call 0x4018b7 */
  esp -= 4; W32(esp, 0x402726u); SPILL(); f_4018b7(); if (g_unwind) return; RELOAD();
/* 402726: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 402727: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 402728: ret  */
  esp += 4; SPILL(); return;
L_402729: /* 402729: call 0x4025f2 */
  esp -= 4; W32(esp, 0x40272eu); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 40272e: jmp 0x402707 */
  goto L_402707;
L_40da4f: /* 40da4f: or ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 40da52: ret  */
  esp += 4; SPILL(); return;
L_40da53: /* 40da53: cmp cx, 0x41 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 40da57: jb 0x40da66 */
  if (cf) goto L_40da66;
L_40da59: /* 40da59: cmp cx, 0x5a */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40da5d: ja 0x40da66 */
  if ((!cf && !zf)) goto L_40da66;
L_40da5f: /* 40da5f: movzx eax, cx */
  eax = (uint32_t)((ecx & 0xffffu));
/* 40da62: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40da65: ret  */
  esp += 4; SPILL(); return;
L_40da66: /* 40da66: movzx eax, cx */
  eax = (uint32_t)((ecx & 0xffffu));
/* 40da69: ret  */
  esp += 4; SPILL(); return;
}

void f_402730(void) {
  LOAD_REGS();
L_402730: /* 402730: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 402734: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 402737: test dx, dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 40273a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40273b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40273c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40273d: je 0x40276a */
  if (zf) goto L_40276a;
L_40273f: /* 40273f: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 402743: xor edi, edi */
  edi = 0;
/* 402745: mov di, word ptr [ebx] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
L_402748: /* 402748: test di, di */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 40274b: mov esi, ebx */
  esi = ebx;
/* 40274d: je 0x402760 */
  if (zf) goto L_402760;
L_40274f: /* 40274f: mov ecx, edi */
  ecx = edi;
L_402751: /* 402751: cmp cx, dx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 402754: je 0x40276c */
  if (zf) goto L_40276c;
L_402756: /* 402756: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 402757: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 402758: mov cx, word ptr [esi] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 40275b: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 40275e: jne 0x402751 */
  if (!zf) goto L_402751;
L_402760: /* 402760: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 402761: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 402762: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 402765: test dx, dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 402768: jne 0x402748 */
  if (!zf) goto L_402748;
L_40276a: /* 40276a: xor eax, eax */
  eax = 0;
L_40276c: /* 40276c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40276d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40276e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40276f: ret  */
  esp += 4; SPILL(); return;
}

void f_402788(void) {
  LOAD_REGS();
L_402788: /* 402788: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 40278c: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 402790: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 402792: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 402793: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 402795: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_402796: /* 402796: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 402798: mov dword ptr [ecx + eax], esi */
  W32((uint32_t)(ecx + eax), esi);
/* 40279b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40279e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 40279f: jne 0x402796 */
  if (!zf) goto L_402796;
L_4027a1: /* 4027a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4027a2: ret  */
  esp += 4; SPILL(); return;
}

void f_4027a3(void) {
  LOAD_REGS();
L_4027a3: /* 4027a3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4027a4: mov ebp, esp */
  ebp = esp;
/* 4027a6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4027a7: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4027ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4027ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4027ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4027ae: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 4027b1: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 4027b2: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 4027b4: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 4027b7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4027b8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4027b9: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x4027b9);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4027bb: push 0x1f */
  { uint32_t v = 0x1fu; esp -= 4; W32(esp, v); }
/* 4027bd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4027be: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 4027c0: xor edx, edx */
  edx = 0;
  cf = 0;
/* 4027c2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  edx = r;
  }
/* 4027c3: mov ecx, esi */
  ecx = esi;
/* 4027c5: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 4027c7: mov ebx, eax */
  ebx = eax;
/* 4027c9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4027cc: test dword ptr [eax + ebx*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ebx*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4027cf: jne 0x40f03a */
  if (!zf) goto L_40f03a;
L_4027d5: /* 4027d5: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 4027d8: mov ecx, esi */
  ecx = esi;
/* 4027da: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 4027dc: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4027de: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4027df: and dword ptr [eax + ebx*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ebx*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + ebx*4), r);
  }
/* 4027e2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4027e3: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4027e5: jge 0x4027f0 */
  if ((sf == of)) goto L_4027f0;
L_4027e7: /* 4027e7: lea edi, [eax + ebx*4] */
  edi = (uint32_t)(eax + ebx*4);
/* 4027ea: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4027ec: xor eax, eax */
  eax = 0;
/* 4027ee: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_4027f0: /* 4027f0: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4027f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4027f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4027f5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4027f6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4027f7: ret  */
  esp += 4; SPILL(); return;
L_40f03a: /* 40f03a: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 40f03d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 40f03e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f03f: call 0x431d80 */
  esp -= 4; W32(esp, 0x40f044u); SPILL(); f_431d80(); if (g_unwind) return; RELOAD();
/* 40f044: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f046: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f047: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f048: jne 0x40f058 */
  if (!zf) goto L_40f058;
L_40f04a: /* 40f04a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40f04b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40f04e: call 0x431db2 */
  esp -= 4; W32(esp, 0x40f053u); SPILL(); f_431db2(); if (g_unwind) return; RELOAD();
/* 40f053: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f054: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f055: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_40f058: /* 40f058: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40f05b: jmp 0x4027d5 */
  goto L_4027d5;
}

void f_4027f8(void) {
  LOAD_REGS();
  goto L_4027f8;
L_402770: /* 402770: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 402773: mov ax, word ptr [ebp - 8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u))) & 0xffffu);
/* 402777: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 40277a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40277b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40277c: mov word ptr [ebx + 0xa], ax */
  W16((uint32_t)(ebx + 0xau), (eax & 0xffffu));
/* 402780: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 402781: call 0x4013ab */
  esp -= 4; W32(esp, 0x402786u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 402786: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 402787: ret  */
  esp += 4; SPILL(); return;
L_4027f8: /* 4027f8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4027f9: mov ebp, esp */
  ebp = esp;
/* 4027fb: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4027fe: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 402803: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 402806: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 402807: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 40280a: xor edx, edx */
  edx = 0;
/* 40280c: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 40280f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 402812: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 402814: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 402815: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 402816: mov dword ptr [ebp - 8], 0x404e */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x404eu);
/* 40281d: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 40281f: mov dword ptr [ebx + 4], edx */
  W32((uint32_t)(ebx + 0x4u), edx);
/* 402822: mov dword ptr [ebx + 8], edx */
  W32((uint32_t)(ebx + 0x8u), edx);
/* 402825: jbe 0x402876 */
  if ((cf | zf)) goto L_402876;
L_402827: /* 402827: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_40282a: /* 40282a: mov esi, ebx */
  esi = ebx;
/* 40282c: lea edi, [ebp - 0x14] */
  edi = (uint32_t)(ebp + 0xffffffecu);
/* 40282f: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 402830: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 402831: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 402832: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 402833: call 0x4028c8 */
  esp -= 4; W32(esp, 0x402838u); SPILL(); f_4028c8(); if (g_unwind) return; RELOAD();
/* 402838: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 402839: call 0x4028c8 */
  esp -= 4; W32(esp, 0x40283eu); SPILL(); f_4028c8(); if (g_unwind) return; RELOAD();
/* 40283e: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 402841: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402842: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 402843: call 0x4028f6 */
  esp -= 4; W32(esp, 0x402848u); SPILL(); f_4028f6(); if (g_unwind) return; RELOAD();
/* 402848: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 402849: call 0x4028c8 */
  esp -= 4; W32(esp, 0x40284eu); SPILL(); f_4028c8(); if (g_unwind) return; RELOAD();
/* 40284e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 402851: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 402854: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 402858: and dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 40285c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 40285f: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 402862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402863: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 402864: call 0x4028f6 */
  esp -= 4; W32(esp, 0x402869u); SPILL(); f_4028f6(); if (g_unwind) return; RELOAD();
/* 402869: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40286c: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 40286f: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 402872: jne 0x40282a */
  if (!zf) goto L_40282a;
L_402874: /* 402874: xor edx, edx */
  edx = 0;
L_402876: /* 402876: cmp dword ptr [ebx + 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402879: jne 0x4028aa */
  if (!zf) goto L_4028aa;
L_40287b: /* 40287b: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
L_40287e: /* 40287e: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 402881: add dword ptr [ebp - 8], 0xfff0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0xfff0u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 402888: mov eax, ecx */
  eax = ecx;
/* 40288a: shr eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 40288d: mov edi, eax */
  edi = eax;
/* 40288f: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 402891: mov esi, eax */
  esi = eax;
/* 402893: shr esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 402896: shl ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 402899: or esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 40289b: shl eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 40289e: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4028a0: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 4028a3: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 4028a5: je 0x40287e */
  if (zf) goto L_40287e;
L_4028a7: /* 4028a7: mov dword ptr [ebx + 8], edi */
  W32((uint32_t)(ebx + 0x8u), edi);
L_4028aa: /* 4028aa: mov esi, 0x8000 */
  esi = 0x8000u;
L_4028af: /* 4028af: test dword ptr [ebx + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4028b2: jne 0x402770 */
  if (!zf) goto L_402770;
L_4028b8: /* 4028b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4028b9: call 0x4028c8 */
  esp -= 4; W32(esp, 0x4028beu); SPILL(); f_4028c8(); if (g_unwind) return; RELOAD();
/* 4028be: add dword ptr [ebp - 8], 0xffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4028c5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4028c6: jmp 0x4028af */
  goto L_4028af;
}

void f_4028c8(void) {
  LOAD_REGS();
L_4028c8: /* 4028c8: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4028cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4028cd: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 4028cf: mov ecx, esi */
  ecx = esi;
/* 4028d1: add esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4028d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4028d4: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 4028d7: shr ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 4028da: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4028dc: lea esi, [edi + edi] */
  esi = (uint32_t)(edi + edi);
/* 4028df: or esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 4028e1: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 4028e4: mov edx, edi */
  edx = edi;
/* 4028e6: shr edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 4028e9: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 4028eb: or ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4028ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4028ee: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 4028f1: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4028f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4028f5: ret  */
  esp += 4; SPILL(); return;
}

void f_4028f6(void) {
  LOAD_REGS();
L_4028f6: /* 4028f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4028f7: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4028fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4028fc: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 402900: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 402901: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 402903: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 402905: call 0x402942 */
  esp -= 4; W32(esp, 0x40290au); SPILL(); f_402942(); if (g_unwind) return; RELOAD();
/* 40290a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40290d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40290f: jne 0x40f108 */
  if (!zf) goto L_40f108;
L_402915: /* 402915: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 402918: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402919: push dword ptr [edi + 4] */
  { uint32_t v = R32((uint32_t)(edi + 0x4u)); esp -= 4; W32(esp, v); }
/* 40291c: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 40291e: call 0x402942 */
  esp -= 4; W32(esp, 0x402923u); SPILL(); f_402942(); if (g_unwind) return; RELOAD();
/* 402923: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 402926: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 402928: jne 0x40f128 */
  if (!zf) goto L_40f128;
L_40292e: /* 40292e: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* 402931: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402932: push dword ptr [edi + 8] */
  { uint32_t v = R32((uint32_t)(edi + 0x8u)); esp -= 4; W32(esp, v); }
/* 402935: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 402937: call 0x402942 */
  esp -= 4; W32(esp, 0x40293cu); SPILL(); f_402942(); if (g_unwind) return; RELOAD();
/* 40293c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40293f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 402940: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 402941: ret  */
  esp += 4; SPILL(); return;
L_40f108: /* 40f108: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 40f10b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f10c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 40f10e: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 40f110: call 0x402942 */
  esp -= 4; W32(esp, 0x40f115u); SPILL(); f_402942(); if (g_unwind) return; RELOAD();
/* 40f115: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40f118: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f11a: je 0x402915 */
  if (zf) goto L_402915;
L_40f120: /* 40f120: inc dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x8u), r);
  }
/* 40f123: jmp 0x402915 */
  goto L_402915;
L_40f128: /* 40f128: inc dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x8u), r);
  }
/* 40f12b: jmp 0x40292e */
  goto L_40292e;
}

void f_402942(void) {
  LOAD_REGS();
L_402942: /* 402942: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 402946: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 402947: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 40294b: lea ecx, [edx + esi] */
  ecx = (uint32_t)(edx + esi);
/* 40294e: xor eax, eax */
  eax = 0;
/* 402950: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 402952: jb 0x402960 */
  if (cf) goto L_402960;
L_402954: /* 402954: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 402956: jb 0x402960 */
  if (cf) goto L_402960;
L_402958: /* 402958: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 40295c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 40295e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40295f: ret  */
  esp += 4; SPILL(); return;
L_402960: /* 402960: xor eax, eax */
  eax = 0;
/* 402962: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 402963: jmp 0x402958 */
  goto L_402958;
}

void f_402965(void) {
  LOAD_REGS();
L_402965: /* 402965: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 402967: push 0x43e120 */
  { uint32_t v = 0x43e120u; esp -= 4; W32(esp, v); }
/* 40296c: call 0x40101f */
  esp -= 4; W32(esp, 0x402971u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 402971: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 402974: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 402977: xor edi, edi */
  edi = 0;
/* 402979: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 40297c: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 40297f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 402981: xor eax, eax */
  eax = 0;
/* 402983: mov ax, word ptr [ebx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 402986: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402987: call 0x401414 */
  esp -= 4; W32(esp, 0x40298cu); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 40298c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40298d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40298e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 402990: jne 0x40e40c */
  if (!zf) goto L_40e40c;
L_402996: /* 402996: wait  */
/* 402997: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 40299a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40299b: call 0x4013b8 */
  esp -= 4; W32(esp, 0x4029a0u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 4029a0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4029a1: lea eax, [eax + eax + 2] */
  eax = (uint32_t)(eax + eax + 0x2u);
/* 4029a5: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4029a8: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4029ab: call 0x4014ee */
  esp -= 4; W32(esp, 0x4029b0u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 4029b0: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 4029b3: mov eax, esp */
  eax = esp;
/* 4029b5: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 4029b8: wait  */
/* 4029b9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4029bd: cmp word ptr [ebx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4029c1: je 0x4029ee */
  if (zf) goto L_4029ee;
L_4029c3: /* 4029c3: mov eax, ebx */
  eax = ebx;
/* 4029c5: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 4029c8: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 4029cb: mov esi, ebx */
  esi = ebx;
L_4029cd: /* 4029cd: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 4029d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4029d1: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4029d4: call 0x402a4e */
  esp -= 4; W32(esp, 0x4029d9u); SPILL(); f_402a4e(); if (g_unwind) return; RELOAD();
/* 4029d9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4029da: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4029db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4029dd: jle 0x4029ee */
  if ((zf || sf != of)) goto L_4029ee;
L_4029df: /* 4029df: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4029e1: inc dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
/* 4029e4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4029e5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4029e6: mov eax, esi */
  eax = esi;
/* 4029e8: cmp word ptr [esi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4029ec: jne 0x4029cd */
  if (!zf) goto L_4029cd;
L_4029ee: /* 4029ee: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 4029f1: and byte ptr [eax + edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax + edi), r);
  }
/* 4029f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4029f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4029f9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4029fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4029fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4029fc: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 4029ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402a00: call 0x402ac1 */
  esp -= 4; W32(esp, 0x402a05u); SPILL(); f_402ac1(); if (g_unwind) return; RELOAD();
/* 402a05: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 402a08: mov esi, eax */
  esi = eax;
/* 402a0a: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402a0e: jne 0x40e47f */
  if (!zf) goto L_40e47f;
L_402a14: /* 402a14: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 402a17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 402a19: je 0x402a23 */
  if (zf) goto L_402a23;
L_402a1b: /* 402a1b: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 402a1e: lea ecx, [ebx + ecx*2] */
  ecx = (uint32_t)(ebx + ecx*2);
/* 402a21: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_402a23: /* 402a23: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 402a25: test cx, 0x240 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x240u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 402a2a: jne 0x40e48d */
  if (!zf) goto L_40e48d;
L_402a30: /* 402a30: test cl, 0x81 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x81u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 402a33: jne 0x40e4a1 */
  if (!zf) goto L_40e4a1;
L_402a39: /* 402a39: test ch, 1 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 402a3c: jne 0x40e4b1 */
  if (!zf) goto L_40e4b1;
L_402a42: /* 402a42: fld qword ptr [esi + 0x10] */
  { double v = F64((uint32_t)(esi + 0x10u)); FPUSH(v); }
L_402a45: /* 402a45: lea esp, [ebp - 0x58] */
  esp = (uint32_t)(ebp + 0xffffffa8u);
/* 402a48: call 0x40105a */
  esp -= 4; W32(esp, 0x402a4du); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 402a4d: ret  */
  esp += 4; SPILL(); return;
L_40e40c: /* 40e40c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 40e40d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 40e40e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 40e410: xor eax, eax */
  eax = 0;
/* 40e412: mov ax, word ptr [ebx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 40e415: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e416: call 0x401414 */
  esp -= 4; W32(esp, 0x40e41bu); SPILL(); f_401414(); if (g_unwind) return; RELOAD();
/* 40e41b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e41c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e41d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e41f: jne 0x40e40c */
  if (!zf) goto L_40e40c;
L_40e421: /* 40e421: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 40e424: jmp 0x402996 */
  goto L_402996;
L_40e47f: /* 40e47f: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 40e482: call 0x401156 */
  esp -= 4; W32(esp, 0x40e487u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e487: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e488: jmp 0x402a14 */
  goto L_402a14;
L_40e48d: /* 40e48d: fldz  */
  FPUSH(0.0);
/* 40e48f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e491: je 0x402a45 */
  if (zf) goto L_402a45;
L_40e497: /* 40e497: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 40e49a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 40e49c: jmp 0x402a45 */
  goto L_402a45;
L_40e4a1: /* 40e4a1: fld qword ptr [0x4491cc] */
  { double v = F64((uint32_t)(0x4491ccu)); FPUSH(v); }
/* 40e4a7: cmp word ptr [ebx], 0x2d */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)(0x2du);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 40e4ab: jne 0x40e4b3 */
  if (!zf) goto L_40e4b3;
L_40e4ad: /* 40e4ad: fchs  */
  ST0 = -ST0;
/* 40e4af: jmp 0x40e4b3 */
  goto L_40e4b3;
L_40e4b1: /* 40e4b1: fldz  */
  FPUSH(0.0);
L_40e4b3: /* 40e4b3: fstp qword ptr [ebp - 0x4c] */
  WF64((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 40e4b6: call 0x4102a5 */
  esp -= 4; W32(esp, 0x40e4bbu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 40e4bb: mov dword ptr [eax], 0x22 */
  W32((uint32_t)(eax), 0x22u);
/* 40e4c1: fld qword ptr [ebp - 0x4c] */
  { double v = F64((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 40e4c4: jmp 0x402a45 */
  goto L_402a45;
}

void f_402a4e(void) {
  LOAD_REGS();
L_402a4e: /* 402a4e: call 0x40137f */
  esp -= 4; W32(esp, 0x402a53u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 402a53: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 402a56: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402a5c: jne 0x40da45 */
  if (!zf) goto L_40da45;
L_402a62: /* 402a62: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 402a66: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 402a6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402a6b: call 0x402a74 */
  esp -= 4; W32(esp, 0x402a70u); SPILL(); f_402a74(); if (g_unwind) return; RELOAD();
/* 402a70: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 402a73: ret  */
  esp += 4; SPILL(); return;
L_40da45: /* 40da45: call 0x4025f2 */
  esp -= 4; W32(esp, 0x40da4au); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 40da4a: jmp 0x402a62 */
  goto L_402a62;
}

void f_402a74(void) {
  LOAD_REGS();
L_402a74: /* 402a74: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 402a75: mov ebp, esp */
  ebp = esp;
/* 402a77: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 402a7a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 402a7b: xor esi, esi */
  esi = 0;
/* 402a7d: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402a7f: je 0x40da17 */
  if (zf) goto L_40da17;
L_402a85: /* 402a85: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 402a88: cmp dword ptr [eax + 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402a8b: je 0x40da1e */
  if (zf) goto L_40da1e;
L_402a91: /* 402a91: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 402a94: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 402a95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 402a96: push dword ptr [eax + 0x28] */
  { uint32_t v = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, v); }
/* 402a99: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 402a9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 402a9d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 402a9f: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 402aa2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 402aa3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 402aa4: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 402aa7: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x402aadu); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 402aad: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402aaf: je 0x40da32 */
  if (zf) goto L_40da32;
L_402ab5: /* 402ab5: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402ab8: jne 0x40da32 */
  if (!zf) goto L_40da32;
L_402abe: /* 402abe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 402abf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 402ac0: ret  */
  esp += 4; SPILL(); return;
L_40da17: /* 40da17: xor eax, eax */
  eax = 0;
/* 40da19: jmp 0x402abe */
  goto L_402abe;
L_40da1e: /* 40da1e: mov ax, word ptr [ebp + 0x10] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x10u))) & 0xffffu);
/* 40da22: cmp ax, 0xff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40da26: ja 0x40da32 */
  if ((!cf && !zf)) goto L_40da32;
L_40da28: /* 40da28: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 40da2a: xor eax, eax */
  eax = 0;
/* 40da2c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40da2d: jmp 0x402abe */
  goto L_402abe;
L_40da32: /* 40da32: call 0x4102a5 */
  esp -= 4; W32(esp, 0x40da37u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 40da37: mov dword ptr [eax], 0x2a */
  W32((uint32_t)(eax), 0x2au);
/* 40da3d: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 40da40: jmp 0x402abe */
  goto L_402abe;
}

void f_402ac1(void) {
  LOAD_REGS();
L_402ac1: /* 402ac1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 402ac2: mov ebp, esp */
  ebp = esp;
/* 402ac4: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 402ac7: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 402acc: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 402acf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 402ad0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 402ad1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 402ad2: xor esi, esi */
  esi = 0;
/* 402ad4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 402ad5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 402ad6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 402ad7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 402ad8: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 402adb: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 402ade: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 402ae1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402ae2: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 402ae5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402ae6: xor edi, edi */
  edi = 0;
/* 402ae8: call 0x402d4a */
  esp -= 4; W32(esp, 0x402aedu); SPILL(); f_402d4a(); if (g_unwind) return; RELOAD();
/* 402aed: mov ebx, eax */
  ebx = eax;
/* 402aef: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 402af2: test bl, 4 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 402af5: jne 0x40f0f8 */
  if (!zf) goto L_40f0f8;
L_402afb: /* 402afb: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 402afe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402aff: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 402b02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402b03: call 0x402b57 */
  esp -= 4; W32(esp, 0x402b08u); SPILL(); f_402b57(); if (g_unwind) return; RELOAD();
/* 402b08: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 402b0b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 402b0c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 402b0d: jne 0x402b48 */
  if (!zf) goto L_402b48;
L_402b0f: /* 402b0f: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402b12: je 0x402b48 */
  if (zf) goto L_402b48;
L_402b14: /* 402b14: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 402b17: jne 0x402b4f */
  if (!zf) goto L_402b4f;
L_402b19: /* 402b19: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402b1c: je 0x402b4f */
  if (zf) goto L_402b4f;
L_402b1e: /* 402b1e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 402b21: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 402b24: sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 402b27: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 402b29: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 402b2c: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 402b2f: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 402b32: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 402b35: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 402b38: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 402b3b: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 402b3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 402b3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 402b40: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 402b41: call 0x4013ab */
  esp -= 4; W32(esp, 0x402b46u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 402b46: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 402b47: ret  */
  esp += 4; SPILL(); return;
L_402b48: /* 402b48: mov edi, 0x80 */
  edi = 0x80u;
/* 402b4d: jmp 0x402b14 */
  goto L_402b14;
L_402b4f: /* 402b4f: or edi, 0x100 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 402b55: jmp 0x402b1e */
  goto L_402b1e;
L_40f0f8: /* 40f0f8: mov edi, 0x200 */
  edi = 0x200u;
/* 40f0fd: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 40f100: mov dword ptr [ebp - 0xc], esi */
  W32((uint32_t)(ebp + 0xfffffff4u), esi);
/* 40f103: jmp 0x402b1e */
  goto L_402b1e;
}

void f_402b57(void) {
  LOAD_REGS();
L_402b57: /* 402b57: push 0x44abac */
  { uint32_t v = 0x44abacu; esp -= 4; W32(esp, v); }
/* 402b5c: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 402b60: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 402b64: call 0x402b6d */
  esp -= 4; W32(esp, 0x402b69u); SPILL(); f_402b6d(); if (g_unwind) return; RELOAD();
/* 402b69: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 402b6c: ret  */
  esp += 4; SPILL(); return;
}

void f_402b6d(void) {
  LOAD_REGS();
L_402b6d: /* 402b6d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 402b6e: mov ebp, esp */
  ebp = esp;
/* 402b70: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 402b73: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 402b76: movzx ecx, word ptr [eax + 0xa] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0xau)));
/* 402b7a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 402b7b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 402b7c: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 402b7f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 402b80: mov edi, ecx */
  edi = ecx;
/* 402b82: and ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 402b88: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 402b8b: mov ecx, dword ptr [eax + 6] */
  ecx = R32((uint32_t)(eax + 0x6u));
/* 402b8e: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* 402b91: mov ecx, dword ptr [eax + 2] */
  ecx = R32((uint32_t)(eax + 0x2u));
/* 402b94: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 402b97: shl eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 402b9a: and edi, 0x7fff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 402ba0: sub edi, 0x3fff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x3fffu);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 402ba6: cmp edi, 0xffffc001 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffc001u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402bac: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 402baf: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 402bb2: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 402bb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402bb6: je 0x40f060 */
  if (zf) goto L_40f060;
L_402bbc: /* 402bbc: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 402bbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402bc0: call 0x402788 */
  esp -= 4; W32(esp, 0x402bc5u); SPILL(); f_402788(); if (g_unwind) return; RELOAD();
/* 402bc5: push dword ptr [esi + 8] */
  { uint32_t v = R32((uint32_t)(esi + 0x8u)); esp -= 4; W32(esp, v); }
/* 402bc8: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 402bcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402bcc: call 0x4027a3 */
  esp -= 4; W32(esp, 0x402bd1u); SPILL(); f_4027a3(); if (g_unwind) return; RELOAD();
/* 402bd1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 402bd4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 402bd6: jne 0x40f07e */
  if (!zf) goto L_40f07e;
L_402bdc: /* 402bdc: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 402bdf: mov ecx, eax */
  ecx = eax;
/* 402be1: sub ecx, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 402be4: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 402be6: jl 0x40f084 */
  if ((sf != of)) goto L_40f084;
L_402bec: /* 402bec: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 402bee: jle 0x40f08e */
  if ((zf || sf != of)) goto L_40f08e;
L_402bf4: /* 402bf4: cmp edi, dword ptr [esi] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 402bf6: push dword ptr [esi + 0xc] */
  { uint32_t v = R32((uint32_t)(esi + 0xcu)); esp -= 4; W32(esp, v); }
/* 402bf9: jge 0x40f0ca */
  if ((sf == of)) goto L_40f0ca;
L_402bff: /* 402bff: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 402c02: and byte ptr [ebp - 9], 0x7f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff7u))); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffff7u), r);
  }
/* 402c06: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 402c09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402c0a: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 402c0c: call 0x402c51 */
  esp -= 4; W32(esp, 0x402c11u); SPILL(); f_402c51(); if (g_unwind) return; RELOAD();
/* 402c11: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 402c12: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_402c13: /* 402c13: xor eax, eax */
  eax = 0;
L_402c15: /* 402c15: push 0x1f */
  { uint32_t v = 0x1fu; esp -= 4; W32(esp, v); }
/* 402c17: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 402c18: sub ecx, dword ptr [esi + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 402c1b: mov esi, dword ptr [esi + 0x10] */
  esi = R32((uint32_t)(esi + 0x10u));
/* 402c1e: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 402c20: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 402c23: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* 402c25: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 402c27: and ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 402c2d: or ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 402c2f: or ebx, dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 402c32: cmp esi, 0x40 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402c35: jne 0x402c47 */
  if (!zf) goto L_402c47;
L_402c37: /* 402c37: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 402c3a: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 402c3d: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 402c40: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
L_402c42: /* 402c42: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 402c43: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 402c44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 402c45: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 402c46: ret  */
  esp += 4; SPILL(); return;
L_402c47: /* 402c47: cmp esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402c4a: jne 0x402c42 */
  if (!zf) goto L_402c42;
L_402c4c: /* 402c4c: jmp 0x40f0ee */
  goto L_40f0ee;
L_40f060: /* 40f060: xor ebx, ebx */
  ebx = 0;
/* 40f062: call 0x431dff */
  esp -= 4; W32(esp, 0x40f067u); SPILL(); f_431dff(); if (g_unwind) return; RELOAD();
/* 40f067: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40f069: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f06a: jne 0x402c13 */
  if (!zf) goto L_402c13;
L_40f070: /* 40f070: lea edi, [ebp - 0xc] */
  edi = (uint32_t)(ebp + 0xfffffff4u);
/* 40f073: stosd dword ptr es:[edi], eax */
  W32(edi, eax); edi += (DF ? -4 : 4);
/* 40f074: stosd dword ptr es:[edi], eax */
  W32(edi, eax); edi += (DF ? -4 : 4);
/* 40f075: stosd dword ptr es:[edi], eax */
  W32(edi, eax); edi += (DF ? -4 : 4);
L_40f076: /* 40f076: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 40f078: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40f079: jmp 0x402c15 */
  goto L_402c15;
L_40f07e: /* 40f07e: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 40f07f: jmp 0x402bdc */
  goto L_402bdc;
L_40f084: /* 40f084: xor eax, eax */
  eax = 0;
/* 40f086: lea edi, [ebp - 0xc] */
  edi = (uint32_t)(ebp + 0xfffffff4u);
/* 40f089: stosd dword ptr es:[edi], eax */
  W32(edi, eax); edi += (DF ? -4 : 4);
/* 40f08a: stosd dword ptr es:[edi], eax */
  W32(edi, eax); edi += (DF ? -4 : 4);
/* 40f08b: stosd dword ptr es:[edi], eax */
  W32(edi, eax); edi += (DF ? -4 : 4);
/* 40f08c: jmp 0x40f0c6 */
  goto L_40f0c6;
L_40f08e: /* 40f08e: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 40f090: mov edi, eax */
  edi = eax;
/* 40f092: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 40f095: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f096: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 40f099: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f09a: call 0x402788 */
  esp -= 4; W32(esp, 0x40f09fu); SPILL(); f_402788(); if (g_unwind) return; RELOAD();
/* 40f09f: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 40f0a2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40f0a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f0a4: call 0x402c51 */
  esp -= 4; W32(esp, 0x40f0a9u); SPILL(); f_402c51(); if (g_unwind) return; RELOAD();
/* 40f0a9: push dword ptr [esi + 8] */
  { uint32_t v = R32((uint32_t)(esi + 0x8u)); esp -= 4; W32(esp, v); }
/* 40f0ac: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 40f0af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f0b0: call 0x4027a3 */
  esp -= 4; W32(esp, 0x40f0b5u); SPILL(); f_4027a3(); if (g_unwind) return; RELOAD();
/* 40f0b5: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 40f0b8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40f0b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f0ba: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 40f0bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f0be: call 0x402c51 */
  esp -= 4; W32(esp, 0x40f0c3u); SPILL(); f_402c51(); if (g_unwind) return; RELOAD();
/* 40f0c3: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_40f0c6: /* 40f0c6: xor ebx, ebx */
  ebx = 0;
/* 40f0c8: jmp 0x40f076 */
  goto L_40f076;
L_40f0ca: /* 40f0ca: xor eax, eax */
  eax = 0;
/* 40f0cc: lea edi, [ebp - 0xc] */
  edi = (uint32_t)(ebp + 0xfffffff4u);
/* 40f0cf: stosd dword ptr es:[edi], eax */
  W32(edi, eax); edi += (DF ? -4 : 4);
/* 40f0d0: stosd dword ptr es:[edi], eax */
  W32(edi, eax); edi += (DF ? -4 : 4);
/* 40f0d1: stosd dword ptr es:[edi], eax */
  W32(edi, eax); edi += (DF ? -4 : 4);
/* 40f0d2: or byte ptr [ebp - 9], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff7u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff7u), r);
  }
/* 40f0d6: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 40f0d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40f0da: call 0x402c51 */
  esp -= 4; W32(esp, 0x40f0dfu); SPILL(); f_402c51(); if (g_unwind) return; RELOAD();
/* 40f0df: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 40f0e2: add ebx, dword ptr [esi] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 40f0e4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f0e5: xor eax, eax */
  eax = 0;
/* 40f0e7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40f0e8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40f0e9: jmp 0x402c15 */
  goto L_402c15;
L_40f0ee: /* 40f0ee: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 40f0f1: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 40f0f3: jmp 0x402c42 */
  goto L_402c42;
}

void f_402c51(void) {
  LOAD_REGS();
L_402c51: /* 402c51: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 402c52: mov ebp, esp */
  ebp = esp;
/* 402c54: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 402c57: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 402c5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 402c5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 402c5c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 402c5d: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 402c5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 402c60: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 402c61: mov ecx, esi */
  ecx = esi;
/* 402c63: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x402c63);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 402c65: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 402c68: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edi = r;
  }
/* 402c6b: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 402c6e: mov ecx, edx */
  ecx = edx;
/* 402c70: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 402c72: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 402c75: xor eax, eax */
  eax = 0;
/* 402c77: sub dword ptr [ebp + 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 402c7a: not edi */
  edi = ~edi;
/* 402c7c: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_402c7f: /* 402c7f: mov esi, dword ptr [ebx + eax*4] */
  esi = R32((uint32_t)(ebx + eax*4));
/* 402c82: mov ecx, esi */
  ecx = esi;
/* 402c84: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 402c86: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* 402c89: mov ecx, edx */
  ecx = edx;
/* 402c8b: shr esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
  }
/* 402c8d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 402c90: or esi, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  esi = r;
  }
/* 402c93: mov dword ptr [ebx + eax*4], esi */
  W32((uint32_t)(ebx + eax*4), esi);
/* 402c96: mov esi, dword ptr [ebp - 0xc] */
  esi = R32((uint32_t)(ebp + 0xfffffff4u));
/* 402c99: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 402c9b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 402c9c: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 402c9f: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 402ca2: jl 0x402c7f */
  if ((sf != of)) goto L_402c7f;
L_402ca4: /* 402ca4: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 402ca6: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 402ca7: mov ecx, eax */
  ecx = eax;
/* 402ca9: sub ecx, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 402cac: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
L_402caf: /* 402caf: cmp eax, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 402cb2: jl 0x402cc6 */
  if ((sf != of)) goto L_402cc6;
L_402cb4: /* 402cb4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 402cb6: mov dword ptr [ebx + eax*4], edx */
  W32((uint32_t)(ebx + eax*4), edx);
L_402cb9: /* 402cb9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 402cba: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 402cbd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 402cbf: jge 0x402caf */
  if ((sf == of)) goto L_402caf;
L_402cc1: /* 402cc1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 402cc2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 402cc3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 402cc4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 402cc5: ret  */
  esp += 4; SPILL(); return;
L_402cc6: /* 402cc6: and dword ptr [ebx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebx + eax*4), r);
  }
/* 402cca: jmp 0x402cb9 */
  goto L_402cb9;
}

void f_402ccc(void) { hle_ftol(); }

void f_402d4a(void) {
  LOAD_REGS();
  goto L_402d4a;
L_402cf3: /* 402cf3: dec dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 402cf6: inc dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 402cf9: jmp 0x402e89 */
  goto L_402e89;
L_402cfe: /* 402cfe: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 402cff: jmp 0x402d8b */
  goto L_402d8b;
L_402d04: /* 402d04: cmp bl, byte ptr [0x44a9ac] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(0x44a9acu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 402d0a: jne 0x40edc2 */
  if (!zf) goto L_40edc2;
L_402d10: /* 402d10: jmp 0x40edbb */
  goto L_40edbb;
L_402d15: /* 402d15: cmp bl, 0x30 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 402d18: je 0x402db1 */
  if (zf) goto L_402db1;
L_402d1e: /* 402d1e: jmp 0x402e57 */
  goto L_402e57;
L_402d23: /* 402d23: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 402d24: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* 402d26: jmp 0x40ef8e */
  goto L_40ef8e;
L_402d2b: /* 402d2b: inc dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 402d2e: jmp 0x402e34 */
  goto L_402e34;
L_402d33: /* 402d33: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402d36: jne 0x402db1 */
  if (!zf) goto L_402db1;
L_402d38: /* 402d38: jmp 0x402e61 */
  goto L_402e61;
L_402d3d: /* 402d3d: xor edx, edx */
  edx = 0;
/* 402d3f: xor eax, eax */
  eax = 0;
/* 402d41: xor esi, esi */
  esi = 0;
/* 402d43: xor ebx, ebx */
  ebx = 0;
/* 402d45: jmp 0x402ef9 */
  goto L_402ef9;
L_402d4a: /* 402d4a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 402d4b: mov ebp, esp */
  ebp = esp;
/* 402d4d: sub esp, 0x58 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 402d50: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 402d55: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 402d58: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 402d59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 402d5a: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 402d5d: xor eax, eax */
  eax = 0;
/* 402d5f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 402d60: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 402d63: lea esi, [ebp - 0x58] */
  esi = (uint32_t)(ebp + 0xffffffa8u);
/* 402d66: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
/* 402d69: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 402d6c: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 402d73: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 402d76: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 402d79: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 402d7c: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 402d7f: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 402d82: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 402d85: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 402d88: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
L_402d8b: /* 402d8b: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 402d8d: cmp cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 402d90: je 0x402cfe */
  if (zf) goto L_402cfe;
L_402d96: /* 402d96: cmp cl, 9 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 402d99: je 0x402cfe */
  if (zf) goto L_402cfe;
L_402d9f: /* 402d9f: cmp cl, 0xa */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 402da2: je 0x402cfe */
  if (zf) goto L_402cfe;
L_402da8: /* 402da8: cmp cl, 0xd */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 402dab: je 0x402cfe */
  if (zf) goto L_402cfe;
L_402db1: /* 402db1: mov bl, byte ptr [edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 402db3: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 402db4: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 402db7: ja 0x402d33 */
  if ((!cf && !zf)) goto L_402d33;
L_402dbd: /* 402dbd: jmp dword ptr [eax*4 + 0x402dc4] */
  switch (R32((uint32_t)(eax*4 + 0x402dc4u))) {
    case 0x402d33u: goto L_402d33;
    case 0x402df4u: goto L_402df4;
    case 0x402e0cu: goto L_402e0c;
    case 0x40edfbu: goto L_40edfb;
    case 0x40ee53u: goto L_40ee53;
    case 0x40ee7eu: goto L_40ee7e;
    case 0x40eec4u: goto L_40eec4;
    case 0x40eee4u: goto L_40eee4;
    case 0x40ef11u: goto L_40ef11;
    case 0x40ef4au: goto L_40ef4a;
    case 0x40ef68u: goto L_40ef68;
    case 0x40efa7u: goto L_40efa7;
    default: guest_badjump(0x402dbd, R32((uint32_t)(eax*4 + 0x402dc4u))); return;
  }
L_402df4: /* 402df4: cmp bl, 0x31 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 402df7: jl 0x402d04 */
  if ((sf != of)) goto L_402d04;
L_402dfd: /* 402dfd: cmp bl, 0x39 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 402e00: jg 0x402d04 */
  if ((!zf && sf == of)) goto L_402d04;
L_402e06: /* 402e06: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
L_402e08: /* 402e08: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 402e09: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 402e0a: jmp 0x402db1 */
  goto L_402db1;
L_402e0c: /* 402e0c: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_402e13: /* 402e13: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 402e16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402e17: call 0x40152b */
  esp -= 4; W32(esp, 0x402e1cu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 402e1c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 402e1e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 402e1f: je 0x402e39 */
  if (zf) goto L_402e39;
L_402e21: /* 402e21: cmp dword ptr [ebp - 0xc], 0x19 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x19u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 402e25: jae 0x402d2b */
  if (!cf) goto L_402d2b;
L_402e2b: /* 402e2b: inc dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 402e2e: sub bl, 0x30 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 402e31: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 402e33: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_402e34: /* 402e34: mov bl, byte ptr [edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 402e36: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 402e37: jmp 0x402e13 */
  goto L_402e13;
L_402e39: /* 402e39: cmp bl, byte ptr [0x44a9ac] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(0x44a9acu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 402e3f: je 0x40ee17 */
  if (zf) goto L_40ee17;
L_402e45: /* 402e45: cmp bl, 0x2b */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 402e48: je 0x402d23 */
  if (zf) goto L_402d23;
L_402e4e: /* 402e4e: cmp bl, 0x2d */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 402e51: je 0x402d23 */
  if (zf) goto L_402d23;
L_402e57: /* 402e57: cmp bl, 0x43 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x43u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 402e5a: jg 0x40ee35 */
  if ((!zf && sf == of)) goto L_40ee35;
L_402e60: /* 402e60: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_402e61: /* 402e61: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
L_402e64: /* 402e64: cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402e68: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 402e6b: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 402e6d: je 0x40f008 */
  if (zf) goto L_40f008;
L_402e73: /* 402e73: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 402e75: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 402e76: cmp dword ptr [ebp - 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 402e79: ja 0x40ef35 */
  if ((!cf && !zf)) goto L_40ef35;
L_402e7f: /* 402e7f: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 402e83: jbe 0x402d3d */
  if ((cf | zf)) goto L_402d3d;
L_402e89: /* 402e89: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 402e8a: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 402e8d: je 0x402cf3 */
  if (zf) goto L_402cf3;
L_402e93: /* 402e93: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 402e96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402e97: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 402e9a: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 402e9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402e9e: call 0x4027f8 */
  esp -= 4; W32(esp, 0x402ea3u); SPILL(); f_4027f8(); if (g_unwind) return; RELOAD();
/* 402ea3: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 402ea6: xor ecx, ecx */
  ecx = 0;
/* 402ea8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 402eab: cmp dword ptr [ebp - 0x1c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 402eae: jl 0x40f001 */
  if ((sf != of)) goto L_40f001;
L_402eb4: /* 402eb4: add eax, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 402eb7: cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402eba: jne 0x402ebf */
  if (!zf) goto L_402ebf;
L_402ebc: /* 402ebc: add eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_402ebf: /* 402ebf: cmp dword ptr [ebp - 0x28], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402ec2: jne 0x402ec7 */
  if (!zf) goto L_402ec7;
L_402ec4: /* 402ec4: sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_402ec7: /* 402ec7: cmp eax, 0x1450 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1450u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 402ecc: jg 0x40f014 */
  if ((!zf && sf == of)) goto L_40f014;
L_402ed2: /* 402ed2: cmp eax, 0xffffebb0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffebb0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 402ed7: jl 0x40f02e */
  if ((sf != of)) goto L_40f02e;
L_402edd: /* 402edd: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 402ee0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402ee1: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 402ee4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 402ee5: call 0x402f1f */
  esp -= 4; W32(esp, 0x402eeau); SPILL(); f_402f1f(); if (g_unwind) return; RELOAD();
/* 402eea: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 402eed: mov ebx, dword ptr [ebp - 0x3a] */
  ebx = R32((uint32_t)(ebp + 0xffffffc6u));
/* 402ef0: mov esi, dword ptr [ebp - 0x36] */
  esi = R32((uint32_t)(ebp + 0xffffffcau));
/* 402ef3: mov eax, dword ptr [ebp - 0x32] */
  eax = R32((uint32_t)(ebp + 0xffffffceu));
/* 402ef6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_402ef9: /* 402ef9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 402efc: or eax, dword ptr [ebp - 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 402eff: mov dword ptr [ecx + 2], ebx */
  W32((uint32_t)(ecx + 0x2u), ebx);
/* 402f02: mov dword ptr [ecx + 6], esi */
  W32((uint32_t)(ecx + 0x6u), esi);
/* 402f05: mov word ptr [ecx + 0xa], ax */
  W16((uint32_t)(ecx + 0xau), (eax & 0xffffu));
/* 402f09: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 402f0c: mov word ptr [ecx], dx */
  W16((uint32_t)(ecx), (edx & 0xffffu));
/* 402f0f: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 402f12: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 402f15: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 402f16: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 402f17: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 402f18: call 0x4013ab */
  esp -= 4; W32(esp, 0x402f1du); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 402f1d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 402f1e: ret  */
  esp += 4; SPILL(); return;
L_40edbb: /* 40edbb: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 40edbd: jmp 0x40ef8e */
  goto L_40ef8e;
L_40edc2: /* 40edc2: movsx eax, bl */
  eax = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 40edc5: sub eax, 0x2b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 40edc8: je 0x40edef */
  if (zf) goto L_40edef;
L_40edca: /* 40edca: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 40edcb: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 40edcc: je 0x40ede0 */
  if (zf) goto L_40ede0;
L_40edce: /* 40edce: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 40edd1: je 0x40ee76 */
  if (zf) goto L_40ee76;
L_40edd7: /* 40edd7: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
/* 40edda: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 40eddb: jmp 0x402e64 */
  goto L_402e64;
L_40ede0: /* 40ede0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 40ede2: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40ede3: mov dword ptr [ebp - 0x2c], 0x8000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x8000u);
/* 40edea: jmp 0x402db1 */
  goto L_402db1;
L_40edef: /* 40edef: and dword ptr [ebp - 0x2c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
/* 40edf3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 40edf5: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40edf6: jmp 0x402db1 */
  goto L_402db1;
L_40edfb: /* 40edfb: xor eax, eax */
  eax = 0;
/* 40edfd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40edfe: cmp bl, 0x31 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40ee01: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 40ee04: jl 0x40ee0f */
  if ((sf != of)) goto L_40ee0f;
L_40ee06: /* 40ee06: cmp bl, 0x39 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40ee09: jle 0x402e06 */
  if ((zf || sf != of)) goto L_402e06;
L_40ee0f: /* 40ee0f: cmp bl, byte ptr [0x44a9ac] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(0x44a9acu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40ee15: jne 0x40ee1e */
  if (!zf) goto L_40ee1e;
L_40ee17: /* 40ee17: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40ee19: jmp 0x40ef8e */
  goto L_40ef8e;
L_40ee1e: /* 40ee1e: cmp bl, 0x2b */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40ee21: je 0x402d23 */
  if (zf) goto L_402d23;
L_40ee27: /* 40ee27: cmp bl, 0x2d */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40ee2a: je 0x402d23 */
  if (zf) goto L_402d23;
L_40ee30: /* 40ee30: jmp 0x402d15 */
  goto L_402d15;
L_40ee35: /* 40ee35: cmp bl, 0x45 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x45u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40ee38: jle 0x40ee4c */
  if ((zf || sf != of)) goto L_40ee4c;
L_40ee3a: /* 40ee3a: cmp bl, 0x63 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x63u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40ee3d: jle 0x402e60 */
  if ((zf || sf != of)) goto L_402e60;
L_40ee43: /* 40ee43: cmp bl, 0x65 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x65u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40ee46: jg 0x402e60 */
  if ((!zf && sf == of)) goto L_402e60;
L_40ee4c: /* 40ee4c: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 40ee4e: jmp 0x40ef8e */
  goto L_40ef8e;
L_40ee53: /* 40ee53: cmp bl, 0x31 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40ee56: jl 0x40ee61 */
  if ((sf != of)) goto L_40ee61;
L_40ee58: /* 40ee58: cmp bl, 0x39 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40ee5b: jle 0x402e06 */
  if ((zf || sf != of)) goto L_402e06;
L_40ee61: /* 40ee61: cmp bl, byte ptr [0x44a9ac] */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(0x44a9acu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40ee67: je 0x40edbb */
  if (zf) goto L_40edbb;
L_40ee6d: /* 40ee6d: cmp bl, 0x30 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40ee70: jne 0x40ef60 */
  if (!zf) goto L_40ef60;
L_40ee76: /* 40ee76: xor eax, eax */
  eax = 0;
/* 40ee78: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40ee79: jmp 0x402db1 */
  goto L_402db1;
L_40ee7e: /* 40ee7e: xor eax, eax */
  eax = 0;
/* 40ee80: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40ee81: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ee85: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 40ee88: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 40ee8b: jne 0x40eeb1 */
  if (!zf) goto L_40eeb1;
L_40ee8d: /* 40ee8d: jmp 0x40ee95 */
  goto L_40ee95;
L_40ee8f: /* 40ee8f: dec dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 40ee92: mov bl, byte ptr [edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 40ee94: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_40ee95: /* 40ee95: cmp bl, 0x30 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40ee98: je 0x40ee8f */
  if (zf) goto L_40ee8f;
L_40ee9a: /* 40ee9a: jmp 0x40eeb1 */
  goto L_40eeb1;
L_40ee9c: /* 40ee9c: cmp dword ptr [ebp - 0xc], 0x19 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x19u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40eea0: jae 0x40eeae */
  if (!cf) goto L_40eeae;
L_40eea2: /* 40eea2: inc dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 40eea5: sub bl, 0x30 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 40eea8: mov byte ptr [esi], bl */
  W8((uint32_t)(esi), (ebx & 0xffu));
/* 40eeaa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40eeab: dec dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
L_40eeae: /* 40eeae: mov bl, byte ptr [edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 40eeb0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_40eeb1: /* 40eeb1: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 40eeb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40eeb5: call 0x40152b */
  esp -= 4; W32(esp, 0x40eebau); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 40eeba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40eebc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40eebd: jne 0x40ee9c */
  if (!zf) goto L_40ee9c;
L_40eebf: /* 40eebf: jmp 0x402e45 */
  goto L_402e45;
L_40eec4: /* 40eec4: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 40eec7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40eec8: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
/* 40eecf: call 0x40152b */
  esp -= 4; W32(esp, 0x40eed4u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 40eed4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40eed6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40eed7: je 0x40ef60 */
  if (zf) goto L_40ef60;
L_40eedd: /* 40eedd: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40eedf: jmp 0x402e08 */
  goto L_402e08;
L_40eee4: /* 40eee4: cmp bl, 0x31 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40eee7: lea ecx, [edi - 2] */
  ecx = (uint32_t)(edi + 0xfffffffeu);
/* 40eeea: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 40eeed: jl 0x40eef4 */
  if ((sf != of)) goto L_40eef4;
L_40eeef: /* 40eeef: cmp bl, 0x39 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40eef2: jle 0x40ef54 */
  if ((zf || sf != of)) goto L_40ef54;
L_40eef4: /* 40eef4: movsx eax, bl */
  eax = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 40eef7: sub eax, 0x2b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 40eefa: je 0x40ef8c */
  if (zf) goto L_40ef8c;
L_40ef00: /* 40ef00: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 40ef01: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 40ef02: je 0x40ef80 */
  if (zf) goto L_40ef80;
L_40ef04: /* 40ef04: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 40ef07: jne 0x40ef9d */
  if (!zf) goto L_40ef9d;
L_40ef0d: /* 40ef0d: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 40ef0f: jmp 0x40ef8e */
  goto L_40ef8e;
L_40ef11: /* 40ef11: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 40ef18: jmp 0x40ef1d */
  goto L_40ef1d;
L_40ef1a: /* 40ef1a: mov bl, byte ptr [edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 40ef1c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_40ef1d: /* 40ef1d: cmp bl, 0x30 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40ef20: je 0x40ef1a */
  if (zf) goto L_40ef1a;
L_40ef22: /* 40ef22: cmp bl, 0x31 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40ef25: jl 0x402e60 */
  if ((sf != of)) goto L_402e60;
L_40ef2b: /* 40ef2b: cmp bl, 0x39 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40ef2e: jle 0x40ef54 */
  if ((zf || sf != of)) goto L_40ef54;
L_40ef30: /* 40ef30: jmp 0x402e60 */
  goto L_402e60;
L_40ef35: /* 40ef35: cmp byte ptr [ebp - 0x41], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffbfu))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40ef39: jl 0x40ef3e */
  if ((sf != of)) goto L_40ef3e;
L_40ef3b: /* 40ef3b: inc byte ptr [ebp - 0x41] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffbfu)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(ebp + 0xffffffbfu), r);
  }
L_40ef3e: /* 40ef3e: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 40ef3f: inc dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 40ef42: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 40ef45: jmp 0x402e7f */
  goto L_402e7f;
L_40ef4a: /* 40ef4a: cmp bl, 0x31 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40ef4d: jl 0x40ef5b */
  if ((sf != of)) goto L_40ef5b;
L_40ef4f: /* 40ef4f: cmp bl, 0x39 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40ef52: jg 0x40ef5b */
  if ((!zf && sf == of)) goto L_40ef5b;
L_40ef54: /* 40ef54: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 40ef56: jmp 0x402e08 */
  goto L_402e08;
L_40ef5b: /* 40ef5b: cmp bl, 0x30 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40ef5e: je 0x40ef0d */
  if (zf) goto L_40ef0d;
L_40ef60: /* 40ef60: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 40ef63: jmp 0x402e61 */
  goto L_402e61;
L_40ef68: /* 40ef68: cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ef6c: je 0x40ef94 */
  if (zf) goto L_40ef94;
L_40ef6e: /* 40ef6e: movsx eax, bl */
  eax = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 40ef71: sub eax, 0x2b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 40ef74: lea ecx, [edi - 1] */
  ecx = (uint32_t)(edi + 0xffffffffu);
/* 40ef77: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 40ef7a: je 0x40ef8c */
  if (zf) goto L_40ef8c;
L_40ef7c: /* 40ef7c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 40ef7d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 40ef7e: jne 0x40ef9d */
  if (!zf) goto L_40ef9d;
L_40ef80: /* 40ef80: or dword ptr [ebp - 0x1c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 40ef84: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 40ef86: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40ef87: jmp 0x402db1 */
  goto L_402db1;
L_40ef8c: /* 40ef8c: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
L_40ef8e: /* 40ef8e: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40ef8f: jmp 0x402db1 */
  goto L_402db1;
L_40ef94: /* 40ef94: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 40ef96: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40ef97: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 40ef98: jmp 0x402d33 */
  goto L_402d33;
L_40ef9d: /* 40ef9d: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
/* 40efa0: mov edi, ecx */
  edi = ecx;
/* 40efa2: jmp 0x402e64 */
  goto L_402e64;
L_40efa7: /* 40efa7: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
/* 40efaa: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 40efb1: xor esi, esi */
  esi = 0;
/* 40efb3: jmp 0x40efca */
  goto L_40efca;
L_40efb5: /* 40efb5: movsx ecx, bl */
  ecx = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 40efb8: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 40efbb: lea esi, [ecx + eax*2 - 0x30] */
  esi = (uint32_t)(ecx + eax*2 + 0xffffffd0u);
/* 40efbf: cmp esi, 0x1450 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1450u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40efc5: jg 0x40efda */
  if ((!zf && sf == of)) goto L_40efda;
L_40efc7: /* 40efc7: mov bl, byte ptr [edi] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 40efc9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_40efca: /* 40efca: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 40efcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40efce: call 0x40152b */
  esp -= 4; W32(esp, 0x40efd3u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 40efd3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40efd5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40efd6: jne 0x40efb5 */
  if (!zf) goto L_40efb5;
L_40efd8: /* 40efd8: jmp 0x40efdf */
  goto L_40efdf;
L_40efda: /* 40efda: mov esi, 0x1451 */
  esi = 0x1451u;
L_40efdf: /* 40efdf: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 40efe2: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 40efe5: jmp 0x40efed */
  goto L_40efed;
L_40efe7: /* 40efe7: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 40efe9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 40efea: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
L_40efed: /* 40efed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40efee: call 0x40152b */
  esp -= 4; W32(esp, 0x40eff3u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 40eff3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40eff5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40eff6: jne 0x40efe7 */
  if (!zf) goto L_40efe7;
L_40eff8: /* 40eff8: mov esi, dword ptr [ebp - 8] */
  esi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 40effb: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 40effc: jmp 0x402e64 */
  goto L_402e64;
L_40f001: /* 40f001: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 40f003: jmp 0x402eb4 */
  goto L_402eb4;
L_40f008: /* 40f008: mov dword ptr [ebp - 0x18], 4 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x4u);
/* 40f00f: jmp 0x402d3d */
  goto L_402d3d;
L_40f014: /* 40f014: xor ebx, ebx */
  ebx = 0;
/* 40f016: mov eax, 0x7fff */
  eax = 0x7fffu;
/* 40f01b: mov esi, 0x80000000 */
  esi = 0x80000000u;
/* 40f020: xor edx, edx */
  edx = 0;
/* 40f022: mov dword ptr [ebp - 0x18], 2 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x2u);
/* 40f029: jmp 0x402ef9 */
  goto L_402ef9;
L_40f02e: /* 40f02e: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* 40f035: jmp 0x402d3d */
  goto L_402d3d;
}

void f_402f1f(void) {
  LOAD_REGS();
L_402f1f: /* 402f1f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 402f20: mov ebp, esp */
  ebp = esp;
/* 402f22: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 402f25: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 402f2a: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 402f2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 402f2e: mov ebx, 0x44abc8 */
  ebx = 0x44abc8u;
/* 402f33: xor ecx, ecx */
  ecx = 0;
/* 402f35: sub ebx, 0x60 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 402f38: cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 402f3b: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 402f3e: jne 0x402f4e */
  if (!zf) goto L_402f4e;
L_402f40: /* 402f40: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 402f43: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 402f46: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 402f47: call 0x4013ab */
  esp -= 4; W32(esp, 0x402f4cu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 402f4c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 402f4d: ret  */
  esp += 4; SPILL(); return;
L_402f4e: /* 402f4e: jl 0x40f22d */
  if ((sf != of)) goto L_40f22d;
L_402f54: /* 402f54: cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402f57: jne 0x402f5f */
  if (!zf) goto L_402f5f;
L_402f59: /* 402f59: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 402f5c: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
L_402f5f: /* 402f5f: cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402f62: je 0x402f40 */
  if (zf) goto L_402f40;
L_402f64: /* 402f64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 402f65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_402f66: /* 402f66: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 402f69: sar dword ptr [ebp + 0xc], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 402f6d: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 402f70: add ebx, 0x54 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 402f73: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402f75: je 0x402f95 */
  if (zf) goto L_402f95;
L_402f77: /* 402f77: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 402f7a: lea esi, [ebx + eax*4] */
  esi = (uint32_t)(ebx + eax*4);
/* 402f7d: cmp word ptr [esi], 0x8000 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x8000u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 402f82: jae 0x40f23d */
  if (!cf) goto L_40f23d;
L_402f88: /* 402f88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 402f89: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 402f8c: call 0x403d46 */
  esp -= 4; W32(esp, 0x402f91u); SPILL(); f_403d46(); if (g_unwind) return; RELOAD();
/* 402f91: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 402f92: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 402f93: xor ecx, ecx */
  ecx = 0;
L_402f95: /* 402f95: cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402f98: jne 0x402f66 */
  if (!zf) goto L_402f66;
L_402f9a: /* 402f9a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 402f9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 402f9c: jmp 0x402f40 */
  goto L_402f40;
L_40f22d: /* 40f22d: neg dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(0 - a);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 40f230: mov ebx, 0x44e048 */
  ebx = 0x44e048u;
/* 40f235: sub ebx, 0x60 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 40f238: jmp 0x402f54 */
  goto L_402f54;
L_40f23d: /* 40f23d: lea edi, [ebp - 0x10] */
  edi = (uint32_t)(ebp + 0xfffffff0u);
/* 40f240: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40f241: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40f242: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 40f243: dec dword ptr [ebp - 0xe] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff2u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xfffffff2u), r);
  }
/* 40f246: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* 40f249: jmp 0x402f88 */
  goto L_402f88;
}

void f_40317f(void) {
  LOAD_REGS();
  goto L_40317f;
L_402f9e: /* 402f9e: mov edi, ebx */
  edi = ebx;
/* 402fa0: jmp 0x4030ba */
  goto L_4030ba;
L_402fa5: /* 402fa5: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 402fa7: jae 0x402fbd */
  if (!cf) goto L_402fbd;
L_402fa9: /* 402fa9: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 402fad: mov dword ptr [esp + ecx*4 + 0x20], ebx */
  W32((uint32_t)(esp + ecx*4 + 0x20u), ebx);
/* 402fb1: mov dword ptr [esp + ecx*4 + 0x98], edx */
  W32((uint32_t)(esp + ecx*4 + 0x98u), edx);
/* 402fb8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 402fb9: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
L_402fbd: /* 402fbd: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 402fbf: jae 0x4031eb */
  if (!cf) goto L_4031eb;
L_402fc5: /* 402fc5: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 402fc9: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 402fcd: jmp 0x4031c5 */
  goto L_4031c5;
L_402fd2: /* 402fd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 402fd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 402fd4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 402fd5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_402fd6: /* 402fd6: add esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 402fdc: ret  */
  esp += 4; SPILL(); return;
L_402fdd: /* 402fdd: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 402fdf: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* 402fe2: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 402fe4: mov edi, eax */
  edi = eax;
/* 402fe6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 402fe7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 402fe8: call dword ptr [esp + 0x128] */
  { uint32_t t = R32((uint32_t)(esp + 0x128u)); esp -= 4; W32(esp, 0x402fefu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 402fef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 402ff2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 402ff4: jle 0x403018 */
  if ((zf || sf != of)) goto L_403018;
L_402ff6: /* 402ff6: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 402ff8: mov eax, edi */
  eax = edi;
/* 402ffa: je 0x403018 */
  if (zf) goto L_403018;
L_402ffc: /* 402ffc: mov ecx, ebx */
  ecx = ebx;
/* 402ffe: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 403000: mov esi, ebp */
  esi = ebp;
L_403002: /* 403002: mov bl, byte ptr [eax] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 403004: mov dl, byte ptr [ecx + eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax))) & 0xffu);
/* 403007: mov byte ptr [ecx + eax], bl */
  W8((uint32_t)(ecx + eax), (ebx & 0xffu));
/* 40300a: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 40300c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40300d: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 40300e: jne 0x403002 */
  if (!zf) goto L_403002;
L_403010: /* 403010: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 403014: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
L_403018: /* 403018: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 403019: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40301a: call dword ptr [esp + 0x128] */
  { uint32_t t = R32((uint32_t)(esp + 0x128u)); esp -= 4; W32(esp, 0x403021u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 403021: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 403024: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 403026: jg 0x403279 */
  if ((!zf && sf == of)) goto L_403279;
L_40302c: /* 40302c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40302d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40302e: call dword ptr [esp + 0x128] */
  { uint32_t t = R32((uint32_t)(esp + 0x128u)); esp -= 4; W32(esp, 0x403035u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 403035: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 403038: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40303a: jle 0x40305a */
  if ((zf || sf != of)) goto L_40305a;
L_40303c: /* 40303c: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40303e: mov eax, esi */
  eax = esi;
/* 403040: je 0x40305a */
  if (zf) goto L_40305a;
L_403042: /* 403042: mov ecx, edi */
  ecx = edi;
/* 403044: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 403046: mov esi, ebp */
  esi = ebp;
L_403048: /* 403048: mov bl, byte ptr [eax] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 40304a: mov dl, byte ptr [ecx + eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax))) & 0xffu);
/* 40304d: mov byte ptr [ecx + eax], bl */
  W8((uint32_t)(ecx + eax), (ebx & 0xffu));
/* 403050: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 403052: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 403053: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 403054: jne 0x403048 */
  if (!zf) goto L_403048;
L_403056: /* 403056: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
L_40305a: /* 40305a: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 40305e: mov edi, edi */
  edi = edi;
/* 403060: jmp 0x4030ba */
  goto L_4030ba;
L_403062: /* 403062: sub esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 403064: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 403066: jbe 0x403078 */
  if ((cf | zf)) goto L_403078;
L_403068: /* 403068: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 403069: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40306a: call dword ptr [esp + 0x128] */
  { uint32_t t = R32((uint32_t)(esp + 0x128u)); esp -= 4; W32(esp, 0x403071u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 403071: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 403074: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 403076: jg 0x403062 */
  if ((!zf && sf == of)) goto L_403062;
L_403078: /* 403078: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40307a: ja 0x40311b */
  if ((!cf && !zf)) goto L_40311b;
L_403080: /* 403080: mov eax, esi */
  eax = esi;
/* 403082: je 0x4030b2 */
  if (zf) goto L_4030b2;
L_403084: /* 403084: mov ecx, dword ptr [esp + 0x11c] */
  ecx = R32((uint32_t)(esp + 0x11cu));
/* 40308b: mov ebp, ebx */
  ebp = ebx;
/* 40308d: sub ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 40308f: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 403093: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_403095: /* 403095: mov cl, byte ptr [eax + ebp] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ebp))) & 0xffu);
/* 403098: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 40309a: mov byte ptr [eax + ebp], dl */
  W8((uint32_t)(eax + ebp), (edx & 0xffu));
/* 40309d: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 40309f: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 4030a3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4030a4: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 4030a5: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* 4030a9: jne 0x403095 */
  if (!zf) goto L_403095;
L_4030ab: /* 4030ab: mov ebp, dword ptr [esp + 0x11c] */
  ebp = R32((uint32_t)(esp + 0x11cu));
L_4030b2: /* 4030b2: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4030b4: je 0x402f9e */
  if (zf) goto L_402f9e;
L_4030ba: /* 4030ba: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4030bc: jbe 0x4030dd */
  if ((cf | zf)) goto L_4030dd;
L_4030be: /* 4030be: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 4030c0: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4030c2: jae 0x4030dd */
  if (!cf) goto L_4030dd;
L_4030c4: /* 4030c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4030c5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4030c6: call dword ptr [esp + 0x128] */
  { uint32_t t = R32((uint32_t)(esp + 0x128u)); esp -= 4; W32(esp, 0x4030cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4030cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4030d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4030d2: jle 0x4030be */
  if ((zf || sf != of)) goto L_4030be;
L_4030d4: /* 4030d4: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4030d6: ja 0x403062 */
  if ((!cf && !zf)) goto L_403062;
L_4030d8: /* 4030d8: jmp 0x40e657 */
  goto L_40e657;
L_4030dd: /* 4030dd: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4030e1: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 4030e3: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4030e5: ja 0x403062 */
  if ((!cf && !zf)) goto L_403062;
L_4030eb: /* 4030eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4030ec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4030ed: call dword ptr [esp + 0x128] */
  { uint32_t t = R32((uint32_t)(esp + 0x128u)); esp -= 4; W32(esp, 0x4030f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4030f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4030f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4030f9: jle 0x4030dd */
  if ((zf || sf != of)) goto L_4030dd;
L_4030fb: /* 4030fb: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
/* 4030fd: jmp 0x403062 */
  goto L_403062;
L_403102: /* 403102: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 403103: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 403104: call dword ptr [esp + 0x128] */
  { uint32_t t = R32((uint32_t)(esp + 0x128u)); esp -= 4; W32(esp, 0x40310bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40310b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40310e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403110: je 0x403121 */
  if (zf) goto L_403121;
L_403112: /* 403112: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 403114: jb 0x403141 */
  if (cf) goto L_403141;
L_403116: /* 403116: jmp 0x40e65e */
  goto L_40e65e;
L_40311b: /* 40311b: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40311d: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40311f: jae 0x403127 */
  if (!cf) goto L_403127;
L_403121: /* 403121: sub esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 403123: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 403125: ja 0x403102 */
  if ((!cf && !zf)) goto L_403102;
L_403127: /* 403127: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 40312b: sub esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 40312d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40312f: jbe 0x403145 */
  if ((cf | zf)) goto L_403145;
L_403131: /* 403131: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 403132: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 403133: call dword ptr [esp + 0x128] */
  { uint32_t t = R32((uint32_t)(esp + 0x128u)); esp -= 4; W32(esp, 0x40313au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 40313a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40313d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40313f: je 0x403127 */
  if (zf) goto L_403127;
L_403141: /* 403141: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_403145: /* 403145: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 403149: mov ecx, edx */
  ecx = edx;
/* 40314b: mov edi, esi */
  edi = esi;
/* 40314d: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 40314f: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 403151: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 403153: jl 0x402fa5 */
  if ((sf != of)) goto L_402fa5;
L_403159: /* 403159: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40315b: jae 0x403171 */
  if (!cf) goto L_403171;
L_40315d: /* 40315d: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 403161: mov dword ptr [esp + ecx*4 + 0x20], eax */
  W32((uint32_t)(esp + ecx*4 + 0x20u), eax);
/* 403165: mov dword ptr [esp + ecx*4 + 0x98], esi */
  W32((uint32_t)(esp + ecx*4 + 0x98u), esi);
/* 40316c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 40316d: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
L_403171: /* 403171: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 403173: jae 0x4031eb */
  if (!cf) goto L_4031eb;
L_403175: /* 403175: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 403179: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 40317d: jmp 0x4031c5 */
  goto L_4031c5;
L_40317f: /* 40317f: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 403183: sub esp, 0x100 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 403189: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40318c: jb 0x402fd6 */
  if (cf) goto L_402fd6;
L_403192: /* 403192: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 403193: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 403194: mov ebp, dword ptr [esp + 0x114] */
  ebp = R32((uint32_t)(esp + 0x114u));
/* 40319b: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40319d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40319e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40319f: je 0x402fd2 */
  if (zf) goto L_402fd2;
L_4031a5: /* 4031a5: mov ebx, dword ptr [esp + 0x114] */
  ebx = R32((uint32_t)(esp + 0x114u));
/* 4031ac: lea esi, [eax - 1] */
  esi = (uint32_t)(eax + 0xffffffffu);
/* 4031af: imul esi, ebp */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebp);
  esi = (uint32_t)r;
  }
/* 4031b2: nop  */
/* 4031b3: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4031b5: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 4031bd: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* 4031c1: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
L_4031c5: /* 4031c5: mov eax, esi */
  eax = esi;
/* 4031c7: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4031c9: xor edx, edx */
  edx = 0;
/* 4031cb: div ebp */
  { uint32_t d = ebp; if (!d) d = guest_divzero(0x4031cb);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 4031cd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4031ce: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4031d1: ja 0x402fdd */
  if ((!cf && !zf)) goto L_402fdd;
L_4031d7: /* 4031d7: mov eax, dword ptr [esp + 0x120] */
  eax = R32((uint32_t)(esp + 0x120u));
/* 4031de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4031df: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4031e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4031e1: mov eax, esi */
  eax = esi;
/* 4031e3: call 0x403213 */
  esp -= 4; W32(esp, 0x4031e8u); SPILL(); f_403213(); if (g_unwind) return; RELOAD();
/* 4031e8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4031eb: /* 4031eb: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 4031ef: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 4031f0: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 4031f4: js 0x402fd2 */
  if (sf) goto L_402fd2;
L_4031fa: /* 4031fa: mov edx, dword ptr [esp + eax*4 + 0x20] */
  edx = R32((uint32_t)(esp + eax*4 + 0x20u));
/* 4031fe: mov eax, dword ptr [esp + eax*4 + 0x98] */
  eax = R32((uint32_t)(esp + eax*4 + 0x98u));
/* 403205: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 403209: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 40320d: mov ebx, edx */
  ebx = edx;
/* 40320f: mov esi, eax */
  esi = eax;
/* 403211: jmp 0x4031c5 */
  goto L_4031c5;
L_403279: /* 403279: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40327b: mov eax, esi */
  eax = esi;
/* 40327d: je 0x40302c */
  if (zf) goto L_40302c;
L_403283: /* 403283: mov ecx, ebx */
  ecx = ebx;
/* 403285: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 403287: mov esi, ebp */
  esi = ebp;
L_403289: /* 403289: mov bl, byte ptr [eax] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 40328b: mov dl, byte ptr [ecx + eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax))) & 0xffu);
/* 40328e: mov byte ptr [ecx + eax], bl */
  W8((uint32_t)(ecx + eax), (ebx & 0xffu));
/* 403291: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 403293: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 403294: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 403295: jne 0x403289 */
  if (!zf) goto L_403289;
L_403297: /* 403297: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 40329b: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 40329f: jmp 0x40302c */
  goto L_40302c;
L_40e657: /* 40e657: mov edi, edi */
  edi = edi;
/* 40e659: jmp 0x4030dd */
  goto L_4030dd;
L_40e65e: /* 40e65e: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 40e661: jmp 0x403127 */
  goto L_403127;
}

void f_403213(void) {
  LOAD_REGS();
L_403213: /* 403213: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 403217: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 403218: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 40321c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40321d: mov edi, eax */
  edi = eax;
/* 40321f: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 403221: jbe 0x403255 */
  if ((cf | zf)) goto L_403255;
L_403223: /* 403223: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 403224: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_403225: /* 403225: lea esi, [ecx + ebp] */
  esi = (uint32_t)(ecx + ebp);
/* 403228: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40322a: mov ebx, ecx */
  ebx = ecx;
/* 40322c: ja 0x403247 */
  if ((!cf && !zf)) goto L_403247;
L_40322e: /* 40322e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40322f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 403230: call dword ptr [esp + 0x24] */
  { uint32_t t = R32((uint32_t)(esp + 0x24u)); esp -= 4; W32(esp, 0x403234u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 403234: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 403237: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 403239: jle 0x40323d */
  if ((zf || sf != of)) goto L_40323d;
L_40323b: /* 40323b: mov ebx, esi */
  ebx = esi;
L_40323d: /* 40323d: add esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40323f: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 403241: jbe 0x40322e */
  if ((cf | zf)) goto L_40322e;
L_403243: /* 403243: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
L_403247: /* 403247: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403249: mov eax, edi */
  eax = edi;
/* 40324b: jne 0x403258 */
  if (!zf) goto L_403258;
L_40324d: /* 40324d: sub edi, ebp */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 40324f: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 403251: ja 0x403225 */
  if ((!cf && !zf)) goto L_403225;
L_403253: /* 403253: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 403254: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_403255: /* 403255: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 403256: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 403257: ret  */
  esp += 4; SPILL(); return;
L_403258: /* 403258: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40325a: je 0x40324d */
  if (zf) goto L_40324d;
L_40325c: /* 40325c: mov ecx, ebx */
  ecx = ebx;
/* 40325e: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 403260: mov esi, ebp */
  esi = ebp;
/* 403262: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_403265: /* 403265: mov bl, byte ptr [eax] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 403267: mov dl, byte ptr [ecx + eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax))) & 0xffu);
/* 40326a: mov byte ptr [ecx + eax], bl */
  W8((uint32_t)(ecx + eax), (ebx & 0xffu));
/* 40326d: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 40326f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 403270: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 403271: jne 0x403265 */
  if (!zf) goto L_403265;
L_403273: /* 403273: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 403277: jmp 0x40324d */
  goto L_40324d;
}

void f_403316(void) {
  LOAD_REGS();
L_403316: /* 403316: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 403317: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 403319: call 0x4011b7 */
  esp -= 4; W32(esp, 0x40331eu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 40331e: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 403322: call 0x403336 */
  esp -= 4; W32(esp, 0x403327u); SPILL(); f_403336(); if (g_unwind) return; RELOAD();
/* 403327: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 403329: mov esi, eax */
  esi = eax;
/* 40332b: call 0x4011d9 */
  esp -= 4; W32(esp, 0x403330u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 403330: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 403331: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 403332: mov eax, esi */
  eax = esi;
/* 403334: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 403335: ret  */
  esp += 4; SPILL(); return;
}

void f_403336(void) {
  LOAD_REGS();
  goto L_403336;
L_4032e4: /* 4032e4: cmp edx, dword ptr [0x44ad34] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44ad34u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4032ea: je 0x403400 */
  if (zf) goto L_403400;
L_4032f0: /* 4032f0: jmp 0x403354 */
  goto L_403354;
L_4032f2: /* 4032f2: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4032f4: jg 0x40341e */
  if ((!zf && sf == of)) goto L_40341e;
L_4032fa: /* 4032fa: jmp 0x40d8e7 */
  goto L_40d8e7;
L_403336: /* 403336: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 403337: xor edi, edi */
  edi = 0;
/* 403339: cmp dword ptr [0x449040], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x449040u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40333f: je 0x40d88c */
  if (zf) goto L_40d88c;
L_403345: /* 403345: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 403348: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 403349: xor ebx, ebx */
  ebx = 0;
/* 40334b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 40334c: cmp edx, dword ptr [0x44ad28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44ad28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403352: je 0x4032e4 */
  if (zf) goto L_4032e4;
L_403354: /* 403354: cmp dword ptr [0x44ae54], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ae54u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40335a: je 0x40d8b4 */
  if (zf) goto L_40d8b4;
L_403360: /* 403360: cmp word ptr [0x44ae40], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x44ae40u))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 403367: movzx eax, word ptr [0x44ae4e] */
  eax = (uint32_t)(R16((uint32_t)(0x44ae4eu)));
/* 40336e: movzx ecx, word ptr [0x44ae48] */
  ecx = (uint32_t)(R16((uint32_t)(0x44ae48u)));
/* 403375: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 403376: movzx eax, word ptr [0x44ae4c] */
  eax = (uint32_t)(R16((uint32_t)(0x44ae4cu)));
/* 40337d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40337e: movzx eax, word ptr [0x44ae4a] */
  eax = (uint32_t)(R16((uint32_t)(0x44ae4au)));
/* 403385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 403386: jne 0x40d890 */
  if (!zf) goto L_40d890;
L_40338c: /* 40338c: movzx eax, word ptr [0x44ae44] */
  eax = (uint32_t)(R16((uint32_t)(0x44ae44u)));
/* 403393: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 403394: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 403395: movzx eax, word ptr [0x44ae46] */
  eax = (uint32_t)(R16((uint32_t)(0x44ae46u)));
/* 40339c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40339d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 40339e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_40339f: /* 40339f: movzx eax, word ptr [0x44ae42] */
  eax = (uint32_t)(R16((uint32_t)(0x44ae42u)));
/* 4033a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4033a7: call 0x403423 */
  esp -= 4; W32(esp, 0x4033acu); SPILL(); f_403423(); if (g_unwind) return; RELOAD();
/* 4033ac: movzx eax, word ptr [0x44adfa] */
  eax = (uint32_t)(R16((uint32_t)(0x44adfau)));
/* 4033b3: movzx ecx, word ptr [0x44adf4] */
  ecx = (uint32_t)(R16((uint32_t)(0x44adf4u)));
/* 4033ba: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4033bd: cmp word ptr [0x44adec], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x44adecu))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4033c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4033c5: movzx eax, word ptr [0x44adf8] */
  eax = (uint32_t)(R16((uint32_t)(0x44adf8u)));
/* 4033cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4033cd: movzx eax, word ptr [0x44adf6] */
  eax = (uint32_t)(R16((uint32_t)(0x44adf6u)));
/* 4033d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4033d5: jne 0x40d8a1 */
  if (!zf) goto L_40d8a1;
L_4033db: /* 4033db: movzx eax, word ptr [0x44adf0] */
  eax = (uint32_t)(R16((uint32_t)(0x44adf0u)));
/* 4033e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4033e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4033e4: movzx eax, word ptr [0x44adf2] */
  eax = (uint32_t)(R16((uint32_t)(0x44adf2u)));
/* 4033eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4033ec: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 4033ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_4033f0: /* 4033f0: movzx eax, word ptr [0x44adee] */
  eax = (uint32_t)(R16((uint32_t)(0x44adeeu)));
/* 4033f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4033f8: call 0x403423 */
  esp -= 4; W32(esp, 0x4033fdu); SPILL(); f_403423(); if (g_unwind) return; RELOAD();
/* 4033fd: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_403400: /* 403400: mov edx, dword ptr [0x44ad2c] */
  edx = R32((uint32_t)(0x44ad2cu));
/* 403406: mov eax, dword ptr [0x44ad38] */
  eax = R32((uint32_t)(0x44ad38u));
/* 40340b: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40340d: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 403410: jge 0x40d8f6 */
  if ((sf == of)) goto L_40d8f6;
L_403416: /* 403416: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 403418: jge 0x4032f2 */
  if ((sf == of)) goto L_4032f2;
L_40341e: /* 40341e: xor eax, eax */
  eax = 0;
L_403420: /* 403420: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 403421: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 403422: ret  */
  esp += 4; SPILL(); return;
L_40d88c: /* 40d88c: xor eax, eax */
  eax = 0;
/* 40d88e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 40d88f: ret  */
  esp += 4; SPILL(); return;
L_40d890: /* 40d890: movzx eax, word ptr [0x44ae46] */
  eax = (uint32_t)(R16((uint32_t)(0x44ae46u)));
/* 40d897: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40d898: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d899: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d89a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 40d89b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d89c: jmp 0x40339f */
  goto L_40339f;
L_40d8a1: /* 40d8a1: movzx eax, word ptr [0x44adf2] */
  eax = (uint32_t)(R16((uint32_t)(0x44adf2u)));
/* 40d8a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40d8a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d8aa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d8ab: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 40d8ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d8af: jmp 0x4033f0 */
  goto L_4033f0;
L_40d8b4: /* 40d8b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d8b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d8b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d8b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d8b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d8b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40d8ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 40d8bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40d8bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40d8bd: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 40d8bf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d8c0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 40d8c2: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40d8c3: call 0x403423 */
  esp -= 4; W32(esp, 0x40d8c8u); SPILL(); f_403423(); if (g_unwind) return; RELOAD();
/* 40d8c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d8c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d8ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d8cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d8cc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d8cd: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 40d8cf: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 40d8d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40d8d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40d8d4: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 40d8d6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d8d7: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 40d8d9: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40d8da: call 0x403423 */
  esp -= 4; W32(esp, 0x40d8dfu); SPILL(); f_403423(); if (g_unwind) return; RELOAD();
/* 40d8df: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40d8e2: jmp 0x403400 */
  goto L_403400;
L_40d8e7: /* 40d8e7: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40d8e9: jle 0x40d90a */
  if ((zf || sf != of)) goto L_40d90a;
L_40d8eb: /* 40d8eb: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40d8ed: jge 0x40d90a */
  if ((sf == of)) goto L_40d90a;
L_40d8ef: /* 40d8ef: mov eax, ebx */
  eax = ebx;
/* 40d8f1: jmp 0x403420 */
  goto L_403420;
L_40d8f6: /* 40d8f6: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40d8f8: jl 0x40d8ef */
  if ((sf != of)) goto L_40d8ef;
L_40d8fa: /* 40d8fa: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40d8fc: jg 0x40d8ef */
  if ((!zf && sf == of)) goto L_40d8ef;
L_40d8fe: /* 40d8fe: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40d900: jle 0x40d90a */
  if ((zf || sf != of)) goto L_40d90a;
L_40d902: /* 40d902: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40d904: jl 0x40341e */
  if ((sf != of)) goto L_40341e;
L_40d90a: /* 40d90a: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 40d90d: imul eax, eax, 0x3c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3cu);
  eax = (uint32_t)r;
  }
/* 40d910: add eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40d913: imul eax, eax, 0x3c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3cu);
  eax = (uint32_t)r;
  }
/* 40d916: add eax, dword ptr [esi] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40d918: imul eax, eax, 0x3e8 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3e8u);
  eax = (uint32_t)r;
  }
/* 40d91e: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d920: jne 0x40d934 */
  if (!zf) goto L_40d934;
L_40d922: /* 40d922: xor ecx, ecx */
  ecx = 0;
/* 40d924: cmp eax, dword ptr [0x44ad30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44ad30u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40d92a: setge cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
L_40d92d: /* 40d92d: mov eax, ecx */
  eax = ecx;
/* 40d92f: jmp 0x403420 */
  goto L_403420;
L_40d934: /* 40d934: xor ecx, ecx */
  ecx = 0;
/* 40d936: cmp eax, dword ptr [0x44ad3c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44ad3cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40d93c: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 40d93f: jmp 0x40d92d */
  goto L_40d92d;
}

void f_403423(void) {
  LOAD_REGS();
  goto L_403423;
L_4032ff: /* 4032ff: lea esi, [esi + eax - 7] */
  esi = (uint32_t)(esi + eax + 0xfffffff9u);
/* 403303: jmp 0x4034d1 */
  goto L_4034d1;
L_403308: /* 403308: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 40330b: mov eax, dword ptr [eax + 0x44ad40] */
  eax = R32((uint32_t)(eax + 0x44ad40u));
/* 403311: jmp 0x403500 */
  goto L_403500;
L_403423: /* 403423: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 403424: mov ebp, esp */
  ebp = esp;
/* 403426: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 403427: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 403428: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 403429: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40342a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40342b: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 40342e: mov esi, eax */
  esi = eax;
/* 403430: mov eax, edi */
  eax = edi;
/* 403432: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 403434: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 403435: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 403436: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x403436);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 403438: cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40343c: jne 0x40d835 */
  if (!zf) goto L_40d835;
L_403442: /* 403442: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403444: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 403447: je 0x40d800 */
  if (zf) goto L_40d800;
L_40344d: /* 40344d: lea eax, [edi + 0x76c] */
  eax = (uint32_t)(edi + 0x76cu);
/* 403453: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 403454: mov ebx, 0x190 */
  ebx = 0x190u;
/* 403459: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x403459);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 40345b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40345d: je 0x40d810 */
  if (zf) goto L_40d810;
L_403463: /* 403463: mov eax, esi */
  eax = esi;
/* 403465: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 403468: mov esi, dword ptr [eax + 0x44ad70] */
  esi = R32((uint32_t)(eax + 0x44ad70u));
L_40346e: /* 40346e: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 403471: lea eax, [edi + 0x12b] */
  eax = (uint32_t)(edi + 0x12bu);
/* 403477: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 403478: lea ebx, [edi - 1] */
  ebx = (uint32_t)(edi + 0xffffffffu);
/* 40347b: mov edi, 0x190 */
  edi = 0x190u;
/* 403480: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x403480);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 403482: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 403484: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 403485: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 403486: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 403488: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 40348b: mov eax, ebx */
  eax = ebx;
/* 40348d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 40348e: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x40348e);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 403490: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 403493: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 403494: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 403496: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 403498: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 40349b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 40349c: mov ebx, edx */
  ebx = edx;
/* 40349e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 40349f: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x40349f);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4034a1: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 4034a4: mov edx, edi */
  edx = edi;
/* 4034a6: imul edx, edx, 0x16d */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x16du);
  edx = (uint32_t)r;
  }
/* 4034ac: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4034ae: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4034b0: lea eax, [edx + eax - 0x63db] */
  eax = (uint32_t)(edx + eax + 0xffff9c25u);
/* 4034b7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4034b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4034b9: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x4034b9);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4034bb: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 4034be: imul eax, eax, 7 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x7u);
  eax = (uint32_t)r;
  }
/* 4034c1: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4034c3: add eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4034c6: cmp edx, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4034c9: jle 0x4032ff */
  if ((zf || sf != of)) goto L_4032ff;
L_4034cf: /* 4034cf: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_4034d1: /* 4034d1: cmp dword ptr [ebp + 0x14], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4034d5: jne 0x403507 */
  if (!zf) goto L_403507;
L_4034d7: /* 4034d7: cmp dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4034db: je 0x40d820 */
  if (zf) goto L_40d820;
L_4034e1: /* 4034e1: lea eax, [edi + 0x76c] */
  eax = (uint32_t)(edi + 0x76cu);
/* 4034e7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4034e8: mov ebx, 0x190 */
  ebx = 0x190u;
/* 4034ed: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x4034ed);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4034ef: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4034f1: je 0x403308 */
  if (zf) goto L_403308;
L_4034f7: /* 4034f7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4034fa: mov eax, dword ptr [eax + 0x44ad74] */
  eax = R32((uint32_t)(eax + 0x44ad74u));
L_403500: /* 403500: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 403502: jle 0x403507 */
  if ((zf || sf != of)) goto L_403507;
L_403504: /* 403504: sub esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_403507: /* 403507: imul ecx, ecx, 0x3c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x3cu);
  ecx = (uint32_t)r;
  }
/* 40350a: add ecx, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 40350d: imul ecx, ecx, 0x3c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x3cu);
  ecx = (uint32_t)r;
  }
/* 403510: cmp dword ptr [ebp + 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403514: jne 0x403539 */
  if (!zf) goto L_403539;
L_403516: /* 403516: add ecx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 403519: mov dword ptr [0x44ad2c], esi */
  W32((uint32_t)(0x44ad2cu), esi);
/* 40351f: imul ecx, ecx, 0x3e8 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x3e8u);
  ecx = (uint32_t)r;
  }
/* 403525: add ecx, dword ptr [ebp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 403528: mov dword ptr [0x44ad28], edi */
  W32((uint32_t)(0x44ad28u), edi);
/* 40352e: mov dword ptr [0x44ad30], ecx */
  W32((uint32_t)(0x44ad30u), ecx);
L_403534: /* 403534: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 403535: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 403536: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 403537: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 403538: ret  */
  esp += 4; SPILL(); return;
L_403539: /* 403539: add ecx, dword ptr [0x449048] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x449048u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 40353f: mov dword ptr [0x44ad38], esi */
  W32((uint32_t)(0x44ad38u), esi);
/* 403545: add ecx, dword ptr [ebp + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x24u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 403548: imul ecx, ecx, 0x3e8 */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x3e8u);
  ecx = (uint32_t)r;
  }
/* 40354e: add ecx, dword ptr [ebp + 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 403551: mov dword ptr [0x44ad3c], ecx */
  W32((uint32_t)(0x44ad3cu), ecx);
/* 403557: js 0x40d86f */
  if (sf) goto L_40d86f;
L_40355d: /* 40355d: mov eax, 0x5265c00 */
  eax = 0x5265c00u;
/* 403562: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 403564: jge 0x40d878 */
  if ((sf == of)) goto L_40d878;
L_40356a: /* 40356a: mov dword ptr [0x44ad34], edi */
  W32((uint32_t)(0x44ad34u), edi);
/* 403570: jmp 0x403534 */
  goto L_403534;
L_40d800: /* 40d800: mov eax, edi */
  eax = edi;
/* 40d802: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 40d804: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 40d805: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40d806: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x40d806);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 40d808: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40d80a: je 0x40344d */
  if (zf) goto L_40344d;
L_40d810: /* 40d810: mov eax, esi */
  eax = esi;
/* 40d812: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 40d815: mov esi, dword ptr [eax + 0x44ad3c] */
  esi = R32((uint32_t)(eax + 0x44ad3cu));
/* 40d81b: jmp 0x40346e */
  goto L_40346e;
L_40d820: /* 40d820: mov eax, edi */
  eax = edi;
/* 40d822: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 40d824: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 40d825: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40d826: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x40d826);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 40d828: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40d82a: jne 0x403308 */
  if (!zf) goto L_403308;
L_40d830: /* 40d830: jmp 0x4034e1 */
  goto L_4034e1;
L_40d835: /* 40d835: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40d837: jne 0x40d845 */
  if (!zf) goto L_40d845;
L_40d839: /* 40d839: mov eax, edi */
  eax = edi;
/* 40d83b: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 40d83d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 40d83e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40d83f: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x40d83f);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 40d841: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40d843: jne 0x40d860 */
  if (!zf) goto L_40d860;
L_40d845: /* 40d845: lea eax, [edi + 0x76c] */
  eax = (uint32_t)(edi + 0x76cu);
/* 40d84b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 40d84c: mov ebx, 0x190 */
  ebx = 0x190u;
/* 40d851: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x40d851);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 40d853: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40d855: je 0x40d860 */
  if (zf) goto L_40d860;
L_40d857: /* 40d857: mov esi, dword ptr [esi*4 + 0x44ad70] */
  esi = R32((uint32_t)(esi*4 + 0x44ad70u));
/* 40d85e: jmp 0x40d867 */
  goto L_40d867;
L_40d860: /* 40d860: mov esi, dword ptr [esi*4 + 0x44ad3c] */
  esi = R32((uint32_t)(esi*4 + 0x44ad3cu));
L_40d867: /* 40d867: add esi, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40d86a: jmp 0x403507 */
  goto L_403507;
L_40d86f: /* 40d86f: add ecx, 0x5265c00 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5265c00u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 40d875: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 40d876: jmp 0x40d87b */
  goto L_40d87b;
L_40d878: /* 40d878: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 40d87a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_40d87b: /* 40d87b: mov dword ptr [0x44ad3c], ecx */
  W32((uint32_t)(0x44ad3cu), ecx);
/* 40d881: mov dword ptr [0x44ad38], esi */
  W32((uint32_t)(0x44ad38u), esi);
/* 40d887: jmp 0x40356a */
  goto L_40356a;
}

void f_403572(void) {
  LOAD_REGS();
L_403572: /* 403572: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 403576: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 403578: call 0x40357f */
  esp -= 4; W32(esp, 0x40357du); SPILL(); f_40357f(); if (g_unwind) return; RELOAD();
/* 40357d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40357e: ret  */
  esp += 4; SPILL(); return;
}

void f_40357f(void) {
  LOAD_REGS();
L_40357f: /* 40357f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 403580: mov ebp, esp */
  ebp = esp;
/* 403582: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 403583: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 403584: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 403585: mov edi, eax */
  edi = eax;
/* 403587: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 40358a: cmp ecx, 0x45 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40358d: jl 0x4036f7 */
  if ((sf != of)) goto L_4036f7;
L_403593: /* 403593: mov esi, 0x8b */
  esi = 0x8bu;
/* 403598: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40359a: jg 0x4036f7 */
  if ((!zf && sf == of)) goto L_4036f7;
L_4035a0: /* 4035a0: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 4035a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4035a5: jl 0x40ed1c */
  if ((sf != of)) goto L_40ed1c;
L_4035ab: /* 4035ab: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4035ae: jg 0x40ed1c */
  if ((!zf && sf == of)) goto L_40ed1c;
L_4035b4: /* 4035b4: test cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4035b7: mov edx, dword ptr [edi + 0x10] */
  edx = R32((uint32_t)(edi + 0x10u));
/* 4035ba: mov eax, dword ptr [edx*4 + 0x44ad74] */
  eax = R32((uint32_t)(edx*4 + 0x44ad74u));
/* 4035c1: je 0x40ed4a */
  if (zf) goto L_40ed4a;
L_4035c7: /* 4035c7: lea edx, [ecx - 1] */
  edx = (uint32_t)(ecx + 0xffffffffu);
/* 4035ca: imul ecx, ecx, 0x16d */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x16du);
  ecx = (uint32_t)r;
  }
/* 4035d0: sar edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 4035d3: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4035d5: lea eax, [ecx + eax - 0x63df] */
  eax = (uint32_t)(ecx + eax + 0xffff9c21u);
/* 4035dc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4035de: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* 4035e1: lea esi, [eax + ecx] */
  esi = (uint32_t)(eax + ecx);
/* 4035e4: jl 0x4036fc */
  if ((sf != of)) goto L_4036fc;
L_4035ea: /* 4035ea: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4035ec: jl 0x4035f6 */
  if ((sf != of)) goto L_4035f6;
L_4035ee: /* 4035ee: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4035f0: jl 0x4036f7 */
  if ((sf != of)) goto L_4036f7;
L_4035f6: /* 4035f6: lea ecx, [esi + esi*2] */
  ecx = (uint32_t)(esi + esi*2);
/* 4035f9: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 4035fc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4035fe: je 0x403709 */
  if (zf) goto L_403709;
L_403604: /* 403604: mov eax, ecx */
  eax = ecx;
/* 403606: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 403607: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x403607);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 403609: xor edx, edx */
  edx = 0;
/* 40360b: cmp eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40360e: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 403611: nop  */
/* 403612: mov eax, edx */
  eax = edx;
L_403614: /* 403614: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403616: jne 0x4036f7 */
  if (!zf) goto L_4036f7;
L_40361c: /* 40361c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40361e: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 403621: lea esi, [eax + ecx] */
  esi = (uint32_t)(eax + ecx);
/* 403624: jl 0x403710 */
  if ((sf != of)) goto L_403710;
L_40362a: /* 40362a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40362c: jl 0x403636 */
  if ((sf != of)) goto L_403636;
L_40362e: /* 40362e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 403630: jl 0x4036f7 */
  if ((sf != of)) goto L_4036f7;
L_403636: /* 403636: mov ecx, esi */
  ecx = esi;
/* 403638: imul ecx, ecx, 0x3c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x3cu);
  ecx = (uint32_t)r;
  }
/* 40363b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40363d: je 0x40371d */
  if (zf) goto L_40371d;
L_403643: /* 403643: mov eax, ecx */
  eax = ecx;
/* 403645: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 403646: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x403646);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 403648: xor edx, edx */
  edx = 0;
/* 40364a: cmp eax, 0x3c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40364d: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 403650: nop  */
/* 403651: mov eax, edx */
  eax = edx;
L_403653: /* 403653: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403655: jne 0x4036f7 */
  if (!zf) goto L_4036f7;
L_40365b: /* 40365b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40365d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 403660: lea esi, [eax + ecx] */
  esi = (uint32_t)(eax + ecx);
/* 403663: jl 0x403724 */
  if ((sf != of)) goto L_403724;
L_403669: /* 403669: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40366b: jl 0x403675 */
  if ((sf != of)) goto L_403675;
L_40366d: /* 40366d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40366f: jl 0x4036f7 */
  if ((sf != of)) goto L_4036f7;
L_403675: /* 403675: mov ecx, esi */
  ecx = esi;
/* 403677: imul ecx, ecx, 0x3c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x3cu);
  ecx = (uint32_t)r;
  }
/* 40367a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40367c: je 0x403731 */
  if (zf) goto L_403731;
L_403682: /* 403682: mov eax, ecx */
  eax = ecx;
/* 403684: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 403685: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x403685);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 403687: xor edx, edx */
  edx = 0;
/* 403689: cmp eax, 0x3c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40368c: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 40368f: mov eax, edx */
  eax = edx;
L_403691: /* 403691: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403693: jne 0x4036f7 */
  if (!zf) goto L_4036f7;
L_403695: /* 403695: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 403697: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 403699: lea edx, [ecx + eax] */
  edx = (uint32_t)(ecx + eax);
/* 40369c: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 40369f: jl 0x403738 */
  if ((sf != of)) goto L_403738;
L_4036a5: /* 4036a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4036a7: jl 0x4036ad */
  if ((sf != of)) goto L_4036ad;
L_4036a9: /* 4036a9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4036ab: jl 0x4036f7 */
  if ((sf != of)) goto L_4036f7;
L_4036ad: /* 4036ad: cmp dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4036b1: je 0x40eda4 */
  if (zf) goto L_40eda4;
L_4036b7: /* 4036b7: call 0x403ad5 */
  esp -= 4; W32(esp, 0x4036bcu); SPILL(); f_403ad5(); if (g_unwind) return; RELOAD();
/* 4036bc: mov eax, dword ptr [0x44903c] */
  eax = R32((uint32_t)(0x44903cu));
/* 4036c1: add dword ptr [ebp - 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4036c4: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 4036c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4036c8: call 0x403745 */
  esp -= 4; W32(esp, 0x4036cdu); SPILL(); f_403745(); if (g_unwind) return; RELOAD();
/* 4036cd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4036cf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4036d0: je 0x4036f7 */
  if (zf) goto L_4036f7;
L_4036d2: /* 4036d2: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 4036d5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4036d7: jg 0x40ed8d */
  if ((!zf && sf == of)) goto L_40ed8d;
L_4036dd: /* 4036dd: jge 0x4036e9 */
  if ((sf == of)) goto L_4036e9;
L_4036df: /* 4036df: cmp dword ptr [eax + 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4036e3: jg 0x40ed8d */
  if ((!zf && sf == of)) goto L_40ed8d;
L_4036e9: /* 4036e9: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 4036eb: mov esi, eax */
  esi = eax;
/* 4036ed: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4036f0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4036f1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
L_4036f3: /* 4036f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4036f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4036f5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4036f6: ret  */
  esp += 4; SPILL(); return;
L_4036f7: /* 4036f7: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4036fa: jmp 0x4036f3 */
  goto L_4036f3;
L_4036fc: /* 4036fc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4036fe: jge 0x4035f6 */
  if ((sf == of)) goto L_4035f6;
L_403704: /* 403704: jmp 0x40ed59 */
  goto L_40ed59;
L_403709: /* 403709: xor eax, eax */
  eax = 0;
/* 40370b: jmp 0x403614 */
  goto L_403614;
L_403710: /* 403710: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 403712: jge 0x403636 */
  if ((sf == of)) goto L_403636;
L_403718: /* 403718: jmp 0x40ed66 */
  goto L_40ed66;
L_40371d: /* 40371d: xor eax, eax */
  eax = 0;
/* 40371f: jmp 0x403653 */
  goto L_403653;
L_403724: /* 403724: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 403726: jge 0x403675 */
  if ((sf == of)) goto L_403675;
L_40372c: /* 40372c: jmp 0x40ed73 */
  goto L_40ed73;
L_403731: /* 403731: xor eax, eax */
  eax = 0;
/* 403733: jmp 0x403691 */
  goto L_403691;
L_403738: /* 403738: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40373a: jge 0x4036ad */
  if ((sf == of)) goto L_4036ad;
L_403740: /* 403740: jmp 0x40ed80 */
  goto L_40ed80;
L_40ed1c: /* 40ed1c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40ed1d: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 40ed1f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 40ed20: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40ed21: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x40ed21);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 40ed23: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40ed24: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 40ed26: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40ed28: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 40ed2b: jge 0x40ed34 */
  if ((sf == of)) goto L_40ed34;
L_40ed2d: /* 40ed2d: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40ed30: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* 40ed33: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
L_40ed34: /* 40ed34: cmp ecx, 0x45 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40ed37: jl 0x4036f7 */
  if ((sf != of)) goto L_4036f7;
L_40ed3d: /* 40ed3d: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40ed3f: jg 0x4036f7 */
  if ((!zf && sf == of)) goto L_4036f7;
L_40ed45: /* 40ed45: jmp 0x4035b4 */
  goto L_4035b4;
L_40ed4a: /* 40ed4a: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40ed4d: jle 0x4035c7 */
  if ((zf || sf != of)) goto L_4035c7;
L_40ed53: /* 40ed53: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40ed54: jmp 0x4035c7 */
  goto L_4035c7;
L_40ed59: /* 40ed59: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40ed5b: jge 0x4036f7 */
  if ((sf == of)) goto L_4036f7;
L_40ed61: /* 40ed61: jmp 0x4035f6 */
  goto L_4035f6;
L_40ed66: /* 40ed66: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40ed68: jge 0x4036f7 */
  if ((sf == of)) goto L_4036f7;
L_40ed6e: /* 40ed6e: jmp 0x403636 */
  goto L_403636;
L_40ed73: /* 40ed73: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40ed75: jge 0x4036f7 */
  if ((sf == of)) goto L_4036f7;
L_40ed7b: /* 40ed7b: jmp 0x403675 */
  goto L_403675;
L_40ed80: /* 40ed80: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40ed82: jge 0x4036f7 */
  if ((sf == of)) goto L_4036f7;
L_40ed88: /* 40ed88: jmp 0x4036ad */
  goto L_4036ad;
L_40ed8d: /* 40ed8d: mov eax, dword ptr [0x449048] */
  eax = R32((uint32_t)(0x449048u));
/* 40ed92: add dword ptr [ebp - 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 40ed95: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 40ed98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40ed99: call 0x403745 */
  esp -= 4; W32(esp, 0x40ed9eu); SPILL(); f_403745(); if (g_unwind) return; RELOAD();
/* 40ed9e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ed9f: jmp 0x4036e9 */
  goto L_4036e9;
L_40eda4: /* 40eda4: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 40eda7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40eda8: call 0x4037a7 */
  esp -= 4; W32(esp, 0x40edadu); SPILL(); f_4037a7(); if (g_unwind) return; RELOAD();
/* 40edad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40edaf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40edb0: je 0x4036f7 */
  if (zf) goto L_4036f7;
L_40edb6: /* 40edb6: jmp 0x4036e9 */
  goto L_4036e9;
}

void f_403745(void) {
  LOAD_REGS();
L_403745: /* 403745: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 403746: mov ebp, esp */
  ebp = esp;
/* 403748: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 403749: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 40374c: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40374f: jl 0x40ebed */
  if ((sf != of)) goto L_40ebed;
L_403755: /* 403755: call 0x403ad5 */
  esp -= 4; W32(esp, 0x40375au); SPILL(); f_403ad5(); if (g_unwind) return; RELOAD();
/* 40375a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 40375c: cmp eax, 0x3f480 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3f480u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 403761: jle 0x40379c */
  if ((zf || sf != of)) goto L_40379c;
L_403763: /* 403763: cmp eax, 0x7ffc0b7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7ffc0b7fu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 403768: jge 0x40379c */
  if ((sf == of)) goto L_40379c;
L_40376a: /* 40376a: sub eax, dword ptr [0x44903c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44903cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 403770: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 403773: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 403776: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 403777: call 0x4037a7 */
  esp -= 4; W32(esp, 0x40377cu); SPILL(); f_4037a7(); if (g_unwind) return; RELOAD();
/* 40377c: cmp dword ptr [0x449040], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x449040u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403783: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 403784: mov esi, eax */
  esi = eax;
/* 403786: je 0x403797 */
  if (zf) goto L_403797;
L_403788: /* 403788: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 403789: call 0x403316 */
  esp -= 4; W32(esp, 0x40378eu); SPILL(); f_403316(); if (g_unwind) return; RELOAD();
/* 40378e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403790: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 403791: jne 0x40ebf4 */
  if (!zf) goto L_40ebf4;
L_403797: /* 403797: mov eax, esi */
  eax = esi;
L_403799: /* 403799: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40379a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 40379b: ret  */
  esp += 4; SPILL(); return;
L_40379c: /* 40379c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40379d: call 0x4037a7 */
  esp -= 4; W32(esp, 0x4037a2u); SPILL(); f_4037a7(); if (g_unwind) return; RELOAD();
/* 4037a2: jmp 0x40ec14 */
  goto L_40ec14;
L_40ebed: /* 40ebed: xor eax, eax */
  eax = 0;
/* 40ebef: jmp 0x403799 */
  goto L_403799;
L_40ebf4: /* 40ebf4: mov eax, dword ptr [0x449048] */
  eax = R32((uint32_t)(0x449048u));
/* 40ebf9: sub dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 40ebfc: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 40ebff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40ec00: call 0x4037a7 */
  esp -= 4; W32(esp, 0x40ec05u); SPILL(); f_4037a7(); if (g_unwind) return; RELOAD();
/* 40ec05: mov esi, eax */
  esi = eax;
/* 40ec07: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ec08: mov dword ptr [esi + 0x20], 1 */
  W32((uint32_t)(esi + 0x20u), 0x1u);
/* 40ec0f: jmp 0x403797 */
  goto L_403797;
L_40ec14: /* 40ec14: cmp dword ptr [0x449040], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x449040u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40ec1b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ec1c: mov esi, eax */
  esi = eax;
/* 40ec1e: je 0x40ec48 */
  if (zf) goto L_40ec48;
L_40ec20: /* 40ec20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40ec21: call 0x403316 */
  esp -= 4; W32(esp, 0x40ec26u); SPILL(); f_403316(); if (g_unwind) return; RELOAD();
/* 40ec26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40ec28: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ec29: je 0x40ec48 */
  if (zf) goto L_40ec48;
L_40ec2b: /* 40ec2b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 40ec2d: sub eax, dword ptr [0x449048] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x449048u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 40ec33: sub eax, dword ptr [0x44903c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44903cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 40ec39: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 40ec3c: mov dword ptr [esi + 0x20], 1 */
  W32((uint32_t)(esi + 0x20u), 0x1u);
/* 40ec43: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40ec46: jmp 0x40ec53 */
  goto L_40ec53;
L_40ec48: /* 40ec48: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 40ec4a: sub eax, dword ptr [0x44903c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44903cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 40ec50: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_40ec53: /* 40ec53: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40ec54: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 40ec56: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ec57: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 40ec58: mov ebx, ecx */
  ebx = ecx;
/* 40ec5a: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x40ec5a);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 40ec5c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40ec5e: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 40ec60: jge 0x40ec69 */
  if ((sf == of)) goto L_40ec69;
L_40ec62: /* 40ec62: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40ec64: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 40ec66: sub dword ptr [ebp + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
L_40ec69: /* 40ec69: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40ec6c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 40ec6d: mov ebx, ecx */
  ebx = ecx;
/* 40ec6f: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x40ec6f);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 40ec71: add eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40ec74: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 40ec77: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 40ec78: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x40ec78);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 40ec7a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40ec7b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40ec7d: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 40ec80: jge 0x40ec8b */
  if ((sf == of)) goto L_40ec8b;
L_40ec82: /* 40ec82: add edx, 0x3c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40ec85: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 40ec88: sub dword ptr [ebp + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
L_40ec8b: /* 40ec8b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40ec8e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 40ec8f: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x40ec8f);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 40ec91: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 40ec93: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ec94: add eax, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40ec97: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 40ec9a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 40ec9b: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x40ec9b);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 40ec9d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40ec9f: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 40eca2: jge 0x40ecac */
  if ((sf == of)) goto L_40ecac;
L_40eca4: /* 40eca4: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 40eca6: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 40eca9: sub dword ptr [ebp + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
L_40ecac: /* 40ecac: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40ecaf: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 40ecb1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 40ecb2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ecb3: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x40ecb3);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 40ecb5: mov ecx, eax */
  ecx = eax;
/* 40ecb7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40ecb9: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 40ecbc: jle 0x40ecdd */
  if ((zf || sf != of)) goto L_40ecdd;
L_40ecbe: /* 40ecbe: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 40ecc1: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40ecc3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 40ecc4: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 40ecc6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ecc7: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x40ecc7);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 40ecc9: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 40eccc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40eccf: add dword ptr [esi + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0xcu), r);
  }
L_40ecd2: /* 40ecd2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40ecd5: add dword ptr [esi + 0x1c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0x1cu), r);
  }
/* 40ecd8: jmp 0x403797 */
  goto L_403797;
L_40ecdd: /* 40ecdd: jge 0x403797 */
  if ((sf == of)) goto L_403797;
L_40ece3: /* 40ece3: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 40ece6: lea eax, [ecx + eax + 7] */
  eax = (uint32_t)(ecx + eax + 0x7u);
/* 40ecea: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 40eceb: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 40eced: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40ecee: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x40ecee);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 40ecf0: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 40ecf3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 40ecf6: add dword ptr [esi + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0xcu), r);
  }
/* 40ecf9: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 40ecfc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 40ecfe: jg 0x40ecd2 */
  if ((!zf && sf == of)) goto L_40ecd2;
L_40ed00: /* 40ed00: add eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40ed03: dec dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esi + 0x14u), r);
  }
/* 40ed06: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 40ed09: mov dword ptr [esi + 0x1c], 0x16c */
  W32((uint32_t)(esi + 0x1cu), 0x16cu);
/* 40ed10: mov dword ptr [esi + 0x10], 0xb */
  W32((uint32_t)(esi + 0x10u), 0xbu);
/* 40ed17: jmp 0x403797 */
  goto L_403797;
}

void f_4037a7(void) {
  LOAD_REGS();
  goto L_4037a7;
L_4032a4: /* 4032a4: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 4032a6: call 0x4010eb */
  esp -= 4; W32(esp, 0x4032abu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4032ab: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4032ad: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4032ae: mov dword ptr [edi + 0x44], eax */
  W32((uint32_t)(edi + 0x44u), eax);
/* 4032b1: mov ecx, 0x44ae64 */
  ecx = 0x44ae64u;
/* 4032b6: je 0x4037ce */
  if (zf) goto L_4037ce;
L_4032bc: /* 4032bc: jmp 0x4037cb */
  goto L_4037cb;
L_4032c1: /* 4032c1: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 4032c3: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4032c4: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4032c6: jl 0x4037f6 */
  if ((sf != of)) goto L_4037f6;
L_4032cc: /* 4032cc: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 4032ce: mov eax, 0x1e28500 */
  eax = 0x1e28500u;
/* 4032d3: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4032d4: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4032d6: jl 0x403880 */
  if ((sf != of)) goto L_403880;
L_4032dc: /* 4032dc: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4032dd: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 4032df: jmp 0x4037f6 */
  goto L_4037f6;
L_4037a7: /* 4037a7: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4037ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4037ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4037ad: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 4037af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4037b0: xor ebx, ebx */
  ebx = 0;
/* 4037b2: call 0x40137f */
  esp -= 4; W32(esp, 0x4037b7u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4037b7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4037b9: mov edi, eax */
  edi = eax;
/* 4037bb: jl 0x40ebe6 */
  if ((sf != of)) goto L_40ebe6;
L_4037c1: /* 4037c1: cmp dword ptr [edi + 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x44u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4037c5: je 0x4032a4 */
  if (zf) goto L_4032a4;
L_4037cb: /* 4037cb: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
L_4037ce: /* 4037ce: mov eax, esi */
  eax = esi;
/* 4037d0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4037d1: mov edi, 0x7861f80 */
  edi = 0x7861f80u;
/* 4037d6: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x4037d6);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4037d8: mov edx, eax */
  edx = eax;
/* 4037da: imul edx, edx, 0xf879e080 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0xf879e080u);
  edx = (uint32_t)r;
  }
/* 4037e0: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4037e2: lea edx, [eax*4 + 0x46] */
  edx = (uint32_t)(eax*4 + 0x46u);
/* 4037e9: mov eax, 0x1e13380 */
  eax = 0x1e13380u;
/* 4037ee: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4037f0: jge 0x4032c1 */
  if ((sf == of)) goto L_4032c1;
L_4037f6: /* 4037f6: mov eax, esi */
  eax = esi;
/* 4037f8: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 4037fb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4037fc: mov edi, 0x15180 */
  edi = 0x15180u;
/* 403801: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x403801);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 403803: mov edi, 0x44ad40 */
  edi = 0x44ad40u;
/* 403808: mov dword ptr [ecx + 0x1c], eax */
  W32((uint32_t)(ecx + 0x1cu), eax);
/* 40380b: imul eax, eax, 0xfffeae80 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xfffeae80u);
  eax = (uint32_t)r;
  }
/* 403811: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 403813: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403815: jne 0x40381c */
  if (!zf) goto L_40381c;
L_403817: /* 403817: mov edi, 0x44ad74 */
  edi = 0x44ad74u;
L_40381c: /* 40381c: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 40381f: xor edx, edx */
  edx = 0;
/* 403821: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 403822: cmp dword ptr [edi + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 403825: jl 0x40387c */
  if ((sf != of)) goto L_40387c;
L_403827: /* 403827: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 403828: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 40382b: sub eax, dword ptr [edi + edx*4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + edx*4)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 40382e: mov edi, 0x15180 */
  edi = 0x15180u;
/* 403833: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 403836: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 40383a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 40383c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 40383d: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x40383d);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 40383f: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 403841: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 403842: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 403844: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 403847: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 403848: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x403848);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 40384a: mov eax, esi */
  eax = esi;
/* 40384c: mov edi, 0xe10 */
  edi = 0xe10u;
/* 403851: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 403854: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 403855: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x403855);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 403857: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 403858: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 40385b: imul eax, eax, 0xfffff1f0 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xfffff1f0u);
  eax = (uint32_t)r;
  }
/* 403861: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 403863: mov eax, esi */
  eax = esi;
/* 403865: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 403866: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x403866);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 403868: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 40386b: imul eax, eax, 0x3c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3cu);
  eax = (uint32_t)r;
  }
/* 40386e: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 403870: and dword ptr [ecx + 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x20u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ecx + 0x20u), r);
  }
/* 403874: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 403876: mov eax, ecx */
  eax = ecx;
L_403878: /* 403878: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 403879: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 40387a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40387b: ret  */
  esp += 4; SPILL(); return;
L_40387c: /* 40387c: mov ebx, eax */
  ebx = eax;
/* 40387e: jmp 0x403888 */
  goto L_403888;
L_403880: /* 403880: xor ebx, ebx */
  ebx = 0;
/* 403882: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 403883: jmp 0x4037f6 */
  goto L_4037f6;
L_403888: /* 403888: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 403889: cmp dword ptr [edi + edx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + edx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40388c: jl 0x403888 */
  if ((sf != of)) goto L_403888;
L_40388e: /* 40388e: jmp 0x403827 */
  goto L_403827;
L_40ebe6: /* 40ebe6: xor eax, eax */
  eax = 0;
/* 40ebe8: jmp 0x403878 */
  goto L_403878;
}

void f_4038ae(void) {
  LOAD_REGS();
L_4038ae: /* 4038ae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4038af: mov ebp, esp */
  ebp = esp;
/* 4038b1: call 0x40137f */
  esp -= 4; W32(esp, 0x4038b6u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4038b6: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 4038b9: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4038bf: je 0x4038c6 */
  if (zf) goto L_4038c6;
L_4038c1: /* 4038c1: call 0x403c88 */
  esp -= 4; W32(esp, 0x4038c6u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_4038c6: /* 4038c6: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4038ca: je 0x40e0c7 */
  if (zf) goto L_40e0c7;
L_4038d0: /* 4038d0: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 4038d3: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4038d6: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4038d9: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4038dc: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4038df: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4038e1: push dword ptr [eax + 0xc] */
  { uint32_t v = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, v); }
/* 4038e4: call 0x4038f9 */
  esp -= 4; W32(esp, 0x4038e9u); SPILL(); f_4038f9(); if (g_unwind) return; RELOAD();
/* 4038e9: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4038ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4038ee: je 0x40e0cb */
  if (zf) goto L_40e0cb;
L_4038f4: /* 4038f4: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4038f7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4038f8: ret  */
  esp += 4; SPILL(); return;
L_40e0c7: /* 40e0c7: xor eax, eax */
  eax = 0;
/* 40e0c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 40e0ca: ret  */
  esp += 4; SPILL(); return;
L_40e0cb: /* 40e0cb: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 40e0d0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 40e0d1: ret  */
  esp += 4; SPILL(); return;
}

void f_4038f9(void) {
  LOAD_REGS();
L_4038f9: /* 4038f9: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 4038fb: push 0x43e220 */
  { uint32_t v = 0x43e220u; esp -= 4; W32(esp, v); }
/* 403900: call 0x40101f */
  esp -= 4; W32(esp, 0x403905u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 403905: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 40390a: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 40390d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 403910: xor edi, edi */
  edi = 0;
/* 403912: xor esi, esi */
  esi = 0;
/* 403914: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 403915: cmp dword ptr [0x44ae60], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ae60u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40391b: jne 0x40393c */
  if (!zf) goto L_40393c;
L_40391d: /* 40391d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40391e: mov eax, 0x43e0f4 */
  eax = 0x43e0f4u;
/* 403923: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 403924: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 403925: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 403926: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 403927: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 403928: call dword ptr [0x439154] */
  esp -= 4; W32(esp, 0x40392eu); SPILL(); call_ind(R32(0x439154u)); if (g_unwind) return; /* KERNEL32!CompareStringW */ RELOAD();
/* 40392e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403930: je 0x40e0d2 */
  if (zf) goto L_40e0d2;
L_403936: /* 403936: mov dword ptr [0x44ae60], esi */
  W32((uint32_t)(0x44ae60u), esi);
L_40393c: /* 40393c: cmp dword ptr [ebp + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40393f: jle 0x403950 */
  if ((zf || sf != of)) goto L_403950;
L_403941: /* 403941: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 403944: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 403947: call 0x403ab9 */
  esp -= 4; W32(esp, 0x40394cu); SPILL(); f_403ab9(); if (g_unwind) return; RELOAD();
/* 40394c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40394d: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
L_403950: /* 403950: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 403953: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 403955: jle 0x403964 */
  if ((zf || sf != of)) goto L_403964;
L_403957: /* 403957: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 403958: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 40395b: call 0x403ab9 */
  esp -= 4; W32(esp, 0x403960u); SPILL(); f_403ab9(); if (g_unwind) return; RELOAD();
/* 403960: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 403961: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
L_403964: /* 403964: mov ecx, dword ptr [0x44ae60] */
  ecx = R32((uint32_t)(0x44ae60u));
/* 40396a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 40396c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 40396d: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40396f: je 0x403aa4 */
  if (zf) goto L_403aa4;
L_403975: /* 403975: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403977: je 0x403aa4 */
  if (zf) goto L_403aa4;
L_40397d: /* 40397d: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40397f: jne 0x403ab5 */
  if (!zf) goto L_403ab5;
L_403985: /* 403985: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 403988: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 40398b: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 40398e: cmp dword ptr [ebp + 0x20], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403991: je 0x40e0f0 */
  if (zf) goto L_40e0f0;
L_403997: /* 403997: cmp dword ptr [ebp + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40399a: je 0x40e0fe */
  if (zf) goto L_40e0fe;
L_4039a0: /* 4039a0: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4039a2: je 0x40e0fe */
  if (zf) goto L_40e0fe;
L_4039a8: /* 4039a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4039a9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4039aa: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4039ad: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4039b0: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 4039b2: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4039b5: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x4039bbu); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 4039bb: mov ebx, eax */
  ebx = eax;
/* 4039bd: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 4039c0: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4039c2: je 0x403ab5 */
  if (zf) goto L_403ab5;
L_4039c8: /* 4039c8: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4039cb: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 4039ce: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4039d1: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4039d4: call 0x4014ee */
  esp -= 4; W32(esp, 0x4039d9u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 4039d9: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 4039dc: mov eax, esp */
  eax = esp;
/* 4039de: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 4039e1: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4039e5: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 4039e8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4039ea: je 0x40e1cc */
  if (zf) goto L_40e1cc;
L_4039f0: /* 4039f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4039f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4039f2: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4039f5: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4039f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4039f9: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4039fc: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x403a02u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 403a02: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403a04: je 0x403a83 */
  if (zf) goto L_403a83;
L_403a06: /* 403a06: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 403a08: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 403a0a: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 403a0d: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 403a10: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 403a12: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 403a15: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x403a1bu); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 403a1b: mov esi, eax */
  esi = eax;
/* 403a1d: mov dword ptr [ebp - 0x48], esi */
  W32((uint32_t)(ebp + 0xffffffb8u), esi);
/* 403a20: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403a22: je 0x403a83 */
  if (zf) goto L_403a83;
L_403a24: /* 403a24: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 403a2b: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 403a2e: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 403a31: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 403a34: call 0x4014ee */
  esp -= 4; W32(esp, 0x403a39u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 403a39: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 403a3c: mov edi, esp */
  edi = esp;
/* 403a3e: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 403a41: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 403a45: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403a47: je 0x40e206 */
  if (zf) goto L_40e206;
L_403a4d: /* 403a4d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 403a4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 403a4f: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 403a52: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 403a55: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 403a57: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 403a5a: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x403a60u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 403a60: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403a62: je 0x403a79 */
  if (zf) goto L_403a79;
L_403a64: /* 403a64: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 403a65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 403a66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 403a67: push dword ptr [ebp - 0x44] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffbcu)); esp -= 4; W32(esp, v); }
/* 403a6a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 403a6d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 403a70: call dword ptr [0x439154] */
  esp -= 4; W32(esp, 0x403a76u); SPILL(); call_ind(R32(0x439154u)); if (g_unwind) return; /* KERNEL32!CompareStringW */ RELOAD();
/* 403a76: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_403a79: /* 403a79: cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403a7d: jne 0x40e226 */
  if (!zf) goto L_40e226;
L_403a83: /* 403a83: cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403a87: jne 0x40e232 */
  if (!zf) goto L_40e232;
L_403a8d: /* 403a8d: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
L_403a90: /* 403a90: lea esp, [ebp - 0x5c] */
  esp = (uint32_t)(ebp + 0xffffffa4u);
/* 403a93: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 403a96: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 403a99: call 0x4013ab */
  esp -= 4; W32(esp, 0x403a9eu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 403a9e: call 0x40105a */
  esp -= 4; W32(esp, 0x403aa3u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 403aa3: ret  */
  esp += 4; SPILL(); return;
L_403aa4: /* 403aa4: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* 403aa7: cmp dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403aaa: jne 0x40e248 */
  if (!zf) goto L_40e248;
L_403ab0: /* 403ab0: jmp 0x40e240 */
  goto L_40e240;
L_403ab5: /* 403ab5: xor eax, eax */
  eax = 0;
/* 403ab7: jmp 0x403a90 */
  goto L_403a90;
L_40e0d2: /* 40e0d2: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x40e0d8u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 40e0d8: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e0db: jne 0x40393c */
  if (!zf) goto L_40393c;
L_40e0e1: /* 40e0e1: mov dword ptr [0x44ae60], 2 */
  W32((uint32_t)(0x44ae60u), 0x2u);
/* 40e0eb: jmp 0x40393c */
  goto L_40393c;
L_40e0f0: /* 40e0f0: mov ecx, dword ptr [0x449230] */
  ecx = R32((uint32_t)(0x449230u));
/* 40e0f6: mov dword ptr [ebp + 0x20], ecx */
  W32((uint32_t)(ebp + 0x20u), ecx);
/* 40e0f9: jmp 0x403997 */
  goto L_403997;
L_40e0fe: /* 40e0fe: cmp dword ptr [ebp + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e101: jne 0x40e10a */
  if (!zf) goto L_40e10a;
L_40e103: /* 40e103: mov eax, ebx */
  eax = ebx;
/* 40e105: jmp 0x403a90 */
  goto L_403a90;
L_40e10a: /* 40e10a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40e10c: jg 0x40e2eb */
  if ((!zf && sf == of)) goto L_40e2eb;
L_40e112: /* 40e112: cmp dword ptr [ebp + 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40e115: jle 0x40e11f */
  if ((zf || sf != of)) goto L_40e11f;
L_40e117: /* 40e117: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 40e119: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 40e11a: jmp 0x403a90 */
  goto L_403a90;
L_40e11f: /* 40e11f: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 40e122: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e123: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 40e126: call dword ptr [0x4390b4] */
  esp -= 4; W32(esp, 0x40e12cu); SPILL(); call_ind(R32(0x4390b4u)); if (g_unwind) return; /* KERNEL32!GetCPInfo */ RELOAD();
/* 40e12c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e12e: je 0x403ab5 */
  if (zf) goto L_403ab5;
L_40e134: /* 40e134: cmp dword ptr [ebp + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40e137: jle 0x40e164 */
  if ((zf || sf != of)) goto L_40e164;
L_40e139: /* 40e139: cmp dword ptr [ebp - 0x3c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40e13c: jb 0x40e117 */
  if (cf) goto L_40e117;
L_40e13e: /* 40e13e: lea eax, [ebp - 0x36] */
  eax = (uint32_t)(ebp + 0xffffffcau);
/* 40e141: cmp byte ptr [ebp - 0x36], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffcau))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40e145: je 0x40e117 */
  if (zf) goto L_40e117;
L_40e147: /* 40e147: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 40e14a: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40e14c: je 0x40e117 */
  if (zf) goto L_40e117;
L_40e14e: /* 40e14e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 40e151: mov cl, byte ptr [ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 40e153: cmp cl, byte ptr [eax] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax)));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 40e155: jb 0x40e15b */
  if (cf) goto L_40e15b;
L_40e157: /* 40e157: cmp cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40e159: jbe 0x40e103 */
  if ((cf | zf)) goto L_40e103;
L_40e15b: /* 40e15b: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40e15d: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40e160: jne 0x40e147 */
  if (!zf) goto L_40e147;
L_40e162: /* 40e162: jmp 0x40e117 */
  goto L_40e117;
L_40e164: /* 40e164: cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 40e167: jle 0x4039a8 */
  if ((zf || sf != of)) goto L_4039a8;
L_40e16d: /* 40e16d: cmp dword ptr [ebp - 0x3c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 40e170: jb 0x40e2eb */
  if (cf) goto L_40e2eb;
L_40e176: /* 40e176: lea eax, [ebp - 0x36] */
  eax = (uint32_t)(ebp + 0xffffffcau);
/* 40e179: cmp byte ptr [ebp - 0x36], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffcau))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40e17d: je 0x40e2eb */
  if (zf) goto L_40e2eb;
L_40e183: /* 40e183: mov dl, byte ptr [eax + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 40e186: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 40e188: je 0x40e2eb */
  if (zf) goto L_40e2eb;
L_40e18e: /* 40e18e: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 40e191: mov cl, byte ptr [ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 40e193: cmp cl, byte ptr [eax] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax)));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 40e195: jb 0x40e19f */
  if (cf) goto L_40e19f;
L_40e197: /* 40e197: cmp cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 40e199: jbe 0x40e103 */
  if ((cf | zf)) goto L_40e103;
L_40e19f: /* 40e19f: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 40e1a1: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40e1a4: jne 0x40e183 */
  if (!zf) goto L_40e183;
L_40e1a6: /* 40e1a6: jmp 0x40e2eb */
  goto L_40e2eb;
L_40e1cc: /* 40e1cc: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 40e1cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e1d0: call 0x4010eb */
  esp -= 4; W32(esp, 0x40e1d5u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40e1d5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e1d6: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 40e1d9: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e1db: je 0x403ab5 */
  if (zf) goto L_403ab5;
L_40e1e1: /* 40e1e1: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 40e1e4: jmp 0x4039f0 */
  goto L_4039f0;
L_40e206: /* 40e206: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 40e209: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e20a: call 0x4010eb */
  esp -= 4; W32(esp, 0x40e20fu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40e20f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e210: mov edi, eax */
  edi = eax;
/* 40e212: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e214: je 0x403a83 */
  if (zf) goto L_403a83;
L_40e21a: /* 40e21a: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
/* 40e221: jmp 0x403a4d */
  goto L_403a4d;
L_40e226: /* 40e226: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e227: call 0x401156 */
  esp -= 4; W32(esp, 0x40e22cu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e22c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e22d: jmp 0x403a83 */
  goto L_403a83;
L_40e232: /* 40e232: push dword ptr [ebp - 0x44] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffbcu)); esp -= 4; W32(esp, v); }
/* 40e235: call 0x401156 */
  esp -= 4; W32(esp, 0x40e23au); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e23a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e23b: jmp 0x403a8d */
  goto L_403a8d;
L_40e240: /* 40e240: mov eax, dword ptr [0x449220] */
  eax = R32((uint32_t)(0x449220u));
/* 40e245: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_40e248: /* 40e248: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
/* 40e24b: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e24d: jne 0x40e255 */
  if (!zf) goto L_40e255;
L_40e24f: /* 40e24f: mov ebx, dword ptr [0x449230] */
  ebx = R32((uint32_t)(0x449230u));
L_40e255: /* 40e255: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40e258: call 0x4136de */
  esp -= 4; W32(esp, 0x40e25du); SPILL(); f_4136de(); if (g_unwind) return; RELOAD();
/* 40e25d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e25e: mov esi, eax */
  esi = eax;
/* 40e260: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e263: je 0x403ab5 */
  if (zf) goto L_403ab5;
L_40e269: /* 40e269: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e26b: je 0x40e2bd */
  if (zf) goto L_40e2bd;
L_40e26d: /* 40e26d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40e26f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40e271: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 40e274: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e275: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40e278: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e279: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40e27a: call 0x413727 */
  esp -= 4; W32(esp, 0x40e27fu); SPILL(); f_413727(); if (g_unwind) return; RELOAD();
/* 40e27f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40e282: mov edi, eax */
  edi = eax;
/* 40e284: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e286: je 0x403ab5 */
  if (zf) goto L_403ab5;
L_40e28c: /* 40e28c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40e28e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40e290: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 40e293: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e294: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 40e297: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e298: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40e299: call 0x413727 */
  esp -= 4; W32(esp, 0x40e29eu); SPILL(); f_413727(); if (g_unwind) return; RELOAD();
/* 40e29e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40e2a1: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 40e2a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e2a6: jne 0x40e2b4 */
  if (!zf) goto L_40e2b4;
L_40e2a8: /* 40e2a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e2a9: call 0x401156 */
  esp -= 4; W32(esp, 0x40e2aeu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e2ae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e2af: jmp 0x403ab5 */
  goto L_403ab5;
L_40e2b4: /* 40e2b4: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* 40e2b7: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 40e2ba: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
L_40e2bd: /* 40e2bd: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 40e2c0: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 40e2c3: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40e2c6: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40e2c9: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40e2cc: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40e2cf: call dword ptr [0x439150] */
  esp -= 4; W32(esp, 0x40e2d5u); SPILL(); call_ind(R32(0x439150u)); if (g_unwind) return; /* KERNEL32!CompareStringA */ RELOAD();
/* 40e2d5: mov esi, eax */
  esi = eax;
/* 40e2d7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e2d9: je 0x40e2eb */
  if (zf) goto L_40e2eb;
L_40e2db: /* 40e2db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e2dc: call 0x401156 */
  esp -= 4; W32(esp, 0x40e2e1u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e2e1: push dword ptr [ebp - 0x50] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb0u)); esp -= 4; W32(esp, v); }
/* 40e2e4: call 0x401156 */
  esp -= 4; W32(esp, 0x40e2e9u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e2e9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e2ea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40e2eb: /* 40e2eb: mov eax, esi */
  eax = esi;
/* 40e2ed: jmp 0x403a90 */
  goto L_403a90;
}

void f_403aa4(void) {
  LOAD_REGS();
  goto L_403aa4;
L_403a90: /* 403a90: lea esp, [ebp - 0x5c] */
  esp = (uint32_t)(ebp + 0xffffffa4u);
/* 403a93: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 403a96: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 403a99: call 0x4013ab */
  esp -= 4; W32(esp, 0x403a9eu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 403a9e: call 0x40105a */
  esp -= 4; W32(esp, 0x403aa3u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 403aa3: ret  */
  esp += 4; SPILL(); return;
L_403aa4: /* 403aa4: mov dword ptr [ebp - 0x50], edi */
  W32((uint32_t)(ebp + 0xffffffb0u), edi);
/* 403aa7: cmp dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403aaa: jne 0x40e248 */
  if (!zf) goto L_40e248;
L_403ab0: /* 403ab0: jmp 0x40e240 */
  goto L_40e240;
L_403ab5: /* 403ab5: xor eax, eax */
  eax = 0;
/* 403ab7: jmp 0x403a90 */
  goto L_403a90;
L_40e240: /* 40e240: mov eax, dword ptr [0x449220] */
  eax = R32((uint32_t)(0x449220u));
/* 40e245: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_40e248: /* 40e248: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
/* 40e24b: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e24d: jne 0x40e255 */
  if (!zf) goto L_40e255;
L_40e24f: /* 40e24f: mov ebx, dword ptr [0x449230] */
  ebx = R32((uint32_t)(0x449230u));
L_40e255: /* 40e255: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40e258: call 0x4136de */
  esp -= 4; W32(esp, 0x40e25du); SPILL(); f_4136de(); if (g_unwind) return; RELOAD();
/* 40e25d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e25e: mov esi, eax */
  esi = eax;
/* 40e260: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e263: je 0x403ab5 */
  if (zf) goto L_403ab5;
L_40e269: /* 40e269: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40e26b: je 0x40e2bd */
  if (zf) goto L_40e2bd;
L_40e26d: /* 40e26d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40e26f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40e271: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 40e274: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e275: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40e278: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e279: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40e27a: call 0x413727 */
  esp -= 4; W32(esp, 0x40e27fu); SPILL(); f_413727(); if (g_unwind) return; RELOAD();
/* 40e27f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40e282: mov edi, eax */
  edi = eax;
/* 40e284: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e286: je 0x403ab5 */
  if (zf) goto L_403ab5;
L_40e28c: /* 40e28c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40e28e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 40e290: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 40e293: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40e294: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 40e297: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40e298: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 40e299: call 0x413727 */
  esp -= 4; W32(esp, 0x40e29eu); SPILL(); f_413727(); if (g_unwind) return; RELOAD();
/* 40e29e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40e2a1: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 40e2a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e2a6: jne 0x40e2b4 */
  if (!zf) goto L_40e2b4;
L_40e2a8: /* 40e2a8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e2a9: call 0x401156 */
  esp -= 4; W32(esp, 0x40e2aeu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e2ae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e2af: jmp 0x403ab5 */
  goto L_403ab5;
L_40e2b4: /* 40e2b4: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* 40e2b7: mov eax, dword ptr [ebp - 0x50] */
  eax = R32((uint32_t)(ebp + 0xffffffb0u));
/* 40e2ba: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
L_40e2bd: /* 40e2bd: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 40e2c0: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 40e2c3: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 40e2c6: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 40e2c9: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 40e2cc: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 40e2cf: call dword ptr [0x439150] */
  esp -= 4; W32(esp, 0x40e2d5u); SPILL(); call_ind(R32(0x439150u)); if (g_unwind) return; /* KERNEL32!CompareStringA */ RELOAD();
/* 40e2d5: mov esi, eax */
  esi = eax;
/* 40e2d7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40e2d9: je 0x40e2eb */
  if (zf) goto L_40e2eb;
L_40e2db: /* 40e2db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 40e2dc: call 0x401156 */
  esp -= 4; W32(esp, 0x40e2e1u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e2e1: push dword ptr [ebp - 0x50] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffb0u)); esp -= 4; W32(esp, v); }
/* 40e2e4: call 0x401156 */
  esp -= 4; W32(esp, 0x40e2e9u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40e2e9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40e2ea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40e2eb: /* 40e2eb: mov eax, esi */
  eax = esi;
/* 40e2ed: jmp 0x403a90 */
  goto L_403a90;
}

void f_403ab9(void) {
  LOAD_REGS();
L_403ab9: /* 403ab9: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 403abd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403abf: je 0x403acc */
  if (zf) goto L_403acc;
L_403ac1: /* 403ac1: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 403ac2: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 403ac5: je 0x403acd */
  if (zf) goto L_403acd;
L_403ac7: /* 403ac7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 403ac8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403aca: jne 0x403ac1 */
  if (!zf) goto L_403ac1;
L_403acc: /* 403acc: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
L_403acd: /* 403acd: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 403ad1: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 403ad3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 403ad4: ret  */
  esp += 4; SPILL(); return;
}

void f_403ad5(void) {
  LOAD_REGS();
L_403ad5: /* 403ad5: cmp dword ptr [0x44ae5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ae5cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403adc: je 0x403adf */
  if (zf) goto L_403adf;
L_403ade: /* 403ade: ret  */
  esp += 4; SPILL(); return;
L_403adf: /* 403adf: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 403ae1: call 0x4011b7 */
  esp -= 4; W32(esp, 0x403ae6u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 403ae6: cmp dword ptr [0x44ae5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ae5cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403aed: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 403aee: jne 0x403afb */
  if (!zf) goto L_403afb;
L_403af0: /* 403af0: call 0x403b05 */
  esp -= 4; W32(esp, 0x403af5u); SPILL(); f_403b05(); if (g_unwind) return; RELOAD();
/* 403af5: inc dword ptr [0x44ae5c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ae5cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44ae5cu), r);
  }
L_403afb: /* 403afb: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 403afd: call 0x4011d9 */
  esp -= 4; W32(esp, 0x403b02u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 403b02: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 403b03: jmp 0x403ade */
  goto L_403ade;
}

void f_403b05(void) {
  LOAD_REGS();
L_403b05: /* 403b05: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 403b06: mov ebp, esp */
  ebp = esp;
/* 403b08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 403b09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 403b0a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 403b0b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 403b0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 403b0d: xor ebx, ebx */
  ebx = 0;
/* 403b0f: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 403b11: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
/* 403b14: call 0x4011b7 */
  esp -= 4; W32(esp, 0x403b19u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 403b19: mov edi, dword ptr [0x449230] */
  edi = R32((uint32_t)(0x449230u));
/* 403b1f: or dword ptr [0x44ad34], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ad34u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0x44ad34u), r);
  }
/* 403b26: or dword ptr [0x44ad28], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ad28u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0x44ad28u), r);
  }
/* 403b2d: mov dword ptr [0x44ae54], ebx */
  W32((uint32_t)(0x44ae54u), ebx);
/* 403b33: mov dword ptr [esp], 0x43e21c */
  W32((uint32_t)(esp), 0x43e21cu);
/* 403b3a: call 0x403c3e */
  esp -= 4; W32(esp, 0x403b3fu); SPILL(); f_403c3e(); if (g_unwind) return; RELOAD();
/* 403b3f: mov esi, eax */
  esi = eax;
/* 403b41: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403b43: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 403b44: jne 0x40d6b4 */
  if (!zf) goto L_40d6b4;
L_403b4a: /* 403b4a: mov eax, dword ptr [0x44ae58] */
  eax = R32((uint32_t)(0x44ae58u));
/* 403b4f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403b51: jne 0x40d7dd */
  if (!zf) goto L_40d7dd;
L_403b57: /* 403b57: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 403b59: call 0x4011d9 */
  esp -= 4; W32(esp, 0x403b5eu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 403b5e: mov dword ptr [esp], 0x44ada8 */
  W32((uint32_t)(esp), 0x44ada8u);
/* 403b65: call dword ptr [0x439130] */
  esp -= 4; W32(esp, 0x403b6bu); SPILL(); call_ind(R32(0x439130u)); if (g_unwind) return; /* KERNEL32!GetTimeZoneInformation */ RELOAD();
/* 403b6b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403b6e: je 0x403c27 */
  if (zf) goto L_403c27;
L_403b74: /* 403b74: mov eax, dword ptr [0x44ada8] */
  eax = R32((uint32_t)(0x44ada8u));
/* 403b79: mov ecx, dword ptr [0x44adfc] */
  ecx = R32((uint32_t)(0x44adfcu));
/* 403b7f: imul eax, eax, 0x3c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3cu);
  eax = (uint32_t)r;
  }
/* 403b82: xor edx, edx */
  edx = 0;
/* 403b84: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 403b85: cmp word ptr [0x44adee], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x44adeeu))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 403b8c: mov dword ptr [0x44ae54], edx */
  W32((uint32_t)(0x44ae54u), edx);
/* 403b92: mov dword ptr [0x44903c], eax */
  W32((uint32_t)(0x44903cu), eax);
/* 403b97: je 0x403ba5 */
  if (zf) goto L_403ba5;
L_403b99: /* 403b99: mov esi, ecx */
  esi = ecx;
/* 403b9b: imul esi, esi, 0x3c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x3cu);
  esi = (uint32_t)r;
  }
/* 403b9e: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 403ba0: mov dword ptr [0x44903c], eax */
  W32((uint32_t)(0x44903cu), eax);
L_403ba5: /* 403ba5: cmp word ptr [0x44ae42], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x44ae42u))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 403bac: je 0x40d7ef */
  if (zf) goto L_40d7ef;
L_403bb2: /* 403bb2: mov eax, dword ptr [0x44ae50] */
  eax = R32((uint32_t)(0x44ae50u));
/* 403bb7: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403bb9: je 0x40d7ef */
  if (zf) goto L_40d7ef;
L_403bbf: /* 403bbf: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 403bc1: imul eax, eax, 0x3c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3cu);
  eax = (uint32_t)r;
  }
/* 403bc4: mov dword ptr [0x449040], edx */
  W32((uint32_t)(0x449040u), edx);
/* 403bca: mov dword ptr [0x449048], eax */
  W32((uint32_t)(0x449048u), eax);
L_403bcf: /* 403bcf: mov esi, dword ptr [0x4390d0] */
  esi = R32((uint32_t)(0x4390d0u));
/* 403bd5: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 403bd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 403bd9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 403bda: push 0x3f */
  { uint32_t v = 0x3fu; esp -= 4; W32(esp, v); }
/* 403bdc: push dword ptr [0x44a800] */
  { uint32_t v = R32((uint32_t)(0x44a800u)); esp -= 4; W32(esp, v); }
/* 403be2: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 403be4: push 0x44adac */
  { uint32_t v = 0x44adacu; esp -= 4; W32(esp, v); }
/* 403be9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 403bea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 403beb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x403bedu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 403bed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403bef: je 0x403c2c */
  if (zf) goto L_403c2c;
L_403bf1: /* 403bf1: cmp dword ptr [ebp - 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403bf4: jne 0x403c2c */
  if (!zf) goto L_403c2c;
L_403bf6: /* 403bf6: mov eax, dword ptr [0x44a800] */
  eax = R32((uint32_t)(0x44a800u));
/* 403bfb: mov byte ptr [eax + 0x3f], bl */
  W8((uint32_t)(eax + 0x3fu), (ebx & 0xffu));
L_403bfe: /* 403bfe: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 403c01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 403c02: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 403c03: push 0x3f */
  { uint32_t v = 0x3fu; esp -= 4; W32(esp, v); }
/* 403c05: push dword ptr [0x44a804] */
  { uint32_t v = R32((uint32_t)(0x44a804u)); esp -= 4; W32(esp, v); }
/* 403c0b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 403c0d: push 0x44ae00 */
  { uint32_t v = 0x44ae00u; esp -= 4; W32(esp, v); }
/* 403c12: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 403c13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 403c14: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x403c16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 403c16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 403c18: je 0x403c35 */
  if (zf) goto L_403c35;
L_403c1a: /* 403c1a: cmp dword ptr [ebp - 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 403c1d: jne 0x403c35 */
  if (!zf) goto L_403c35;
L_403c1f: /* 403c1f: mov eax, dword ptr [0x44a804] */
  eax = R32((uint32_t)(0x44a804u));
/* 403c24: mov byte ptr [eax + 0x3f], bl */
  W8((uint32_t)(eax + 0x3fu), (ebx & 0xffu));
L_403c27: /* 403c27: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 403c28: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 403c29: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 403c2a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 403c2b: ret  */
  esp += 4; SPILL(); return;
L_403c2c: /* 403c2c: mov eax, dword ptr [0x44a800] */
  eax = R32((uint32_t)(0x44a800u));
/* 403c31: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 403c33: jmp 0x403bfe */
  goto L_403bfe;
L_403c35: /* 403c35: mov eax, dword ptr [0x44a804] */
  eax = R32((uint32_t)(0x44a804u));
/* 403c3a: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 403c3c: jmp 0x403c27 */
  goto L_403c27;
L_40d6b4: /* 40d6b4: cmp byte ptr [esi], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40d6b6: je 0x403b4a */
  if (zf) goto L_403b4a;
L_40d6bc: /* 40d6bc: mov eax, dword ptr [0x44ae58] */
  eax = R32((uint32_t)(0x44ae58u));
/* 40d6c1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d6c3: je 0x40d6ef */
  if (zf) goto L_40d6ef;
L_40d6c5: /* 40d6c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40d6c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d6c7: call 0x406182 */
  esp -= 4; W32(esp, 0x40d6ccu); SPILL(); f_406182(); if (g_unwind) return; RELOAD();
/* 40d6cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 40d6ce: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d6cf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d6d0: jne 0x40d6df */
  if (!zf) goto L_40d6df;
L_40d6d2: /* 40d6d2: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 40d6d4: call 0x4011d9 */
  esp -= 4; W32(esp, 0x40d6d9u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 40d6d9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d6da: jmp 0x403c27 */
  goto L_403c27;
L_40d6df: /* 40d6df: mov eax, dword ptr [0x44ae58] */
  eax = R32((uint32_t)(0x44ae58u));
/* 40d6e4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d6e6: je 0x40d6ef */
  if (zf) goto L_40d6ef;
L_40d6e8: /* 40d6e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40d6e9: call 0x401156 */
  esp -= 4; W32(esp, 0x40d6eeu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d6ee: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_40d6ef: /* 40d6ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d6f0: call 0x402493 */
  esp -= 4; W32(esp, 0x40d6f5u); SPILL(); hle_strlen(); RELOAD();
/* 40d6f5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 40d6f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40d6f7: call 0x4010eb */
  esp -= 4; W32(esp, 0x40d6fcu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 40d6fc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d6fe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d6ff: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d700: mov dword ptr [0x44ae58], eax */
  W32((uint32_t)(0x44ae58u), eax);
/* 40d705: je 0x40d6d2 */
  if (zf) goto L_40d6d2;
L_40d707: /* 40d707: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d708: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40d709: call 0x404b3a */
  esp -= 4; W32(esp, 0x40d70eu); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 40d70e: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 40d710: call 0x4011d9 */
  esp -= 4; W32(esp, 0x40d715u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 40d715: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 40d717: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d718: push dword ptr [0x44a800] */
  { uint32_t v = R32((uint32_t)(0x44a800u)); esp -= 4; W32(esp, v); }
/* 40d71e: call 0x4053f1 */
  esp -= 4; W32(esp, 0x40d723u); SPILL(); f_4053f1(); if (g_unwind) return; RELOAD();
/* 40d723: mov eax, dword ptr [0x44a800] */
  eax = R32((uint32_t)(0x44a800u));
/* 40d728: add esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 40d72b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40d72e: mov byte ptr [eax + 3], bl */
  W8((uint32_t)(eax + 0x3u), (ebx & 0xffu));
/* 40d731: cmp byte ptr [esi], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40d734: jne 0x40d73e */
  if (!zf) goto L_40d73e;
L_40d736: /* 40d736: mov dword ptr [ebp - 8], 1 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x1u);
/* 40d73d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_40d73e: /* 40d73e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d73f: call 0x40643e */
  esp -= 4; W32(esp, 0x40d744u); SPILL(); f_40643e(); if (g_unwind) return; RELOAD();
/* 40d744: imul eax, eax, 0xe10 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0xe10u);
  eax = (uint32_t)r;
  }
/* 40d74a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d74b: mov dword ptr [0x44903c], eax */
  W32((uint32_t)(0x44903cu), eax);
L_40d750: /* 40d750: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 40d752: cmp al, 0x2b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40d754: je 0x40d75e */
  if (zf) goto L_40d75e;
L_40d756: /* 40d756: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40d758: jl 0x40d761 */
  if ((sf != of)) goto L_40d761;
L_40d75a: /* 40d75a: cmp al, 0x39 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40d75c: jg 0x40d761 */
  if ((!zf && sf == of)) goto L_40d761;
L_40d75e: /* 40d75e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40d75f: jmp 0x40d750 */
  goto L_40d750;
L_40d761: /* 40d761: cmp byte ptr [esi], 0x3a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40d764: jne 0x40d7a4 */
  if (!zf) goto L_40d7a4;
L_40d766: /* 40d766: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40d767: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d768: call 0x40643e */
  esp -= 4; W32(esp, 0x40d76du); SPILL(); f_40643e(); if (g_unwind) return; RELOAD();
/* 40d76d: imul eax, eax, 0x3c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3cu);
  eax = (uint32_t)r;
  }
/* 40d770: add dword ptr [0x44903c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44903cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(0x44903cu), r);
  }
/* 40d776: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d777: jmp 0x40d77e */
  goto L_40d77e;
L_40d779: /* 40d779: cmp al, 0x39 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40d77b: jg 0x40d784 */
  if ((!zf && sf == of)) goto L_40d784;
L_40d77d: /* 40d77d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_40d77e: /* 40d77e: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 40d780: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40d782: jge 0x40d779 */
  if ((sf == of)) goto L_40d779;
L_40d784: /* 40d784: cmp byte ptr [esi], 0x3a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 40d787: jne 0x40d7a4 */
  if (!zf) goto L_40d7a4;
L_40d789: /* 40d789: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 40d78a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d78b: call 0x40643e */
  esp -= 4; W32(esp, 0x40d790u); SPILL(); f_40643e(); if (g_unwind) return; RELOAD();
/* 40d790: add dword ptr [0x44903c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44903cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(0x44903cu), r);
  }
/* 40d796: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d797: jmp 0x40d79e */
  goto L_40d79e;
L_40d799: /* 40d799: cmp al, 0x39 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40d79b: jg 0x40d7a4 */
  if ((!zf && sf == of)) goto L_40d7a4;
L_40d79d: /* 40d79d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_40d79e: /* 40d79e: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 40d7a0: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 40d7a2: jge 0x40d799 */
  if ((sf == of)) goto L_40d799;
L_40d7a4: /* 40d7a4: cmp dword ptr [ebp - 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d7a7: je 0x40d7af */
  if (zf) goto L_40d7af;
L_40d7a9: /* 40d7a9: neg dword ptr [0x44903c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44903cu)));
  uint32_t r = (uint32_t)(0 - a);
  W32((uint32_t)(0x44903cu), r);
  }
L_40d7af: /* 40d7af: movsx eax, byte ptr [esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* 40d7b2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 40d7b4: mov dword ptr [0x449040], eax */
  W32((uint32_t)(0x449040u), eax);
/* 40d7b9: je 0x403c35 */
  if (zf) goto L_403c35;
L_40d7bf: /* 40d7bf: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 40d7c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 40d7c2: push dword ptr [0x44a804] */
  { uint32_t v = R32((uint32_t)(0x44a804u)); esp -= 4; W32(esp, v); }
/* 40d7c8: call 0x4053f1 */
  esp -= 4; W32(esp, 0x40d7cdu); SPILL(); f_4053f1(); if (g_unwind) return; RELOAD();
/* 40d7cd: mov eax, dword ptr [0x44a804] */
  eax = R32((uint32_t)(0x44a804u));
/* 40d7d2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 40d7d5: mov byte ptr [eax + 3], bl */
  W8((uint32_t)(eax + 0x3u), (ebx & 0xffu));
/* 40d7d8: jmp 0x403c27 */
  goto L_403c27;
L_40d7dd: /* 40d7dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 40d7de: call 0x401156 */
  esp -= 4; W32(esp, 0x40d7e3u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 40d7e3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 40d7e4: mov dword ptr [0x44ae58], ebx */
  W32((uint32_t)(0x44ae58u), ebx);
/* 40d7ea: jmp 0x403b57 */
  goto L_403b57;
L_40d7ef: /* 40d7ef: mov dword ptr [0x449040], ebx */
  W32((uint32_t)(0x449040u), ebx);
/* 40d7f5: mov dword ptr [0x449048], ebx */
  W32((uint32_t)(0x449048u), ebx);
/* 40d7fb: jmp 0x403bcf */
  goto L_403bcf;
}
