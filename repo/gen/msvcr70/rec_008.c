#include "recomp.h"
#include "rec_mod.h"

void f_421bea(void) {
  LOAD_REGS();
L_421bea: /* 421bea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 421bec: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 421bf0: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 421bf4: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 421bf8: call 0x421c01 */
  esp -= 4; W32(esp, 0x421bfdu); SPILL(); f_421c01(); if (g_unwind) return; RELOAD();
/* 421bfd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421c00: ret  */
  esp += 4; SPILL(); return;
}

void f_421c01(void) {
  LOAD_REGS();
L_421c01: /* 421c01: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 421c02: mov ebp, esp */
  ebp = esp;
/* 421c04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 421c05: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 421c06: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 421c09: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 421c0c: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 421c0f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 421c12: call 0x421aa7 */
  esp -= 4; W32(esp, 0x421c17u); SPILL(); f_421aa7(); if (g_unwind) return; RELOAD();
/* 421c17: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421c1a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421c1d: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 421c20: jne 0x421d3d */
  if (!zf) goto L_421d3d;
L_421c26: /* 421c26: call 0x4102a5 */
  esp -= 4; W32(esp, 0x421c2bu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 421c2b: cmp dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421c2e: jne 0x421d3d */
  if (!zf) goto L_421d3d;
L_421c34: /* 421c34: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* 421c36: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 421c39: call 0x401195 */
  esp -= 4; W32(esp, 0x421c3eu); SPILL(); f_401195(); if (g_unwind) return; RELOAD();
/* 421c3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421c40: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421c41: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421c42: jne 0x421d3d */
  if (!zf) goto L_421d3d;
L_421c48: /* 421c48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421c49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421c4a: push 0x440828 */
  { uint32_t v = 0x440828u; esp -= 4; W32(esp, v); }
/* 421c4f: call 0x427ba8 */
  esp -= 4; W32(esp, 0x421c54u); SPILL(); f_427ba8(); if (g_unwind) return; RELOAD();
/* 421c54: mov edi, eax */
  edi = eax;
/* 421c56: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421c58: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421c59: je 0x421d3b */
  if (zf) goto L_421d3b;
L_421c5f: /* 421c5f: push 0x208 */
  { uint32_t v = 0x208u; esp -= 4; W32(esp, v); }
/* 421c64: call 0x4010eb */
  esp -= 4; W32(esp, 0x421c69u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 421c69: mov esi, eax */
  esi = eax;
/* 421c6b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421c6d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421c6e: je 0x421d3b */
  if (zf) goto L_421d3b;
L_421c74: /* 421c74: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421c75: mov ebx, 0x103 */
  ebx = 0x103u;
/* 421c7a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421c7b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421c7c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421c7d: jmp 0x421d20 */
  goto L_421d20;
L_421c82: /* 421c82: cmp word ptr [esi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 421c86: je 0x421d33 */
  if (zf) goto L_421d33;
L_421c8c: /* 421c8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421c8d: call 0x4013b8 */
  esp -= 4; W32(esp, 0x421c92u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 421c92: lea eax, [esi + eax*2 - 2] */
  eax = (uint32_t)(esi + eax*2 + 0xfffffffeu);
/* 421c96: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 421c99: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 421c9d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421c9e: je 0x421cb3 */
  if (zf) goto L_421cb3;
L_421ca0: /* 421ca0: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 421ca4: je 0x421cb3 */
  if (zf) goto L_421cb3;
L_421ca6: /* 421ca6: push 0x440824 */
  { uint32_t v = 0x440824u; esp -= 4; W32(esp, v); }
/* 421cab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421cac: call 0x4013ea */
  esp -= 4; W32(esp, 0x421cb1u); SPILL(); f_4013ea(); if (g_unwind) return; RELOAD();
/* 421cb1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421cb2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_421cb3: /* 421cb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421cb4: call 0x4013b8 */
  esp -= 4; W32(esp, 0x421cb9u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 421cb9: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 421cbc: mov edi, eax */
  edi = eax;
/* 421cbe: call 0x4013b8 */
  esp -= 4; W32(esp, 0x421cc3u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 421cc3: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 421cc5: cmp edi, 0x104 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 421ccb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421ccc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421ccd: jae 0x421d33 */
  if (!cf) goto L_421d33;
L_421ccf: /* 421ccf: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 421cd2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421cd3: call 0x4013ea */
  esp -= 4; W32(esp, 0x421cd8u); SPILL(); f_4013ea(); if (g_unwind) return; RELOAD();
/* 421cd8: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 421cdb: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 421cde: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421cdf: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 421ce2: call 0x421aa7 */
  esp -= 4; W32(esp, 0x421ce7u); SPILL(); f_421aa7(); if (g_unwind) return; RELOAD();
/* 421ce7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421cea: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421ced: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 421cf0: jne 0x421d33 */
  if (!zf) goto L_421d33;
L_421cf2: /* 421cf2: call 0x4102a5 */
  esp -= 4; W32(esp, 0x421cf7u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 421cf7: cmp dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421cfa: je 0x421d1b */
  if (zf) goto L_421d1b;
L_421cfc: /* 421cfc: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 421cff: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 421d03: je 0x421d0b */
  if (zf) goto L_421d0b;
L_421d05: /* 421d05: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 421d09: jne 0x421d33 */
  if (!zf) goto L_421d33;
L_421d0b: /* 421d0b: mov ax, word ptr [esi + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x2u))) & 0xffffu);
/* 421d0f: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 421d13: je 0x421d1b */
  if (zf) goto L_421d1b;
L_421d15: /* 421d15: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 421d19: jne 0x421d33 */
  if (!zf) goto L_421d33;
L_421d1b: /* 421d1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421d1c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421d1d: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
L_421d20: /* 421d20: call 0x42844e */
  esp -= 4; W32(esp, 0x421d25u); SPILL(); f_42844e(); if (g_unwind) return; RELOAD();
/* 421d25: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421d28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421d2a: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 421d2d: jne 0x421c82 */
  if (!zf) goto L_421c82;
L_421d33: /* 421d33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421d34: call 0x401156 */
  esp -= 4; W32(esp, 0x421d39u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 421d39: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421d3a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_421d3b: /* 421d3b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 421d3c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_421d3d: /* 421d3d: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 421d40: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 421d41: ret  */
  esp += 4; SPILL(); return;
}

void f_421d42(void) {
  LOAD_REGS();
L_421d42: /* 421d42: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 421d43: mov ebp, esp */
  ebp = esp;
/* 421d45: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 421d48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421d49: push 0x440864 */
  { uint32_t v = 0x440864u; esp -= 4; W32(esp, v); }
/* 421d4e: call 0x427ba8 */
  esp -= 4; W32(esp, 0x421d53u); SPILL(); f_427ba8(); if (g_unwind) return; RELOAD();
/* 421d53: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421d54: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 421d57: xor esi, esi */
  esi = 0;
/* 421d59: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421d5b: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 421d5e: jne 0x421d78 */
  if (!zf) goto L_421d78;
L_421d60: /* 421d60: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421d62: jne 0x421d68 */
  if (!zf) goto L_421d68;
L_421d64: /* 421d64: xor eax, eax */
  eax = 0;
/* 421d66: jmp 0x421de1 */
  goto L_421de1;
L_421d68: /* 421d68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421d69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421d6a: call 0x419ae9 */
  esp -= 4; W32(esp, 0x421d6fu); SPILL(); f_419ae9(); if (g_unwind) return; RELOAD();
/* 421d6f: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 421d71: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421d72: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 421d74: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421d75: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 421d76: jmp 0x421de1 */
  goto L_421de1;
L_421d78: /* 421d78: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421d7a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421d7b: mov dword ptr [ebp - 0xc], 0x44085c */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x44085cu);
/* 421d82: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 421d85: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 421d88: je 0x421db8 */
  if (zf) goto L_421db8;
L_421d8a: /* 421d8a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421d8b: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 421d8e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 421d8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421d90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421d91: call 0x421aa7 */
  esp -= 4; W32(esp, 0x421d96u); SPILL(); f_421aa7(); if (g_unwind) return; RELOAD();
/* 421d96: mov edi, eax */
  edi = eax;
/* 421d98: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421d9b: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421d9e: jne 0x421db4 */
  if (!zf) goto L_421db4;
L_421da0: /* 421da0: call 0x4102a5 */
  esp -= 4; W32(esp, 0x421da5u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 421da5: cmp dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421da8: je 0x421db8 */
  if (zf) goto L_421db8;
L_421daa: /* 421daa: call 0x4102a5 */
  esp -= 4; W32(esp, 0x421dafu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 421daf: cmp dword ptr [eax], 0xd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421db2: je 0x421db8 */
  if (zf) goto L_421db8;
L_421db4: /* 421db4: mov eax, edi */
  eax = edi;
/* 421db6: jmp 0x421de0 */
  goto L_421de0;
L_421db8: /* 421db8: test byte ptr [0x4491d9], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x4491d9u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 421dbf: mov dword ptr [ebp - 0x10], 0x440844 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x440844u);
/* 421dc6: jne 0x421dcf */
  if (!zf) goto L_421dcf;
L_421dc8: /* 421dc8: mov dword ptr [ebp - 0x10], 0x440834 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x440834u);
L_421dcf: /* 421dcf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421dd0: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 421dd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421dd4: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 421dd7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421dd8: call 0x421c01 */
  esp -= 4; W32(esp, 0x421dddu); SPILL(); f_421c01(); if (g_unwind) return; RELOAD();
/* 421ddd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_421de0: /* 421de0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_421de1: /* 421de1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 421de2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 421de3: ret  */
  esp += 4; SPILL(); return;
}

void f_421de4(void) {
  LOAD_REGS();
L_421de4: /* 421de4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 421de5: mov ebp, esp */
  ebp = esp;
/* 421de7: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 421dea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421deb: push 0x44088c */
  { uint32_t v = 0x44088cu; esp -= 4; W32(esp, v); }
/* 421df0: call 0x4164c5 */
  esp -= 4; W32(esp, 0x421df5u); SPILL(); f_4164c5(); if (g_unwind) return; RELOAD();
/* 421df5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421df6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 421df9: xor esi, esi */
  esi = 0;
/* 421dfb: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421dfd: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 421e00: jne 0x421e1a */
  if (!zf) goto L_421e1a;
L_421e02: /* 421e02: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421e04: jne 0x421e0a */
  if (!zf) goto L_421e0a;
L_421e06: /* 421e06: xor eax, eax */
  eax = 0;
/* 421e08: jmp 0x421e83 */
  goto L_421e83;
L_421e0a: /* 421e0a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421e0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421e0c: call 0x418bc2 */
  esp -= 4; W32(esp, 0x421e11u); SPILL(); f_418bc2(); if (g_unwind) return; RELOAD();
/* 421e11: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 421e13: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421e14: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 421e16: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421e17: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 421e18: jmp 0x421e83 */
  goto L_421e83;
L_421e1a: /* 421e1a: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421e1c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421e1d: mov dword ptr [ebp - 0xc], 0x440888 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x440888u);
/* 421e24: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 421e27: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 421e2a: je 0x421e5a */
  if (zf) goto L_421e5a;
L_421e2c: /* 421e2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421e2d: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 421e30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 421e31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421e32: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421e33: call 0x42138f */
  esp -= 4; W32(esp, 0x421e38u); SPILL(); f_42138f(); if (g_unwind) return; RELOAD();
/* 421e38: mov edi, eax */
  edi = eax;
/* 421e3a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421e3d: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421e40: jne 0x421e56 */
  if (!zf) goto L_421e56;
L_421e42: /* 421e42: call 0x4102a5 */
  esp -= 4; W32(esp, 0x421e47u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 421e47: cmp dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421e4a: je 0x421e5a */
  if (zf) goto L_421e5a;
L_421e4c: /* 421e4c: call 0x4102a5 */
  esp -= 4; W32(esp, 0x421e51u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 421e51: cmp dword ptr [eax], 0xd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421e54: je 0x421e5a */
  if (zf) goto L_421e5a;
L_421e56: /* 421e56: mov eax, edi */
  eax = edi;
/* 421e58: jmp 0x421e82 */
  goto L_421e82;
L_421e5a: /* 421e5a: test byte ptr [0x4491d9], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x4491d9u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 421e61: mov dword ptr [ebp - 0x10], 0x44087c */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x44087cu);
/* 421e68: jne 0x421e71 */
  if (!zf) goto L_421e71;
L_421e6a: /* 421e6a: mov dword ptr [ebp - 0x10], 0x440874 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x440874u);
L_421e71: /* 421e71: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421e72: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 421e75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421e76: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 421e79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421e7a: call 0x4214ef */
  esp -= 4; W32(esp, 0x421e7fu); SPILL(); f_4214ef(); if (g_unwind) return; RELOAD();
/* 421e7f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_421e82: /* 421e82: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_421e83: /* 421e83: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 421e84: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 421e85: ret  */
  esp += 4; SPILL(); return;
}

void f_421e86(void) {
  LOAD_REGS();
L_421e86: /* 421e86: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 421e87: mov ebp, esp */
  ebp = esp;
/* 421e89: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 421e8c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 421e8f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421e90: xor ebx, ebx */
  ebx = 0;
/* 421e92: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421e94: mov dword ptr [ebp - 0xc], ebx */
  W32((uint32_t)(ebp + 0xfffffff4u), ebx);
/* 421e97: mov byte ptr [ebp - 1], bl */
  W8((uint32_t)(ebp + 0xffffffffu), (ebx & 0xffu));
/* 421e9a: je 0x421eb1 */
  if (zf) goto L_421eb1;
L_421e9c: /* 421e9c: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 421e9f: je 0x421eb1 */
  if (zf) goto L_421eb1;
L_421ea1: /* 421ea1: jle 0x421eb9 */
  if ((zf || sf != of)) goto L_421eb9;
L_421ea3: /* 421ea3: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 421ea6: jle 0x421eb1 */
  if ((zf || sf != of)) goto L_421eb1;
L_421ea8: /* 421ea8: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421eab: jne 0x421eb9 */
  if (!zf) goto L_421eb9;
L_421ead: /* 421ead: mov byte ptr [ebp - 1], 1 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x1u);
L_421eb1: /* 421eb1: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 421eb4: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 421eb7: jmp 0x421ee4 */
  goto L_421ee4;
L_421eb9: /* 421eb9: call 0x4102a5 */
  esp -= 4; W32(esp, 0x421ebeu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 421ebe: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 421ec4: call 0x4102ae */
  esp -= 4; W32(esp, 0x421ec9u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 421ec9: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 421ecb: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 421ece: jmp 0x42205d */
  goto L_42205d;
L_421ed3: /* 421ed3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 421ed4: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 421ed6: jne 0x421ed3 */
  if (!zf) goto L_421ed3;
L_421ed8: /* 421ed8: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 421edb: cmp byte ptr [ecx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 421edd: je 0x421ee4 */
  if (zf) goto L_421ee4;
L_421edf: /* 421edf: mov byte ptr [eax], 0x20 */
  W8((uint32_t)(eax), 0x20u);
/* 421ee2: mov eax, ecx */
  eax = ecx;
L_421ee4: /* 421ee4: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 421ee6: jne 0x421ed3 */
  if (!zf) goto L_421ed3;
L_421ee8: /* 421ee8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421ee9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421eea: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 421eec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 421eed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421eee: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 421ef1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421ef2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421ef3: call 0x4010fd */
  esp -= 4; W32(esp, 0x421ef8u); SPILL(); hle_memset(); RELOAD();
/* 421ef8: mov dword ptr [ebp - 0x68], esi */
  W32((uint32_t)(ebp + 0xffffff98u), esi);
/* 421efb: mov esi, dword ptr [0x44b130] */
  esi = R32((uint32_t)(0x44b130u));
/* 421f01: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421f04: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421f06: je 0x421f2b */
  if (zf) goto L_421f2b;
L_421f08: /* 421f08: lea ecx, [esi - 1] */
  ecx = (uint32_t)(esi + 0xffffffffu);
L_421f0b: /* 421f0b: mov edx, ecx */
  edx = ecx;
/* 421f0d: mov eax, ecx */
  eax = ecx;
/* 421f0f: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 421f12: mov edx, dword ptr [edx*4 + 0x449240] */
  edx = R32((uint32_t)(edx*4 + 0x449240u));
/* 421f19: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 421f1c: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 421f1f: cmp byte ptr [edx + eax*4 + 4], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + eax*4 + 0x4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 421f23: jne 0x421f2b */
  if (!zf) goto L_421f2b;
L_421f25: /* 421f25: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 421f26: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 421f27: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421f29: jne 0x421f0b */
  if (!zf) goto L_421f0b;
L_421f2b: /* 421f2b: lea eax, [esi + esi*4 + 4] */
  eax = (uint32_t)(esi + esi*4 + 0x4u);
/* 421f2f: mov word ptr [ebp - 0x36], ax */
  W16((uint32_t)(ebp + 0xffffffcau), (eax & 0xffffu));
/* 421f33: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 421f36: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 421f38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421f39: call 0x4016cb */
  esp -= 4; W32(esp, 0x421f3eu); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 421f3e: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 421f40: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 421f43: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421f44: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 421f46: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 421f49: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421f4a: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
/* 421f4d: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 421f50: lea edx, [eax + esi + 4] */
  edx = (uint32_t)(eax + esi + 0x4u);
/* 421f54: jle 0x421f91 */
  if ((zf || sf != of)) goto L_421f91;
L_421f56: /* 421f56: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 421f59: mov edi, eax */
  edi = eax;
/* 421f5b: sar edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 421f5e: mov edi, dword ptr [edi*4 + 0x449240] */
  edi = R32((uint32_t)(edi*4 + 0x449240u));
/* 421f65: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 421f68: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 421f6b: lea edi, [edi + eax*4] */
  edi = (uint32_t)(edi + eax*4);
/* 421f6e: mov al, byte ptr [edi + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* 421f71: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 421f73: jne 0x421f7d */
  if (!zf) goto L_421f7d;
L_421f75: /* 421f75: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 421f77: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 421f79: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 421f7b: jmp 0x421f82 */
  goto L_421f82;
L_421f7d: /* 421f7d: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 421f7f: or dword ptr [edx], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edx), r);
  }
L_421f82: /* 421f82: inc dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 421f85: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 421f86: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 421f89: cmp dword ptr [ebp - 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 421f8c: jl 0x421f56 */
  if ((sf != of)) goto L_421f56;
L_421f8e: /* 421f8e: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
L_421f91: /* 421f91: cmp byte ptr [ebp - 1], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 421f94: je 0x421fc2 */
  if (zf) goto L_421fc2;
L_421f96: /* 421f96: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 421f99: xor edx, edx */
  edx = 0;
/* 421f9b: lea eax, [eax + esi + 4] */
  eax = (uint32_t)(eax + esi + 0x4u);
L_421f9f: /* 421f9f: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 421fa2: jge 0x421fa8 */
  if ((sf == of)) goto L_421fa8;
L_421fa4: /* 421fa4: mov edi, esi */
  edi = esi;
/* 421fa6: jmp 0x421fab */
  goto L_421fab;
L_421fa8: /* 421fa8: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 421faa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_421fab: /* 421fab: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 421fad: jge 0x421fbb */
  if ((sf == of)) goto L_421fbb;
L_421faf: /* 421faf: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 421fb1: or dword ptr [eax], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 421fb4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 421fb5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 421fb6: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 421fb9: jmp 0x421f9f */
  goto L_421f9f;
L_421fbb: /* 421fbb: mov dword ptr [ebp - 0xc], 8 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x8u);
L_421fc2: /* 421fc2: call 0x4102a5 */
  esp -= 4; W32(esp, 0x421fc7u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 421fc7: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 421fc9: call 0x4102ae */
  esp -= 4; W32(esp, 0x421fceu); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 421fce: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 421fd0: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 421fd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421fd4: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 421fd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421fd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421fd9: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 421fdc: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 421fdf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 421fe1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421fe2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421fe3: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 421fe6: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 421fe9: call dword ptr [0x4391e0] */
  esp -= 4; W32(esp, 0x421fefu); SPILL(); call_ind(R32(0x4391e0u)); if (g_unwind) return; /* KERNEL32!CreateProcessA */ RELOAD();
/* 421fef: mov esi, eax */
  esi = eax;
/* 421ff1: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x421ff7u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 421ff7: push dword ptr [ebp - 0x34] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffccu)); esp -= 4; W32(esp, v); }
/* 421ffa: mov edi, eax */
  edi = eax;
/* 421ffc: call 0x401156 */
  esp -= 4; W32(esp, 0x422001u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 422001: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422003: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422004: jne 0x422012 */
  if (!zf) goto L_422012;
L_422006: /* 422006: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 422007: call 0x4102b7 */
  esp -= 4; W32(esp, 0x42200cu); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 42200c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42200d: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 422010: jmp 0x42205b */
  goto L_42205b;
L_422012: /* 422012: cmp dword ptr [ebp + 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422016: jne 0x42201e */
  if (!zf) goto L_42201e;
L_422018: /* 422018: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 422019: call 0x40f783 */
  esp -= 4; W32(esp, 0x42201eu); SPILL(); f_40f783(); if (g_unwind) return; RELOAD();
L_42201e: /* 42201e: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422021: mov esi, dword ptr [0x439044] */
  esi = R32((uint32_t)(0x439044u));
/* 422027: jne 0x42204b */
  if (!zf) goto L_42204b;
L_422029: /* 422029: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 42202b: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 42202e: call dword ptr [0x4391d8] */
  esp -= 4; W32(esp, 0x422034u); SPILL(); call_ind(R32(0x4391d8u)); if (g_unwind) return; /* KERNEL32!WaitForSingleObject */ RELOAD();
/* 422034: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 422037: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422038: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 42203b: call dword ptr [0x4391d4] */
  esp -= 4; W32(esp, 0x422041u); SPILL(); call_ind(R32(0x4391d4u)); if (g_unwind) return; /* KERNEL32!GetExitCodeProcess */ RELOAD();
/* 422041: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
L_422044: /* 422044: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 422047: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x422049u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 422049: jmp 0x422054 */
  goto L_422054;
L_42204b: /* 42204b: cmp dword ptr [ebp + 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42204f: je 0x422044 */
  if (zf) goto L_422044;
L_422051: /* 422051: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
L_422054: /* 422054: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 422057: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x422059u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 422059: mov eax, ebx */
  eax = ebx;
L_42205b: /* 42205b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42205c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_42205d: /* 42205d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42205e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42205f: ret  */
  esp += 4; SPILL(); return;
}

void f_422060(void) {
  LOAD_REGS();
L_422060: /* 422060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 422061: mov ebp, esp */
  ebp = esp;
/* 422063: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 422064: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 422067: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 422068: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 422069: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42206b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42206c: mov edi, esi */
  edi = esi;
/* 42206e: jmp 0x42207e */
  goto L_42207e;
L_422070: /* 422070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422071: call 0x402493 */
  esp -= 4; W32(esp, 0x422076u); SPILL(); hle_strlen(); RELOAD();
/* 422076: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422077: lea edi, [edi + eax + 1] */
  edi = (uint32_t)(edi + eax + 0x1u);
/* 42207b: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_42207e: /* 42207e: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 422080: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422082: jne 0x422070 */
  if (!zf) goto L_422070;
L_422084: /* 422084: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 422085: call 0x4010eb */
  esp -= 4; W32(esp, 0x42208au); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42208a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42208c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42208d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 422090: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 422092: jne 0x42209f */
  if (!zf) goto L_42209f;
L_422094: /* 422094: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 422097: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 42209a: jmp 0x42219d */
  goto L_42219d;
L_42209f: /* 42209f: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 4220a2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4220a4: jne 0x4220fa */
  if (!zf) goto L_4220fa;
L_4220a6: /* 4220a6: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 4220a9: and dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 4220ab: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 4220ae: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_4220b1: /* 4220b1: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 4220b4: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 4220b6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4220b9: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 4220bc: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4220be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4220c0: je 0x4221d8 */
  if (zf) goto L_4221d8;
L_4220c6: /* 4220c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4220c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4220c8: call 0x404b3a */
  esp -= 4; W32(esp, 0x4220cdu); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 4220cd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4220d0: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 4220d2: call 0x402493 */
  esp -= 4; W32(esp, 0x4220d7u); SPILL(); hle_strlen(); RELOAD();
/* 4220d7: lea esi, [esi + eax + 1] */
  esi = (uint32_t)(esi + eax + 0x1u);
/* 4220db: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4220de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4220e1: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4220e4: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 4220e7: jmp 0x4221d9 */
  goto L_4221d9;
L_4220ec: /* 4220ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4220ed: call 0x402493 */
  esp -= 4; W32(esp, 0x4220f2u); SPILL(); hle_strlen(); RELOAD();
/* 4220f2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4220f3: lea esi, [esi + eax + 1] */
  esi = (uint32_t)(esi + eax + 0x1u);
/* 4220f7: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_4220fa: /* 4220fa: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4220fc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4220fe: jne 0x4220ec */
  if (!zf) goto L_4220ec;
L_422100: /* 422100: mov eax, dword ptr [0x44aae4] */
  eax = R32((uint32_t)(0x44aae4u));
/* 422105: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422107: jne 0x42211b */
  if (!zf) goto L_42211b;
L_422109: /* 422109: call 0x40453f */
  esp -= 4; W32(esp, 0x42210eu); SPILL(); f_40453f(); if (g_unwind) return; RELOAD();
/* 42210e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422110: mov dword ptr [0x44aae4], eax */
  W32((uint32_t)(0x44aae4u), eax);
/* 422115: je 0x4221b3 */
  if (zf) goto L_4221b3;
L_42211b: /* 42211b: xor ebx, ebx */
  ebx = 0;
/* 42211d: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42211f: je 0x422143 */
  if (zf) goto L_422143;
L_422121: /* 422121: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 422123: mov edi, eax */
  edi = eax;
L_422125: /* 422125: cmp cl, 0x3d */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 422128: je 0x422143 */
  if (zf) goto L_422143;
L_42212a: /* 42212a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42212b: call 0x402493 */
  esp -= 4; W32(esp, 0x422130u); SPILL(); hle_strlen(); RELOAD();
/* 422130: lea ebx, [ebx + eax + 1] */
  ebx = (uint32_t)(ebx + eax + 0x1u);
/* 422134: mov eax, dword ptr [0x44aae4] */
  eax = R32((uint32_t)(0x44aae4u));
/* 422139: lea edi, [eax + ebx] */
  edi = (uint32_t)(eax + ebx);
/* 42213c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42213d: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 42213f: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 422141: jne 0x422125 */
  if (!zf) goto L_422125;
L_422143: /* 422143: mov edi, ebx */
  edi = ebx;
/* 422145: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 422147: jmp 0x422170 */
  goto L_422170;
L_422149: /* 422149: cmp byte ptr [eax + 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42214d: je 0x422175 */
  if (zf) goto L_422175;
L_42214f: /* 42214f: cmp byte ptr [eax + 2], 0x3a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x2u))); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 422153: jne 0x422175 */
  if (!zf) goto L_422175;
L_422155: /* 422155: cmp byte ptr [eax + 3], 0x3d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x3u))); uint8_t b = (uint8_t)(0x3du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 422159: jne 0x422175 */
  if (!zf) goto L_422175;
L_42215b: /* 42215b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42215e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42215f: call 0x402493 */
  esp -= 4; W32(esp, 0x422164u); SPILL(); hle_strlen(); RELOAD();
/* 422164: lea edi, [edi + eax + 5] */
  edi = (uint32_t)(edi + eax + 0x5u);
/* 422168: mov eax, dword ptr [0x44aae4] */
  eax = R32((uint32_t)(0x44aae4u));
/* 42216d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42216e: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_422170: /* 422170: cmp byte ptr [eax], 0x3d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x3du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 422173: je 0x422149 */
  if (zf) goto L_422149;
L_422175: /* 422175: mov eax, edi */
  eax = edi;
/* 422177: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 422179: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42217b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42217c: call 0x4010eb */
  esp -= 4; W32(esp, 0x422181u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 422181: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422183: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422184: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 422187: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 422189: jne 0x4220b1 */
  if (!zf) goto L_4220b1;
L_42218f: /* 42218f: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 422192: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 422194: call 0x401156 */
  esp -= 4; W32(esp, 0x422199u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 422199: and dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
/* 42219c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42219d: /* 42219d: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4221a2u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4221a2: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 4221a8: call 0x4102ae */
  esp -= 4; W32(esp, 0x4221adu); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4221ad: mov dword ptr [eax], 8 */
  W32((uint32_t)(eax), 0x8u);
L_4221b3: /* 4221b3: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4221b6: jmp 0x422256 */
  goto L_422256;
L_4221bb: /* 4221bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4221bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4221bd: call 0x404b3a */
  esp -= 4; W32(esp, 0x4221c2u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 4221c2: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 4221c5: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 4221c7: call 0x402493 */
  esp -= 4; W32(esp, 0x4221ccu); SPILL(); hle_strlen(); RELOAD();
/* 4221cc: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4221ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4221d1: add dword ptr [ebp + 0x10], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 4221d5: mov byte ptr [esi], 0x20 */
  W8((uint32_t)(esi), 0x20u);
L_4221d8: /* 4221d8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_4221d9: /* 4221d9: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 4221dc: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4221de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4221e0: jne 0x4221bb */
  if (!zf) goto L_4221bb;
L_4221e2: /* 4221e2: and byte ptr [esi - 1], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xffffffffu))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi + 0xffffffffu), r);
  }
/* 4221e5: and byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi), r);
  }
/* 4221e7: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4221eb: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 4221ee: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 4221f0: je 0x42222f */
  if (zf) goto L_42222f;
L_4221f2: /* 4221f2: mov eax, edi */
  eax = edi;
/* 4221f4: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4221f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4221f7: mov eax, dword ptr [0x44aae4] */
  eax = R32((uint32_t)(0x44aae4u));
/* 4221fc: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4221fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4221ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 422200: call 0x40126b */
  esp -= 4; W32(esp, 0x422205u); SPILL(); hle_memcpy(); RELOAD();
/* 422205: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 422207: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42220a: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 42220c: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 42220f: jmp 0x422229 */
  goto L_422229;
L_422211: /* 422211: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422212: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 422213: call 0x404b3a */
  esp -= 4; W32(esp, 0x422218u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 422218: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 42221a: call 0x402493 */
  esp -= 4; W32(esp, 0x42221fu); SPILL(); hle_strlen(); RELOAD();
/* 42221f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 422222: lea esi, [esi + eax + 1] */
  esi = (uint32_t)(esi + eax + 0x1u);
/* 422226: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_422229: /* 422229: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 42222b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42222d: jne 0x422211 */
  if (!zf) goto L_422211;
L_42222f: /* 42222f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422231: je 0x422241 */
  if (zf) goto L_422241;
L_422233: /* 422233: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 422236: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422238: jne 0x42223e */
  if (!zf) goto L_42223e;
L_42223a: /* 42223a: and byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi), r);
  }
/* 42223d: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_42223e: /* 42223e: and byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi), r);
  }
L_422241: /* 422241: push dword ptr [0x44aae4] */
  { uint32_t v = R32((uint32_t)(0x44aae4u)); esp -= 4; W32(esp, v); }
/* 422247: call 0x401156 */
  esp -= 4; W32(esp, 0x42224cu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42224c: and dword ptr [0x44aae4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44aae4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44aae4u), r);
  }
/* 422253: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422254: xor eax, eax */
  eax = 0;
L_422256: /* 422256: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 422257: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 422258: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 422259: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 42225a: ret  */
  esp += 4; SPILL(); return;
}

void f_42225b(void) {
  LOAD_REGS();
L_42225b: /* 42225b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42225c: mov ebp, esp */
  ebp = esp;
/* 42225e: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 422261: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 422264: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 422265: xor ebx, ebx */
  ebx = 0;
/* 422267: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422269: mov dword ptr [ebp - 0xc], ebx */
  W32((uint32_t)(ebp + 0xfffffff4u), ebx);
/* 42226c: mov byte ptr [ebp - 1], bl */
  W8((uint32_t)(ebp + 0xffffffffu), (ebx & 0xffu));
/* 42226f: je 0x422286 */
  if (zf) goto L_422286;
L_422271: /* 422271: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 422274: je 0x422286 */
  if (zf) goto L_422286;
L_422276: /* 422276: jle 0x42228e */
  if ((zf || sf != of)) goto L_42228e;
L_422278: /* 422278: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42227b: jle 0x422286 */
  if ((zf || sf != of)) goto L_422286;
L_42227d: /* 42227d: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422280: jne 0x42228e */
  if (!zf) goto L_42228e;
L_422282: /* 422282: mov byte ptr [ebp - 1], 1 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x1u);
L_422286: /* 422286: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 422289: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 42228c: jmp 0x4222be */
  goto L_4222be;
L_42228e: /* 42228e: call 0x4102a5 */
  esp -= 4; W32(esp, 0x422293u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 422293: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 422299: call 0x4102ae */
  esp -= 4; W32(esp, 0x42229eu); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 42229e: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 4222a0: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4222a3: jmp 0x42243e */
  goto L_42243e;
L_4222a8: /* 4222a8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4222a9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4222aa: cmp word ptr [eax], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4222ad: jne 0x4222a8 */
  if (!zf) goto L_4222a8;
L_4222af: /* 4222af: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 4222b2: cmp word ptr [ecx], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4222b5: je 0x4222be */
  if (zf) goto L_4222be;
L_4222b7: /* 4222b7: mov word ptr [eax], 0x20 */
  W16((uint32_t)(eax), 0x20u);
/* 4222bc: mov eax, ecx */
  eax = ecx;
L_4222be: /* 4222be: cmp word ptr [eax], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4222c1: jne 0x4222a8 */
  if (!zf) goto L_4222a8;
L_4222c3: /* 4222c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4222c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4222c5: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* 4222c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4222c8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4222c9: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 4222cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4222cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4222ce: call 0x4010fd */
  esp -= 4; W32(esp, 0x4222d3u); SPILL(); hle_memset(); RELOAD();
/* 4222d3: mov dword ptr [ebp - 0x68], esi */
  W32((uint32_t)(ebp + 0xffffff98u), esi);
/* 4222d6: mov esi, dword ptr [0x44b130] */
  esi = R32((uint32_t)(0x44b130u));
/* 4222dc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4222df: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4222e1: je 0x422306 */
  if (zf) goto L_422306;
L_4222e3: /* 4222e3: lea ecx, [esi - 1] */
  ecx = (uint32_t)(esi + 0xffffffffu);
L_4222e6: /* 4222e6: mov edx, ecx */
  edx = ecx;
/* 4222e8: mov eax, ecx */
  eax = ecx;
/* 4222ea: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 4222ed: mov edx, dword ptr [edx*4 + 0x449240] */
  edx = R32((uint32_t)(edx*4 + 0x449240u));
/* 4222f4: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4222f7: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 4222fa: cmp byte ptr [edx + eax*4 + 4], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + eax*4 + 0x4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4222fe: jne 0x422306 */
  if (!zf) goto L_422306;
L_422300: /* 422300: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 422301: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 422302: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422304: jne 0x4222e6 */
  if (!zf) goto L_4222e6;
L_422306: /* 422306: lea eax, [esi + esi*4 + 4] */
  eax = (uint32_t)(esi + esi*4 + 0x4u);
/* 42230a: mov word ptr [ebp - 0x36], ax */
  W16((uint32_t)(ebp + 0xffffffcau), (eax & 0xffffu));
/* 42230e: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 422311: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 422313: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422314: call 0x4016cb */
  esp -= 4; W32(esp, 0x422319u); SPILL(); f_4016cb(); if (g_unwind) return; RELOAD();
/* 422319: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42231b: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 42231e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42231f: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 422321: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 422324: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422325: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
/* 422328: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 42232b: lea edx, [eax + esi + 4] */
  edx = (uint32_t)(eax + esi + 0x4u);
/* 42232f: jle 0x42236c */
  if ((zf || sf != of)) goto L_42236c;
L_422331: /* 422331: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 422334: mov edi, eax */
  edi = eax;
/* 422336: sar edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 422339: mov edi, dword ptr [edi*4 + 0x449240] */
  edi = R32((uint32_t)(edi*4 + 0x449240u));
/* 422340: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 422343: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 422346: lea edi, [edi + eax*4] */
  edi = (uint32_t)(edi + eax*4);
/* 422349: mov al, byte ptr [edi + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x4u))) & 0xffu);
/* 42234c: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42234e: jne 0x422358 */
  if (!zf) goto L_422358;
L_422350: /* 422350: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 422352: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 422354: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 422356: jmp 0x42235d */
  goto L_42235d;
L_422358: /* 422358: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 42235a: or dword ptr [edx], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edx), r);
  }
L_42235d: /* 42235d: inc dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 422360: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 422361: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 422364: cmp dword ptr [ebp - 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 422367: jl 0x422331 */
  if ((sf != of)) goto L_422331;
L_422369: /* 422369: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
L_42236c: /* 42236c: cmp byte ptr [ebp - 1], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42236f: je 0x42239d */
  if (zf) goto L_42239d;
L_422371: /* 422371: lea ecx, [eax + 4] */
  ecx = (uint32_t)(eax + 0x4u);
/* 422374: xor edx, edx */
  edx = 0;
/* 422376: lea eax, [eax + esi + 4] */
  eax = (uint32_t)(eax + esi + 0x4u);
L_42237a: /* 42237a: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42237d: jge 0x422383 */
  if ((sf == of)) goto L_422383;
L_42237f: /* 42237f: mov edi, esi */
  edi = esi;
/* 422381: jmp 0x422386 */
  goto L_422386;
L_422383: /* 422383: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 422385: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_422386: /* 422386: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 422388: jge 0x422396 */
  if ((sf == of)) goto L_422396;
L_42238a: /* 42238a: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 42238c: or dword ptr [eax], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 42238f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 422390: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 422391: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 422394: jmp 0x42237a */
  goto L_42237a;
L_422396: /* 422396: mov dword ptr [ebp - 0xc], 8 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x8u);
L_42239d: /* 42239d: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4223a2u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4223a2: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 4223a4: call 0x4102ae */
  esp -= 4; W32(esp, 0x4223a9u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4223a9: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 4223ab: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 4223ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4223af: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 4223b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4223b3: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4223b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4223b7: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4223ba: or eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4223bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4223c0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4223c2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4223c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4223c4: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 4223c7: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4223ca: call dword ptr [0x4391e4] */
  esp -= 4; W32(esp, 0x4223d0u); SPILL(); call_ind(R32(0x4391e4u)); if (g_unwind) return; /* KERNEL32!CreateProcessW */ RELOAD();
/* 4223d0: mov esi, eax */
  esi = eax;
/* 4223d2: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x4223d8u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 4223d8: push dword ptr [ebp - 0x34] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffccu)); esp -= 4; W32(esp, v); }
/* 4223db: mov edi, eax */
  edi = eax;
/* 4223dd: call 0x401156 */
  esp -= 4; W32(esp, 0x4223e2u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4223e2: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4223e4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4223e5: jne 0x4223f3 */
  if (!zf) goto L_4223f3;
L_4223e7: /* 4223e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4223e8: call 0x4102b7 */
  esp -= 4; W32(esp, 0x4223edu); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 4223ed: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4223ee: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4223f1: jmp 0x42243c */
  goto L_42243c;
L_4223f3: /* 4223f3: cmp dword ptr [ebp + 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4223f7: jne 0x4223ff */
  if (!zf) goto L_4223ff;
L_4223f9: /* 4223f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4223fa: call 0x40f783 */
  esp -= 4; W32(esp, 0x4223ffu); SPILL(); f_40f783(); if (g_unwind) return; RELOAD();
L_4223ff: /* 4223ff: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422402: mov esi, dword ptr [0x439044] */
  esi = R32((uint32_t)(0x439044u));
/* 422408: jne 0x42242c */
  if (!zf) goto L_42242c;
L_42240a: /* 42240a: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 42240c: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 42240f: call dword ptr [0x4391d8] */
  esp -= 4; W32(esp, 0x422415u); SPILL(); call_ind(R32(0x4391d8u)); if (g_unwind) return; /* KERNEL32!WaitForSingleObject */ RELOAD();
/* 422415: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 422418: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422419: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 42241c: call dword ptr [0x4391d4] */
  esp -= 4; W32(esp, 0x422422u); SPILL(); call_ind(R32(0x4391d4u)); if (g_unwind) return; /* KERNEL32!GetExitCodeProcess */ RELOAD();
/* 422422: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
L_422425: /* 422425: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 422428: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x42242au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 42242a: jmp 0x422435 */
  goto L_422435;
L_42242c: /* 42242c: cmp dword ptr [ebp + 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422430: je 0x422425 */
  if (zf) goto L_422425;
L_422432: /* 422432: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
L_422435: /* 422435: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 422438: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x42243au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 42243a: mov eax, ebx */
  eax = ebx;
L_42243c: /* 42243c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42243d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_42243e: /* 42243e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42243f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 422440: ret  */
  esp += 4; SPILL(); return;
}

void f_422441(void) {
  LOAD_REGS();
L_422441: /* 422441: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 422442: mov ebp, esp */
  ebp = esp;
/* 422444: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 422445: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 422446: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 422449: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 42244b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42244c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42244d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42244f: mov edi, ebx */
  edi = ebx;
/* 422451: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 422452: jmp 0x422464 */
  goto L_422464;
L_422454: /* 422454: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422455: call 0x4013b8 */
  esp -= 4; W32(esp, 0x42245au); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 42245a: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 42245d: lea esi, [esi + eax + 1] */
  esi = (uint32_t)(esi + eax + 0x1u);
/* 422461: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 422463: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_422464: /* 422464: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422466: jne 0x422454 */
  if (!zf) goto L_422454;
L_422468: /* 422468: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 42246b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42246c: call 0x4010eb */
  esp -= 4; W32(esp, 0x422471u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 422471: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422472: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 422475: xor edi, edi */
  edi = 0;
/* 422477: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422479: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 42247b: jne 0x422487 */
  if (!zf) goto L_422487;
L_42247d: /* 42247d: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 422480: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 422482: jmp 0x422595 */
  goto L_422595;
L_422487: /* 422487: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 42248a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42248c: je 0x422507 */
  if (zf) goto L_422507;
L_42248e: /* 42248e: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 422495: jmp 0x4224ab */
  goto L_4224ab;
L_422497: /* 422497: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422498: call 0x4013b8 */
  esp -= 4; W32(esp, 0x42249du); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 42249d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42249e: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4224a1: lea eax, [ecx + eax + 1] */
  eax = (uint32_t)(ecx + eax + 0x1u);
/* 4224a5: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4224a8: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_4224ab: /* 4224ab: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4224ad: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4224af: jne 0x422497 */
  if (!zf) goto L_422497;
L_4224b1: /* 4224b1: mov eax, dword ptr [0x44f3e4] */
  eax = R32((uint32_t)(0x44f3e4u));
/* 4224b6: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4224b8: jne 0x4224cc */
  if (!zf) goto L_4224cc;
L_4224ba: /* 4224ba: call 0x4284d7 */
  esp -= 4; W32(esp, 0x4224bfu); SPILL(); f_4284d7(); if (g_unwind) return; RELOAD();
/* 4224bf: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4224c1: mov dword ptr [0x44f3e4], eax */
  W32((uint32_t)(0x44f3e4u), eax);
/* 4224c6: je 0x4225ab */
  if (zf) goto L_4225ab;
L_4224cc: /* 4224cc: cmp word ptr [eax], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4224cf: push 0x3d */
  { uint32_t v = 0x3du; esp -= 4; W32(esp, v); }
/* 4224d1: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 4224d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4224d5: je 0x422502 */
  if (zf) goto L_422502;
L_4224d7: /* 4224d7: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 4224da: mov ecx, eax */
  ecx = eax;
L_4224dc: /* 4224dc: cmp dx, si */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4224df: je 0x422502 */
  if (zf) goto L_422502;
L_4224e1: /* 4224e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4224e2: call 0x4013b8 */
  esp -= 4; W32(esp, 0x4224e7u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 4224e7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4224e8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4224eb: lea ecx, [ecx + eax + 1] */
  ecx = (uint32_t)(ecx + eax + 0x1u);
/* 4224ef: mov eax, dword ptr [0x44f3e4] */
  eax = R32((uint32_t)(0x44f3e4u));
/* 4224f4: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 4224f7: lea ecx, [eax + ecx*2] */
  ecx = (uint32_t)(eax + ecx*2);
/* 4224fa: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 4224fd: cmp dx, di */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 422500: jne 0x4224dc */
  if (!zf) goto L_4224dc;
L_422502: /* 422502: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 422505: jmp 0x422565 */
  goto L_422565;
L_422507: /* 422507: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 42250a: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 42250c: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
L_42250f: /* 42250f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 422512: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 422514: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 422516: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422518: je 0x4225cf */
  if (zf) goto L_4225cf;
L_42251e: /* 42251e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42251f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 422520: call 0x4013ce */
  esp -= 4; W32(esp, 0x422525u); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 422525: push dword ptr [ebx] */
  { uint32_t v = R32((uint32_t)(ebx)); esp -= 4; W32(esp, v); }
/* 422527: call 0x4013b8 */
  esp -= 4; W32(esp, 0x42252cu); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 42252c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42252f: lea esi, [esi + eax*2 + 2] */
  esi = (uint32_t)(esi + eax*2 + 0x2u);
/* 422533: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 422536: jmp 0x4225d1 */
  goto L_4225d1;
L_42253b: /* 42253b: cmp word ptr [ecx + 2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x2u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 422540: je 0x42256d */
  if (zf) goto L_42256d;
L_422542: /* 422542: cmp word ptr [eax + edi*2 + 4], 0x3a */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + edi*2 + 0x4u))); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 422548: jne 0x42256d */
  if (!zf) goto L_42256d;
L_42254a: /* 42254a: cmp word ptr [eax + edi*2 + 6], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + edi*2 + 0x6u))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42254f: jne 0x42256d */
  if (!zf) goto L_42256d;
L_422551: /* 422551: lea eax, [eax + edi*2 + 8] */
  eax = (uint32_t)(eax + edi*2 + 0x8u);
/* 422555: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422556: call 0x4013b8 */
  esp -= 4; W32(esp, 0x42255bu); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 42255b: lea edi, [edi + eax + 5] */
  edi = (uint32_t)(edi + eax + 0x5u);
/* 42255f: mov eax, dword ptr [0x44f3e4] */
  eax = R32((uint32_t)(0x44f3e4u));
/* 422564: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_422565: /* 422565: lea ecx, [eax + edi*2] */
  ecx = (uint32_t)(eax + edi*2);
/* 422568: cmp word ptr [ecx], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42256b: je 0x42253b */
  if (zf) goto L_42253b;
L_42256d: /* 42256d: mov eax, edi */
  eax = edi;
/* 42256f: sub eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 422572: add eax, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 422575: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 422577: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422578: call 0x4010eb */
  esp -= 4; W32(esp, 0x42257du); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42257d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42257f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422580: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 422583: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 422585: jne 0x42250f */
  if (!zf) goto L_42250f;
L_422587: /* 422587: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 42258a: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* 42258c: call 0x401156 */
  esp -= 4; W32(esp, 0x422591u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 422591: and dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi), r);
  }
/* 422594: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_422595: /* 422595: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42259au); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42259a: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 4225a0: call 0x4102ae */
  esp -= 4; W32(esp, 0x4225a5u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4225a5: mov dword ptr [eax], 8 */
  W32((uint32_t)(eax), 0x8u);
L_4225ab: /* 4225ab: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4225ae: jmp 0x422652 */
  goto L_422652;
L_4225b3: /* 4225b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4225b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4225b5: call 0x4013ce */
  esp -= 4; W32(esp, 0x4225bau); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 4225ba: push dword ptr [ebx] */
  { uint32_t v = R32((uint32_t)(ebx)); esp -= 4; W32(esp, v); }
/* 4225bc: call 0x4013b8 */
  esp -= 4; W32(esp, 0x4225c1u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 4225c1: lea esi, [esi + eax*2] */
  esi = (uint32_t)(esi + eax*2);
/* 4225c4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4225c7: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 4225ca: mov word ptr [esi], 0x20 */
  W16((uint32_t)(esi), 0x20u);
L_4225cf: /* 4225cf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4225d0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_4225d1: /* 4225d1: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 4225d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4225d5: jne 0x4225b3 */
  if (!zf) goto L_4225b3;
L_4225d7: /* 4225d7: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4225da: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 4225dd: mov word ptr [esi - 2], ax */
  W16((uint32_t)(esi + 0xfffffffeu), (eax & 0xffffu));
/* 4225e1: mov word ptr [esi], ax */
  W16((uint32_t)(esi), (eax & 0xffffu));
/* 4225e4: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4225e6: je 0x422628 */
  if (zf) goto L_422628;
L_4225e8: /* 4225e8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4225eb: mov ecx, dword ptr [0x44f3e4] */
  ecx = R32((uint32_t)(0x44f3e4u));
/* 4225f1: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4225f3: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 4225f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4225f6: lea eax, [ecx + eax*2] */
  eax = (uint32_t)(ecx + eax*2);
/* 4225f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4225fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4225fb: call 0x40126b */
  esp -= 4; W32(esp, 0x422600u); SPILL(); hle_memcpy(); RELOAD();
/* 422600: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 422603: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 422605: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 422608: jmp 0x422622 */
  goto L_422622;
L_42260a: /* 42260a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42260b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42260c: call 0x4013ce */
  esp -= 4; W32(esp, 0x422611u); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 422611: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 422613: call 0x4013b8 */
  esp -= 4; W32(esp, 0x422618u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 422618: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42261b: lea esi, [esi + eax*2 + 2] */
  esi = (uint32_t)(esi + eax*2 + 0x2u);
/* 42261f: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_422622: /* 422622: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 422624: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422626: jne 0x42260a */
  if (!zf) goto L_42260a;
L_422628: /* 422628: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42262a: je 0x42263d */
  if (zf) goto L_42263d;
L_42262c: /* 42262c: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 42262f: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422631: jne 0x422639 */
  if (!zf) goto L_422639;
L_422633: /* 422633: and word ptr [esi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi), r);
  }
/* 422637: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 422638: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_422639: /* 422639: and word ptr [esi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi), r);
  }
L_42263d: /* 42263d: push dword ptr [0x44f3e4] */
  { uint32_t v = R32((uint32_t)(0x44f3e4u)); esp -= 4; W32(esp, v); }
/* 422643: call 0x401156 */
  esp -= 4; W32(esp, 0x422648u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 422648: and dword ptr [0x44f3e4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f3e4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44f3e4u), r);
  }
/* 42264f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422650: xor eax, eax */
  eax = 0;
L_422652: /* 422652: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 422653: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 422654: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 422655: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 422656: ret  */
  esp += 4; SPILL(); return;
}

void f_422657(void) {
  LOAD_REGS();
L_422657: /* 422657: jmp 0x401208 */
  SPILL(); f_401208(); return;
}

void f_42265c(void) {
  LOAD_REGS();
L_42265c: /* 42265c: jmp 0x401156 */
  SPILL(); f_401156(); return;
}

void f_422661(void) {
  LOAD_REGS();
L_422661: /* 422661: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 422665: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 422668: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42266a: je 0x42267a */
  if (zf) goto L_42267a;
L_42266c: /* 42266c: call 0x4102a5 */
  esp -= 4; W32(esp, 0x422671u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 422671: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 422677: xor eax, eax */
  eax = 0;
/* 422679: ret  */
  esp += 4; SPILL(); return;
L_42267a: /* 42267a: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 42267e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42267f: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 422683: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 422685: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 422686: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 422687: jb 0x42269c */
  if (cf) goto L_42269c;
L_422689: /* 422689: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42268b: je 0x42269c */
  if (zf) goto L_42269c;
L_42268d: /* 42268d: call 0x4102a5 */
  esp -= 4; W32(esp, 0x422692u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 422692: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
L_422698: /* 422698: xor eax, eax */
  eax = 0;
/* 42269a: jmp 0x4226d8 */
  goto L_4226d8;
L_42269c: /* 42269c: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42269f: ja 0x4226a4 */
  if ((!cf && !zf)) goto L_4226a4;
L_4226a1: /* 4226a1: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4226a3: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
L_4226a4: /* 4226a4: mov esi, ebx */
  esi = ebx;
/* 4226a6: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* 4226a8: lea edi, [eax - 1] */
  edi = (uint32_t)(eax + 0xffffffffu);
/* 4226ab: and esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 4226ae: lea eax, [ecx + esi] */
  eax = (uint32_t)(ecx + esi);
/* 4226b1: lea eax, [eax + edi + 4] */
  eax = (uint32_t)(eax + edi + 0x4u);
/* 4226b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4226b6: call 0x4010eb */
  esp -= 4; W32(esp, 0x4226bbu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4226bb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4226bc: mov ecx, eax */
  ecx = eax;
/* 4226be: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4226c0: je 0x422698 */
  if (zf) goto L_422698;
L_4226c2: /* 4226c2: lea eax, [ecx + esi] */
  eax = (uint32_t)(ecx + esi);
/* 4226c5: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4226c7: lea eax, [eax + ebx + 4] */
  eax = (uint32_t)(eax + ebx + 0x4u);
/* 4226cb: not edi */
  edi = ~edi;
/* 4226cd: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4226cf: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4226d1: mov edx, eax */
  edx = eax;
/* 4226d3: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 4226d5: mov dword ptr [edx - 4], ecx */
  W32((uint32_t)(edx + 0xfffffffcu), ecx);
L_4226d8: /* 4226d8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4226d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4226da: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4226db: ret  */
  esp += 4; SPILL(); return;
}

void f_4226dc(void) {
  LOAD_REGS();
L_4226dc: /* 4226dc: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4226e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4226e2: je 0x4226f0 */
  if (zf) goto L_4226f0;
L_4226e4: /* 4226e4: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4226e7: push dword ptr [eax - 4] */
  { uint32_t v = R32((uint32_t)(eax + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 4226ea: call 0x401156 */
  esp -= 4; W32(esp, 0x4226efu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4226ef: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4226f0: /* 4226f0: ret  */
  esp += 4; SPILL(); return;
}

void f_4226f1(void) {
  LOAD_REGS();
L_4226f1: /* 4226f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4226f3: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4226f7: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4226fb: call 0x422661 */
  esp -= 4; W32(esp, 0x422700u); SPILL(); f_422661(); if (g_unwind) return; RELOAD();
/* 422700: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 422703: ret  */
  esp += 4; SPILL(); return;
}

void f_422704(void) {
  LOAD_REGS();
L_422704: /* 422704: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 422705: mov ebp, esp */
  ebp = esp;
/* 422707: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42270a: xor eax, eax */
  eax = 0;
/* 42270c: cmp dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42270f: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 422712: jne 0x422727 */
  if (!zf) goto L_422727;
L_422714: /* 422714: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 422717: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42271a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42271d: call 0x422661 */
  esp -= 4; W32(esp, 0x422722u); SPILL(); f_422661(); if (g_unwind) return; RELOAD();
/* 422722: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 422725: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 422726: ret  */
  esp += 4; SPILL(); return;
L_422727: /* 422727: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42272a: jne 0x422739 */
  if (!zf) goto L_422739;
L_42272c: /* 42272c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42272f: call 0x4226dc */
  esp -= 4; W32(esp, 0x422734u); SPILL(); f_4226dc(); if (g_unwind) return; RELOAD();
/* 422734: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422735: xor eax, eax */
  eax = 0;
/* 422737: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 422738: ret  */
  esp += 4; SPILL(); return;
L_422739: /* 422739: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42273a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42273b: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 42273e: cmp esi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 422741: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 422742: jb 0x42275a */
  if (cf) goto L_42275a;
L_422744: /* 422744: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422746: je 0x42275a */
  if (zf) goto L_42275a;
L_422748: /* 422748: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42274du); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42274d: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
L_422753: /* 422753: xor eax, eax */
  eax = 0;
/* 422755: jmp 0x422843 */
  goto L_422843;
L_42275a: /* 42275a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42275d: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 422760: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 422763: mov ebx, dword ptr [eax - 4] */
  ebx = R32((uint32_t)(eax + 0xfffffffcu));
/* 422766: lea eax, [edi - 1] */
  eax = (uint32_t)(edi + 0xffffffffu);
/* 422769: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42276b: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 42276e: jne 0x422748 */
  if (!zf) goto L_422748;
L_422770: /* 422770: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 422773: ja 0x422778 */
  if ((!cf && !zf)) goto L_422778;
L_422775: /* 422775: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 422777: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_422778: /* 422778: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42277b: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 42277d: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* 42277f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 422780: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 422781: and esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 422784: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 422787: call 0x40143b */
  esp -= 4; W32(esp, 0x42278cu); SPILL(); f_40143b(); if (g_unwind) return; RELOAD();
/* 42278c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42278d: mov ecx, ebx */
  ecx = ebx;
/* 42278f: sub ecx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 422792: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 422794: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 422797: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 422799: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 42279c: jbe 0x4227a1 */
  if ((cf | zf)) goto L_4227a1;
L_42279e: /* 42279e: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
L_4227a1: /* 4227a1: lea eax, [ecx + esi] */
  eax = (uint32_t)(ecx + esi);
/* 4227a4: lea ecx, [esi + ebx] */
  ecx = (uint32_t)(esi + ebx);
/* 4227a7: lea eax, [eax + edi + 4] */
  eax = (uint32_t)(eax + edi + 0x4u);
/* 4227ab: lea ecx, [ecx + edi + 4] */
  ecx = (uint32_t)(ecx + edi + 0x4u);
/* 4227af: cmp ecx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4227b2: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 4227b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4227b6: jb 0x4227ca */
  if (cf) goto L_4227ca;
L_4227b8: /* 4227b8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4227b9: call 0x42285f */
  esp -= 4; W32(esp, 0x4227beu); SPILL(); f_42285f(); if (g_unwind) return; RELOAD();
/* 4227be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4227c0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4227c1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4227c2: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4227c5: jne 0x4227e4 */
  if (!zf) goto L_4227e4;
L_4227c7: /* 4227c7: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
L_4227ca: /* 4227ca: call 0x4010eb */
  esp -= 4; W32(esp, 0x4227cfu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4227cf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4227d1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4227d2: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4227d5: je 0x422753 */
  if (zf) goto L_422753;
L_4227db: /* 4227db: mov dword ptr [ebp - 8], 1 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x1u);
/* 4227e2: jmp 0x4227e7 */
  goto L_4227e7;
L_4227e4: /* 4227e4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_4227e7: /* 4227e7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4227ea: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4227ed: mov edx, eax */
  edx = eax;
/* 4227ef: sub edx, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 4227f2: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4227f4: jne 0x422804 */
  if (!zf) goto L_422804;
L_4227f6: /* 4227f6: lea edx, [esi + eax] */
  edx = (uint32_t)(esi + eax);
/* 4227f9: add edx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4227fc: mov ebx, edi */
  ebx = edi;
/* 4227fe: not ebx */
  ebx = ~ebx;
/* 422800: test ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422802: je 0x422843 */
  if (zf) goto L_422843;
L_422804: /* 422804: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 422807: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 42280a: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 42280c: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 42280e: lea ebx, [ecx + eax + 4] */
  ebx = (uint32_t)(ecx + eax + 0x4u);
/* 422812: not edi */
  edi = ~edi;
/* 422814: and ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 422816: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 422819: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 42281b: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 42281e: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 422820: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422821: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 422822: call 0x403f12 */
  esp -= 4; W32(esp, 0x422827u); SPILL(); hle_memcpy(); RELOAD();
/* 422827: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42282a: cmp dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42282e: je 0x422837 */
  if (zf) goto L_422837;
L_422830: /* 422830: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 422831: call 0x401156 */
  esp -= 4; W32(esp, 0x422836u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 422836: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_422837: /* 422837: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 42283a: mov eax, ebx */
  eax = ebx;
/* 42283c: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 42283e: mov dword ptr [eax - 4], ecx */
  W32((uint32_t)(eax + 0xfffffffcu), ecx);
/* 422841: mov eax, ebx */
  eax = ebx;
L_422843: /* 422843: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 422844: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 422845: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 422846: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 422847: ret  */
  esp += 4; SPILL(); return;
}

void f_422848(void) {
  LOAD_REGS();
L_422848: /* 422848: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42284a: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42284e: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 422852: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 422856: call 0x422704 */
  esp -= 4; W32(esp, 0x42285bu); SPILL(); f_422704(); if (g_unwind) return; RELOAD();
/* 42285b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42285e: ret  */
  esp += 4; SPILL(); return;
}

void f_42285f(void) {
  LOAD_REGS();
L_42285f: /* 42285f: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 422861: push 0x440898 */
  { uint32_t v = 0x440898u; esp -= 4; W32(esp, v); }
/* 422866: call 0x40101f */
  esp -= 4; W32(esp, 0x42286bu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42286b: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 42286e: cmp esi, -0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 422871: jbe 0x42287a */
  if ((cf | zf)) goto L_42287a;
L_422873: /* 422873: xor eax, eax */
  eax = 0;
/* 422875: jmp 0x42299e */
  goto L_42299e;
L_42287a: /* 42287a: mov eax, dword ptr [0x44a84c] */
  eax = R32((uint32_t)(0x44a84cu));
/* 42287f: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422882: jne 0x4228ee */
  if (!zf) goto L_4228ee;
L_422884: /* 422884: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 422886: call 0x4011b7 */
  esp -= 4; W32(esp, 0x42288bu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 42288b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42288c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 422890: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 422893: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 422894: call 0x410467 */
  esp -= 4; W32(esp, 0x422899u); SPILL(); f_410467(); if (g_unwind) return; RELOAD();
/* 422899: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42289a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42289d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42289f: je 0x4228bf */
  if (zf) goto L_4228bf;
L_4228a1: /* 4228a1: and dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 4228a5: cmp esi, dword ptr [0x44f678] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44f678u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4228ab: ja 0x4228bf */
  if ((!cf && !zf)) goto L_4228bf;
L_4228ad: /* 4228ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4228ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4228af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4228b0: call 0x410967 */
  esp -= 4; W32(esp, 0x4228b5u); SPILL(); f_410967(); if (g_unwind) return; RELOAD();
/* 4228b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4228b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4228ba: je 0x4228bf */
  if (zf) goto L_4228bf;
L_4228bc: /* 4228bc: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
L_4228bf: /* 4228bf: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4228c3: call 0x4228e5 */
  esp -= 4; W32(esp, 0x4228c8u); SPILL(); f_4228e5(); if (g_unwind) return; RELOAD();
/* 4228c8: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4228cc: jne 0x42299b */
  if (!zf) goto L_42299b;
L_4228d2: /* 4228d2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4228d4: jne 0x4228d7 */
  if (!zf) goto L_4228d7;
L_4228d6: /* 4228d6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_4228d7: /* 4228d7: add esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4228da: and esi, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 4228dd: jmp 0x422986 */
  goto L_422986;
L_4228ee: /* 4228ee: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4228f1: jne 0x422981 */
  if (!zf) goto L_422981;
L_4228f7: /* 4228f7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4228f9: jne 0x4228fc */
  if (!zf) goto L_4228fc;
L_4228fb: /* 4228fb: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_4228fc: /* 4228fc: add esi, 0xf */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4228ff: and esi, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 422902: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 422905: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 422907: call 0x4011b7 */
  esp -= 4; W32(esp, 0x42290cu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 42290c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42290d: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 422914: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 422917: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422918: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 42291b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42291c: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 42291f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 422920: call 0x411288 */
  esp -= 4; W32(esp, 0x422925u); SPILL(); f_411288(); if (g_unwind) return; RELOAD();
/* 422925: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 422928: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 42292b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42292d: je 0x422964 */
  if (zf) goto L_422964;
L_42292f: /* 42292f: and dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 422933: cmp esi, dword ptr [0x44dca4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44dca4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 422939: ja 0x422955 */
  if ((!cf && !zf)) goto L_422955;
L_42293b: /* 42293b: shr esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 42293e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42293f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422940: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 422943: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 422946: call 0x411443 */
  esp -= 4; W32(esp, 0x42294bu); SPILL(); f_411443(); if (g_unwind) return; RELOAD();
/* 42294b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42294e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422950: je 0x422955 */
  if (zf) goto L_422955;
L_422952: /* 422952: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
L_422955: /* 422955: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 422957: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 42295a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42295b: call 0x406fd7 */
  esp -= 4; W32(esp, 0x422960u); SPILL(); f_406fd7(); if (g_unwind) return; RELOAD();
/* 422960: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422961: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422962: jmp 0x42299b */
  goto L_42299b;
L_422964: /* 422964: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 422968: call 0x422978 */
  esp -= 4; W32(esp, 0x42296du); SPILL(); f_422978(); if (g_unwind) return; RELOAD();
/* 42296d: cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422971: jne 0x42299b */
  if (!zf) goto L_42299b;
L_422973: /* 422973: jmp 0x422986 */
  goto L_422986;
L_422981: /* 422981: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422983: jne 0x422986 */
  if (!zf) goto L_422986;
L_422985: /* 422985: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_422986: /* 422986: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 422987: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42298a: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 42298c: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 422992: call dword ptr [0x439098] */
  esp -= 4; W32(esp, 0x422998u); SPILL(); call_ind(R32(0x439098u)); if (g_unwind) return; /* KERNEL32!HeapReAlloc */ RELOAD();
/* 422998: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
L_42299b: /* 42299b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
L_42299e: /* 42299e: call 0x40105a */
  esp -= 4; W32(esp, 0x4229a3u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4229a3: ret  */
  esp += 4; SPILL(); return;
}

void f_4228e2(void) {
  LOAD_REGS();
L_4228e2: /* 4228e2: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
  SPILL(); f_4228e5(); return;
}

void f_4228e5(void) {
  LOAD_REGS();
L_4228e5: /* 4228e5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4228e7: call 0x4011d9 */
  esp -= 4; W32(esp, 0x4228ecu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 4228ec: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4228ed: ret  */
  esp += 4; SPILL(); return;
}

void f_422975(void) {
  LOAD_REGS();
L_422975: /* 422975: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
  SPILL(); f_422978(); return;
}

void f_422978(void) {
  LOAD_REGS();
L_422978: /* 422978: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 42297a: call 0x4011d9 */
  esp -= 4; W32(esp, 0x42297fu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 42297f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422980: ret  */
  esp += 4; SPILL(); return;
}

void f_4229a4(void) {
  LOAD_REGS();
L_4229a4: /* 4229a4: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4229a9u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4229a9: mov dword ptr [eax], 0x28 */
  W32((uint32_t)(eax), 0x28u);
/* 4229af: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4229b2: ret  */
  esp += 4; SPILL(); return;
}

void f_4229b3(void) {
  LOAD_REGS();
L_4229b3: /* 4229b3: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4229b5: push 0x4408b0 */
  { uint32_t v = 0x4408b0u; esp -= 4; W32(esp, v); }
/* 4229ba: call 0x40101f */
  esp -= 4; W32(esp, 0x4229bfu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 4229bf: mov dword ptr [ebp - 0x1c], 0xfffffffe */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xfffffffeu);
/* 4229c6: mov eax, dword ptr [0x44a84c] */
  eax = R32((uint32_t)(0x44a84cu));
/* 4229cb: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4229ce: jne 0x422a33 */
  if (!zf) goto L_422a33;
L_4229d0: /* 4229d0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4229d2: call 0x4011b7 */
  esp -= 4; W32(esp, 0x4229d7u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 4229d7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4229d8: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4229dc: call 0x410d17 */
  esp -= 4; W32(esp, 0x4229e1u); SPILL(); f_410d17(); if (g_unwind) return; RELOAD();
/* 4229e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4229e3: jge 0x4229ec */
  if ((sf == of)) goto L_4229ec;
L_4229e5: /* 4229e5: mov dword ptr [ebp - 0x1c], 0xfffffffc */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xfffffffcu);
L_4229ec: /* 4229ec: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4229f0: call 0x422a2a */
  esp -= 4; W32(esp, 0x4229f5u); SPILL(); f_422a2a(); if (g_unwind) return; RELOAD();
L_4229f5: /* 4229f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4229f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4229f9: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 4229ff: call dword ptr [0x4391e8] */
  esp -= 4; W32(esp, 0x422a05u); SPILL(); call_ind(R32(0x4391e8u)); if (g_unwind) return; /* KERNEL32!HeapValidate */ RELOAD();
/* 422a05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422a07: jne 0x422a72 */
  if (!zf) goto L_422a72;
L_422a09: /* 422a09: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x422a0fu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 422a0f: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 422a11: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 422a12: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422a14: jne 0x422a6b */
  if (!zf) goto L_422a6b;
L_422a16: /* 422a16: call 0x4102ae */
  esp -= 4; W32(esp, 0x422a1bu); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 422a1b: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 422a1d: call 0x4102a5 */
  esp -= 4; W32(esp, 0x422a22u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 422a22: mov dword ptr [eax], 0x28 */
  W32((uint32_t)(eax), 0x28u);
/* 422a28: jmp 0x422a72 */
  goto L_422a72;
L_422a33: /* 422a33: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422a36: jne 0x4229f5 */
  if (!zf) goto L_4229f5;
L_422a38: /* 422a38: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 422a3a: call 0x4011b7 */
  esp -= 4; W32(esp, 0x422a3fu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 422a3f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422a40: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 422a47: call 0x4114f3 */
  esp -= 4; W32(esp, 0x422a4cu); SPILL(); f_4114f3(); if (g_unwind) return; RELOAD();
/* 422a4c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 422a4e: jge 0x422a57 */
  if ((sf == of)) goto L_422a57;
L_422a50: /* 422a50: mov dword ptr [ebp - 0x1c], 0xfffffffc */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xfffffffcu);
L_422a57: /* 422a57: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 422a5b: call 0x422a62 */
  esp -= 4; W32(esp, 0x422a60u); SPILL(); f_422a62(); if (g_unwind) return; RELOAD();
/* 422a60: jmp 0x4229f5 */
  goto L_4229f5;
L_422a6b: /* 422a6b: mov dword ptr [ebp - 0x1c], 0xfffffffc */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xfffffffcu);
L_422a72: /* 422a72: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 422a75: call 0x40105a */
  esp -= 4; W32(esp, 0x422a7au); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 422a7a: ret  */
  esp += 4; SPILL(); return;
}

void f_422a2a(void) {
  LOAD_REGS();
L_422a2a: /* 422a2a: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 422a2c: call 0x4011d9 */
  esp -= 4; W32(esp, 0x422a31u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 422a31: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422a32: ret  */
  esp += 4; SPILL(); return;
}

void f_422a62(void) {
  LOAD_REGS();
L_422a62: /* 422a62: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 422a64: call 0x4011d9 */
  esp -= 4; W32(esp, 0x422a69u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 422a69: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422a6a: ret  */
  esp += 4; SPILL(); return;
}

void f_422a7b(void) {
  LOAD_REGS();
L_422a7b: /* 422a7b: jmp 0x4229b3 */
  SPILL(); f_4229b3(); return;
}

void f_422a80(void) {
  LOAD_REGS();
L_422a80: /* 422a80: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 422a82: push 0x4408c8 */
  { uint32_t v = 0x4408c8u; esp -= 4; W32(esp, v); }
/* 422a87: call 0x40101f */
  esp -= 4; W32(esp, 0x422a8cu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 422a8c: mov eax, dword ptr [0x44a84c] */
  eax = R32((uint32_t)(0x44a84cu));
/* 422a91: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422a94: jne 0x422aef */
  if (!zf) goto L_422aef;
L_422a96: /* 422a96: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 422a98: call 0x4011b7 */
  esp -= 4; W32(esp, 0x422a9du); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 422a9d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422a9e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 422aa2: call 0x410c46 */
  esp -= 4; W32(esp, 0x422aa7u); SPILL(); f_410c46(); if (g_unwind) return; RELOAD();
/* 422aa7: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 422aab: call 0x422ae6 */
  esp -= 4; W32(esp, 0x422ab0u); SPILL(); f_422ae6(); if (g_unwind) return; RELOAD();
L_422ab0: /* 422ab0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 422ab2: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 422ab8: call dword ptr [0x4391ec] */
  esp -= 4; W32(esp, 0x422abeu); SPILL(); call_ind(R32(0x4391ecu)); if (g_unwind) return; /* KERNEL32!HeapCompact */ RELOAD();
/* 422abe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422ac0: jne 0x422b1f */
  if (!zf) goto L_422b1f;
L_422ac2: /* 422ac2: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x422ac8u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 422ac8: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 422aca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 422acb: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422acd: jne 0x422ae1 */
  if (!zf) goto L_422ae1;
L_422acf: /* 422acf: call 0x4102ae */
  esp -= 4; W32(esp, 0x422ad4u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 422ad4: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 422ad6: call 0x4102a5 */
  esp -= 4; W32(esp, 0x422adbu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 422adb: mov dword ptr [eax], 0x28 */
  W32((uint32_t)(eax), 0x28u);
L_422ae1: /* 422ae1: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 422ae4: jmp 0x422b21 */
  goto L_422b21;
L_422aef: /* 422aef: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422af2: jne 0x422ab0 */
  if (!zf) goto L_422ab0;
L_422af4: /* 422af4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 422af6: call 0x4011b7 */
  esp -= 4; W32(esp, 0x422afbu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 422afb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422afc: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 422b03: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 422b05: call 0x4111c6 */
  esp -= 4; W32(esp, 0x422b0au); SPILL(); f_4111c6(); if (g_unwind) return; RELOAD();
/* 422b0a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422b0b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 422b0f: call 0x422b16 */
  esp -= 4; W32(esp, 0x422b14u); SPILL(); f_422b16(); if (g_unwind) return; RELOAD();
/* 422b14: jmp 0x422ab0 */
  goto L_422ab0;
L_422b1f: /* 422b1f: xor eax, eax */
  eax = 0;
L_422b21: /* 422b21: call 0x40105a */
  esp -= 4; W32(esp, 0x422b26u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 422b26: ret  */
  esp += 4; SPILL(); return;
}

void f_422ae6(void) {
  LOAD_REGS();
L_422ae6: /* 422ae6: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 422ae8: call 0x4011d9 */
  esp -= 4; W32(esp, 0x422aedu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 422aed: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422aee: ret  */
  esp += 4; SPILL(); return;
}

void f_422b16(void) {
  LOAD_REGS();
L_422b16: /* 422b16: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 422b18: call 0x4011d9 */
  esp -= 4; W32(esp, 0x422b1du); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 422b1d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422b1e: ret  */
  esp += 4; SPILL(); return;
}

void f_422b27(void) {
  LOAD_REGS();
L_422b27: /* 422b27: call 0x4102a5 */
  esp -= 4; W32(esp, 0x422b2cu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 422b2c: mov dword ptr [eax], 0x28 */
  W32((uint32_t)(eax), 0x28u);
/* 422b32: xor eax, eax */
  eax = 0;
/* 422b34: ret  */
  esp += 4; SPILL(); return;
}

void f_422b35(void) {
  LOAD_REGS();
L_422b35: /* 422b35: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 422b37: push 0x4408e0 */
  { uint32_t v = 0x4408e0u; esp -= 4; W32(esp, v); }
/* 422b3c: call 0x40101f */
  esp -= 4; W32(esp, 0x422b41u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 422b41: mov dword ptr [ebp - 0x1c], 0xfffffffe */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xfffffffeu);
/* 422b48: xor ebx, ebx */
  ebx = 0;
/* 422b4a: mov word ptr [ebp - 0x2e], bx */
  W16((uint32_t)(ebp + 0xffffffd2u), (ebx & 0xffffu));
/* 422b4e: mov byte ptr [ebp - 0x2f], bl */
  W8((uint32_t)(ebp + 0xffffffd1u), (ebx & 0xffu));
/* 422b51: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 422b54: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 422b56: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 422b59: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422b5b: jne 0x422ba2 */
  if (!zf) goto L_422ba2;
L_422b5d: /* 422b5d: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 422b60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422b61: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 422b67: call dword ptr [0x4391f0] */
  esp -= 4; W32(esp, 0x422b6du); SPILL(); call_ind(R32(0x4391f0u)); if (g_unwind) return; /* KERNEL32!HeapWalk */ RELOAD();
/* 422b6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422b6f: jne 0x422c28 */
  if (!zf) goto L_422c28;
L_422b75: /* 422b75: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x422b7bu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 422b7b: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 422b7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 422b7e: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422b80: jne 0x422b9b */
  if (!zf) goto L_422b9b;
L_422b82: /* 422b82: call 0x4102ae */
  esp -= 4; W32(esp, 0x422b87u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 422b87: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 422b89: call 0x4102a5 */
  esp -= 4; W32(esp, 0x422b8eu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 422b8e: mov dword ptr [eax], 0x28 */
  W32((uint32_t)(eax), 0x28u);
L_422b94: /* 422b94: push -5 */
  { uint32_t v = 0xfffffffbu; esp -= 4; W32(esp, v); }
/* 422b96: jmp 0x422c25 */
  goto L_422c25;
L_422b9b: /* 422b9b: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 422b9d: jmp 0x422c25 */
  goto L_422c25;
L_422ba2: /* 422ba2: cmp dword ptr [esi + 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422ba6: jne 0x422bc0 */
  if (!zf) goto L_422bc0;
L_422ba8: /* 422ba8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422ba9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 422baa: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 422bb0: call dword ptr [0x4391e8] */
  esp -= 4; W32(esp, 0x422bb6u); SPILL(); call_ind(R32(0x4391e8u)); if (g_unwind) return; /* KERNEL32!HeapValidate */ RELOAD();
/* 422bb6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422bb8: je 0x422c23 */
  if (zf) goto L_422c23;
L_422bba: /* 422bba: mov word ptr [ebp - 0x2e], 4 */
  W16((uint32_t)(ebp + 0xffffffd2u), 0x4u);
L_422bc0: /* 422bc0: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 422bc3: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 422bc6: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 422bc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422bca: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 422bd0: call dword ptr [0x4391f0] */
  esp -= 4; W32(esp, 0x422bd6u); SPILL(); call_ind(R32(0x4391f0u)); if (g_unwind) return; /* KERNEL32!HeapWalk */ RELOAD();
/* 422bd6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422bd8: jne 0x422be1 */
  if (!zf) goto L_422be1;
L_422bda: /* 422bda: mov dword ptr [ebp - 0x3c], 1 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x1u);
L_422be1: /* 422be1: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 422be5: jmp 0x422bfe */
  goto L_422bfe;
L_422bfe: /* 422bfe: cmp dword ptr [ebp - 0x3c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422c02: jne 0x422c1d */
  if (!zf) goto L_422c1d;
L_422c04: /* 422c04: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x422c0au); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 422c0a: cmp eax, 0x103 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x103u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422c0f: je 0x422b94 */
  if (zf) goto L_422b94;
L_422c11: /* 422c11: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 422c13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 422c14: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422c16: jne 0x422c23 */
  if (!zf) goto L_422c23;
L_422c18: /* 422c18: jmp 0x422b82 */
  goto L_422b82;
L_422c1d: /* 422c1d: cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422c21: jne 0x422c28 */
  if (!zf) goto L_422c28;
L_422c23: /* 422c23: push -4 */
  { uint32_t v = 0xfffffffcu; esp -= 4; W32(esp, v); }
L_422c25: /* 422c25: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 422c26: jmp 0x422c49 */
  goto L_422c49;
L_422c28: /* 422c28: test byte ptr [ebp - 0x2e], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd2u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 422c2c: jne 0x422bc0 */
  if (!zf) goto L_422bc0;
L_422c2e: /* 422c2e: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 422c31: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 422c33: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 422c36: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 422c39: movzx eax, byte ptr [ebp - 0x2e] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffd2u)));
/* 422c3d: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 422c40: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 422c43: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 422c46: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_422c49: /* 422c49: call 0x40105a */
  esp -= 4; W32(esp, 0x422c4eu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 422c4e: ret  */
  esp += 4; SPILL(); return;
}

void f_422b9b(void) {
  LOAD_REGS();
L_422b9b: /* 422b9b: push -3 */
  { uint32_t v = 0xfffffffdu; esp -= 4; W32(esp, v); }
/* 422b9d: jmp 0x422c25 */
  goto L_422c25;
L_422c25: /* 422c25: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 422c26: jmp 0x422c49 */
  goto L_422c49;
L_422c49: /* 422c49: call 0x40105a */
  esp -= 4; W32(esp, 0x422c4eu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 422c4e: ret  */
  esp += 4; SPILL(); return;
}

void f_422ba2(void) {
  LOAD_REGS();
  goto L_422ba2;
L_422b82: /* 422b82: call 0x4102ae */
  esp -= 4; W32(esp, 0x422b87u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 422b87: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 422b89: call 0x4102a5 */
  esp -= 4; W32(esp, 0x422b8eu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 422b8e: mov dword ptr [eax], 0x28 */
  W32((uint32_t)(eax), 0x28u);
L_422b94: /* 422b94: push -5 */
  { uint32_t v = 0xfffffffbu; esp -= 4; W32(esp, v); }
/* 422b96: jmp 0x422c25 */
  goto L_422c25;
L_422ba2: /* 422ba2: cmp dword ptr [esi + 8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422ba6: jne 0x422bc0 */
  if (!zf) goto L_422bc0;
L_422ba8: /* 422ba8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422ba9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 422baa: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 422bb0: call dword ptr [0x4391e8] */
  esp -= 4; W32(esp, 0x422bb6u); SPILL(); call_ind(R32(0x4391e8u)); if (g_unwind) return; /* KERNEL32!HeapValidate */ RELOAD();
/* 422bb6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422bb8: je 0x422c23 */
  if (zf) goto L_422c23;
L_422bba: /* 422bba: mov word ptr [ebp - 0x2e], 4 */
  W16((uint32_t)(ebp + 0xffffffd2u), 0x4u);
L_422bc0: /* 422bc0: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 422bc3: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 422bc6: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 422bc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422bca: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 422bd0: call dword ptr [0x4391f0] */
  esp -= 4; W32(esp, 0x422bd6u); SPILL(); call_ind(R32(0x4391f0u)); if (g_unwind) return; /* KERNEL32!HeapWalk */ RELOAD();
/* 422bd6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422bd8: jne 0x422be1 */
  if (!zf) goto L_422be1;
L_422bda: /* 422bda: mov dword ptr [ebp - 0x3c], 1 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x1u);
L_422be1: /* 422be1: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 422be5: jmp 0x422bfe */
  goto L_422bfe;
L_422bfe: /* 422bfe: cmp dword ptr [ebp - 0x3c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422c02: jne 0x422c1d */
  if (!zf) goto L_422c1d;
L_422c04: /* 422c04: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x422c0au); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 422c0a: cmp eax, 0x103 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x103u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422c0f: je 0x422b94 */
  if (zf) goto L_422b94;
L_422c11: /* 422c11: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 422c13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 422c14: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422c16: jne 0x422c23 */
  if (!zf) goto L_422c23;
L_422c18: /* 422c18: jmp 0x422b82 */
  goto L_422b82;
L_422c1d: /* 422c1d: cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422c21: jne 0x422c28 */
  if (!zf) goto L_422c28;
L_422c23: /* 422c23: push -4 */
  { uint32_t v = 0xfffffffcu; esp -= 4; W32(esp, v); }
L_422c25: /* 422c25: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 422c26: jmp 0x422c49 */
  goto L_422c49;
L_422c28: /* 422c28: test byte ptr [ebp - 0x2e], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd2u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 422c2c: jne 0x422bc0 */
  if (!zf) goto L_422bc0;
L_422c2e: /* 422c2e: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 422c31: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 422c33: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 422c36: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 422c39: movzx eax, byte ptr [ebp - 0x2e] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffd2u)));
/* 422c3d: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 422c40: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 422c43: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 422c46: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_422c49: /* 422c49: call 0x40105a */
  esp -= 4; W32(esp, 0x422c4eu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 422c4e: ret  */
  esp += 4; SPILL(); return;
}

void f_422be7(void) {
  LOAD_REGS();
L_422be7: /* 422be7: xor eax, eax */
  eax = 0;
/* 422be9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 422bea: ret  */
  esp += 4; SPILL(); return;
}

void f_422beb(void) {
  LOAD_REGS();
  goto L_422beb;
L_422b82: /* 422b82: call 0x4102ae */
  esp -= 4; W32(esp, 0x422b87u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 422b87: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 422b89: call 0x4102a5 */
  esp -= 4; W32(esp, 0x422b8eu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 422b8e: mov dword ptr [eax], 0x28 */
  W32((uint32_t)(eax), 0x28u);
L_422b94: /* 422b94: push -5 */
  { uint32_t v = 0xfffffffbu; esp -= 4; W32(esp, v); }
/* 422b96: jmp 0x422c25 */
  goto L_422c25;
L_422bc0: /* 422bc0: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 422bc3: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 422bc6: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 422bc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422bca: push dword ptr [0x44a848] */
  { uint32_t v = R32((uint32_t)(0x44a848u)); esp -= 4; W32(esp, v); }
/* 422bd0: call dword ptr [0x4391f0] */
  esp -= 4; W32(esp, 0x422bd6u); SPILL(); call_ind(R32(0x4391f0u)); if (g_unwind) return; /* KERNEL32!HeapWalk */ RELOAD();
/* 422bd6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422bd8: jne 0x422be1 */
  if (!zf) goto L_422be1;
L_422bda: /* 422bda: mov dword ptr [ebp - 0x3c], 1 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x1u);
L_422be1: /* 422be1: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 422be5: jmp 0x422bfe */
  goto L_422bfe;
L_422beb: /* 422beb: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 422bee: mov dword ptr [ebp - 0x3c], 2 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x2u);
/* 422bf5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 422bf9: xor ebx, ebx */
  ebx = 0;
/* 422bfb: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_422bfe: /* 422bfe: cmp dword ptr [ebp - 0x3c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422c02: jne 0x422c1d */
  if (!zf) goto L_422c1d;
L_422c04: /* 422c04: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x422c0au); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 422c0a: cmp eax, 0x103 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x103u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422c0f: je 0x422b94 */
  if (zf) goto L_422b94;
L_422c11: /* 422c11: push 0x78 */
  { uint32_t v = 0x78u; esp -= 4; W32(esp, v); }
/* 422c13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 422c14: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422c16: jne 0x422c23 */
  if (!zf) goto L_422c23;
L_422c18: /* 422c18: jmp 0x422b82 */
  goto L_422b82;
L_422c1d: /* 422c1d: cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422c21: jne 0x422c28 */
  if (!zf) goto L_422c28;
L_422c23: /* 422c23: push -4 */
  { uint32_t v = 0xfffffffcu; esp -= 4; W32(esp, v); }
L_422c25: /* 422c25: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 422c26: jmp 0x422c49 */
  goto L_422c49;
L_422c28: /* 422c28: test byte ptr [ebp - 0x2e], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffd2u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 422c2c: jne 0x422bc0 */
  if (!zf) goto L_422bc0;
L_422c2e: /* 422c2e: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 422c31: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 422c33: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 422c36: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 422c39: movzx eax, byte ptr [ebp - 0x2e] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffd2u)));
/* 422c3d: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 422c40: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 422c43: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 422c46: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_422c49: /* 422c49: call 0x40105a */
  esp -= 4; W32(esp, 0x422c4eu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 422c4e: ret  */
  esp += 4; SPILL(); return;
}

void f_422c4f(void) {
  LOAD_REGS();
L_422c4f: /* 422c4f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 422c50: mov ebp, esp */
  ebp = esp;
/* 422c52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 422c53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 422c54: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 422c55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 422c56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 422c57: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 422c59: call 0x4011b7 */
  esp -= 4; W32(esp, 0x422c5eu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 422c5e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 422c61: xor ebx, ebx */
  ebx = 0;
/* 422c63: mov byte ptr [esi + 1], bl */
  W8((uint32_t)(esi + 0x1u), (ebx & 0xffu));
/* 422c66: cmp dword ptr [0x44ab9c], -2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ab9cu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422c6d: lea edi, [esi + 2] */
  edi = (uint32_t)(esi + 0x2u);
/* 422c70: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422c71: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 422c74: jne 0x422c7b */
  if (!zf) goto L_422c7b;
L_422c76: /* 422c76: call 0x4257f4 */
  esp -= 4; W32(esp, 0x422c7bu); SPILL(); f_4257f4(); if (g_unwind) return; RELOAD();
L_422c7b: /* 422c7b: mov eax, dword ptr [0x44ab9c] */
  eax = R32((uint32_t)(0x44ab9cu));
/* 422c80: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422c83: je 0x422d1a */
  if (zf) goto L_422d1a;
L_422c89: /* 422c89: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 422c8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 422c8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422c8e: call dword ptr [0x4391fc] */
  esp -= 4; W32(esp, 0x422c94u); SPILL(); call_ind(R32(0x4391fcu)); if (g_unwind) return; /* KERNEL32!GetConsoleMode */ RELOAD();
/* 422c94: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 422c96: push dword ptr [0x44ab9c] */
  { uint32_t v = R32((uint32_t)(0x44ab9cu)); esp -= 4; W32(esp, v); }
/* 422c9c: call dword ptr [0x4391f8] */
  esp -= 4; W32(esp, 0x422ca2u); SPILL(); call_ind(R32(0x4391f8u)); if (g_unwind) return; /* KERNEL32!SetConsoleMode */ RELOAD();
/* 422ca2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 422ca3: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 422ca6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422ca7: movzx eax, byte ptr [esi] */
  eax = (uint32_t)(R8((uint32_t)(esi)));
/* 422caa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422cab: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 422cae: push dword ptr [0x44ab9c] */
  { uint32_t v = R32((uint32_t)(0x44ab9cu)); esp -= 4; W32(esp, v); }
/* 422cb4: call dword ptr [0x4391f4] */
  esp -= 4; W32(esp, 0x422cbau); SPILL(); call_ind(R32(0x4391f4u)); if (g_unwind) return; /* KERNEL32!ReadConsoleA */ RELOAD();
/* 422cba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422cbc: jne 0x422cc1 */
  if (!zf) goto L_422cc1;
L_422cbe: /* 422cbe: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
L_422cc1: /* 422cc1: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422cc4: je 0x422d08 */
  if (zf) goto L_422d08;
L_422cc6: /* 422cc6: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 422cc9: lea ecx, [eax + esi] */
  ecx = (uint32_t)(eax + esi);
/* 422ccc: cmp byte ptr [ecx], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 422ccf: jne 0x422cda */
  if (!zf) goto L_422cda;
L_422cd1: /* 422cd1: sub al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 422cd3: mov byte ptr [esi + 1], al */
  W8((uint32_t)(esi + 0x1u), (eax & 0xffu));
/* 422cd6: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 422cd8: jmp 0x422d08 */
  goto L_422d08;
L_422cda: /* 422cda: movzx edx, byte ptr [esi] */
  edx = (uint32_t)(R8((uint32_t)(esi)));
/* 422cdd: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422cdf: jne 0x422cf1 */
  if (!zf) goto L_422cf1;
L_422ce1: /* 422ce1: cmp byte ptr [ecx + 1], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 422ce5: jne 0x422cf1 */
  if (!zf) goto L_422cf1;
L_422ce7: /* 422ce7: dec al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 422ce9: mov byte ptr [esi + 1], al */
  W8((uint32_t)(esi + 0x1u), (eax & 0xffu));
/* 422cec: mov byte ptr [ecx + 1], bl */
  W8((uint32_t)(ecx + 0x1u), (ebx & 0xffu));
/* 422cef: jmp 0x422d08 */
  goto L_422d08;
L_422cf1: /* 422cf1: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422cf4: jne 0x422d02 */
  if (!zf) goto L_422d02;
L_422cf6: /* 422cf6: cmp byte ptr [edi], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 422cf9: jne 0x422d02 */
  if (!zf) goto L_422d02;
L_422cfb: /* 422cfb: mov byte ptr [edi], bl */
  W8((uint32_t)(edi), (ebx & 0xffu));
/* 422cfd: mov byte ptr [esi + 1], bl */
  W8((uint32_t)(esi + 0x1u), (ebx & 0xffu));
/* 422d00: jmp 0x422d08 */
  goto L_422d08;
L_422d02: /* 422d02: mov byte ptr [esi + 1], al */
  W8((uint32_t)(esi + 0x1u), (eax & 0xffu));
/* 422d05: mov byte ptr [ecx + 2], bl */
  W8((uint32_t)(ecx + 0x2u), (ebx & 0xffu));
L_422d08: /* 422d08: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 422d0b: push dword ptr [0x44ab9c] */
  { uint32_t v = R32((uint32_t)(0x44ab9cu)); esp -= 4; W32(esp, v); }
/* 422d11: call dword ptr [0x4391f8] */
  esp -= 4; W32(esp, 0x422d17u); SPILL(); call_ind(R32(0x4391f8u)); if (g_unwind) return; /* KERNEL32!SetConsoleMode */ RELOAD();
/* 422d17: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_422d1a: /* 422d1a: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 422d1c: call 0x4011d9 */
  esp -= 4; W32(esp, 0x422d21u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 422d21: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422d22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 422d23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 422d24: mov eax, ebx */
  eax = ebx;
/* 422d26: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 422d27: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 422d28: ret  */
  esp += 4; SPILL(); return;
}

void f_422d29(void) {
  LOAD_REGS();
L_422d29: /* 422d29: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 422d2a: mov ebp, esp */
  ebp = esp;
/* 422d2c: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 422d2f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 422d30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 422d31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 422d32: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 422d34: call 0x4011b7 */
  esp -= 4; W32(esp, 0x422d39u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 422d39: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 422d3c: xor edi, edi */
  edi = 0;
/* 422d3e: mov word ptr [esi + 2], di */
  W16((uint32_t)(esi + 0x2u), (edi & 0xffffu));
/* 422d42: cmp dword ptr [0x44ab9c], -2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ab9cu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422d49: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 422d4c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422d4d: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 422d50: jne 0x422d57 */
  if (!zf) goto L_422d57;
L_422d52: /* 422d52: call 0x4257f4 */
  esp -= 4; W32(esp, 0x422d57u); SPILL(); f_4257f4(); if (g_unwind) return; RELOAD();
L_422d57: /* 422d57: mov eax, dword ptr [0x44ab9c] */
  eax = R32((uint32_t)(0x44ab9cu));
/* 422d5c: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422d5f: jne 0x422d68 */
  if (!zf) goto L_422d68;
L_422d61: /* 422d61: xor esi, esi */
  esi = 0;
/* 422d63: jmp 0x422fcd */
  goto L_422fcd;
L_422d68: /* 422d68: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 422d6b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 422d6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422d6d: call dword ptr [0x4391fc] */
  esp -= 4; W32(esp, 0x422d73u); SPILL(); call_ind(R32(0x4391fcu)); if (g_unwind) return; /* KERNEL32!GetConsoleMode */ RELOAD();
/* 422d73: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 422d75: push dword ptr [0x44ab9c] */
  { uint32_t v = R32((uint32_t)(0x44ab9cu)); esp -= 4; W32(esp, v); }
/* 422d7b: call dword ptr [0x4391f8] */
  esp -= 4; W32(esp, 0x422d81u); SPILL(); call_ind(R32(0x4391f8u)); if (g_unwind) return; /* KERNEL32!SetConsoleMode */ RELOAD();
/* 422d81: cmp dword ptr [0x44dd54], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44dd54u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422d87: je 0x422e3b */
  if (zf) goto L_422e3b;
L_422d8d: /* 422d8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 422d8e: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 422d91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422d92: movzx eax, word ptr [esi] */
  eax = (uint32_t)(R16((uint32_t)(esi)));
/* 422d95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422d96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 422d97: push dword ptr [0x44ab9c] */
  { uint32_t v = R32((uint32_t)(0x44ab9cu)); esp -= 4; W32(esp, v); }
/* 422d9d: call dword ptr [0x439208] */
  esp -= 4; W32(esp, 0x422da3u); SPILL(); call_ind(R32(0x439208u)); if (g_unwind) return; /* KERNEL32!ReadConsoleW */ RELOAD();
/* 422da3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422da5: jne 0x422dc6 */
  if (!zf) goto L_422dc6;
L_422da7: /* 422da7: cmp dword ptr [0x44dd54], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44dd54u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422dae: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 422db1: jne 0x422e2f */
  if (!zf) goto L_422e2f;
L_422db3: /* 422db3: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x422db9u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 422db9: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422dbc: jne 0x422e2f */
  if (!zf) goto L_422e2f;
L_422dbe: /* 422dbe: mov dword ptr [0x44dd54], edi */
  W32((uint32_t)(0x44dd54u), edi);
/* 422dc4: jmp 0x422e3b */
  goto L_422e3b;
L_422dc6: /* 422dc6: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422dc8: mov dword ptr [0x44dd54], 1 */
  W32((uint32_t)(0x44dd54u), 0x1u);
/* 422dd2: je 0x422fbb */
  if (zf) goto L_422fbb;
L_422dd8: /* 422dd8: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 422ddb: lea ecx, [esi + eax*2] */
  ecx = (uint32_t)(esi + eax*2);
/* 422dde: cmp word ptr [ecx], 0xd */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 422de2: jne 0x422df3 */
  if (!zf) goto L_422df3;
L_422de4: /* 422de4: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 422de7: mov word ptr [esi + 2], ax */
  W16((uint32_t)(esi + 0x2u), (eax & 0xffffu));
/* 422deb: mov word ptr [ecx], di */
  W16((uint32_t)(ecx), (edi & 0xffffu));
/* 422dee: jmp 0x422fbb */
  goto L_422fbb;
L_422df3: /* 422df3: movzx edx, word ptr [esi] */
  edx = (uint32_t)(R16((uint32_t)(esi)));
/* 422df6: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422df8: jne 0x422e0f */
  if (!zf) goto L_422e0f;
L_422dfa: /* 422dfa: cmp word ptr [ecx + 2], 0xd */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x2u))); uint16_t b = (uint16_t)(0xdu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 422dff: jne 0x422e0f */
  if (!zf) goto L_422e0f;
L_422e01: /* 422e01: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 422e02: mov word ptr [esi + 2], ax */
  W16((uint32_t)(esi + 0x2u), (eax & 0xffffu));
/* 422e06: mov word ptr [ecx + 2], di */
  W16((uint32_t)(ecx + 0x2u), (edi & 0xffffu));
/* 422e0a: jmp 0x422fbb */
  goto L_422fbb;
L_422e0f: /* 422e0f: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422e12: jne 0x422e26 */
  if (!zf) goto L_422e26;
L_422e14: /* 422e14: cmp word ptr [ebx], 0xa */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 422e18: jne 0x422e26 */
  if (!zf) goto L_422e26;
L_422e1a: /* 422e1a: mov word ptr [ebx], di */
  W16((uint32_t)(ebx), (edi & 0xffffu));
/* 422e1d: mov word ptr [esi + 2], di */
  W16((uint32_t)(esi + 0x2u), (edi & 0xffffu));
/* 422e21: jmp 0x422fbb */
  goto L_422fbb;
L_422e26: /* 422e26: mov word ptr [esi + 2], ax */
  W16((uint32_t)(esi + 0x2u), (eax & 0xffffu));
/* 422e2a: mov word ptr [esi + eax*2 + 4], di */
  W16((uint32_t)(esi + eax*2 + 0x4u), (edi & 0xffffu));
L_422e2f: /* 422e2f: cmp dword ptr [0x44dd54], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44dd54u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422e35: jne 0x422fbb */
  if (!zf) goto L_422fbb;
L_422e3b: /* 422e3b: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 422e3e: call dword ptr [0x439204] */
  esp -= 4; W32(esp, 0x422e44u); SPILL(); call_ind(R32(0x439204u)); if (g_unwind) return; /* KERNEL32!GetConsoleCP */ RELOAD();
/* 422e44: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
L_422e47: /* 422e47: cmp dword ptr [0x44f4dc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f4dcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422e4d: jne 0x422eb8 */
  if (!zf) goto L_422eb8;
L_422e4f: /* 422e4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 422e50: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 422e53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422e54: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 422e56: push 0x44f498 */
  { uint32_t v = 0x44f498u; esp -= 4; W32(esp, v); }
/* 422e5b: push dword ptr [0x44ab9c] */
  { uint32_t v = R32((uint32_t)(0x44ab9cu)); esp -= 4; W32(esp, v); }
/* 422e61: call dword ptr [0x4391f4] */
  esp -= 4; W32(esp, 0x422e67u); SPILL(); call_ind(R32(0x4391f4u)); if (g_unwind) return; /* KERNEL32!ReadConsoleA */ RELOAD();
/* 422e67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422e69: jne 0x422e6e */
  if (!zf) goto L_422e6e;
L_422e6b: /* 422e6b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
L_422e6e: /* 422e6e: cmp dword ptr [ebp - 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422e71: je 0x422eb8 */
  if (zf) goto L_422eb8;
L_422e73: /* 422e73: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 422e76: lea eax, [ecx + 0x44f496] */
  eax = (uint32_t)(ecx + 0x44f496u);
/* 422e7c: cmp byte ptr [eax], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 422e7f: jne 0x422e86 */
  if (!zf) goto L_422e86;
L_422e81: /* 422e81: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 422e84: jmp 0x422eb8 */
  goto L_422eb8;
L_422e86: /* 422e86: cmp ecx, 0x41 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x41u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422e89: jne 0x422e9d */
  if (!zf) goto L_422e9d;
L_422e8b: /* 422e8b: cmp byte ptr [0x44f4d8], 0xd */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44f4d8u))); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 422e92: jne 0x422eb1 */
  if (!zf) goto L_422eb1;
L_422e94: /* 422e94: and byte ptr [0x44f4d8], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44f4d8u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(0x44f4d8u), r);
  }
/* 422e9b: jmp 0x422eb8 */
  goto L_422eb8;
L_422e9d: /* 422e9d: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422ea0: jne 0x422eb1 */
  if (!zf) goto L_422eb1;
L_422ea2: /* 422ea2: cmp word ptr [esi], 0xa */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0xau);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 422ea6: jne 0x422eb1 */
  if (!zf) goto L_422eb1;
L_422ea8: /* 422ea8: and byte ptr [0x44f498], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44f498u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(0x44f498u), r);
  }
/* 422eaf: jmp 0x422eb8 */
  goto L_422eb8;
L_422eb1: /* 422eb1: and byte ptr [ecx + 0x44f498], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x44f498u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ecx + 0x44f498u), r);
  }
L_422eb8: /* 422eb8: xor ebx, ebx */
  ebx = 0;
/* 422eba: cmp byte ptr [0x44f498], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44f498u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 422ec0: je 0x422f24 */
  if (zf) goto L_422f24;
L_422ec2: /* 422ec2: cmp ebx, 0x40 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 422ec5: jae 0x422f24 */
  if (!cf) goto L_422f24;
L_422ec7: /* 422ec7: movzx eax, word ptr [esi] */
  eax = (uint32_t)(R16((uint32_t)(esi)));
/* 422eca: cmp dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 422ecd: jae 0x422f24 */
  if (!cf) goto L_422f24;
L_422ecf: /* 422ecf: xor eax, eax */
  eax = 0;
/* 422ed1: lea edi, [ebx + 0x44f498] */
  edi = (uint32_t)(ebx + 0x44f498u);
/* 422ed7: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 422ed9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422eda: call dword ptr [0x439204] */
  esp -= 4; W32(esp, 0x422ee0u); SPILL(); call_ind(R32(0x439204u)); if (g_unwind) return; /* KERNEL32!GetConsoleCP */ RELOAD();
/* 422ee0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422ee1: call dword ptr [0x439200] */
  esp -= 4; W32(esp, 0x422ee7u); SPILL(); call_ind(R32(0x439200u)); if (g_unwind) return; /* KERNEL32!IsDBCSLeadByteEx */ RELOAD();
/* 422ee7: xor ecx, ecx */
  ecx = 0;
/* 422ee9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422eeb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 422eee: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 422ef1: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 422ef2: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* 422ef5: movzx ecx, word ptr [esi] */
  ecx = (uint32_t)(R16((uint32_t)(esi)));
/* 422ef8: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 422efa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 422efb: lea eax, [esi + eax*2 + 4] */
  eax = (uint32_t)(esi + eax*2 + 0x4u);
/* 422eff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422f00: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 422f03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 422f04: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 422f06: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 422f09: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x422f0fu); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 422f0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 422f11: je 0x422f16 */
  if (zf) goto L_422f16;
L_422f13: /* 422f13: add dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
L_422f16: /* 422f16: add ebx, dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 422f19: xor edi, edi */
  edi = 0;
/* 422f1b: cmp byte ptr [ebx + 0x44f498], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x44f498u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 422f22: jne 0x422ec2 */
  if (!zf) goto L_422ec2;
L_422f24: /* 422f24: cmp dword ptr [0x44f4dc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f4dcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422f2a: je 0x422f51 */
  if (zf) goto L_422f51;
L_422f2c: /* 422f2c: push 0x44f498 */
  { uint32_t v = 0x44f498u; esp -= 4; W32(esp, v); }
/* 422f31: call 0x402493 */
  esp -= 4; W32(esp, 0x422f36u); SPILL(); hle_strlen(); RELOAD();
/* 422f36: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422f38: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422f39: jne 0x422f51 */
  if (!zf) goto L_422f51;
L_422f3b: /* 422f3b: cmp dword ptr [0x44f4e0], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f4e0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422f41: mov dword ptr [0x44f4dc], edi */
  W32((uint32_t)(0x44f4dcu), edi);
/* 422f47: je 0x422f62 */
  if (zf) goto L_422f62;
L_422f49: /* 422f49: mov dword ptr [0x44f4e0], edi */
  W32((uint32_t)(0x44f4e0u), edi);
/* 422f4f: jmp 0x422f56 */
  goto L_422f56;
L_422f51: /* 422f51: cmp ebx, 0x40 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 422f54: jb 0x422f62 */
  if (cf) goto L_422f62;
L_422f56: /* 422f56: movzx eax, word ptr [esi] */
  eax = (uint32_t)(R16((uint32_t)(esi)));
/* 422f59: cmp dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 422f5c: jb 0x422e47 */
  if (cf) goto L_422e47;
L_422f62: /* 422f62: push 0x44f498 */
  { uint32_t v = 0x44f498u; esp -= 4; W32(esp, v); }
/* 422f67: call 0x402493 */
  esp -= 4; W32(esp, 0x422f6cu); SPILL(); hle_strlen(); RELOAD();
/* 422f6c: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 422f6e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422f6f: jae 0x422faf */
  if (!cf) goto L_422faf;
L_422f71: /* 422f71: push 0x44f498 */
  { uint32_t v = 0x44f498u; esp -= 4; W32(esp, v); }
/* 422f76: mov dword ptr [0x44f4dc], 1 */
  W32((uint32_t)(0x44f4dcu), 0x1u);
/* 422f80: call 0x402493 */
  esp -= 4; W32(esp, 0x422f85u); SPILL(); hle_strlen(); RELOAD();
/* 422f85: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 422f88: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422f89: jne 0x422f95 */
  if (!zf) goto L_422f95;
L_422f8b: /* 422f8b: mov dword ptr [0x44f4e0], 1 */
  W32((uint32_t)(0x44f4e0u), 0x1u);
L_422f95: /* 422f95: push 0x41 */
  { uint32_t v = 0x41u; esp -= 4; W32(esp, v); }
/* 422f97: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 422f98: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 422f9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422f9b: lea eax, [ebx + 0x44f498] */
  eax = (uint32_t)(ebx + 0x44f498u);
/* 422fa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 422fa2: push 0x44f498 */
  { uint32_t v = 0x44f498u; esp -= 4; W32(esp, v); }
/* 422fa7: call 0x403f12 */
  esp -= 4; W32(esp, 0x422facu); SPILL(); hle_memcpy(); RELOAD();
/* 422fac: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_422faf: /* 422faf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 422fb2: mov word ptr [esi + eax*2 + 4], di */
  W16((uint32_t)(esi + eax*2 + 0x4u), (edi & 0xffffu));
/* 422fb7: mov word ptr [esi + 2], ax */
  W16((uint32_t)(esi + 0x2u), (eax & 0xffffu));
L_422fbb: /* 422fbb: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 422fbe: push dword ptr [0x44ab9c] */
  { uint32_t v = R32((uint32_t)(0x44ab9cu)); esp -= 4; W32(esp, v); }
/* 422fc4: call dword ptr [0x4391f8] */
  esp -= 4; W32(esp, 0x422fcau); SPILL(); call_ind(R32(0x4391f8u)); if (g_unwind) return; /* KERNEL32!SetConsoleMode */ RELOAD();
/* 422fca: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
L_422fcd: /* 422fcd: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 422fcf: call 0x4011d9 */
  esp -= 4; W32(esp, 0x422fd4u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 422fd4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 422fd5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 422fd6: mov eax, esi */
  eax = esi;
/* 422fd8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 422fd9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 422fda: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 422fdb: ret  */
  esp += 4; SPILL(); return;
}

void f_422fdc(void) {
  LOAD_REGS();
L_422fdc: /* 422fdc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 422fdd: mov ebp, esp */
  ebp = esp;
/* 422fdf: mov eax, 0x100c */
  eax = 0x100cu;
/* 422fe4: call 0x4014ee */
  esp -= 4; W32(esp, 0x422fe9u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 422fe9: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 422fee: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 422ff1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 422ff2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 422ff3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 422ff5: xor esi, esi */
  esi = 0;
/* 422ff7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 422ff8: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 422ffb: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 422ffe: call 0x415c2e */
  esp -= 4; W32(esp, 0x423003u); SPILL(); f_415c2e(); if (g_unwind) return; RELOAD();
/* 423003: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 423006: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 423009: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42300b: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 42300e: je 0x423106 */
  if (zf) goto L_423106;
L_423014: /* 423014: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 423016: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 423017: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42301a: call 0x415c2e */
  esp -= 4; W32(esp, 0x42301fu); SPILL(); f_415c2e(); if (g_unwind) return; RELOAD();
/* 42301f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 423022: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423024: je 0x423106 */
  if (zf) goto L_423106;
L_42302a: /* 42302a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42302b: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 42302e: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 423030: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 423032: jle 0x4230a9 */
  if ((zf || sf != of)) goto L_4230a9;
L_423034: /* 423034: mov ebx, 0x1000 */
  ebx = 0x1000u;
/* 423039: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42303a: lea eax, [ebp - 0x100c] */
  eax = (uint32_t)(ebp + 0xffffeff4u);
/* 423040: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 423041: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423042: call 0x4010fd */
  esp -= 4; W32(esp, 0x423047u); SPILL(); hle_memset(); RELOAD();
/* 423047: push 0x8000 */
  { uint32_t v = 0x8000u; esp -= 4; W32(esp, v); }
/* 42304c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42304f: call 0x42528b */
  esp -= 4; W32(esp, 0x423054u); SPILL(); f_42528b(); if (g_unwind) return; RELOAD();
/* 423054: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 423057: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
L_42305a: /* 42305a: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42305c: mov eax, ebx */
  eax = ebx;
/* 42305e: jge 0x423062 */
  if ((sf == of)) goto L_423062;
L_423060: /* 423060: mov eax, edi */
  eax = edi;
L_423062: /* 423062: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423063: lea eax, [ebp - 0x100c] */
  eax = (uint32_t)(ebp + 0xffffeff4u);
/* 423069: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42306a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42306d: call 0x4157da */
  esp -= 4; W32(esp, 0x423072u); SPILL(); f_4157da(); if (g_unwind) return; RELOAD();
/* 423072: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 423075: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423078: je 0x423082 */
  if (zf) goto L_423082;
L_42307a: /* 42307a: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 42307c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 42307e: jg 0x42305a */
  if ((!zf && sf == of)) goto L_42305a;
L_423080: /* 423080: jmp 0x42309a */
  goto L_42309a;
L_423082: /* 423082: call 0x4102ae */
  esp -= 4; W32(esp, 0x423087u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 423087: cmp dword ptr [eax], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42308a: jne 0x423097 */
  if (!zf) goto L_423097;
L_42308c: /* 42308c: call 0x4102a5 */
  esp -= 4; W32(esp, 0x423091u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 423091: mov dword ptr [eax], 0xd */
  W32((uint32_t)(eax), 0xdu);
L_423097: /* 423097: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_42309a: /* 42309a: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 42309d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4230a0: call 0x42528b */
  esp -= 4; W32(esp, 0x4230a5u); SPILL(); f_42528b(); if (g_unwind) return; RELOAD();
/* 4230a5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4230a6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4230a7: jmp 0x4230f1 */
  goto L_4230f1;
L_4230a9: /* 4230a9: jge 0x4230f1 */
  if ((sf == of)) goto L_4230f1;
L_4230ab: /* 4230ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4230ad: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4230b0: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4230b3: call 0x415c2e */
  esp -= 4; W32(esp, 0x4230b8u); SPILL(); f_415c2e(); if (g_unwind) return; RELOAD();
/* 4230b8: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4230bb: call 0x415f89 */
  esp -= 4; W32(esp, 0x4230c0u); SPILL(); f_415f89(); if (g_unwind) return; RELOAD();
/* 4230c0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4230c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4230c4: call dword ptr [0x43920c] */
  esp -= 4; W32(esp, 0x4230cau); SPILL(); call_ind(R32(0x43920cu)); if (g_unwind) return; /* KERNEL32!SetEndOfFile */ RELOAD();
/* 4230ca: mov esi, eax */
  esi = eax;
/* 4230cc: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  esi = r;
  }
/* 4230ce: sbb esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  esi = r;
  }
/* 4230d0: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* 4230d2: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 4230d3: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4230d5: jne 0x4230f1 */
  if (!zf) goto L_4230f1;
L_4230d7: /* 4230d7: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4230dcu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4230dc: mov dword ptr [eax], 0xd */
  W32((uint32_t)(eax), 0xdu);
/* 4230e2: call 0x4102ae */
  esp -= 4; W32(esp, 0x4230e7u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4230e7: mov edi, eax */
  edi = eax;
/* 4230e9: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x4230efu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 4230ef: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_4230f1: /* 4230f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4230f3: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 4230f6: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4230f9: call 0x415c2e */
  esp -= 4; W32(esp, 0x4230feu); SPILL(); f_415c2e(); if (g_unwind) return; RELOAD();
/* 4230fe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 423101: mov eax, esi */
  eax = esi;
/* 423103: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 423104: jmp 0x423108 */
  goto L_423108;
L_423106: /* 423106: mov eax, ebx */
  eax = ebx;
L_423108: /* 423108: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 42310b: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 42310e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42310f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 423110: call 0x4013ab */
  esp -= 4; W32(esp, 0x423115u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 423115: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 423116: ret  */
  esp += 4; SPILL(); return;
}

void f_423117(void) {
  LOAD_REGS();
L_423117: /* 423117: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 423119: push 0x4408f0 */
  { uint32_t v = 0x4408f0u; esp -= 4; W32(esp, v); }
/* 42311e: call 0x40101f */
  esp -= 4; W32(esp, 0x423123u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 423123: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 423126: cmp ebx, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42312c: jae 0x42319a */
  if (!cf) goto L_42319a;
L_42312e: /* 42312e: mov eax, ebx */
  eax = ebx;
/* 423130: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 423133: lea edi, [eax*4 + 0x449240] */
  edi = (uint32_t)(eax*4 + 0x449240u);
/* 42313a: mov eax, ebx */
  eax = ebx;
/* 42313c: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42313f: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 423142: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 423145: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 423147: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42314c: je 0x42319a */
  if (zf) goto L_42319a;
L_42314e: /* 42314e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42314f: call 0x415fca */
  esp -= 4; W32(esp, 0x423154u); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 423154: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 423155: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 423159: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 42315b: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 423160: je 0x423172 */
  if (zf) goto L_423172;
L_423162: /* 423162: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 423165: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 423166: call 0x422fdc */
  esp -= 4; W32(esp, 0x42316bu); SPILL(); f_422fdc(); if (g_unwind) return; RELOAD();
/* 42316b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42316c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42316d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 423170: jmp 0x423181 */
  goto L_423181;
L_423172: /* 423172: call 0x4102a5 */
  esp -= 4; W32(esp, 0x423177u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 423177: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 42317d: or dword ptr [ebp - 0x1c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_423181: /* 423181: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 423185: call 0x423192 */
  esp -= 4; W32(esp, 0x42318au); SPILL(); f_423192(); if (g_unwind) return; RELOAD();
/* 42318a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 42318d: jmp 0x4231a8 */
  goto L_4231a8;
L_42319a: /* 42319a: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42319fu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42319f: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 4231a5: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4231a8: /* 4231a8: call 0x40105a */
  esp -= 4; W32(esp, 0x4231adu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4231ad: ret  */
  esp += 4; SPILL(); return;
}

void f_42318f(void) {
  LOAD_REGS();
L_42318f: /* 42318f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
  SPILL(); f_423192(); return;
}

void f_423192(void) {
  LOAD_REGS();
L_423192: /* 423192: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 423193: call 0x41603d */
  esp -= 4; W32(esp, 0x423198u); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 423198: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 423199: ret  */
  esp += 4; SPILL(); return;
}

void f_4231ae(void) {
  LOAD_REGS();
L_4231ae: /* 4231ae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4231af: mov ebp, esp */
  ebp = esp;
/* 4231b1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4231b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4231b3: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4231b5: xor esi, esi */
  esi = 0;
/* 4231b7: call 0x4011b7 */
  esp -= 4; W32(esp, 0x4231bcu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 4231bc: cmp dword ptr [0x44aba0], -2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44aba0u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4231c3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4231c4: jne 0x4231cb */
  if (!zf) goto L_4231cb;
L_4231c6: /* 4231c6: call 0x425813 */
  esp -= 4; W32(esp, 0x4231cbu); SPILL(); f_425813(); if (g_unwind) return; RELOAD();
L_4231cb: /* 4231cb: cmp dword ptr [0x44aba0], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44aba0u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4231d2: je 0x4231f6 */
  if (zf) goto L_4231f6;
L_4231d4: /* 4231d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4231d5: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 4231d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4231d9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4231dc: call 0x402493 */
  esp -= 4; W32(esp, 0x4231e1u); SPILL(); hle_strlen(); RELOAD();
/* 4231e1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4231e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4231e3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4231e6: push dword ptr [0x44aba0] */
  { uint32_t v = R32((uint32_t)(0x44aba0u)); esp -= 4; W32(esp, v); }
/* 4231ec: call dword ptr [0x439210] */
  esp -= 4; W32(esp, 0x4231f2u); SPILL(); call_ind(R32(0x439210u)); if (g_unwind) return; /* KERNEL32!WriteConsoleA */ RELOAD();
/* 4231f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4231f4: jne 0x4231f9 */
  if (!zf) goto L_4231f9;
L_4231f6: /* 4231f6: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_4231f9: /* 4231f9: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4231fb: call 0x4011d9 */
  esp -= 4; W32(esp, 0x423200u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 423200: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 423201: mov eax, esi */
  eax = esi;
/* 423203: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 423204: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 423205: ret  */
  esp += 4; SPILL(); return;
}

void f_423206(void) {
  LOAD_REGS();
L_423206: /* 423206: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 423207: mov ebp, esp */
  ebp = esp;
/* 423209: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42320c: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 423211: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 423214: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 423215: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 423216: xor edi, edi */
  edi = 0;
/* 423218: xor esi, esi */
  esi = 0;
/* 42321a: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 42321b: cmp dword ptr [0x44dd58], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44dd58u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423221: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 423224: je 0x423271 */
  if (zf) goto L_423271;
L_423226: /* 423226: cmp dword ptr [0x44aba0], -2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44aba0u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42322d: jne 0x423234 */
  if (!zf) goto L_423234;
L_42322f: /* 42322f: call 0x425813 */
  esp -= 4; W32(esp, 0x423234u); SPILL(); f_425813(); if (g_unwind) return; RELOAD();
L_423234: /* 423234: mov eax, dword ptr [0x44aba0] */
  eax = R32((uint32_t)(0x44aba0u));
/* 423239: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42323c: je 0x4232c3 */
  if (zf) goto L_4232c3;
L_423242: /* 423242: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 423243: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 423246: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 423247: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 423248: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 42324b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42324c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42324d: call dword ptr [0x439218] */
  esp -= 4; W32(esp, 0x423253u); SPILL(); call_ind(R32(0x439218u)); if (g_unwind) return; /* KERNEL32!WriteConsoleW */ RELOAD();
/* 423253: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 423255: jne 0x4232bb */
  if (!zf) goto L_4232bb;
L_423257: /* 423257: cmp dword ptr [0x44dd58], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44dd58u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42325e: jne 0x4232c3 */
  if (!zf) goto L_4232c3;
L_423260: /* 423260: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x423266u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 423266: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423269: jne 0x4232c3 */
  if (!zf) goto L_4232c3;
L_42326b: /* 42326b: mov dword ptr [0x44dd58], esi */
  W32((uint32_t)(0x44dd58u), esi);
L_423271: /* 423271: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 423272: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 423273: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 423275: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 423278: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423279: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42327a: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 42327d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42327e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42327f: call dword ptr [0x439214] */
  esp -= 4; W32(esp, 0x423285u); SPILL(); call_ind(R32(0x439214u)); if (g_unwind) return; /* KERNEL32!GetConsoleOutputCP */ RELOAD();
/* 423285: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423286: call dword ptr [0x4390d0] */
  esp -= 4; W32(esp, 0x42328cu); SPILL(); call_ind(R32(0x4390d0u)); if (g_unwind) return; /* KERNEL32!WideCharToMultiByte */ RELOAD();
/* 42328c: mov edi, eax */
  edi = eax;
/* 42328e: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 423290: jle 0x4232a8 */
  if ((zf || sf != of)) goto L_4232a8;
L_423292: /* 423292: movsx eax, byte ptr [ebp + esi - 0x10] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + esi + 0xfffffff0u)));
/* 423297: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423298: call 0x424fae */
  esp -= 4; W32(esp, 0x42329du); SPILL(); f_424fae(); if (g_unwind) return; RELOAD();
/* 42329d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4232a0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4232a1: je 0x4232c3 */
  if (zf) goto L_4232c3;
L_4232a3: /* 4232a3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4232a4: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4232a6: jl 0x423292 */
  if ((sf != of)) goto L_423292;
L_4232a8: /* 4232a8: mov ax, word ptr [ebp + 8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x8u))) & 0xffffu);
L_4232ac: /* 4232ac: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4232af: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4232b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4232b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4232b4: call 0x4013ab */
  esp -= 4; W32(esp, 0x4232b9u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 4232b9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4232ba: ret  */
  esp += 4; SPILL(); return;
L_4232bb: /* 4232bb: mov dword ptr [0x44dd58], edi */
  W32((uint32_t)(0x44dd58u), edi);
/* 4232c1: jmp 0x4232a8 */
  goto L_4232a8;
L_4232c3: /* 4232c3: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 4232c7: jmp 0x4232ac */
  goto L_4232ac;
}

void f_4232c9(void) {
  LOAD_REGS();
L_4232c9: /* 4232c9: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 4232cb: push 0x440900 */
  { uint32_t v = 0x440900u; esp -= 4; W32(esp, v); }
/* 4232d0: call 0x40101f */
  esp -= 4; W32(esp, 0x4232d5u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 4232d5: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 4232d9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4232dc: call 0x4013b8 */
  esp -= 4; W32(esp, 0x4232e1u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 4232e1: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 4232e4: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4232e6: call 0x4011b7 */
  esp -= 4; W32(esp, 0x4232ebu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 4232eb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4232ec: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4232ed: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_4232f1: /* 4232f1: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 4232f4: dec dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 4232f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4232f9: je 0x423316 */
  if (zf) goto L_423316;
L_4232fb: /* 4232fb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4232fe: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 423301: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423302: call 0x423206 */
  esp -= 4; W32(esp, 0x423307u); SPILL(); f_423206(); if (g_unwind) return; RELOAD();
/* 423307: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 423308: add dword ptr [ebp + 8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 42330c: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 423310: jne 0x4232f1 */
  if (!zf) goto L_4232f1;
L_423312: /* 423312: or dword ptr [ebp - 0x1c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_423316: /* 423316: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42331a: call 0x423328 */
  esp -= 4; W32(esp, 0x42331fu); SPILL(); f_423328(); if (g_unwind) return; RELOAD();
/* 42331f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 423322: call 0x40105a */
  esp -= 4; W32(esp, 0x423327u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 423327: ret  */
  esp += 4; SPILL(); return;
}

void f_423328(void) {
  LOAD_REGS();
L_423328: /* 423328: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 42332a: call 0x4011d9 */
  esp -= 4; W32(esp, 0x42332fu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 42332f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 423330: ret  */
  esp += 4; SPILL(); return;
}

void f_423331(void) {
  LOAD_REGS();
L_423331: /* 423331: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 423333: push 0x440910 */
  { uint32_t v = 0x440910u; esp -= 4; W32(esp, v); }
/* 423338: call 0x40101f */
  esp -= 4; W32(esp, 0x42333du); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42333d: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 42333f: call 0x4011b7 */
  esp -= 4; W32(esp, 0x423344u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 423344: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 423345: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 423349: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42334c: call 0x423206 */
  esp -= 4; W32(esp, 0x423351u); SPILL(); f_423206(); if (g_unwind) return; RELOAD();
/* 423351: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 423352: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 423355: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 423359: call 0x423368 */
  esp -= 4; W32(esp, 0x42335eu); SPILL(); f_423368(); if (g_unwind) return; RELOAD();
/* 42335e: mov ax, word ptr [ebp - 0x1c] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffe4u))) & 0xffffu);
/* 423362: call 0x40105a */
  esp -= 4; W32(esp, 0x423367u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 423367: ret  */
  esp += 4; SPILL(); return;
}

void f_423368(void) {
  LOAD_REGS();
L_423368: /* 423368: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 42336a: call 0x4011d9 */
  esp -= 4; W32(esp, 0x42336fu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 42336f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 423370: ret  */
  esp += 4; SPILL(); return;
}

void f_423371(void) {
  LOAD_REGS();
L_423371: /* 423371: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 423375: push 0x302 */
  { uint32_t v = 0x302u; esp -= 4; W32(esp, v); }
/* 42337a: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42337e: call 0x424d0a */
  esp -= 4; W32(esp, 0x423383u); SPILL(); f_424d0a(); if (g_unwind) return; RELOAD();
/* 423383: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 423386: ret  */
  esp += 4; SPILL(); return;
}

void f_423387(void) {
  LOAD_REGS();
L_423387: /* 423387: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 423388: mov ebp, esp */
  ebp = esp;
/* 42338a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42338b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42338c: mov ecx, edi */
  ecx = edi;
/* 42338e: mov eax, edi */
  eax = edi;
/* 423390: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 423393: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 42339a: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42339d: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 4233a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4233a1: mov bl, byte ptr [ecx + eax*4 + 4] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + eax*4 + 0x4u))) & 0xffu);
/* 4233a5: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4233a8: je 0x42341e */
  if (zf) goto L_42341e;
L_4233aa: /* 4233aa: call 0x41605f */
  esp -= 4; W32(esp, 0x4233afu); SPILL(); f_41605f(); if (g_unwind) return; RELOAD();
/* 4233af: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4233b2: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4233b5: jne 0x4233d2 */
  if (!zf) goto L_4233d2;
L_4233b7: /* 4233b7: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4233bcu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4233bc: mov dword ptr [eax], 0x18 */
  W32((uint32_t)(eax), 0x18u);
/* 4233c2: call 0x4102ae */
  esp -= 4; W32(esp, 0x4233c7u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4233c7: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 4233ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4233cb: call 0x41603d */
  esp -= 4; W32(esp, 0x4233d0u); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 4233d0: jmp 0x42341d */
  goto L_42341d;
L_4233d2: /* 4233d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4233d3: mov esi, dword ptr [0x439018] */
  esi = R32((uint32_t)(0x439018u));
/* 4233d9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4233db: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4233dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4233df: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 4233e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4233e3: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x4233e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4233e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4233e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4233e7: call 0x415f89 */
  esp -= 4; W32(esp, 0x4233ecu); SPILL(); f_415f89(); if (g_unwind) return; RELOAD();
/* 4233ec: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4233ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4233ee: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x4233f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4233f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4233f1: call dword ptr [0x43921c] */
  esp -= 4; W32(esp, 0x4233f7u); SPILL(); call_ind(R32(0x43921cu)); if (g_unwind) return; /* KERNEL32!DuplicateHandle */ RELOAD();
/* 4233f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4233f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4233fa: jne 0x423404 */
  if (!zf) goto L_423404;
L_4233fc: /* 4233fc: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x423402u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 423402: jmp 0x423413 */
  goto L_423413;
L_423404: /* 423404: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 423407: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 42340a: call 0x415e8e */
  esp -= 4; W32(esp, 0x42340fu); SPILL(); f_415e8e(); if (g_unwind) return; RELOAD();
/* 42340f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 423410: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 423411: xor eax, eax */
  eax = 0;
L_423413: /* 423413: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 423415: je 0x423423 */
  if (zf) goto L_423423;
L_423417: /* 423417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423418: call 0x4102b7 */
  esp -= 4; W32(esp, 0x42341du); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
L_42341d: /* 42341d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42341e: /* 42341e: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 423421: jmp 0x423443 */
  goto L_423443;
L_423423: /* 423423: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 423426: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 423429: and bl, 0xef */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0xefu);
  uint8_t r = (uint8_t)(a & b);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 42342c: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 42342f: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 423436: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 423439: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 42343c: mov byte ptr [ecx + eax*4 + 4], bl */
  W8((uint32_t)(ecx + eax*4 + 0x4u), (ebx & 0xffu));
/* 423440: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
L_423443: /* 423443: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 423444: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 423445: ret  */
  esp += 4; SPILL(); return;
}

void f_423446(void) {
  LOAD_REGS();
L_423446: /* 423446: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 423448: push 0x440920 */
  { uint32_t v = 0x440920u; esp -= 4; W32(esp, v); }
/* 42344d: call 0x40101f */
  esp -= 4; W32(esp, 0x423452u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 423452: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 423455: cmp edi, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42345b: jae 0x4234da */
  if (!cf) goto L_4234da;
L_42345d: /* 42345d: mov eax, edi */
  eax = edi;
/* 42345f: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 423462: lea ebx, [eax*4 + 0x449240] */
  ebx = (uint32_t)(eax*4 + 0x449240u);
/* 423469: mov eax, edi */
  eax = edi;
/* 42346b: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42346e: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 423471: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 423474: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 423476: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42347b: je 0x4234da */
  if (zf) goto L_4234da;
L_42347d: /* 42347d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42347e: call 0x415fca */
  esp -= 4; W32(esp, 0x423483u); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 423483: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 423484: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 423488: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 42348a: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42348f: je 0x42349b */
  if (zf) goto L_42349b;
L_423491: /* 423491: call 0x423387 */
  esp -= 4; W32(esp, 0x423496u); SPILL(); f_423387(); if (g_unwind) return; RELOAD();
/* 423496: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 423499: jmp 0x4234b2 */
  goto L_4234b2;
L_42349b: /* 42349b: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4234a0u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4234a0: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 4234a6: call 0x4102ae */
  esp -= 4; W32(esp, 0x4234abu); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4234ab: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 4234ae: or dword ptr [ebp - 0x1c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_4234b2: /* 4234b2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4234b6: call 0x4234c3 */
  esp -= 4; W32(esp, 0x4234bbu); SPILL(); f_4234c3(); if (g_unwind) return; RELOAD();
/* 4234bb: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4234be: jmp 0x4234f0 */
  goto L_4234f0;
L_4234da: /* 4234da: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4234dfu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4234df: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 4234e5: call 0x4102ae */
  esp -= 4; W32(esp, 0x4234eau); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4234ea: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 4234ed: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4234f0: /* 4234f0: call 0x40105a */
  esp -= 4; W32(esp, 0x4234f5u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4234f5: ret  */
  esp += 4; SPILL(); return;
}

void f_4234c0(void) {
  LOAD_REGS();
L_4234c0: /* 4234c0: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
  SPILL(); f_4234c3(); return;
}

void f_4234c3(void) {
  LOAD_REGS();
L_4234c3: /* 4234c3: cmp dword ptr [ebp - 0x1c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4234c7: je 0x4234d2 */
  if (zf) goto L_4234d2;
L_4234c9: /* 4234c9: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* 4234cc: call 0x41603d */
  esp -= 4; W32(esp, 0x4234d1u); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 4234d1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4234d2: /* 4234d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4234d3: call 0x41603d */
  esp -= 4; W32(esp, 0x4234d8u); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 4234d8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4234d9: ret  */
  esp += 4; SPILL(); return;
}

void f_4234f6(void) {
  LOAD_REGS();
L_4234f6: /* 4234f6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4234f7: mov ebp, esp */
  ebp = esp;
/* 4234f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4234fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4234fb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4234fe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 423501: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 423504: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 423507: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 423508: lea ecx, [ecx*4 + 0x449240] */
  ecx = (uint32_t)(ecx*4 + 0x449240u);
/* 42350f: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 423512: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 423514: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 423517: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42351c: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 42351f: jne 0x42353c */
  if (!zf) goto L_42353c;
L_423521: /* 423521: call 0x4102a5 */
  esp -= 4; W32(esp, 0x423526u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 423526: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 42352c: call 0x4102ae */
  esp -= 4; W32(esp, 0x423531u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 423531: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 423534: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 423537: jmp 0x4235dc */
  goto L_4235dc;
L_42353c: /* 42353c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 42353f: cmp dword ptr [ebp + 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423542: jne 0x42354b */
  if (!zf) goto L_42354b;
L_423544: /* 423544: xor eax, eax */
  eax = 0;
/* 423546: jmp 0x4235dc */
  goto L_4235dc;
L_42354b: /* 42354b: mov eax, ecx */
  eax = ecx;
/* 42354d: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 423550: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 423551: lea ebx, [eax*4 + 0x449240] */
  ebx = (uint32_t)(eax*4 + 0x449240u);
/* 423558: mov eax, ecx */
  eax = ecx;
/* 42355a: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42355d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42355e: lea edi, [eax + eax*8] */
  edi = (uint32_t)(eax + eax*8);
/* 423561: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 423563: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 423566: test byte ptr [eax + edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42356b: je 0x423574 */
  if (zf) goto L_423574;
L_42356d: /* 42356d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42356e: call 0x415b10 */
  esp -= 4; W32(esp, 0x423573u); SPILL(); f_415b10(); if (g_unwind) return; RELOAD();
/* 423573: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_423574: /* 423574: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 423576: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 423578: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42357a: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 42357d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42357e: call dword ptr [0x439018] */
  esp -= 4; W32(esp, 0x423584u); SPILL(); call_ind(R32(0x439018u)); if (g_unwind) return; /* KERNEL32!GetCurrentProcess */ RELOAD();
/* 423584: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423585: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 423588: call 0x415f89 */
  esp -= 4; W32(esp, 0x42358du); SPILL(); f_415f89(); if (g_unwind) return; RELOAD();
/* 42358d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42358e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42358f: call dword ptr [0x439018] */
  esp -= 4; W32(esp, 0x423595u); SPILL(); call_ind(R32(0x439018u)); if (g_unwind) return; /* KERNEL32!GetCurrentProcess */ RELOAD();
/* 423595: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423596: call dword ptr [0x43921c] */
  esp -= 4; W32(esp, 0x42359cu); SPILL(); call_ind(R32(0x43921cu)); if (g_unwind) return; /* KERNEL32!DuplicateHandle */ RELOAD();
/* 42359c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42359e: jne 0x4235a8 */
  if (!zf) goto L_4235a8;
L_4235a0: /* 4235a0: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x4235a6u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 4235a6: jmp 0x4235b7 */
  goto L_4235b7;
L_4235a8: /* 4235a8: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 4235ab: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4235ae: call 0x415e8e */
  esp -= 4; W32(esp, 0x4235b3u); SPILL(); f_415e8e(); if (g_unwind) return; RELOAD();
/* 4235b3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4235b4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4235b5: xor eax, eax */
  eax = 0;
L_4235b7: /* 4235b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4235b9: je 0x4235c7 */
  if (zf) goto L_4235c7;
L_4235bb: /* 4235bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4235bc: call 0x4102b7 */
  esp -= 4; W32(esp, 0x4235c1u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 4235c1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4235c2: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4235c5: jmp 0x4235da */
  goto L_4235da;
L_4235c7: /* 4235c7: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 4235ca: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4235cc: mov al, byte ptr [eax + esi + 4] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + esi + 0x4u))) & 0xffu);
/* 4235d0: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 4235d2: and al, 0xef */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xefu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4235d4: mov byte ptr [ecx + edi + 4], al */
  W8((uint32_t)(ecx + edi + 0x4u), (eax & 0xffu));
/* 4235d8: xor eax, eax */
  eax = 0;
L_4235da: /* 4235da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4235db: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4235dc: /* 4235dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4235dd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4235de: ret  */
  esp += 4; SPILL(); return;
}

void f_4235df(void) {
  LOAD_REGS();
L_4235df: /* 4235df: cmp ebx, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4235e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4235e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4235e7: jl 0x423639 */
  if ((sf != of)) goto L_423639;
L_4235e9: /* 4235e9: mov esi, 0x449240 */
  esi = 0x449240u;
/* 4235ee: mov edi, 0x480 */
  edi = 0x480u;
L_4235f3: /* 4235f3: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4235f6: jne 0x42362e */
  if (!zf) goto L_42362e;
L_4235f8: /* 4235f8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4235f9: call 0x4010eb */
  esp -= 4; W32(esp, 0x4235feu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4235fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 423600: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 423601: je 0x42363e */
  if (zf) goto L_42363e;
L_423603: /* 423603: add dword ptr [0x44b130], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b130u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(0x44b130u), r);
  }
/* 42360a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 42360c: lea ecx, [eax + 0x480] */
  ecx = (uint32_t)(eax + 0x480u);
/* 423612: jmp 0x42362a */
  goto L_42362a;
L_423614: /* 423614: and byte ptr [eax + 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax + 0x4u), r);
  }
/* 423618: or dword ptr [eax], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 42361b: and dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x8u), r);
  }
/* 42361f: mov byte ptr [eax + 5], 0xa */
  W8((uint32_t)(eax + 0x5u), 0xau);
/* 423623: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 423625: add eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 423628: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_42362a: /* 42362a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42362c: jb 0x423614 */
  if (cf) goto L_423614;
L_42362e: /* 42362e: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 423631: cmp ebx, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 423637: jge 0x4235f3 */
  if ((sf == of)) goto L_4235f3;
L_423639: /* 423639: xor eax, eax */
  eax = 0;
L_42363b: /* 42363b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42363c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42363d: ret  */
  esp += 4; SPILL(); return;
L_42363e: /* 42363e: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 423641: jmp 0x42363b */
  goto L_42363b;
}

void f_423643(void) {
  LOAD_REGS();
L_423643: /* 423643: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 423645: push 0x440930 */
  { uint32_t v = 0x440930u; esp -= 4; W32(esp, v); }
/* 42364a: call 0x40101f */
  esp -= 4; W32(esp, 0x42364fu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42364f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 423652: mov ecx, dword ptr [0x44b130] */
  ecx = R32((uint32_t)(0x44b130u));
/* 423658: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42365a: jae 0x4236f0 */
  if (!cf) goto L_4236f0;
L_423660: /* 423660: mov edx, esi */
  edx = esi;
/* 423662: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 423665: mov eax, esi */
  eax = esi;
/* 423667: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42366a: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 42366d: mov edx, dword ptr [edx*4 + 0x449240] */
  edx = R32((uint32_t)(edx*4 + 0x449240u));
/* 423674: test byte ptr [edx + eax*4 + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + eax*4 + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 423679: je 0x4236f0 */
  if (zf) goto L_4236f0;
L_42367b: /* 42367b: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 42367e: cmp ebx, 0x800 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 423684: jae 0x4236f0 */
  if (!cf) goto L_4236f0;
L_423686: /* 423686: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 423688: jl 0x4236a0 */
  if ((sf != of)) goto L_4236a0;
L_42368a: /* 42368a: call 0x4235df */
  esp -= 4; W32(esp, 0x42368fu); SPILL(); f_4235df(); if (g_unwind) return; RELOAD();
/* 42368f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 423691: je 0x4236a0 */
  if (zf) goto L_4236a0;
L_423693: /* 423693: call 0x4102a5 */
  esp -= 4; W32(esp, 0x423698u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 423698: mov dword ptr [eax], 0xc */
  W32((uint32_t)(eax), 0xcu);
/* 42369e: jmp 0x423703 */
  goto L_423703;
L_4236a0: /* 4236a0: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4236a2: jge 0x4236ad */
  if ((sf == of)) goto L_4236ad;
L_4236a4: /* 4236a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4236a5: call 0x415fca */
  esp -= 4; W32(esp, 0x4236aau); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 4236aa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4236ab: jmp 0x4236b6 */
  goto L_4236b6;
L_4236ad: /* 4236ad: jle 0x4236bd */
  if ((zf || sf != of)) goto L_4236bd;
L_4236af: /* 4236af: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4236b0: call 0x415fca */
  esp -= 4; W32(esp, 0x4236b5u); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 4236b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_4236b6: /* 4236b6: call 0x415fca */
  esp -= 4; W32(esp, 0x4236bbu); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 4236bb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4236bc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4236bd: /* 4236bd: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4236c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4236c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4236c3: call 0x4234f6 */
  esp -= 4; W32(esp, 0x4236c8u); SPILL(); f_4234f6(); if (g_unwind) return; RELOAD();
/* 4236c8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4236c9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4236ca: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 4236cd: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4236d1: call 0x4236e1 */
  esp -= 4; W32(esp, 0x4236d6u); SPILL(); f_4236e1(); if (g_unwind) return; RELOAD();
/* 4236d6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 4236d9: jmp 0x423706 */
  goto L_423706;
L_4236f0: /* 4236f0: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4236f5u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4236f5: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 4236fb: call 0x4102ae */
  esp -= 4; W32(esp, 0x423700u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 423700: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
L_423703: /* 423703: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_423706: /* 423706: call 0x40105a */
  esp -= 4; W32(esp, 0x42370bu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42370b: ret  */
  esp += 4; SPILL(); return;
}

void f_4236db(void) {
  LOAD_REGS();
L_4236db: /* 4236db: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 4236de: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
  SPILL(); f_4236e1(); return;
}

void f_4236e1(void) {
  LOAD_REGS();
L_4236e1: /* 4236e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4236e2: call 0x41603d */
  esp -= 4; W32(esp, 0x4236e7u); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 4236e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4236e8: call 0x41603d */
  esp -= 4; W32(esp, 0x4236edu); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 4236ed: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4236ee: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4236ef: ret  */
  esp += 4; SPILL(); return;
}

void f_42370c(void) {
  LOAD_REGS();
L_42370c: /* 42370c: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 42370e: push 0x440940 */
  { uint32_t v = 0x440940u; esp -= 4; W32(esp, v); }
/* 423713: call 0x40101f */
  esp -= 4; W32(esp, 0x423718u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 423718: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 42371b: cmp ecx, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 423721: jae 0x4237f0 */
  if (!cf) goto L_4237f0;
L_423727: /* 423727: mov eax, ecx */
  eax = ecx;
/* 423729: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 42372c: lea edi, [eax*4 + 0x449240] */
  edi = (uint32_t)(eax*4 + 0x449240u);
/* 423733: mov eax, ecx */
  eax = ecx;
/* 423735: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 423738: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 42373b: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 42373e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 423740: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 423745: je 0x4237f0 */
  if (zf) goto L_4237f0;
L_42374b: /* 42374b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42374c: call 0x415fca */
  esp -= 4; W32(esp, 0x423751u); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 423751: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 423752: xor ebx, ebx */
  ebx = 0;
/* 423754: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 423757: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 423759: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42375e: je 0x4237c2 */
  if (zf) goto L_4237c2;
L_423760: /* 423760: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 423762: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 423763: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 423764: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 423767: call 0x415d4d */
  esp -= 4; W32(esp, 0x42376cu); SPILL(); f_415d4d(); if (g_unwind) return; RELOAD();
/* 42376c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42376f: mov esi, eax */
  esi = eax;
/* 423771: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 423774: mov edi, edx */
  edi = edx;
/* 423776: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 423779: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42377b: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42377e: je 0x4237d4 */
  if (zf) goto L_4237d4;
L_423780: /* 423780: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 423782: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 423783: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 423784: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 423787: call 0x415d4d */
  esp -= 4; W32(esp, 0x42378cu); SPILL(); f_415d4d(); if (g_unwind) return; RELOAD();
/* 42378c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42378f: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 423792: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 423795: mov ecx, eax */
  ecx = eax;
/* 423797: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 423799: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42379c: je 0x4237d4 */
  if (zf) goto L_4237d4;
L_42379e: /* 42379e: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4237a0: jne 0x4237af */
  if (!zf) goto L_4237af;
L_4237a2: /* 4237a2: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4237a4: jne 0x4237af */
  if (!zf) goto L_4237af;
L_4237a6: /* 4237a6: mov dword ptr [ebp - 0x2c], 1 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x1u);
/* 4237ad: jmp 0x4237d8 */
  goto L_4237d8;
L_4237af: /* 4237af: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4237b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4237b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4237b2: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4237b5: call 0x415d4d */
  esp -= 4; W32(esp, 0x4237bau); SPILL(); f_415d4d(); if (g_unwind) return; RELOAD();
/* 4237ba: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4237bd: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 4237c0: jmp 0x4237d8 */
  goto L_4237d8;
L_4237c2: /* 4237c2: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4237c7u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4237c7: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 4237cd: call 0x4102ae */
  esp -= 4; W32(esp, 0x4237d2u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4237d2: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
L_4237d4: /* 4237d4: or dword ptr [ebp - 0x2c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
L_4237d8: /* 4237d8: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4237dc: call 0x4237e6 */
  esp -= 4; W32(esp, 0x4237e1u); SPILL(); f_4237e6(); if (g_unwind) return; RELOAD();
/* 4237e1: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 4237e4: jmp 0x423806 */
  goto L_423806;
L_4237f0: /* 4237f0: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4237f5u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4237f5: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 4237fb: call 0x4102ae */
  esp -= 4; W32(esp, 0x423800u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 423800: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 423803: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_423806: /* 423806: call 0x40105a */
  esp -= 4; W32(esp, 0x42380bu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42380b: ret  */
  esp += 4; SPILL(); return;
}

void f_4237e6(void) {
  LOAD_REGS();
L_4237e6: /* 4237e6: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4237e9: call 0x41603d */
  esp -= 4; W32(esp, 0x4237eeu); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 4237ee: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4237ef: ret  */
  esp += 4; SPILL(); return;
}

void f_42380c(void) {
  LOAD_REGS();
L_42380c: /* 42380c: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 42380e: push 0x440950 */
  { uint32_t v = 0x440950u; esp -= 4; W32(esp, v); }
/* 423813: call 0x40101f */
  esp -= 4; W32(esp, 0x423818u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 423818: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 42381b: cmp ebx, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 423821: jae 0x4238c4 */
  if (!cf) goto L_4238c4;
L_423827: /* 423827: mov eax, ebx */
  eax = ebx;
/* 423829: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 42382c: lea edi, [eax*4 + 0x449240] */
  edi = (uint32_t)(eax*4 + 0x449240u);
/* 423833: mov eax, ebx */
  eax = ebx;
/* 423835: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 423838: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 42383b: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 42383e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 423840: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 423845: je 0x4238c4 */
  if (zf) goto L_4238c4;
L_423847: /* 423847: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 423848: call 0x415fca */
  esp -= 4; W32(esp, 0x42384du); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 42384d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42384e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 423852: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 423854: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 423859: je 0x423894 */
  if (zf) goto L_423894;
L_42385b: /* 42385b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42385d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42385f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 423860: call 0x415c2e */
  esp -= 4; W32(esp, 0x423865u); SPILL(); f_415c2e(); if (g_unwind) return; RELOAD();
/* 423865: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 423868: mov esi, eax */
  esi = eax;
/* 42386a: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 42386d: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423870: je 0x4238a7 */
  if (zf) goto L_4238a7;
L_423872: /* 423872: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 423874: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 423876: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 423877: call 0x415c2e */
  esp -= 4; W32(esp, 0x42387cu); SPILL(); f_415c2e(); if (g_unwind) return; RELOAD();
/* 42387c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42387f: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 423882: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423884: je 0x4238ab */
  if (zf) goto L_4238ab;
L_423886: /* 423886: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 423888: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 423889: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42388a: call 0x415c2e */
  esp -= 4; W32(esp, 0x42388fu); SPILL(); f_415c2e(); if (g_unwind) return; RELOAD();
/* 42388f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 423892: jmp 0x4238ab */
  goto L_4238ab;
L_423894: /* 423894: call 0x4102a5 */
  esp -= 4; W32(esp, 0x423899u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 423899: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 42389f: call 0x4102ae */
  esp -= 4; W32(esp, 0x4238a4u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4238a4: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
L_4238a7: /* 4238a7: or dword ptr [ebp - 0x20], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
L_4238ab: /* 4238ab: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4238af: call 0x4238bc */
  esp -= 4; W32(esp, 0x4238b4u); SPILL(); f_4238bc(); if (g_unwind) return; RELOAD();
/* 4238b4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 4238b7: jmp 0x4238da */
  goto L_4238da;
L_4238c4: /* 4238c4: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4238c9u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4238c9: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 4238cf: call 0x4102ae */
  esp -= 4; W32(esp, 0x4238d4u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4238d4: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 4238d7: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4238da: /* 4238da: call 0x40105a */
  esp -= 4; W32(esp, 0x4238dfu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4238df: ret  */
  esp += 4; SPILL(); return;
}

void f_4238b9(void) {
  LOAD_REGS();
L_4238b9: /* 4238b9: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
  SPILL(); f_4238bc(); return;
}

void f_4238bc(void) {
  LOAD_REGS();
L_4238bc: /* 4238bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4238bd: call 0x41603d */
  esp -= 4; W32(esp, 0x4238c2u); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 4238c2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4238c3: ret  */
  esp += 4; SPILL(); return;
}

void f_4238e0(void) {
  LOAD_REGS();
L_4238e0: /* 4238e0: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 4238e2: push 0x440960 */
  { uint32_t v = 0x440960u; esp -= 4; W32(esp, v); }
/* 4238e7: call 0x40101f */
  esp -= 4; W32(esp, 0x4238ecu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 4238ec: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4238ef: cmp ecx, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4238f5: jae 0x4239b6 */
  if (!cf) goto L_4239b6;
L_4238fb: /* 4238fb: mov eax, ecx */
  eax = ecx;
/* 4238fd: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 423900: lea edi, [eax*4 + 0x449240] */
  edi = (uint32_t)(eax*4 + 0x449240u);
/* 423907: mov eax, ecx */
  eax = ecx;
/* 423909: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42390c: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 42390f: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 423912: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 423914: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 423919: je 0x4239b6 */
  if (zf) goto L_4239b6;
L_42391f: /* 42391f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 423920: call 0x415fca */
  esp -= 4; W32(esp, 0x423925u); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 423925: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 423926: xor ebx, ebx */
  ebx = 0;
/* 423928: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 42392b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 42392d: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 423932: je 0x423981 */
  if (zf) goto L_423981;
L_423934: /* 423934: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 423936: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 423937: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 423938: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42393b: call 0x415d4d */
  esp -= 4; W32(esp, 0x423940u); SPILL(); f_415d4d(); if (g_unwind) return; RELOAD();
/* 423940: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 423943: mov esi, eax */
  esi = eax;
/* 423945: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 423948: mov edi, edx */
  edi = edx;
/* 42394a: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 42394d: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42394f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423952: je 0x423993 */
  if (zf) goto L_423993;
L_423954: /* 423954: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 423956: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 423957: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 423958: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42395b: call 0x415d4d */
  esp -= 4; W32(esp, 0x423960u); SPILL(); f_415d4d(); if (g_unwind) return; RELOAD();
/* 423960: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 423963: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 423966: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 423969: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42396b: jne 0x423971 */
  if (!zf) goto L_423971;
L_42396d: /* 42396d: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42396f: je 0x42399b */
  if (zf) goto L_42399b;
L_423971: /* 423971: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 423972: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 423973: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 423974: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 423977: call 0x415d4d */
  esp -= 4; W32(esp, 0x42397cu); SPILL(); f_415d4d(); if (g_unwind) return; RELOAD();
/* 42397c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42397f: jmp 0x42399b */
  goto L_42399b;
L_423981: /* 423981: call 0x4102a5 */
  esp -= 4; W32(esp, 0x423986u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 423986: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 42398c: call 0x4102ae */
  esp -= 4; W32(esp, 0x423991u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 423991: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
L_423993: /* 423993: or dword ptr [ebp - 0x28], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffd8u), r);
  }
/* 423997: or dword ptr [ebp - 0x24], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
L_42399b: /* 42399b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42399f: call 0x4239ac */
  esp -= 4; W32(esp, 0x4239a4u); SPILL(); f_4239ac(); if (g_unwind) return; RELOAD();
/* 4239a4: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 4239a7: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 4239aa: jmp 0x4239ce */
  goto L_4239ce;
L_4239b6: /* 4239b6: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4239bbu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4239bb: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 4239c1: call 0x4102ae */
  esp -= 4; W32(esp, 0x4239c6u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4239c6: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 4239c9: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 4239cc: mov eax, edx */
  eax = edx;
L_4239ce: /* 4239ce: call 0x40105a */
  esp -= 4; W32(esp, 0x4239d3u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4239d3: ret  */
  esp += 4; SPILL(); return;
}

void f_4239ac(void) {
  LOAD_REGS();
L_4239ac: /* 4239ac: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4239af: call 0x41603d */
  esp -= 4; W32(esp, 0x4239b4u); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 4239b4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4239b5: ret  */
  esp += 4; SPILL(); return;
}

void f_4239d4(void) {
  LOAD_REGS();
L_4239d4: /* 4239d4: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 4239d6: push 0x440970 */
  { uint32_t v = 0x440970u; esp -= 4; W32(esp, v); }
/* 4239db: call 0x40101f */
  esp -= 4; W32(esp, 0x4239e0u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 4239e0: xor ebx, ebx */
  ebx = 0;
/* 4239e2: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 4239e5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4239e8: cmp eax, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4239ee: jae 0x423c7c */
  if (!cf) goto L_423c7c;
L_4239f4: /* 4239f4: mov ecx, eax */
  ecx = eax;
/* 4239f6: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 4239f9: lea esi, [ecx*4 + 0x449240] */
  esi = (uint32_t)(ecx*4 + 0x449240u);
/* 423a00: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 423a03: mov edi, eax */
  edi = eax;
/* 423a05: and edi, 0x1f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 423a08: lea edi, [edi + edi*8] */
  edi = (uint32_t)(edi + edi*8);
/* 423a0b: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 423a0e: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 423a10: test byte ptr [ecx + edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 423a15: je 0x423c7c */
  if (zf) goto L_423c7c;
L_423a1b: /* 423a1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423a1c: call 0x415fca */
  esp -= 4; W32(esp, 0x423a21u); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 423a21: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 423a22: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 423a25: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 423a27: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 423a29: test byte ptr [eax + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 423a2d: je 0x423a5a */
  if (zf) goto L_423a5a;
L_423a2f: /* 423a2f: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 423a31: call dword ptr [0x4390a4] */
  esp -= 4; W32(esp, 0x423a37u); SPILL(); call_ind(R32(0x4390a4u)); if (g_unwind) return; /* KERNEL32!GetFileType */ RELOAD();
/* 423a37: and eax, 0xffff7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 423a3c: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 423a3f: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423a42: je 0x423ae5 */
  if (zf) goto L_423ae5;
L_423a48: /* 423a48: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423a4b: je 0x423a7a */
  if (zf) goto L_423a7a;
L_423a4d: /* 423a4d: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423a50: je 0x423a7a */
  if (zf) goto L_423a7a;
L_423a52: /* 423a52: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423a54: jne 0x423b14 */
  if (!zf) goto L_423b14;
L_423a5a: /* 423a5a: call 0x4102a5 */
  esp -= 4; W32(esp, 0x423a5fu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 423a5f: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
L_423a65: /* 423a65: or dword ptr [ebp - 0x1c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_423a69: /* 423a69: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 423a6d: call 0x423c72 */
  esp -= 4; W32(esp, 0x423a72u); SPILL(); f_423c72(); if (g_unwind) return; RELOAD();
/* 423a72: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 423a75: jmp 0x423c8a */
  goto L_423c8a;
L_423a7a: /* 423a7a: xor edx, edx */
  edx = 0;
/* 423a7c: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423a7f: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 423a82: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 423a83: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 423a88: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 423a8a: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 423a8c: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 423a8f: mov word ptr [esi + 6], dx */
  W16((uint32_t)(esi + 0x6u), (edx & 0xffffu));
/* 423a93: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 423a96: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 423a98: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 423a9b: mov word ptr [esi + 8], 1 */
  W16((uint32_t)(esi + 0x8u), 0x1u);
/* 423aa1: mov word ptr [esi + 4], bx */
  W16((uint32_t)(esi + 0x4u), (ebx & 0xffffu));
/* 423aa5: mov word ptr [esi + 0xc], bx */
  W16((uint32_t)(esi + 0xcu), (ebx & 0xffffu));
/* 423aa9: mov word ptr [esi + 0xa], bx */
  W16((uint32_t)(esi + 0xau), (ebx & 0xffffu));
/* 423aad: mov dword ptr [esi + 0x20], ebx */
  W32((uint32_t)(esi + 0x20u), ebx);
/* 423ab0: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 423ab3: mov dword ptr [esi + 0x18], ebx */
  W32((uint32_t)(esi + 0x18u), ebx);
/* 423ab6: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423ab9: jne 0x423ac0 */
  if (!zf) goto L_423ac0;
L_423abb: /* 423abb: mov dword ptr [esi + 0x14], ebx */
  W32((uint32_t)(esi + 0x14u), ebx);
/* 423abe: jmp 0x423a69 */
  goto L_423a69;
L_423ac0: /* 423ac0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 423ac1: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 423ac4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423ac5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 423ac6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 423ac7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 423ac8: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 423acb: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 423acd: push dword ptr [eax + edi] */
  { uint32_t v = R32((uint32_t)(eax + edi)); esp -= 4; W32(esp, v); }
/* 423ad0: call dword ptr [0x439224] */
  esp -= 4; W32(esp, 0x423ad6u); SPILL(); call_ind(R32(0x439224u)); if (g_unwind) return; /* KERNEL32!PeekNamedPipe */ RELOAD();
/* 423ad6: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 423ad9: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 423adb: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 423add: and eax, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 423ae0: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 423ae3: jmp 0x423a69 */
  goto L_423a69;
L_423ae5: /* 423ae5: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 423ae8: mov word ptr [esi + 6], bx */
  W16((uint32_t)(esi + 0x6u), (ebx & 0xffffu));
/* 423aec: mov word ptr [esi + 0xc], bx */
  W16((uint32_t)(esi + 0xcu), (ebx & 0xffffu));
/* 423af0: mov word ptr [esi + 0xa], bx */
  W16((uint32_t)(esi + 0xau), (ebx & 0xffffu));
/* 423af4: mov word ptr [esi + 4], bx */
  W16((uint32_t)(esi + 0x4u), (ebx & 0xffffu));
/* 423af8: mov word ptr [esi + 8], 1 */
  W16((uint32_t)(esi + 0x8u), 0x1u);
/* 423afe: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 423b01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423b02: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 423b05: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 423b07: push dword ptr [eax + edi] */
  { uint32_t v = R32((uint32_t)(eax + edi)); esp -= 4; W32(esp, v); }
/* 423b0a: call dword ptr [0x439220] */
  esp -= 4; W32(esp, 0x423b10u); SPILL(); call_ind(R32(0x439220u)); if (g_unwind) return; /* KERNEL32!GetFileInformationByHandle */ RELOAD();
/* 423b10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 423b12: jne 0x423b26 */
  if (!zf) goto L_423b26;
L_423b14: /* 423b14: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x423b1au); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 423b1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423b1b: call 0x4102b7 */
  esp -= 4; W32(esp, 0x423b20u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 423b20: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 423b21: jmp 0x423a65 */
  goto L_423a65;
L_423b26: /* 423b26: mov ax, word ptr [esi + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x6u))) & 0xffffu);
/* 423b2a: test byte ptr [ebp - 0x60], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffa0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 423b2e: je 0x423b36 */
  if (zf) goto L_423b36;
L_423b30: /* 423b30: or ax, 0x124 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x124u);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 423b34: jmp 0x423b3a */
  goto L_423b3a;
L_423b36: /* 423b36: or ax, 0x1b6 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x1b6u);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
L_423b3a: /* 423b3a: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* 423b3e: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 423b41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423b42: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 423b45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423b46: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x423b4cu); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 423b4c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 423b4e: je 0x423a65 */
  if (zf) goto L_423a65;
L_423b54: /* 423b54: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 423b57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423b58: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 423b5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423b5c: mov edi, dword ptr [0x439160] */
  edi = R32((uint32_t)(0x439160u));
/* 423b62: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x423b64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 423b64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 423b66: je 0x423a65 */
  if (zf) goto L_423a65;
L_423b6c: /* 423b6c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 423b6e: movzx eax, word ptr [ebp - 0x6c] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff94u)));
/* 423b72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423b73: movzx eax, word ptr [ebp - 0x6e] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff92u)));
/* 423b77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423b78: movzx eax, word ptr [ebp - 0x70] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff90u)));
/* 423b7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423b7d: movzx eax, word ptr [ebp - 0x72] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff8eu)));
/* 423b81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423b82: movzx eax, word ptr [ebp - 0x76] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff8au)));
/* 423b86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423b87: movzx eax, word ptr [ebp - 0x78] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff88u)));
/* 423b8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423b8c: call 0x431816 */
  esp -= 4; W32(esp, 0x423b91u); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 423b91: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 423b94: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 423b97: cmp dword ptr [ebp - 0x54], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423b9a: jne 0x423ba1 */
  if (!zf) goto L_423ba1;
L_423b9c: /* 423b9c: cmp dword ptr [ebp - 0x50], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423b9f: je 0x423bf1 */
  if (zf) goto L_423bf1;
L_423ba1: /* 423ba1: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 423ba4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423ba5: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 423ba8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423ba9: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x423bafu); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 423baf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 423bb1: je 0x423a65 */
  if (zf) goto L_423a65;
L_423bb7: /* 423bb7: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 423bba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423bbb: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 423bbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423bbf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x423bc1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 423bc1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 423bc3: je 0x423a65 */
  if (zf) goto L_423a65;
L_423bc9: /* 423bc9: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 423bcb: movzx eax, word ptr [ebp - 0x6c] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff94u)));
/* 423bcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423bd0: movzx eax, word ptr [ebp - 0x6e] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff92u)));
/* 423bd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423bd5: movzx eax, word ptr [ebp - 0x70] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff90u)));
/* 423bd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423bda: movzx eax, word ptr [ebp - 0x72] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff8eu)));
/* 423bde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423bdf: movzx eax, word ptr [ebp - 0x76] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff8au)));
/* 423be3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423be4: movzx eax, word ptr [ebp - 0x78] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff88u)));
/* 423be8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423be9: call 0x431816 */
  esp -= 4; W32(esp, 0x423beeu); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 423bee: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_423bf1: /* 423bf1: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 423bf4: cmp dword ptr [ebp - 0x5c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423bf7: jne 0x423c03 */
  if (!zf) goto L_423c03;
L_423bf9: /* 423bf9: cmp dword ptr [ebp - 0x58], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423bfc: jne 0x423c03 */
  if (!zf) goto L_423c03;
L_423bfe: /* 423bfe: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 423c01: jmp 0x423c53 */
  goto L_423c53;
L_423c03: /* 423c03: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 423c06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423c07: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 423c0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423c0b: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x423c11u); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 423c11: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 423c13: je 0x423a65 */
  if (zf) goto L_423a65;
L_423c19: /* 423c19: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 423c1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423c1d: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 423c20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423c21: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x423c23u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 423c23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 423c25: je 0x423a65 */
  if (zf) goto L_423a65;
L_423c2b: /* 423c2b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 423c2d: movzx eax, word ptr [ebp - 0x6c] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff94u)));
/* 423c31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423c32: movzx eax, word ptr [ebp - 0x6e] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff92u)));
/* 423c36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423c37: movzx eax, word ptr [ebp - 0x70] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff90u)));
/* 423c3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423c3c: movzx eax, word ptr [ebp - 0x72] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff8eu)));
/* 423c40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423c41: movzx eax, word ptr [ebp - 0x76] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff8au)));
/* 423c45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423c46: movzx eax, word ptr [ebp - 0x78] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff88u)));
/* 423c4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423c4b: call 0x431816 */
  esp -= 4; W32(esp, 0x423c50u); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 423c50: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_423c53: /* 423c53: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 423c56: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 423c59: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 423c5c: mov ax, word ptr [esi + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x6u))) & 0xffffu);
/* 423c60: or ax, 0x8000 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x8000u);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 423c64: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* 423c68: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 423c6a: mov dword ptr [esi + 0x10], ebx */
  W32((uint32_t)(esi + 0x10u), ebx);
/* 423c6d: jmp 0x423a69 */
  goto L_423a69;
L_423c7c: /* 423c7c: call 0x4102a5 */
  esp -= 4; W32(esp, 0x423c81u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 423c81: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 423c87: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_423c8a: /* 423c8a: call 0x40105a */
  esp -= 4; W32(esp, 0x423c8fu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 423c8f: ret  */
  esp += 4; SPILL(); return;
}

void f_423c72(void) {
  LOAD_REGS();
L_423c72: /* 423c72: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 423c75: call 0x41603d */
  esp -= 4; W32(esp, 0x423c7au); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 423c7a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 423c7b: ret  */
  esp += 4; SPILL(); return;
}

void f_423c90(void) {
  LOAD_REGS();
L_423c90: /* 423c90: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 423c92: push 0x440980 */
  { uint32_t v = 0x440980u; esp -= 4; W32(esp, v); }
/* 423c97: call 0x40101f */
  esp -= 4; W32(esp, 0x423c9cu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 423c9c: xor edi, edi */
  edi = 0;
/* 423c9e: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 423ca1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 423ca4: cmp eax, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 423caa: jae 0x423f7c */
  if (!cf) goto L_423f7c;
L_423cb0: /* 423cb0: mov ecx, eax */
  ecx = eax;
/* 423cb2: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 423cb5: lea esi, [ecx*4 + 0x449240] */
  esi = (uint32_t)(ecx*4 + 0x449240u);
/* 423cbc: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 423cbf: mov ebx, eax */
  ebx = eax;
/* 423cc1: and ebx, 0x1f */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 423cc4: lea ebx, [ebx + ebx*8] */
  ebx = (uint32_t)(ebx + ebx*8);
/* 423cc7: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 423cca: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 423ccc: test byte ptr [ecx + ebx + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + ebx + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 423cd1: je 0x423f7c */
  if (zf) goto L_423f7c;
L_423cd7: /* 423cd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423cd8: call 0x415fca */
  esp -= 4; W32(esp, 0x423cddu); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 423cdd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 423cde: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 423ce1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 423ce3: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 423ce5: test byte ptr [eax + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 423ce9: je 0x423d16 */
  if (zf) goto L_423d16;
L_423ceb: /* 423ceb: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 423ced: call dword ptr [0x4390a4] */
  esp -= 4; W32(esp, 0x423cf3u); SPILL(); call_ind(R32(0x4390a4u)); if (g_unwind) return; /* KERNEL32!GetFileType */ RELOAD();
/* 423cf3: and eax, 0xffff7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 423cf8: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 423cfb: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423cfe: je 0x423db4 */
  if (zf) goto L_423db4;
L_423d04: /* 423d04: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423d07: je 0x423d36 */
  if (zf) goto L_423d36;
L_423d09: /* 423d09: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423d0c: je 0x423d36 */
  if (zf) goto L_423d36;
L_423d0e: /* 423d0e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423d10: jne 0x423de3 */
  if (!zf) goto L_423de3;
L_423d16: /* 423d16: call 0x4102a5 */
  esp -= 4; W32(esp, 0x423d1bu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 423d1b: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
L_423d21: /* 423d21: or dword ptr [ebp - 0x1c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_423d25: /* 423d25: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 423d29: call 0x423f72 */
  esp -= 4; W32(esp, 0x423d2eu); SPILL(); f_423f72(); if (g_unwind) return; RELOAD();
/* 423d2e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 423d31: jmp 0x423f8a */
  goto L_423f8a;
L_423d36: /* 423d36: xor edx, edx */
  edx = 0;
/* 423d38: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423d3b: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 423d3e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 423d3f: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 423d44: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 423d46: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 423d48: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 423d4b: mov word ptr [esi + 6], dx */
  W16((uint32_t)(esi + 0x6u), (edx & 0xffffu));
/* 423d4f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 423d52: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 423d54: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 423d57: mov word ptr [esi + 8], 1 */
  W16((uint32_t)(esi + 0x8u), 0x1u);
/* 423d5d: mov word ptr [esi + 4], di */
  W16((uint32_t)(esi + 0x4u), (edi & 0xffffu));
/* 423d61: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* 423d65: mov word ptr [esi + 0xa], di */
  W16((uint32_t)(esi + 0xau), (edi & 0xffffu));
/* 423d69: mov dword ptr [esi + 0x30], edi */
  W32((uint32_t)(esi + 0x30u), edi);
/* 423d6c: mov dword ptr [esi + 0x34], edi */
  W32((uint32_t)(esi + 0x34u), edi);
/* 423d6f: mov dword ptr [esi + 0x28], edi */
  W32((uint32_t)(esi + 0x28u), edi);
/* 423d72: mov dword ptr [esi + 0x2c], edi */
  W32((uint32_t)(esi + 0x2cu), edi);
/* 423d75: mov dword ptr [esi + 0x20], edi */
  W32((uint32_t)(esi + 0x20u), edi);
/* 423d78: mov dword ptr [esi + 0x24], edi */
  W32((uint32_t)(esi + 0x24u), edi);
/* 423d7b: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423d7e: jne 0x423d88 */
  if (!zf) goto L_423d88;
L_423d80: /* 423d80: mov dword ptr [esi + 0x18], edi */
  W32((uint32_t)(esi + 0x18u), edi);
/* 423d83: mov dword ptr [esi + 0x1c], edi */
  W32((uint32_t)(esi + 0x1cu), edi);
/* 423d86: jmp 0x423d25 */
  goto L_423d25;
L_423d88: /* 423d88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 423d89: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 423d8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423d8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 423d8e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 423d8f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 423d90: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 423d93: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 423d95: push dword ptr [eax + ebx] */
  { uint32_t v = R32((uint32_t)(eax + ebx)); esp -= 4; W32(esp, v); }
/* 423d98: call dword ptr [0x439224] */
  esp -= 4; W32(esp, 0x423d9eu); SPILL(); call_ind(R32(0x439224u)); if (g_unwind) return; /* KERNEL32!PeekNamedPipe */ RELOAD();
/* 423d9e: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 423da1: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423da3: je 0x423d80 */
  if (zf) goto L_423d80;
L_423da5: /* 423da5: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 423da8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 423da9: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 423dac: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 423daf: jmp 0x423d25 */
  goto L_423d25;
L_423db4: /* 423db4: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 423db7: mov word ptr [esi + 6], di */
  W16((uint32_t)(esi + 0x6u), (edi & 0xffffu));
/* 423dbb: mov word ptr [esi + 0xc], di */
  W16((uint32_t)(esi + 0xcu), (edi & 0xffffu));
/* 423dbf: mov word ptr [esi + 0xa], di */
  W16((uint32_t)(esi + 0xau), (edi & 0xffffu));
/* 423dc3: mov word ptr [esi + 4], di */
  W16((uint32_t)(esi + 0x4u), (edi & 0xffffu));
/* 423dc7: mov word ptr [esi + 8], 1 */
  W16((uint32_t)(esi + 0x8u), 0x1u);
/* 423dcd: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 423dd0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423dd1: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 423dd4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 423dd6: push dword ptr [eax + ebx] */
  { uint32_t v = R32((uint32_t)(eax + ebx)); esp -= 4; W32(esp, v); }
/* 423dd9: call dword ptr [0x439220] */
  esp -= 4; W32(esp, 0x423ddfu); SPILL(); call_ind(R32(0x439220u)); if (g_unwind) return; /* KERNEL32!GetFileInformationByHandle */ RELOAD();
/* 423ddf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 423de1: jne 0x423df5 */
  if (!zf) goto L_423df5;
L_423de3: /* 423de3: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x423de9u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 423de9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423dea: call 0x4102b7 */
  esp -= 4; W32(esp, 0x423defu); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 423def: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 423df0: jmp 0x423d21 */
  goto L_423d21;
L_423df5: /* 423df5: mov ax, word ptr [esi + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x6u))) & 0xffffu);
/* 423df9: test byte ptr [ebp - 0x60], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffa0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 423dfd: je 0x423e05 */
  if (zf) goto L_423e05;
L_423dff: /* 423dff: or ax, 0x124 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x124u);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 423e03: jmp 0x423e09 */
  goto L_423e09;
L_423e05: /* 423e05: or ax, 0x1b6 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x1b6u);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
L_423e09: /* 423e09: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* 423e0d: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 423e10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423e11: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 423e14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423e15: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x423e1bu); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 423e1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 423e1d: je 0x423d21 */
  if (zf) goto L_423d21;
L_423e23: /* 423e23: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 423e26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423e27: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 423e2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423e2b: mov ebx, dword ptr [0x439160] */
  ebx = R32((uint32_t)(0x439160u));
/* 423e31: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x423e33u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 423e33: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 423e35: je 0x423d21 */
  if (zf) goto L_423d21;
L_423e3b: /* 423e3b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 423e3d: movzx eax, word ptr [ebp - 0x6c] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff94u)));
/* 423e41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423e42: movzx eax, word ptr [ebp - 0x6e] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff92u)));
/* 423e46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423e47: movzx eax, word ptr [ebp - 0x70] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff90u)));
/* 423e4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423e4c: movzx eax, word ptr [ebp - 0x72] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff8eu)));
/* 423e50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423e51: movzx eax, word ptr [ebp - 0x76] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff8au)));
/* 423e55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423e56: movzx eax, word ptr [ebp - 0x78] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff88u)));
/* 423e5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423e5b: call 0x431924 */
  esp -= 4; W32(esp, 0x423e60u); SPILL(); f_431924(); if (g_unwind) return; RELOAD();
/* 423e60: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 423e63: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 423e66: mov dword ptr [esi + 0x2c], edx */
  W32((uint32_t)(esi + 0x2cu), edx);
/* 423e69: cmp dword ptr [ebp - 0x54], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423e6c: jne 0x423e7d */
  if (!zf) goto L_423e7d;
L_423e6e: /* 423e6e: cmp dword ptr [ebp - 0x50], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423e71: jne 0x423e7d */
  if (!zf) goto L_423e7d;
L_423e73: /* 423e73: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 423e76: mov eax, edx */
  eax = edx;
/* 423e78: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 423e7b: jmp 0x423ed3 */
  goto L_423ed3;
L_423e7d: /* 423e7d: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 423e80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423e81: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 423e84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423e85: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x423e8bu); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 423e8b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 423e8d: je 0x423d21 */
  if (zf) goto L_423d21;
L_423e93: /* 423e93: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 423e96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423e97: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 423e9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423e9b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x423e9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 423e9d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 423e9f: je 0x423d21 */
  if (zf) goto L_423d21;
L_423ea5: /* 423ea5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 423ea7: movzx eax, word ptr [ebp - 0x6c] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff94u)));
/* 423eab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423eac: movzx eax, word ptr [ebp - 0x6e] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff92u)));
/* 423eb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423eb1: movzx eax, word ptr [ebp - 0x70] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff90u)));
/* 423eb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423eb6: movzx eax, word ptr [ebp - 0x72] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff8eu)));
/* 423eba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423ebb: movzx eax, word ptr [ebp - 0x76] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff8au)));
/* 423ebf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423ec0: movzx eax, word ptr [ebp - 0x78] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff88u)));
/* 423ec4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423ec5: call 0x431924 */
  esp -= 4; W32(esp, 0x423ecau); SPILL(); f_431924(); if (g_unwind) return; RELOAD();
/* 423eca: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 423ecd: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 423ed0: mov dword ptr [esi + 0x24], edx */
  W32((uint32_t)(esi + 0x24u), edx);
L_423ed3: /* 423ed3: cmp dword ptr [ebp - 0x5c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423ed6: jne 0x423eeb */
  if (!zf) goto L_423eeb;
L_423ed8: /* 423ed8: cmp dword ptr [ebp - 0x58], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423edb: jne 0x423eeb */
  if (!zf) goto L_423eeb;
L_423edd: /* 423edd: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* 423ee0: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 423ee3: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 423ee6: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 423ee9: jmp 0x423f41 */
  goto L_423f41;
L_423eeb: /* 423eeb: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 423eee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423eef: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 423ef2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423ef3: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x423ef9u); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 423ef9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 423efb: je 0x423d21 */
  if (zf) goto L_423d21;
L_423f01: /* 423f01: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 423f04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423f05: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 423f08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423f09: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x423f0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 423f0b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 423f0d: je 0x423d21 */
  if (zf) goto L_423d21;
L_423f13: /* 423f13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 423f15: movzx eax, word ptr [ebp - 0x6c] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff94u)));
/* 423f19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423f1a: movzx eax, word ptr [ebp - 0x6e] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff92u)));
/* 423f1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423f1f: movzx eax, word ptr [ebp - 0x70] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff90u)));
/* 423f23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423f24: movzx eax, word ptr [ebp - 0x72] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff8eu)));
/* 423f28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423f29: movzx eax, word ptr [ebp - 0x76] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff8au)));
/* 423f2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423f2e: movzx eax, word ptr [ebp - 0x78] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff88u)));
/* 423f32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423f33: call 0x431924 */
  esp -= 4; W32(esp, 0x423f38u); SPILL(); f_431924(); if (g_unwind) return; RELOAD();
/* 423f38: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 423f3b: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 423f3e: mov dword ptr [esi + 0x34], edx */
  W32((uint32_t)(esi + 0x34u), edx);
L_423f41: /* 423f41: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 423f43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 423f44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 423f45: push dword ptr [ebp - 0x40] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffc0u)); esp -= 4; W32(esp, v); }
/* 423f48: call 0x40518c */
  esp -= 4; W32(esp, 0x423f4du); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 423f4d: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 423f50: xor ebx, ebx */
  ebx = 0;
/* 423f52: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 423f54: adc edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 423f56: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 423f59: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 423f5c: mov ax, word ptr [esi + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x6u))) & 0xffffu);
/* 423f60: or ax, 0x8000 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x8000u);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 423f64: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* 423f68: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 423f6a: mov dword ptr [esi + 0x10], edi */
  W32((uint32_t)(esi + 0x10u), edi);
/* 423f6d: jmp 0x423d25 */
  goto L_423d25;
L_423f7c: /* 423f7c: call 0x4102a5 */
  esp -= 4; W32(esp, 0x423f81u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 423f81: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 423f87: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_423f8a: /* 423f8a: call 0x40105a */
  esp -= 4; W32(esp, 0x423f8fu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 423f8f: ret  */
  esp += 4; SPILL(); return;
}

void f_423f72(void) {
  LOAD_REGS();
L_423f72: /* 423f72: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 423f75: call 0x41603d */
  esp -= 4; W32(esp, 0x423f7au); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 423f7a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 423f7b: ret  */
  esp += 4; SPILL(); return;
}

void f_423f90(void) {
  LOAD_REGS();
L_423f90: /* 423f90: push 0x68 */
  { uint32_t v = 0x68u; esp -= 4; W32(esp, v); }
/* 423f92: push 0x440990 */
  { uint32_t v = 0x440990u; esp -= 4; W32(esp, v); }
/* 423f97: call 0x40101f */
  esp -= 4; W32(esp, 0x423f9cu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 423f9c: xor ebx, ebx */
  ebx = 0;
/* 423f9e: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 423fa1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 423fa4: cmp eax, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 423faa: jae 0x424257 */
  if (!cf) goto L_424257;
L_423fb0: /* 423fb0: mov ecx, eax */
  ecx = eax;
/* 423fb2: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 423fb5: lea esi, [ecx*4 + 0x449240] */
  esi = (uint32_t)(ecx*4 + 0x449240u);
/* 423fbc: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 423fbf: mov edi, eax */
  edi = eax;
/* 423fc1: and edi, 0x1f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 423fc4: lea edi, [edi + edi*8] */
  edi = (uint32_t)(edi + edi*8);
/* 423fc7: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 423fca: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 423fcc: test byte ptr [ecx + edi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + edi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 423fd1: je 0x424257 */
  if (zf) goto L_424257;
L_423fd7: /* 423fd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 423fd8: call 0x415fca */
  esp -= 4; W32(esp, 0x423fddu); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 423fdd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 423fde: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 423fe1: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 423fe3: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 423fe5: test byte ptr [eax + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 423fe9: je 0x424016 */
  if (zf) goto L_424016;
L_423feb: /* 423feb: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 423fed: call dword ptr [0x4390a4] */
  esp -= 4; W32(esp, 0x423ff3u); SPILL(); call_ind(R32(0x4390a4u)); if (g_unwind) return; /* KERNEL32!GetFileType */ RELOAD();
/* 423ff3: and eax, 0xffff7fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff7fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 423ff8: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 423ffb: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 423ffe: je 0x4240ab */
  if (zf) goto L_4240ab;
L_424004: /* 424004: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424007: je 0x424036 */
  if (zf) goto L_424036;
L_424009: /* 424009: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42400c: je 0x424036 */
  if (zf) goto L_424036;
L_42400e: /* 42400e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424010: jne 0x4240da */
  if (!zf) goto L_4240da;
L_424016: /* 424016: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42401bu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42401b: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
L_424021: /* 424021: or dword ptr [ebp - 0x1c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_424025: /* 424025: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 424029: call 0x42424d */
  esp -= 4; W32(esp, 0x42402eu); SPILL(); f_42424d(); if (g_unwind) return; RELOAD();
/* 42402e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 424031: jmp 0x424265 */
  goto L_424265;
L_424036: /* 424036: xor edx, edx */
  edx = 0;
/* 424038: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42403b: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 42403e: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 42403f: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 424044: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 424046: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 424048: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 42404b: mov word ptr [esi + 6], dx */
  W16((uint32_t)(esi + 0x6u), (edx & 0xffffu));
/* 42404f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 424052: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 424054: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 424057: mov word ptr [esi + 8], 1 */
  W16((uint32_t)(esi + 0x8u), 0x1u);
/* 42405d: mov word ptr [esi + 4], bx */
  W16((uint32_t)(esi + 0x4u), (ebx & 0xffffu));
/* 424061: mov word ptr [esi + 0xc], bx */
  W16((uint32_t)(esi + 0xcu), (ebx & 0xffffu));
/* 424065: mov word ptr [esi + 0xa], bx */
  W16((uint32_t)(esi + 0xau), (ebx & 0xffffu));
/* 424069: mov dword ptr [esi + 0x28], ebx */
  W32((uint32_t)(esi + 0x28u), ebx);
/* 42406c: mov dword ptr [esi + 0x24], ebx */
  W32((uint32_t)(esi + 0x24u), ebx);
/* 42406f: mov dword ptr [esi + 0x20], ebx */
  W32((uint32_t)(esi + 0x20u), ebx);
/* 424072: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424075: jne 0x42407f */
  if (!zf) goto L_42407f;
L_424077: /* 424077: mov dword ptr [esi + 0x18], ebx */
  W32((uint32_t)(esi + 0x18u), ebx);
/* 42407a: mov dword ptr [esi + 0x1c], ebx */
  W32((uint32_t)(esi + 0x1cu), ebx);
/* 42407d: jmp 0x424025 */
  goto L_424025;
L_42407f: /* 42407f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 424080: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 424083: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424084: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 424085: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 424086: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 424087: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42408a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 42408c: push dword ptr [eax + edi] */
  { uint32_t v = R32((uint32_t)(eax + edi)); esp -= 4; W32(esp, v); }
/* 42408f: call dword ptr [0x439224] */
  esp -= 4; W32(esp, 0x424095u); SPILL(); call_ind(R32(0x439224u)); if (g_unwind) return; /* KERNEL32!PeekNamedPipe */ RELOAD();
/* 424095: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 424098: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42409a: je 0x424077 */
  if (zf) goto L_424077;
L_42409c: /* 42409c: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 42409f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4240a0: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 4240a3: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 4240a6: jmp 0x424025 */
  goto L_424025;
L_4240ab: /* 4240ab: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4240ae: mov word ptr [esi + 6], bx */
  W16((uint32_t)(esi + 0x6u), (ebx & 0xffffu));
/* 4240b2: mov word ptr [esi + 0xc], bx */
  W16((uint32_t)(esi + 0xcu), (ebx & 0xffffu));
/* 4240b6: mov word ptr [esi + 0xa], bx */
  W16((uint32_t)(esi + 0xau), (ebx & 0xffffu));
/* 4240ba: mov word ptr [esi + 4], bx */
  W16((uint32_t)(esi + 0x4u), (ebx & 0xffffu));
/* 4240be: mov word ptr [esi + 8], 1 */
  W16((uint32_t)(esi + 0x8u), 0x1u);
/* 4240c4: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 4240c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4240c8: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 4240cb: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4240cd: push dword ptr [eax + edi] */
  { uint32_t v = R32((uint32_t)(eax + edi)); esp -= 4; W32(esp, v); }
/* 4240d0: call dword ptr [0x439220] */
  esp -= 4; W32(esp, 0x4240d6u); SPILL(); call_ind(R32(0x439220u)); if (g_unwind) return; /* KERNEL32!GetFileInformationByHandle */ RELOAD();
/* 4240d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4240d8: jne 0x4240ec */
  if (!zf) goto L_4240ec;
L_4240da: /* 4240da: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x4240e0u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 4240e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4240e1: call 0x4102b7 */
  esp -= 4; W32(esp, 0x4240e6u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 4240e6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4240e7: jmp 0x424021 */
  goto L_424021;
L_4240ec: /* 4240ec: mov ax, word ptr [esi + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x6u))) & 0xffffu);
/* 4240f0: test byte ptr [ebp - 0x60], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffa0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4240f4: je 0x4240fc */
  if (zf) goto L_4240fc;
L_4240f6: /* 4240f6: or ax, 0x124 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x124u);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 4240fa: jmp 0x424100 */
  goto L_424100;
L_4240fc: /* 4240fc: or ax, 0x1b6 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x1b6u);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
L_424100: /* 424100: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* 424104: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 424107: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424108: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 42410b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42410c: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x424112u); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 424112: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 424114: je 0x424021 */
  if (zf) goto L_424021;
L_42411a: /* 42411a: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 42411d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42411e: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 424121: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424122: mov edi, dword ptr [0x439160] */
  edi = R32((uint32_t)(0x439160u));
/* 424128: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x42412au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 42412a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42412c: je 0x424021 */
  if (zf) goto L_424021;
L_424132: /* 424132: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 424134: movzx eax, word ptr [ebp - 0x6c] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff94u)));
/* 424138: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424139: movzx eax, word ptr [ebp - 0x6e] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff92u)));
/* 42413d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42413e: movzx eax, word ptr [ebp - 0x70] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff90u)));
/* 424142: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424143: movzx eax, word ptr [ebp - 0x72] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff8eu)));
/* 424147: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424148: movzx eax, word ptr [ebp - 0x76] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff8au)));
/* 42414c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42414d: movzx eax, word ptr [ebp - 0x78] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff88u)));
/* 424151: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424152: call 0x431816 */
  esp -= 4; W32(esp, 0x424157u); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 424157: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42415a: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 42415d: cmp dword ptr [ebp - 0x54], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424160: jne 0x424167 */
  if (!zf) goto L_424167;
L_424162: /* 424162: cmp dword ptr [ebp - 0x50], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424165: je 0x4241b7 */
  if (zf) goto L_4241b7;
L_424167: /* 424167: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 42416a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42416b: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 42416e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42416f: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x424175u); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 424175: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 424177: je 0x424021 */
  if (zf) goto L_424021;
L_42417d: /* 42417d: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 424180: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424181: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 424184: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424185: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x424187u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 424187: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 424189: je 0x424021 */
  if (zf) goto L_424021;
L_42418f: /* 42418f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 424191: movzx eax, word ptr [ebp - 0x6c] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff94u)));
/* 424195: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424196: movzx eax, word ptr [ebp - 0x6e] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff92u)));
/* 42419a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42419b: movzx eax, word ptr [ebp - 0x70] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff90u)));
/* 42419f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4241a0: movzx eax, word ptr [ebp - 0x72] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff8eu)));
/* 4241a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4241a5: movzx eax, word ptr [ebp - 0x76] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff8au)));
/* 4241a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4241aa: movzx eax, word ptr [ebp - 0x78] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff88u)));
/* 4241ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4241af: call 0x431816 */
  esp -= 4; W32(esp, 0x4241b4u); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 4241b4: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4241b7: /* 4241b7: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 4241ba: cmp dword ptr [ebp - 0x5c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4241bd: jne 0x4241c9 */
  if (!zf) goto L_4241c9;
L_4241bf: /* 4241bf: cmp dword ptr [ebp - 0x58], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4241c2: jne 0x4241c9 */
  if (!zf) goto L_4241c9;
L_4241c4: /* 4241c4: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 4241c7: jmp 0x424219 */
  goto L_424219;
L_4241c9: /* 4241c9: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 4241cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4241cd: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 4241d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4241d1: call dword ptr [0x439164] */
  esp -= 4; W32(esp, 0x4241d7u); SPILL(); call_ind(R32(0x439164u)); if (g_unwind) return; /* KERNEL32!FileTimeToLocalFileTime */ RELOAD();
/* 4241d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4241d9: je 0x424021 */
  if (zf) goto L_424021;
L_4241df: /* 4241df: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 4241e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4241e3: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 4241e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4241e7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x4241e9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4241e9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4241eb: je 0x424021 */
  if (zf) goto L_424021;
L_4241f1: /* 4241f1: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4241f3: movzx eax, word ptr [ebp - 0x6c] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff94u)));
/* 4241f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4241f8: movzx eax, word ptr [ebp - 0x6e] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff92u)));
/* 4241fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4241fd: movzx eax, word ptr [ebp - 0x70] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff90u)));
/* 424201: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424202: movzx eax, word ptr [ebp - 0x72] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff8eu)));
/* 424206: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424207: movzx eax, word ptr [ebp - 0x76] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff8au)));
/* 42420b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42420c: movzx eax, word ptr [ebp - 0x78] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffff88u)));
/* 424210: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424211: call 0x431816 */
  esp -= 4; W32(esp, 0x424216u); SPILL(); f_431816(); if (g_unwind) return; RELOAD();
/* 424216: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_424219: /* 424219: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 42421c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42421e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42421f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 424220: push dword ptr [ebp - 0x40] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffc0u)); esp -= 4; W32(esp, v); }
/* 424223: call 0x40518c */
  esp -= 4; W32(esp, 0x424228u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 424228: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 42422b: xor edi, edi */
  edi = 0;
/* 42422d: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 42422f: adc edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 424231: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 424234: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 424237: mov ax, word ptr [esi + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x6u))) & 0xffffu);
/* 42423b: or ax, 0x8000 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x8000u);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 42423f: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* 424243: mov dword ptr [esi], ebx */
  W32((uint32_t)(esi), ebx);
/* 424245: mov dword ptr [esi + 0x10], ebx */
  W32((uint32_t)(esi + 0x10u), ebx);
/* 424248: jmp 0x424025 */
  goto L_424025;
L_424257: /* 424257: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42425cu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42425c: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 424262: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_424265: /* 424265: call 0x40105a */
  esp -= 4; W32(esp, 0x42426au); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42426a: ret  */
  esp += 4; SPILL(); return;
}

void f_42424d(void) {
  LOAD_REGS();
L_42424d: /* 42424d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 424250: call 0x41603d */
  esp -= 4; W32(esp, 0x424255u); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 424255: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 424256: ret  */
  esp += 4; SPILL(); return;
}

void f_42426b(void) {
  LOAD_REGS();
L_42426b: /* 42426b: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 42426f: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424272: je 0x424288 */
  if (zf) goto L_424288;
L_424274: /* 424274: cmp dword ptr [0x44dd5c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44dd5cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42427b: jne 0x424288 */
  if (!zf) goto L_424288;
L_42427d: /* 42427d: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 424282: mov dword ptr [0x44dd5c], eax */
  W32((uint32_t)(0x44dd5cu), eax);
/* 424287: ret  */
  esp += 4; SPILL(); return;
L_424288: /* 424288: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42428b: ret  */
  esp += 4; SPILL(); return;
}

void f_42428c(void) {
  LOAD_REGS();
L_42428c: /* 42428c: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 424290: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 424291: mov ebx, dword ptr [edx + 0xc] */
  ebx = R32((uint32_t)(edx + 0xcu));
/* 424294: test bh, 1 */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 424297: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424298: je 0x4242ee */
  if (zf) goto L_4242ee;
L_42429a: /* 42429a: mov dx, word ptr [edx + 8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + 0x8u))) & 0xffffu);
/* 42429e: xor eax, eax */
  eax = 0;
/* 4242a0: xor ecx, ecx */
  ecx = 0;
/* 4242a2: xor esi, esi */
  esi = 0;
L_4242a4: /* 4242a4: cmp word ptr [esi + 0x4409a0], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x4409a0u))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4242ab: je 0x4242b8 */
  if (zf) goto L_4242b8;
L_4242ad: /* 4242ad: add esi, 0xa */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4242b0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4242b1: cmp esi, 0x78 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4242b4: jb 0x4242a4 */
  if (cf) goto L_4242a4;
L_4242b6: /* 4242b6: jmp 0x424336 */
  goto L_424336;
L_4242b8: /* 4242b8: test bl, 3 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4242bb: lea eax, [ecx + ecx*4] */
  eax = (uint32_t)(ecx + ecx*4);
/* 4242be: je 0x4242c9 */
  if (zf) goto L_4242c9;
L_4242c0: /* 4242c0: lea eax, [eax*2 + 0x4409a8] */
  eax = (uint32_t)(eax*2 + 0x4409a8u);
/* 4242c7: jmp 0x424336 */
  goto L_424336;
L_4242c9: /* 4242c9: test bl, 0xc */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4242cc: je 0x4242d7 */
  if (zf) goto L_4242d7;
L_4242ce: /* 4242ce: lea eax, [eax*2 + 0x4409a6] */
  eax = (uint32_t)(eax*2 + 0x4409a6u);
/* 4242d5: jmp 0x424336 */
  goto L_424336;
L_4242d7: /* 4242d7: test bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4242da: je 0x4242e5 */
  if (zf) goto L_4242e5;
L_4242dc: /* 4242dc: lea eax, [eax*2 + 0x4409a4] */
  eax = (uint32_t)(eax*2 + 0x4409a4u);
/* 4242e3: jmp 0x424336 */
  goto L_424336;
L_4242e5: /* 4242e5: lea eax, [eax*2 + 0x4409a2] */
  eax = (uint32_t)(eax*2 + 0x4409a2u);
/* 4242ec: jmp 0x424336 */
  goto L_424336;
L_4242ee: /* 4242ee: test bl, 3 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4242f1: movzx eax, word ptr [edx + 8] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x8u)));
/* 4242f5: je 0x424300 */
  if (zf) goto L_424300;
L_4242f7: /* 4242f7: lea eax, [eax*8 + 0x440a1e] */
  eax = (uint32_t)(eax*8 + 0x440a1eu);
/* 4242fe: jmp 0x424323 */
  goto L_424323;
L_424300: /* 424300: test bl, 0xc */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 424303: je 0x42430e */
  if (zf) goto L_42430e;
L_424305: /* 424305: lea eax, [eax*8 + 0x440a1c] */
  eax = (uint32_t)(eax*8 + 0x440a1cu);
/* 42430c: jmp 0x424323 */
  goto L_424323;
L_42430e: /* 42430e: test bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 424311: je 0x42431c */
  if (zf) goto L_42431c;
L_424313: /* 424313: lea eax, [eax*8 + 0x440a1a] */
  eax = (uint32_t)(eax*8 + 0x440a1au);
/* 42431a: jmp 0x424323 */
  goto L_424323;
L_42431c: /* 42431c: lea eax, [eax*8 + 0x440a18] */
  eax = (uint32_t)(eax*8 + 0x440a18u);
L_424323: /* 424323: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 424325: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 424327: je 0x42432e */
  if (zf) goto L_42432e;
L_424329: /* 424329: cmp cl, 0xe0 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xe0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42432c: jne 0x424334 */
  if (!zf) goto L_424334;
L_42432e: /* 42432e: cmp byte ptr [eax + 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 424332: jne 0x424336 */
  if (!zf) goto L_424336;
L_424334: /* 424334: xor eax, eax */
  eax = 0;
L_424336: /* 424336: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 424337: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 424338: ret  */
  esp += 4; SPILL(); return;
}

void f_424339(void) {
  LOAD_REGS();
L_424339: /* 424339: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42433a: mov ebp, esp */
  ebp = esp;
/* 42433c: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42433f: mov eax, dword ptr [0x44dd5c] */
  eax = R32((uint32_t)(0x44dd5cu));
/* 424344: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 424347: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424349: je 0x424356 */
  if (zf) goto L_424356;
L_42434b: /* 42434b: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 42434e: mov dword ptr [0x44dd5c], ecx */
  W32((uint32_t)(0x44dd5cu), ecx);
/* 424354: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 424355: ret  */
  esp += 4; SPILL(); return;
L_424356: /* 424356: mov eax, dword ptr [0x44ab9c] */
  eax = R32((uint32_t)(0x44ab9cu));
/* 42435b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42435d: jne 0x424363 */
  if (!zf) goto L_424363;
L_42435f: /* 42435f: mov eax, ecx */
  eax = ecx;
/* 424361: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 424362: ret  */
  esp += 4; SPILL(); return;
L_424363: /* 424363: cmp eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424366: jne 0x42436d */
  if (!zf) goto L_42436d;
L_424368: /* 424368: call 0x4257f4 */
  esp -= 4; W32(esp, 0x42436du); SPILL(); f_4257f4(); if (g_unwind) return; RELOAD();
L_42436d: /* 42436d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42436e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42436f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 424370: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 424373: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424374: push dword ptr [0x44ab9c] */
  { uint32_t v = R32((uint32_t)(0x44ab9cu)); esp -= 4; W32(esp, v); }
/* 42437a: call dword ptr [0x4391fc] */
  esp -= 4; W32(esp, 0x424380u); SPILL(); call_ind(R32(0x4391fcu)); if (g_unwind) return; /* KERNEL32!GetConsoleMode */ RELOAD();
/* 424380: mov ebx, dword ptr [0x4391f8] */
  ebx = R32((uint32_t)(0x4391f8u));
/* 424386: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 424388: push dword ptr [0x44ab9c] */
  { uint32_t v = R32((uint32_t)(0x44ab9cu)); esp -= 4; W32(esp, v); }
/* 42438e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x424390u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 424390: mov esi, dword ptr [0x439228] */
  esi = R32((uint32_t)(0x439228u));
/* 424396: jmp 0x4243c1 */
  goto L_4243c1;
L_424398: /* 424398: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42439c: je 0x4243d7 */
  if (zf) goto L_4243d7;
L_42439e: /* 42439e: cmp word ptr [ebp - 0x1c], 1 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffe4u))); uint16_t b = (uint16_t)(0x1u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4243a3: jne 0x4243c1 */
  if (!zf) goto L_4243c1;
L_4243a5: /* 4243a5: cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4243a9: je 0x4243c1 */
  if (zf) goto L_4243c1;
L_4243ab: /* 4243ab: movzx edi, byte ptr [ebp - 0xe] */
  edi = (uint32_t)(R8((uint32_t)(ebp + 0xfffffff2u)));
/* 4243af: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4243b1: jne 0x4243da */
  if (!zf) goto L_4243da;
L_4243b3: /* 4243b3: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 4243b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4243b7: call 0x42428c */
  esp -= 4; W32(esp, 0x4243bcu); SPILL(); f_42428c(); if (g_unwind) return; RELOAD();
/* 4243bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4243be: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4243bf: jne 0x4243ec */
  if (!zf) goto L_4243ec;
L_4243c1: /* 4243c1: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 4243c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4243c5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4243c7: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4243ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4243cb: push dword ptr [0x44ab9c] */
  { uint32_t v = R32((uint32_t)(0x44ab9cu)); esp -= 4; W32(esp, v); }
/* 4243d1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x4243d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4243d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4243d5: jne 0x424398 */
  if (!zf) goto L_424398;
L_4243d7: /* 4243d7: or edi, 0xffffffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_4243da: /* 4243da: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 4243dd: push dword ptr [0x44ab9c] */
  { uint32_t v = R32((uint32_t)(0x44ab9cu)); esp -= 4; W32(esp, v); }
/* 4243e3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x4243e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4243e5: mov eax, edi */
  eax = edi;
/* 4243e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4243e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4243e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4243ea: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4243eb: ret  */
  esp += 4; SPILL(); return;
L_4243ec: /* 4243ec: movzx edi, byte ptr [eax] */
  edi = (uint32_t)(R8((uint32_t)(eax)));
/* 4243ef: movzx eax, byte ptr [eax + 1] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 4243f3: mov dword ptr [0x44dd5c], eax */
  W32((uint32_t)(0x44dd5cu), eax);
/* 4243f8: jmp 0x4243da */
  goto L_4243da;
}

void f_4243fa(void) {
  LOAD_REGS();
L_4243fa: /* 4243fa: mov eax, dword ptr [0x44dd5c] */
  eax = R32((uint32_t)(0x44dd5cu));
/* 4243ff: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424402: je 0x42440f */
  if (zf) goto L_42440f;
L_424404: /* 424404: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 424407: or dword ptr [0x44dd5c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44dd5cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0x44dd5cu), r);
  }
/* 42440e: ret  */
  esp += 4; SPILL(); return;
L_42440f: /* 42440f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424410: call 0x424339 */
  esp -= 4; W32(esp, 0x424415u); SPILL(); f_424339(); if (g_unwind) return; RELOAD();
/* 424415: mov esi, eax */
  esi = eax;
/* 424417: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42441a: je 0x42442c */
  if (zf) goto L_42442c;
L_42441c: /* 42441c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42441d: call 0x424fae */
  esp -= 4; W32(esp, 0x424422u); SPILL(); f_424fae(); if (g_unwind) return; RELOAD();
/* 424422: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424425: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 424426: je 0x42442c */
  if (zf) goto L_42442c;
L_424428: /* 424428: mov eax, esi */
  eax = esi;
/* 42442a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42442b: ret  */
  esp += 4; SPILL(); return;
L_42442c: /* 42442c: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42442f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 424430: ret  */
  esp += 4; SPILL(); return;
}

void f_424431(void) {
  LOAD_REGS();
L_424431: /* 424431: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 424433: push 0x440ce0 */
  { uint32_t v = 0x440ce0u; esp -= 4; W32(esp, v); }
/* 424438: call 0x40101f */
  esp -= 4; W32(esp, 0x42443du); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42443d: xor edi, edi */
  edi = 0;
/* 42443f: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 424442: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 424445: cmp dword ptr [0x44dd5c], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44dd5cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42444c: je 0x424456 */
  if (zf) goto L_424456;
L_42444e: /* 42444e: xor eax, eax */
  eax = 0;
/* 424450: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 424451: jmp 0x424550 */
  goto L_424550;
L_424456: /* 424456: cmp dword ptr [0x44ab9c], -2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44ab9cu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42445d: jne 0x424464 */
  if (!zf) goto L_424464;
L_42445f: /* 42445f: call 0x4257f4 */
  esp -= 4; W32(esp, 0x424464u); SPILL(); f_4257f4(); if (g_unwind) return; RELOAD();
L_424464: /* 424464: mov eax, dword ptr [0x44ab9c] */
  eax = R32((uint32_t)(0x44ab9cu));
/* 424469: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42446c: je 0x42454e */
  if (zf) goto L_42454e;
L_424472: /* 424472: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 424475: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 424476: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424477: call dword ptr [0x439230] */
  esp -= 4; W32(esp, 0x42447du); SPILL(); call_ind(R32(0x439230u)); if (g_unwind) return; /* KERNEL32!GetNumberOfConsoleInputEvents */ RELOAD();
/* 42447d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42447f: je 0x42454e */
  if (zf) goto L_42454e;
L_424485: /* 424485: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 424488: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42448a: je 0x42454e */
  if (zf) goto L_42454e;
L_424490: /* 424490: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 424493: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 424496: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 424499: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42449c: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42449f: call 0x4014ee */
  esp -= 4; W32(esp, 0x4244a4u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 4244a4: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 4244a7: mov edi, esp */
  edi = esp;
/* 4244a9: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 4244ac: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4244b0: jmp 0x4244c7 */
  goto L_4244c7;
L_4244c7: /* 4244c7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4244c9: jne 0x4244e9 */
  if (!zf) goto L_4244e9;
L_4244cb: /* 4244cb: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 4244ce: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 4244d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4244d2: call 0x4010eb */
  esp -= 4; W32(esp, 0x4244d7u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4244d7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4244d8: mov edi, eax */
  edi = eax;
/* 4244da: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4244dc: je 0x42454e */
  if (zf) goto L_42454e;
L_4244de: /* 4244de: xor ebx, ebx */
  ebx = 0;
/* 4244e0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4244e1: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 4244e4: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 4244e7: jmp 0x4244ec */
  goto L_4244ec;
L_4244e9: /* 4244e9: xor ebx, ebx */
  ebx = 0;
/* 4244eb: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_4244ec: /* 4244ec: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 4244ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4244f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4244f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4244f2: push dword ptr [0x44ab9c] */
  { uint32_t v = R32((uint32_t)(0x44ab9cu)); esp -= 4; W32(esp, v); }
/* 4244f8: call dword ptr [0x43922c] */
  esp -= 4; W32(esp, 0x4244feu); SPILL(); call_ind(R32(0x43922cu)); if (g_unwind) return; /* KERNEL32!PeekConsoleInputA */ RELOAD();
/* 4244fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 424500: je 0x42453c */
  if (zf) goto L_42453c;
L_424502: /* 424502: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 424505: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 424507: je 0x42453c */
  if (zf) goto L_42453c;
L_424509: /* 424509: cmp esi, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42450c: ja 0x42453c */
  if ((!cf && !zf)) goto L_42453c;
L_42450e: /* 42450e: jmp 0x424538 */
  goto L_424538;
L_424510: /* 424510: cmp word ptr [edi], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 424513: jne 0x424531 */
  if (!zf) goto L_424531;
L_424515: /* 424515: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 424518: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42451b: je 0x424531 */
  if (zf) goto L_424531;
L_42451d: /* 42451d: cmp byte ptr [edi + 0xe], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0xeu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 424521: jne 0x42452e */
  if (!zf) goto L_42452e;
L_424523: /* 424523: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424524: call 0x42428c */
  esp -= 4; W32(esp, 0x424529u); SPILL(); f_42428c(); if (g_unwind) return; RELOAD();
/* 424529: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42452a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42452c: je 0x424531 */
  if (zf) goto L_424531;
L_42452e: /* 42452e: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_424531: /* 424531: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 424532: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 424535: add edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_424538: /* 424538: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 42453a: ja 0x424510 */
  if ((!cf && !zf)) goto L_424510;
L_42453c: /* 42453c: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424540: je 0x424549 */
  if (zf) goto L_424549;
L_424542: /* 424542: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 424543: call 0x401156 */
  esp -= 4; W32(esp, 0x424548u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 424548: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_424549: /* 424549: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42454c: jmp 0x424550 */
  goto L_424550;
L_42454e: /* 42454e: xor eax, eax */
  eax = 0;
L_424550: /* 424550: lea esp, [ebp - 0x38] */
  esp = (uint32_t)(ebp + 0xffffffc8u);
/* 424553: call 0x40105a */
  esp -= 4; W32(esp, 0x424558u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 424558: ret  */
  esp += 4; SPILL(); return;
}

void f_4244b2(void) {
  LOAD_REGS();
L_4244b2: /* 4244b2: xor eax, eax */
  eax = 0;
/* 4244b4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4244b5: ret  */
  esp += 4; SPILL(); return;
}

void f_4244b6(void) {
  LOAD_REGS();
L_4244b6: /* 4244b6: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 4244b9: call 0x415709 */
  esp -= 4; W32(esp, 0x4244beu); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 4244be: xor edi, edi */
  edi = 0;
/* 4244c0: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4244c4: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 4244c7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4244c9: jne 0x4244e9 */
  if (!zf) goto L_4244e9;
L_4244cb: /* 4244cb: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 4244ce: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 4244d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4244d2: call 0x4010eb */
  esp -= 4; W32(esp, 0x4244d7u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4244d7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4244d8: mov edi, eax */
  edi = eax;
/* 4244da: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4244dc: je 0x42454e */
  if (zf) goto L_42454e;
L_4244de: /* 4244de: xor ebx, ebx */
  ebx = 0;
/* 4244e0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4244e1: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 4244e4: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 4244e7: jmp 0x4244ec */
  goto L_4244ec;
L_4244e9: /* 4244e9: xor ebx, ebx */
  ebx = 0;
/* 4244eb: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_4244ec: /* 4244ec: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 4244ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4244f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4244f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4244f2: push dword ptr [0x44ab9c] */
  { uint32_t v = R32((uint32_t)(0x44ab9cu)); esp -= 4; W32(esp, v); }
/* 4244f8: call dword ptr [0x43922c] */
  esp -= 4; W32(esp, 0x4244feu); SPILL(); call_ind(R32(0x43922cu)); if (g_unwind) return; /* KERNEL32!PeekConsoleInputA */ RELOAD();
/* 4244fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 424500: je 0x42453c */
  if (zf) goto L_42453c;
L_424502: /* 424502: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 424505: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 424507: je 0x42453c */
  if (zf) goto L_42453c;
L_424509: /* 424509: cmp esi, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42450c: ja 0x42453c */
  if ((!cf && !zf)) goto L_42453c;
L_42450e: /* 42450e: jmp 0x424538 */
  goto L_424538;
L_424510: /* 424510: cmp word ptr [edi], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(edi))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 424513: jne 0x424531 */
  if (!zf) goto L_424531;
L_424515: /* 424515: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 424518: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42451b: je 0x424531 */
  if (zf) goto L_424531;
L_42451d: /* 42451d: cmp byte ptr [edi + 0xe], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0xeu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 424521: jne 0x42452e */
  if (!zf) goto L_42452e;
L_424523: /* 424523: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424524: call 0x42428c */
  esp -= 4; W32(esp, 0x424529u); SPILL(); f_42428c(); if (g_unwind) return; RELOAD();
/* 424529: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42452a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42452c: je 0x424531 */
  if (zf) goto L_424531;
L_42452e: /* 42452e: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
L_424531: /* 424531: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 424532: mov dword ptr [ebp - 0x2c], esi */
  W32((uint32_t)(ebp + 0xffffffd4u), esi);
/* 424535: add edi, 0x14 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_424538: /* 424538: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 42453a: ja 0x424510 */
  if ((!cf && !zf)) goto L_424510;
L_42453c: /* 42453c: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424540: je 0x424549 */
  if (zf) goto L_424549;
L_424542: /* 424542: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 424543: call 0x401156 */
  esp -= 4; W32(esp, 0x424548u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 424548: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_424549: /* 424549: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42454c: jmp 0x424550 */
  goto L_424550;
L_42454e: /* 42454e: xor eax, eax */
  eax = 0;
L_424550: /* 424550: lea esp, [ebp - 0x38] */
  esp = (uint32_t)(ebp + 0xffffffc8u);
/* 424553: call 0x40105a */
  esp -= 4; W32(esp, 0x424558u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 424558: ret  */
  esp += 4; SPILL(); return;
}

void f_424559(void) {
  LOAD_REGS();
L_424559: /* 424559: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42455a: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 42455c: call 0x4011b7 */
  esp -= 4; W32(esp, 0x424561u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 424561: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 424565: call 0x42426b */
  esp -= 4; W32(esp, 0x42456au); SPILL(); f_42426b(); if (g_unwind) return; RELOAD();
/* 42456a: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 42456c: mov esi, eax */
  esi = eax;
/* 42456e: call 0x4011d9 */
  esp -= 4; W32(esp, 0x424573u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 424573: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 424576: mov eax, esi */
  eax = esi;
/* 424578: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 424579: ret  */
  esp += 4; SPILL(); return;
}

void f_42457a(void) {
  LOAD_REGS();
L_42457a: /* 42457a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42457b: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 42457d: call 0x4011b7 */
  esp -= 4; W32(esp, 0x424582u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 424582: call 0x424339 */
  esp -= 4; W32(esp, 0x424587u); SPILL(); f_424339(); if (g_unwind) return; RELOAD();
/* 424587: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 424589: mov esi, eax */
  esi = eax;
/* 42458b: call 0x4011d9 */
  esp -= 4; W32(esp, 0x424590u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 424590: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 424591: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 424592: mov eax, esi */
  eax = esi;
/* 424594: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 424595: ret  */
  esp += 4; SPILL(); return;
}

void f_424596(void) {
  LOAD_REGS();
L_424596: /* 424596: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424597: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 424599: call 0x4011b7 */
  esp -= 4; W32(esp, 0x42459eu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 42459e: call 0x4243fa */
  esp -= 4; W32(esp, 0x4245a3u); SPILL(); f_4243fa(); if (g_unwind) return; RELOAD();
/* 4245a3: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4245a5: mov esi, eax */
  esi = eax;
/* 4245a7: call 0x4011d9 */
  esp -= 4; W32(esp, 0x4245acu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 4245ac: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4245ad: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4245ae: mov eax, esi */
  eax = esi;
/* 4245b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4245b1: ret  */
  esp += 4; SPILL(); return;
}

void f_4245b2(void) {
  LOAD_REGS();
L_4245b2: /* 4245b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4245b3: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4245b5: call 0x4011b7 */
  esp -= 4; W32(esp, 0x4245bau); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 4245ba: call 0x424431 */
  esp -= 4; W32(esp, 0x4245bfu); SPILL(); f_424431(); if (g_unwind) return; RELOAD();
/* 4245bf: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4245c1: mov esi, eax */
  esi = eax;
/* 4245c3: call 0x4011d9 */
  esp -= 4; W32(esp, 0x4245c8u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 4245c8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4245c9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4245ca: mov eax, esi */
  eax = esi;
/* 4245cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4245cd: ret  */
  esp += 4; SPILL(); return;
}

void f_4245ce(void) {
  LOAD_REGS();
L_4245ce: /* 4245ce: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4245cf: mov ebp, esp */
  ebp = esp;
/* 4245d1: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4245d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4245d5: xor ebx, ebx */
  ebx = 0;
/* 4245d7: cmp word ptr [0x44dd60], -1 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x44dd60u))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4245df: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
/* 4245e2: je 0x4245f6 */
  if (zf) goto L_4245f6;
L_4245e4: /* 4245e4: mov eax, dword ptr [0x44dd60] */
  eax = R32((uint32_t)(0x44dd60u));
/* 4245e9: or word ptr [0x44dd60], 0xffff */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x44dd60u))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(0x44dd60u), r);
  }
/* 4245f1: jmp 0x424714 */
  goto L_424714;
L_4245f6: /* 4245f6: mov eax, dword ptr [0x44ab9c] */
  eax = R32((uint32_t)(0x44ab9cu));
/* 4245fb: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4245fe: jne 0x424609 */
  if (!zf) goto L_424609;
L_424600: /* 424600: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 424604: jmp 0x424714 */
  goto L_424714;
L_424609: /* 424609: cmp eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42460c: jne 0x424613 */
  if (!zf) goto L_424613;
L_42460e: /* 42460e: call 0x4257f4 */
  esp -= 4; W32(esp, 0x424613u); SPILL(); f_4257f4(); if (g_unwind) return; RELOAD();
L_424613: /* 424613: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424614: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 424615: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 424618: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424619: push dword ptr [0x44ab9c] */
  { uint32_t v = R32((uint32_t)(0x44ab9cu)); esp -= 4; W32(esp, v); }
/* 42461f: call dword ptr [0x4391fc] */
  esp -= 4; W32(esp, 0x424625u); SPILL(); call_ind(R32(0x4391fcu)); if (g_unwind) return; /* KERNEL32!GetConsoleMode */ RELOAD();
/* 424625: mov edi, dword ptr [0x4391f8] */
  edi = R32((uint32_t)(0x4391f8u));
/* 42462b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42462c: push dword ptr [0x44ab9c] */
  { uint32_t v = R32((uint32_t)(0x44ab9cu)); esp -= 4; W32(esp, v); }
/* 424632: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x424634u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 424634: xor esi, esi */
  esi = 0;
/* 424636: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_424637: /* 424637: cmp dword ptr [0x44dd64], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44dd64u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42463d: je 0x424693 */
  if (zf) goto L_424693;
L_42463f: /* 42463f: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 424642: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424643: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424644: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 424647: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424648: push dword ptr [0x44ab9c] */
  { uint32_t v = R32((uint32_t)(0x44ab9cu)); esp -= 4; W32(esp, v); }
/* 42464e: call dword ptr [0x439234] */
  esp -= 4; W32(esp, 0x424654u); SPILL(); call_ind(R32(0x439234u)); if (g_unwind) return; /* KERNEL32!ReadConsoleInputW */ RELOAD();
/* 424654: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 424656: jne 0x42467c */
  if (!zf) goto L_42467c;
L_424658: /* 424658: cmp dword ptr [0x44dd64], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44dd64u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42465f: jne 0x424717 */
  if (!zf) goto L_424717;
L_424665: /* 424665: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x42466bu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 42466b: cmp eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42466e: jne 0x424717 */
  if (!zf) goto L_424717;
L_424674: /* 424674: mov dword ptr [0x44dd64], ebx */
  W32((uint32_t)(0x44dd64u), ebx);
/* 42467a: jmp 0x424682 */
  goto L_424682;
L_42467c: /* 42467c: mov dword ptr [0x44dd64], esi */
  W32((uint32_t)(0x44dd64u), esi);
L_424682: /* 424682: cmp dword ptr [ebp - 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424685: je 0x424717 */
  if (zf) goto L_424717;
L_42468b: /* 42468b: cmp dword ptr [0x44dd64], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44dd64u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424691: jne 0x4246b1 */
  if (!zf) goto L_4246b1;
L_424693: /* 424693: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 424696: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424697: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424698: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 42469b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42469c: push dword ptr [0x44ab9c] */
  { uint32_t v = R32((uint32_t)(0x44ab9cu)); esp -= 4; W32(esp, v); }
/* 4246a2: call dword ptr [0x439228] */
  esp -= 4; W32(esp, 0x4246a8u); SPILL(); call_ind(R32(0x439228u)); if (g_unwind) return; /* KERNEL32!ReadConsoleInputA */ RELOAD();
/* 4246a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4246aa: je 0x424717 */
  if (zf) goto L_424717;
L_4246ac: /* 4246ac: cmp dword ptr [ebp - 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4246af: je 0x424717 */
  if (zf) goto L_424717;
L_4246b1: /* 4246b1: cmp word ptr [ebp - 0x24], si */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffdcu))); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4246b5: jne 0x424637 */
  if (!zf) goto L_424637;
L_4246b7: /* 4246b7: cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4246ba: je 0x424637 */
  if (zf) goto L_424637;
L_4246c0: /* 4246c0: cmp dword ptr [0x44dd64], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44dd64u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4246c6: je 0x4246d5 */
  if (zf) goto L_4246d5;
L_4246c8: /* 4246c8: mov eax, dword ptr [ebp - 0x16] */
  eax = R32((uint32_t)(ebp + 0xffffffeau));
/* 4246cb: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4246ce: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 4246d1: jne 0x424703 */
  if (!zf) goto L_424703;
L_4246d3: /* 4246d3: jmp 0x4246df */
  goto L_4246df;
L_4246d5: /* 4246d5: mov al, byte ptr [ebp - 0x16] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffeau))) & 0xffu);
/* 4246d8: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4246da: mov byte ptr [ebp - 1], al */
  W8((uint32_t)(ebp + 0xffffffffu), (eax & 0xffu));
/* 4246dd: jne 0x424720 */
  if (!zf) goto L_424720;
L_4246df: /* 4246df: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 4246e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4246e3: call 0x42428c */
  esp -= 4; W32(esp, 0x4246e8u); SPILL(); f_42428c(); if (g_unwind) return; RELOAD();
/* 4246e8: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4246ea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4246eb: je 0x424637 */
  if (zf) goto L_424637;
L_4246f1: /* 4246f1: movzx cx, byte ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax)))) & 0xffffu);
/* 4246f5: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 4246f8: movzx ax, byte ptr [eax + 1] */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax + 0x1u)))) & 0xffffu);
/* 4246fd: mov word ptr [0x44dd60], ax */
  W16((uint32_t)(0x44dd60u), (eax & 0xffffu));
L_424703: /* 424703: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 424706: push dword ptr [0x44ab9c] */
  { uint32_t v = R32((uint32_t)(0x44ab9cu)); esp -= 4; W32(esp, v); }
/* 42470c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x42470eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 42470e: mov ax, word ptr [ebp - 8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u))) & 0xffffu);
/* 424712: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 424713: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_424714: /* 424714: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 424715: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 424716: ret  */
  esp += 4; SPILL(); return;
L_424717: /* 424717: mov dword ptr [ebp - 8], 0xffff */
  W32((uint32_t)(ebp + 0xfffffff8u), 0xffffu);
/* 42471e: jmp 0x424703 */
  goto L_424703;
L_424720: /* 424720: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424721: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 424724: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424725: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424726: lea eax, [ebp - 1] */
  eax = (uint32_t)(ebp + 0xffffffffu);
/* 424729: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42472a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42472b: call dword ptr [0x439204] */
  esp -= 4; W32(esp, 0x424731u); SPILL(); call_ind(R32(0x439204u)); if (g_unwind) return; /* KERNEL32!GetConsoleCP */ RELOAD();
/* 424731: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424732: call dword ptr [0x4390bc] */
  esp -= 4; W32(esp, 0x424738u); SPILL(); call_ind(R32(0x4390bcu)); if (g_unwind) return; /* KERNEL32!MultiByteToWideChar */ RELOAD();
/* 424738: jmp 0x424703 */
  goto L_424703;
}

void f_42473a(void) {
  LOAD_REGS();
L_42473a: /* 42473a: cmp word ptr [0x44dd60], -1 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x44dd60u))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 424742: je 0x424752 */
  if (zf) goto L_424752;
L_424744: /* 424744: mov eax, dword ptr [0x44dd60] */
  eax = R32((uint32_t)(0x44dd60u));
/* 424749: or word ptr [0x44dd60], 0xffff */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x44dd60u))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  W16((uint32_t)(0x44dd60u), r);
  }
/* 424751: ret  */
  esp += 4; SPILL(); return;
L_424752: /* 424752: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424753: call 0x4245ce */
  esp -= 4; W32(esp, 0x424758u); SPILL(); f_4245ce(); if (g_unwind) return; RELOAD();
/* 424758: mov esi, eax */
  esi = eax;
/* 42475a: cmp si, -1 */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42475e: je 0x424772 */
  if (zf) goto L_424772;
L_424760: /* 424760: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424761: call 0x423206 */
  esp -= 4; W32(esp, 0x424766u); SPILL(); f_423206(); if (g_unwind) return; RELOAD();
/* 424766: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42476a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42476b: je 0x424772 */
  if (zf) goto L_424772;
L_42476d: /* 42476d: mov ax, si */
  eax = (eax & 0xffff0000u) | ((uint32_t)((esi & 0xffffu)) & 0xffffu);
/* 424770: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 424771: ret  */
  esp += 4; SPILL(); return;
L_424772: /* 424772: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 424776: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 424777: ret  */
  esp += 4; SPILL(); return;
}

void f_424778(void) {
  LOAD_REGS();
L_424778: /* 424778: mov ax, word ptr [esp + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x4u))) & 0xffffu);
/* 42477d: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 424781: je 0x424798 */
  if (zf) goto L_424798;
L_424783: /* 424783: cmp word ptr [0x44dd60], -1 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(0x44dd60u))); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42478b: jne 0x424798 */
  if (!zf) goto L_424798;
L_42478d: /* 42478d: and ax, 0xff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffu);
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 424791: mov word ptr [0x44dd60], ax */
  W16((uint32_t)(0x44dd60u), (eax & 0xffffu));
/* 424797: ret  */
  esp += 4; SPILL(); return;
L_424798: /* 424798: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 42479c: ret  */
  esp += 4; SPILL(); return;
}

void f_42479d(void) {
  LOAD_REGS();
L_42479d: /* 42479d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42479e: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4247a0: call 0x4011b7 */
  esp -= 4; W32(esp, 0x4247a5u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 4247a5: call 0x4245ce */
  esp -= 4; W32(esp, 0x4247aau); SPILL(); f_4245ce(); if (g_unwind) return; RELOAD();
/* 4247aa: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4247ac: mov esi, eax */
  esi = eax;
/* 4247ae: call 0x4011d9 */
  esp -= 4; W32(esp, 0x4247b3u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 4247b3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4247b4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4247b5: mov ax, si */
  eax = (eax & 0xffff0000u) | ((uint32_t)((esi & 0xffffu)) & 0xffffu);
/* 4247b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4247b9: ret  */
  esp += 4; SPILL(); return;
}

void f_4247ba(void) {
  LOAD_REGS();
L_4247ba: /* 4247ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4247bb: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4247bd: call 0x4011b7 */
  esp -= 4; W32(esp, 0x4247c2u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 4247c2: call 0x42473a */
  esp -= 4; W32(esp, 0x4247c7u); SPILL(); f_42473a(); if (g_unwind) return; RELOAD();
/* 4247c7: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4247c9: mov esi, eax */
  esi = eax;
/* 4247cb: call 0x4011d9 */
  esp -= 4; W32(esp, 0x4247d0u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 4247d0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4247d1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4247d2: mov ax, si */
  eax = (eax & 0xffff0000u) | ((uint32_t)((esi & 0xffffu)) & 0xffffu);
/* 4247d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4247d6: ret  */
  esp += 4; SPILL(); return;
}

void f_4247d7(void) {
  LOAD_REGS();
L_4247d7: /* 4247d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4247d8: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4247da: call 0x4011b7 */
  esp -= 4; W32(esp, 0x4247dfu); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 4247df: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4247e3: call 0x424778 */
  esp -= 4; W32(esp, 0x4247e8u); SPILL(); f_424778(); if (g_unwind) return; RELOAD();
/* 4247e8: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4247ea: mov esi, eax */
  esi = eax;
/* 4247ec: call 0x4011d9 */
  esp -= 4; W32(esp, 0x4247f1u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 4247f1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4247f4: mov ax, si */
  eax = (eax & 0xffff0000u) | ((uint32_t)((esi & 0xffffu)) & 0xffffu);
/* 4247f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4247f8: ret  */
  esp += 4; SPILL(); return;
}

void f_4247f9(void) {
  LOAD_REGS();
L_4247f9: /* 4247f9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4247fa: mov ebp, esp */
  ebp = esp;
/* 4247fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4247fd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4247fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4247ff: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 424801: xor esi, esi */
  esi = 0;
/* 424803: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424804: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 424807: call 0x415c2e */
  esp -= 4; W32(esp, 0x42480cu); SPILL(); f_415c2e(); if (g_unwind) return; RELOAD();
/* 42480c: mov ebx, eax */
  ebx = eax;
/* 42480e: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 424811: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 424814: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424816: je 0x4248b0 */
  if (zf) goto L_4248b0;
L_42481c: /* 42481c: cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424820: je 0x42482b */
  if (zf) goto L_42482b;
L_424822: /* 424822: cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424826: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 424829: jne 0x424832 */
  if (!zf) goto L_424832;
L_42482b: /* 42482b: mov dword ptr [ebp - 4], 9 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x9u);
L_424832: /* 424832: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_424833: /* 424833: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424834: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 424837: xor edi, edi */
  edi = 0;
/* 424839: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42483a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42483b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42483e: call 0x415f89 */
  esp -= 4; W32(esp, 0x424843u); SPILL(); f_415f89(); if (g_unwind) return; RELOAD();
/* 424843: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424846: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 424847: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424848: jne 0x424852 */
  if (!zf) goto L_424852;
L_42484a: /* 42484a: call dword ptr [0x43923c] */
  esp -= 4; W32(esp, 0x424850u); SPILL(); call_ind(R32(0x43923cu)); if (g_unwind) return; /* KERNEL32!UnlockFile */ RELOAD();
/* 424850: jmp 0x424858 */
  goto L_424858;
L_424852: /* 424852: call dword ptr [0x439238] */
  esp -= 4; W32(esp, 0x424858u); SPILL(); call_ind(R32(0x439238u)); if (g_unwind) return; /* KERNEL32!LockFile */ RELOAD();
L_424858: /* 424858: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42485a: jne 0x424864 */
  if (!zf) goto L_424864;
L_42485c: /* 42485c: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x424862u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 424862: mov edi, eax */
  edi = eax;
L_424864: /* 424864: cmp dword ptr [ebp - 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 424867: jle 0x42487d */
  if ((zf || sf != of)) goto L_42487d;
L_424869: /* 424869: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42486b: je 0x4248ad */
  if (zf) goto L_4248ad;
L_42486d: /* 42486d: push 0x3e8 */
  { uint32_t v = 0x3e8u; esp -= 4; W32(esp, v); }
/* 424872: call dword ptr [0x439158] */
  esp -= 4; W32(esp, 0x424878u); SPILL(); call_ind(R32(0x439158u)); if (g_unwind) return; /* KERNEL32!Sleep */ RELOAD();
/* 424878: dec dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42487b: jmp 0x424833 */
  goto L_424833;
L_42487d: /* 42487d: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42487f: je 0x4248ad */
  if (zf) goto L_4248ad;
L_424881: /* 424881: cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424885: je 0x424896 */
  if (zf) goto L_424896;
L_424887: /* 424887: cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42488b: je 0x424896 */
  if (zf) goto L_424896;
L_42488d: /* 42488d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42488e: call 0x4102b7 */
  esp -= 4; W32(esp, 0x424893u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 424893: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 424894: jmp 0x4248a8 */
  goto L_4248a8;
L_424896: /* 424896: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42489bu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42489b: mov dword ptr [eax], 0x24 */
  W32((uint32_t)(eax), 0x24u);
/* 4248a1: call 0x4102ae */
  esp -= 4; W32(esp, 0x4248a6u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4248a6: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
L_4248a8: /* 4248a8: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4248ab: jmp 0x4248af */
  goto L_4248af;
L_4248ad: /* 4248ad: xor eax, eax */
  eax = 0;
L_4248af: /* 4248af: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4248b0: /* 4248b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4248b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4248b2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4248b3: ret  */
  esp += 4; SPILL(); return;
}

void f_4248b4(void) {
  LOAD_REGS();
L_4248b4: /* 4248b4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4248b6: push 0x440cf0 */
  { uint32_t v = 0x440cf0u; esp -= 4; W32(esp, v); }
/* 4248bb: call 0x40101f */
  esp -= 4; W32(esp, 0x4248c0u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 4248c0: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 4248c3: cmp ebx, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4248c9: jae 0x424943 */
  if (!cf) goto L_424943;
L_4248cb: /* 4248cb: mov eax, ebx */
  eax = ebx;
/* 4248cd: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4248d0: lea edi, [eax*4 + 0x449240] */
  edi = (uint32_t)(eax*4 + 0x449240u);
/* 4248d7: mov eax, ebx */
  eax = ebx;
/* 4248d9: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4248dc: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 4248df: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 4248e2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4248e4: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4248e9: je 0x424943 */
  if (zf) goto L_424943;
L_4248eb: /* 4248eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4248ec: call 0x415fca */
  esp -= 4; W32(esp, 0x4248f1u); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 4248f1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4248f2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4248f6: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4248f8: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4248fd: je 0x424913 */
  if (zf) goto L_424913;
L_4248ff: /* 4248ff: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 424902: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 424905: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 424906: call 0x4247f9 */
  esp -= 4; W32(esp, 0x42490bu); SPILL(); f_4247f9(); if (g_unwind) return; RELOAD();
/* 42490b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42490e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 424911: jmp 0x42492a */
  goto L_42492a;
L_424913: /* 424913: call 0x4102a5 */
  esp -= 4; W32(esp, 0x424918u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 424918: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 42491e: call 0x4102ae */
  esp -= 4; W32(esp, 0x424923u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 424923: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 424926: or dword ptr [ebp - 0x1c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_42492a: /* 42492a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42492e: call 0x42493b */
  esp -= 4; W32(esp, 0x424933u); SPILL(); f_42493b(); if (g_unwind) return; RELOAD();
/* 424933: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 424936: jmp 0x424959 */
  goto L_424959;
L_424943: /* 424943: call 0x4102a5 */
  esp -= 4; W32(esp, 0x424948u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 424948: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 42494e: call 0x4102ae */
  esp -= 4; W32(esp, 0x424953u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 424953: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 424956: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_424959: /* 424959: call 0x40105a */
  esp -= 4; W32(esp, 0x42495eu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42495e: ret  */
  esp += 4; SPILL(); return;
}

void f_424938(void) {
  LOAD_REGS();
L_424938: /* 424938: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
  SPILL(); f_42493b(); return;
}

void f_42493b(void) {
  LOAD_REGS();
L_42493b: /* 42493b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42493c: call 0x41603d */
  esp -= 4; W32(esp, 0x424941u); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 424941: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 424942: ret  */
  esp += 4; SPILL(); return;
}

void f_42495f(void) {
  LOAD_REGS();
L_42495f: /* 42495f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 424960: mov ebp, esp */
  ebp = esp;
/* 424962: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 424963: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 424966: and dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 42496a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42496b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42496c: mov esi, ebx */
  esi = ebx;
/* 42496e: call 0x40fc8d */
  esp -= 4; W32(esp, 0x424973u); SPILL(); f_40fc8d(); if (g_unwind) return; RELOAD();
/* 424973: cmp byte ptr [ebx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 424976: mov edi, eax */
  edi = eax;
/* 424978: je 0x4249b1 */
  if (zf) goto L_4249b1;
L_42497a: /* 42497a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42497b: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42497e: jne 0x42497a */
  if (!zf) goto L_42497a;
L_424980: /* 424980: jmp 0x4249b1 */
  goto L_4249b1;
L_424982: /* 424982: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424983: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 424984: call 0x426041 */
  esp -= 4; W32(esp, 0x424989u); SPILL(); f_426041(); if (g_unwind) return; RELOAD();
/* 424989: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42498b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42498c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42498d: jne 0x4249b6 */
  if (!zf) goto L_4249b6;
L_42498f: /* 42498f: cmp byte ptr [esi], 0x58 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 424992: jne 0x424a1c */
  if (!zf) goto L_424a1c;
L_424998: /* 424998: cmp dword ptr [ebp + 8], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42499c: jge 0x4249b6 */
  if ((sf == of)) goto L_4249b6;
L_42499e: /* 42499e: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 4249a0: mov eax, edi */
  eax = edi;
/* 4249a2: xor edx, edx */
  edx = 0;
/* 4249a4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4249a5: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x4249a5);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 4249a7: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 4249aa: add dl, 0x30 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4249ad: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 4249af: mov edi, eax */
  edi = eax;
L_4249b1: /* 4249b1: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 4249b2: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4249b4: jae 0x424982 */
  if (!cf) goto L_424982;
L_4249b6: /* 4249b6: cmp byte ptr [esi], 0x58 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4249b9: jne 0x424a1c */
  if (!zf) goto L_424a1c;
L_4249bb: /* 4249bb: cmp dword ptr [ebp + 8], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4249bf: jl 0x424a1c */
  if ((sf != of)) goto L_424a1c;
L_4249c1: /* 4249c1: mov byte ptr [esi], 0x61 */
  W8((uint32_t)(esi), 0x61u);
/* 4249c4: mov dword ptr [ebp + 8], 0x62 */
  W32((uint32_t)(ebp + 0x8u), 0x62u);
/* 4249cb: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4249d0u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4249d0: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 4249d2: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4249d7u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4249d7: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
L_4249da: /* 4249da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4249dc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4249dd: call 0x418bc2 */
  esp -= 4; W32(esp, 0x4249e2u); SPILL(); f_418bc2(); if (g_unwind) return; RELOAD();
/* 4249e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4249e4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4249e5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4249e6: je 0x4249f2 */
  if (zf) goto L_4249f2;
L_4249e8: /* 4249e8: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4249edu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4249ed: cmp dword ptr [eax], 0xd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4249f0: jne 0x424a0a */
  if (!zf) goto L_424a0a;
L_4249f2: /* 4249f2: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4249f7u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4249f7: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 4249fa: cmp dword ptr [ebp + 8], 0x7b */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4249fe: je 0x424a15 */
  if (zf) goto L_424a15;
L_424a00: /* 424a00: mov al, byte ptr [ebp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 424a03: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 424a06: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 424a08: jmp 0x4249da */
  goto L_4249da;
L_424a0a: /* 424a0a: call 0x4102a5 */
  esp -= 4; W32(esp, 0x424a0fu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 424a0f: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 424a11: mov eax, ebx */
  eax = ebx;
/* 424a13: jmp 0x424a1e */
  goto L_424a1e;
L_424a15: /* 424a15: call 0x4102a5 */
  esp -= 4; W32(esp, 0x424a1au); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 424a1a: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
L_424a1c: /* 424a1c: xor eax, eax */
  eax = 0;
L_424a1e: /* 424a1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 424a1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 424a20: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 424a21: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 424a22: ret  */
  esp += 4; SPILL(); return;
}

void f_424a23(void) {
  LOAD_REGS();
L_424a23: /* 424a23: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 424a24: mov ebp, esp */
  ebp = esp;
/* 424a26: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 424a29: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 424a2c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 424a2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424a2e: xor esi, esi */
  esi = 0;
/* 424a30: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 424a32: mov dword ptr [ebp - 0x1c], 0xc */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xcu);
/* 424a39: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 424a3c: jns 0x424a47 */
  if (!sf) goto L_424a47;
L_424a3e: /* 424a3e: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 424a41: mov byte ptr [ebp - 1], 0x10 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x10u);
/* 424a45: jmp 0x424a52 */
  goto L_424a52;
L_424a47: /* 424a47: and byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffffu), r);
  }
/* 424a4b: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_424a52: /* 424a52: mov eax, 0x8000 */
  eax = 0x8000u;
/* 424a57: test eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 424a59: jne 0x424a6c */
  if (!zf) goto L_424a6c;
L_424a5b: /* 424a5b: test dh, 0x40 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 424a5e: jne 0x424a68 */
  if (!zf) goto L_424a68;
L_424a60: /* 424a60: cmp dword ptr [0x449214], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x449214u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424a66: je 0x424a6c */
  if (zf) goto L_424a6c;
L_424a68: /* 424a68: or byte ptr [ebp - 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffffu), r);
  }
L_424a6c: /* 424a6c: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 424a6e: mov eax, edx */
  eax = edx;
/* 424a70: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 424a71: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 424a73: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 424a75: je 0x424a8f */
  if (zf) goto L_424a8f;
L_424a77: /* 424a77: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 424a78: je 0x424a86 */
  if (zf) goto L_424a86;
L_424a7a: /* 424a7a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 424a7b: jne 0x424aaa */
  if (!zf) goto L_424aaa;
L_424a7d: /* 424a7d: mov dword ptr [ebp - 0x10], 0xc0000000 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0xc0000000u);
/* 424a84: jmp 0x424a96 */
  goto L_424a96;
L_424a86: /* 424a86: mov dword ptr [ebp - 0x10], 0x40000000 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x40000000u);
/* 424a8d: jmp 0x424a96 */
  goto L_424a96;
L_424a8f: /* 424a8f: mov dword ptr [ebp - 0x10], 0x80000000 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x80000000u);
L_424a96: /* 424a96: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424a99: je 0x424adb */
  if (zf) goto L_424adb;
L_424a9b: /* 424a9b: cmp ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424a9e: je 0x424ad2 */
  if (zf) goto L_424ad2;
L_424aa0: /* 424aa0: cmp ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424aa3: je 0x424ac9 */
  if (zf) goto L_424ac9;
L_424aa5: /* 424aa5: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424aa8: je 0x424ac4 */
  if (zf) goto L_424ac4;
L_424aaa: /* 424aaa: call 0x4102a5 */
  esp -= 4; W32(esp, 0x424aafu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 424aaf: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 424ab5: call 0x4102ae */
  esp -= 4; W32(esp, 0x424abau); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 424aba: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 424abc: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 424abf: jmp 0x424cbb */
  goto L_424cbb;
L_424ac4: /* 424ac4: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
/* 424ac7: jmp 0x424ade */
  goto L_424ade;
L_424ac9: /* 424ac9: mov dword ptr [ebp - 8], 2 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x2u);
/* 424ad0: jmp 0x424ade */
  goto L_424ade;
L_424ad2: /* 424ad2: mov dword ptr [ebp - 8], 1 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x1u);
/* 424ad9: jmp 0x424ade */
  goto L_424ade;
L_424adb: /* 424adb: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
L_424ade: /* 424ade: mov eax, edx */
  eax = edx;
/* 424ae0: mov edx, 0x700 */
  edx = 0x700u;
/* 424ae5: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 424ae7: mov ecx, 0x400 */
  ecx = 0x400u;
/* 424aec: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 424aee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 424aef: mov edi, 0x100 */
  edi = 0x100u;
/* 424af4: jg 0x424b25 */
  if ((!zf && sf == of)) goto L_424b25;
L_424af6: /* 424af6: je 0x424b20 */
  if (zf) goto L_424b20;
L_424af8: /* 424af8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424afa: je 0x424b20 */
  if (zf) goto L_424b20;
L_424afc: /* 424afc: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424afe: je 0x424b17 */
  if (zf) goto L_424b17;
L_424b00: /* 424b00: cmp eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424b05: je 0x424b51 */
  if (zf) goto L_424b51;
L_424b07: /* 424b07: cmp eax, 0x300 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x300u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424b0c: jne 0x424b37 */
  if (!zf) goto L_424b37;
L_424b0e: /* 424b0e: mov dword ptr [ebp - 0xc], 2 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x2u);
/* 424b15: jmp 0x424b61 */
  goto L_424b61;
L_424b17: /* 424b17: mov dword ptr [ebp - 0xc], 4 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x4u);
/* 424b1e: jmp 0x424b61 */
  goto L_424b61;
L_424b20: /* 424b20: mov dword ptr [ebp - 0xc], ebx */
  W32((uint32_t)(ebp + 0xfffffff4u), ebx);
/* 424b23: jmp 0x424b61 */
  goto L_424b61;
L_424b25: /* 424b25: cmp eax, 0x500 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x500u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424b2a: je 0x424b5a */
  if (zf) goto L_424b5a;
L_424b2c: /* 424b2c: cmp eax, 0x600 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x600u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424b31: je 0x424b51 */
  if (zf) goto L_424b51;
L_424b33: /* 424b33: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424b35: je 0x424b5a */
  if (zf) goto L_424b5a;
L_424b37: /* 424b37: call 0x4102a5 */
  esp -= 4; W32(esp, 0x424b3cu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 424b3c: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 424b42: call 0x4102ae */
  esp -= 4; W32(esp, 0x424b47u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 424b47: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_424b49: /* 424b49: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 424b4c: jmp 0x424cba */
  goto L_424cba;
L_424b51: /* 424b51: mov dword ptr [ebp - 0xc], 5 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x5u);
/* 424b58: jmp 0x424b61 */
  goto L_424b61;
L_424b5a: /* 424b5a: mov dword ptr [ebp - 0xc], 1 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x1u);
L_424b61: /* 424b61: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 424b64: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 424b66: mov esi, 0x80 */
  esi = 0x80u;
/* 424b6b: je 0x424b7f */
  if (zf) goto L_424b7f;
L_424b6d: /* 424b6d: mov ecx, dword ptr [0x44f3dc] */
  ecx = R32((uint32_t)(0x44f3dcu));
/* 424b73: not ecx */
  ecx = ~ecx;
/* 424b75: and ecx, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 424b78: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 424b7a: js 0x424b7f */
  if (sf) goto L_424b7f;
L_424b7c: /* 424b7c: xor esi, esi */
  esi = 0;
/* 424b7e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_424b7f: /* 424b7f: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 424b81: je 0x424b9a */
  if (zf) goto L_424b9a;
L_424b83: /* 424b83: or byte ptr [ebp - 0xe], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff2u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff2u), r);
  }
/* 424b87: or esi, 0x4000000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 424b8d: cmp dword ptr [0x4491d4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4491d4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424b94: jne 0x424b9a */
  if (!zf) goto L_424b9a;
L_424b96: /* 424b96: or dword ptr [ebp - 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_424b9a: /* 424b9a: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 424b9d: je 0x424ba1 */
  if (zf) goto L_424ba1;
L_424b9f: /* 424b9f: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_424ba1: /* 424ba1: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 424ba3: je 0x424bad */
  if (zf) goto L_424bad;
L_424ba5: /* 424ba5: or esi, 0x8000000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 424bab: jmp 0x424bb7 */
  goto L_424bb7;
L_424bad: /* 424bad: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 424baf: je 0x424bb7 */
  if (zf) goto L_424bb7;
L_424bb1: /* 424bb1: or esi, 0x10000000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_424bb7: /* 424bb7: call 0x41605f */
  esp -= 4; W32(esp, 0x424bbcu); SPILL(); f_41605f(); if (g_unwind) return; RELOAD();
/* 424bbc: mov edi, eax */
  edi = eax;
/* 424bbe: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 424bc1: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424bc3: jne 0x424bdf */
  if (!zf) goto L_424bdf;
L_424bc5: /* 424bc5: call 0x4102a5 */
  esp -= 4; W32(esp, 0x424bcau); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 424bca: mov dword ptr [eax], 0x18 */
  W32((uint32_t)(eax), 0x18u);
/* 424bd0: call 0x4102ae */
  esp -= 4; W32(esp, 0x424bd5u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 424bd5: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
L_424bd8: /* 424bd8: mov eax, ebx */
  eax = ebx;
/* 424bda: jmp 0x424cba */
  goto L_424cba;
L_424bdf: /* 424bdf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 424be2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 424be4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424be5: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 424be8: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 424bee: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 424bf1: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 424bf3: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 424bf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424bf7: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 424bfa: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 424bfd: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 424c00: call dword ptr [0x439240] */
  esp -= 4; W32(esp, 0x424c06u); SPILL(); call_ind(R32(0x439240u)); if (g_unwind) return; /* KERNEL32!CreateFileA */ RELOAD();
/* 424c06: mov esi, eax */
  esi = eax;
/* 424c08: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424c0a: je 0x424c1e */
  if (zf) goto L_424c1e;
L_424c0c: /* 424c0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424c0d: call dword ptr [0x4390a4] */
  esp -= 4; W32(esp, 0x424c13u); SPILL(); call_ind(R32(0x4390a4u)); if (g_unwind) return; /* KERNEL32!GetFileType */ RELOAD();
/* 424c13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 424c15: jne 0x424c2d */
  if (!zf) goto L_424c2d;
L_424c17: /* 424c17: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424c18: call dword ptr [0x439044] */
  esp -= 4; W32(esp, 0x424c1eu); SPILL(); call_ind(R32(0x439044u)); if (g_unwind) return; /* KERNEL32!CloseHandle */ RELOAD();
L_424c1e: /* 424c1e: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x424c24u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 424c24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424c25: call 0x4102b7 */
  esp -= 4; W32(esp, 0x424c2au); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 424c2a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 424c2b: jmp 0x424bd8 */
  goto L_424bd8;
L_424c2d: /* 424c2d: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424c30: jne 0x424c38 */
  if (!zf) goto L_424c38;
L_424c32: /* 424c32: or byte ptr [ebp - 1], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffffu), r);
  }
/* 424c36: jmp 0x424c41 */
  goto L_424c41;
L_424c38: /* 424c38: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424c3b: jne 0x424c41 */
  if (!zf) goto L_424c41;
L_424c3d: /* 424c3d: or byte ptr [ebp - 1], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffffu), r);
  }
L_424c41: /* 424c41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424c42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 424c43: call 0x415e8e */
  esp -= 4; W32(esp, 0x424c48u); SPILL(); f_415e8e(); if (g_unwind) return; RELOAD();
/* 424c48: or byte ptr [ebp - 1], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffffu), r);
  }
/* 424c4c: mov eax, edi */
  eax = edi;
/* 424c4e: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 424c51: lea ebx, [eax*4 + 0x449240] */
  ebx = (uint32_t)(eax*4 + 0x449240u);
/* 424c58: mov eax, edi */
  eax = edi;
/* 424c5a: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 424c5d: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 424c60: mov al, byte ptr [ebp - 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffffu))) & 0xffu);
/* 424c63: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 424c64: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 424c65: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 424c67: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 424c6a: mov byte ptr [ebp - 1], al */
  W8((uint32_t)(ebp + 0xffffffffu), (eax & 0xffu));
/* 424c6d: and byte ptr [ebp - 1], 0x48 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x48u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  W8((uint32_t)(ebp + 0xffffffffu), r);
  }
/* 424c71: mov byte ptr [esi + ecx + 4], al */
  W8((uint32_t)(esi + ecx + 0x4u), (eax & 0xffu));
/* 424c75: jne 0x424ca3 */
  if (!zf) goto L_424ca3;
L_424c77: /* 424c77: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 424c79: jns 0x424ca3 */
  if (!sf) goto L_424ca3;
L_424c7b: /* 424c7b: test byte ptr [ebp + 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 424c7f: je 0x424ca3 */
  if (zf) goto L_424ca3;
L_424c81: /* 424c81: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 424c83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 424c85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 424c86: call 0x415c2e */
  esp -= 4; W32(esp, 0x424c8bu); SPILL(); f_415c2e(); if (g_unwind) return; RELOAD();
/* 424c8b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 424c8e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424c91: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 424c94: jne 0x424cbf */
  if (!zf) goto L_424cbf;
L_424c96: /* 424c96: call 0x4102ae */
  esp -= 4; W32(esp, 0x424c9bu); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 424c9b: cmp dword ptr [eax], 0x83 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x83u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424ca1: jne 0x424cfe */
  if (!zf) goto L_424cfe;
L_424ca3: /* 424ca3: cmp byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 424ca7: jne 0x424cb8 */
  if (!zf) goto L_424cb8;
L_424ca9: /* 424ca9: test byte ptr [ebp + 0x14], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 424cad: je 0x424cb8 */
  if (zf) goto L_424cb8;
L_424caf: /* 424caf: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 424cb1: lea eax, [eax + esi + 4] */
  eax = (uint32_t)(eax + esi + 0x4u);
/* 424cb5: or byte ptr [eax], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
L_424cb8: /* 424cb8: mov eax, edi */
  eax = edi;
L_424cba: /* 424cba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_424cbb: /* 424cbb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 424cbc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 424cbd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 424cbe: ret  */
  esp += 4; SPILL(); return;
L_424cbf: /* 424cbf: and byte ptr [ebp - 2], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffeu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffeu), r);
  }
/* 424cc3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 424cc5: lea eax, [ebp - 2] */
  eax = (uint32_t)(ebp + 0xfffffffeu);
/* 424cc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424cc9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 424cca: call 0x425013 */
  esp -= 4; W32(esp, 0x424ccfu); SPILL(); f_425013(); if (g_unwind) return; RELOAD();
/* 424ccf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 424cd2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 424cd4: jne 0x424cec */
  if (!zf) goto L_424cec;
L_424cd6: /* 424cd6: cmp byte ptr [ebp - 2], 0x1a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffeu))); uint8_t b = (uint8_t)(0x1au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 424cda: jne 0x424cec */
  if (!zf) goto L_424cec;
L_424cdc: /* 424cdc: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 424cdf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 424ce0: call 0x422fdc */
  esp -= 4; W32(esp, 0x424ce5u); SPILL(); f_422fdc(); if (g_unwind) return; RELOAD();
/* 424ce5: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424ce8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 424ce9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 424cea: je 0x424cfe */
  if (zf) goto L_424cfe;
L_424cec: /* 424cec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 424cee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 424cf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 424cf1: call 0x415c2e */
  esp -= 4; W32(esp, 0x424cf6u); SPILL(); f_415c2e(); if (g_unwind) return; RELOAD();
/* 424cf6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 424cf9: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424cfc: jne 0x424ca3 */
  if (!zf) goto L_424ca3;
L_424cfe: /* 424cfe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 424cff: call 0x415b10 */
  esp -= 4; W32(esp, 0x424d04u); SPILL(); f_415b10(); if (g_unwind) return; RELOAD();
/* 424d04: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 424d05: jmp 0x424b49 */
  goto L_424b49;
}

void f_424c4e(void) {
  LOAD_REGS();
  goto L_424c4e;
L_424b49: /* 424b49: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 424b4c: jmp 0x424cba */
  goto L_424cba;
L_424c4e: /* 424c4e: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 424c51: lea ebx, [eax*4 + 0x449240] */
  ebx = (uint32_t)(eax*4 + 0x449240u);
/* 424c58: mov eax, edi */
  eax = edi;
/* 424c5a: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 424c5d: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 424c60: mov al, byte ptr [ebp - 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffffu))) & 0xffu);
/* 424c63: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 424c64: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 424c65: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 424c67: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 424c6a: mov byte ptr [ebp - 1], al */
  W8((uint32_t)(ebp + 0xffffffffu), (eax & 0xffu));
/* 424c6d: and byte ptr [ebp - 1], 0x48 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x48u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  W8((uint32_t)(ebp + 0xffffffffu), r);
  }
/* 424c71: mov byte ptr [esi + ecx + 4], al */
  W8((uint32_t)(esi + ecx + 0x4u), (eax & 0xffu));
/* 424c75: jne 0x424ca3 */
  if (!zf) goto L_424ca3;
L_424c77: /* 424c77: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 424c79: jns 0x424ca3 */
  if (!sf) goto L_424ca3;
L_424c7b: /* 424c7b: test byte ptr [ebp + 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 424c7f: je 0x424ca3 */
  if (zf) goto L_424ca3;
L_424c81: /* 424c81: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 424c83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 424c85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 424c86: call 0x415c2e */
  esp -= 4; W32(esp, 0x424c8bu); SPILL(); f_415c2e(); if (g_unwind) return; RELOAD();
/* 424c8b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 424c8e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424c91: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 424c94: jne 0x424cbf */
  if (!zf) goto L_424cbf;
L_424c96: /* 424c96: call 0x4102ae */
  esp -= 4; W32(esp, 0x424c9bu); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 424c9b: cmp dword ptr [eax], 0x83 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x83u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424ca1: jne 0x424cfe */
  if (!zf) goto L_424cfe;
L_424ca3: /* 424ca3: cmp byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 424ca7: jne 0x424cb8 */
  if (!zf) goto L_424cb8;
L_424ca9: /* 424ca9: test byte ptr [ebp + 0x14], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 424cad: je 0x424cb8 */
  if (zf) goto L_424cb8;
L_424caf: /* 424caf: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 424cb1: lea eax, [eax + esi + 4] */
  eax = (uint32_t)(eax + esi + 0x4u);
/* 424cb5: or byte ptr [eax], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
L_424cb8: /* 424cb8: mov eax, edi */
  eax = edi;
L_424cba: /* 424cba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 424cbb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 424cbc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 424cbd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 424cbe: ret  */
  esp += 4; SPILL(); return;
L_424cbf: /* 424cbf: and byte ptr [ebp - 2], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffeu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffeu), r);
  }
/* 424cc3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 424cc5: lea eax, [ebp - 2] */
  eax = (uint32_t)(ebp + 0xfffffffeu);
/* 424cc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424cc9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 424cca: call 0x425013 */
  esp -= 4; W32(esp, 0x424ccfu); SPILL(); f_425013(); if (g_unwind) return; RELOAD();
/* 424ccf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 424cd2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 424cd4: jne 0x424cec */
  if (!zf) goto L_424cec;
L_424cd6: /* 424cd6: cmp byte ptr [ebp - 2], 0x1a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffeu))); uint8_t b = (uint8_t)(0x1au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 424cda: jne 0x424cec */
  if (!zf) goto L_424cec;
L_424cdc: /* 424cdc: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 424cdf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 424ce0: call 0x422fdc */
  esp -= 4; W32(esp, 0x424ce5u); SPILL(); f_422fdc(); if (g_unwind) return; RELOAD();
/* 424ce5: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424ce8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 424ce9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 424cea: je 0x424cfe */
  if (zf) goto L_424cfe;
L_424cec: /* 424cec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 424cee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 424cf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 424cf1: call 0x415c2e */
  esp -= 4; W32(esp, 0x424cf6u); SPILL(); f_415c2e(); if (g_unwind) return; RELOAD();
/* 424cf6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 424cf9: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424cfc: jne 0x424ca3 */
  if (!zf) goto L_424ca3;
L_424cfe: /* 424cfe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 424cff: call 0x415b10 */
  esp -= 4; W32(esp, 0x424d04u); SPILL(); f_415b10(); if (g_unwind) return; RELOAD();
/* 424d04: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 424d05: jmp 0x424b49 */
  goto L_424b49;
}

void f_424d0a(void) {
  LOAD_REGS();
L_424d0a: /* 424d0a: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 424d0c: push 0x440d00 */
  { uint32_t v = 0x440d00u; esp -= 4; W32(esp, v); }
/* 424d11: call 0x40101f */
  esp -= 4; W32(esp, 0x424d16u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 424d16: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 424d1a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 424d1e: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 424d21: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 424d24: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 424d27: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 424d2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424d2b: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 424d2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424d2f: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 424d31: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 424d32: call 0x424a23 */
  esp -= 4; W32(esp, 0x424d37u); SPILL(); f_424a23(); if (g_unwind) return; RELOAD();
/* 424d37: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 424d3a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 424d3d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 424d41: call 0x424d4f */
  esp -= 4; W32(esp, 0x424d46u); SPILL(); f_424d4f(); if (g_unwind) return; RELOAD();
/* 424d46: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 424d49: call 0x40105a */
  esp -= 4; W32(esp, 0x424d4eu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 424d4e: ret  */
  esp += 4; SPILL(); return;
}

void f_424d4f(void) {
  LOAD_REGS();
L_424d4f: /* 424d4f: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424d53: je 0x424d5e */
  if (zf) goto L_424d5e;
L_424d55: /* 424d55: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 424d58: call 0x41603d */
  esp -= 4; W32(esp, 0x424d5du); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 424d5d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_424d5e: /* 424d5e: ret  */
  esp += 4; SPILL(); return;
}

void f_424d5f(void) {
  LOAD_REGS();
L_424d5f: /* 424d5f: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 424d61: push 0x440d10 */
  { uint32_t v = 0x440d10u; esp -= 4; W32(esp, v); }
/* 424d66: call 0x40101f */
  esp -= 4; W32(esp, 0x424d6bu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 424d6b: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 424d6f: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 424d73: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 424d76: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 424d79: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 424d7c: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 424d7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424d80: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 424d83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424d84: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 424d87: call 0x424a23 */
  esp -= 4; W32(esp, 0x424d8cu); SPILL(); f_424a23(); if (g_unwind) return; RELOAD();
/* 424d8c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 424d8f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 424d92: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 424d96: call 0x424da4 */
  esp -= 4; W32(esp, 0x424d9bu); SPILL(); f_424da4(); if (g_unwind) return; RELOAD();
/* 424d9b: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 424d9e: call 0x40105a */
  esp -= 4; W32(esp, 0x424da3u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 424da3: ret  */
  esp += 4; SPILL(); return;
}

void f_424da4(void) {
  LOAD_REGS();
L_424da4: /* 424da4: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424da8: je 0x424db3 */
  if (zf) goto L_424db3;
L_424daa: /* 424daa: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 424dad: call 0x41603d */
  esp -= 4; W32(esp, 0x424db2u); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 424db2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_424db3: /* 424db3: ret  */
  esp += 4; SPILL(); return;
}

void f_424db4(void) {
  LOAD_REGS();
L_424db4: /* 424db4: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 424db6: push 0x440d20 */
  { uint32_t v = 0x440d20u; esp -= 4; W32(esp, v); }
/* 424dbb: call 0x40101f */
  esp -= 4; W32(esp, 0x424dc0u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 424dc0: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 424dc3: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 424dc6: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 424dc9: mov dword ptr [ebx], esi */
  W32((uint32_t)(ebx), esi);
/* 424dcb: mov dword ptr [ebp - 0x24], 0xc */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xcu);
/* 424dd2: and dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 424dd6: mov al, byte ptr [ebp + 0x10] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x10u))) & 0xffu);
/* 424dd9: and al, 0x80 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 424ddb: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 424ddd: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 424ddf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 424de0: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 424de3: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 424de6: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 424de9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424dea: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 424ded: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424dee: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 424df1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424df2: call dword ptr [0x439244] */
  esp -= 4; W32(esp, 0x424df8u); SPILL(); call_ind(R32(0x439244u)); if (g_unwind) return; /* KERNEL32!CreatePipe */ RELOAD();
/* 424df8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 424dfa: jne 0x424e10 */
  if (!zf) goto L_424e10;
L_424dfc: /* 424dfc: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x424e02u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 424e02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424e03: call 0x4102b7 */
  esp -= 4; W32(esp, 0x424e08u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 424e08: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 424e09: mov eax, esi */
  eax = esi;
/* 424e0b: jmp 0x424fa8 */
  goto L_424fa8;
L_424e10: /* 424e10: call 0x41605f */
  esp -= 4; W32(esp, 0x424e15u); SPILL(); f_41605f(); if (g_unwind) return; RELOAD();
/* 424e15: mov edi, eax */
  edi = eax;
/* 424e17: mov dword ptr [ebp - 0x30], edi */
  W32((uint32_t)(ebp + 0xffffffd0u), edi);
/* 424e1a: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424e1c: je 0x424f6c */
  if (zf) goto L_424f6c;
L_424e22: /* 424e22: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 424e26: mov ecx, edi */
  ecx = edi;
/* 424e28: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 424e2b: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 424e2e: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 424e31: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 424e38: mov byte ptr [ecx + eax*4 + 4], 0x89 */
  W8((uint32_t)(ecx + eax*4 + 0x4u), 0x89u);
/* 424e3d: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 424e40: call 0x424f2e */
  esp -= 4; W32(esp, 0x424e45u); SPILL(); f_424f2e(); if (g_unwind) return; RELOAD();
/* 424e45: call 0x41605f */
  esp -= 4; W32(esp, 0x424e4au); SPILL(); f_41605f(); if (g_unwind) return; RELOAD();
/* 424e4a: mov esi, eax */
  esi = eax;
/* 424e4c: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 424e4f: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424e52: je 0x424f4c */
  if (zf) goto L_424f4c;
L_424e58: /* 424e58: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 424e5f: mov ecx, esi */
  ecx = esi;
/* 424e61: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 424e64: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 424e67: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 424e6a: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 424e71: mov byte ptr [ecx + eax*4 + 4], 0x89 */
  W8((uint32_t)(ecx + eax*4 + 0x4u), 0x89u);
/* 424e76: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 424e7a: call 0x424f3f */
  esp -= 4; W32(esp, 0x424e7fu); SPILL(); f_424f3f(); if (g_unwind) return; RELOAD();
/* 424e7f: mov eax, 0x8000 */
  eax = 0x8000u;
/* 424e84: test dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 424e87: jne 0x424e97 */
  if (!zf) goto L_424e97;
L_424e89: /* 424e89: test byte ptr [ebp + 0x11], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x11u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 424e8d: jne 0x424ecd */
  if (!zf) goto L_424ecd;
L_424e8f: /* 424e8f: cmp dword ptr [0x449214], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x449214u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424e95: jne 0x424ecd */
  if (!zf) goto L_424ecd;
L_424e97: /* 424e97: mov ecx, edi */
  ecx = edi;
/* 424e99: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 424e9c: mov eax, edi */
  eax = edi;
/* 424e9e: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 424ea1: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 424ea4: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 424eab: lea eax, [ecx + eax*4 + 4] */
  eax = (uint32_t)(ecx + eax*4 + 0x4u);
/* 424eaf: and byte ptr [eax], 0x7f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 424eb2: mov ecx, esi */
  ecx = esi;
/* 424eb4: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 424eb7: mov eax, esi */
  eax = esi;
/* 424eb9: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 424ebc: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 424ebf: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 424ec6: lea eax, [ecx + eax*4 + 4] */
  eax = (uint32_t)(ecx + eax*4 + 0x4u);
/* 424eca: and byte ptr [eax], 0x7f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
L_424ecd: /* 424ecd: test byte ptr [ebp + 0x10], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 424ed1: je 0x424f09 */
  if (zf) goto L_424f09;
L_424ed3: /* 424ed3: mov ecx, edi */
  ecx = edi;
/* 424ed5: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 424ed8: mov eax, edi */
  eax = edi;
/* 424eda: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 424edd: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 424ee0: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 424ee7: lea eax, [ecx + eax*4 + 4] */
  eax = (uint32_t)(ecx + eax*4 + 0x4u);
/* 424eeb: or byte ptr [eax], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 424eee: mov ecx, esi */
  ecx = esi;
/* 424ef0: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 424ef3: mov eax, esi */
  eax = esi;
/* 424ef5: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 424ef8: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 424efb: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 424f02: lea eax, [ecx + eax*4 + 4] */
  eax = (uint32_t)(ecx + eax*4 + 0x4u);
/* 424f06: or byte ptr [eax], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
L_424f09: /* 424f09: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 424f0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 424f0d: call 0x415e8e */
  esp -= 4; W32(esp, 0x424f12u); SPILL(); f_415e8e(); if (g_unwind) return; RELOAD();
/* 424f12: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 424f15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424f16: call 0x415e8e */
  esp -= 4; W32(esp, 0x424f1bu); SPILL(); f_415e8e(); if (g_unwind) return; RELOAD();
/* 424f1b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 424f1e: call 0x4102a5 */
  esp -= 4; W32(esp, 0x424f23u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 424f23: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 424f26: jmp 0x424f7a */
  goto L_424f7a;
L_424f4c: /* 424f4c: mov ecx, edi */
  ecx = edi;
/* 424f4e: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 424f51: mov eax, edi */
  eax = edi;
/* 424f53: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 424f56: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 424f59: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 424f60: and byte ptr [ecx + eax*4 + 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax*4 + 0x4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ecx + eax*4 + 0x4u), r);
  }
/* 424f65: call 0x4102a5 */
  esp -= 4; W32(esp, 0x424f6au); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 424f6a: jmp 0x424f74 */
  goto L_424f74;
L_424f6c: /* 424f6c: call 0x4102a5 */
  esp -= 4; W32(esp, 0x424f71u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 424f71: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
L_424f74: /* 424f74: mov dword ptr [eax], 0x18 */
  W32((uint32_t)(eax), 0x18u);
L_424f7a: /* 424f7a: call 0x4102a5 */
  esp -= 4; W32(esp, 0x424f7fu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 424f7f: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424f82: je 0x424fa1 */
  if (zf) goto L_424fa1;
L_424f84: /* 424f84: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 424f87: mov esi, dword ptr [0x439044] */
  esi = R32((uint32_t)(0x439044u));
/* 424f8d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x424f8fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 424f8f: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 424f92: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x424f94u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 424f94: call 0x4102ae */
  esp -= 4; W32(esp, 0x424f99u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 424f99: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 424f9c: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 424f9f: jmp 0x424fa8 */
  goto L_424fa8;
L_424fa1: /* 424fa1: mov dword ptr [ebx], edi */
  W32((uint32_t)(ebx), edi);
/* 424fa3: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 424fa6: xor eax, eax */
  eax = 0;
L_424fa8: /* 424fa8: call 0x40105a */
  esp -= 4; W32(esp, 0x424fadu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 424fad: ret  */
  esp += 4; SPILL(); return;
}

void f_424e45(void) {
  LOAD_REGS();
L_424e45: /* 424e45: call 0x41605f */
  esp -= 4; W32(esp, 0x424e4au); SPILL(); f_41605f(); if (g_unwind) return; RELOAD();
/* 424e4a: mov esi, eax */
  esi = eax;
/* 424e4c: mov dword ptr [ebp - 0x34], esi */
  W32((uint32_t)(ebp + 0xffffffccu), esi);
/* 424e4f: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424e52: je 0x424f4c */
  if (zf) goto L_424f4c;
L_424e58: /* 424e58: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 424e5f: mov ecx, esi */
  ecx = esi;
/* 424e61: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 424e64: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 424e67: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 424e6a: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 424e71: mov byte ptr [ecx + eax*4 + 4], 0x89 */
  W8((uint32_t)(ecx + eax*4 + 0x4u), 0x89u);
/* 424e76: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 424e7a: call 0x424f3f */
  esp -= 4; W32(esp, 0x424e7fu); SPILL(); f_424f3f(); if (g_unwind) return; RELOAD();
/* 424e7f: mov eax, 0x8000 */
  eax = 0x8000u;
/* 424e84: test dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 424e87: jne 0x424e97 */
  if (!zf) goto L_424e97;
L_424e89: /* 424e89: test byte ptr [ebp + 0x11], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x11u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 424e8d: jne 0x424ecd */
  if (!zf) goto L_424ecd;
L_424e8f: /* 424e8f: cmp dword ptr [0x449214], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x449214u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424e95: jne 0x424ecd */
  if (!zf) goto L_424ecd;
L_424e97: /* 424e97: mov ecx, edi */
  ecx = edi;
/* 424e99: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 424e9c: mov eax, edi */
  eax = edi;
/* 424e9e: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 424ea1: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 424ea4: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 424eab: lea eax, [ecx + eax*4 + 4] */
  eax = (uint32_t)(ecx + eax*4 + 0x4u);
/* 424eaf: and byte ptr [eax], 0x7f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* 424eb2: mov ecx, esi */
  ecx = esi;
/* 424eb4: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 424eb7: mov eax, esi */
  eax = esi;
/* 424eb9: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 424ebc: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 424ebf: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 424ec6: lea eax, [ecx + eax*4 + 4] */
  eax = (uint32_t)(ecx + eax*4 + 0x4u);
/* 424eca: and byte ptr [eax], 0x7f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
L_424ecd: /* 424ecd: test byte ptr [ebp + 0x10], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 424ed1: je 0x424f09 */
  if (zf) goto L_424f09;
L_424ed3: /* 424ed3: mov ecx, edi */
  ecx = edi;
/* 424ed5: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 424ed8: mov eax, edi */
  eax = edi;
/* 424eda: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 424edd: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 424ee0: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 424ee7: lea eax, [ecx + eax*4 + 4] */
  eax = (uint32_t)(ecx + eax*4 + 0x4u);
/* 424eeb: or byte ptr [eax], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 424eee: mov ecx, esi */
  ecx = esi;
/* 424ef0: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 424ef3: mov eax, esi */
  eax = esi;
/* 424ef5: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 424ef8: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 424efb: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 424f02: lea eax, [ecx + eax*4 + 4] */
  eax = (uint32_t)(ecx + eax*4 + 0x4u);
/* 424f06: or byte ptr [eax], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
L_424f09: /* 424f09: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 424f0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 424f0d: call 0x415e8e */
  esp -= 4; W32(esp, 0x424f12u); SPILL(); f_415e8e(); if (g_unwind) return; RELOAD();
/* 424f12: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 424f15: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424f16: call 0x415e8e */
  esp -= 4; W32(esp, 0x424f1bu); SPILL(); f_415e8e(); if (g_unwind) return; RELOAD();
/* 424f1b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 424f1e: call 0x4102a5 */
  esp -= 4; W32(esp, 0x424f23u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 424f23: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 424f26: jmp 0x424f7a */
  goto L_424f7a;
L_424f4c: /* 424f4c: mov ecx, edi */
  ecx = edi;
/* 424f4e: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 424f51: mov eax, edi */
  eax = edi;
/* 424f53: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 424f56: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 424f59: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 424f60: and byte ptr [ecx + eax*4 + 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax*4 + 0x4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ecx + eax*4 + 0x4u), r);
  }
/* 424f65: call 0x4102a5 */
  esp -= 4; W32(esp, 0x424f6au); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 424f6a: jmp 0x424f74 */
  goto L_424f74;
L_424f74: /* 424f74: mov dword ptr [eax], 0x18 */
  W32((uint32_t)(eax), 0x18u);
L_424f7a: /* 424f7a: call 0x4102a5 */
  esp -= 4; W32(esp, 0x424f7fu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 424f7f: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424f82: je 0x424fa1 */
  if (zf) goto L_424fa1;
L_424f84: /* 424f84: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 424f87: mov esi, dword ptr [0x439044] */
  esi = R32((uint32_t)(0x439044u));
/* 424f8d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x424f8fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 424f8f: push dword ptr [ebp - 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd8u)); esp -= 4; W32(esp, v); }
/* 424f92: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x424f94u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 424f94: call 0x4102ae */
  esp -= 4; W32(esp, 0x424f99u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 424f99: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 424f9c: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 424f9f: jmp 0x424fa8 */
  goto L_424fa8;
L_424fa1: /* 424fa1: mov dword ptr [ebx], edi */
  W32((uint32_t)(ebx), edi);
/* 424fa3: mov dword ptr [ebx + 4], esi */
  W32((uint32_t)(ebx + 0x4u), esi);
/* 424fa6: xor eax, eax */
  eax = 0;
L_424fa8: /* 424fa8: call 0x40105a */
  esp -= 4; W32(esp, 0x424fadu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 424fad: ret  */
  esp += 4; SPILL(); return;
}

void f_424f28(void) {
  LOAD_REGS();
L_424f28: /* 424f28: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 424f2b: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
  SPILL(); f_424f2e(); return;
}

void f_424f2e(void) {
  LOAD_REGS();
L_424f2e: /* 424f2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 424f2f: call 0x41603d */
  esp -= 4; W32(esp, 0x424f34u); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 424f34: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 424f35: ret  */
  esp += 4; SPILL(); return;
}

void f_424f36(void) {
  LOAD_REGS();
L_424f36: /* 424f36: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 424f39: mov edi, dword ptr [ebp - 0x30] */
  edi = R32((uint32_t)(ebp + 0xffffffd0u));
/* 424f3c: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
  SPILL(); f_424f3f(); return;
}

void f_424f3f(void) {
  LOAD_REGS();
L_424f3f: /* 424f3f: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424f42: je 0x424f4b */
  if (zf) goto L_424f4b;
L_424f44: /* 424f44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424f45: call 0x41603d */
  esp -= 4; W32(esp, 0x424f4au); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 424f4a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_424f4b: /* 424f4b: ret  */
  esp += 4; SPILL(); return;
}

void f_424fae(void) {
  LOAD_REGS();
L_424fae: /* 424fae: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 424faf: mov ebp, esp */
  ebp = esp;
/* 424fb1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 424fb2: cmp dword ptr [0x44aba0], -2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44aba0u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424fb9: mov al, byte ptr [ebp + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x8u))) & 0xffu);
/* 424fbc: mov byte ptr [ebp + 0xb], al */
  W8((uint32_t)(ebp + 0xbu), (eax & 0xffu));
/* 424fbf: jne 0x424fc6 */
  if (!zf) goto L_424fc6;
L_424fc1: /* 424fc1: call 0x425813 */
  esp -= 4; W32(esp, 0x424fc6u); SPILL(); f_425813(); if (g_unwind) return; RELOAD();
L_424fc6: /* 424fc6: mov eax, dword ptr [0x44aba0] */
  eax = R32((uint32_t)(0x44aba0u));
/* 424fcb: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 424fce: je 0x424fed */
  if (zf) goto L_424fed;
L_424fd0: /* 424fd0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 424fd2: lea ecx, [ebp - 4] */
  ecx = (uint32_t)(ebp + 0xfffffffcu);
/* 424fd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 424fd6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 424fd8: lea ecx, [ebp + 0xb] */
  ecx = (uint32_t)(ebp + 0xbu);
/* 424fdb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 424fdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 424fdd: call dword ptr [0x439210] */
  esp -= 4; W32(esp, 0x424fe3u); SPILL(); call_ind(R32(0x439210u)); if (g_unwind) return; /* KERNEL32!WriteConsoleA */ RELOAD();
/* 424fe3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 424fe5: je 0x424fed */
  if (zf) goto L_424fed;
L_424fe7: /* 424fe7: movzx eax, byte ptr [ebp + 0xb] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xbu)));
/* 424feb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 424fec: ret  */
  esp += 4; SPILL(); return;
L_424fed: /* 424fed: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 424ff0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 424ff1: ret  */
  esp += 4; SPILL(); return;
}

void f_424ff2(void) {
  LOAD_REGS();
L_424ff2: /* 424ff2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 424ff3: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 424ff5: call 0x4011b7 */
  esp -= 4; W32(esp, 0x424ffau); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 424ffa: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 424ffe: call 0x424fae */
  esp -= 4; W32(esp, 0x425003u); SPILL(); f_424fae(); if (g_unwind) return; RELOAD();
/* 425003: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 425005: mov esi, eax */
  esi = eax;
/* 425007: call 0x4011d9 */
  esp -= 4; W32(esp, 0x42500cu); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 42500c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42500f: mov eax, esi */
  eax = esi;
/* 425011: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 425012: ret  */
  esp += 4; SPILL(); return;
}

void f_425013(void) {
  LOAD_REGS();
L_425013: /* 425013: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 425014: mov ebp, esp */
  ebp = esp;
/* 425016: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 425019: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 42501d: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425021: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 425022: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 425025: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 425026: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 425027: mov edx, ebx */
  edx = ebx;
/* 425029: je 0x4251d9 */
  if (zf) goto L_4251d9;
L_42502f: /* 42502f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 425032: mov ecx, eax */
  ecx = eax;
/* 425034: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 425037: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 42503a: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 42503d: lea edi, [ecx*4 + 0x449240] */
  edi = (uint32_t)(ecx*4 + 0x449240u);
/* 425044: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 425046: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 425049: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42504b: mov cl, byte ptr [eax + 4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x4u))) & 0xffu);
/* 42504e: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425051: jne 0x4251d9 */
  if (!zf) goto L_4251d9;
L_425057: /* 425057: test cl, 0x48 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x48u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42505a: je 0x425079 */
  if (zf) goto L_425079;
L_42505c: /* 42505c: mov al, byte ptr [eax + 5] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x5u))) & 0xffu);
/* 42505f: cmp al, 0xa */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 425061: je 0x425079 */
  if (zf) goto L_425079;
L_425063: /* 425063: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 425066: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 425068: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 42506a: lea edx, [ebx + 1] */
  edx = (uint32_t)(ebx + 0x1u);
/* 42506d: mov dword ptr [ebp - 8], 1 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x1u);
/* 425074: mov byte ptr [eax + esi + 5], 0xa */
  W8((uint32_t)(eax + esi + 0x5u), 0xau);
L_425079: /* 425079: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42507b: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 42507e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42507f: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 425082: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 425084: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 425085: push dword ptr [esi + eax] */
  { uint32_t v = R32((uint32_t)(esi + eax)); esp -= 4; W32(esp, v); }
/* 425088: call dword ptr [0x439248] */
  esp -= 4; W32(esp, 0x42508eu); SPILL(); call_ind(R32(0x439248u)); if (g_unwind) return; /* KERNEL32!ReadFile */ RELOAD();
/* 42508e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 425090: jne 0x4250cb */
  if (!zf) goto L_4250cb;
L_425092: /* 425092: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x425098u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 425098: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 42509a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42509b: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42509d: jne 0x4250b3 */
  if (!zf) goto L_4250b3;
L_42509f: /* 42509f: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4250a4u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4250a4: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 4250aa: call 0x4102ae */
  esp -= 4; W32(esp, 0x4250afu); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4250af: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4250b1: jmp 0x4250c3 */
  goto L_4250c3;
L_4250b3: /* 4250b3: cmp eax, 0x6d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4250b6: je 0x4251d9 */
  if (zf) goto L_4251d9;
L_4250bc: /* 4250bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4250bd: call 0x4102b7 */
  esp -= 4; W32(esp, 0x4250c2u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 4250c2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4250c3: /* 4250c3: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4250c6: jmp 0x4251db */
  goto L_4251db;
L_4250cb: /* 4250cb: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4250cd: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4250d0: add dword ptr [ebp - 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4250d3: lea ecx, [esi + eax + 4] */
  ecx = (uint32_t)(esi + eax + 0x4u);
/* 4250d7: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 4250d9: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 4250db: jns 0x4251d4 */
  if (!sf) goto L_4251d4;
L_4250e1: /* 4250e1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4250e3: je 0x4250ee */
  if (zf) goto L_4250ee;
L_4250e5: /* 4250e5: cmp byte ptr [ebx], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4250e8: jne 0x4250ee */
  if (!zf) goto L_4250ee;
L_4250ea: /* 4250ea: or al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4250ec: jmp 0x4250f0 */
  goto L_4250f0;
L_4250ee: /* 4250ee: and al, 0xfb */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfbu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_4250f0: /* 4250f0: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 4250f2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4250f5: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 4250f8: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4250fa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4250fc: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 4250ff: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 425102: jae 0x4251ce */
  if (!cf) goto L_4251ce;
L_425108: /* 425108: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 42510b: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 42510d: cmp al, 0x1a */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42510f: je 0x4251be */
  if (zf) goto L_4251be;
L_425115: /* 425115: cmp al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 425117: je 0x425124 */
  if (zf) goto L_425124;
L_425119: /* 425119: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 42511b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 42511c: inc dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 42511f: jmp 0x4251b0 */
  goto L_4251b0;
L_425124: /* 425124: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 425125: cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 425128: jae 0x42513e */
  if (!cf) goto L_42513e;
L_42512a: /* 42512a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 42512d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42512e: cmp byte ptr [eax], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 425131: jne 0x425139 */
  if (!zf) goto L_425139;
L_425133: /* 425133: add dword ptr [ebp + 0x10], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 425137: jmp 0x425192 */
  goto L_425192;
L_425139: /* 425139: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 42513c: jmp 0x4251ac */
  goto L_4251ac;
L_42513e: /* 42513e: inc dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 425141: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 425143: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 425146: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425147: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425149: lea eax, [ebp - 1] */
  eax = (uint32_t)(ebp + 0xffffffffu);
/* 42514c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42514d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 42514f: push dword ptr [esi + eax] */
  { uint32_t v = R32((uint32_t)(esi + eax)); esp -= 4; W32(esp, v); }
/* 425152: call dword ptr [0x439248] */
  esp -= 4; W32(esp, 0x425158u); SPILL(); call_ind(R32(0x439248u)); if (g_unwind) return; /* KERNEL32!ReadFile */ RELOAD();
/* 425158: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42515a: jne 0x425166 */
  if (!zf) goto L_425166;
L_42515c: /* 42515c: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x425162u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 425162: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 425164: jne 0x4251ac */
  if (!zf) goto L_4251ac;
L_425166: /* 425166: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42516a: je 0x4251ac */
  if (zf) goto L_4251ac;
L_42516c: /* 42516c: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 42516e: test byte ptr [eax + esi + 4], 0x48 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x48u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425173: je 0x425187 */
  if (zf) goto L_425187;
L_425175: /* 425175: mov al, byte ptr [ebp - 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffffu))) & 0xffu);
/* 425178: cmp al, 0xa */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42517a: je 0x425192 */
  if (zf) goto L_425192;
L_42517c: /* 42517c: mov byte ptr [ebx], 0xd */
  W8((uint32_t)(ebx), 0xdu);
/* 42517f: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 425181: mov byte ptr [ecx + esi + 5], al */
  W8((uint32_t)(ecx + esi + 0x5u), (eax & 0xffu));
/* 425185: jmp 0x4251af */
  goto L_4251af;
L_425187: /* 425187: cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42518a: jne 0x425197 */
  if (!zf) goto L_425197;
L_42518c: /* 42518c: cmp byte ptr [ebp - 1], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 425190: jne 0x425197 */
  if (!zf) goto L_425197;
L_425192: /* 425192: mov byte ptr [ebx], 0xa */
  W8((uint32_t)(ebx), 0xau);
/* 425195: jmp 0x4251af */
  goto L_4251af;
L_425197: /* 425197: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425199: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 42519b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42519e: call 0x415c2e */
  esp -= 4; W32(esp, 0x4251a3u); SPILL(); f_415c2e(); if (g_unwind) return; RELOAD();
/* 4251a3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4251a6: cmp byte ptr [ebp - 1], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4251aa: je 0x4251b0 */
  if (zf) goto L_4251b0;
L_4251ac: /* 4251ac: mov byte ptr [ebx], 0xd */
  W8((uint32_t)(ebx), 0xdu);
L_4251af: /* 4251af: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_4251b0: /* 4251b0: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 4251b3: cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4251b6: jb 0x425108 */
  if (cf) goto L_425108;
L_4251bc: /* 4251bc: jmp 0x4251ce */
  goto L_4251ce;
L_4251be: /* 4251be: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4251c0: lea esi, [esi + eax + 4] */
  esi = (uint32_t)(esi + eax + 0x4u);
/* 4251c4: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 4251c6: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4251c8: jne 0x4251ce */
  if (!zf) goto L_4251ce;
L_4251ca: /* 4251ca: or al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4251cc: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
L_4251ce: /* 4251ce: sub ebx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 4251d1: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
L_4251d4: /* 4251d4: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 4251d7: jmp 0x4251db */
  goto L_4251db;
L_4251d9: /* 4251d9: xor eax, eax */
  eax = 0;
L_4251db: /* 4251db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4251dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4251dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4251de: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4251df: ret  */
  esp += 4; SPILL(); return;
}

void f_4251e0(void) {
  LOAD_REGS();
L_4251e0: /* 4251e0: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4251e2: push 0x440d38 */
  { uint32_t v = 0x440d38u; esp -= 4; W32(esp, v); }
/* 4251e7: call 0x40101f */
  esp -= 4; W32(esp, 0x4251ecu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 4251ec: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 4251ef: cmp ebx, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4251f5: jae 0x42526f */
  if (!cf) goto L_42526f;
L_4251f7: /* 4251f7: mov eax, ebx */
  eax = ebx;
/* 4251f9: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 4251fc: lea edi, [eax*4 + 0x449240] */
  edi = (uint32_t)(eax*4 + 0x449240u);
/* 425203: mov eax, ebx */
  eax = ebx;
/* 425205: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 425208: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 42520b: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 42520e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 425210: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425215: je 0x42526f */
  if (zf) goto L_42526f;
L_425217: /* 425217: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 425218: call 0x415fca */
  esp -= 4; W32(esp, 0x42521du); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 42521d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42521e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 425222: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 425224: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425229: je 0x42523f */
  if (zf) goto L_42523f;
L_42522b: /* 42522b: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42522e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 425231: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 425232: call 0x425013 */
  esp -= 4; W32(esp, 0x425237u); SPILL(); f_425013(); if (g_unwind) return; RELOAD();
/* 425237: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42523a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 42523d: jmp 0x425256 */
  goto L_425256;
L_42523f: /* 42523f: call 0x4102a5 */
  esp -= 4; W32(esp, 0x425244u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 425244: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 42524a: call 0x4102ae */
  esp -= 4; W32(esp, 0x42524fu); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 42524f: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 425252: or dword ptr [ebp - 0x1c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_425256: /* 425256: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42525a: call 0x425267 */
  esp -= 4; W32(esp, 0x42525fu); SPILL(); f_425267(); if (g_unwind) return; RELOAD();
/* 42525f: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 425262: jmp 0x425285 */
  goto L_425285;
L_42526f: /* 42526f: call 0x4102a5 */
  esp -= 4; W32(esp, 0x425274u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 425274: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 42527a: call 0x4102ae */
  esp -= 4; W32(esp, 0x42527fu); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 42527f: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 425282: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_425285: /* 425285: call 0x40105a */
  esp -= 4; W32(esp, 0x42528au); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42528a: ret  */
  esp += 4; SPILL(); return;
}

void f_425264(void) {
  LOAD_REGS();
L_425264: /* 425264: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
  SPILL(); f_425267(); return;
}

void f_425267(void) {
  LOAD_REGS();
L_425267: /* 425267: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 425268: call 0x41603d */
  esp -= 4; W32(esp, 0x42526du); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 42526d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42526e: ret  */
  esp += 4; SPILL(); return;
}

void f_42528b(void) {
  LOAD_REGS();
L_42528b: /* 42528b: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 42528f: mov ecx, eax */
  ecx = eax;
/* 425291: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 425294: sar ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 425297: mov ecx, dword ptr [ecx*4 + 0x449240] */
  ecx = R32((uint32_t)(ecx*4 + 0x449240u));
/* 42529e: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 4252a1: lea edx, [ecx + eax*4 + 4] */
  edx = (uint32_t)(ecx + eax*4 + 0x4u);
/* 4252a5: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 4252a7: xor eax, eax */
  eax = 0;
/* 4252a9: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 4252ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4252ac: mov esi, 0x8000 */
  esi = 0x8000u;
/* 4252b1: and eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4252b6: cmp dword ptr [esp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4252ba: jne 0x4252c1 */
  if (!zf) goto L_4252c1;
L_4252bc: /* 4252bc: and cl, 0x7f */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4252bf: jmp 0x4252ce */
  goto L_4252ce;
L_4252c1: /* 4252c1: cmp dword ptr [esp + 0xc], 0x4000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4252c9: jne 0x4252dd */
  if (!zf) goto L_4252dd;
L_4252cb: /* 4252cb: or cl, 0x80 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a | b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_4252ce: /* 4252ce: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 4252d0: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 4252d2: and eax, 0xffffc000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffc000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4252d7: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4252d9: mov byte ptr [edx], cl */
  W8((uint32_t)(edx), (ecx & 0xffu));
/* 4252db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4252dc: ret  */
  esp += 4; SPILL(); return;
L_4252dd: /* 4252dd: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4252e2u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4252e2: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 4252e8: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4252eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4252ec: ret  */
  esp += 4; SPILL(); return;
}

void f_4252ed(void) {
  LOAD_REGS();
L_4252ed: /* 4252ed: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 4252ef: push 0x440d48 */
  { uint32_t v = 0x440d48u; esp -= 4; W32(esp, v); }
/* 4252f4: call 0x40101f */
  esp -= 4; W32(esp, 0x4252f9u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 4252f9: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 4252fc: cmp ebx, dword ptr [0x44b130] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b130u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 425302: jae 0x425370 */
  if (!cf) goto L_425370;
L_425304: /* 425304: mov eax, ebx */
  eax = ebx;
/* 425306: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 425309: lea edi, [eax*4 + 0x449240] */
  edi = (uint32_t)(eax*4 + 0x449240u);
/* 425310: mov eax, ebx */
  eax = ebx;
/* 425312: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 425315: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 425318: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 42531b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 42531d: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425322: je 0x425370 */
  if (zf) goto L_425370;
L_425324: /* 425324: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 425325: call 0x415fca */
  esp -= 4; W32(esp, 0x42532au); SPILL(); f_415fca(); if (g_unwind) return; RELOAD();
/* 42532a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42532b: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42532f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 425331: test byte ptr [eax + esi + 4], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi + 0x4u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425336: je 0x425348 */
  if (zf) goto L_425348;
L_425338: /* 425338: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42533b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42533c: call 0x42528b */
  esp -= 4; W32(esp, 0x425341u); SPILL(); f_42528b(); if (g_unwind) return; RELOAD();
/* 425341: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 425342: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 425343: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 425346: jmp 0x425357 */
  goto L_425357;
L_425348: /* 425348: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42534du); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42534d: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 425353: or dword ptr [ebp - 0x1c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_425357: /* 425357: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42535b: call 0x425368 */
  esp -= 4; W32(esp, 0x425360u); SPILL(); f_425368(); if (g_unwind) return; RELOAD();
/* 425360: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 425363: jmp 0x42537e */
  goto L_42537e;
L_425370: /* 425370: call 0x4102a5 */
  esp -= 4; W32(esp, 0x425375u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 425375: mov dword ptr [eax], 9 */
  W32((uint32_t)(eax), 0x9u);
/* 42537b: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_42537e: /* 42537e: call 0x40105a */
  esp -= 4; W32(esp, 0x425383u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 425383: ret  */
  esp += 4; SPILL(); return;
}

void f_425365(void) {
  LOAD_REGS();
L_425365: /* 425365: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
  SPILL(); f_425368(); return;
}

void f_425368(void) {
  LOAD_REGS();
L_425368: /* 425368: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 425369: call 0x41603d */
  esp -= 4; W32(esp, 0x42536eu); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 42536e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42536f: ret  */
  esp += 4; SPILL(); return;
}

void f_425384(void) {
  LOAD_REGS();
L_425384: /* 425384: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425386: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 425388: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42538c: call 0x415ca2 */
  esp -= 4; W32(esp, 0x425391u); SPILL(); f_415ca2(); if (g_unwind) return; RELOAD();
/* 425391: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 425394: ret  */
  esp += 4; SPILL(); return;
}

void f_425395(void) {
  LOAD_REGS();
L_425395: /* 425395: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425397: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 425399: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42539b: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42539f: call 0x415dd0 */
  esp -= 4; W32(esp, 0x4253a4u); SPILL(); f_415dd0(); if (g_unwind) return; RELOAD();
/* 4253a4: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4253a7: ret  */
  esp += 4; SPILL(); return;
}

void f_4253a8(void) {
  LOAD_REGS();
L_4253a8: /* 4253a8: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4253ac: push 0x302 */
  { uint32_t v = 0x302u; esp -= 4; W32(esp, v); }
/* 4253b1: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4253b5: call 0x42574a */
  esp -= 4; W32(esp, 0x4253bau); SPILL(); f_42574a(); if (g_unwind) return; RELOAD();
/* 4253ba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4253bd: ret  */
  esp += 4; SPILL(); return;
}

void f_4253be(void) {
  LOAD_REGS();
L_4253be: /* 4253be: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4253bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4253c0: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 4253c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4253c5: xor edi, edi */
  edi = 0;
/* 4253c7: call 0x40fc8d */
  esp -= 4; W32(esp, 0x4253ccu); SPILL(); f_40fc8d(); if (g_unwind) return; RELOAD();
/* 4253cc: jmp 0x4253d0 */
  goto L_4253d0;
L_4253ce: /* 4253ce: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4253cf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_4253d0: /* 4253d0: cmp word ptr [esi], di */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4253d3: jne 0x4253ce */
  if (!zf) goto L_4253ce;
L_4253d5: /* 4253d5: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 4253d6: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 4253d7: cmp word ptr [esi], 0x58 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x58u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4253db: jne 0x42545c */
  if (!zf) goto L_42545c;
L_4253dd: /* 4253dd: cmp edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4253e0: jge 0x4253f8 */
  if ((sf == of)) goto L_4253f8;
L_4253e2: /* 4253e2: xor edx, edx */
  edx = 0;
/* 4253e4: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 4253e6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4253e7: div ecx */
  { uint32_t d = ecx; if (!d) d = guest_divzero(0x4253e7);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* 4253e9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4253ea: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4253ed: mov word ptr [esi], dx */
  W16((uint32_t)(esi), (edx & 0xffffu));
/* 4253f0: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 4253f1: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 4253f2: cmp word ptr [esi], 0x58 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x58u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4253f6: je 0x4253dd */
  if (zf) goto L_4253dd;
L_4253f8: /* 4253f8: cmp word ptr [esi], 0x58 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x58u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4253fc: jne 0x42545c */
  if (!zf) goto L_42545c;
L_4253fe: /* 4253fe: cmp edi, 5 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 425401: jl 0x42545c */
  if ((sf != of)) goto L_42545c;
L_425403: /* 425403: push 0x62 */
  { uint32_t v = 0x62u; esp -= 4; W32(esp, v); }
/* 425405: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 425406: mov word ptr [esi], 0x61 */
  W16((uint32_t)(esi), 0x61u);
/* 42540b: call 0x4102a5 */
  esp -= 4; W32(esp, 0x425410u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 425410: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 425412: call 0x4102a5 */
  esp -= 4; W32(esp, 0x425417u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 425417: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
L_42541a: /* 42541a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42541c: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 425420: call 0x419ae9 */
  esp -= 4; W32(esp, 0x425425u); SPILL(); f_419ae9(); if (g_unwind) return; RELOAD();
/* 425425: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 425427: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 425428: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 425429: je 0x425435 */
  if (zf) goto L_425435;
L_42542b: /* 42542b: call 0x4102a5 */
  esp -= 4; W32(esp, 0x425430u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 425430: cmp dword ptr [eax], 0xd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425433: jne 0x425448 */
  if (!zf) goto L_425448;
L_425435: /* 425435: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42543au); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42543a: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 42543d: cmp ebx, 0x7b */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425440: je 0x425455 */
  if (zf) goto L_425455;
L_425442: /* 425442: mov word ptr [esi], bx */
  W16((uint32_t)(esi), (ebx & 0xffffu));
/* 425445: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 425446: jmp 0x42541a */
  goto L_42541a;
L_425448: /* 425448: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42544du); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42544d: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 42544f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 425453: jmp 0x42545e */
  goto L_42545e;
L_425455: /* 425455: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42545au); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42545a: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
L_42545c: /* 42545c: xor eax, eax */
  eax = 0;
L_42545e: /* 42545e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42545f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 425460: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 425461: ret  */
  esp += 4; SPILL(); return;
}

void f_425462(void) {
  LOAD_REGS();
L_425462: /* 425462: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 425463: mov ebp, esp */
  ebp = esp;
/* 425465: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 425468: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 42546b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42546c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42546d: xor esi, esi */
  esi = 0;
/* 42546f: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 425471: mov dword ptr [ebp - 0x20], 0xc */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xcu);
/* 425478: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 42547b: jns 0x425486 */
  if (!sf) goto L_425486;
L_42547d: /* 42547d: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 425480: mov byte ptr [ebp - 1], 0x10 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x10u);
/* 425484: jmp 0x425491 */
  goto L_425491;
L_425486: /* 425486: and byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffffu), r);
  }
/* 42548a: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
L_425491: /* 425491: mov eax, 0x8000 */
  eax = 0x8000u;
/* 425496: test eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 425498: jne 0x4254ab */
  if (!zf) goto L_4254ab;
L_42549a: /* 42549a: test dh, 0x40 */
  { uint8_t a = (uint8_t)(((edx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42549d: jne 0x4254a7 */
  if (!zf) goto L_4254a7;
L_42549f: /* 42549f: cmp dword ptr [0x449214], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x449214u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4254a5: je 0x4254ab */
  if (zf) goto L_4254ab;
L_4254a7: /* 4254a7: or byte ptr [ebp - 1], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffffu), r);
  }
L_4254ab: /* 4254ab: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4254ad: mov eax, edx */
  eax = edx;
/* 4254af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4254b0: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4254b2: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 4254b4: je 0x4254ce */
  if (zf) goto L_4254ce;
L_4254b6: /* 4254b6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4254b7: je 0x4254c5 */
  if (zf) goto L_4254c5;
L_4254b9: /* 4254b9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4254ba: jne 0x4254e9 */
  if (!zf) goto L_4254e9;
L_4254bc: /* 4254bc: mov dword ptr [ebp - 0x10], 0xc0000000 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0xc0000000u);
/* 4254c3: jmp 0x4254d5 */
  goto L_4254d5;
L_4254c5: /* 4254c5: mov dword ptr [ebp - 0x10], 0x40000000 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x40000000u);
/* 4254cc: jmp 0x4254d5 */
  goto L_4254d5;
L_4254ce: /* 4254ce: mov dword ptr [ebp - 0x10], 0x80000000 */
  W32((uint32_t)(ebp + 0xfffffff0u), 0x80000000u);
L_4254d5: /* 4254d5: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4254d8: je 0x42551a */
  if (zf) goto L_42551a;
L_4254da: /* 4254da: cmp ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4254dd: je 0x425511 */
  if (zf) goto L_425511;
L_4254df: /* 4254df: cmp ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4254e2: je 0x425508 */
  if (zf) goto L_425508;
L_4254e4: /* 4254e4: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4254e7: je 0x425503 */
  if (zf) goto L_425503;
L_4254e9: /* 4254e9: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4254eeu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4254ee: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 4254f4: call 0x4102ae */
  esp -= 4; W32(esp, 0x4254f9u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4254f9: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 4254fb: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4254fe: jmp 0x4256fa */
  goto L_4256fa;
L_425503: /* 425503: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
/* 425506: jmp 0x42551d */
  goto L_42551d;
L_425508: /* 425508: mov dword ptr [ebp - 8], 2 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x2u);
/* 42550f: jmp 0x42551d */
  goto L_42551d;
L_425511: /* 425511: mov dword ptr [ebp - 8], 1 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x1u);
/* 425518: jmp 0x42551d */
  goto L_42551d;
L_42551a: /* 42551a: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
L_42551d: /* 42551d: mov eax, edx */
  eax = edx;
/* 42551f: mov edx, 0x700 */
  edx = 0x700u;
/* 425524: and eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 425526: mov ecx, 0x400 */
  ecx = 0x400u;
/* 42552b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42552d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42552e: mov edi, 0x100 */
  edi = 0x100u;
/* 425533: jg 0x425564 */
  if ((!zf && sf == of)) goto L_425564;
L_425535: /* 425535: je 0x42555f */
  if (zf) goto L_42555f;
L_425537: /* 425537: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425539: je 0x42555f */
  if (zf) goto L_42555f;
L_42553b: /* 42553b: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42553d: je 0x425556 */
  if (zf) goto L_425556;
L_42553f: /* 42553f: cmp eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425544: je 0x425590 */
  if (zf) goto L_425590;
L_425546: /* 425546: cmp eax, 0x300 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x300u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42554b: jne 0x425576 */
  if (!zf) goto L_425576;
L_42554d: /* 42554d: mov dword ptr [ebp - 0xc], 2 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x2u);
/* 425554: jmp 0x4255a0 */
  goto L_4255a0;
L_425556: /* 425556: mov dword ptr [ebp - 0xc], 4 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x4u);
/* 42555d: jmp 0x4255a0 */
  goto L_4255a0;
L_42555f: /* 42555f: mov dword ptr [ebp - 0xc], ebx */
  W32((uint32_t)(ebp + 0xfffffff4u), ebx);
/* 425562: jmp 0x4255a0 */
  goto L_4255a0;
L_425564: /* 425564: cmp eax, 0x500 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x500u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425569: je 0x425599 */
  if (zf) goto L_425599;
L_42556b: /* 42556b: cmp eax, 0x600 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x600u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425570: je 0x425590 */
  if (zf) goto L_425590;
L_425572: /* 425572: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425574: je 0x425599 */
  if (zf) goto L_425599;
L_425576: /* 425576: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42557bu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42557b: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 425581: call 0x4102ae */
  esp -= 4; W32(esp, 0x425586u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 425586: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_425588: /* 425588: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 42558b: jmp 0x4256f9 */
  goto L_4256f9;
L_425590: /* 425590: mov dword ptr [ebp - 0xc], 5 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x5u);
/* 425597: jmp 0x4255a0 */
  goto L_4255a0;
L_425599: /* 425599: mov dword ptr [ebp - 0xc], 1 */
  W32((uint32_t)(ebp + 0xfffffff4u), 0x1u);
L_4255a0: /* 4255a0: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 4255a3: test edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4255a5: mov esi, 0x80 */
  esi = 0x80u;
/* 4255aa: je 0x4255be */
  if (zf) goto L_4255be;
L_4255ac: /* 4255ac: mov ecx, dword ptr [0x44f3dc] */
  ecx = R32((uint32_t)(0x44f3dcu));
/* 4255b2: not ecx */
  ecx = ~ecx;
/* 4255b4: and ecx, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4255b7: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 4255b9: js 0x4255be */
  if (sf) goto L_4255be;
L_4255bb: /* 4255bb: xor esi, esi */
  esi = 0;
/* 4255bd: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_4255be: /* 4255be: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4255c0: je 0x4255d9 */
  if (zf) goto L_4255d9;
L_4255c2: /* 4255c2: or byte ptr [ebp - 0xe], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff2u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff2u), r);
  }
/* 4255c6: or esi, 0x4000000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 4255cc: cmp dword ptr [0x4491d4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x4491d4u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4255d3: jne 0x4255d9 */
  if (!zf) goto L_4255d9;
L_4255d5: /* 4255d5: or dword ptr [ebp - 8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_4255d9: /* 4255d9: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4255dc: je 0x4255e0 */
  if (zf) goto L_4255e0;
L_4255de: /* 4255de: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_4255e0: /* 4255e0: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4255e2: je 0x4255ec */
  if (zf) goto L_4255ec;
L_4255e4: /* 4255e4: or esi, 0x8000000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 4255ea: jmp 0x4255f6 */
  goto L_4255f6;
L_4255ec: /* 4255ec: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4255ee: je 0x4255f6 */
  if (zf) goto L_4255f6;
L_4255f0: /* 4255f0: or esi, 0x10000000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_4255f6: /* 4255f6: call 0x41605f */
  esp -= 4; W32(esp, 0x4255fbu); SPILL(); f_41605f(); if (g_unwind) return; RELOAD();
/* 4255fb: mov edi, eax */
  edi = eax;
/* 4255fd: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 425600: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425602: jne 0x42561e */
  if (!zf) goto L_42561e;
L_425604: /* 425604: call 0x4102a5 */
  esp -= 4; W32(esp, 0x425609u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 425609: mov dword ptr [eax], 0x18 */
  W32((uint32_t)(eax), 0x18u);
/* 42560f: call 0x4102ae */
  esp -= 4; W32(esp, 0x425614u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 425614: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
L_425617: /* 425617: mov eax, ebx */
  eax = ebx;
/* 425619: jmp 0x4256f9 */
  goto L_4256f9;
L_42561e: /* 42561e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 425621: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 425623: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 425624: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 425627: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 42562d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 425630: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 425632: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 425635: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425636: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 425639: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 42563c: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42563f: call dword ptr [0x43924c] */
  esp -= 4; W32(esp, 0x425645u); SPILL(); call_ind(R32(0x43924cu)); if (g_unwind) return; /* KERNEL32!CreateFileW */ RELOAD();
/* 425645: mov esi, eax */
  esi = eax;
/* 425647: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425649: je 0x42565d */
  if (zf) goto L_42565d;
L_42564b: /* 42564b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42564c: call dword ptr [0x4390a4] */
  esp -= 4; W32(esp, 0x425652u); SPILL(); call_ind(R32(0x4390a4u)); if (g_unwind) return; /* KERNEL32!GetFileType */ RELOAD();
/* 425652: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 425654: jne 0x42566c */
  if (!zf) goto L_42566c;
L_425656: /* 425656: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 425657: call dword ptr [0x439044] */
  esp -= 4; W32(esp, 0x42565du); SPILL(); call_ind(R32(0x439044u)); if (g_unwind) return; /* KERNEL32!CloseHandle */ RELOAD();
L_42565d: /* 42565d: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x425663u); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 425663: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425664: call 0x4102b7 */
  esp -= 4; W32(esp, 0x425669u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 425669: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42566a: jmp 0x425617 */
  goto L_425617;
L_42566c: /* 42566c: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42566f: jne 0x425677 */
  if (!zf) goto L_425677;
L_425671: /* 425671: or byte ptr [ebp - 1], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffffu), r);
  }
/* 425675: jmp 0x425680 */
  goto L_425680;
L_425677: /* 425677: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42567a: jne 0x425680 */
  if (!zf) goto L_425680;
L_42567c: /* 42567c: or byte ptr [ebp - 1], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffffu), r);
  }
L_425680: /* 425680: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 425681: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 425682: call 0x415e8e */
  esp -= 4; W32(esp, 0x425687u); SPILL(); f_415e8e(); if (g_unwind) return; RELOAD();
/* 425687: or byte ptr [ebp - 1], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffffu), r);
  }
/* 42568b: mov eax, edi */
  eax = edi;
/* 42568d: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 425690: lea ebx, [eax*4 + 0x449240] */
  ebx = (uint32_t)(eax*4 + 0x449240u);
/* 425697: mov eax, edi */
  eax = edi;
/* 425699: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42569c: lea esi, [eax + eax*8] */
  esi = (uint32_t)(eax + eax*8);
/* 42569f: mov al, byte ptr [ebp - 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffffu))) & 0xffu);
/* 4256a2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4256a3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4256a4: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 4256a6: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 4256a9: mov byte ptr [ebp - 1], al */
  W8((uint32_t)(ebp + 0xffffffffu), (eax & 0xffu));
/* 4256ac: and byte ptr [ebp - 1], 0x48 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x48u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  W8((uint32_t)(ebp + 0xffffffffu), r);
  }
/* 4256b0: mov byte ptr [esi + ecx + 4], al */
  W8((uint32_t)(esi + ecx + 0x4u), (eax & 0xffu));
/* 4256b4: jne 0x4256e2 */
  if (!zf) goto L_4256e2;
L_4256b6: /* 4256b6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 4256b8: jns 0x4256e2 */
  if (!sf) goto L_4256e2;
L_4256ba: /* 4256ba: test byte ptr [ebp + 0x14], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4256be: je 0x4256e2 */
  if (zf) goto L_4256e2;
L_4256c0: /* 4256c0: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4256c2: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4256c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4256c5: call 0x415c2e */
  esp -= 4; W32(esp, 0x4256cau); SPILL(); f_415c2e(); if (g_unwind) return; RELOAD();
/* 4256ca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4256cd: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4256d0: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 4256d3: jne 0x4256fe */
  if (!zf) goto L_4256fe;
L_4256d5: /* 4256d5: call 0x4102ae */
  esp -= 4; W32(esp, 0x4256dau); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 4256da: cmp dword ptr [eax], 0x83 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x83u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4256e0: jne 0x42573e */
  if (!zf) goto L_42573e;
L_4256e2: /* 4256e2: cmp byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4256e6: jne 0x4256f7 */
  if (!zf) goto L_4256f7;
L_4256e8: /* 4256e8: test byte ptr [ebp + 0x14], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4256ec: je 0x4256f7 */
  if (zf) goto L_4256f7;
L_4256ee: /* 4256ee: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 4256f0: lea eax, [eax + esi + 4] */
  eax = (uint32_t)(eax + esi + 0x4u);
/* 4256f4: or byte ptr [eax], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
L_4256f7: /* 4256f7: mov eax, edi */
  eax = edi;
L_4256f9: /* 4256f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4256fa: /* 4256fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4256fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4256fc: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4256fd: ret  */
  esp += 4; SPILL(); return;
L_4256fe: /* 4256fe: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 425702: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425704: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 425707: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425708: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 425709: call 0x425013 */
  esp -= 4; W32(esp, 0x42570eu); SPILL(); f_425013(); if (g_unwind) return; RELOAD();
/* 42570e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 425711: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 425713: jne 0x42572c */
  if (!zf) goto L_42572c;
L_425715: /* 425715: cmp word ptr [ebp - 0x14], 0x1a */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffecu))); uint16_t b = (uint16_t)(0x1au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42571a: jne 0x42572c */
  if (!zf) goto L_42572c;
L_42571c: /* 42571c: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 42571f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 425720: call 0x422fdc */
  esp -= 4; W32(esp, 0x425725u); SPILL(); f_422fdc(); if (g_unwind) return; RELOAD();
/* 425725: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425728: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 425729: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42572a: je 0x42573e */
  if (zf) goto L_42573e;
L_42572c: /* 42572c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42572e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 425730: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 425731: call 0x415c2e */
  esp -= 4; W32(esp, 0x425736u); SPILL(); f_415c2e(); if (g_unwind) return; RELOAD();
/* 425736: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 425739: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42573c: jne 0x4256e2 */
  if (!zf) goto L_4256e2;
L_42573e: /* 42573e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42573f: call 0x415b10 */
  esp -= 4; W32(esp, 0x425744u); SPILL(); f_415b10(); if (g_unwind) return; RELOAD();
/* 425744: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 425745: jmp 0x425588 */
  goto L_425588;
}

void f_42574a(void) {
  LOAD_REGS();
L_42574a: /* 42574a: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 42574c: push 0x440d58 */
  { uint32_t v = 0x440d58u; esp -= 4; W32(esp, v); }
/* 425751: call 0x40101f */
  esp -= 4; W32(esp, 0x425756u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 425756: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 42575a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42575e: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 425761: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 425764: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 425767: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 42576a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42576b: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 42576e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42576f: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 425771: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 425772: call 0x425462 */
  esp -= 4; W32(esp, 0x425777u); SPILL(); f_425462(); if (g_unwind) return; RELOAD();
/* 425777: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42577a: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 42577d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 425781: call 0x42578f */
  esp -= 4; W32(esp, 0x425786u); SPILL(); f_42578f(); if (g_unwind) return; RELOAD();
/* 425786: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 425789: call 0x40105a */
  esp -= 4; W32(esp, 0x42578eu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42578e: ret  */
  esp += 4; SPILL(); return;
}

void f_42578f(void) {
  LOAD_REGS();
L_42578f: /* 42578f: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425793: je 0x42579e */
  if (zf) goto L_42579e;
L_425795: /* 425795: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 425798: call 0x41603d */
  esp -= 4; W32(esp, 0x42579du); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 42579d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42579e: /* 42579e: ret  */
  esp += 4; SPILL(); return;
}

void f_42579f(void) {
  LOAD_REGS();
L_42579f: /* 42579f: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 4257a1: push 0x440d68 */
  { uint32_t v = 0x440d68u; esp -= 4; W32(esp, v); }
/* 4257a6: call 0x40101f */
  esp -= 4; W32(esp, 0x4257abu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 4257ab: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 4257af: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4257b3: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4257b6: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4257b9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4257bc: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 4257bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4257c0: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4257c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4257c4: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 4257c7: call 0x425462 */
  esp -= 4; W32(esp, 0x4257ccu); SPILL(); f_425462(); if (g_unwind) return; RELOAD();
/* 4257cc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4257cf: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 4257d2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4257d6: call 0x4257e4 */
  esp -= 4; W32(esp, 0x4257dbu); SPILL(); f_4257e4(); if (g_unwind) return; RELOAD();
/* 4257db: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 4257de: call 0x40105a */
  esp -= 4; W32(esp, 0x4257e3u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 4257e3: ret  */
  esp += 4; SPILL(); return;
}

void f_4257e4(void) {
  LOAD_REGS();
L_4257e4: /* 4257e4: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4257e8: je 0x4257f3 */
  if (zf) goto L_4257f3;
L_4257ea: /* 4257ea: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 4257ed: call 0x41603d */
  esp -= 4; W32(esp, 0x4257f2u); SPILL(); f_41603d(); if (g_unwind) return; RELOAD();
/* 4257f2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4257f3: /* 4257f3: ret  */
  esp += 4; SPILL(); return;
}

void f_4257f4(void) {
  LOAD_REGS();
L_4257f4: /* 4257f4: xor eax, eax */
  eax = 0;
/* 4257f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4257f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4257f8: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4257fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4257fb: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4257fd: push 0xc0000000 */
  { uint32_t v = 0xc0000000u; esp -= 4; W32(esp, v); }
/* 425802: push 0x440d74 */
  { uint32_t v = 0x440d74u; esp -= 4; W32(esp, v); }
/* 425807: call dword ptr [0x439240] */
  esp -= 4; W32(esp, 0x42580du); SPILL(); call_ind(R32(0x439240u)); if (g_unwind) return; /* KERNEL32!CreateFileA */ RELOAD();
/* 42580d: mov dword ptr [0x44ab9c], eax */
  W32((uint32_t)(0x44ab9cu), eax);
/* 425812: ret  */
  esp += 4; SPILL(); return;
}

void f_425813(void) {
  LOAD_REGS();
L_425813: /* 425813: xor eax, eax */
  eax = 0;
/* 425815: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425816: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425817: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 425819: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42581a: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 42581c: push 0x40000000 */
  { uint32_t v = 0x40000000u; esp -= 4; W32(esp, v); }
/* 425821: push 0x440d7c */
  { uint32_t v = 0x440d7cu; esp -= 4; W32(esp, v); }
/* 425826: call dword ptr [0x439240] */
  esp -= 4; W32(esp, 0x42582cu); SPILL(); call_ind(R32(0x439240u)); if (g_unwind) return; /* KERNEL32!CreateFileA */ RELOAD();
/* 42582c: mov dword ptr [0x44aba0], eax */
  W32((uint32_t)(0x44aba0u), eax);
/* 425831: ret  */
  esp += 4; SPILL(); return;
}

void f_425832(void) {
  LOAD_REGS();
L_425832: /* 425832: movzx eax, byte ptr [esp + 4] */
  eax = (uint32_t)(R8((uint32_t)(esp + 0x4u)));
/* 425837: mov cl, byte ptr [esp + 0xc] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xcu))) & 0xffu);
/* 42583b: test byte ptr [eax + 0x449341], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x449341u))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425841: jne 0x42585f */
  if (!zf) goto L_42585f;
L_425843: /* 425843: cmp dword ptr [esp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425848: je 0x425858 */
  if (zf) goto L_425858;
L_42584a: /* 42584a: movzx eax, word ptr [eax*2 + 0x43926a] */
  eax = (uint32_t)(R16((uint32_t)(eax*2 + 0x43926au)));
/* 425852: and eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 425856: jmp 0x42585a */
  goto L_42585a;
L_425858: /* 425858: xor eax, eax */
  eax = 0;
L_42585a: /* 42585a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42585c: jne 0x42585f */
  if (!zf) goto L_42585f;
L_42585e: /* 42585e: ret  */
  esp += 4; SPILL(); return;
L_42585f: /* 42585f: xor eax, eax */
  eax = 0;
/* 425861: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 425862: ret  */
  esp += 4; SPILL(); return;
}

void f_425863(void) {
  LOAD_REGS();
L_425863: /* 425863: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425865: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 425867: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42586b: call 0x425832 */
  esp -= 4; W32(esp, 0x425870u); SPILL(); f_425832(); if (g_unwind) return; RELOAD();
/* 425870: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 425873: ret  */
  esp += 4; SPILL(); return;
}

void f_425874(void) {
  LOAD_REGS();
L_425874: /* 425874: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 425876: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 425878: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42587c: call 0x425832 */
  esp -= 4; W32(esp, 0x425881u); SPILL(); f_425832(); if (g_unwind) return; RELOAD();
/* 425881: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 425884: ret  */
  esp += 4; SPILL(); return;
}

void f_425885(void) {
  LOAD_REGS();
L_425885: /* 425885: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 425887: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 425889: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42588d: call 0x425832 */
  esp -= 4; W32(esp, 0x425892u); SPILL(); f_425832(); if (g_unwind) return; RELOAD();
/* 425892: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 425895: ret  */
  esp += 4; SPILL(); return;
}

void f_425896(void) {
  LOAD_REGS();
L_425896: /* 425896: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425898: push 0x107 */
  { uint32_t v = 0x107u; esp -= 4; W32(esp, v); }
/* 42589d: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4258a1: call 0x425832 */
  esp -= 4; W32(esp, 0x4258a6u); SPILL(); f_425832(); if (g_unwind) return; RELOAD();
/* 4258a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4258a9: ret  */
  esp += 4; SPILL(); return;
}

void f_4258aa(void) {
  LOAD_REGS();
L_4258aa: /* 4258aa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4258ac: push 0x103 */
  { uint32_t v = 0x103u; esp -= 4; W32(esp, v); }
/* 4258b1: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4258b5: call 0x425832 */
  esp -= 4; W32(esp, 0x4258bau); SPILL(); f_425832(); if (g_unwind) return; RELOAD();
/* 4258ba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4258bd: ret  */
  esp += 4; SPILL(); return;
}

void f_4258be(void) {
  LOAD_REGS();
L_4258be: /* 4258be: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4258c0: push 0x117 */
  { uint32_t v = 0x117u; esp -= 4; W32(esp, v); }
/* 4258c5: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4258c9: call 0x425832 */
  esp -= 4; W32(esp, 0x4258ceu); SPILL(); f_425832(); if (g_unwind) return; RELOAD();
/* 4258ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4258d1: ret  */
  esp += 4; SPILL(); return;
}

void f_4258d2(void) {
  LOAD_REGS();
L_4258d2: /* 4258d2: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 4258d4: push 0x157 */
  { uint32_t v = 0x157u; esp -= 4; W32(esp, v); }
/* 4258d9: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4258dd: call 0x425832 */
  esp -= 4; W32(esp, 0x4258e2u); SPILL(); f_425832(); if (g_unwind) return; RELOAD();
/* 4258e2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4258e5: ret  */
  esp += 4; SPILL(); return;
}

void f_4258e6(void) {
  LOAD_REGS();
L_4258e6: /* 4258e6: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4258e8: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 4258ea: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4258ee: call 0x425832 */
  esp -= 4; W32(esp, 0x4258f3u); SPILL(); f_425832(); if (g_unwind) return; RELOAD();
/* 4258f3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4258f6: ret  */
  esp += 4; SPILL(); return;
}

void f_4258f7(void) {
  LOAD_REGS();
L_4258f7: /* 4258f7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4258f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4258fb: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4258ff: call 0x425832 */
  esp -= 4; W32(esp, 0x425904u); SPILL(); f_425832(); if (g_unwind) return; RELOAD();
/* 425904: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 425907: ret  */
  esp += 4; SPILL(); return;
}

void f_425908(void) {
  LOAD_REGS();
L_425908: /* 425908: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 42590a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42590c: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 425910: call 0x425832 */
  esp -= 4; W32(esp, 0x425915u); SPILL(); f_425832(); if (g_unwind) return; RELOAD();
/* 425915: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 425918: ret  */
  esp += 4; SPILL(); return;
}

void f_425919(void) {
  LOAD_REGS();
L_425919: /* 425919: cmp dword ptr [0x44b13c], 0x3a4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b13cu))); uint32_t b = (uint32_t)(0x3a4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425923: jne 0x42593d */
  if (!zf) goto L_42593d;
L_425925: /* 425925: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 425927: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 425929: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42592d: call 0x425832 */
  esp -= 4; W32(esp, 0x425932u); SPILL(); f_425832(); if (g_unwind) return; RELOAD();
/* 425932: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 425935: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 425937: je 0x42593d */
  if (zf) goto L_42593d;
L_425939: /* 425939: xor eax, eax */
  eax = 0;
/* 42593b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42593c: ret  */
  esp += 4; SPILL(); return;
L_42593d: /* 42593d: xor eax, eax */
  eax = 0;
/* 42593f: ret  */
  esp += 4; SPILL(); return;
}

void f_425940(void) {
  LOAD_REGS();
L_425940: /* 425940: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 425941: mov ebp, esp */
  ebp = esp;
/* 425943: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 425944: call 0x40137f */
  esp -= 4; W32(esp, 0x425949u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 425949: mov ecx, dword ptr [eax + 0x60] */
  ecx = R32((uint32_t)(eax + 0x60u));
/* 42594c: cmp ecx, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425952: je 0x42595b */
  if (zf) goto L_42595b;
L_425954: /* 425954: call 0x403c88 */
  esp -= 4; W32(esp, 0x425959u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
/* 425959: mov ecx, eax */
  ecx = eax;
L_42595b: /* 42595b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 42595e: cmp edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 425964: jbe 0x4259b9 */
  if ((cf | zf)) goto L_4259b9;
L_425966: /* 425966: and word ptr [ebp - 4], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42596b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42596c: xor eax, eax */
  eax = 0;
/* 42596e: lea edi, [ebp - 2] */
  edi = (uint32_t)(ebp + 0xfffffffeu);
/* 425971: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 425973: mov eax, edx */
  eax = edx;
/* 425975: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 425978: cmp dword ptr [ecx + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42597c: mov byte ptr [ebp + 0xa], al */
  W8((uint32_t)(ebp + 0xau), (eax & 0xffu));
/* 42597f: mov byte ptr [ebp + 0xb], dl */
  W8((uint32_t)(ebp + 0xbu), (edx & 0xffu));
/* 425982: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 425983: je 0x4259cf */
  if (zf) goto L_4259cf;
L_425985: /* 425985: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425987: push dword ptr [ecx + 0xc] */
  { uint32_t v = R32((uint32_t)(ecx + 0xcu)); esp -= 4; W32(esp, v); }
/* 42598a: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 42598d: push dword ptr [ecx + 4] */
  { uint32_t v = R32((uint32_t)(ecx + 0x4u)); esp -= 4; W32(esp, v); }
/* 425990: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425991: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 425993: lea eax, [ebp + 0xa] */
  eax = (uint32_t)(ebp + 0xau);
/* 425996: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425997: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425999: call 0x40528d */
  esp -= 4; W32(esp, 0x42599eu); SPILL(); f_40528d(); if (g_unwind) return; RELOAD();
/* 42599e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4259a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4259a3: je 0x4259cf */
  if (zf) goto L_4259cf;
L_4259a5: /* 4259a5: cmp word ptr [ebp - 2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffeu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4259aa: jne 0x4259cf */
  if (!zf) goto L_4259cf;
L_4259ac: /* 4259ac: test word ptr [ebp - 4], 0x107 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)(0x107u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 4259b2: je 0x4259cf */
  if (zf) goto L_4259cf;
L_4259b4: /* 4259b4: xor eax, eax */
  eax = 0;
/* 4259b6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4259b7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4259b8: ret  */
  esp += 4; SPILL(); return;
L_4259b9: /* 4259b9: movzx eax, dl */
  eax = (uint32_t)((edx & 0xffu));
/* 4259bc: test word ptr [eax*2 + 0x43926a], 0x107 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax*2 + 0x43926au))); uint16_t b = (uint16_t)(0x107u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 4259c6: jne 0x4259b4 */
  if (!zf) goto L_4259b4;
L_4259c8: /* 4259c8: test byte ptr [eax + ecx + 0x1d], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ecx + 0x1du))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4259cd: jne 0x4259b4 */
  if (!zf) goto L_4259b4;
L_4259cf: /* 4259cf: xor eax, eax */
  eax = 0;
/* 4259d1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4259d2: ret  */
  esp += 4; SPILL(); return;
}

void f_4259d3(void) {
  LOAD_REGS();
L_4259d3: /* 4259d3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4259d4: mov ebp, esp */
  ebp = esp;
/* 4259d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4259d7: call 0x40137f */
  esp -= 4; W32(esp, 0x4259dcu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4259dc: mov ecx, dword ptr [eax + 0x60] */
  ecx = R32((uint32_t)(eax + 0x60u));
/* 4259df: cmp ecx, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4259e5: je 0x4259ee */
  if (zf) goto L_4259ee;
L_4259e7: /* 4259e7: call 0x403c88 */
  esp -= 4; W32(esp, 0x4259ecu); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
/* 4259ec: mov ecx, eax */
  ecx = eax;
L_4259ee: /* 4259ee: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 4259f1: cmp edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4259f7: jbe 0x425a4c */
  if ((cf | zf)) goto L_425a4c;
L_4259f9: /* 4259f9: and word ptr [ebp - 4], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4259fe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4259ff: xor eax, eax */
  eax = 0;
/* 425a01: lea edi, [ebp - 2] */
  edi = (uint32_t)(ebp + 0xfffffffeu);
/* 425a04: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 425a06: mov eax, edx */
  eax = edx;
/* 425a08: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 425a0b: cmp dword ptr [ecx + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425a0f: mov byte ptr [ebp + 0xa], al */
  W8((uint32_t)(ebp + 0xau), (eax & 0xffu));
/* 425a12: mov byte ptr [ebp + 0xb], dl */
  W8((uint32_t)(ebp + 0xbu), (edx & 0xffu));
/* 425a15: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 425a16: je 0x425a62 */
  if (zf) goto L_425a62;
L_425a18: /* 425a18: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425a1a: push dword ptr [ecx + 0xc] */
  { uint32_t v = R32((uint32_t)(ecx + 0xcu)); esp -= 4; W32(esp, v); }
/* 425a1d: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 425a20: push dword ptr [ecx + 4] */
  { uint32_t v = R32((uint32_t)(ecx + 0x4u)); esp -= 4; W32(esp, v); }
/* 425a23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425a24: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 425a26: lea eax, [ebp + 0xa] */
  eax = (uint32_t)(ebp + 0xau);
/* 425a29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425a2a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425a2c: call 0x40528d */
  esp -= 4; W32(esp, 0x425a31u); SPILL(); f_40528d(); if (g_unwind) return; RELOAD();
/* 425a31: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 425a34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 425a36: je 0x425a62 */
  if (zf) goto L_425a62;
L_425a38: /* 425a38: cmp word ptr [ebp - 2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffeu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 425a3d: jne 0x425a62 */
  if (!zf) goto L_425a62;
L_425a3f: /* 425a3f: test word ptr [ebp - 4], 0x103 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)(0x103u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 425a45: je 0x425a62 */
  if (zf) goto L_425a62;
L_425a47: /* 425a47: xor eax, eax */
  eax = 0;
/* 425a49: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 425a4a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 425a4b: ret  */
  esp += 4; SPILL(); return;
L_425a4c: /* 425a4c: movzx eax, dl */
  eax = (uint32_t)((edx & 0xffu));
/* 425a4f: test word ptr [eax*2 + 0x43926a], 0x103 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax*2 + 0x43926au))); uint16_t b = (uint16_t)(0x103u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 425a59: jne 0x425a47 */
  if (!zf) goto L_425a47;
L_425a5b: /* 425a5b: test byte ptr [eax + ecx + 0x1d], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ecx + 0x1du))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425a60: jne 0x425a47 */
  if (!zf) goto L_425a47;
L_425a62: /* 425a62: xor eax, eax */
  eax = 0;
/* 425a64: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 425a65: ret  */
  esp += 4; SPILL(); return;
}

void f_425a66(void) {
  LOAD_REGS();
L_425a66: /* 425a66: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 425a67: mov ebp, esp */
  ebp = esp;
/* 425a69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 425a6a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 425a6b: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 425a6e: cmp ebx, 0xff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 425a74: jbe 0x425ae0 */
  if ((cf | zf)) goto L_425ae0;
L_425a76: /* 425a76: and word ptr [ebp - 4], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 425a7b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 425a7c: xor eax, eax */
  eax = 0;
/* 425a7e: lea edi, [ebp - 2] */
  edi = (uint32_t)(ebp + 0xfffffffeu);
/* 425a81: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 425a83: call 0x40137f */
  esp -= 4; W32(esp, 0x425a88u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 425a88: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 425a8b: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425a91: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 425a92: je 0x425a99 */
  if (zf) goto L_425a99;
L_425a94: /* 425a94: call 0x403c88 */
  esp -= 4; W32(esp, 0x425a99u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_425a99: /* 425a99: mov ecx, ebx */
  ecx = ebx;
/* 425a9b: shr ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 425a9e: mov byte ptr [ebp + 0xa], cl */
  W8((uint32_t)(ebp + 0xau), (ecx & 0xffu));
/* 425aa1: mov byte ptr [ebp + 0xb], bl */
  W8((uint32_t)(ebp + 0xbu), (ebx & 0xffu));
/* 425aa4: cmp dword ptr [eax + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425aa8: jne 0x425aae */
  if (!zf) goto L_425aae;
L_425aaa: /* 425aaa: xor eax, eax */
  eax = 0;
/* 425aac: jmp 0x425ae7 */
  goto L_425ae7;
L_425aae: /* 425aae: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425ab0: push dword ptr [eax + 0xc] */
  { uint32_t v = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, v); }
/* 425ab3: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 425ab6: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 425ab9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425aba: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 425abc: lea eax, [ebp + 0xa] */
  eax = (uint32_t)(ebp + 0xau);
/* 425abf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425ac0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425ac2: call 0x40528d */
  esp -= 4; W32(esp, 0x425ac7u); SPILL(); f_40528d(); if (g_unwind) return; RELOAD();
/* 425ac7: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 425aca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 425acc: je 0x425aaa */
  if (zf) goto L_425aaa;
L_425ace: /* 425ace: cmp word ptr [ebp - 2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffeu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 425ad3: jne 0x425aaa */
  if (!zf) goto L_425aaa;
L_425ad5: /* 425ad5: test byte ptr [ebp - 4], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425ad9: je 0x425aaa */
  if (zf) goto L_425aaa;
L_425adb: /* 425adb: xor eax, eax */
  eax = 0;
/* 425add: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 425ade: jmp 0x425ae7 */
  goto L_425ae7;
L_425ae0: /* 425ae0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 425ae1: call 0x40152b */
  esp -= 4; W32(esp, 0x425ae6u); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 425ae6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_425ae7: /* 425ae7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 425ae8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 425ae9: ret  */
  esp += 4; SPILL(); return;
}

void f_425aea(void) {
  LOAD_REGS();
L_425aea: /* 425aea: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 425aeb: mov ebp, esp */
  ebp = esp;
/* 425aed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 425aee: call 0x40137f */
  esp -= 4; W32(esp, 0x425af3u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 425af3: mov ecx, dword ptr [eax + 0x60] */
  ecx = R32((uint32_t)(eax + 0x60u));
/* 425af6: cmp ecx, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425afc: je 0x425b05 */
  if (zf) goto L_425b05;
L_425afe: /* 425afe: call 0x403c88 */
  esp -= 4; W32(esp, 0x425b03u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
/* 425b03: mov ecx, eax */
  ecx = eax;
L_425b05: /* 425b05: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 425b08: cmp edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 425b0e: jbe 0x425b63 */
  if ((cf | zf)) goto L_425b63;
L_425b10: /* 425b10: and word ptr [ebp - 4], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 425b15: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 425b16: xor eax, eax */
  eax = 0;
/* 425b18: lea edi, [ebp - 2] */
  edi = (uint32_t)(ebp + 0xfffffffeu);
/* 425b1b: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 425b1d: mov eax, edx */
  eax = edx;
/* 425b1f: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 425b22: cmp dword ptr [ecx + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425b26: mov byte ptr [ebp + 0xa], al */
  W8((uint32_t)(ebp + 0xau), (eax & 0xffu));
/* 425b29: mov byte ptr [ebp + 0xb], dl */
  W8((uint32_t)(ebp + 0xbu), (edx & 0xffu));
/* 425b2c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 425b2d: je 0x425b79 */
  if (zf) goto L_425b79;
L_425b2f: /* 425b2f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425b31: push dword ptr [ecx + 0xc] */
  { uint32_t v = R32((uint32_t)(ecx + 0xcu)); esp -= 4; W32(esp, v); }
/* 425b34: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 425b37: push dword ptr [ecx + 4] */
  { uint32_t v = R32((uint32_t)(ecx + 0x4u)); esp -= 4; W32(esp, v); }
/* 425b3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425b3b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 425b3d: lea eax, [ebp + 0xa] */
  eax = (uint32_t)(ebp + 0xau);
/* 425b40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 425b41: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 425b43: call 0x40528d */
  esp -= 4; W32(esp, 0x425b48u); SPILL(); f_40528d(); if (g_unwind) return; RELOAD();
/* 425b48: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 425b4b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 425b4d: je 0x425b79 */
  if (zf) goto L_425b79;
L_425b4f: /* 425b4f: cmp word ptr [ebp - 2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffeu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 425b54: jne 0x425b79 */
  if (!zf) goto L_425b79;
L_425b56: /* 425b56: test word ptr [ebp - 4], 0x117 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)(0x117u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 425b5c: je 0x425b79 */
  if (zf) goto L_425b79;
L_425b5e: /* 425b5e: xor eax, eax */
  eax = 0;
/* 425b60: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 425b61: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 425b62: ret  */
  esp += 4; SPILL(); return;
L_425b63: /* 425b63: movzx eax, dl */
  eax = (uint32_t)((edx & 0xffu));
/* 425b66: test word ptr [eax*2 + 0x43926a], 0x117 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax*2 + 0x43926au))); uint16_t b = (uint16_t)(0x117u);
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 425b70: jne 0x425b5e */
  if (!zf) goto L_425b5e;
L_425b72: /* 425b72: test byte ptr [eax + ecx + 0x1d], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ecx + 0x1du))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425b77: jne 0x425b5e */
  if (!zf) goto L_425b5e;
L_425b79: /* 425b79: xor eax, eax */
  eax = 0;
/* 425b7b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 425b7c: ret  */
  esp += 4; SPILL(); return;
}

void f_425b7d(void) {
  LOAD_REGS();
L_425b7d: /* 425b7d: cmp dword ptr [0x44b13c], 0x3a4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b13cu))); uint32_t b = (uint32_t)(0x3a4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425b87: jne 0x425ba1 */
  if (!zf) goto L_425ba1;
L_425b89: /* 425b89: cmp dword ptr [esp + 4], 0x829f */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x829fu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 425b91: jb 0x425ba1 */
  if (cf) goto L_425ba1;
L_425b93: /* 425b93: cmp dword ptr [esp + 4], 0x82f1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x82f1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 425b9b: ja 0x425ba1 */
  if ((!cf && !zf)) goto L_425ba1;
L_425b9d: /* 425b9d: xor eax, eax */
  eax = 0;
/* 425b9f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 425ba0: ret  */
  esp += 4; SPILL(); return;
L_425ba1: /* 425ba1: xor eax, eax */
  eax = 0;
/* 425ba3: ret  */
  esp += 4; SPILL(); return;
}

void f_425ba4(void) {
  LOAD_REGS();
L_425ba4: /* 425ba4: cmp dword ptr [0x44b13c], 0x3a4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b13cu))); uint32_t b = (uint32_t)(0x3a4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425bae: jne 0x425bcd */
  if (!zf) goto L_425bcd;
L_425bb0: /* 425bb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 425bb4: cmp eax, 0x8340 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8340u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 425bb9: jb 0x425bcd */
  if (cf) goto L_425bcd;
L_425bbb: /* 425bbb: cmp eax, 0x8396 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8396u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 425bc0: ja 0x425bcd */
  if ((!cf && !zf)) goto L_425bcd;
L_425bc2: /* 425bc2: cmp eax, 0x837f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x837fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425bc7: je 0x425bcd */
  if (zf) goto L_425bcd;
L_425bc9: /* 425bc9: xor eax, eax */
  eax = 0;
/* 425bcb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 425bcc: ret  */
  esp += 4; SPILL(); return;
L_425bcd: /* 425bcd: xor eax, eax */
  eax = 0;
/* 425bcf: ret  */
  esp += 4; SPILL(); return;
}

void f_425bd0(void) {
  LOAD_REGS();
L_425bd0: /* 425bd0: cmp dword ptr [0x44b13c], 0x3a4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44b13cu))); uint32_t b = (uint32_t)(0x3a4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425bda: jne 0x425bf9 */
  if (!zf) goto L_425bf9;
L_425bdc: /* 425bdc: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 425be0: cmp eax, 0x8141 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8141u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 425be5: jb 0x425bf9 */
  if (cf) goto L_425bf9;
L_425be7: /* 425be7: cmp eax, 0x81ac */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x81acu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 425bec: ja 0x425bf9 */
  if ((!cf && !zf)) goto L_425bf9;
L_425bee: /* 425bee: cmp eax, 0x817f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x817fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425bf3: je 0x425bf9 */
  if (zf) goto L_425bf9;
L_425bf5: /* 425bf5: xor eax, eax */
  eax = 0;
/* 425bf7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 425bf8: ret  */
  esp += 4; SPILL(); return;
L_425bf9: /* 425bf9: xor eax, eax */
  eax = 0;
/* 425bfb: ret  */
  esp += 4; SPILL(); return;
}

void f_425bfc(void) {
  LOAD_REGS();
L_425bfc: /* 425bfc: call 0x40137f */
  esp -= 4; W32(esp, 0x425c01u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 425c01: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 425c04: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425c0a: je 0x425c11 */
  if (zf) goto L_425c11;
L_425c0c: /* 425c0c: call 0x403c88 */
  esp -= 4; W32(esp, 0x425c11u); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_425c11: /* 425c11: cmp dword ptr [eax + 4], 0x3a4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x3a4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425c18: jne 0x425c43 */
  if (!zf) goto L_425c43;
L_425c1a: /* 425c1a: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 425c1e: mov edx, ecx */
  edx = ecx;
/* 425c20: shr edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 425c23: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* 425c26: test byte ptr [edx + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425c2b: je 0x425c43 */
  if (zf) goto L_425c43;
L_425c2d: /* 425c2d: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 425c30: test byte ptr [edx + eax + 0x1d], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + eax + 0x1du))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425c35: je 0x425c43 */
  if (zf) goto L_425c43;
L_425c37: /* 425c37: cmp ecx, 0x889f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x889fu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 425c3d: jae 0x425c43 */
  if (!cf) goto L_425c43;
L_425c3f: /* 425c3f: xor eax, eax */
  eax = 0;
/* 425c41: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 425c42: ret  */
  esp += 4; SPILL(); return;
L_425c43: /* 425c43: xor eax, eax */
  eax = 0;
/* 425c45: ret  */
  esp += 4; SPILL(); return;
}

void f_425c46(void) {
  LOAD_REGS();
L_425c46: /* 425c46: call 0x40137f */
  esp -= 4; W32(esp, 0x425c4bu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 425c4b: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 425c4e: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425c54: je 0x425c5b */
  if (zf) goto L_425c5b;
L_425c56: /* 425c56: call 0x403c88 */
  esp -= 4; W32(esp, 0x425c5bu); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_425c5b: /* 425c5b: cmp dword ptr [eax + 4], 0x3a4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x3a4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425c62: jne 0x425c95 */
  if (!zf) goto L_425c95;
L_425c64: /* 425c64: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 425c68: mov edx, ecx */
  edx = ecx;
/* 425c6a: shr edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 425c6d: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* 425c70: test byte ptr [edx + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425c75: je 0x425c95 */
  if (zf) goto L_425c95;
L_425c77: /* 425c77: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 425c7a: test byte ptr [edx + eax + 0x1d], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + eax + 0x1du))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425c7f: je 0x425c95 */
  if (zf) goto L_425c95;
L_425c81: /* 425c81: cmp ecx, 0x889f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x889fu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 425c87: jb 0x425c95 */
  if (cf) goto L_425c95;
L_425c89: /* 425c89: cmp ecx, 0x9872 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9872u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 425c8f: ja 0x425c95 */
  if ((!cf && !zf)) goto L_425c95;
L_425c91: /* 425c91: xor eax, eax */
  eax = 0;
/* 425c93: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 425c94: ret  */
  esp += 4; SPILL(); return;
L_425c95: /* 425c95: xor eax, eax */
  eax = 0;
/* 425c97: ret  */
  esp += 4; SPILL(); return;
}

void f_425c98(void) {
  LOAD_REGS();
L_425c98: /* 425c98: call 0x40137f */
  esp -= 4; W32(esp, 0x425c9du); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 425c9d: mov eax, dword ptr [eax + 0x60] */
  eax = R32((uint32_t)(eax + 0x60u));
/* 425ca0: cmp eax, dword ptr [0x44aad8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44aad8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425ca6: je 0x425cad */
  if (zf) goto L_425cad;
L_425ca8: /* 425ca8: call 0x403c88 */
  esp -= 4; W32(esp, 0x425cadu); SPILL(); f_403c88(); if (g_unwind) return; RELOAD();
L_425cad: /* 425cad: cmp dword ptr [eax + 4], 0x3a4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(0x3a4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 425cb4: jne 0x425ce7 */
  if (!zf) goto L_425ce7;
L_425cb6: /* 425cb6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 425cba: mov edx, ecx */
  edx = ecx;
/* 425cbc: shr edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 425cbf: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* 425cc2: test byte ptr [edx + eax + 0x1d], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + eax + 0x1du))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425cc7: je 0x425ce7 */
  if (zf) goto L_425ce7;
L_425cc9: /* 425cc9: movzx edx, cl */
  edx = (uint32_t)((ecx & 0xffu));
/* 425ccc: test byte ptr [edx + eax + 0x1d], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + eax + 0x1du))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 425cd1: je 0x425ce7 */
  if (zf) goto L_425ce7;
L_425cd3: /* 425cd3: cmp ecx, 0x989f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x989fu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 425cd9: jb 0x425ce7 */
  if (cf) goto L_425ce7;
L_425cdb: /* 425cdb: cmp ecx, 0xeaa4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xeaa4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 425ce1: ja 0x425ce7 */
  if ((!cf && !zf)) goto L_425ce7;
L_425ce3: /* 425ce3: xor eax, eax */
  eax = 0;
/* 425ce5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 425ce6: ret  */
  esp += 4; SPILL(); return;
L_425ce7: /* 425ce7: xor eax, eax */
  eax = 0;
/* 425ce9: ret  */
  esp += 4; SPILL(); return;
}
