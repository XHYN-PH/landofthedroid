#include "recomp.h"
#include "rec_mod.h"

void f_42f9ef(void) {
  LOAD_REGS();
L_42f9ef: /* 42f9ef: xor eax, eax */
  eax = 0;
/* 42f9f1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42f9f2: ret  */
  esp += 4; SPILL(); return;
}

void f_42f9f3(void) {
  LOAD_REGS();
L_42f9f3: /* 42f9f3: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 42f9f6: call 0x415709 */
  esp -= 4; W32(esp, 0x42f9fbu); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 42f9fb: xor ebx, ebx */
  ebx = 0;
/* 42f9fd: xor edi, edi */
  edi = 0;
/* 42f9ff: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42fa03: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42fa06: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fa08: jne 0x42fa20 */
  if (!zf) goto L_42fa20;
L_42fa0a: /* 42fa0a: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 42fa0d: call 0x4010eb */
  esp -= 4; W32(esp, 0x42fa12u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42fa12: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42fa13: mov edi, eax */
  edi = eax;
/* 42fa15: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 42fa1c: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fa1e: je 0x42fa4d */
  if (zf) goto L_42fa4d;
L_42fa20: /* 42fa20: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42fa22: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 42fa25: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 42fa28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42fa29: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 42fa2b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fa2e: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 42fa33: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 42fa36: call 0x40462b */
  esp -= 4; W32(esp, 0x42fa3bu); SPILL(); f_40462b(); if (g_unwind) return; RELOAD();
/* 42fa3b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42fa3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42fa40: je 0x42fa4d */
  if (zf) goto L_42fa4d;
L_42fa42: /* 42fa42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42fa43: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fa46: call 0x404b3a */
  esp -= 4; W32(esp, 0x42fa4bu); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 42fa4b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42fa4c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42fa4d: /* 42fa4d: cmp dword ptr [ebp - 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fa50: je 0x42fa59 */
  if (zf) goto L_42fa59;
L_42fa52: /* 42fa52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42fa53: call 0x401156 */
  esp -= 4; W32(esp, 0x42fa58u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42fa58: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42fa59: /* 42fa59: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42fa5c: lea esp, [ebp - 0x34] */
  esp = (uint32_t)(ebp + 0xffffffccu);
/* 42fa5f: call 0x40105a */
  esp -= 4; W32(esp, 0x42fa64u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42fa64: ret  */
  esp += 4; SPILL(); return;
}

void f_42fa65(void) {
  LOAD_REGS();
L_42fa65: /* 42fa65: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42fa66: mov ebp, esp */
  ebp = esp;
/* 42fa68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42fa69: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 42fa6c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42fa6e: jne 0x42fa74 */
  if (!zf) goto L_42fa74;
L_42fa70: /* 42fa70: xor eax, eax */
  eax = 0;
/* 42fa72: jmp 0x42fadb */
  goto L_42fadb;
L_42fa74: /* 42fa74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42fa75: mov edi, 0x7fffffff */
  edi = 0x7fffffffu;
/* 42fa7a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42fa7c: jbe 0x42fa8d */
  if ((cf | zf)) goto L_42fa8d;
L_42fa7e: /* 42fa7e: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42fa83u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42fa83: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 42fa89: mov eax, edi */
  eax = edi;
/* 42fa8b: jmp 0x42fada */
  goto L_42fada;
L_42fa8d: /* 42fa8d: call 0x40137f */
  esp -= 4; W32(esp, 0x42fa92u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 42fa92: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 42fa95: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fa9b: je 0x42faa2 */
  if (zf) goto L_42faa2;
L_42fa9d: /* 42fa9d: call 0x4025f2 */
  esp -= 4; W32(esp, 0x42faa2u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_42faa2: /* 42faa2: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 42faa5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42faa7: jne 0x42faba */
  if (!zf) goto L_42faba;
L_42faa9: /* 42faa9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42faaa: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42faad: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fab0: call 0x401a52 */
  esp -= 4; W32(esp, 0x42fab5u); SPILL(); f_401a52(); if (g_unwind) return; RELOAD();
/* 42fab5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42fab8: jmp 0x42fada */
  goto L_42fada;
L_42faba: /* 42faba: push dword ptr [eax + 8] */
  { uint32_t v = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fabd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42fabe: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42fac1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42fac2: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fac5: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 42faca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42facb: call 0x4038f9 */
  esp -= 4; W32(esp, 0x42fad0u); SPILL(); f_4038f9(); if (g_unwind) return; RELOAD();
/* 42fad0: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42fad3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42fad5: je 0x42fa7e */
  if (zf) goto L_42fa7e;
L_42fad7: /* 42fad7: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_42fada: /* 42fada: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_42fadb: /* 42fadb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42fadc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 42fadd: ret  */
  esp += 4; SPILL(); return;
}

void f_42fade(void) {
  LOAD_REGS();
L_42fade: /* 42fade: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42fadf: mov ebp, esp */
  ebp = esp;
/* 42fae1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42fae2: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 42fae5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42fae7: jne 0x42faed */
  if (!zf) goto L_42faed;
L_42fae9: /* 42fae9: xor eax, eax */
  eax = 0;
/* 42faeb: jmp 0x42fb54 */
  goto L_42fb54;
L_42faed: /* 42faed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42faee: mov edi, 0x7fffffff */
  edi = 0x7fffffffu;
/* 42faf3: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42faf5: jbe 0x42fb06 */
  if ((cf | zf)) goto L_42fb06;
L_42faf7: /* 42faf7: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42fafcu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42fafc: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 42fb02: mov eax, edi */
  eax = edi;
/* 42fb04: jmp 0x42fb53 */
  goto L_42fb53;
L_42fb06: /* 42fb06: call 0x40137f */
  esp -= 4; W32(esp, 0x42fb0bu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 42fb0b: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 42fb0e: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fb14: je 0x42fb1b */
  if (zf) goto L_42fb1b;
L_42fb16: /* 42fb16: call 0x4025f2 */
  esp -= 4; W32(esp, 0x42fb1bu); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_42fb1b: /* 42fb1b: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 42fb1e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42fb20: jne 0x42fb33 */
  if (!zf) goto L_42fb33;
L_42fb22: /* 42fb22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42fb23: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42fb26: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fb29: call 0x4145c7 */
  esp -= 4; W32(esp, 0x42fb2eu); SPILL(); f_4145c7(); if (g_unwind) return; RELOAD();
/* 42fb2e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42fb31: jmp 0x42fb53 */
  goto L_42fb53;
L_42fb33: /* 42fb33: push dword ptr [eax + 8] */
  { uint32_t v = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fb36: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42fb37: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42fb3a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42fb3b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fb3e: push 0x1001 */
  { uint32_t v = 0x1001u; esp -= 4; W32(esp, v); }
/* 42fb43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42fb44: call 0x4038f9 */
  esp -= 4; W32(esp, 0x42fb49u); SPILL(); f_4038f9(); if (g_unwind) return; RELOAD();
/* 42fb49: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42fb4c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42fb4e: je 0x42faf7 */
  if (zf) goto L_42faf7;
L_42fb50: /* 42fb50: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_42fb53: /* 42fb53: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_42fb54: /* 42fb54: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42fb55: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 42fb56: ret  */
  esp += 4; SPILL(); return;
}

void f_42fb57(void) {
  LOAD_REGS();
L_42fb57: /* 42fb57: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 42fb59: push 0x441198 */
  { uint32_t v = 0x441198u; esp -= 4; W32(esp, v); }
/* 42fb5e: call 0x40101f */
  esp -= 4; W32(esp, 0x42fb63u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42fb63: xor ebx, ebx */
  ebx = 0;
/* 42fb65: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 42fb68: call 0x40137f */
  esp -= 4; W32(esp, 0x42fb6du); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 42fb6d: mov esi, dword ptr [eax + 0x64] */
  esi = R32((uint32_t)(eax + 0x64u));
/* 42fb70: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 42fb73: cmp esi, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fb79: je 0x42fb85 */
  if (zf) goto L_42fb85;
L_42fb7b: /* 42fb7b: call 0x4025f2 */
  esp -= 4; W32(esp, 0x42fb80u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 42fb80: mov esi, eax */
  esi = eax;
/* 42fb82: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
L_42fb85: /* 42fb85: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 42fb88: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fb8a: jne 0x42fbb4 */
  if (!zf) goto L_42fbb4;
L_42fb8c: /* 42fb8c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42fb8f: mov edx, eax */
  edx = eax;
/* 42fb91: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42fb93: je 0x42fc62 */
  if (zf) goto L_42fc62;
L_42fb99: /* 42fb99: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 42fb9b: cmp cl, 0x61 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x61u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 42fb9e: jl 0x42fbaa */
  if ((sf != of)) goto L_42fbaa;
L_42fba0: /* 42fba0: cmp cl, 0x7a */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x7au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 42fba3: jg 0x42fbaa */
  if ((!zf && sf == of)) goto L_42fbaa;
L_42fba5: /* 42fba5: sub cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 42fba8: mov byte ptr [edx], cl */
  W8((uint32_t)(edx), (ecx & 0xffu));
L_42fbaa: /* 42fbaa: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 42fbab: cmp byte ptr [edx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42fbad: jne 0x42fb99 */
  if (!zf) goto L_42fb99;
L_42fbaf: /* 42fbaf: jmp 0x42fc62 */
  goto L_42fc62;
L_42fbb4: /* 42fbb4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42fbb6: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 42fbb9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42fbba: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42fbbb: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 42fbbd: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fbc0: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 42fbc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42fbc6: call 0x40462b */
  esp -= 4; W32(esp, 0x42fbcbu); SPILL(); f_40462b(); if (g_unwind) return; RELOAD();
/* 42fbcb: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42fbce: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 42fbd1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fbd3: je 0x42fc5f */
  if (zf) goto L_42fc5f;
L_42fbd9: /* 42fbd9: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 42fbdc: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42fbdf: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42fbe2: call 0x4014ee */
  esp -= 4; W32(esp, 0x42fbe7u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 42fbe7: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 42fbea: mov edi, esp */
  edi = esp;
/* 42fbec: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 42fbef: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42fbf3: jmp 0x42fc0c */
  goto L_42fc0c;
L_42fc0c: /* 42fc0c: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fc0e: jne 0x42fc26 */
  if (!zf) goto L_42fc26;
L_42fc10: /* 42fc10: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 42fc13: call 0x4010eb */
  esp -= 4; W32(esp, 0x42fc18u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42fc18: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42fc19: mov edi, eax */
  edi = eax;
/* 42fc1b: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 42fc22: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fc24: je 0x42fc53 */
  if (zf) goto L_42fc53;
L_42fc26: /* 42fc26: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42fc28: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 42fc2b: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 42fc2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42fc2f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 42fc31: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fc34: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 42fc39: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 42fc3c: call 0x40462b */
  esp -= 4; W32(esp, 0x42fc41u); SPILL(); f_40462b(); if (g_unwind) return; RELOAD();
/* 42fc41: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42fc44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42fc46: je 0x42fc53 */
  if (zf) goto L_42fc53;
L_42fc48: /* 42fc48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42fc49: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fc4c: call 0x404b3a */
  esp -= 4; W32(esp, 0x42fc51u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 42fc51: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42fc52: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42fc53: /* 42fc53: cmp dword ptr [ebp - 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fc56: je 0x42fc5f */
  if (zf) goto L_42fc5f;
L_42fc58: /* 42fc58: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42fc59: call 0x401156 */
  esp -= 4; W32(esp, 0x42fc5eu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42fc5e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42fc5f: /* 42fc5f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_42fc62: /* 42fc62: lea esp, [ebp - 0x34] */
  esp = (uint32_t)(ebp + 0xffffffccu);
/* 42fc65: call 0x40105a */
  esp -= 4; W32(esp, 0x42fc6au); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42fc6a: ret  */
  esp += 4; SPILL(); return;
}

void f_42fbf5(void) {
  LOAD_REGS();
L_42fbf5: /* 42fbf5: xor eax, eax */
  eax = 0;
/* 42fbf7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42fbf8: ret  */
  esp += 4; SPILL(); return;
}

void f_42fbf9(void) {
  LOAD_REGS();
L_42fbf9: /* 42fbf9: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 42fbfc: call 0x415709 */
  esp -= 4; W32(esp, 0x42fc01u); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 42fc01: xor ebx, ebx */
  ebx = 0;
/* 42fc03: xor edi, edi */
  edi = 0;
/* 42fc05: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42fc09: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42fc0c: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fc0e: jne 0x42fc26 */
  if (!zf) goto L_42fc26;
L_42fc10: /* 42fc10: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 42fc13: call 0x4010eb */
  esp -= 4; W32(esp, 0x42fc18u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42fc18: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42fc19: mov edi, eax */
  edi = eax;
/* 42fc1b: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 42fc22: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fc24: je 0x42fc53 */
  if (zf) goto L_42fc53;
L_42fc26: /* 42fc26: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 42fc28: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 42fc2b: push dword ptr [ebp - 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffdcu)); esp -= 4; W32(esp, v); }
/* 42fc2e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42fc2f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 42fc31: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fc34: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 42fc39: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 42fc3c: call 0x40462b */
  esp -= 4; W32(esp, 0x42fc41u); SPILL(); f_40462b(); if (g_unwind) return; RELOAD();
/* 42fc41: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42fc44: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42fc46: je 0x42fc53 */
  if (zf) goto L_42fc53;
L_42fc48: /* 42fc48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42fc49: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fc4c: call 0x404b3a */
  esp -= 4; W32(esp, 0x42fc51u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 42fc51: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42fc52: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42fc53: /* 42fc53: cmp dword ptr [ebp - 0x1c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fc56: je 0x42fc5f */
  if (zf) goto L_42fc5f;
L_42fc58: /* 42fc58: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42fc59: call 0x401156 */
  esp -= 4; W32(esp, 0x42fc5eu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42fc5e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42fc5f: /* 42fc5f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42fc62: lea esp, [ebp - 0x34] */
  esp = (uint32_t)(ebp + 0xffffffccu);
/* 42fc65: call 0x40105a */
  esp -= 4; W32(esp, 0x42fc6au); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42fc6a: ret  */
  esp += 4; SPILL(); return;
}

void f_42fc6b(void) {
  LOAD_REGS();
L_42fc6b: /* 42fc6b: call 0x40137f */
  esp -= 4; W32(esp, 0x42fc70u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 42fc70: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 42fc73: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fc79: je 0x42fc80 */
  if (zf) goto L_42fc80;
L_42fc7b: /* 42fc7b: call 0x4025f2 */
  esp -= 4; W32(esp, 0x42fc80u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_42fc80: /* 42fc80: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 42fc83: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42fc85: jne 0x42fcd2 */
  if (!zf) goto L_42fcd2;
L_42fc87: /* 42fc87: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 42fc8b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42fc8c: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
L_42fc90: /* 42fc90: xor eax, eax */
  eax = 0;
/* 42fc92: mov ax, word ptr [edx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 42fc95: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 42fc99: jb 0x42fca4 */
  if (cf) goto L_42fca4;
L_42fc9b: /* 42fc9b: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42fc9f: lea ecx, [eax + 0x20] */
  ecx = (uint32_t)(eax + 0x20u);
/* 42fca2: jbe 0x42fca6 */
  if ((cf | zf)) goto L_42fca6;
L_42fca4: /* 42fca4: mov ecx, eax */
  ecx = eax;
L_42fca6: /* 42fca6: xor eax, eax */
  eax = 0;
/* 42fca8: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 42fcab: cmp ax, 0x41 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 42fcaf: jb 0x42fcba */
  if (cf) goto L_42fcba;
L_42fcb1: /* 42fcb1: cmp ax, 0x5a */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42fcb5: ja 0x42fcba */
  if ((!cf && !zf)) goto L_42fcba;
L_42fcb7: /* 42fcb7: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_42fcba: /* 42fcba: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 42fcbb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 42fcbc: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42fcbd: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 42fcbe: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42fcc1: je 0x42fcc8 */
  if (zf) goto L_42fcc8;
L_42fcc3: /* 42fcc3: cmp cx, ax */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42fcc6: je 0x42fc90 */
  if (zf) goto L_42fc90;
L_42fcc8: /* 42fcc8: movzx edx, ax */
  edx = (uint32_t)((eax & 0xffffu));
/* 42fccb: movzx eax, cx */
  eax = (uint32_t)((ecx & 0xffffu));
/* 42fcce: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 42fcd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42fcd1: ret  */
  esp += 4; SPILL(); return;
L_42fcd2: /* 42fcd2: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 42fcd5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 42fcd7: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42fcdb: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 42fcdd: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 42fce1: push 0x1001 */
  { uint32_t v = 0x1001u; esp -= 4; W32(esp, v); }
/* 42fce6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42fce7: call 0x416273 */
  esp -= 4; W32(esp, 0x42fcecu); SPILL(); f_416273(); if (g_unwind) return; RELOAD();
/* 42fcec: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42fcef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42fcf1: jne 0x42fd04 */
  if (!zf) goto L_42fd04;
L_42fcf3: /* 42fcf3: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42fcf8u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42fcf8: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 42fcfe: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 42fd03: ret  */
  esp += 4; SPILL(); return;
L_42fd04: /* 42fd04: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42fd07: ret  */
  esp += 4; SPILL(); return;
}

void f_42fd08(void) {
  LOAD_REGS();
L_42fd08: /* 42fd08: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 42fd0a: push 0x4411a8 */
  { uint32_t v = 0x4411a8u; esp -= 4; W32(esp, v); }
/* 42fd0f: call 0x40101f */
  esp -= 4; W32(esp, 0x42fd14u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42fd14: xor ebx, ebx */
  ebx = 0;
/* 42fd16: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 42fd19: call 0x40137f */
  esp -= 4; W32(esp, 0x42fd1eu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 42fd1e: mov esi, dword ptr [eax + 0x64] */
  esi = R32((uint32_t)(eax + 0x64u));
/* 42fd21: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 42fd24: cmp esi, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fd2a: je 0x42fd36 */
  if (zf) goto L_42fd36;
L_42fd2c: /* 42fd2c: call 0x4025f2 */
  esp -= 4; W32(esp, 0x42fd31u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 42fd31: mov esi, eax */
  esi = eax;
/* 42fd33: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
L_42fd36: /* 42fd36: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 42fd39: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fd3b: jne 0x42fd6e */
  if (!zf) goto L_42fd6e;
L_42fd3d: /* 42fd3d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42fd40: mov ecx, eax */
  ecx = eax;
/* 42fd42: cmp word ptr [eax], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42fd45: je 0x42fe1e */
  if (zf) goto L_42fe1e;
L_42fd4b: /* 42fd4b: xor edx, edx */
  edx = 0;
/* 42fd4d: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 42fd50: cmp dx, 0x41 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x41u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 42fd54: jb 0x42fd62 */
  if (cf) goto L_42fd62;
L_42fd56: /* 42fd56: cmp dx, 0x5a */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x5au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42fd5a: ja 0x42fd62 */
  if ((!cf && !zf)) goto L_42fd62;
L_42fd5c: /* 42fd5c: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 42fd5f: mov word ptr [ecx], dx */
  W16((uint32_t)(ecx), (edx & 0xffffu));
L_42fd62: /* 42fd62: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42fd63: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42fd64: cmp word ptr [ecx], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42fd67: jne 0x42fd4b */
  if (!zf) goto L_42fd4b;
L_42fd69: /* 42fd69: jmp 0x42fe1e */
  goto L_42fe1e;
L_42fd6e: /* 42fd6e: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 42fd71: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42fd72: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42fd73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 42fd75: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fd78: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 42fd7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42fd7e: call 0x401944 */
  esp -= 4; W32(esp, 0x42fd83u); SPILL(); f_401944(); if (g_unwind) return; RELOAD();
/* 42fd83: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42fd86: mov edi, eax */
  edi = eax;
/* 42fd88: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 42fd8b: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fd8d: je 0x42fe1b */
  if (zf) goto L_42fe1b;
L_42fd93: /* 42fd93: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 42fd96: lea eax, [edi + edi] */
  eax = (uint32_t)(edi + edi);
/* 42fd99: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42fd9c: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42fd9f: call 0x4014ee */
  esp -= 4; W32(esp, 0x42fda4u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 42fda4: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 42fda7: mov ebx, esp */
  ebx = esp;
/* 42fda9: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42fdac: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42fdb0: jmp 0x42fdca */
  goto L_42fdca;
L_42fdca: /* 42fdca: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42fdcc: jne 0x42fde5 */
  if (!zf) goto L_42fde5;
L_42fdce: /* 42fdce: lea eax, [edi + edi] */
  eax = (uint32_t)(edi + edi);
/* 42fdd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42fdd2: call 0x4010eb */
  esp -= 4; W32(esp, 0x42fdd7u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42fdd7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42fdd8: mov ebx, eax */
  ebx = eax;
/* 42fdda: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 42fde1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42fde3: je 0x42fe0e */
  if (zf) goto L_42fe0e;
L_42fde5: /* 42fde5: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 42fde8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42fde9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42fdea: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 42fdec: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fdef: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 42fdf4: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 42fdf7: call 0x401944 */
  esp -= 4; W32(esp, 0x42fdfcu); SPILL(); f_401944(); if (g_unwind) return; RELOAD();
/* 42fdfc: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42fdff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42fe01: je 0x42fe0e */
  if (zf) goto L_42fe0e;
L_42fe03: /* 42fe03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42fe04: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fe07: call 0x4013ce */
  esp -= 4; W32(esp, 0x42fe0cu); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 42fe0c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42fe0d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42fe0e: /* 42fe0e: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fe12: je 0x42fe1b */
  if (zf) goto L_42fe1b;
L_42fe14: /* 42fe14: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42fe15: call 0x401156 */
  esp -= 4; W32(esp, 0x42fe1au); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42fe1a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42fe1b: /* 42fe1b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_42fe1e: /* 42fe1e: lea esp, [ebp - 0x34] */
  esp = (uint32_t)(ebp + 0xffffffccu);
/* 42fe21: call 0x40105a */
  esp -= 4; W32(esp, 0x42fe26u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42fe26: ret  */
  esp += 4; SPILL(); return;
}

void f_42fdb2(void) {
  LOAD_REGS();
L_42fdb2: /* 42fdb2: xor eax, eax */
  eax = 0;
/* 42fdb4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42fdb5: ret  */
  esp += 4; SPILL(); return;
}

void f_42fdb6(void) {
  LOAD_REGS();
L_42fdb6: /* 42fdb6: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 42fdb9: call 0x415709 */
  esp -= 4; W32(esp, 0x42fdbeu); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 42fdbe: xor ebx, ebx */
  ebx = 0;
/* 42fdc0: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42fdc4: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42fdc7: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 42fdca: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42fdcc: jne 0x42fde5 */
  if (!zf) goto L_42fde5;
L_42fdce: /* 42fdce: lea eax, [edi + edi] */
  eax = (uint32_t)(edi + edi);
/* 42fdd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42fdd2: call 0x4010eb */
  esp -= 4; W32(esp, 0x42fdd7u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42fdd7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42fdd8: mov ebx, eax */
  ebx = eax;
/* 42fdda: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 42fde1: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42fde3: je 0x42fe0e */
  if (zf) goto L_42fe0e;
L_42fde5: /* 42fde5: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 42fde8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42fde9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42fdea: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 42fdec: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fdef: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 42fdf4: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 42fdf7: call 0x401944 */
  esp -= 4; W32(esp, 0x42fdfcu); SPILL(); f_401944(); if (g_unwind) return; RELOAD();
/* 42fdfc: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42fdff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42fe01: je 0x42fe0e */
  if (zf) goto L_42fe0e;
L_42fe03: /* 42fe03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42fe04: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fe07: call 0x4013ce */
  esp -= 4; W32(esp, 0x42fe0cu); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 42fe0c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42fe0d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42fe0e: /* 42fe0e: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fe12: je 0x42fe1b */
  if (zf) goto L_42fe1b;
L_42fe14: /* 42fe14: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42fe15: call 0x401156 */
  esp -= 4; W32(esp, 0x42fe1au); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42fe1a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42fe1b: /* 42fe1b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42fe1e: lea esp, [ebp - 0x34] */
  esp = (uint32_t)(ebp + 0xffffffccu);
/* 42fe21: call 0x40105a */
  esp -= 4; W32(esp, 0x42fe26u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42fe26: ret  */
  esp += 4; SPILL(); return;
}

void f_42fe27(void) {
  LOAD_REGS();
L_42fe27: /* 42fe27: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42fe28: mov ebp, esp */
  ebp = esp;
/* 42fe2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42fe2b: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 42fe2e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42fe30: jne 0x42fe36 */
  if (!zf) goto L_42fe36;
L_42fe32: /* 42fe32: xor eax, eax */
  eax = 0;
/* 42fe34: jmp 0x42fe9d */
  goto L_42fe9d;
L_42fe36: /* 42fe36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42fe37: mov edi, 0x7fffffff */
  edi = 0x7fffffffu;
/* 42fe3c: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42fe3e: jbe 0x42fe4f */
  if ((cf | zf)) goto L_42fe4f;
L_42fe40: /* 42fe40: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42fe45u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42fe45: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 42fe4b: mov eax, edi */
  eax = edi;
/* 42fe4d: jmp 0x42fe9c */
  goto L_42fe9c;
L_42fe4f: /* 42fe4f: call 0x40137f */
  esp -= 4; W32(esp, 0x42fe54u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 42fe54: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 42fe57: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fe5d: je 0x42fe64 */
  if (zf) goto L_42fe64;
L_42fe5f: /* 42fe5f: call 0x4025f2 */
  esp -= 4; W32(esp, 0x42fe64u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_42fe64: /* 42fe64: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 42fe67: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42fe69: jne 0x42fe7c */
  if (!zf) goto L_42fe7c;
L_42fe6b: /* 42fe6b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42fe6c: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42fe6f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fe72: call 0x4302ce */
  esp -= 4; W32(esp, 0x42fe77u); SPILL(); f_4302ce(); if (g_unwind) return; RELOAD();
/* 42fe77: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42fe7a: jmp 0x42fe9c */
  goto L_42fe9c;
L_42fe7c: /* 42fe7c: push dword ptr [eax + 8] */
  { uint32_t v = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fe7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42fe80: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42fe83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42fe84: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fe87: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 42fe8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42fe8d: call 0x416273 */
  esp -= 4; W32(esp, 0x42fe92u); SPILL(); f_416273(); if (g_unwind) return; RELOAD();
/* 42fe92: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42fe95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42fe97: je 0x42fe40 */
  if (zf) goto L_42fe40;
L_42fe99: /* 42fe99: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_42fe9c: /* 42fe9c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_42fe9d: /* 42fe9d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42fe9e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 42fe9f: ret  */
  esp += 4; SPILL(); return;
}

void f_42fea0(void) {
  LOAD_REGS();
L_42fea0: /* 42fea0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42fea1: mov ebp, esp */
  ebp = esp;
/* 42fea3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 42fea6: xor edx, edx */
  edx = 0;
/* 42fea8: cmp dword ptr [ebp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42feab: mov eax, ecx */
  eax = ecx;
/* 42fead: je 0x42fec7 */
  if (zf) goto L_42fec7;
L_42feaf: /* 42feaf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_42feb0: /* 42feb0: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 42feb3: cmp word ptr [ecx], dx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42feb6: je 0x42fec6 */
  if (zf) goto L_42fec6;
L_42feb8: /* 42feb8: mov si, word ptr [ebp + 0xc] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xcu))) & 0xffffu);
/* 42febc: mov word ptr [ecx], si */
  W16((uint32_t)(ecx), (esi & 0xffffu));
/* 42febf: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42fec0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42fec1: cmp dword ptr [ebp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42fec4: jne 0x42feb0 */
  if (!zf) goto L_42feb0;
L_42fec6: /* 42fec6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_42fec7: /* 42fec7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 42fec8: ret  */
  esp += 4; SPILL(); return;
}

void f_42fec9(void) {
  LOAD_REGS();
L_42fec9: /* 42fec9: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 42fecd: mov eax, ecx */
  eax = ecx;
/* 42fecf: mov edx, ecx */
  edx = ecx;
/* 42fed1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_42fed2: /* 42fed2: mov si, word ptr [ecx] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 42fed5: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42fed6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42fed7: test si, si */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 42feda: jne 0x42fed2 */
  if (!zf) goto L_42fed2;
L_42fedc: /* 42fedc: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 42fedf: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42fee1: jae 0x42fef9 */
  if (!cf) goto L_42fef9;
L_42fee3: /* 42fee3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_42fee4: /* 42fee4: mov di, word ptr [ecx] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 42fee7: mov si, word ptr [edx] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 42feea: mov word ptr [edx], di */
  W16((uint32_t)(edx), (edi & 0xffffu));
/* 42feed: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 42feee: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 42feef: mov word ptr [ecx], si */
  W16((uint32_t)(ecx), (esi & 0xffffu));
/* 42fef2: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 42fef3: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 42fef4: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42fef6: jb 0x42fee4 */
  if (cf) goto L_42fee4;
L_42fef8: /* 42fef8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_42fef9: /* 42fef9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42fefa: ret  */
  esp += 4; SPILL(); return;
}

void f_42fefb(void) {
  LOAD_REGS();
L_42fefb: /* 42fefb: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 42feff: mov eax, ecx */
  eax = ecx;
/* 42ff01: jmp 0x42ff0d */
  goto L_42ff0d;
L_42ff03: /* 42ff03: mov dx, word ptr [esp + 8] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0x8u))) & 0xffffu);
/* 42ff08: mov word ptr [ecx], dx */
  W16((uint32_t)(ecx), (edx & 0xffffu));
/* 42ff0b: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42ff0c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_42ff0d: /* 42ff0d: cmp word ptr [ecx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ff11: jne 0x42ff03 */
  if (!zf) goto L_42ff03;
L_42ff13: /* 42ff13: ret  */
  esp += 4; SPILL(); return;
}

void f_42ff14(void) {
  LOAD_REGS();
L_42ff14: /* 42ff14: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 42ff16: push 0x4411b8 */
  { uint32_t v = 0x4411b8u; esp -= 4; W32(esp, v); }
/* 42ff1b: call 0x40101f */
  esp -= 4; W32(esp, 0x42ff20u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 42ff20: xor ebx, ebx */
  ebx = 0;
/* 42ff22: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 42ff25: call 0x40137f */
  esp -= 4; W32(esp, 0x42ff2au); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 42ff2a: mov esi, dword ptr [eax + 0x64] */
  esi = R32((uint32_t)(eax + 0x64u));
/* 42ff2d: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 42ff30: cmp esi, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ff36: je 0x42ff42 */
  if (zf) goto L_42ff42;
L_42ff38: /* 42ff38: call 0x4025f2 */
  esp -= 4; W32(esp, 0x42ff3du); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 42ff3d: mov esi, eax */
  esi = eax;
/* 42ff3f: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
L_42ff42: /* 42ff42: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 42ff45: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ff47: jne 0x42ff7a */
  if (!zf) goto L_42ff7a;
L_42ff49: /* 42ff49: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 42ff4c: mov ecx, eax */
  ecx = eax;
/* 42ff4e: cmp word ptr [eax], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ff51: je 0x43002a */
  if (zf) goto L_43002a;
L_42ff57: /* 42ff57: xor edx, edx */
  edx = 0;
/* 42ff59: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 42ff5c: cmp dx, 0x61 */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x61u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 42ff60: jb 0x42ff6e */
  if (cf) goto L_42ff6e;
L_42ff62: /* 42ff62: cmp dx, 0x7a */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(0x7au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42ff66: ja 0x42ff6e */
  if ((!cf && !zf)) goto L_42ff6e;
L_42ff68: /* 42ff68: add edx, -0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 42ff6b: mov word ptr [ecx], dx */
  W16((uint32_t)(ecx), (edx & 0xffffu));
L_42ff6e: /* 42ff6e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42ff6f: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42ff70: cmp word ptr [ecx], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42ff73: jne 0x42ff57 */
  if (!zf) goto L_42ff57;
L_42ff75: /* 42ff75: jmp 0x43002a */
  goto L_43002a;
L_42ff7a: /* 42ff7a: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 42ff7d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42ff7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42ff7f: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 42ff81: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42ff84: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 42ff89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42ff8a: call 0x401944 */
  esp -= 4; W32(esp, 0x42ff8fu); SPILL(); f_401944(); if (g_unwind) return; RELOAD();
/* 42ff8f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42ff92: mov edi, eax */
  edi = eax;
/* 42ff94: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 42ff97: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42ff99: je 0x430027 */
  if (zf) goto L_430027;
L_42ff9f: /* 42ff9f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 42ffa2: lea eax, [edi + edi] */
  eax = (uint32_t)(edi + edi);
/* 42ffa5: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42ffa8: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 42ffab: call 0x4014ee */
  esp -= 4; W32(esp, 0x42ffb0u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 42ffb0: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 42ffb3: mov ebx, esp */
  ebx = esp;
/* 42ffb5: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 42ffb8: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42ffbc: jmp 0x42ffd6 */
  goto L_42ffd6;
L_42ffd6: /* 42ffd6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ffd8: jne 0x42fff1 */
  if (!zf) goto L_42fff1;
L_42ffda: /* 42ffda: lea eax, [edi + edi] */
  eax = (uint32_t)(edi + edi);
/* 42ffdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42ffde: call 0x4010eb */
  esp -= 4; W32(esp, 0x42ffe3u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42ffe3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ffe4: mov ebx, eax */
  ebx = eax;
/* 42ffe6: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 42ffed: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ffef: je 0x43001a */
  if (zf) goto L_43001a;
L_42fff1: /* 42fff1: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 42fff4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42fff5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42fff6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 42fff8: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fffb: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 430000: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 430003: call 0x401944 */
  esp -= 4; W32(esp, 0x430008u); SPILL(); f_401944(); if (g_unwind) return; RELOAD();
/* 430008: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 43000b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43000d: je 0x43001a */
  if (zf) goto L_43001a;
L_43000f: /* 43000f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430010: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 430013: call 0x4013ce */
  esp -= 4; W32(esp, 0x430018u); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 430018: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430019: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_43001a: /* 43001a: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43001e: je 0x430027 */
  if (zf) goto L_430027;
L_430020: /* 430020: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430021: call 0x401156 */
  esp -= 4; W32(esp, 0x430026u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 430026: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_430027: /* 430027: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_43002a: /* 43002a: lea esp, [ebp - 0x34] */
  esp = (uint32_t)(ebp + 0xffffffccu);
/* 43002d: call 0x40105a */
  esp -= 4; W32(esp, 0x430032u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 430032: ret  */
  esp += 4; SPILL(); return;
}

void f_42ffbe(void) {
  LOAD_REGS();
L_42ffbe: /* 42ffbe: xor eax, eax */
  eax = 0;
/* 42ffc0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 42ffc1: ret  */
  esp += 4; SPILL(); return;
}

void f_42ffc2(void) {
  LOAD_REGS();
L_42ffc2: /* 42ffc2: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 42ffc5: call 0x415709 */
  esp -= 4; W32(esp, 0x42ffcau); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 42ffca: xor ebx, ebx */
  ebx = 0;
/* 42ffcc: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42ffd0: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 42ffd3: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 42ffd6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ffd8: jne 0x42fff1 */
  if (!zf) goto L_42fff1;
L_42ffda: /* 42ffda: lea eax, [edi + edi] */
  eax = (uint32_t)(edi + edi);
/* 42ffdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42ffde: call 0x4010eb */
  esp -= 4; W32(esp, 0x42ffe3u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42ffe3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42ffe4: mov ebx, eax */
  ebx = eax;
/* 42ffe6: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 42ffed: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42ffef: je 0x43001a */
  if (zf) goto L_43001a;
L_42fff1: /* 42fff1: push dword ptr [esi + 4] */
  { uint32_t v = R32((uint32_t)(esi + 0x4u)); esp -= 4; W32(esp, v); }
/* 42fff4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42fff5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42fff6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 42fff8: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42fffb: push 0x200 */
  { uint32_t v = 0x200u; esp -= 4; W32(esp, v); }
/* 430000: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 430003: call 0x401944 */
  esp -= 4; W32(esp, 0x430008u); SPILL(); f_401944(); if (g_unwind) return; RELOAD();
/* 430008: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 43000b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43000d: je 0x43001a */
  if (zf) goto L_43001a;
L_43000f: /* 43000f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430010: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 430013: call 0x4013ce */
  esp -= 4; W32(esp, 0x430018u); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 430018: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430019: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_43001a: /* 43001a: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43001e: je 0x430027 */
  if (zf) goto L_430027;
L_430020: /* 430020: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430021: call 0x401156 */
  esp -= 4; W32(esp, 0x430026u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 430026: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_430027: /* 430027: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 43002a: lea esp, [ebp - 0x34] */
  esp = (uint32_t)(ebp + 0xffffffccu);
/* 43002d: call 0x40105a */
  esp -= 4; W32(esp, 0x430032u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 430032: ret  */
  esp += 4; SPILL(); return;
}

void f_430033(void) {
  LOAD_REGS();
L_430033: /* 430033: call 0x40137f */
  esp -= 4; W32(esp, 0x430038u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 430038: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 43003b: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 430041: je 0x430048 */
  if (zf) goto L_430048;
L_430043: /* 430043: call 0x4025f2 */
  esp -= 4; W32(esp, 0x430048u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_430048: /* 430048: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 43004b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43004d: jne 0x43005b */
  if (!zf) goto L_43005b;
L_43004f: /* 43004f: cmp dword ptr [0x44921c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44921cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 430055: je 0x406182 */
  if (zf) { SPILL(); f_406182(); return; }
L_43005b: /* 43005b: push dword ptr [eax + 8] */
  { uint32_t v = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, v); }
/* 43005e: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 430060: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 430064: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 430066: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 43006a: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 43006f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 430070: call 0x4038f9 */
  esp -= 4; W32(esp, 0x430075u); SPILL(); f_4038f9(); if (g_unwind) return; RELOAD();
/* 430075: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 430078: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43007a: jne 0x43008d */
  if (!zf) goto L_43008d;
L_43007c: /* 43007c: call 0x4102a5 */
  esp -= 4; W32(esp, 0x430081u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 430081: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 430087: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 43008c: ret  */
  esp += 4; SPILL(); return;
L_43008d: /* 43008d: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 430090: ret  */
  esp += 4; SPILL(); return;
}

void f_430091(void) {
  LOAD_REGS();
L_430091: /* 430091: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 430092: mov ebp, esp */
  ebp = esp;
/* 430094: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 430097: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 43009c: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 43009f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4300a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4300a1: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4300a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4300a5: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4300a8: call 0x40137f */
  esp -= 4; W32(esp, 0x4300adu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4300ad: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4300af: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4300b0: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 4300b3: xor eax, eax */
  eax = 0;
/* 4300b5: lea edi, [ebp - 0x24] */
  edi = (uint32_t)(ebp + 0xffffffdcu);
/* 4300b8: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 4300ba: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 4300bc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4300bd: /* 4300bd: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 4300bf: movzx ecx, dl */
  ecx = (uint32_t)((edx & 0xffu));
/* 4300c2: mov eax, ecx */
  eax = ecx;
/* 4300c4: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 4300c6: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 4300c8: shl bl, cl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = (ecx & 31);
  if (c) {
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
  }
/* 4300ca: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4300cd: lea eax, [ebp + eax - 0x24] */
  eax = (uint32_t)(ebp + eax + 0xffffffdcu);
/* 4300d1: or byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax), r);
  }
/* 4300d3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4300d4: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4300d6: jne 0x4300bd */
  if (!zf) goto L_4300bd;
L_4300d8: /* 4300d8: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 4300db: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4300dd: jne 0x4300ec */
  if (!zf) goto L_4300ec;
L_4300df: /* 4300df: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4300e2: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 4300e5: jmp 0x4300ec */
  goto L_4300ec;
L_4300e7: /* 4300e7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4300e9: je 0x430105 */
  if (zf) goto L_430105;
L_4300eb: /* 4300eb: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_4300ec: /* 4300ec: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 4300ee: movzx esi, al */
  esi = (uint32_t)((eax & 0xffu));
/* 4300f1: xor ebx, ebx */
  ebx = 0;
/* 4300f3: mov ecx, esi */
  ecx = esi;
/* 4300f5: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  ecx = r;
  }
/* 4300f7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  ebx = r;
  }
/* 4300f8: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 4300fa: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 4300fd: mov cl, byte ptr [ebp + esi - 0x24] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + esi + 0xffffffdcu))) & 0xffu);
/* 430101: test cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 430103: jne 0x4300e7 */
  if (!zf) goto L_4300e7;
L_430105: /* 430105: mov ebx, edx */
  ebx = edx;
/* 430107: jmp 0x430121 */
  goto L_430121;
L_430109: /* 430109: movzx esi, byte ptr [edx] */
  esi = (uint32_t)(R8((uint32_t)(edx)));
/* 43010c: xor eax, eax */
  eax = 0;
/* 43010e: mov ecx, esi */
  ecx = esi;
/* 430110: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  ecx = r;
  }
/* 430112: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  eax = r;
  }
/* 430113: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
  }
/* 430115: shr esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 430118: mov cl, byte ptr [ebp + esi - 0x24] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + esi + 0xffffffdcu))) & 0xffu);
/* 43011c: test cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43011e: jne 0x430128 */
  if (!zf) goto L_430128;
L_430120: /* 430120: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_430121: /* 430121: cmp byte ptr [edx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 430124: jne 0x430109 */
  if (!zf) goto L_430109;
L_430126: /* 430126: jmp 0x43012c */
  goto L_43012c;
L_430128: /* 430128: and byte ptr [edx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(edx), r);
  }
/* 43012b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
L_43012c: /* 43012c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 43012f: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 430132: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 430135: mov eax, ebx */
  eax = ebx;
/* 430137: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 430139: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 43013b: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 43013d: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 430140: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 430141: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 430143: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 430144: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 430145: call 0x4013ab */
  esp -= 4; W32(esp, 0x43014au); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 43014a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 43014b: ret  */
  esp += 4; SPILL(); return;
}

void f_43014c(void) {
  LOAD_REGS();
L_43014c: /* 43014c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 43014d: mov ebp, esp */
  ebp = esp;
/* 43014f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 430150: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 430155: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 430158: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 43015b: ja 0x4301f6 */
  if ((!cf && !zf)) goto L_4301f6;
L_430161: /* 430161: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 430162: call 0x40137f */
  esp -= 4; W32(esp, 0x430167u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 430167: mov esi, dword ptr [eax + 0x64] */
  esi = R32((uint32_t)(eax + 0x64u));
/* 43016a: cmp esi, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 430170: je 0x430179 */
  if (zf) goto L_430179;
L_430172: /* 430172: call 0x4025f2 */
  esp -= 4; W32(esp, 0x430177u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 430177: mov esi, eax */
  esi = eax;
L_430179: /* 430179: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 43017c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43017e: jne 0x4301a0 */
  if (!zf) goto L_4301a0;
L_430180: /* 430180: cmp dword ptr [esi + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 430183: jne 0x4301a0 */
  if (!zf) goto L_4301a0;
L_430185: /* 430185: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 430188: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 43018b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 43018e: call 0x4053f1 */
  esp -= 4; W32(esp, 0x430193u); SPILL(); f_4053f1(); if (g_unwind) return; RELOAD();
/* 430193: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 430196: call 0x402493 */
  esp -= 4; W32(esp, 0x43019bu); SPILL(); hle_strlen(); RELOAD();
/* 43019b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 43019e: jmp 0x4301f5 */
  goto L_4301f5;
L_4301a0: /* 4301a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4301a1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4301a3: push dword ptr [esi + 8] */
  { uint32_t v = R32((uint32_t)(esi + 0x8u)); esp -= 4; W32(esp, v); }
/* 4301a6: mov edi, 0x400 */
  edi = 0x400u;
/* 4301ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4301ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4301af: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4301b1: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4301b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4301b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4301b6: call 0x40462b */
  esp -= 4; W32(esp, 0x4301bbu); SPILL(); f_40462b(); if (g_unwind) return; RELOAD();
/* 4301bb: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4301be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4301c0: je 0x4301f1 */
  if (zf) goto L_4301f1;
L_4301c2: /* 4301c2: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4301c5: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4301c8: jg 0x4301f1 */
  if ((!zf && sf == of)) goto L_4301f1;
L_4301ca: /* 4301ca: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4301cc: push dword ptr [esi + 8] */
  { uint32_t v = R32((uint32_t)(esi + 0x8u)); esp -= 4; W32(esp, v); }
/* 4301cf: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4301d2: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4301d5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4301d7: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4301da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4301db: push dword ptr [esi + 0x10] */
  { uint32_t v = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, v); }
/* 4301de: call 0x40462b */
  esp -= 4; W32(esp, 0x4301e3u); SPILL(); f_40462b(); if (g_unwind) return; RELOAD();
/* 4301e3: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4301e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4301e8: jne 0x4301f1 */
  if (!zf) goto L_4301f1;
L_4301ea: /* 4301ea: mov dword ptr [ebp - 4], 0x7fffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x7fffffffu);
L_4301f1: /* 4301f1: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4301f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4301f5: /* 4301f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_4301f6: /* 4301f6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4301f7: ret  */
  esp += 4; SPILL(); return;
}

void f_4301f8(void) {
  LOAD_REGS();
L_4301f8: /* 4301f8: call 0x40137f */
  esp -= 4; W32(esp, 0x4301fdu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4301fd: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 430200: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 430206: je 0x43020d */
  if (zf) goto L_43020d;
L_430208: /* 430208: call 0x4025f2 */
  esp -= 4; W32(esp, 0x43020du); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
L_43020d: /* 43020d: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 430210: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 430212: je 0x40134d */
  if (zf) { SPILL(); f_40134d(); return; }
L_430218: /* 430218: push dword ptr [eax + 8] */
  { uint32_t v = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, v); }
/* 43021b: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 43021d: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 430221: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 430223: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 430227: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 43022c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43022d: call 0x416273 */
  esp -= 4; W32(esp, 0x430232u); SPILL(); f_416273(); if (g_unwind) return; RELOAD();
/* 430232: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 430235: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 430237: jne 0x43024a */
  if (!zf) goto L_43024a;
L_430239: /* 430239: call 0x4102a5 */
  esp -= 4; W32(esp, 0x43023eu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 43023e: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 430244: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 430249: ret  */
  esp += 4; SPILL(); return;
L_43024a: /* 43024a: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 43024d: ret  */
  esp += 4; SPILL(); return;
}

void f_43024e(void) {
  LOAD_REGS();
L_43024e: /* 43024e: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 430252: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 430256: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430257: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 430258: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 430259: je 0x430287 */
  if (zf) goto L_430287;
L_43025b: /* 43025b: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 43025f: xor edi, edi */
  edi = 0;
/* 430261: mov di, word ptr [ebx] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
L_430264: /* 430264: test di, di */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 430267: mov edx, ebx */
  edx = ebx;
/* 430269: je 0x43027f */
  if (zf) goto L_43027f;
L_43026b: /* 43026b: mov si, word ptr [eax] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 43026e: mov ecx, edi */
  ecx = edi;
L_430270: /* 430270: cmp cx, si */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 430273: je 0x430287 */
  if (zf) goto L_430287;
L_430275: /* 430275: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 430276: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 430277: mov cx, word ptr [edx] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 43027a: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 43027d: jne 0x430270 */
  if (!zf) goto L_430270;
L_43027f: /* 43027f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 430280: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 430281: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 430285: jne 0x430264 */
  if (!zf) goto L_430264;
L_430287: /* 430287: sub eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 43028b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 43028c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 43028d: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 43028f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 430290: ret  */
  esp += 4; SPILL(); return;
}

void f_430291(void) {
  LOAD_REGS();
L_430291: /* 430291: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 430292: mov ebp, esp */
  ebp = esp;
/* 430294: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 430297: mov eax, ecx */
  eax = ecx;
L_430299: /* 430299: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 43029c: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 43029d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 43029e: test dx, dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 4302a1: jne 0x430299 */
  if (!zf) goto L_430299;
L_4302a3: /* 4302a3: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 4302a4: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 4302a5: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4302a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4302aa: je 0x4302c7 */
  if (zf) goto L_4302c7;
L_4302ac: /* 4302ac: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_4302af: /* 4302af: mov dx, word ptr [esi] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 4302b2: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 4302b5: mov word ptr [ecx], dx */
  W16((uint32_t)(ecx), (edx & 0xffffu));
/* 4302b8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4302b9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4302ba: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4302bb: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4302bc: test dx, dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 4302bf: je 0x4302cb */
  if (zf) goto L_4302cb;
L_4302c1: /* 4302c1: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4302c5: jne 0x4302af */
  if (!zf) goto L_4302af;
L_4302c7: /* 4302c7: and word ptr [ecx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ecx), r);
  }
L_4302cb: /* 4302cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4302cc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4302cd: ret  */
  esp += 4; SPILL(); return;
}

void f_4302ce(void) {
  LOAD_REGS();
L_4302ce: /* 4302ce: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4302cf: mov ebp, esp */
  ebp = esp;
/* 4302d1: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4302d5: jne 0x4302db */
  if (!zf) goto L_4302db;
L_4302d7: /* 4302d7: xor eax, eax */
  eax = 0;
/* 4302d9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4302da: ret  */
  esp += 4; SPILL(); return;
L_4302db: /* 4302db: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4302de: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
L_4302e1: /* 4302e1: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 4302e4: je 0x4302f9 */
  if (zf) goto L_4302f9;
L_4302e6: /* 4302e6: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 4302e9: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 4302ec: je 0x4302f9 */
  if (zf) goto L_4302f9;
L_4302ee: /* 4302ee: cmp ax, word ptr [edx] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(edx)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4302f1: jne 0x4302f9 */
  if (!zf) goto L_4302f9;
L_4302f3: /* 4302f3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4302f4: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4302f5: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4302f6: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4302f7: jmp 0x4302e1 */
  goto L_4302e1;
L_4302f9: /* 4302f9: movzx eax, word ptr [ecx] */
  eax = (uint32_t)(R16((uint32_t)(ecx)));
/* 4302fc: movzx ecx, word ptr [edx] */
  ecx = (uint32_t)(R16((uint32_t)(edx)));
/* 4302ff: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 430301: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 430302: ret  */
  esp += 4; SPILL(); return;
}

void f_430303(void) {
  LOAD_REGS();
L_430303: /* 430303: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 430307: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430308: xor ecx, ecx */
  ecx = 0;
/* 43030a: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 43030d: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 430310: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 430311: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 430312: je 0x43033f */
  if (zf) goto L_43033f;
L_430314: /* 430314: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 430318: xor edi, edi */
  edi = 0;
/* 43031a: mov di, word ptr [ebx] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
L_43031d: /* 43031d: cmp di, cx */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 430320: mov esi, ebx */
  esi = ebx;
/* 430322: je 0x430335 */
  if (zf) goto L_430335;
L_430324: /* 430324: mov edx, edi */
  edx = edi;
L_430326: /* 430326: test dx, dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 430329: je 0x43033f */
  if (zf) goto L_43033f;
L_43032b: /* 43032b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 43032c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 43032d: mov dx, word ptr [esi] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 430330: cmp dx, cx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 430333: jne 0x430326 */
  if (!zf) goto L_430326;
L_430335: /* 430335: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 430336: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 430337: mov cx, word ptr [eax] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 43033a: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 43033d: jne 0x43031d */
  if (!zf) goto L_43031d;
L_43033f: /* 43033f: sub eax, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 430343: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 430344: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 430345: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 430347: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 430348: ret  */
  esp += 4; SPILL(); return;
}

void f_430349(void) {
  LOAD_REGS();
L_430349: /* 430349: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 43034d: cmp word ptr [ecx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 430351: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 430355: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 430356: mov edi, eax */
  edi = eax;
/* 430358: je 0x4303a1 */
  if (zf) goto L_4303a1;
L_43035a: /* 43035a: xor edx, edx */
  edx = 0;
/* 43035c: mov dx, word ptr [eax] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 43035f: test dx, dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 430362: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430363: je 0x43039e */
  if (zf) goto L_43039e;
L_430365: /* 430365: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_430367: /* 430367: test dx, dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 43036a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 43036e: je 0x43038c */
  if (zf) goto L_43038c;
L_430370: /* 430370: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 430373: test dx, dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 430376: je 0x4303a3 */
  if (zf) goto L_4303a3;
L_430378: /* 430378: movzx ebx, word ptr [eax + ecx] */
  ebx = (uint32_t)(R16((uint32_t)(eax + ecx)));
/* 43037c: movzx edx, dx */
  edx = (uint32_t)((edx & 0xffffu));
/* 43037f: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ebx = r;
  }
/* 430381: jne 0x43038c */
  if (!zf) goto L_43038c;
L_430383: /* 430383: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 430384: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 430385: cmp word ptr [eax + ecx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + ecx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 43038a: jne 0x430370 */
  if (!zf) goto L_430370;
L_43038c: /* 43038c: cmp word ptr [ecx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 430390: je 0x4303a3 */
  if (zf) goto L_4303a3;
L_430392: /* 430392: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 430393: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 430394: mov dx, word ptr [edi] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 430397: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 430398: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 430399: test dx, dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 43039c: jne 0x430367 */
  if (!zf) goto L_430367;
L_43039e: /* 43039e: xor eax, eax */
  eax = 0;
L_4303a0: /* 4303a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4303a1: /* 4303a1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4303a2: ret  */
  esp += 4; SPILL(); return;
L_4303a3: /* 4303a3: mov eax, edi */
  eax = edi;
/* 4303a5: jmp 0x4303a0 */
  goto L_4303a0;
}

void f_4303a7(void) {
  LOAD_REGS();
L_4303a7: /* 4303a7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4303a8: mov ebp, esp */
  ebp = esp;
/* 4303aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4303ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4303ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4303ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4303ae: call 0x40137f */
  esp -= 4; W32(esp, 0x4303b3u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4303b3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4303b6: xor ebx, ebx */
  ebx = 0;
/* 4303b8: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4303ba: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4303bd: jne 0x4303c2 */
  if (!zf) goto L_4303c2;
L_4303bf: /* 4303bf: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
L_4303c2: /* 4303c2: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 4303c5: cmp dx, bx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4303c8: je 0x4303f8 */
  if (zf) goto L_4303f8;
L_4303ca: /* 4303ca: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4303cd: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
L_4303d0: /* 4303d0: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4303d3: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4303d6: je 0x4303e9 */
  if (zf) goto L_4303e9;
L_4303d8: /* 4303d8: mov edi, eax */
  edi = eax;
L_4303da: /* 4303da: cmp di, dx */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4303dd: je 0x4303e9 */
  if (zf) goto L_4303e9;
L_4303df: /* 4303df: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4303e0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4303e1: mov di, word ptr [esi] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 4303e4: cmp di, bx */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4303e7: jne 0x4303da */
  if (!zf) goto L_4303da;
L_4303e9: /* 4303e9: cmp word ptr [esi], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4303ec: je 0x4303f8 */
  if (zf) goto L_4303f8;
L_4303ee: /* 4303ee: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4303ef: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4303f0: mov dx, word ptr [ecx] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 4303f3: cmp dx, bx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4303f6: jne 0x4303d0 */
  if (!zf) goto L_4303d0;
L_4303f8: /* 4303f8: cmp word ptr [ecx], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4303fb: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 4303fe: je 0x430435 */
  if (zf) goto L_430435;
L_430400: /* 430400: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 430403: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
L_430406: /* 430406: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 430409: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 43040c: je 0x430422 */
  if (zf) goto L_430422;
L_43040e: /* 43040e: mov di, word ptr [ecx] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 430411: mov edx, eax */
  edx = eax;
L_430413: /* 430413: cmp dx, di */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 430416: je 0x430422 */
  if (zf) goto L_430422;
L_430418: /* 430418: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 430419: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 43041a: mov dx, word ptr [esi] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 43041d: cmp dx, bx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 430420: jne 0x430413 */
  if (!zf) goto L_430413;
L_430422: /* 430422: cmp word ptr [esi], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 430425: jne 0x430430 */
  if (!zf) goto L_430430;
L_430427: /* 430427: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 430428: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 430429: cmp word ptr [ecx], bx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx))); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 43042c: jne 0x430406 */
  if (!zf) goto L_430406;
L_43042e: /* 43042e: jmp 0x430435 */
  goto L_430435;
L_430430: /* 430430: mov word ptr [ecx], bx */
  W16((uint32_t)(ecx), (ebx & 0xffffu));
/* 430433: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 430434: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_430435: /* 430435: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 430438: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 43043b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 43043e: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 430440: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 430442: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 430443: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 430445: and eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 430448: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 430449: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 43044a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 43044b: ret  */
  esp += 4; SPILL(); return;
}

void f_43044c(void) {
  LOAD_REGS();
L_43044c: /* 43044c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 43044d: mov ebp, esp */
  ebp = esp;
/* 43044f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430450: mov ebx, 0x7fffffff */
  ebx = 0x7fffffffu;
/* 430455: cmp dword ptr [ebp + 0x10], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 430458: jbe 0x430461 */
  if ((cf | zf)) goto L_430461;
L_43045a: /* 43045a: mov eax, ebx */
  eax = ebx;
/* 43045c: jmp 0x4304e2 */
  goto L_4304e2;
L_430461: /* 430461: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 430462: call 0x40137f */
  esp -= 4; W32(esp, 0x430467u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 430467: mov esi, dword ptr [eax + 0x64] */
  esi = R32((uint32_t)(eax + 0x64u));
/* 43046a: cmp esi, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 430470: je 0x430479 */
  if (zf) goto L_430479;
L_430472: /* 430472: call 0x4025f2 */
  esp -= 4; W32(esp, 0x430477u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 430477: mov esi, eax */
  esi = eax;
L_430479: /* 430479: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 43047c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43047e: jne 0x43049b */
  if (!zf) goto L_43049b;
L_430480: /* 430480: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 430483: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 430486: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 430489: call 0x401a95 */
  esp -= 4; W32(esp, 0x43048eu); SPILL(); f_401a95(); if (g_unwind) return; RELOAD();
/* 43048e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 430491: call 0x4013b8 */
  esp -= 4; W32(esp, 0x430496u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 430496: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 430499: jmp 0x4304e1 */
  goto L_4304e1;
L_43049b: /* 43049b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 43049c: push dword ptr [esi + 8] */
  { uint32_t v = R32((uint32_t)(esi + 0x8u)); esp -= 4; W32(esp, v); }
/* 43049f: mov edi, 0x400 */
  edi = 0x400u;
/* 4304a4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4304a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4304a8: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4304aa: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4304ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4304ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4304af: call 0x401944 */
  esp -= 4; W32(esp, 0x4304b4u); SPILL(); f_401944(); if (g_unwind) return; RELOAD();
/* 4304b4: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4304b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4304b9: je 0x4304de */
  if (zf) goto L_4304de;
L_4304bb: /* 4304bb: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4304be: ja 0x4304e0 */
  if ((!cf && !zf)) goto L_4304e0;
L_4304c0: /* 4304c0: push dword ptr [esi + 8] */
  { uint32_t v = R32((uint32_t)(esi + 0x8u)); esp -= 4; W32(esp, v); }
/* 4304c3: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4304c6: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4304c9: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4304cb: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4304ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4304cf: push dword ptr [esi + 0x10] */
  { uint32_t v = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, v); }
/* 4304d2: call 0x401944 */
  esp -= 4; W32(esp, 0x4304d7u); SPILL(); f_401944(); if (g_unwind) return; RELOAD();
/* 4304d7: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4304da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4304dc: jne 0x4304e0 */
  if (!zf) goto L_4304e0;
L_4304de: /* 4304de: mov eax, ebx */
  eax = ebx;
L_4304e0: /* 4304e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4304e1: /* 4304e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_4304e2: /* 4304e2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4304e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4304e4: ret  */
  esp += 4; SPILL(); return;
}

void f_4304e5(void) {
  LOAD_REGS();
L_4304e5: /* 4304e5: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 4304e9: call 0x430cf7 */
  esp -= 4; W32(esp, 0x4304eeu); SPILL(); f_430cf7(); if (g_unwind) return; RELOAD();
/* 4304ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4304f0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4304f1: je 0x4304fb */
  if (zf) goto L_4304fb;
L_4304f3: /* 4304f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4304f4: call 0x4314f2 */
  esp -= 4; W32(esp, 0x4304f9u); SPILL(); f_4314f2(); if (g_unwind) return; RELOAD();
/* 4304f9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4304fa: ret  */
  esp += 4; SPILL(); return;
L_4304fb: /* 4304fb: xor eax, eax */
  eax = 0;
/* 4304fd: ret  */
  esp += 4; SPILL(); return;
}

void f_4304fe(void) {
  LOAD_REGS();
L_4304fe: /* 4304fe: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4304ff: lea ebp, [esp - 0x74] */
  ebp = (uint32_t)(esp + 0xffffff8cu);
/* 430503: sub esp, 0xb8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xb8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 430509: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 43050e: xor eax, dword ptr [ebp + 0x78] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x78u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 430511: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430512: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 430513: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 430514: mov dword ptr [ebp + 0x70], eax */
  W32((uint32_t)(ebp + 0x70u), eax);
/* 430517: call 0x403ad5 */
  esp -= 4; W32(esp, 0x43051cu); SPILL(); f_403ad5(); if (g_unwind) return; RELOAD();
/* 43051c: mov eax, dword ptr [0x44903c] */
  eax = R32((uint32_t)(0x44903cu));
/* 430521: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 430523: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430524: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430525: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x430525);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 430527: mov esi, dword ptr [ebp + 0x7c] */
  esi = R32((uint32_t)(ebp + 0x7cu));
/* 43052a: mov word ptr [esi + 6], ax */
  W16((uint32_t)(esi + 0x6u), (eax & 0xffffu));
/* 43052e: lea eax, [ebp + 0x68] */
  eax = (uint32_t)(ebp + 0x68u);
/* 430531: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430532: call dword ptr [0x439100] */
  esp -= 4; W32(esp, 0x430538u); SPILL(); call_ind(R32(0x439100u)); if (g_unwind) return; /* KERNEL32!GetSystemTimeAsFileTime */ RELOAD();
/* 430538: mov edi, dword ptr [ebp + 0x6c] */
  edi = R32((uint32_t)(ebp + 0x6cu));
/* 43053b: mov ebx, dword ptr [ebp + 0x68] */
  ebx = R32((uint32_t)(ebp + 0x68u));
/* 43053e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 430540: push 0x23c34600 */
  { uint32_t v = 0x23c34600u; esp -= 4; W32(esp, v); }
/* 430545: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 430546: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430547: call 0x40b9aa */
  esp -= 4; W32(esp, 0x43054cu); SPILL(); f_40b9aa(); if (g_unwind) return; RELOAD();
/* 43054c: cmp eax, dword ptr [0x44f5cc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44f5ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 430552: mov dword ptr [ebp + 0x7c], eax */
  W32((uint32_t)(ebp + 0x7cu), eax);
/* 430555: je 0x4305a2 */
  if (zf) goto L_4305a2;
L_430557: /* 430557: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 43055a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43055b: call dword ptr [0x439130] */
  esp -= 4; W32(esp, 0x430561u); SPILL(); call_ind(R32(0x439130u)); if (g_unwind) return; /* KERNEL32!GetTimeZoneInformation */ RELOAD();
/* 430561: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 430564: je 0x43058d */
  if (zf) goto L_43058d;
L_430566: /* 430566: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 430569: jne 0x430584 */
  if (!zf) goto L_430584;
L_43056b: /* 43056b: cmp word ptr [ebp + 0x56], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x56u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 430570: je 0x430584 */
  if (zf) goto L_430584;
L_430572: /* 430572: cmp dword ptr [ebp + 0x64], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x64u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 430576: je 0x430584 */
  if (zf) goto L_430584;
L_430578: /* 430578: mov dword ptr [0x44e028], 1 */
  W32((uint32_t)(0x44e028u), 0x1u);
/* 430582: jmp 0x430594 */
  goto L_430594;
L_430584: /* 430584: and dword ptr [0x44e028], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44e028u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44e028u), r);
  }
/* 43058b: jmp 0x430594 */
  goto L_430594;
L_43058d: /* 43058d: or dword ptr [0x44e028], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44e028u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0x44e028u), r);
  }
L_430594: /* 430594: mov eax, dword ptr [ebp + 0x7c] */
  eax = R32((uint32_t)(ebp + 0x7cu));
/* 430597: mov edi, dword ptr [ebp + 0x6c] */
  edi = R32((uint32_t)(ebp + 0x6cu));
/* 43059a: mov ebx, dword ptr [ebp + 0x68] */
  ebx = R32((uint32_t)(ebp + 0x68u));
/* 43059d: mov dword ptr [0x44f5cc], eax */
  W32((uint32_t)(0x44f5ccu), eax);
L_4305a2: /* 4305a2: mov ax, word ptr [0x44e028] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x44e028u))) & 0xffffu);
/* 4305a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4305aa: push 0x2710 */
  { uint32_t v = 0x2710u; esp -= 4; W32(esp, v); }
/* 4305af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4305b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4305b1: mov word ptr [esi + 8], ax */
  W16((uint32_t)(esi + 0x8u), (eax & 0xffffu));
/* 4305b5: call 0x40b9aa */
  esp -= 4; W32(esp, 0x4305bau); SPILL(); f_40b9aa(); if (g_unwind) return; RELOAD();
/* 4305ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4305bc: push 0x3e8 */
  { uint32_t v = 0x3e8u; esp -= 4; W32(esp, v); }
/* 4305c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4305c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4305c3: call 0x40b935 */
  esp -= 4; W32(esp, 0x4305c8u); SPILL(); f_40b935(); if (g_unwind) return; RELOAD();
/* 4305c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4305ca: add ebx, 0x2ac18000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2ac18000u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 4305d0: push 0x989680 */
  { uint32_t v = 0x989680u; esp -= 4; W32(esp, v); }
/* 4305d5: adc edi, 0xfe624e21 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfe624e21u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 4305db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4305dc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4305dd: mov word ptr [esi + 4], ax */
  W16((uint32_t)(esi + 0x4u), (eax & 0xffffu));
/* 4305e1: call 0x40b9aa */
  esp -= 4; W32(esp, 0x4305e6u); SPILL(); f_40b9aa(); if (g_unwind) return; RELOAD();
/* 4305e6: mov ecx, dword ptr [ebp + 0x70] */
  ecx = R32((uint32_t)(ebp + 0x70u));
/* 4305e9: xor ecx, dword ptr [ebp + 0x78] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x78u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4305ec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4305ed: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4305ef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4305f0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4305f1: call 0x4013ab */
  esp -= 4; W32(esp, 0x4305f6u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 4305f6: add ebp, 0x74 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 4305f9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4305fa: ret  */
  esp += 4; SPILL(); return;
}

void f_4305fb(void) {
  LOAD_REGS();
L_4305fb: /* 4305fb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4305fc: lea ebp, [esp - 0x74] */
  ebp = (uint32_t)(esp + 0xffffff8cu);
/* 430600: sub esp, 0xc0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 430606: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 43060b: xor eax, dword ptr [ebp + 0x78] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x78u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 43060e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 43060f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 430610: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 430611: mov dword ptr [ebp + 0x70], eax */
  W32((uint32_t)(ebp + 0x70u), eax);
/* 430614: call 0x403ad5 */
  esp -= 4; W32(esp, 0x430619u); SPILL(); f_403ad5(); if (g_unwind) return; RELOAD();
/* 430619: mov eax, dword ptr [0x44903c] */
  eax = R32((uint32_t)(0x44903cu));
/* 43061e: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 430620: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430621: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430622: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x430622);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 430624: mov esi, dword ptr [ebp + 0x7c] */
  esi = R32((uint32_t)(ebp + 0x7cu));
/* 430627: mov word ptr [esi + 0xa], ax */
  W16((uint32_t)(esi + 0xau), (eax & 0xffffu));
/* 43062b: lea eax, [ebp + 0x68] */
  eax = (uint32_t)(ebp + 0x68u);
/* 43062e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43062f: call dword ptr [0x439100] */
  esp -= 4; W32(esp, 0x430635u); SPILL(); call_ind(R32(0x439100u)); if (g_unwind) return; /* KERNEL32!GetSystemTimeAsFileTime */ RELOAD();
/* 430635: mov edi, dword ptr [ebp + 0x6c] */
  edi = R32((uint32_t)(ebp + 0x6cu));
/* 430638: mov ebx, dword ptr [ebp + 0x68] */
  ebx = R32((uint32_t)(ebp + 0x68u));
/* 43063b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 43063d: push 0x23c34600 */
  { uint32_t v = 0x23c34600u; esp -= 4; W32(esp, v); }
/* 430642: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 430643: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430644: call 0x40b9aa */
  esp -= 4; W32(esp, 0x430649u); SPILL(); f_40b9aa(); if (g_unwind) return; RELOAD();
/* 430649: cmp eax, dword ptr [0x44f5d0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44f5d0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43064f: mov dword ptr [ebp + 0x60], eax */
  W32((uint32_t)(ebp + 0x60u), eax);
/* 430652: mov dword ptr [ebp + 0x64], edx */
  W32((uint32_t)(ebp + 0x64u), edx);
/* 430655: jne 0x43065f */
  if (!zf) goto L_43065f;
L_430657: /* 430657: cmp edx, dword ptr [0x44f5d4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44f5d4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43065d: je 0x4306b2 */
  if (zf) goto L_4306b2;
L_43065f: /* 43065f: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 430662: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430663: call dword ptr [0x439130] */
  esp -= 4; W32(esp, 0x430669u); SPILL(); call_ind(R32(0x439130u)); if (g_unwind) return; /* KERNEL32!GetTimeZoneInformation */ RELOAD();
/* 430669: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43066c: je 0x430695 */
  if (zf) goto L_430695;
L_43066e: /* 43066e: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 430671: jne 0x43068c */
  if (!zf) goto L_43068c;
L_430673: /* 430673: cmp word ptr [ebp + 0x4e], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x4eu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 430678: je 0x43068c */
  if (zf) goto L_43068c;
L_43067a: /* 43067a: cmp dword ptr [ebp + 0x5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x5cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43067e: je 0x43068c */
  if (zf) goto L_43068c;
L_430680: /* 430680: mov dword ptr [0x44e02c], 1 */
  W32((uint32_t)(0x44e02cu), 0x1u);
/* 43068a: jmp 0x43069c */
  goto L_43069c;
L_43068c: /* 43068c: and dword ptr [0x44e02c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44e02cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0x44e02cu), r);
  }
/* 430693: jmp 0x43069c */
  goto L_43069c;
L_430695: /* 430695: or dword ptr [0x44e02c], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44e02cu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0x44e02cu), r);
  }
L_43069c: /* 43069c: mov eax, dword ptr [ebp + 0x60] */
  eax = R32((uint32_t)(ebp + 0x60u));
/* 43069f: mov edi, dword ptr [ebp + 0x6c] */
  edi = R32((uint32_t)(ebp + 0x6cu));
/* 4306a2: mov ebx, dword ptr [ebp + 0x68] */
  ebx = R32((uint32_t)(ebp + 0x68u));
/* 4306a5: mov dword ptr [0x44f5d0], eax */
  W32((uint32_t)(0x44f5d0u), eax);
/* 4306aa: mov eax, dword ptr [ebp + 0x64] */
  eax = R32((uint32_t)(ebp + 0x64u));
/* 4306ad: mov dword ptr [0x44f5d4], eax */
  W32((uint32_t)(0x44f5d4u), eax);
L_4306b2: /* 4306b2: mov ax, word ptr [0x44e02c] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x44e02cu))) & 0xffffu);
/* 4306b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4306ba: push 0x2710 */
  { uint32_t v = 0x2710u; esp -= 4; W32(esp, v); }
/* 4306bf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4306c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4306c1: mov word ptr [esi + 0xc], ax */
  W16((uint32_t)(esi + 0xcu), (eax & 0xffffu));
/* 4306c5: call 0x40b9aa */
  esp -= 4; W32(esp, 0x4306cau); SPILL(); f_40b9aa(); if (g_unwind) return; RELOAD();
/* 4306ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4306cc: push 0x3e8 */
  { uint32_t v = 0x3e8u; esp -= 4; W32(esp, v); }
/* 4306d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4306d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4306d3: call 0x40b935 */
  esp -= 4; W32(esp, 0x4306d8u); SPILL(); f_40b935(); if (g_unwind) return; RELOAD();
/* 4306d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4306da: add ebx, 0x2ac18000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2ac18000u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 4306e0: push 0x989680 */
  { uint32_t v = 0x989680u; esp -= 4; W32(esp, v); }
/* 4306e5: adc edi, 0xfe624e21 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfe624e21u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 4306eb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4306ec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4306ed: mov word ptr [esi + 8], ax */
  W16((uint32_t)(esi + 0x8u), (eax & 0xffffu));
/* 4306f1: call 0x40b9aa */
  esp -= 4; W32(esp, 0x4306f6u); SPILL(); f_40b9aa(); if (g_unwind) return; RELOAD();
/* 4306f6: mov ecx, dword ptr [ebp + 0x70] */
  ecx = R32((uint32_t)(ebp + 0x70u));
/* 4306f9: xor ecx, dword ptr [ebp + 0x78] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x78u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4306fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4306fd: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 4306ff: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 430702: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 430703: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 430704: call 0x4013ab */
  esp -= 4; W32(esp, 0x430709u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 430709: add ebp, 0x74 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 43070c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 43070d: ret  */
  esp += 4; SPILL(); return;
}

void f_43070e(void) {
  LOAD_REGS();
L_43070e: /* 43070e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 43070f: mov ebp, esp */
  ebp = esp;
/* 430711: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 430714: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 430715: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 430718: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43071a: jne 0x43072f */
  if (!zf) goto L_43072f;
L_43071c: /* 43071c: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 43071f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430720: call 0x43166a */
  esp -= 4; W32(esp, 0x430725u); SPILL(); f_43166a(); if (g_unwind) return; RELOAD();
/* 430725: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 430728: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430729: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 43072c: lea edi, [ebp - 8] */
  edi = (uint32_t)(ebp + 0xfffffff8u);
L_43072f: /* 43072f: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 430732: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430733: call 0x403745 */
  esp -= 4; W32(esp, 0x430738u); SPILL(); f_403745(); if (g_unwind) return; RELOAD();
/* 430738: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43073a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43073b: jne 0x430750 */
  if (!zf) goto L_430750;
L_43073d: /* 43073d: call 0x4102a5 */
  esp -= 4; W32(esp, 0x430742u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 430742: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 430748: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 43074b: jmp 0x430851 */
  goto L_430851;
L_430750: /* 430750: mov cx, word ptr [eax + 0x14] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x14u))) & 0xffffu);
/* 430754: add cx, 0x76c */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x76cu);
  uint16_t r = (uint16_t)(a + b);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 430759: mov word ptr [ebp - 0x30], cx */
  W16((uint32_t)(ebp + 0xffffffd0u), (ecx & 0xffffu));
/* 43075d: mov cx, word ptr [eax + 0x10] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x10u))) & 0xffffu);
/* 430761: inc cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 430763: mov word ptr [ebp - 0x2e], cx */
  W16((uint32_t)(ebp + 0xffffffd2u), (ecx & 0xffffu));
/* 430767: mov cx, word ptr [eax + 0xc] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xcu))) & 0xffffu);
/* 43076b: mov word ptr [ebp - 0x2a], cx */
  W16((uint32_t)(ebp + 0xffffffd6u), (ecx & 0xffffu));
/* 43076f: mov cx, word ptr [eax + 8] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x8u))) & 0xffffu);
/* 430773: mov word ptr [ebp - 0x28], cx */
  W16((uint32_t)(ebp + 0xffffffd8u), (ecx & 0xffffu));
/* 430777: mov cx, word ptr [eax + 4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 43077b: mov word ptr [ebp - 0x26], cx */
  W16((uint32_t)(ebp + 0xffffffdau), (ecx & 0xffffu));
/* 43077f: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 430782: and word ptr [ebp - 0x22], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffdeu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xffffffdeu), r);
  }
/* 430787: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 430788: mov esi, dword ptr [0x439258] */
  esi = R32((uint32_t)(0x439258u));
/* 43078e: mov word ptr [ebp - 0x24], ax */
  W16((uint32_t)(ebp + 0xffffffdcu), (eax & 0xffffu));
/* 430792: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 430795: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430796: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 430799: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43079a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x43079cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 43079c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43079e: je 0x430842 */
  if (zf) goto L_430842;
L_4307a4: /* 4307a4: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 4307a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4307a8: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 4307ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4307ac: call dword ptr [0x439254] */
  esp -= 4; W32(esp, 0x4307b2u); SPILL(); call_ind(R32(0x439254u)); if (g_unwind) return; /* KERNEL32!LocalFileTimeToFileTime */ RELOAD();
/* 4307b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4307b4: je 0x430842 */
  if (zf) goto L_430842;
L_4307ba: /* 4307ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4307bb: call 0x403745 */
  esp -= 4; W32(esp, 0x4307c0u); SPILL(); f_403745(); if (g_unwind) return; RELOAD();
/* 4307c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4307c2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4307c3: je 0x430842 */
  if (zf) goto L_430842;
L_4307c5: /* 4307c5: mov cx, word ptr [eax + 0x14] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x14u))) & 0xffffu);
/* 4307c9: add cx, 0x76c */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x76cu);
  uint16_t r = (uint16_t)(a + b);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 4307ce: mov word ptr [ebp - 0x30], cx */
  W16((uint32_t)(ebp + 0xffffffd0u), (ecx & 0xffffu));
/* 4307d2: mov cx, word ptr [eax + 0x10] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x10u))) & 0xffffu);
/* 4307d6: inc cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 4307d8: mov word ptr [ebp - 0x2e], cx */
  W16((uint32_t)(ebp + 0xffffffd2u), (ecx & 0xffffu));
/* 4307dc: mov cx, word ptr [eax + 0xc] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xcu))) & 0xffffu);
/* 4307e0: mov word ptr [ebp - 0x2a], cx */
  W16((uint32_t)(ebp + 0xffffffd6u), (ecx & 0xffffu));
/* 4307e4: mov cx, word ptr [eax + 8] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x8u))) & 0xffffu);
/* 4307e8: mov word ptr [ebp - 0x28], cx */
  W16((uint32_t)(ebp + 0xffffffd8u), (ecx & 0xffffu));
/* 4307ec: mov cx, word ptr [eax + 4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 4307f0: mov word ptr [ebp - 0x26], cx */
  W16((uint32_t)(ebp + 0xffffffdau), (ecx & 0xffffu));
/* 4307f4: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 4307f7: and word ptr [ebp - 0x22], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffdeu))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xffffffdeu), r);
  }
/* 4307fc: mov word ptr [ebp - 0x24], ax */
  W16((uint32_t)(ebp + 0xffffffdcu), (eax & 0xffffu));
/* 430800: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 430803: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430804: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 430807: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430808: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x43080au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 43080a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43080c: je 0x430842 */
  if (zf) goto L_430842;
L_43080e: /* 43080e: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 430811: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430812: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 430815: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430816: call dword ptr [0x439254] */
  esp -= 4; W32(esp, 0x43081cu); SPILL(); call_ind(R32(0x439254u)); if (g_unwind) return; /* KERNEL32!LocalFileTimeToFileTime */ RELOAD();
/* 43081c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43081e: je 0x430842 */
  if (zf) goto L_430842;
L_430820: /* 430820: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 430823: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430824: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 430827: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430828: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 43082a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 43082d: call 0x415f89 */
  esp -= 4; W32(esp, 0x430832u); SPILL(); f_415f89(); if (g_unwind) return; RELOAD();
/* 430832: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430833: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430834: call dword ptr [0x439250] */
  esp -= 4; W32(esp, 0x43083au); SPILL(); call_ind(R32(0x439250u)); if (g_unwind) return; /* KERNEL32!SetFileTime */ RELOAD();
/* 43083a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43083c: je 0x430842 */
  if (zf) goto L_430842;
L_43083e: /* 43083e: xor eax, eax */
  eax = 0;
/* 430840: jmp 0x430850 */
  goto L_430850;
L_430842: /* 430842: call 0x4102a5 */
  esp -= 4; W32(esp, 0x430847u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 430847: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 43084d: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_430850: /* 430850: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_430851: /* 430851: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 430852: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 430853: ret  */
  esp += 4; SPILL(); return;
}

void f_430854(void) {
  LOAD_REGS();
L_430854: /* 430854: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 430855: push 0x8002 */
  { uint32_t v = 0x8002u; esp -= 4; W32(esp, v); }
/* 43085a: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 43085e: call 0x424d0a */
  esp -= 4; W32(esp, 0x430863u); SPILL(); f_424d0a(); if (g_unwind) return; RELOAD();
/* 430863: mov esi, eax */
  esi = eax;
/* 430865: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 430867: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430868: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430869: jge 0x430870 */
  if ((sf == of)) goto L_430870;
L_43086b: /* 43086b: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 43086e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 43086f: ret  */
  esp += 4; SPILL(); return;
L_430870: /* 430870: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 430871: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 430875: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 430876: call 0x43070e */
  esp -= 4; W32(esp, 0x43087bu); SPILL(); f_43070e(); if (g_unwind) return; RELOAD();
/* 43087b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 43087c: mov edi, eax */
  edi = eax;
/* 43087e: call 0x415b93 */
  esp -= 4; W32(esp, 0x430883u); SPILL(); f_415b93(); if (g_unwind) return; RELOAD();
/* 430883: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 430886: mov eax, edi */
  eax = edi;
/* 430888: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 430889: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 43088a: ret  */
  esp += 4; SPILL(); return;
}

void f_43088b(void) {
  LOAD_REGS();
L_43088b: /* 43088b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 43088c: mov ebp, esp */
  ebp = esp;
/* 43088e: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 430891: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 430892: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 430895: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 430897: jne 0x4308b2 */
  if (!zf) goto L_4308b2;
L_430899: /* 430899: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 43089c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43089d: call 0x43122c */
  esp -= 4; W32(esp, 0x4308a2u); SPILL(); f_43122c(); if (g_unwind) return; RELOAD();
/* 4308a2: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 4308a5: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 4308a8: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 4308ab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4308ac: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 4308af: lea edi, [ebp - 0x38] */
  edi = (uint32_t)(ebp + 0xffffffc8u);
L_4308b2: /* 4308b2: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 4308b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4308b6: call 0x430cf7 */
  esp -= 4; W32(esp, 0x4308bbu); SPILL(); f_430cf7(); if (g_unwind) return; RELOAD();
/* 4308bb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4308bd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4308be: jne 0x4308d3 */
  if (!zf) goto L_4308d3;
L_4308c0: /* 4308c0: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4308c5u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4308c5: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 4308cb: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4308ce: jmp 0x4309d4 */
  goto L_4309d4;
L_4308d3: /* 4308d3: mov cx, word ptr [eax + 0x14] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x14u))) & 0xffffu);
/* 4308d7: add cx, 0x76c */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x76cu);
  uint16_t r = (uint16_t)(a + b);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 4308dc: mov word ptr [ebp - 0x28], cx */
  W16((uint32_t)(ebp + 0xffffffd8u), (ecx & 0xffffu));
/* 4308e0: mov cx, word ptr [eax + 0x10] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x10u))) & 0xffffu);
/* 4308e4: inc cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 4308e6: mov word ptr [ebp - 0x26], cx */
  W16((uint32_t)(ebp + 0xffffffdau), (ecx & 0xffffu));
/* 4308ea: mov cx, word ptr [eax + 0xc] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xcu))) & 0xffffu);
/* 4308ee: mov word ptr [ebp - 0x22], cx */
  W16((uint32_t)(ebp + 0xffffffdeu), (ecx & 0xffffu));
/* 4308f2: mov cx, word ptr [eax + 8] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x8u))) & 0xffffu);
/* 4308f6: mov word ptr [ebp - 0x20], cx */
  W16((uint32_t)(ebp + 0xffffffe0u), (ecx & 0xffffu));
/* 4308fa: mov cx, word ptr [eax + 4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 4308fe: mov word ptr [ebp - 0x1e], cx */
  W16((uint32_t)(ebp + 0xffffffe2u), (ecx & 0xffffu));
/* 430902: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 430905: and word ptr [ebp - 0x1a], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffe6u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xffffffe6u), r);
  }
/* 43090a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 43090b: mov esi, dword ptr [0x439258] */
  esi = R32((uint32_t)(0x439258u));
/* 430911: mov word ptr [ebp - 0x1c], ax */
  W16((uint32_t)(ebp + 0xffffffe4u), (eax & 0xffffu));
/* 430915: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 430918: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430919: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 43091c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43091d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x43091fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 43091f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 430921: je 0x4309c5 */
  if (zf) goto L_4309c5;
L_430927: /* 430927: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 43092a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43092b: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 43092e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43092f: call dword ptr [0x439254] */
  esp -= 4; W32(esp, 0x430935u); SPILL(); call_ind(R32(0x439254u)); if (g_unwind) return; /* KERNEL32!LocalFileTimeToFileTime */ RELOAD();
/* 430935: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 430937: je 0x4309c5 */
  if (zf) goto L_4309c5;
L_43093d: /* 43093d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 43093e: call 0x430cf7 */
  esp -= 4; W32(esp, 0x430943u); SPILL(); f_430cf7(); if (g_unwind) return; RELOAD();
/* 430943: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 430945: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430946: je 0x4309c5 */
  if (zf) goto L_4309c5;
L_430948: /* 430948: mov cx, word ptr [eax + 0x14] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x14u))) & 0xffffu);
/* 43094c: add cx, 0x76c */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x76cu);
  uint16_t r = (uint16_t)(a + b);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 430951: mov word ptr [ebp - 0x28], cx */
  W16((uint32_t)(ebp + 0xffffffd8u), (ecx & 0xffffu));
/* 430955: mov cx, word ptr [eax + 0x10] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x10u))) & 0xffffu);
/* 430959: inc cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 43095b: mov word ptr [ebp - 0x26], cx */
  W16((uint32_t)(ebp + 0xffffffdau), (ecx & 0xffffu));
/* 43095f: mov cx, word ptr [eax + 0xc] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xcu))) & 0xffffu);
/* 430963: mov word ptr [ebp - 0x22], cx */
  W16((uint32_t)(ebp + 0xffffffdeu), (ecx & 0xffffu));
/* 430967: mov cx, word ptr [eax + 8] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x8u))) & 0xffffu);
/* 43096b: mov word ptr [ebp - 0x20], cx */
  W16((uint32_t)(ebp + 0xffffffe0u), (ecx & 0xffffu));
/* 43096f: mov cx, word ptr [eax + 4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0x4u))) & 0xffffu);
/* 430973: mov word ptr [ebp - 0x1e], cx */
  W16((uint32_t)(ebp + 0xffffffe2u), (ecx & 0xffffu));
/* 430977: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 43097a: and word ptr [ebp - 0x1a], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffe6u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xffffffe6u), r);
  }
/* 43097f: mov word ptr [ebp - 0x1c], ax */
  W16((uint32_t)(ebp + 0xffffffe4u), (eax & 0xffffu));
/* 430983: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 430986: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430987: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 43098a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43098b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x43098du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 43098d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43098f: je 0x4309c5 */
  if (zf) goto L_4309c5;
L_430991: /* 430991: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 430994: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430995: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 430998: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430999: call dword ptr [0x439254] */
  esp -= 4; W32(esp, 0x43099fu); SPILL(); call_ind(R32(0x439254u)); if (g_unwind) return; /* KERNEL32!LocalFileTimeToFileTime */ RELOAD();
/* 43099f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4309a1: je 0x4309c5 */
  if (zf) goto L_4309c5;
L_4309a3: /* 4309a3: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 4309a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4309a7: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 4309aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4309ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4309ad: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4309b0: call 0x415f89 */
  esp -= 4; W32(esp, 0x4309b5u); SPILL(); f_415f89(); if (g_unwind) return; RELOAD();
/* 4309b5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4309b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4309b7: call dword ptr [0x439250] */
  esp -= 4; W32(esp, 0x4309bdu); SPILL(); call_ind(R32(0x439250u)); if (g_unwind) return; /* KERNEL32!SetFileTime */ RELOAD();
/* 4309bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4309bf: je 0x4309c5 */
  if (zf) goto L_4309c5;
L_4309c1: /* 4309c1: xor eax, eax */
  eax = 0;
/* 4309c3: jmp 0x4309d3 */
  goto L_4309d3;
L_4309c5: /* 4309c5: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4309cau); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4309ca: mov dword ptr [eax], 0x16 */
  W32((uint32_t)(eax), 0x16u);
/* 4309d0: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4309d3: /* 4309d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_4309d4: /* 4309d4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4309d5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4309d6: ret  */
  esp += 4; SPILL(); return;
}

void f_4309d7(void) {
  LOAD_REGS();
L_4309d7: /* 4309d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4309d8: push 0x8002 */
  { uint32_t v = 0x8002u; esp -= 4; W32(esp, v); }
/* 4309dd: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4309e1: call 0x424d0a */
  esp -= 4; W32(esp, 0x4309e6u); SPILL(); f_424d0a(); if (g_unwind) return; RELOAD();
/* 4309e6: mov esi, eax */
  esi = eax;
/* 4309e8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4309ea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4309eb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4309ec: jge 0x4309f3 */
  if ((sf == of)) goto L_4309f3;
L_4309ee: /* 4309ee: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4309f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4309f2: ret  */
  esp += 4; SPILL(); return;
L_4309f3: /* 4309f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4309f4: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4309f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4309f9: call 0x43088b */
  esp -= 4; W32(esp, 0x4309feu); SPILL(); f_43088b(); if (g_unwind) return; RELOAD();
/* 4309fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4309ff: mov edi, eax */
  edi = eax;
/* 430a01: call 0x415b93 */
  esp -= 4; W32(esp, 0x430a06u); SPILL(); f_415b93(); if (g_unwind) return; RELOAD();
/* 430a06: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 430a09: mov eax, edi */
  eax = edi;
/* 430a0b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 430a0c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 430a0d: ret  */
  esp += 4; SPILL(); return;
}

void f_430a0e(void) {
  LOAD_REGS();
L_430a0e: /* 430a0e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 430a0f: mov ebp, esp */
  ebp = esp;
/* 430a11: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 430a14: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 430a17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430a18: call dword ptr [0x43925c] */
  esp -= 4; W32(esp, 0x430a1eu); SPILL(); call_ind(R32(0x43925cu)); if (g_unwind) return; /* KERNEL32!GetLocalTime */ RELOAD();
/* 430a1e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 430a21: movzx ecx, word ptr [ebp - 4] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xfffffffcu)));
/* 430a25: or dword ptr [eax + 0x20], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x20u), r);
  }
/* 430a29: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 430a2b: movzx ecx, word ptr [ebp - 6] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xfffffffau)));
/* 430a2f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 430a32: movzx ecx, word ptr [ebp - 8] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 430a36: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 430a39: movzx ecx, word ptr [ebp - 0xa] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff6u)));
/* 430a3d: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 430a40: movzx ecx, word ptr [ebp - 0xe] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 430a44: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 430a45: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 430a48: movzx ecx, word ptr [ebp - 0x10] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff0u)));
/* 430a4c: sub ecx, 0x76c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x76cu);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 430a52: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 430a55: movzx ecx, word ptr [ebp - 0xc] */
  ecx = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
/* 430a59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430a5a: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 430a5d: call 0x403572 */
  esp -= 4; W32(esp, 0x430a62u); SPILL(); f_403572(); if (g_unwind) return; RELOAD();
/* 430a62: movzx eax, word ptr [ebp - 2] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffffeu)));
/* 430a66: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430a67: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 430a68: ret  */
  esp += 4; SPILL(); return;
}

void f_430a69(void) {
  LOAD_REGS();
L_430a69: /* 430a69: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 430a6a: mov ebp, esp */
  ebp = esp;
/* 430a6c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 430a6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 430a70: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 430a73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 430a74: call 0x403572 */
  esp -= 4; W32(esp, 0x430a79u); SPILL(); f_403572(); if (g_unwind) return; RELOAD();
/* 430a79: mov ax, word ptr [esi + 0x14] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x14u))) & 0xffffu);
/* 430a7d: add ax, 0x76c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x76cu);
  uint16_t r = (uint16_t)(a + b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 430a81: mov word ptr [ebp - 0x10], ax */
  W16((uint32_t)(ebp + 0xfffffff0u), (eax & 0xffffu));
/* 430a85: mov ax, word ptr [esi + 0x10] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x10u))) & 0xffffu);
/* 430a89: inc ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a + 1);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 430a8b: mov word ptr [ebp - 0xe], ax */
  W16((uint32_t)(ebp + 0xfffffff2u), (eax & 0xffffu));
/* 430a8f: mov ax, word ptr [esi + 0xc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0xcu))) & 0xffffu);
/* 430a93: mov word ptr [ebp - 0xa], ax */
  W16((uint32_t)(ebp + 0xfffffff6u), (eax & 0xffffu));
/* 430a97: mov ax, word ptr [esi + 8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x8u))) & 0xffffu);
/* 430a9b: mov word ptr [ebp - 8], ax */
  W16((uint32_t)(ebp + 0xfffffff8u), (eax & 0xffffu));
/* 430a9f: mov ax, word ptr [esi + 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0x4u))) & 0xffffu);
/* 430aa3: mov word ptr [ebp - 6], ax */
  W16((uint32_t)(ebp + 0xfffffffau), (eax & 0xffffu));
/* 430aa7: mov ax, word ptr [esi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi))) & 0xffffu);
/* 430aaa: mov word ptr [ebp - 4], ax */
  W16((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffffu));
/* 430aae: mov ax, word ptr [ebp + 0xc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xcu))) & 0xffffu);
/* 430ab2: mov word ptr [ebp - 2], ax */
  W16((uint32_t)(ebp + 0xfffffffeu), (eax & 0xffffu));
/* 430ab6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430ab7: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 430aba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430abb: call dword ptr [0x439260] */
  esp -= 4; W32(esp, 0x430ac1u); SPILL(); call_ind(R32(0x439260u)); if (g_unwind) return; /* KERNEL32!SetLocalTime */ RELOAD();
/* 430ac1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 430ac3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 430ac4: jne 0x430ace */
  if (!zf) goto L_430ace;
L_430ac6: /* 430ac6: call dword ptr [0x43904c] */
  esp -= 4; W32(esp, 0x430accu); SPILL(); call_ind(R32(0x43904cu)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 430acc: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 430acd: ret  */
  esp += 4; SPILL(); return;
L_430ace: /* 430ace: xor eax, eax */
  eax = 0;
/* 430ad0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 430ad1: ret  */
  esp += 4; SPILL(); return;
}

void f_430ad2(void) {
  LOAD_REGS();
L_430ad2: /* 430ad2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 430ad3: mov ebp, esp */
  ebp = esp;
/* 430ad5: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 430ad8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 430adb: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 430adf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430ae0: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 430ae3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 430ae4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 430ae5: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 430ae7: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 430aea: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
/* 430aed: call 0x40137f */
  esp -= 4; W32(esp, 0x430af2u); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 430af2: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 430af4: mov esi, eax */
  esi = eax;
/* 430af6: jl 0x430cf0 */
  if ((sf != of)) goto L_430cf0;
L_430afc: /* 430afc: jg 0x430b06 */
  if ((!zf && sf == of)) goto L_430b06;
L_430afe: /* 430afe: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 430b00: jb 0x430cf0 */
  if (cf) goto L_430cf0;
L_430b06: /* 430b06: cmp ebx, 0x1000 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 430b0c: jg 0x430cf0 */
  if ((!zf && sf == of)) goto L_430cf0;
L_430b12: /* 430b12: jl 0x430b1c */
  if ((sf != of)) goto L_430b1c;
L_430b14: /* 430b14: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 430b16: ja 0x430cf0 */
  if ((!cf && !zf)) goto L_430cf0;
L_430b1c: /* 430b1c: cmp dword ptr [esi + 0x44], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x44u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 430b20: jne 0x430b38 */
  if (!zf) goto L_430b38;
L_430b22: /* 430b22: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 430b24: call 0x4010eb */
  esp -= 4; W32(esp, 0x430b29u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 430b29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 430b2b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430b2c: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 430b2f: jne 0x430b38 */
  if (!zf) goto L_430b38;
L_430b31: /* 430b31: mov esi, 0x44f5d8 */
  esi = 0x44f5d8u;
/* 430b36: jmp 0x430b3b */
  goto L_430b3b;
L_430b38: /* 430b38: mov esi, dword ptr [esi + 0x44] */
  esi = R32((uint32_t)(esi + 0x44u));
L_430b3b: /* 430b3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 430b3d: push 0x1e13380 */
  { uint32_t v = 0x1e13380u; esp -= 4; W32(esp, v); }
/* 430b42: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430b43: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 430b44: call 0x40ba12 */
  esp -= 4; W32(esp, 0x430b49u); SPILL(); f_40ba12(); if (g_unwind) return; RELOAD();
/* 430b49: mov ecx, eax */
  ecx = eax;
/* 430b4b: add ecx, 0x46 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 430b4e: lea eax, [ecx + 0x12b] */
  eax = (uint32_t)(ecx + 0x12bu);
/* 430b54: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430b55: mov ebx, 0x190 */
  ebx = 0x190u;
/* 430b5a: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x430b5a);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 430b5c: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 430b5e: lea edi, [ecx - 1] */
  edi = (uint32_t)(ecx + 0xffffffffu);
/* 430b61: mov dword ptr [ebp - 0xc], edi */
  W32((uint32_t)(ebp + 0xfffffff4u), edi);
/* 430b64: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 430b67: mov ebx, eax */
  ebx = eax;
/* 430b69: mov eax, edi */
  eax = edi;
/* 430b6b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430b6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 430b6d: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x430b6d);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 430b6f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 430b71: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 430b72: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 430b74: push 0xfffffe93 */
  { uint32_t v = 0xfffffe93u; esp -= 4; W32(esp, v); }
/* 430b79: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 430b7b: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 430b7e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430b7f: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x430b7f);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 430b81: lea eax, [ebx + eax - 0x11] */
  eax = (uint32_t)(ebx + eax + 0xffffffefu);
/* 430b85: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430b86: mov edi, eax */
  edi = eax;
/* 430b88: lea eax, [ecx - 0x46] */
  eax = (uint32_t)(ecx + 0xffffffbau);
/* 430b8b: mov ebx, edx */
  ebx = edx;
/* 430b8d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430b8e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 430b8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430b90: call 0x40518c */
  esp -= 4; W32(esp, 0x430b95u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 430b95: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 430b97: sbb edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 430b99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 430b9b: mov ebx, 0x15180 */
  ebx = 0x15180u;
/* 430ba0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430ba1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 430ba2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430ba3: call 0x40518c */
  esp -= 4; W32(esp, 0x430ba8u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 430ba8: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 430bab: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 430bad: adc dword ptr [ebp - 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 430bb0: cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 430bb4: jg 0x430bff */
  if ((!zf && sf == of)) goto L_430bff;
L_430bb6: /* 430bb6: jl 0x430bbc */
  if ((sf != of)) goto L_430bbc;
L_430bb8: /* 430bb8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 430bba: jae 0x430bff */
  if (!cf) goto L_430bff;
L_430bbc: /* 430bbc: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 430bbf: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 430bc2: add edi, 0x1e13380 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1e13380u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 430bc8: adc dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 430bcc: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 430bce: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430bcf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430bd0: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x430bd0);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 430bd2: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 430bd4: jne 0x430be3 */
  if (!zf) goto L_430be3;
L_430bd6: /* 430bd6: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 430bd9: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 430bdb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430bdc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430bdd: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x430bdd);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 430bdf: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 430be1: jne 0x430bf7 */
  if (!zf) goto L_430bf7;
L_430be3: /* 430be3: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 430be6: add eax, 0x76c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x76cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 430beb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430bec: mov ecx, 0x190 */
  ecx = 0x190u;
/* 430bf1: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x430bf1);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 430bf3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 430bf5: jne 0x430c34 */
  if (!zf) goto L_430c34;
L_430bf7: /* 430bf7: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 430bf9: adc dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 430bfd: jmp 0x430c2d */
  goto L_430c2d;
L_430bff: /* 430bff: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 430c02: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 430c04: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430c05: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430c06: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x430c06);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 430c08: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 430c0a: jne 0x430c19 */
  if (!zf) goto L_430c19;
L_430c0c: /* 430c0c: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 430c0f: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 430c11: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430c12: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430c13: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x430c13);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 430c15: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 430c17: jne 0x430c2d */
  if (!zf) goto L_430c2d;
L_430c19: /* 430c19: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 430c1c: add eax, 0x76c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x76cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 430c21: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430c22: mov ecx, 0x190 */
  ecx = 0x190u;
/* 430c27: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x430c27);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 430c29: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 430c2b: jne 0x430c34 */
  if (!zf) goto L_430c34;
L_430c2d: /* 430c2d: mov dword ptr [ebp - 8], 1 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x1u);
L_430c34: /* 430c34: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 430c37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 430c39: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430c3a: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 430c3d: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 430c40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 430c41: call 0x40ba12 */
  esp -= 4; W32(esp, 0x430c46u); SPILL(); f_40ba12(); if (g_unwind) return; RELOAD();
/* 430c46: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 430c48: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 430c4b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430c4c: push 0xfffeae80 */
  { uint32_t v = 0xfffeae80u; esp -= 4; W32(esp, v); }
/* 430c51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 430c52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430c53: call 0x40518c */
  esp -= 4; W32(esp, 0x430c58u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 430c58: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 430c5a: adc dword ptr [ebp - 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 430c5d: cmp dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 430c61: mov edx, 0x44ad40 */
  edx = 0x44ad40u;
/* 430c66: jne 0x430c6d */
  if (!zf) goto L_430c6d;
L_430c68: /* 430c68: mov edx, 0x44ad74 */
  edx = 0x44ad74u;
L_430c6d: /* 430c6d: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 430c70: xor ecx, ecx */
  ecx = 0;
/* 430c72: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 430c73: cmp dword ptr [edx + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 430c76: jge 0x430c85 */
  if ((sf == of)) goto L_430c85;
L_430c78: /* 430c78: mov ebx, eax */
  ebx = eax;
L_430c7a: /* 430c7a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 430c7b: cmp dword ptr [edx + ecx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ecx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 430c7e: jl 0x430c7a */
  if ((sf != of)) goto L_430c7a;
L_430c80: /* 430c80: mov ebx, 0x15180 */
  ebx = 0x15180u;
L_430c85: /* 430c85: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 430c86: mov dword ptr [esi + 0x10], ecx */
  W32((uint32_t)(esi + 0x10u), ecx);
/* 430c89: sub eax, dword ptr [edx + ecx*4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + ecx*4)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 430c8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 430c8e: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 430c91: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 430c94: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430c95: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 430c98: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 430c9a: call 0x40ba12 */
  esp -= 4; W32(esp, 0x430c9fu); SPILL(); f_40ba12(); if (g_unwind) return; RELOAD();
/* 430c9f: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 430ca1: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 430ca4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430ca5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430ca6: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x430ca6);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 430ca8: xor ebx, ebx */
  ebx = 0;
/* 430caa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430cab: push 0xe10 */
  { uint32_t v = 0xe10u; esp -= 4; W32(esp, v); }
/* 430cb0: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 430cb3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 430cb4: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 430cb7: call 0x40ba12 */
  esp -= 4; W32(esp, 0x430cbcu); SPILL(); f_40ba12(); if (g_unwind) return; RELOAD();
/* 430cbc: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 430cbe: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 430cc1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430cc2: push 0xfffff1f0 */
  { uint32_t v = 0xfffff1f0u; esp -= 4; W32(esp, v); }
/* 430cc7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 430cc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430cc9: call 0x40518c */
  esp -= 4; W32(esp, 0x430cceu); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 430cce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430ccf: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 430cd1: adc dword ptr [ebp - 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 430cd4: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 430cd6: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 430cd9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 430cda: call 0x40ba12 */
  esp -= 4; W32(esp, 0x430cdfu); SPILL(); f_40ba12(); if (g_unwind) return; RELOAD();
/* 430cdf: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 430ce2: imul eax, eax, 0x3c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3cu);
  eax = (uint32_t)r;
  }
/* 430ce5: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 430ce7: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 430ce9: mov dword ptr [esi + 0x20], ebx */
  W32((uint32_t)(esi + 0x20u), ebx);
/* 430cec: mov eax, esi */
  eax = esi;
/* 430cee: jmp 0x430cf2 */
  goto L_430cf2;
L_430cf0: /* 430cf0: xor eax, eax */
  eax = 0;
L_430cf2: /* 430cf2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 430cf3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 430cf4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 430cf5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 430cf6: ret  */
  esp += 4; SPILL(); return;
}

void f_430cf7(void) {
  LOAD_REGS();
L_430cf7: /* 430cf7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 430cf8: mov ebp, esp */
  ebp = esp;
/* 430cfa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 430cfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 430cfc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 430cfd: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 430d00: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 430d03: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 430d05: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 430d07: jl 0x430ef2 */
  if ((sf != of)) goto L_430ef2;
L_430d0d: /* 430d0d: jg 0x430d17 */
  if ((!zf && sf == of)) goto L_430d17;
L_430d0f: /* 430d0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 430d11: jb 0x430ef2 */
  if (cf) goto L_430ef2;
L_430d17: /* 430d17: cmp ecx, 0x1000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 430d1d: jg 0x430ef2 */
  if ((!zf && sf == of)) goto L_430ef2;
L_430d23: /* 430d23: jl 0x430d2d */
  if ((sf != of)) goto L_430d2d;
L_430d25: /* 430d25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 430d27: ja 0x430ef2 */
  if ((!cf && !zf)) goto L_430ef2;
L_430d2d: /* 430d2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 430d2e: call 0x403ad5 */
  esp -= 4; W32(esp, 0x430d33u); SPILL(); f_403ad5(); if (g_unwind) return; RELOAD();
/* 430d33: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 430d36: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 430d38: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* 430d3a: jl 0x430da2 */
  if ((sf != of)) goto L_430da2;
L_430d3c: /* 430d3c: jg 0x430d46 */
  if ((!zf && sf == of)) goto L_430d46;
L_430d3e: /* 430d3e: cmp esi, 0x3f480 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3f480u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 430d44: jbe 0x430da2 */
  if ((cf | zf)) goto L_430da2;
L_430d46: /* 430d46: mov eax, dword ptr [0x44903c] */
  eax = R32((uint32_t)(0x44903cu));
/* 430d4b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430d4c: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  esi = r;
  }
/* 430d4e: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 430d51: sbb ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 430d53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430d54: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
/* 430d57: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 430d5a: call 0x430ad2 */
  esp -= 4; W32(esp, 0x430d5fu); SPILL(); f_430ad2(); if (g_unwind) return; RELOAD();
/* 430d5f: cmp dword ptr [0x449040], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x449040u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 430d66: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430d67: mov esi, eax */
  esi = eax;
/* 430d69: je 0x430eed */
  if (zf) goto L_430eed;
L_430d6f: /* 430d6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 430d70: call 0x403316 */
  esp -= 4; W32(esp, 0x430d75u); SPILL(); f_403316(); if (g_unwind) return; RELOAD();
/* 430d75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 430d77: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430d78: je 0x430eed */
  if (zf) goto L_430eed;
L_430d7e: /* 430d7e: mov eax, dword ptr [0x449048] */
  eax = R32((uint32_t)(0x449048u));
/* 430d83: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430d84: sub dword ptr [ebp - 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 430d87: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 430d8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430d8b: sbb dword ptr [ebp - 4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 430d8e: call 0x430ad2 */
  esp -= 4; W32(esp, 0x430d93u); SPILL(); f_430ad2(); if (g_unwind) return; RELOAD();
/* 430d93: mov esi, eax */
  esi = eax;
/* 430d95: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430d96: mov dword ptr [esi + 0x20], 1 */
  W32((uint32_t)(esi + 0x20u), 0x1u);
/* 430d9d: jmp 0x430eed */
  goto L_430eed;
L_430da2: /* 430da2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430da3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 430da4: call 0x430ad2 */
  esp -= 4; W32(esp, 0x430da9u); SPILL(); f_430ad2(); if (g_unwind) return; RELOAD();
/* 430da9: mov esi, eax */
  esi = eax;
/* 430dab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 430dac: call 0x403316 */
  esp -= 4; W32(esp, 0x430db1u); SPILL(); f_403316(); if (g_unwind) return; RELOAD();
/* 430db1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 430db3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430db4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430db5: je 0x430ddc */
  if (zf) goto L_430ddc;
L_430db7: /* 430db7: mov ecx, dword ptr [0x449048] */
  ecx = R32((uint32_t)(0x449048u));
/* 430dbd: mov eax, dword ptr [0x44903c] */
  eax = R32((uint32_t)(0x44903cu));
/* 430dc2: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 430dc4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430dc5: mov ebx, eax */
  ebx = eax;
/* 430dc7: mov eax, edx */
  eax = edx;
/* 430dc9: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 430dcc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 430dce: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430dcf: mov ecx, eax */
  ecx = eax;
/* 430dd1: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ecx = r;
  }
/* 430dd3: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 430dd6: mov edi, edx */
  edi = edx;
/* 430dd8: sbb edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edi = r;
  }
/* 430dda: jmp 0x430ded */
  goto L_430ded;
L_430ddc: /* 430ddc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 430dde: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430ddf: mov ecx, eax */
  ecx = eax;
/* 430de1: mov eax, dword ptr [0x44903c] */
  eax = R32((uint32_t)(0x44903cu));
/* 430de6: mov edi, edx */
  edi = edx;
/* 430de8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430de9: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ecx = r;
  }
/* 430deb: sbb edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edi = r;
  }
L_430ded: /* 430ded: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 430def: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 430df1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 430df2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430df3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 430df4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 430df5: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 430df8: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 430dfb: call 0x40babc */
  esp -= 4; W32(esp, 0x430e00u); SPILL(); f_40babc(); if (g_unwind) return; RELOAD();
/* 430e00: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 430e02: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 430e04: jge 0x430e12 */
  if ((sf == of)) goto L_430e12;
L_430e06: /* 430e06: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 430e08: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 430e0a: add dword ptr [ebp - 8], -0x3c */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0xffffffc4u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 430e0e: adc dword ptr [ebp - 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_430e12: /* 430e12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 430e14: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430e15: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 430e18: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 430e1b: call 0x40ba12 */
  esp -= 4; W32(esp, 0x430e20u); SPILL(); f_40ba12(); if (g_unwind) return; RELOAD();
/* 430e20: mov ecx, eax */
  ecx = eax;
/* 430e22: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 430e25: mov edi, edx */
  edi = edx;
/* 430e27: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430e28: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 430e2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 430e2c: adc edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 430e2e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430e2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 430e30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 430e31: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 430e34: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 430e37: call 0x40babc */
  esp -= 4; W32(esp, 0x430e3cu); SPILL(); f_40babc(); if (g_unwind) return; RELOAD();
/* 430e3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 430e3e: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 430e41: jge 0x430e51 */
  if ((sf == of)) goto L_430e51;
L_430e43: /* 430e43: add eax, 0x3c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 430e46: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 430e49: add dword ptr [ebp - 8], -0x3c */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0xffffffc4u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 430e4d: adc dword ptr [ebp - 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_430e51: /* 430e51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 430e53: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430e54: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 430e57: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 430e5a: call 0x40ba12 */
  esp -= 4; W32(esp, 0x430e5fu); SPILL(); f_40ba12(); if (g_unwind) return; RELOAD();
/* 430e5f: mov ecx, eax */
  ecx = eax;
/* 430e61: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 430e64: mov edi, edx */
  edi = edx;
/* 430e66: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430e67: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 430e69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 430e6b: adc edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 430e6d: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 430e6f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 430e70: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 430e71: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* 430e74: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 430e77: call 0x40babc */
  esp -= 4; W32(esp, 0x430e7cu); SPILL(); f_40babc(); if (g_unwind) return; RELOAD();
/* 430e7c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 430e7e: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 430e81: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 430e82: jge 0x430e92 */
  if ((sf == of)) goto L_430e92;
L_430e84: /* 430e84: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 430e87: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 430e8a: add dword ptr [ebp - 8], -0x18 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0xffffffe8u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 430e8e: adc dword ptr [ebp - 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_430e92: /* 430e92: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 430e94: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 430e96: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 430e99: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 430e9c: call 0x40ba12 */
  esp -= 4; W32(esp, 0x430ea1u); SPILL(); f_40ba12(); if (g_unwind) return; RELOAD();
/* 430ea1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 430ea3: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 430ea6: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 430ea9: jg 0x430eed */
  if ((!zf && sf == of)) goto L_430eed;
L_430eab: /* 430eab: jl 0x430eb1 */
  if ((sf != of)) goto L_430eb1;
L_430ead: /* 430ead: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  cf = 0;
  }
/* 430eaf: jae 0x430eed */
  if (!cf) goto L_430eed;
L_430eb1: /* 430eb1: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 430eb4: lea eax, [ecx + eax + 7] */
  eax = (uint32_t)(ecx + eax + 0x7u);
/* 430eb8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430eb9: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 430ebb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430ebc: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x430ebc);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 430ebe: mov dword ptr [esi + 0x18], edx */
  W32((uint32_t)(esi + 0x18u), edx);
/* 430ec1: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 430ec4: add dword ptr [esi + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0xcu), r);
  }
/* 430ec7: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 430eca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 430ecc: jg 0x430ee7 */
  if ((!zf && sf == of)) goto L_430ee7;
L_430ece: /* 430ece: add eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 430ed1: dec dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(esi + 0x14u), r);
  }
/* 430ed4: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 430ed7: mov dword ptr [esi + 0x1c], 0x16c */
  W32((uint32_t)(esi + 0x1cu), 0x16cu);
/* 430ede: mov dword ptr [esi + 0x10], 0xb */
  W32((uint32_t)(esi + 0x10u), 0xbu);
/* 430ee5: jmp 0x430eed */
  goto L_430eed;
L_430ee7: /* 430ee7: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 430eea: add dword ptr [esi + 0x1c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0x1cu), r);
  }
L_430eed: /* 430eed: mov eax, esi */
  eax = esi;
/* 430eef: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 430ef0: jmp 0x430ef4 */
  goto L_430ef4;
L_430ef2: /* 430ef2: xor eax, eax */
  eax = 0;
L_430ef4: /* 430ef4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 430ef5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 430ef6: ret  */
  esp += 4; SPILL(); return;
}

void f_430ef7(void) {
  LOAD_REGS();
L_430ef7: /* 430ef7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 430ef8: mov ebp, esp */
  ebp = esp;
/* 430efa: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 430efd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430efe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 430eff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 430f00: mov edi, eax */
  edi = eax;
/* 430f02: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 430f05: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430f06: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 430f08: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 430f0b: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 430f0e: jl 0x43113e */
  if ((sf != of)) goto L_43113e;
L_430f14: /* 430f14: jg 0x430f1f */
  if ((!zf && sf == of)) goto L_430f1f;
L_430f16: /* 430f16: cmp eax, 0x45 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 430f19: jb 0x43113e */
  if (cf) goto L_43113e;
L_430f1f: /* 430f1f: cmp dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 430f23: jg 0x43113e */
  if ((!zf && sf == of)) goto L_43113e;
L_430f29: /* 430f29: mov esi, 0x44c */
  esi = 0x44cu;
/* 430f2e: jl 0x430f39 */
  if ((sf != of)) goto L_430f39;
L_430f30: /* 430f30: cmp dword ptr [ebp - 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 430f33: ja 0x43113e */
  if ((!cf && !zf)) goto L_43113e;
L_430f39: /* 430f39: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 430f3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 430f3e: jl 0x430f45 */
  if ((sf != of)) goto L_430f45;
L_430f40: /* 430f40: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 430f43: jle 0x430f94 */
  if ((zf || sf != of)) goto L_430f94;
L_430f45: /* 430f45: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430f46: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 430f48: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 430f49: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x430f49);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 430f4b: mov ecx, edx */
  ecx = edx;
/* 430f4d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430f4e: add dword ptr [ebp - 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 430f51: mov dword ptr [edi + 0x10], ecx */
  W32((uint32_t)(edi + 0x10u), ecx);
/* 430f54: adc dword ptr [ebp - 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 430f57: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 430f59: jge 0x430f69 */
  if ((sf == of)) goto L_430f69;
L_430f5b: /* 430f5b: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 430f5e: add dword ptr [ebp - 0xc], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 430f62: mov dword ptr [edi + 0x10], ecx */
  W32((uint32_t)(edi + 0x10u), ecx);
/* 430f65: adc dword ptr [ebp - 8], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_430f69: /* 430f69: cmp dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 430f6d: jl 0x43113e */
  if ((sf != of)) goto L_43113e;
L_430f73: /* 430f73: jg 0x430f7f */
  if ((!zf && sf == of)) goto L_430f7f;
L_430f75: /* 430f75: cmp dword ptr [ebp - 0xc], 0x45 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 430f79: jb 0x43113e */
  if (cf) goto L_43113e;
L_430f7f: /* 430f7f: cmp dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 430f83: jg 0x43113e */
  if ((!zf && sf == of)) goto L_43113e;
L_430f89: /* 430f89: jl 0x430f94 */
  if ((sf != of)) goto L_430f94;
L_430f8b: /* 430f8b: cmp dword ptr [ebp - 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 430f8e: ja 0x43113e */
  if ((!cf && !zf)) goto L_43113e;
L_430f94: /* 430f94: mov esi, dword ptr [edi + 0x10] */
  esi = R32((uint32_t)(edi + 0x10u));
/* 430f97: mov eax, dword ptr [esi*4 + 0x44ad74] */
  eax = R32((uint32_t)(esi*4 + 0x44ad74u));
/* 430f9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 430fa0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 430fa2: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 430fa5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 430fa6: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 430fa9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 430fac: mov dword ptr [ebp - 0x10], edx */
  W32((uint32_t)(ebp + 0xfffffff0u), edx);
/* 430faf: call 0x40babc */
  esp -= 4; W32(esp, 0x430fb4u); SPILL(); f_40babc(); if (g_unwind) return; RELOAD();
/* 430fb4: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 430fb6: mov ebx, 0x190 */
  ebx = 0x190u;
/* 430fbb: jne 0x430fd0 */
  if (!zf) goto L_430fd0;
L_430fbd: /* 430fbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 430fbf: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 430fc1: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 430fc4: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 430fc7: call 0x40babc */
  esp -= 4; W32(esp, 0x430fccu); SPILL(); f_40babc(); if (g_unwind) return; RELOAD();
/* 430fcc: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 430fce: jne 0x430fec */
  if (!zf) goto L_430fec;
L_430fd0: /* 430fd0: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 430fd3: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 430fd6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 430fd8: add eax, 0x76c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x76cu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 430fdd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 430fde: adc ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 430fe1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 430fe2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 430fe3: call 0x40babc */
  esp -= 4; W32(esp, 0x430fe8u); SPILL(); f_40babc(); if (g_unwind) return; RELOAD();
/* 430fe8: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  eax = r;
  }
/* 430fea: jne 0x430ff9 */
  if (!zf) goto L_430ff9;
L_430fec: /* 430fec: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 430fef: jle 0x430ff9 */
  if ((zf || sf != of)) goto L_430ff9;
L_430ff1: /* 430ff1: add dword ptr [ebp - 0x14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 430ff5: adc dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
L_430ff9: /* 430ff9: mov esi, dword ptr [ebp - 0xc] */
  esi = R32((uint32_t)(ebp + 0xfffffff4u));
/* 430ffc: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 430fff: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 431002: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 431004: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431005: sub esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  esi = r;
  }
/* 431008: sbb eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 43100a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 43100d: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 431010: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 431011: add eax, 0x12b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12bu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 431016: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 431017: adc edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 431019: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 43101a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43101b: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 43101e: call 0x40ba12 */
  esp -= 4; W32(esp, 0x431023u); SPILL(); f_40ba12(); if (g_unwind) return; RELOAD();
/* 431023: mov ebx, eax */
  ebx = eax;
/* 431025: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 431028: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 43102a: mov ecx, edx */
  ecx = edx;
/* 43102c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 43102d: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 43102f: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 431032: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 431034: adc ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 431036: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 431037: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 43103a: call 0x40ba12 */
  esp -= 4; W32(esp, 0x43103fu); SPILL(); f_40ba12(); if (g_unwind) return; RELOAD();
/* 43103f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 431041: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 431043: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 431046: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ebx = r;
  }
/* 431048: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 43104b: sbb eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 43104d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 43104e: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 431051: call 0x40ba12 */
  esp -= 4; W32(esp, 0x431056u); SPILL(); f_40ba12(); if (g_unwind) return; RELOAD();
/* 431056: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 431058: push 0x16d */
  { uint32_t v = 0x16du; esp -= 4; W32(esp, v); }
/* 43105d: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 431060: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 431062: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 431065: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* 431068: adc eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 43106a: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 43106d: call 0x40518c */
  esp -= 4; W32(esp, 0x431072u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 431072: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 431074: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 431077: adc eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 431079: add ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 43107c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 43107e: adc eax, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 431081: sub ebx, 0x63df */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x63dfu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  ebx = r;
  }
/* 431087: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 43108a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 43108b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 43108c: sbb eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 43108e: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 431090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431091: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 431094: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431095: call 0x40518c */
  esp -= 4; W32(esp, 0x43109au); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 43109a: mov ecx, eax */
  ecx = eax;
/* 43109c: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 43109f: mov esi, edx */
  esi = edx;
/* 4310a1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4310a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4310a3: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 4310a5: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 4310a7: adc edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 4310a9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4310aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4310ab: call 0x40518c */
  esp -= 4; W32(esp, 0x4310b0u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 4310b0: mov ecx, eax */
  ecx = eax;
/* 4310b2: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4310b5: mov esi, edx */
  esi = edx;
/* 4310b7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4310b8: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 4310ba: adc edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 4310bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4310bd: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 4310bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4310c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4310c1: call 0x40518c */
  esp -= 4; W32(esp, 0x4310c6u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 4310c6: mov ecx, eax */
  ecx = eax;
/* 4310c8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4310ca: mov esi, edx */
  esi = edx;
/* 4310cc: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4310cd: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 4310cf: adc edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 4310d1: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4310d4: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 4310d7: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 4310da: je 0x431121 */
  if (zf) goto L_431121;
L_4310dc: /* 4310dc: call 0x403ad5 */
  esp -= 4; W32(esp, 0x4310e1u); SPILL(); f_403ad5(); if (g_unwind) return; RELOAD();
/* 4310e1: mov eax, dword ptr [0x44903c] */
  eax = R32((uint32_t)(0x44903cu));
/* 4310e6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4310e7: add dword ptr [ebp - 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 4310ea: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 4310ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4310ee: adc dword ptr [ebp - 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4310f1: call 0x430cf7 */
  esp -= 4; W32(esp, 0x4310f6u); SPILL(); f_430cf7(); if (g_unwind) return; RELOAD();
/* 4310f6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4310f8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4310f9: je 0x43113e */
  if (zf) goto L_43113e;
L_4310fb: /* 4310fb: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 4310fe: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 431100: jg 0x431109 */
  if ((!zf && sf == of)) goto L_431109;
L_431102: /* 431102: jge 0x43112f */
  if ((sf == of)) goto L_43112f;
L_431104: /* 431104: cmp dword ptr [eax + 0x20], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 431107: jle 0x43112f */
  if ((zf || sf != of)) goto L_43112f;
L_431109: /* 431109: mov eax, dword ptr [0x449048] */
  eax = R32((uint32_t)(0x449048u));
/* 43110e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 43110f: add dword ptr [ebp - 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 431112: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 431115: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431116: adc dword ptr [ebp - 8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 431119: call 0x430cf7 */
  esp -= 4; W32(esp, 0x43111eu); SPILL(); f_430cf7(); if (g_unwind) return; RELOAD();
/* 43111e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43111f: jmp 0x43112f */
  goto L_43112f;
L_431121: /* 431121: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 431124: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431125: call 0x430ad2 */
  esp -= 4; W32(esp, 0x43112au); SPILL(); f_430ad2(); if (g_unwind) return; RELOAD();
/* 43112a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43112c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43112d: je 0x43113e */
  if (zf) goto L_43113e;
L_43112f: /* 43112f: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 431132: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 431134: mov esi, eax */
  esi = eax;
/* 431136: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 431139: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43113a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 43113c: jmp 0x431143 */
  goto L_431143;
L_43113e: /* 43113e: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 431141: mov eax, edx */
  eax = edx;
L_431143: /* 431143: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 431144: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 431145: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 431146: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 431147: ret  */
  esp += 4; SPILL(); return;
}

void f_431148(void) {
  LOAD_REGS();
L_431148: /* 431148: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 43114c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 43114e: call 0x430ef7 */
  esp -= 4; W32(esp, 0x431153u); SPILL(); f_430ef7(); if (g_unwind) return; RELOAD();
/* 431153: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431154: ret  */
  esp += 4; SPILL(); return;
}

void f_431155(void) {
  LOAD_REGS();
L_431155: /* 431155: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 431156: mov ebp, esp */
  ebp = esp;
/* 431158: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 43115b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 43115c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 43115d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 43115e: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 431161: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431162: call dword ptr [0x43925c] */
  esp -= 4; W32(esp, 0x431168u); SPILL(); call_ind(R32(0x43925cu)); if (g_unwind) return; /* KERNEL32!GetLocalTime */ RELOAD();
/* 431168: movzx eax, word ptr [ebp - 0x14] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xffffffecu)));
/* 43116c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 43116d: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 43116f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431170: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x431170);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 431172: movzx esi, word ptr [ebp - 0x12] */
  esi = (uint32_t)(R16((uint32_t)(ebp + 0xffffffeeu)));
/* 431176: mov eax, esi */
  eax = esi;
/* 431178: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 43117a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 43117b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 43117e: movzx edi, word ptr [ebp - 0xe] */
  edi = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 431182: mov bl, 0x30 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x30u) & 0xffu);
/* 431184: and byte ptr [ecx + 8], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ecx + 0x8u), r);
  }
/* 431188: mov byte ptr [ecx + 5], 0x2f */
  W8((uint32_t)(ecx + 0x5u), 0x2fu);
/* 43118c: mov byte ptr [ecx + 2], 0x2f */
  W8((uint32_t)(ecx + 0x2u), 0x2fu);
/* 431190: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 431193: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 431194: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x431194);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 431196: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 431198: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 43119a: add dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 43119c: mov byte ptr [ecx + 1], dl */
  W8((uint32_t)(ecx + 0x1u), (edx & 0xffu));
/* 43119f: mov eax, edi */
  eax = edi;
/* 4311a1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4311a2: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x4311a2);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4311a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4311a5: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4311a7: mov byte ptr [ecx + 3], al */
  W8((uint32_t)(ecx + 0x3u), (eax & 0xffu));
/* 4311aa: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4311ad: add dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4311af: mov byte ptr [ecx + 4], dl */
  W8((uint32_t)(ecx + 0x4u), (edx & 0xffu));
/* 4311b2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4311b3: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x4311b3);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4311b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4311b6: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4311b8: add dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4311ba: mov byte ptr [ecx + 6], al */
  W8((uint32_t)(ecx + 0x6u), (eax & 0xffu));
/* 4311bd: mov byte ptr [ecx + 7], dl */
  W8((uint32_t)(ecx + 0x7u), (edx & 0xffu));
/* 4311c0: mov eax, ecx */
  eax = ecx;
/* 4311c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4311c3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4311c4: ret  */
  esp += 4; SPILL(); return;
}

void f_4311c5(void) {
  LOAD_REGS();
L_4311c5: /* 4311c5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4311c6: mov ebp, esp */
  ebp = esp;
/* 4311c8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4311cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4311cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4311cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4311ce: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 4311d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4311d2: call dword ptr [0x43925c] */
  esp -= 4; W32(esp, 0x4311d8u); SPILL(); call_ind(R32(0x43925cu)); if (g_unwind) return; /* KERNEL32!GetLocalTime */ RELOAD();
/* 4311d8: movzx eax, word ptr [ebp - 8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 4311dc: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4311dd: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 4311df: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4311e0: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x4311e0);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4311e2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4311e5: movzx esi, word ptr [ebp - 6] */
  esi = (uint32_t)(R16((uint32_t)(ebp + 0xfffffffau)));
/* 4311e9: mov bl, 0x30 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x30u) & 0xffu);
/* 4311eb: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 4311ed: movzx edi, word ptr [ebp - 4] */
  edi = (uint32_t)(R16((uint32_t)(ebp + 0xfffffffcu)));
/* 4311f1: and byte ptr [ecx + 8], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x8u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ecx + 0x8u), r);
  }
/* 4311f5: mov byte ptr [ecx + 5], 0x3a */
  W8((uint32_t)(ecx + 0x5u), 0x3au);
/* 4311f9: mov byte ptr [ecx + 2], 0x3a */
  W8((uint32_t)(ecx + 0x2u), 0x3au);
/* 4311fd: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4311ff: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 431201: add dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 431203: mov byte ptr [ecx + 1], dl */
  W8((uint32_t)(ecx + 0x1u), (edx & 0xffu));
/* 431206: mov eax, esi */
  eax = esi;
/* 431208: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 431209: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 43120a: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x43120a);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 43120c: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 43120e: mov byte ptr [ecx + 3], al */
  W8((uint32_t)(ecx + 0x3u), (eax & 0xffu));
/* 431211: add dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 431213: mov byte ptr [ecx + 4], dl */
  W8((uint32_t)(ecx + 0x4u), (edx & 0xffu));
/* 431216: mov eax, edi */
  eax = edi;
/* 431218: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 431219: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x431219);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 43121b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 43121c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 43121d: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 43121f: add dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 431221: mov byte ptr [ecx + 6], al */
  W8((uint32_t)(ecx + 0x6u), (eax & 0xffu));
/* 431224: mov byte ptr [ecx + 7], dl */
  W8((uint32_t)(ecx + 0x7u), (edx & 0xffu));
/* 431227: mov eax, ecx */
  eax = ecx;
/* 431229: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 43122a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 43122b: ret  */
  esp += 4; SPILL(); return;
}

void f_43122c(void) {
  LOAD_REGS();
L_43122c: /* 43122c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 43122d: mov ebp, esp */
  ebp = esp;
/* 43122f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 431230: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 431231: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 431234: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431235: call dword ptr [0x439100] */
  esp -= 4; W32(esp, 0x43123bu); SPILL(); call_ind(R32(0x439100u)); if (g_unwind) return; /* KERNEL32!GetSystemTimeAsFileTime */ RELOAD();
/* 43123b: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 43123e: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 431241: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 431243: add eax, 0x2ac18000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2ac18000u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 431248: push 0x989680 */
  { uint32_t v = 0x989680u; esp -= 4; W32(esp, v); }
/* 43124d: adc ecx, 0xfe624e21 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfe624e21u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 431253: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 431254: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431255: call 0x40b9aa */
  esp -= 4; W32(esp, 0x43125au); SPILL(); f_40b9aa(); if (g_unwind) return; RELOAD();
/* 43125a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 43125d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43125f: je 0x431266 */
  if (zf) goto L_431266;
L_431261: /* 431261: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 431263: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
L_431266: /* 431266: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 431267: ret  */
  esp += 4; SPILL(); return;
}

void f_431268(void) {
  LOAD_REGS();
L_431268: /* 431268: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 431269: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 43126a: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 43126c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 43126d: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x43126d);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 43126f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 431270: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 431273: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 431276: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 431277: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 431278: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 43127b: mov word ptr [ecx], dx */
  W16((uint32_t)(ecx), (edx & 0xffffu));
/* 43127e: lea eax, [ecx + 2] */
  eax = (uint32_t)(ecx + 0x2u);
/* 431281: ret  */
  esp += 4; SPILL(); return;
}

void f_431282(void) {
  LOAD_REGS();
L_431282: /* 431282: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 431283: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 431284: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 431285: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 431286: call 0x40137f */
  esp -= 4; W32(esp, 0x43128bu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 43128b: mov esi, eax */
  esi = eax;
/* 43128d: cmp dword ptr [esi + 0x40], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x40u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431291: jne 0x4312a7 */
  if (!zf) goto L_4312a7;
L_431293: /* 431293: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 431295: call 0x4010eb */
  esp -= 4; W32(esp, 0x43129au); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 43129a: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 43129d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43129f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4312a0: mov eax, 0x44f5fc */
  eax = 0x44f5fcu;
/* 4312a5: je 0x4312aa */
  if (zf) goto L_4312aa;
L_4312a7: /* 4312a7: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
L_4312aa: /* 4312aa: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 4312ae: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 4312b1: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 4312b4: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 4312b7: lea edi, [ecx + ecx*2] */
  edi = (uint32_t)(ecx + ecx*2);
/* 4312ba: mov ebx, eax */
  ebx = eax;
/* 4312bc: xor ecx, ecx */
  ecx = 0;
L_4312be: /* 4312be: movsx bp, byte ptr [edx + ecx + 0x43fb24] */
  ebp = (ebp & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edx + ecx + 0x43fb24u)))) & 0xffffu);
/* 4312c7: mov word ptr [eax], bp */
  W16((uint32_t)(eax), (ebp & 0xffffu));
/* 4312ca: movsx bp, byte ptr [edi + ecx + 0x43fb3c] */
  ebp = (ebp & 0xffff0000u) | ((uint32_t)((uint32_t)(int32_t)(int8_t)(R8((uint32_t)(edi + ecx + 0x43fb3cu)))) & 0xffffu);
/* 4312d3: mov word ptr [eax + 8], bp */
  W16((uint32_t)(eax + 0x8u), (ebp & 0xffffu));
/* 4312d7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4312d8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4312d9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4312da: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4312dd: jl 0x4312be */
  if ((sf != of)) goto L_4312be;
L_4312df: /* 4312df: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 4312e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4312e2: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 4312e5: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4312e8: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 4312eb: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 4312ee: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 4312f1: call 0x431268 */
  esp -= 4; W32(esp, 0x4312f6u); SPILL(); f_431268(); if (g_unwind) return; RELOAD();
/* 4312f6: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 4312f9: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 4312fc: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 4312ff: call 0x431268 */
  esp -= 4; W32(esp, 0x431304u); SPILL(); f_431268(); if (g_unwind) return; RELOAD();
/* 431304: mov word ptr [eax], 0x3a */
  W16((uint32_t)(eax), 0x3au);
/* 431309: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 43130c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 43130f: call 0x431268 */
  esp -= 4; W32(esp, 0x431314u); SPILL(); f_431268(); if (g_unwind) return; RELOAD();
/* 431314: mov word ptr [eax], 0x3a */
  W16((uint32_t)(eax), 0x3au);
/* 431319: lea ecx, [eax + 2] */
  ecx = (uint32_t)(eax + 0x2u);
/* 43131c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 43131e: call 0x431268 */
  esp -= 4; W32(esp, 0x431323u); SPILL(); f_431268(); if (g_unwind) return; RELOAD();
/* 431323: mov ecx, eax */
  ecx = eax;
/* 431325: mov word ptr [ecx], di */
  W16((uint32_t)(ecx), (edi & 0xffffu));
/* 431328: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 43132b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 43132c: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 43132e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 43132f: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x43132f);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 431331: add ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 431334: add eax, 0x13 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 431337: call 0x431268 */
  esp -= 4; W32(esp, 0x43133cu); SPILL(); f_431268(); if (g_unwind) return; RELOAD();
/* 43133c: mov ecx, eax */
  ecx = eax;
/* 43133e: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 431341: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 431342: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 431343: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 431344: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x431344);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 431346: mov eax, edx */
  eax = edx;
/* 431348: call 0x431268 */
  esp -= 4; W32(esp, 0x43134du); SPILL(); f_431268(); if (g_unwind) return; RELOAD();
/* 43134d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 43134e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 43134f: mov word ptr [eax], 0xa */
  W16((uint32_t)(eax), 0xau);
/* 431354: and word ptr [eax + 2], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x2u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(eax + 0x2u), r);
  }
/* 431359: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 43135a: mov eax, ebx */
  eax = ebx;
/* 43135c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 43135d: ret  */
  esp += 4; SPILL(); return;
}

void f_43135e(void) {
  LOAD_REGS();
L_43135e: /* 43135e: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 431362: call 0x403745 */
  esp -= 4; W32(esp, 0x431367u); SPILL(); f_403745(); if (g_unwind) return; RELOAD();
/* 431367: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 431369: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43136a: je 0x431374 */
  if (zf) goto L_431374;
L_43136c: /* 43136c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43136d: call 0x431282 */
  esp -= 4; W32(esp, 0x431372u); SPILL(); f_431282(); if (g_unwind) return; RELOAD();
/* 431372: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431373: ret  */
  esp += 4; SPILL(); return;
L_431374: /* 431374: xor eax, eax */
  eax = 0;
/* 431376: ret  */
  esp += 4; SPILL(); return;
}

void f_431377(void) {
  LOAD_REGS();
L_431377: /* 431377: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 43137b: call 0x430cf7 */
  esp -= 4; W32(esp, 0x431380u); SPILL(); f_430cf7(); if (g_unwind) return; RELOAD();
/* 431380: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 431382: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431383: je 0x43138d */
  if (zf) goto L_43138d;
L_431385: /* 431385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431386: call 0x431282 */
  esp -= 4; W32(esp, 0x43138bu); SPILL(); f_431282(); if (g_unwind) return; RELOAD();
/* 43138b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43138c: ret  */
  esp += 4; SPILL(); return;
L_43138d: /* 43138d: xor eax, eax */
  eax = 0;
/* 43138f: ret  */
  esp += 4; SPILL(); return;
}

void f_431390(void) {
  LOAD_REGS();
L_431390: /* 431390: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 431391: mov ebp, esp */
  ebp = esp;
/* 431393: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 431396: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 431397: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 431398: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 431399: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 43139c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43139d: call dword ptr [0x43925c] */
  esp -= 4; W32(esp, 0x4313a3u); SPILL(); call_ind(R32(0x43925cu)); if (g_unwind) return; /* KERNEL32!GetLocalTime */ RELOAD();
/* 4313a3: movzx eax, word ptr [ebp - 0x10] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff0u)));
/* 4313a7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4313a8: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 4313aa: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4313ab: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x4313ab);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4313ad: movzx esi, word ptr [ebp - 0xe] */
  esi = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 4313b1: mov eax, esi */
  eax = esi;
/* 4313b3: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 4313b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4313b6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4313b9: movzx edi, word ptr [ebp - 0xa] */
  edi = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff6u)));
/* 4313bd: and word ptr [ecx + 0x10], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x10u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ecx + 0x10u), r);
  }
/* 4313c2: mov word ptr [ecx + 0xa], 0x2f */
  W16((uint32_t)(ecx + 0xau), 0x2fu);
/* 4313c8: mov word ptr [ecx + 4], 0x2f */
  W16((uint32_t)(ecx + 0x4u), 0x2fu);
/* 4313ce: mov ebx, edx */
  ebx = edx;
/* 4313d0: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4313d1: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x4313d1);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4313d3: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4313d6: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 4313d9: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4313dc: mov word ptr [ecx + 2], dx */
  W16((uint32_t)(ecx + 0x2u), (edx & 0xffffu));
/* 4313e0: mov eax, edi */
  eax = edi;
/* 4313e2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4313e3: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x4313e3);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4313e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4313e6: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4313e9: mov word ptr [ecx + 6], ax */
  W16((uint32_t)(ecx + 0x6u), (eax & 0xffffu));
/* 4313ed: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 4313f0: mov word ptr [ecx + 8], dx */
  W16((uint32_t)(ecx + 0x8u), (edx & 0xffffu));
/* 4313f4: mov eax, ebx */
  eax = ebx;
/* 4313f6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4313f7: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x4313f7);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4313f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4313fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4313fb: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4313fe: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 431401: mov word ptr [ecx + 0xc], ax */
  W16((uint32_t)(ecx + 0xcu), (eax & 0xffffu));
/* 431405: mov word ptr [ecx + 0xe], dx */
  W16((uint32_t)(ecx + 0xeu), (edx & 0xffffu));
/* 431409: mov eax, ecx */
  eax = ecx;
/* 43140b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 43140c: ret  */
  esp += 4; SPILL(); return;
}

void f_43140d(void) {
  LOAD_REGS();
L_43140d: /* 43140d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 43140e: mov ebp, esp */
  ebp = esp;
/* 431410: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 431413: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 431414: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 431415: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 431416: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 431419: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43141a: call dword ptr [0x43925c] */
  esp -= 4; W32(esp, 0x431420u); SPILL(); call_ind(R32(0x43925cu)); if (g_unwind) return; /* KERNEL32!GetLocalTime */ RELOAD();
/* 431420: movzx eax, word ptr [ebp - 8] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
/* 431424: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 431425: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 431427: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 431428: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x431428);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 43142a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 43142d: movzx esi, word ptr [ebp - 6] */
  esi = (uint32_t)(R16((uint32_t)(ebp + 0xfffffffau)));
/* 431431: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 431432: movzx edi, word ptr [ebp - 4] */
  edi = (uint32_t)(R16((uint32_t)(ebp + 0xfffffffcu)));
/* 431436: and word ptr [ecx + 0x10], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + 0x10u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ecx + 0x10u), r);
  }
/* 43143b: mov word ptr [ecx + 0xa], 0x3a */
  W16((uint32_t)(ecx + 0xau), 0x3au);
/* 431441: mov word ptr [ecx + 4], 0x3a */
  W16((uint32_t)(ecx + 0x4u), 0x3au);
/* 431447: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 43144a: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 43144d: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 431450: mov word ptr [ecx + 2], dx */
  W16((uint32_t)(ecx + 0x2u), (edx & 0xffffu));
/* 431454: mov eax, esi */
  eax = esi;
/* 431456: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 431457: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 431458: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x431458);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 43145a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 43145b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 43145c: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 43145f: mov word ptr [ecx + 6], ax */
  W16((uint32_t)(ecx + 0x6u), (eax & 0xffffu));
/* 431463: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 431466: mov word ptr [ecx + 8], dx */
  W16((uint32_t)(ecx + 0x8u), (edx & 0xffffu));
/* 43146a: mov eax, edi */
  eax = edi;
/* 43146c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 43146d: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x43146d);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 43146f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 431470: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 431471: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 431472: add eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 431475: add edx, 0x30 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 431478: mov word ptr [ecx + 0xc], ax */
  W16((uint32_t)(ecx + 0xcu), (eax & 0xffffu));
/* 43147c: mov word ptr [ecx + 0xe], dx */
  W16((uint32_t)(ecx + 0xeu), (edx & 0xffffu));
/* 431480: mov eax, ecx */
  eax = ecx;
/* 431482: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 431483: ret  */
  esp += 4; SPILL(); return;
}

void f_431484(void) {
  LOAD_REGS();
L_431484: /* 431484: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 431485: push 0x8002 */
  { uint32_t v = 0x8002u; esp -= 4; W32(esp, v); }
/* 43148a: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 43148e: call 0x42574a */
  esp -= 4; W32(esp, 0x431493u); SPILL(); f_42574a(); if (g_unwind) return; RELOAD();
/* 431493: mov esi, eax */
  esi = eax;
/* 431495: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 431497: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431498: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431499: jge 0x4314a0 */
  if ((sf == of)) goto L_4314a0;
L_43149b: /* 43149b: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 43149e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 43149f: ret  */
  esp += 4; SPILL(); return;
L_4314a0: /* 4314a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4314a1: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4314a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4314a6: call 0x43070e */
  esp -= 4; W32(esp, 0x4314abu); SPILL(); f_43070e(); if (g_unwind) return; RELOAD();
/* 4314ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4314ac: mov edi, eax */
  edi = eax;
/* 4314ae: call 0x415b93 */
  esp -= 4; W32(esp, 0x4314b3u); SPILL(); f_415b93(); if (g_unwind) return; RELOAD();
/* 4314b3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4314b6: mov eax, edi */
  eax = edi;
/* 4314b8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4314b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4314ba: ret  */
  esp += 4; SPILL(); return;
}

void f_4314bb(void) {
  LOAD_REGS();
L_4314bb: /* 4314bb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4314bc: push 0x8002 */
  { uint32_t v = 0x8002u; esp -= 4; W32(esp, v); }
/* 4314c1: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4314c5: call 0x42574a */
  esp -= 4; W32(esp, 0x4314cau); SPILL(); f_42574a(); if (g_unwind) return; RELOAD();
/* 4314ca: mov esi, eax */
  esi = eax;
/* 4314cc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4314ce: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4314cf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4314d0: jge 0x4314d7 */
  if ((sf == of)) goto L_4314d7;
L_4314d2: /* 4314d2: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4314d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4314d6: ret  */
  esp += 4; SPILL(); return;
L_4314d7: /* 4314d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4314d8: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4314dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4314dd: call 0x43088b */
  esp -= 4; W32(esp, 0x4314e2u); SPILL(); f_43088b(); if (g_unwind) return; RELOAD();
/* 4314e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4314e3: mov edi, eax */
  edi = eax;
/* 4314e5: call 0x415b93 */
  esp -= 4; W32(esp, 0x4314eau); SPILL(); f_415b93(); if (g_unwind) return; RELOAD();
/* 4314ea: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4314ed: mov eax, edi */
  eax = edi;
/* 4314ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4314f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4314f1: ret  */
  esp += 4; SPILL(); return;
}

void f_4314f2(void) {
  LOAD_REGS();
L_4314f2: /* 4314f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4314f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4314f4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4314f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4314f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4314f7: call 0x40137f */
  esp -= 4; W32(esp, 0x4314fcu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4314fc: mov esi, eax */
  esi = eax;
/* 4314fe: cmp dword ptr [esi + 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431502: jne 0x431518 */
  if (!zf) goto L_431518;
L_431504: /* 431504: push 0x1a */
  { uint32_t v = 0x1au; esp -= 4; W32(esp, v); }
/* 431506: call 0x4010eb */
  esp -= 4; W32(esp, 0x43150bu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 43150b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43150d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43150e: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 431511: mov edx, 0x44f630 */
  edx = 0x44f630u;
/* 431516: je 0x43151b */
  if (zf) goto L_43151b;
L_431518: /* 431518: mov edx, dword ptr [esi + 0x3c] */
  edx = R32((uint32_t)(esi + 0x3cu));
L_43151b: /* 43151b: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 43151f: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 431522: lea edi, [eax + eax*2] */
  edi = (uint32_t)(eax + eax*2);
/* 431525: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 431528: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 43152c: lea ebp, [eax + eax*2] */
  ebp = (uint32_t)(eax + eax*2);
/* 43152f: xor esi, esi */
  esi = 0;
L_431531: /* 431531: mov al, byte ptr [edi + esi + 0x43fb24] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + esi + 0x43fb24u))) & 0xffu);
/* 431538: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 43153a: mov al, byte ptr [esi + ebp + 0x43fb3c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + ebp + 0x43fb3cu))) & 0xffu);
/* 431541: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 431542: mov byte ptr [edx + 4], al */
  W8((uint32_t)(edx + 0x4u), (eax & 0xffu));
/* 431545: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 431546: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 431549: jl 0x431531 */
  if ((sf != of)) goto L_431531;
L_43154b: /* 43154b: mov byte ptr [edx], 0x20 */
  W8((uint32_t)(edx), 0x20u);
/* 43154e: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 431551: mov byte ptr [edx], 0x20 */
  W8((uint32_t)(edx), 0x20u);
/* 431554: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 431557: lea esi, [edx + 1] */
  esi = (uint32_t)(edx + 0x1u);
/* 43155a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 43155b: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 43155d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 43155e: mov ebx, edi */
  ebx = edi;
/* 431560: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x431560);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 431562: mov bl, 0x30 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x30u) & 0xffu);
/* 431564: mov ebp, edi */
  ebp = edi;
/* 431566: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 431568: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 43156a: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 43156c: add dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 43156e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 43156f: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 431571: mov byte ptr [esi + 1], 0x20 */
  W8((uint32_t)(esi + 0x1u), 0x20u);
/* 431575: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 431578: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 431579: idiv ebp */
  { int32_t d = (int32_t)ebp; if (!d) d = (int32_t)guest_divzero(0x431579);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 43157b: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 43157e: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 431580: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 431582: add dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 431584: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 431585: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 431587: mov byte ptr [esi + 1], 0x3a */
  W8((uint32_t)(esi + 0x1u), 0x3au);
/* 43158b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 43158e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 43158f: idiv ebp */
  { int32_t d = (int32_t)ebp; if (!d) d = (int32_t)guest_divzero(0x43158f);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 431591: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 431594: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 431596: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 431598: add dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 43159a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 43159b: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 43159d: mov byte ptr [esi + 1], 0x3a */
  W8((uint32_t)(esi + 0x1u), 0x3au);
/* 4315a1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4315a3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4315a4: idiv ebp */
  { int32_t d = (int32_t)ebp; if (!d) d = (int32_t)guest_divzero(0x4315a4);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4315a6: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4315a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4315aa: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 4315ac: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4315ae: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 4315b0: add dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4315b2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4315b3: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 4315b5: mov byte ptr [esi + 1], 0x20 */
  W8((uint32_t)(esi + 0x1u), 0x20u);
/* 4315b9: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 4315bc: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4315bd: idiv ebp */
  { int32_t d = (int32_t)ebp; if (!d) d = (int32_t)guest_divzero(0x4315bd);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4315bf: mov ebp, edi */
  ebp = edi;
/* 4315c1: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 4315c4: add eax, 0x13 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4315c7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4315c8: idiv ebp */
  { int32_t d = (int32_t)ebp; if (!d) d = (int32_t)guest_divzero(0x4315c8);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4315ca: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4315cc: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 4315ce: add dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4315d0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4315d1: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* 4315d3: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 4315d6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4315d7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4315d8: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x4315d8);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4315da: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* 4315dd: mov eax, edx */
  eax = edx;
/* 4315df: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4315e0: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x4315e0);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4315e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4315e3: add al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4315e5: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 4315e7: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 4315eb: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 4315ec: add dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4315ee: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 4315f0: mov byte ptr [ecx + 1], 0xa */
  W8((uint32_t)(ecx + 0x1u), 0xau);
/* 4315f4: and byte ptr [ecx + 2], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x2u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ecx + 0x2u), r);
  }
/* 4315f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4315f9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4315fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4315fb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4315fc: ret  */
  esp += 4; SPILL(); return;
}

void f_4315fd(void) {
  LOAD_REGS();
L_4315fd: /* 4315fd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4315fe: mov ebp, esp */
  ebp = esp;
/* 431600: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 431601: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 431602: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 431603: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 431606: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431607: call dword ptr [0x439100] */
  esp -= 4; W32(esp, 0x43160du); SPILL(); call_ind(R32(0x439100u)); if (g_unwind) return; /* KERNEL32!GetSystemTimeAsFileTime */ RELOAD();
/* 43160d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 43160f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 431611: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 431613: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 431616: call 0x40518c */
  esp -= 4; W32(esp, 0x43161bu); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 43161b: sub eax, dword ptr [0x44b128] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b128u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 431621: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 431624: sbb edx, dword ptr [0x44b12c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44b12cu)));
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 43162a: xor edi, edi */
  edi = 0;
/* 43162c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 43162d: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 43162f: push 0x2710 */
  { uint32_t v = 0x2710u; esp -= 4; W32(esp, v); }
/* 431634: adc edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 431636: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 431637: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431638: call 0x40b9aa */
  esp -= 4; W32(esp, 0x43163du); SPILL(); f_40b9aa(); if (g_unwind) return; RELOAD();
/* 43163d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 43163e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 43163f: ret  */
  esp += 4; SPILL(); return;
}

void f_431640(void) {
  LOAD_REGS();
L_431640: /* 431640: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 431644: call 0x403745 */
  esp -= 4; W32(esp, 0x431649u); SPILL(); f_403745(); if (g_unwind) return; RELOAD();
/* 431649: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43164b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43164c: je 0x431656 */
  if (zf) goto L_431656;
L_43164e: /* 43164e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43164f: call 0x4314f2 */
  esp -= 4; W32(esp, 0x431654u); SPILL(); f_4314f2(); if (g_unwind) return; RELOAD();
/* 431654: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431655: ret  */
  esp += 4; SPILL(); return;
L_431656: /* 431656: xor eax, eax */
  eax = 0;
/* 431658: ret  */
  esp += 4; SPILL(); return;
}

void f_431659(void) {
  LOAD_REGS();
L_431659: /* 431659: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 43165a: mov ebp, esp */
  ebp = esp;
/* 43165c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 43165f: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 431662: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 431665: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 431668: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 431669: ret  */
  esp += 4; SPILL(); return;
}

void f_43166a(void) {
  LOAD_REGS();
L_43166a: /* 43166a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 43166b: mov ebp, esp */
  ebp = esp;
/* 43166d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43166e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43166f: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 431672: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431673: call dword ptr [0x439100] */
  esp -= 4; W32(esp, 0x431679u); SPILL(); call_ind(R32(0x439100u)); if (g_unwind) return; /* KERNEL32!GetSystemTimeAsFileTime */ RELOAD();
/* 431679: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 43167c: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 43167f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 431681: add eax, 0x2ac18000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2ac18000u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 431686: push 0x989680 */
  { uint32_t v = 0x989680u; esp -= 4; W32(esp, v); }
/* 43168b: adc ecx, 0xfe624e21 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfe624e21u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ecx = r;
  }
/* 431691: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 431692: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431693: call 0x40b9aa */
  esp -= 4; W32(esp, 0x431698u); SPILL(); f_40b9aa(); if (g_unwind) return; RELOAD();
/* 431698: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 43169b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43169d: je 0x4316a1 */
  if (zf) goto L_4316a1;
L_43169f: /* 43169f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_4316a1: /* 4316a1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4316a2: ret  */
  esp += 4; SPILL(); return;
}

void f_4316a3(void) {
  LOAD_REGS();
L_4316a3: /* 4316a3: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 4316a5: push 0x4411c8 */
  { uint32_t v = 0x4411c8u; esp -= 4; W32(esp, v); }
/* 4316aa: call 0x40101f */
  esp -= 4; W32(esp, 0x4316afu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 4316af: xor edi, edi */
  edi = 0;
/* 4316b1: mov dword ptr [ebp - 0x1c], edi */
  W32((uint32_t)(ebp + 0xffffffe4u), edi);
/* 4316b4: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4316b7: call 0x4013b8 */
  esp -= 4; W32(esp, 0x4316bcu); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 4316bc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4316bd: mov esi, eax */
  esi = eax;
/* 4316bf: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4316c0: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 4316c3: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 4316c6: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 4316c9: call 0x40137f */
  esp -= 4; W32(esp, 0x4316ceu); SPILL(); f_40137f(); if (g_unwind) return; RELOAD();
/* 4316ce: mov eax, dword ptr [eax + 0x64] */
  eax = R32((uint32_t)(eax + 0x64u));
/* 4316d1: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 4316d4: cmp eax, dword ptr [0x44a918] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x44a918u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4316da: je 0x4316e4 */
  if (zf) goto L_4316e4;
L_4316dc: /* 4316dc: call 0x4025f2 */
  esp -= 4; W32(esp, 0x4316e1u); SPILL(); f_4025f2(); if (g_unwind) return; RELOAD();
/* 4316e1: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
L_4316e4: /* 4316e4: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 4316e7: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 4316ea: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 4316ed: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4316f0: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4316f3: call 0x4014ee */
  esp -= 4; W32(esp, 0x4316f8u); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 4316f8: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 4316fb: mov eax, esp */
  eax = esp;
/* 4316fd: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 431700: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 431704: jmp 0x431722 */
  goto L_431722;
L_431722: /* 431722: cmp dword ptr [ebp - 0x30], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431725: jne 0x431746 */
  if (!zf) goto L_431746;
L_431727: /* 431727: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 43172a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43172b: call 0x4010eb */
  esp -= 4; W32(esp, 0x431730u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 431730: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431731: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 431734: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431736: jne 0x43173f */
  if (!zf) goto L_43173f;
L_431738: /* 431738: xor eax, eax */
  eax = 0;
/* 43173a: jmp 0x43180d */
  goto L_43180d;
L_43173f: /* 43173f: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
L_431746: /* 431746: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 43174d: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 431750: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 431753: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 431756: call 0x4014ee */
  esp -= 4; W32(esp, 0x43175bu); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 43175b: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 43175e: mov edi, esp */
  edi = esp;
/* 431760: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 431763: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 431767: jmp 0x431781 */
  goto L_431781;
L_431781: /* 431781: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 431783: jne 0x43179c */
  if (!zf) goto L_43179c;
L_431785: /* 431785: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 431788: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431789: call 0x4010eb */
  esp -= 4; W32(esp, 0x43178eu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 43178e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43178f: mov edi, eax */
  edi = eax;
/* 431791: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 431793: je 0x4317ee */
  if (zf) goto L_4317ee;
L_431795: /* 431795: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
L_43179c: /* 43179c: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 43179f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4317a0: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4317a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4317a4: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4317a7: call 0x417c4a */
  esp -= 4; W32(esp, 0x4317acu); SPILL(); f_417c4a(); if (g_unwind) return; RELOAD();
/* 4317ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4317af: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4317b2: je 0x4317ee */
  if (zf) goto L_4317ee;
L_4317b4: /* 4317b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4317b6: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4317b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4317ba: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 4317bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4317be: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 4317c1: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4317c4: call 0x415078 */
  esp -= 4; W32(esp, 0x4317c9u); SPILL(); f_415078(); if (g_unwind) return; RELOAD();
/* 4317c9: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4317cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4317ce: je 0x4317ee */
  if (zf) goto L_4317ee;
L_4317d0: /* 4317d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4317d1: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 4317d4: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4317d7: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4317da: call 0x4175fd */
  esp -= 4; W32(esp, 0x4317dfu); SPILL(); f_4175fd(); if (g_unwind) return; RELOAD();
/* 4317df: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4317e2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 4317e5: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4317e8: jne 0x4317ee */
  if (!zf) goto L_4317ee;
L_4317ea: /* 4317ea: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_4317ee: /* 4317ee: cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4317f2: je 0x4317fd */
  if (zf) goto L_4317fd;
L_4317f4: /* 4317f4: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 4317f7: call 0x401156 */
  esp -= 4; W32(esp, 0x4317fcu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4317fc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4317fd: /* 4317fd: cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431801: je 0x43180a */
  if (zf) goto L_43180a;
L_431803: /* 431803: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 431804: call 0x401156 */
  esp -= 4; W32(esp, 0x431809u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 431809: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_43180a: /* 43180a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_43180d: /* 43180d: lea esp, [ebp - 0x40] */
  esp = (uint32_t)(ebp + 0xffffffc0u);
/* 431810: call 0x40105a */
  esp -= 4; W32(esp, 0x431815u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 431815: ret  */
  esp += 4; SPILL(); return;
}

void f_431706(void) {
  LOAD_REGS();
L_431706: /* 431706: xor eax, eax */
  eax = 0;
/* 431708: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 431709: ret  */
  esp += 4; SPILL(); return;
}

void f_43170a(void) {
  LOAD_REGS();
L_43170a: /* 43170a: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 43170d: call 0x415709 */
  esp -= 4; W32(esp, 0x431712u); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 431712: and dword ptr [ebp - 0x30], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 431716: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 43171a: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 43171d: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 431720: xor edi, edi */
  edi = 0;
/* 431722: cmp dword ptr [ebp - 0x30], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431725: jne 0x431746 */
  if (!zf) goto L_431746;
L_431727: /* 431727: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 43172a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43172b: call 0x4010eb */
  esp -= 4; W32(esp, 0x431730u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 431730: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431731: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 431734: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431736: jne 0x43173f */
  if (!zf) goto L_43173f;
L_431738: /* 431738: xor eax, eax */
  eax = 0;
/* 43173a: jmp 0x43180d */
  goto L_43180d;
L_43173f: /* 43173f: mov dword ptr [ebp - 0x24], 1 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x1u);
L_431746: /* 431746: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 43174d: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 431750: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 431753: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 431756: call 0x4014ee */
  esp -= 4; W32(esp, 0x43175bu); SPILL(); f_4014ee(); if (g_unwind) return; RELOAD();
/* 43175b: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 43175e: mov edi, esp */
  edi = esp;
/* 431760: mov dword ptr [ebp - 0x34], edi */
  W32((uint32_t)(ebp + 0xffffffccu), edi);
/* 431763: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 431767: jmp 0x431781 */
  goto L_431781;
L_431781: /* 431781: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 431783: jne 0x43179c */
  if (!zf) goto L_43179c;
L_431785: /* 431785: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 431788: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431789: call 0x4010eb */
  esp -= 4; W32(esp, 0x43178eu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 43178e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43178f: mov edi, eax */
  edi = eax;
/* 431791: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 431793: je 0x4317ee */
  if (zf) goto L_4317ee;
L_431795: /* 431795: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
L_43179c: /* 43179c: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 43179f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4317a0: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4317a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4317a4: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4317a7: call 0x417c4a */
  esp -= 4; W32(esp, 0x4317acu); SPILL(); f_417c4a(); if (g_unwind) return; RELOAD();
/* 4317ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4317af: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4317b2: je 0x4317ee */
  if (zf) goto L_4317ee;
L_4317b4: /* 4317b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4317b6: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4317b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4317ba: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 4317bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4317be: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 4317c1: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4317c4: call 0x415078 */
  esp -= 4; W32(esp, 0x4317c9u); SPILL(); f_415078(); if (g_unwind) return; RELOAD();
/* 4317c9: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4317cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4317ce: je 0x4317ee */
  if (zf) goto L_4317ee;
L_4317d0: /* 4317d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4317d1: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 4317d4: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4317d7: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4317da: call 0x4175fd */
  esp -= 4; W32(esp, 0x4317dfu); SPILL(); f_4175fd(); if (g_unwind) return; RELOAD();
/* 4317df: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4317e2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 4317e5: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4317e8: jne 0x4317ee */
  if (!zf) goto L_4317ee;
L_4317ea: /* 4317ea: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_4317ee: /* 4317ee: cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4317f2: je 0x4317fd */
  if (zf) goto L_4317fd;
L_4317f4: /* 4317f4: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 4317f7: call 0x401156 */
  esp -= 4; W32(esp, 0x4317fcu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4317fc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4317fd: /* 4317fd: cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431801: je 0x43180a */
  if (zf) goto L_43180a;
L_431803: /* 431803: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 431804: call 0x401156 */
  esp -= 4; W32(esp, 0x431809u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 431809: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_43180a: /* 43180a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
L_43180d: /* 43180d: lea esp, [ebp - 0x40] */
  esp = (uint32_t)(ebp + 0xffffffc0u);
/* 431810: call 0x40105a */
  esp -= 4; W32(esp, 0x431815u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 431815: ret  */
  esp += 4; SPILL(); return;
}

void f_431769(void) {
  LOAD_REGS();
L_431769: /* 431769: xor eax, eax */
  eax = 0;
/* 43176b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 43176c: ret  */
  esp += 4; SPILL(); return;
}

void f_43176d(void) {
  LOAD_REGS();
L_43176d: /* 43176d: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 431770: call 0x415709 */
  esp -= 4; W32(esp, 0x431775u); SPILL(); f_415709(); if (g_unwind) return; RELOAD();
/* 431775: xor edi, edi */
  edi = 0;
/* 431777: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 43177b: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 43177e: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 431781: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 431783: jne 0x43179c */
  if (!zf) goto L_43179c;
L_431785: /* 431785: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 431788: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431789: call 0x4010eb */
  esp -= 4; W32(esp, 0x43178eu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 43178e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43178f: mov edi, eax */
  edi = eax;
/* 431791: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 431793: je 0x4317ee */
  if (zf) goto L_4317ee;
L_431795: /* 431795: mov dword ptr [ebp - 0x28], 1 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x1u);
L_43179c: /* 43179c: lea eax, [esi + esi] */
  eax = (uint32_t)(esi + esi);
/* 43179f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4317a0: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4317a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4317a4: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4317a7: call 0x417c4a */
  esp -= 4; W32(esp, 0x4317acu); SPILL(); f_417c4a(); if (g_unwind) return; RELOAD();
/* 4317ac: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4317af: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4317b2: je 0x4317ee */
  if (zf) goto L_4317ee;
L_4317b4: /* 4317b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4317b6: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4317b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4317ba: lea eax, [ebx + ebx] */
  eax = (uint32_t)(ebx + ebx);
/* 4317bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4317be: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 4317c1: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4317c4: call 0x415078 */
  esp -= 4; W32(esp, 0x4317c9u); SPILL(); f_415078(); if (g_unwind) return; RELOAD();
/* 4317c9: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4317cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4317ce: je 0x4317ee */
  if (zf) goto L_4317ee;
L_4317d0: /* 4317d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4317d1: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 4317d4: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4317d7: push dword ptr [ebp - 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd4u)); esp -= 4; W32(esp, v); }
/* 4317da: call 0x4175fd */
  esp -= 4; W32(esp, 0x4317dfu); SPILL(); f_4175fd(); if (g_unwind) return; RELOAD();
/* 4317df: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4317e2: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 4317e5: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4317e8: jne 0x4317ee */
  if (!zf) goto L_4317ee;
L_4317ea: /* 4317ea: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
L_4317ee: /* 4317ee: cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4317f2: je 0x4317fd */
  if (zf) goto L_4317fd;
L_4317f4: /* 4317f4: push dword ptr [ebp - 0x30] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffd0u)); esp -= 4; W32(esp, v); }
/* 4317f7: call 0x401156 */
  esp -= 4; W32(esp, 0x4317fcu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4317fc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4317fd: /* 4317fd: cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431801: je 0x43180a */
  if (zf) goto L_43180a;
L_431803: /* 431803: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 431804: call 0x401156 */
  esp -= 4; W32(esp, 0x431809u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 431809: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_43180a: /* 43180a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 43180d: lea esp, [ebp - 0x40] */
  esp = (uint32_t)(ebp + 0xffffffc0u);
/* 431810: call 0x40105a */
  esp -= 4; W32(esp, 0x431815u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 431815: ret  */
  esp += 4; SPILL(); return;
}

void f_431816(void) {
  LOAD_REGS();
L_431816: /* 431816: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 431817: mov ebp, esp */
  ebp = esp;
/* 431819: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 43181c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 43181d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 431820: sub esi, 0x76c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x76cu);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 431826: cmp esi, 0x46 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 431829: jl 0x43191e */
  if ((sf != of)) goto L_43191e;
L_43182f: /* 43182f: cmp esi, 0x8a */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 431835: jg 0x43191e */
  if ((!zf && sf == of)) goto L_43191e;
L_43183b: /* 43183b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 43183c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 43183d: mov eax, esi */
  eax = esi;
/* 43183f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 431841: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 431842: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 431843: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x431843);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 431845: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 431848: mov edi, dword ptr [ecx*4 + 0x44ad70] */
  edi = R32((uint32_t)(ecx*4 + 0x44ad70u));
/* 43184f: add edi, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 431852: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 431854: jne 0x431862 */
  if (!zf) goto L_431862;
L_431856: /* 431856: mov eax, esi */
  eax = esi;
/* 431858: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 43185a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 43185b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 43185c: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x43185c);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 43185e: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 431860: jne 0x431874 */
  if (!zf) goto L_431874;
L_431862: /* 431862: lea eax, [esi + 0x76c] */
  eax = (uint32_t)(esi + 0x76cu);
/* 431868: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 431869: mov ebx, 0x190 */
  ebx = 0x190u;
/* 43186e: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x43186e);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 431870: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 431872: jne 0x43187a */
  if (!zf) goto L_43187a;
L_431874: /* 431874: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 431877: jle 0x43187a */
  if ((zf || sf != of)) goto L_43187a;
L_431879: /* 431879: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_43187a: /* 43187a: call 0x403ad5 */
  esp -= 4; W32(esp, 0x43187fu); SPILL(); f_403ad5(); if (g_unwind) return; RELOAD();
/* 43187f: lea eax, [esi + 0x12b] */
  eax = (uint32_t)(esi + 0x12bu);
/* 431885: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 431886: mov ebx, 0x190 */
  ebx = 0x190u;
/* 43188b: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x43188b);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 43188d: lea ecx, [esi - 1] */
  ecx = (uint32_t)(esi + 0xffffffffu);
/* 431890: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 431892: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 431895: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* 431898: mov ebx, eax */
  ebx = eax;
/* 43189a: mov eax, ecx */
  eax = ecx;
/* 43189c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 43189d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43189e: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x43189e);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4318a0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4318a2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4318a3: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 4318a5: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 4318a8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4318a9: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x4318a9);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4318ab: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 4318ae: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 4318b1: mov ecx, eax */
  ecx = eax;
/* 4318b3: mov eax, esi */
  eax = esi;
/* 4318b5: imul eax, eax, 0x16d */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x16du);
  eax = (uint32_t)r;
  }
/* 4318bb: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4318bd: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4318bf: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4318c1: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4318c4: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 4318c7: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 4318ca: lea ebx, [eax + ecx*8] */
  ebx = (uint32_t)(eax + ecx*8);
/* 4318cd: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 4318d0: imul ebx, ebx, 0x3c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x3cu);
  ebx = (uint32_t)r;
  }
/* 4318d3: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 4318d5: imul ebx, ebx, 0x3c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x3cu);
  ebx = (uint32_t)r;
  }
/* 4318d8: add ebx, dword ptr [0x44903c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x44903cu)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 4318de: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 4318df: cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4318e3: lea ebx, [ebx + ecx + 0x7c558180] */
  ebx = (uint32_t)(ebx + ecx + 0x7c558180u);
/* 4318ea: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 4318ed: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 4318f0: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 4318f3: je 0x431912 */
  if (zf) goto L_431912;
L_4318f5: /* 4318f5: cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4318f9: jne 0x431918 */
  if (!zf) goto L_431918;
L_4318fb: /* 4318fb: cmp dword ptr [0x449040], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x449040u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431902: je 0x431918 */
  if (zf) goto L_431918;
L_431904: /* 431904: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 431907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431908: call 0x403316 */
  esp -= 4; W32(esp, 0x43190du); SPILL(); f_403316(); if (g_unwind) return; RELOAD();
/* 43190d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43190f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431910: je 0x431918 */
  if (zf) goto L_431918;
L_431912: /* 431912: add ebx, dword ptr [0x449048] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0x449048u)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_431918: /* 431918: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 431919: mov eax, ebx */
  eax = ebx;
/* 43191b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 43191c: jmp 0x431921 */
  goto L_431921;
L_43191e: /* 43191e: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_431921: /* 431921: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 431922: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 431923: ret  */
  esp += 4; SPILL(); return;
}

void f_431924(void) {
  LOAD_REGS();
L_431924: /* 431924: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 431925: mov ebp, esp */
  ebp = esp;
/* 431927: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 43192a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 43192b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 43192e: sub esi, 0x76c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x76cu);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 431934: cmp esi, 0x46 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 431937: jl 0x431a92 */
  if ((sf != of)) goto L_431a92;
L_43193d: /* 43193d: cmp esi, 0x44b */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 431943: jg 0x431a92 */
  if ((!zf && sf == of)) goto L_431a92;
L_431949: /* 431949: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 43194c: mov ecx, dword ptr [eax*4 + 0x44ad70] */
  ecx = R32((uint32_t)(eax*4 + 0x44ad70u));
/* 431953: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 431954: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 431955: mov eax, esi */
  eax = esi;
/* 431957: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 431959: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 43195a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 43195b: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x43195b);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 43195d: add ecx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 431960: mov edi, 0x190 */
  edi = 0x190u;
/* 431965: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 431968: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43196a: jne 0x431978 */
  if (!zf) goto L_431978;
L_43196c: /* 43196c: mov eax, esi */
  eax = esi;
/* 43196e: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 431970: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 431971: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 431972: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x431972);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 431974: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 431976: jne 0x431987 */
  if (!zf) goto L_431987;
L_431978: /* 431978: lea eax, [esi + 0x76c] */
  eax = (uint32_t)(esi + 0x76cu);
/* 43197e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 43197f: mov ebx, edi */
  ebx = edi;
/* 431981: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x431981);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 431983: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 431985: jne 0x431991 */
  if (!zf) goto L_431991;
L_431987: /* 431987: cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 43198b: jle 0x431991 */
  if ((zf || sf != of)) goto L_431991;
L_43198d: /* 43198d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 43198e: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
L_431991: /* 431991: call 0x403ad5 */
  esp -= 4; W32(esp, 0x431996u); SPILL(); f_403ad5(); if (g_unwind) return; RELOAD();
/* 431996: lea eax, [esi + 0x12b] */
  eax = (uint32_t)(esi + 0x12bu);
/* 43199c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 43199d: idiv edi */
  { int32_t d = (int32_t)edi; if (!d) d = (int32_t)guest_divzero(0x43199d);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 43199f: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 4319a1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4319a2: lea ecx, [esi - 1] */
  ecx = (uint32_t)(esi + 0xffffffffu);
/* 4319a5: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 4319a7: mov edi, eax */
  edi = eax;
/* 4319a9: mov eax, ecx */
  eax = ecx;
/* 4319ab: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4319ac: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0x4319ac);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4319ae: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 4319b0: mov eax, ecx */
  eax = ecx;
/* 4319b2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4319b3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4319b4: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x4319b4);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 4319b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4319b8: push 0x16d */
  { uint32_t v = 0x16du; esp -= 4; W32(esp, v); }
/* 4319bd: lea eax, [edi + eax - 0x11] */
  eax = (uint32_t)(edi + eax + 0xffffffefu);
/* 4319c1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4319c2: mov ebx, eax */
  ebx = eax;
/* 4319c4: mov eax, edx */
  eax = edx;
/* 4319c6: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4319c9: mov eax, esi */
  eax = esi;
/* 4319cb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4319cc: sub eax, 0x46 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  eax = r;
  }
/* 4319cf: sbb edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 4319d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4319d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4319d4: call 0x40518c */
  esp -= 4; W32(esp, 0x4319d9u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 4319d9: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 4319db: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4319de: adc eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 4319e0: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4319e3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4319e6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 4319e7: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ebx = r;
  }
/* 4319e9: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4319ec: adc eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 4319ee: xor edi, edi */
  edi = 0;
/* 4319f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4319f1: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 4319f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4319f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4319f5: call 0x40518c */
  esp -= 4; W32(esp, 0x4319fau); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 4319fa: mov ecx, eax */
  ecx = eax;
/* 4319fc: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 4319ff: mov ebx, edx */
  ebx = edx;
/* 431a01: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 431a02: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 431a03: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 431a05: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 431a07: adc ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 431a09: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 431a0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 431a0b: call 0x40518c */
  esp -= 4; W32(esp, 0x431a10u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 431a10: mov ecx, eax */
  ecx = eax;
/* 431a12: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 431a15: mov ebx, edx */
  ebx = edx;
/* 431a17: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 431a18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 431a19: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* 431a1b: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 431a1d: adc ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 431a1f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 431a20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 431a21: call 0x40518c */
  esp -= 4; W32(esp, 0x431a26u); SPILL(); f_40518c(); if (g_unwind) return; RELOAD();
/* 431a26: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 431a29: mov edi, eax */
  edi = eax;
/* 431a2b: mov eax, dword ptr [0x44903c] */
  eax = R32((uint32_t)(0x44903cu));
/* 431a30: mov ebx, edx */
  ebx = edx;
/* 431a32: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 431a33: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 431a35: adc ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 431a37: mov eax, ecx */
  eax = ecx;
/* 431a39: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 431a3a: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 431a3c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 431a3f: adc ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 431a41: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 431a44: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 431a47: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 431a48: cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431a4c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 431a4f: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 431a52: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 431a55: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 431a58: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 431a5b: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 431a5e: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 431a61: je 0x431a80 */
  if (zf) goto L_431a80;
L_431a63: /* 431a63: cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431a67: jne 0x431a8a */
  if (!zf) goto L_431a8a;
L_431a69: /* 431a69: cmp dword ptr [0x449040], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x449040u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431a70: je 0x431a8a */
  if (zf) goto L_431a8a;
L_431a72: /* 431a72: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 431a75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431a76: call 0x403316 */
  esp -= 4; W32(esp, 0x431a7bu); SPILL(); f_403316(); if (g_unwind) return; RELOAD();
/* 431a7b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 431a7d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431a7e: je 0x431a8a */
  if (zf) goto L_431a8a;
L_431a80: /* 431a80: mov eax, dword ptr [0x449048] */
  eax = R32((uint32_t)(0x449048u));
/* 431a85: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 431a86: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 431a88: adc ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
L_431a8a: /* 431a8a: mov eax, edi */
  eax = edi;
/* 431a8c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 431a8d: mov edx, ebx */
  edx = ebx;
/* 431a8f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 431a90: jmp 0x431a97 */
  goto L_431a97;
L_431a92: /* 431a92: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 431a95: mov eax, edx */
  eax = edx;
L_431a97: /* 431a97: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 431a98: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 431a99: ret  */
  esp += 4; SPILL(); return;
}

void f_431a9a(void) {
  LOAD_REGS();
L_431a9a: /* 431a9a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 431a9b: mov ebp, esp */
  ebp = esp;
/* 431a9d: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 431aa0: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 431aa5: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 431aa8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 431aa9: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 431aac: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 431aaf: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 431ab2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 431ab3: mov ecx, eax */
  ecx = eax;
/* 431ab5: mov esi, 0x7fff */
  esi = 0x7fffu;
/* 431aba: and ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 431ac0: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 431ac2: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 431ac5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 431ac6: mov byte ptr [ebp - 0x24], 0xcc */
  W8((uint32_t)(ebp + 0xffffffdcu), 0xccu);
/* 431aca: mov byte ptr [ebp - 0x23], 0xcc */
  W8((uint32_t)(ebp + 0xffffffddu), 0xccu);
/* 431ace: mov byte ptr [ebp - 0x22], 0xcc */
  W8((uint32_t)(ebp + 0xffffffdeu), 0xccu);
/* 431ad2: mov byte ptr [ebp - 0x21], 0xcc */
  W8((uint32_t)(ebp + 0xffffffdfu), 0xccu);
/* 431ad6: mov byte ptr [ebp - 0x20], 0xcc */
  W8((uint32_t)(ebp + 0xffffffe0u), 0xccu);
/* 431ada: mov byte ptr [ebp - 0x1f], 0xcc */
  W8((uint32_t)(ebp + 0xffffffe1u), 0xccu);
/* 431ade: mov byte ptr [ebp - 0x1e], 0xcc */
  W8((uint32_t)(ebp + 0xffffffe2u), 0xccu);
/* 431ae2: mov byte ptr [ebp - 0x1d], 0xcc */
  W8((uint32_t)(ebp + 0xffffffe3u), 0xccu);
/* 431ae6: mov byte ptr [ebp - 0x1c], 0xcc */
  W8((uint32_t)(ebp + 0xffffffe4u), 0xccu);
/* 431aea: mov byte ptr [ebp - 0x1b], 0xcc */
  W8((uint32_t)(ebp + 0xffffffe5u), 0xccu);
/* 431aee: mov byte ptr [ebp - 0x1a], 0xfb */
  W8((uint32_t)(ebp + 0xffffffe6u), 0xfbu);
/* 431af2: mov byte ptr [ebp - 0x19], 0x3f */
  W8((uint32_t)(ebp + 0xffffffe7u), 0x3fu);
/* 431af6: mov dword ptr [ebp - 8], 1 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x1u);
/* 431afd: mov edx, eax */
  edx = eax;
/* 431aff: je 0x431b07 */
  if (zf) goto L_431b07;
L_431b01: /* 431b01: mov byte ptr [ebx + 2], 0x2d */
  W8((uint32_t)(ebx + 0x2u), 0x2du);
/* 431b05: jmp 0x431b0b */
  goto L_431b0b;
L_431b07: /* 431b07: mov byte ptr [ebx + 2], 0x20 */
  W8((uint32_t)(ebx + 0x2u), 0x20u);
L_431b0b: /* 431b0b: test dx, dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 431b0e: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 431b11: jne 0x431b20 */
  if (!zf) goto L_431b20;
L_431b13: /* 431b13: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 431b15: jne 0x431b20 */
  if (!zf) goto L_431b20;
L_431b17: /* 431b17: cmp dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431b1a: je 0x431c13 */
  if (zf) goto L_431c13;
L_431b20: /* 431b20: cmp dx, si */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((esi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 431b23: jne 0x431b9d */
  if (!zf) goto L_431b9d;
L_431b25: /* 431b25: mov eax, 0x80000000 */
  eax = 0x80000000u;
/* 431b2a: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431b2c: mov word ptr [ebx], 1 */
  W16((uint32_t)(ebx), 0x1u);
/* 431b31: jne 0x431b39 */
  if (!zf) goto L_431b39;
L_431b33: /* 431b33: cmp dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431b37: je 0x431b48 */
  if (zf) goto L_431b48;
L_431b39: /* 431b39: test edi, 0x40000000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 431b3f: jne 0x431b48 */
  if (!zf) goto L_431b48;
L_431b41: /* 431b41: push 0x4411f8 */
  { uint32_t v = 0x4411f8u; esp -= 4; W32(esp, v); }
/* 431b46: jmp 0x431b8e */
  goto L_431b8e;
L_431b48: /* 431b48: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 431b4b: je 0x431b62 */
  if (zf) goto L_431b62;
L_431b4d: /* 431b4d: cmp edi, 0xc0000000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc0000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431b53: jne 0x431b62 */
  if (!zf) goto L_431b62;
L_431b55: /* 431b55: cmp dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431b59: jne 0x431b89 */
  if (!zf) goto L_431b89;
L_431b5b: /* 431b5b: push 0x4411f0 */
  { uint32_t v = 0x4411f0u; esp -= 4; W32(esp, v); }
/* 431b60: jmp 0x431b71 */
  goto L_431b71;
L_431b62: /* 431b62: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431b64: jne 0x431b89 */
  if (!zf) goto L_431b89;
L_431b66: /* 431b66: cmp dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431b6a: jne 0x431b89 */
  if (!zf) goto L_431b89;
L_431b6c: /* 431b6c: push 0x4411e8 */
  { uint32_t v = 0x4411e8u; esp -= 4; W32(esp, v); }
L_431b71: /* 431b71: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 431b74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431b75: call 0x404b3a */
  esp -= 4; W32(esp, 0x431b7au); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 431b7a: mov byte ptr [ebx + 3], 5 */
  W8((uint32_t)(ebx + 0x3u), 0x5u);
L_431b7e: /* 431b7e: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 431b82: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431b83: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431b84: jmp 0x431cf5 */
  goto L_431cf5;
L_431b89: /* 431b89: push 0x4411e0 */
  { uint32_t v = 0x4411e0u; esp -= 4; W32(esp, v); }
L_431b8e: /* 431b8e: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 431b91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431b92: call 0x404b3a */
  esp -= 4; W32(esp, 0x431b97u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 431b97: mov byte ptr [ebx + 3], 6 */
  W8((uint32_t)(ebx + 0x3u), 0x6u);
/* 431b9b: jmp 0x431b7e */
  goto L_431b7e;
L_431b9d: /* 431b9d: movzx eax, dx */
  eax = (uint32_t)((edx & 0xffffu));
/* 431ba0: mov esi, eax */
  esi = eax;
/* 431ba2: imul eax, eax, 0x4d10 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x4d10u);
  eax = (uint32_t)r;
  }
/* 431ba8: and word ptr [ebp - 0x18], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffe8u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 431bad: mov ecx, edi */
  ecx = edi;
/* 431baf: shr ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 24;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 431bb2: shr esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 431bb5: lea ecx, [esi + ecx*2] */
  ecx = (uint32_t)(esi + ecx*2);
/* 431bb8: imul ecx, ecx, 0x4d */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x4du);
  ecx = (uint32_t)r;
  }
/* 431bbb: lea esi, [ecx + eax - 0x134312f4] */
  esi = (uint32_t)(ecx + eax + 0xecbced0cu);
/* 431bc2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 431bc5: mov dword ptr [ebp - 0x16], eax */
  W32((uint32_t)(ebp + 0xffffffeau), eax);
/* 431bc8: sar esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 16;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 431bcb: movsx eax, si */
  eax = (uint32_t)(int32_t)(int16_t)((esi & 0xffffu));
/* 431bce: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 431bd0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 431bd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431bd3: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 431bd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431bd7: mov word ptr [ebp - 0xe], dx */
  W16((uint32_t)(ebp + 0xfffffff2u), (edx & 0xffffu));
/* 431bdb: mov dword ptr [ebp - 0x12], edi */
  W32((uint32_t)(ebp + 0xffffffeeu), edi);
/* 431bde: call 0x402f1f */
  esp -= 4; W32(esp, 0x431be3u); SPILL(); f_402f1f(); if (g_unwind) return; RELOAD();
/* 431be3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 431be6: cmp word ptr [ebp - 0xe], 0x3fff */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff2u))); uint16_t b = (uint16_t)(0x3fffu);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 431bec: jb 0x431bfe */
  if (cf) goto L_431bfe;
L_431bee: /* 431bee: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 431bf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431bf2: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 431bf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431bf6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 431bf7: call 0x403d46 */
  esp -= 4; W32(esp, 0x431bfcu); SPILL(); f_403d46(); if (g_unwind) return; RELOAD();
/* 431bfc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431bfd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_431bfe: /* 431bfe: test byte ptr [ebp + 0x18], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x18u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 431c02: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 431c05: mov word ptr [ebx], si */
  W16((uint32_t)(ebx), (esi & 0xffffu));
/* 431c08: je 0x431c1c */
  if (zf) goto L_431c1c;
L_431c0a: /* 431c0a: movsx eax, si */
  eax = (uint32_t)(int32_t)(int16_t)((esi & 0xffffu));
/* 431c0d: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 431c0f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 431c11: jg 0x431c1c */
  if ((!zf && sf == of)) goto L_431c1c;
L_431c13: /* 431c13: mov byte ptr [ebx + 4], 0x30 */
  W8((uint32_t)(ebx + 0x4u), 0x30u);
/* 431c17: jmp 0x431d19 */
  goto L_431d19;
L_431c1c: /* 431c1c: cmp edi, 0x15 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x15u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 431c1f: jle 0x431c24 */
  if ((zf || sf != of)) goto L_431c24;
L_431c21: /* 431c21: push 0x15 */
  { uint32_t v = 0x15u; esp -= 4; W32(esp, v); }
/* 431c23: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_431c24: /* 431c24: movzx esi, word ptr [ebp - 0xe] */
  esi = (uint32_t)(R16((uint32_t)(ebp + 0xfffffff2u)));
/* 431c28: sub esi, 0x3ffe */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3ffeu);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 431c2e: and word ptr [ebp - 0xe], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff2u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xfffffff2u), r);
  }
/* 431c33: mov dword ptr [ebp + 0x10], 8 */
  W32((uint32_t)(ebp + 0x10u), 0x8u);
L_431c3a: /* 431c3a: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 431c3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431c3e: call 0x4028c8 */
  esp -= 4; W32(esp, 0x431c43u); SPILL(); f_4028c8(); if (g_unwind) return; RELOAD();
/* 431c43: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 431c46: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431c47: jne 0x431c3a */
  if (!zf) goto L_431c3a;
L_431c49: /* 431c49: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 431c4b: jge 0x431c64 */
  if ((sf == of)) goto L_431c64;
L_431c4d: /* 431c4d: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* 431c4f: and esi, 0xff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  esi = r;
  }
/* 431c55: jle 0x431c64 */
  if ((zf || sf != of)) goto L_431c64;
L_431c57: /* 431c57: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 431c5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431c5b: call 0x4324b3 */
  esp -= 4; W32(esp, 0x431c60u); SPILL(); f_4324b3(); if (g_unwind) return; RELOAD();
/* 431c60: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 431c61: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431c62: jne 0x431c57 */
  if (!zf) goto L_431c57;
L_431c64: /* 431c64: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 431c67: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 431c69: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* 431c6c: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 431c6f: jle 0x431cc1 */
  if ((zf || sf != of)) goto L_431cc1;
L_431c71: /* 431c71: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
L_431c74: /* 431c74: lea esi, [ebp - 0x18] */
  esi = (uint32_t)(ebp + 0xffffffe8u);
/* 431c77: lea edi, [ebp - 0x30] */
  edi = (uint32_t)(ebp + 0xffffffd0u);
/* 431c7a: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 431c7b: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 431c7c: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 431c7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431c80: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 431c81: call 0x4028c8 */
  esp -= 4; W32(esp, 0x431c86u); SPILL(); f_4028c8(); if (g_unwind) return; RELOAD();
/* 431c86: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 431c89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431c8a: call 0x4028c8 */
  esp -= 4; W32(esp, 0x431c8fu); SPILL(); f_4028c8(); if (g_unwind) return; RELOAD();
/* 431c8f: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 431c92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431c93: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 431c96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431c97: call 0x4028f6 */
  esp -= 4; W32(esp, 0x431c9cu); SPILL(); f_4028f6(); if (g_unwind) return; RELOAD();
/* 431c9c: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 431c9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431ca0: call 0x4028c8 */
  esp -= 4; W32(esp, 0x431ca5u); SPILL(); f_4028c8(); if (g_unwind) return; RELOAD();
/* 431ca5: mov al, byte ptr [ebp - 0xd] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xfffffff3u))) & 0xffu);
/* 431ca8: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 431cab: and byte ptr [ebp - 0xd], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff3u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffff3u), r);
  }
/* 431caf: add al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 431cb1: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 431cb4: inc dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 431cb7: dec dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 431cba: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
/* 431cbc: jne 0x431c74 */
  if (!zf) goto L_431c74;
L_431cbe: /* 431cbe: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
L_431cc1: /* 431cc1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 431cc2: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 431cc4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 431cc5: cmp cl, 0x35 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x35u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 431cc8: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 431ccb: jl 0x431d0e */
  if ((sf != of)) goto L_431d0e;
L_431ccd: /* 431ccd: jmp 0x431cd8 */
  goto L_431cd8;
L_431ccf: /* 431ccf: cmp byte ptr [eax], 0x39 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 431cd2: jne 0x431cdc */
  if (!zf) goto L_431cdc;
L_431cd4: /* 431cd4: mov byte ptr [eax], 0x30 */
  W8((uint32_t)(eax), 0x30u);
/* 431cd7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
L_431cd8: /* 431cd8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 431cda: jae 0x431ccf */
  if (!cf) goto L_431ccf;
L_431cdc: /* 431cdc: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 431cde: jae 0x431ce4 */
  if (!cf) goto L_431ce4;
L_431ce0: /* 431ce0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 431ce1: inc word ptr [ebx] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(ebx), r);
  }
L_431ce4: /* 431ce4: inc byte ptr [eax] */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax)));
  uint8_t r = (uint8_t)(a + 1);
  W8((uint32_t)(eax), r);
  }
L_431ce6: /* 431ce6: sub al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 431ce8: sub al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 431cea: mov byte ptr [ebx + 3], al */
  W8((uint32_t)(ebx + 0x3u), (eax & 0xffu));
/* 431ced: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 431cf0: and byte ptr [eax + ebx + 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ebx + 0x4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax + ebx + 0x4u), r);
  }
L_431cf5: /* 431cf5: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
L_431cf8: /* 431cf8: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 431cfb: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 431cfe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 431cff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 431d00: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 431d01: call 0x4013ab */
  esp -= 4; W32(esp, 0x431d06u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 431d06: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 431d07: ret  */
  esp += 4; SPILL(); return;
L_431d08: /* 431d08: cmp byte ptr [eax], 0x30 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 431d0b: jne 0x431d12 */
  if (!zf) goto L_431d12;
L_431d0d: /* 431d0d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
L_431d0e: /* 431d0e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 431d10: jae 0x431d08 */
  if (!cf) goto L_431d08;
L_431d12: /* 431d12: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 431d14: jae 0x431ce6 */
  if (!cf) goto L_431ce6;
L_431d16: /* 431d16: mov byte ptr [ecx], 0x30 */
  W8((uint32_t)(ecx), 0x30u);
L_431d19: /* 431d19: and word ptr [ebx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebx), r);
  }
/* 431d1d: and byte ptr [ebx + 5], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x5u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebx + 0x5u), r);
  }
/* 431d21: xor eax, eax */
  eax = 0;
/* 431d23: mov byte ptr [ebx + 2], 0x20 */
  W8((uint32_t)(ebx + 0x2u), 0x20u);
/* 431d27: mov byte ptr [ebx + 3], 1 */
  W8((uint32_t)(ebx + 0x3u), 0x1u);
/* 431d2b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 431d2c: jmp 0x431cf8 */
  goto L_431cf8;
}

void f_431d2e(void) {
  LOAD_REGS();
L_431d2e: /* 431d2e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 431d2f: mov ebp, esp */
  ebp = esp;
/* 431d31: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 431d34: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 431d39: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 431d3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 431d3d: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 431d40: xor eax, eax */
  eax = 0;
/* 431d42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431d43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431d44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431d45: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 431d48: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 431d4b: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 431d4e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 431d51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431d52: call 0x402d4a */
  esp -= 4; W32(esp, 0x431d57u); SPILL(); f_402d4a(); if (g_unwind) return; RELOAD();
/* 431d57: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 431d5a: mov esi, eax */
  esi = eax;
/* 431d5c: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 431d5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431d60: call 0x431e2e */
  esp -= 4; W32(esp, 0x431d65u); SPILL(); f_431e2e(); if (g_unwind) return; RELOAD();
/* 431d65: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 431d68: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431d6b: jne 0x431d70 */
  if (!zf) goto L_431d70;
L_431d6d: /* 431d6d: or esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_431d70: /* 431d70: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 431d73: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 431d76: mov eax, esi */
  eax = esi;
/* 431d78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 431d79: call 0x4013ab */
  esp -= 4; W32(esp, 0x431d7eu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 431d7e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 431d7f: ret  */
  esp += 4; SPILL(); return;
}

void f_431d80(void) {
  LOAD_REGS();
L_431d80: /* 431d80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 431d84: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 431d86: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431d87: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 431d88: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x431d88);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 431d8a: push 0x1f */
  { uint32_t v = 0x1fu; esp -= 4; W32(esp, v); }
/* 431d8c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431d8d: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 431d8f: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  edx = r;
  }
/* 431d92: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 431d94: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 431d98: not edx */
  edx = ~edx;
/* 431d9a: test dword ptr [ecx + eax*4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 431d9d: je 0x431da8 */
  if (zf) goto L_431da8;
L_431d9f: /* 431d9f: xor eax, eax */
  eax = 0;
/* 431da1: ret  */
  esp += 4; SPILL(); return;
L_431da2: /* 431da2: cmp dword ptr [ecx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431da6: jne 0x431d9f */
  if (!zf) goto L_431d9f;
L_431da8: /* 431da8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 431da9: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 431dac: jl 0x431da2 */
  if ((sf != of)) goto L_431da2;
L_431dae: /* 431dae: xor eax, eax */
  eax = 0;
/* 431db0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 431db1: ret  */
  esp += 4; SPILL(); return;
}

void f_431db2(void) {
  LOAD_REGS();
L_431db2: /* 431db2: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 431db6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 431db7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 431db8: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 431dba: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431dbb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 431dbc: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x431dbc);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 431dbe: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 431dc2: mov esi, eax */
  esi = eax;
/* 431dc4: lea eax, [edi + esi*4] */
  eax = (uint32_t)(edi + esi*4);
/* 431dc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431dc8: push 0x1f */
  { uint32_t v = 0x1fu; esp -= 4; W32(esp, v); }
/* 431dca: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431dcb: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 431dcd: xor edx, edx */
  edx = 0;
  cf = 0;
/* 431dcf: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  edx = r;
  }
/* 431dd0: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 431dd2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 431dd3: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 431dd5: call 0x402942 */
  esp -= 4; W32(esp, 0x431ddau); SPILL(); f_402942(); if (g_unwind) return; RELOAD();
/* 431dda: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 431ddd: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  esi = r;
  }
/* 431dde: js 0x431dfc */
  if (sf) goto L_431dfc;
L_431de0: /* 431de0: lea edi, [edi + esi*4] */
  edi = (uint32_t)(edi + esi*4);
L_431de3: /* 431de3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 431de5: je 0x431dfc */
  if (zf) goto L_431dfc;
L_431de7: /* 431de7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 431de8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 431dea: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 431dec: call 0x402942 */
  esp -= 4; W32(esp, 0x431df1u); SPILL(); f_402942(); if (g_unwind) return; RELOAD();
/* 431df1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 431df4: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 431df5: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 431df8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 431dfa: jge 0x431de3 */
  if ((sf == of)) goto L_431de3;
L_431dfc: /* 431dfc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 431dfd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 431dfe: ret  */
  esp += 4; SPILL(); return;
}

void f_431dff(void) {
  LOAD_REGS();
L_431dff: /* 431dff: xor eax, eax */
  eax = 0;
L_431e01: /* 431e01: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 431e05: cmp dword ptr [ecx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431e09: jne 0x431e15 */
  if (!zf) goto L_431e15;
L_431e0b: /* 431e0b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 431e0c: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 431e0f: jl 0x431e01 */
  if ((sf != of)) goto L_431e01;
L_431e11: /* 431e11: xor eax, eax */
  eax = 0;
/* 431e13: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 431e14: ret  */
  esp += 4; SPILL(); return;
L_431e15: /* 431e15: xor eax, eax */
  eax = 0;
/* 431e17: ret  */
  esp += 4; SPILL(); return;
}

void f_431e18(void) {
  LOAD_REGS();
L_431e18: /* 431e18: push 0x44e030 */
  { uint32_t v = 0x44e030u; esp -= 4; W32(esp, v); }
/* 431e1d: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 431e21: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 431e25: call 0x402b6d */
  esp -= 4; W32(esp, 0x431e2au); SPILL(); f_402b6d(); if (g_unwind) return; RELOAD();
/* 431e2a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 431e2d: ret  */
  esp += 4; SPILL(); return;
}

void f_431e2e(void) {
  LOAD_REGS();
L_431e2e: /* 431e2e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 431e2f: mov ebp, esp */
  ebp = esp;
/* 431e31: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 431e34: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 431e37: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 431e3b: xor ecx, ecx */
  ecx = 0;
/* 431e3d: mov cx, word ptr [eax + 0xa] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xau))) & 0xffffu);
/* 431e41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 431e42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 431e43: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 431e45: mov esi, ecx */
  esi = ecx;
/* 431e47: and ecx, 0x8000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 431e4d: mov edi, ecx */
  edi = ecx;
/* 431e4f: mov ecx, dword ptr [eax + 6] */
  ecx = R32((uint32_t)(eax + 0x6u));
/* 431e52: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 431e55: mov ecx, dword ptr [eax + 2] */
  ecx = R32((uint32_t)(eax + 0x2u));
/* 431e58: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 431e5b: shl eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 431e5e: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 431e61: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 431e64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431e65: and esi, 0x7fff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7fffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 431e6b: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* 431e6e: call 0x4027a3 */
  esp -= 4; W32(esp, 0x431e73u); SPILL(); f_4027a3(); if (g_unwind) return; RELOAD();
/* 431e73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 431e75: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431e76: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 431e77: je 0x431e81 */
  if (zf) goto L_431e81;
L_431e79: /* 431e79: mov ecx, 0x80000000 */
  ecx = 0x80000000u;
/* 431e7e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 431e7f: jmp 0x431e84 */
  goto L_431e84;
L_431e81: /* 431e81: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
L_431e84: /* 431e84: cmp si, 0x7fff */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)(0x7fffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 431e89: jne 0x431e92 */
  if (!zf) goto L_431e92;
L_431e8b: /* 431e8b: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
L_431e92: /* 431e92: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 431e95: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 431e97: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 431e9a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 431e9d: mov word ptr [eax + 8], di */
  W16((uint32_t)(eax + 0x8u), (edi & 0xffffu));
/* 431ea1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 431ea2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 431ea4: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 431ea7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 431ea8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 431ea9: ret  */
  esp += 4; SPILL(); return;
}

void f_431eaa(void) {
  LOAD_REGS();
L_431eaa: /* 431eaa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 431eab: mov ebp, esp */
  ebp = esp;
/* 431ead: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 431eb0: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 431eb5: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 431eb8: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 431ebb: xor eax, eax */
  eax = 0;
/* 431ebd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431ebe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431ebf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431ec0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431ec1: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 431ec4: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 431ec7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431ec8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 431ecb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431ecc: call 0x402d4a */
  esp -= 4; W32(esp, 0x431ed1u); SPILL(); f_402d4a(); if (g_unwind) return; RELOAD();
/* 431ed1: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 431ed4: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 431ed7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431ed8: call 0x402b57 */
  esp -= 4; W32(esp, 0x431eddu); SPILL(); f_402b57(); if (g_unwind) return; RELOAD();
/* 431edd: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 431ee0: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 431ee3: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 431ee6: call 0x4013ab */
  esp -= 4; W32(esp, 0x431eebu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 431eeb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 431eec: ret  */
  esp += 4; SPILL(); return;
}

void f_431eed(void) {
  LOAD_REGS();
L_431eed: /* 431eed: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 431eee: mov ebp, esp */
  ebp = esp;
/* 431ef0: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 431ef3: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 431ef8: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 431efb: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 431efe: xor eax, eax */
  eax = 0;
/* 431f00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431f01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431f02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431f03: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 431f05: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 431f08: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 431f0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431f0c: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 431f0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431f10: call 0x402d4a */
  esp -= 4; W32(esp, 0x431f15u); SPILL(); f_402d4a(); if (g_unwind) return; RELOAD();
/* 431f15: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 431f18: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 431f1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431f1c: call 0x431e2e */
  esp -= 4; W32(esp, 0x431f21u); SPILL(); f_431e2e(); if (g_unwind) return; RELOAD();
/* 431f21: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 431f24: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 431f27: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 431f2a: call 0x4013ab */
  esp -= 4; W32(esp, 0x431f2fu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 431f2f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 431f30: ret  */
  esp += 4; SPILL(); return;
}

void f_431f31(void) {
  LOAD_REGS();
L_431f31: /* 431f31: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 431f32: mov ebp, esp */
  ebp = esp;
/* 431f34: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 431f37: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 431f3c: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 431f3f: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 431f42: xor eax, eax */
  eax = 0;
/* 431f44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431f45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431f46: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431f47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431f48: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 431f4b: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 431f4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431f4f: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 431f52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431f53: call 0x402d4a */
  esp -= 4; W32(esp, 0x431f58u); SPILL(); f_402d4a(); if (g_unwind) return; RELOAD();
/* 431f58: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 431f5b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 431f5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 431f5f: call 0x431e18 */
  esp -= 4; W32(esp, 0x431f64u); SPILL(); f_431e18(); if (g_unwind) return; RELOAD();
/* 431f64: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 431f67: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 431f6a: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 431f6d: call 0x4013ab */
  esp -= 4; W32(esp, 0x431f72u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 431f72: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 431f73: ret  */
  esp += 4; SPILL(); return;
}

void f_431f74(void) {
  LOAD_REGS();
L_431f74: /* 431f74: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 431f75: mov ebp, esp */
  ebp = esp;
/* 431f77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 431f78: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 431f7b: xor eax, eax */
  eax = 0;
/* 431f7d: mov ax, word ptr [edx + 6] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + 0x6u))) & 0xffffu);
/* 431f81: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 431f82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 431f83: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 431f84: mov edi, 0x7ff */
  edi = 0x7ffu;
/* 431f89: mov esi, 0x80000000 */
  esi = 0x80000000u;
/* 431f8e: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 431f91: mov ecx, eax */
  ecx = eax;
/* 431f93: shr ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 431f96: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 431f9b: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 431f9d: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 431fa0: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 431fa3: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 431fa5: movzx ebx, cx */
  ebx = (uint32_t)((ecx & 0xffffu));
/* 431fa8: and eax, 0xfffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 431fad: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 431faf: je 0x431fc4 */
  if (zf) goto L_431fc4;
L_431fb1: /* 431fb1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431fb3: je 0x431fbd */
  if (zf) goto L_431fbd;
L_431fb5: /* 431fb5: lea edi, [ecx + 0x3c00] */
  edi = (uint32_t)(ecx + 0x3c00u);
/* 431fbb: jmp 0x431fe5 */
  goto L_431fe5;
L_431fbd: /* 431fbd: mov edi, 0x7fff */
  edi = 0x7fffu;
/* 431fc2: jmp 0x431fe5 */
  goto L_431fe5;
L_431fc4: /* 431fc4: xor ebx, ebx */
  ebx = 0;
/* 431fc6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431fc8: jne 0x431fdc */
  if (!zf) goto L_431fdc;
L_431fca: /* 431fca: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 431fcc: jne 0x431fdc */
  if (!zf) goto L_431fdc;
L_431fce: /* 431fce: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 431fd1: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 431fd4: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 431fd6: mov word ptr [eax + 8], bx */
  W16((uint32_t)(eax + 0x8u), (ebx & 0xffffu));
/* 431fda: jmp 0x432029 */
  goto L_432029;
L_431fdc: /* 431fdc: lea edi, [ecx + 0x3c01] */
  edi = (uint32_t)(ecx + 0x3c01u);
/* 431fe2: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
L_431fe5: /* 431fe5: mov ecx, edx */
  ecx = edx;
/* 431fe7: shr ecx, 0x15 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 431fea: shl eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 431fed: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 431fef: or ecx, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 431ff2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 431ff5: shl edx, 0xb */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 431ff8: test esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 431ffa: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 431ffd: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 431fff: jne 0x432020 */
  if (!zf) goto L_432020;
L_432001: /* 432001: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 432003: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 432006: mov ebx, ecx */
  ebx = ecx;
/* 432008: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 43200a: shr ebx, 0x1f */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 43200d: or edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 43200f: add ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 432011: add edi, 0xffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 432017: test esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 432019: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 43201c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 43201e: je 0x432001 */
  if (zf) goto L_432001;
L_432020: /* 432020: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 432023: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 432025: mov word ptr [eax + 8], cx */
  W16((uint32_t)(eax + 0x8u), (ecx & 0xffffu));
L_432029: /* 432029: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 43202a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 43202b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 43202c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 43202d: ret  */
  esp += 4; SPILL(); return;
}

void f_43202e(void) {
  LOAD_REGS();
L_43202e: /* 43202e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 43202f: mov ebp, esp */
  ebp = esp;
/* 432031: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 432034: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 432039: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 43203c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 43203d: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 432040: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 432041: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 432044: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432045: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 432048: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432049: call 0x431f74 */
  esp -= 4; W32(esp, 0x43204eu); SPILL(); f_431f74(); if (g_unwind) return; RELOAD();
/* 43204e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43204f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 432050: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 432053: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432054: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 432056: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 432058: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 43205b: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* 43205e: mov edi, esp */
  edi = esp;
/* 432060: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 432061: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 432062: movsw word ptr es:[edi], word ptr [esi] */
  W16(edi, R16(esi)); esi += (DF ? -2 : 2); edi += (DF ? -2 : 2);
/* 432064: call 0x431a9a */
  esp -= 4; W32(esp, 0x432069u); SPILL(); f_431a9a(); if (g_unwind) return; RELOAD();
/* 432069: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 43206c: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 43206f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 432072: movsx eax, byte ptr [ebp - 0x2a] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebp + 0xffffffd6u)));
/* 432076: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 432078: movsx eax, word ptr [ebp - 0x2c] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ebp + 0xffffffd4u)));
/* 43207c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 43207f: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 432082: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432083: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 432084: call 0x404b3a */
  esp -= 4; W32(esp, 0x432089u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 432089: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 43208c: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 43208f: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 432092: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 432095: mov eax, esi */
  eax = esi;
/* 432097: call 0x4013ab */
  esp -= 4; W32(esp, 0x43209cu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 43209c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 43209d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 43209e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 43209f: ret  */
  esp += 4; SPILL(); return;
}

void f_4320a0(void) {
  LOAD_REGS();
L_4320a0: /* 4320a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4320a1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 4320a5: movsx eax, byte ptr [esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* 4320a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4320a9: call 0x415644 */
  esp -= 4; W32(esp, 0x4320aeu); SPILL(); f_415644(); if (g_unwind) return; RELOAD();
/* 4320ae: cmp eax, 0x65 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x65u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4320b1: jmp 0x4320bf */
  goto L_4320bf;
L_4320b3: /* 4320b3: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4320b4: movsx eax, byte ptr [esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* 4320b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4320b8: call 0x40152b */
  esp -= 4; W32(esp, 0x4320bdu); SPILL(); f_40152b(); if (g_unwind) return; RELOAD();
/* 4320bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_4320bf: /* 4320bf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4320c0: jne 0x4320b3 */
  if (!zf) goto L_4320b3;
L_4320c2: /* 4320c2: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 4320c4: mov cl, byte ptr [0x44a9ac] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0x44a9acu))) & 0xffu);
/* 4320ca: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* 4320cc: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_4320cd: /* 4320cd: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 4320cf: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* 4320d1: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 4320d3: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 4320d5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 4320d6: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4320d8: jne 0x4320cd */
  if (!zf) goto L_4320cd;
L_4320da: /* 4320da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4320db: ret  */
  esp += 4; SPILL(); return;
}

void f_4320dc(void) {
  LOAD_REGS();
L_4320dc: /* 4320dc: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4320e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4320e1: mov bl, byte ptr [0x44a9ac] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0x44a9acu))) & 0xffu);
/* 4320e7: jmp 0x4320ee */
  goto L_4320ee;
L_4320e9: /* 4320e9: cmp cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4320eb: je 0x4320f4 */
  if (zf) goto L_4320f4;
L_4320ed: /* 4320ed: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_4320ee: /* 4320ee: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 4320f0: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4320f2: jne 0x4320e9 */
  if (!zf) goto L_4320e9;
L_4320f4: /* 4320f4: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 4320f6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4320f7: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4320f9: je 0x432125 */
  if (zf) goto L_432125;
L_4320fb: /* 4320fb: jmp 0x432108 */
  goto L_432108;
L_4320fd: /* 4320fd: cmp cl, 0x65 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x65u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 432100: je 0x43210e */
  if (zf) goto L_43210e;
L_432102: /* 432102: cmp cl, 0x45 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x45u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 432105: je 0x43210e */
  if (zf) goto L_43210e;
L_432107: /* 432107: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_432108: /* 432108: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 43210a: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43210c: jne 0x4320fd */
  if (!zf) goto L_4320fd;
L_43210e: /* 43210e: mov edx, eax */
  edx = eax;
L_432110: /* 432110: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 432111: cmp byte ptr [eax], 0x30 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 432114: je 0x432110 */
  if (zf) goto L_432110;
L_432116: /* 432116: cmp byte ptr [eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 432118: jne 0x43211b */
  if (!zf) goto L_43211b;
L_43211a: /* 43211a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
L_43211b: /* 43211b: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 43211d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 43211e: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 43211f: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 432121: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 432123: jne 0x43211b */
  if (!zf) goto L_43211b;
L_432125: /* 432125: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 432126: ret  */
  esp += 4; SPILL(); return;
}

void f_432127(void) {
  LOAD_REGS();
L_432127: /* 432127: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 43212b: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 43212d: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 432133: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 432135: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 432138: jne 0x43213e */
  if (!zf) goto L_43213e;
L_43213a: /* 43213a: xor eax, eax */
  eax = 0;
/* 43213c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 43213d: ret  */
  esp += 4; SPILL(); return;
L_43213e: /* 43213e: xor eax, eax */
  eax = 0;
/* 432140: ret  */
  esp += 4; SPILL(); return;
}

void f_432141(void) {
  LOAD_REGS();
L_432141: /* 432141: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 432142: mov ebp, esp */
  ebp = esp;
/* 432144: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432145: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432146: cmp dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43214a: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 43214d: je 0x43216a */
  if (zf) goto L_43216a;
L_43214f: /* 43214f: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 432152: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432153: call 0x431eaa */
  esp -= 4; W32(esp, 0x432158u); SPILL(); f_431eaa(); if (g_unwind) return; RELOAD();
/* 432158: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 43215b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43215c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43215d: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 432160: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 432162: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 432165: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 432168: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 432169: ret  */
  esp += 4; SPILL(); return;
L_43216a: /* 43216a: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 43216d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43216e: call 0x431f31 */
  esp -= 4; W32(esp, 0x432173u); SPILL(); f_431f31(); if (g_unwind) return; RELOAD();
/* 432173: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 432176: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 432177: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 432178: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 43217b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 43217d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 43217e: ret  */
  esp += 4; SPILL(); return;
}

void f_43217f(void) {
  LOAD_REGS();
L_43217f: /* 43217f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 432181: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 432182: mov esi, eax */
  esi = eax;
/* 432184: je 0x43219a */
  if (zf) goto L_43219a;
L_432186: /* 432186: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 432187: call 0x402493 */
  esp -= 4; W32(esp, 0x43218cu); SPILL(); hle_strlen(); RELOAD();
/* 43218c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 43218d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43218e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 43218f: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 432191: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 432192: call 0x403f12 */
  esp -= 4; W32(esp, 0x432197u); SPILL(); hle_memcpy(); RELOAD();
/* 432197: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_43219a: /* 43219a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 43219b: ret  */
  esp += 4; SPILL(); return;
}

void f_43219c(void) {
  LOAD_REGS();
L_43219c: /* 43219c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 43219d: mov ebp, esp */
  ebp = esp;
/* 43219f: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4321a3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4321a4: mov esi, eax */
  esi = eax;
/* 4321a6: je 0x4321c5 */
  if (zf) goto L_4321c5;
L_4321a8: /* 4321a8: xor eax, eax */
  eax = 0;
/* 4321aa: cmp dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4321ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4321ae: setg al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 4321b1: xor ecx, ecx */
  ecx = 0;
/* 4321b3: cmp dword ptr [esi], 0x2d */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4321b6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4321b9: mov edi, eax */
  edi = eax;
/* 4321bb: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4321bd: mov eax, ecx */
  eax = ecx;
/* 4321bf: call 0x43217f */
  esp -= 4; W32(esp, 0x4321c4u); SPILL(); f_43217f(); if (g_unwind) return; RELOAD();
/* 4321c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4321c5: /* 4321c5: cmp dword ptr [esi], 0x2d */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4321c8: mov eax, ebx */
  eax = ebx;
/* 4321ca: jne 0x4321d2 */
  if (!zf) goto L_4321d2;
L_4321cc: /* 4321cc: mov byte ptr [ebx], 0x2d */
  W8((uint32_t)(ebx), 0x2du);
/* 4321cf: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
L_4321d2: /* 4321d2: cmp dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4321d6: jle 0x4321e9 */
  if ((zf || sf != of)) goto L_4321e9;
L_4321d8: /* 4321d8: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 4321db: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 4321dd: mov byte ptr [eax], dl */
  W8((uint32_t)(eax), (edx & 0xffu));
/* 4321df: mov eax, ecx */
  eax = ecx;
/* 4321e1: mov cl, byte ptr [0x44a9ac] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0x44a9acu))) & 0xffu);
/* 4321e7: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
L_4321e9: /* 4321e9: xor ecx, ecx */
  ecx = 0;
/* 4321eb: cmp byte ptr [ebp + 0x10], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4321ee: push 0x441200 */
  { uint32_t v = 0x441200u; esp -= 4; W32(esp, v); }
/* 4321f3: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4321f6: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4321f8: add ecx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4321fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4321fc: call 0x404b3a */
  esp -= 4; W32(esp, 0x432201u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 432201: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 432205: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 432206: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 432207: mov ecx, eax */
  ecx = eax;
/* 432209: je 0x43220e */
  if (zf) goto L_43220e;
L_43220b: /* 43220b: mov byte ptr [ecx], 0x45 */
  W8((uint32_t)(ecx), 0x45u);
L_43220e: /* 43220e: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 432211: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 432212: cmp byte ptr [eax], 0x30 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 432215: je 0x432245 */
  if (zf) goto L_432245;
L_432217: /* 432217: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 43221a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 43221b: jns 0x432222 */
  if (!sf) goto L_432222;
L_43221d: /* 43221d: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 43221f: mov byte ptr [ecx], 0x2d */
  W8((uint32_t)(ecx), 0x2du);
L_432222: /* 432222: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 432223: cmp eax, 0x64 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 432226: jl 0x432232 */
  if ((sf != of)) goto L_432232;
L_432228: /* 432228: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 432229: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 43222b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 43222c: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x43222c);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 43222e: add byte ptr [ecx], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(ecx), r);
  }
/* 432230: mov eax, edx */
  eax = edx;
L_432232: /* 432232: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 432233: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 432236: jl 0x432242 */
  if ((sf != of)) goto L_432242;
L_432238: /* 432238: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 432239: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 43223b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 43223c: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x43223c);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 43223e: add byte ptr [ecx], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(ecx), r);
  }
/* 432240: mov eax, edx */
  eax = edx;
L_432242: /* 432242: add byte ptr [ecx + 1], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  W8((uint32_t)(ecx + 0x1u), r);
  }
L_432245: /* 432245: mov eax, ebx */
  eax = ebx;
/* 432247: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 432248: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 432249: ret  */
  esp += 4; SPILL(); return;
}

void f_43224a(void) {
  LOAD_REGS();
L_43224a: /* 43224a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 43224b: mov ebp, esp */
  ebp = esp;
/* 43224d: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 432250: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 432255: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 432258: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 432259: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 43225c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 43225d: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 432260: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432261: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 432264: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432265: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 432268: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 43226b: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 43226d: call 0x43202e */
  esp -= 4; W32(esp, 0x432272u); SPILL(); f_43202e(); if (g_unwind) return; RELOAD();
/* 432272: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 432275: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 432278: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 43227b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43227c: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* 43227f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432280: xor eax, eax */
  eax = 0;
/* 432282: cmp dword ptr [ebp - 0x14], 0x2d */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 432286: mov edx, ebx */
  edx = ebx;
/* 432288: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 43228b: xor ecx, ecx */
  ecx = 0;
/* 43228d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 43228f: setg cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((!zf && sf == of)) ? 1 : 0) & 0xffu);
/* 432292: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 432294: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 432296: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432297: call 0x417e2c */
  esp -= 4; W32(esp, 0x43229cu); SPILL(); f_417e2c(); if (g_unwind) return; RELOAD();
/* 43229c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 43229e: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4322a1: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 4322a4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4322a5: call 0x43219c */
  esp -= 4; W32(esp, 0x4322aau); SPILL(); f_43219c(); if (g_unwind) return; RELOAD();
/* 4322aa: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4322ad: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4322b0: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4322b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4322b4: mov eax, ebx */
  eax = ebx;
/* 4322b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4322b7: call 0x4013ab */
  esp -= 4; W32(esp, 0x4322bcu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 4322bc: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4322bd: ret  */
  esp += 4; SPILL(); return;
}

void f_4322be(void) {
  LOAD_REGS();
L_4322be: /* 4322be: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4322bf: mov ebp, esp */
  ebp = esp;
/* 4322c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4322c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4322c3: mov esi, eax */
  esi = eax;
/* 4322c5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4322c8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 4322c9: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4322cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4322ce: je 0x4322eb */
  if (zf) goto L_4322eb;
L_4322d0: /* 4322d0: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4322d3: jne 0x4322eb */
  if (!zf) goto L_4322eb;
L_4322d5: /* 4322d5: xor ecx, ecx */
  ecx = 0;
/* 4322d7: cmp dword ptr [esi], 0x2d */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4322da: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4322dd: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4322df: add ecx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4322e2: mov eax, ecx */
  eax = ecx;
/* 4322e4: mov byte ptr [eax], 0x30 */
  W8((uint32_t)(eax), 0x30u);
/* 4322e7: and byte ptr [eax + 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax + 0x1u), r);
  }
L_4322eb: /* 4322eb: cmp dword ptr [esi], 0x2d */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4322ee: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 4322f1: jne 0x4322f7 */
  if (!zf) goto L_4322f7;
L_4322f3: /* 4322f3: mov byte ptr [ebx], 0x2d */
  W8((uint32_t)(ebx), 0x2du);
/* 4322f6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_4322f7: /* 4322f7: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4322fa: xor edi, edi */
  edi = 0;
/* 4322fc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4322fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4322ff: jg 0x43230e */
  if ((!zf && sf == of)) goto L_43230e;
L_432301: /* 432301: mov eax, ebx */
  eax = ebx;
/* 432303: call 0x43217f */
  esp -= 4; W32(esp, 0x432308u); SPILL(); f_43217f(); if (g_unwind) return; RELOAD();
/* 432308: mov byte ptr [ebx], 0x30 */
  W8((uint32_t)(ebx), 0x30u);
/* 43230b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 43230c: jmp 0x432310 */
  goto L_432310;
L_43230e: /* 43230e: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_432310: /* 432310: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 432314: jle 0x432352 */
  if ((zf || sf != of)) goto L_432352;
L_432316: /* 432316: mov eax, ebx */
  eax = ebx;
/* 432318: call 0x43217f */
  esp -= 4; W32(esp, 0x43231du); SPILL(); f_43217f(); if (g_unwind) return; RELOAD();
/* 43231d: mov al, byte ptr [0x44a9ac] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0x44a9acu))) & 0xffu);
/* 432322: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 432324: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 432327: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 432328: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 43232a: jge 0x432352 */
  if ((sf == of)) goto L_432352;
L_43232c: /* 43232c: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* 43232e: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 432332: jne 0x432339 */
  if (!zf) goto L_432339;
L_432334: /* 432334: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 432337: jl 0x43233c */
  if ((sf != of)) goto L_43233c;
L_432339: /* 432339: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
L_43233c: /* 43233c: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 43233f: mov eax, ebx */
  eax = ebx;
/* 432341: call 0x43217f */
  esp -= 4; W32(esp, 0x432346u); SPILL(); f_43217f(); if (g_unwind) return; RELOAD();
/* 432346: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 432347: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 432349: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 43234a: call 0x4010fd */
  esp -= 4; W32(esp, 0x43234fu); SPILL(); hle_memset(); RELOAD();
/* 43234f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_432352: /* 432352: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 432355: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 432356: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 432357: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 432358: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 432359: ret  */
  esp += 4; SPILL(); return;
}

void f_43235a(void) {
  LOAD_REGS();
L_43235a: /* 43235a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 43235b: mov ebp, esp */
  ebp = esp;
/* 43235d: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 432360: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 432365: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 432368: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 432369: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 43236c: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 43236f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432370: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 432373: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432374: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 432377: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 43237a: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 43237c: call 0x43202e */
  esp -= 4; W32(esp, 0x432381u); SPILL(); f_43202e(); if (g_unwind) return; RELOAD();
/* 432381: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 432384: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 432387: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432388: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 43238b: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 43238d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43238e: xor eax, eax */
  eax = 0;
/* 432390: cmp dword ptr [ebp - 0x14], 0x2d */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 432394: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 432397: add eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 43239a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43239b: call 0x417e2c */
  esp -= 4; W32(esp, 0x4323a0u); SPILL(); f_417e2c(); if (g_unwind) return; RELOAD();
/* 4323a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4323a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4323a3: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4323a6: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 4323a9: call 0x4322be */
  esp -= 4; W32(esp, 0x4323aeu); SPILL(); f_4322be(); if (g_unwind) return; RELOAD();
/* 4323ae: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4323b1: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4323b4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4323b7: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4323ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4323bb: call 0x4013ab */
  esp -= 4; W32(esp, 0x4323c0u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 4323c0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4323c1: ret  */
  esp += 4; SPILL(); return;
}

void f_4323c2(void) {
  LOAD_REGS();
L_4323c2: /* 4323c2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4323c3: mov ebp, esp */
  ebp = esp;
/* 4323c5: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4323c8: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 4323cd: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4323d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4323d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4323d2: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4323d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4323d6: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 4323d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4323da: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 4323dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4323de: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4323e1: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 4323e4: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 4323e6: call 0x43202e */
  esp -= 4; W32(esp, 0x4323ebu); SPILL(); f_43202e(); if (g_unwind) return; RELOAD();
/* 4323eb: mov esi, dword ptr [ebp - 0x10] */
  esi = R32((uint32_t)(ebp + 0xfffffff0u));
/* 4323ee: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 4323f1: xor eax, eax */
  eax = 0;
/* 4323f3: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
/* 4323f4: cmp dword ptr [ebp - 0x14], 0x2d */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4323f8: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4323fb: add eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4323fe: mov edi, eax */
  edi = eax;
/* 432400: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 432403: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432404: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 432405: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 432406: call 0x417e2c */
  esp -= 4; W32(esp, 0x43240bu); SPILL(); f_417e2c(); if (g_unwind) return; RELOAD();
/* 43240b: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 43240e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 432411: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 432412: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 432414: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 432417: cmp eax, -4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 43241a: jl 0x43243e */
  if ((sf != of)) goto L_43243e;
L_43241c: /* 43241c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 43241e: jge 0x43243e */
  if ((sf == of)) goto L_43243e;
L_432420: /* 432420: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 432422: je 0x43242e */
  if (zf) goto L_43242e;
L_432424: /* 432424: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 432426: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 432427: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 432429: jne 0x432424 */
  if (!zf) goto L_432424;
L_43242b: /* 43242b: and byte ptr [edi - 2], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0xfffffffeu))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(edi + 0xfffffffeu), r);
  }
L_43242e: /* 43242e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 432430: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 432431: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 432434: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 432437: call 0x4322be */
  esp -= 4; W32(esp, 0x43243cu); SPILL(); f_4322be(); if (g_unwind) return; RELOAD();
/* 43243c: jmp 0x43244f */
  goto L_43244f;
L_43243e: /* 43243e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 432440: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 432443: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 432446: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 432447: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 43244a: call 0x43219c */
  esp -= 4; W32(esp, 0x43244fu); SPILL(); f_43219c(); if (g_unwind) return; RELOAD();
L_43244f: /* 43244f: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 432452: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 432455: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 432458: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 432459: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 43245a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 43245b: call 0x4013ab */
  esp -= 4; W32(esp, 0x432460u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 432460: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 432461: ret  */
  esp += 4; SPILL(); return;
}

void f_432462(void) {
  LOAD_REGS();
L_432462: /* 432462: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 432463: mov ebp, esp */
  ebp = esp;
/* 432465: cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x65u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 432469: je 0x43249d */
  if (zf) goto L_43249d;
L_43246b: /* 43246b: cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43246f: je 0x43249d */
  if (zf) goto L_43249d;
L_432471: /* 432471: cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x66u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 432475: jne 0x43248a */
  if (!zf) goto L_43248a;
L_432477: /* 432477: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 43247a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 43247d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 432480: call 0x43235a */
  esp -= 4; W32(esp, 0x432485u); SPILL(); f_43235a(); if (g_unwind) return; RELOAD();
/* 432485: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 432488: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 432489: ret  */
  esp += 4; SPILL(); return;
L_43248a: /* 43248a: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 43248d: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 432490: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 432493: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 432496: call 0x4323c2 */
  esp -= 4; W32(esp, 0x43249bu); SPILL(); f_4323c2(); if (g_unwind) return; RELOAD();
/* 43249b: jmp 0x4324ae */
  goto L_4324ae;
L_43249d: /* 43249d: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4324a0: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4324a3: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4324a6: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4324a9: call 0x43224a */
  esp -= 4; W32(esp, 0x4324aeu); SPILL(); f_43224a(); if (g_unwind) return; RELOAD();
L_4324ae: /* 4324ae: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4324b1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4324b2: ret  */
  esp += 4; SPILL(); return;
}

void f_4324b3(void) {
  LOAD_REGS();
L_4324b3: /* 4324b3: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4324b7: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 4324ba: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4324bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4324be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4324bf: mov edi, ecx */
  edi = ecx;
/* 4324c1: mov esi, edx */
  esi = edx;
/* 4324c3: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 4324c5: shl esi, 0x1f */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 4324c8: or ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4324ca: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4324cd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4324cf: shl edi, 0x1f */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 4324d2: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 4324d4: or ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4324d6: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 4324d8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4324d9: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 4324dc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4324de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4324df: ret  */
  esp += 4; SPILL(); return;
}

void f_4324e0(void) {
  LOAD_REGS();
L_4324e0: /* 4324e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4324e1: mov ebp, esp */
  ebp = esp;
/* 4324e3: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4324e6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4324e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4324e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4324e9: mov esi, 0xffff */
  esi = 0xffffu;
/* 4324ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4324ef: push 0x133f */
  { uint32_t v = 0x133fu; esp -= 4; W32(esp, v); }
/* 4324f4: call 0x434d89 */
  esp -= 4; W32(esp, 0x4324f9u); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 4324f9: mov edx, dword ptr [ebp + 0xe] */
  edx = R32((uint32_t)(ebp + 0xeu));
/* 4324fc: mov edi, dword ptr [ebp + 0x16] */
  edi = R32((uint32_t)(ebp + 0x16u));
/* 4324ff: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 432500: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 432501: mov ebx, eax */
  ebx = eax;
/* 432503: mov eax, 0x7ff0 */
  eax = 0x7ff0u;
/* 432508: mov ecx, edx */
  ecx = edx;
/* 43250a: and cx, ax */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 43250d: cmp cx, ax */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 432510: je 0x4326c0 */
  if (zf) goto L_4326c0;
L_432516: /* 432516: mov ecx, edi */
  ecx = edi;
/* 432518: and cx, ax */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 43251b: cmp cx, ax */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 43251e: je 0x4326c0 */
  if (zf) goto L_4326c0;
L_432524: /* 432524: fld qword ptr [0x43fc10] */
  { double v = F64((uint32_t)(0x43fc10u)); FPUSH(v); }
/* 43252a: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43252d: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 43252f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 432531: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 432534: jp 0x43253e */
  if (pf) goto L_43253e;
L_432536: /* 432536: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 432539: fchs  */
  ST0 = -ST0;
/* 43253b: fstp qword ptr [ebp + 8] */
  WF64((uint32_t)(ebp + 0x8u), ST0); FPOP();
L_43253e: /* 43253e: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 432541: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 432543: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 432545: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 432548: jp 0x432552 */
  if (pf) goto L_432552;
L_43254a: /* 43254a: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 43254d: fchs  */
  ST0 = -ST0;
/* 43254f: fstp qword ptr [ebp + 0x10] */
  WF64((uint32_t)(ebp + 0x10u), ST0); FPOP();
L_432552: /* 432552: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 432555: fcomp qword ptr [ebp + 8] */
  fpu_com(ST0, F64((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 432558: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 43255a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43255d: jne 0x432564 */
  if (!zf) goto L_432564;
L_43255f: /* 43255f: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 432562: jmp 0x432567 */
  goto L_432567;
L_432564: /* 432564: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_432567: /* 432567: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 43256a: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 43256d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 43256f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 432571: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 432574: jp 0x43258a */
  if (pf) goto L_43258a;
L_432576: /* 432576: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 432577: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 432578: call 0x434d89 */
  esp -= 4; W32(esp, 0x43257du); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 43257d: fld qword ptr [0x43fc10] */
  { double v = F64((uint32_t)(0x43fc10u)); FPUSH(v); }
/* 432583: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 432584: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 432585: jmp 0x432752 */
  goto L_432752;
L_43258a: /* 43258a: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43258d: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 432590: fdiv qword ptr [ebp - 0x10] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xfffffff0u)));
/* 432593: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432594: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432595: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432596: fstp qword ptr [ebp + 8] */
  WF64((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 432599: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 43259c: fdiv qword ptr [ebp - 0x10] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xfffffff0u)));
/* 43259f: fstp qword ptr [ebp + 0x10] */
  WF64((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 4325a2: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4325a5: fmul qword ptr [ebp + 8] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0x8u)));
/* 4325a8: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 4325ab: fmul qword ptr [ebp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0x10u)));
/* 4325ae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 4325b0: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 4325b3: fld qword ptr [ebp - 0x18] */
  { double v = F64((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 4325b6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4325b9: call 0x4088dd */
  esp -= 4; W32(esp, 0x4325beu); SPILL(); hle_sqrt(); RELOAD();
/* 4325be: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4325c1: call 0x434cb8 */
  esp -= 4; W32(esp, 0x4325c6u); SPILL(); f_434cb8(); if (g_unwind) return; RELOAD();
/* 4325c6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4325c9: fstp qword ptr [ebp - 0x18] */
  WF64((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 4325cc: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 4325cf: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 4325d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4325d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4325d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4325d5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4325d8: call 0x434cb8 */
  esp -= 4; W32(esp, 0x4325ddu); SPILL(); f_434cb8(); if (g_unwind) return; RELOAD();
/* 4325dd: fmul qword ptr [ebp - 0x18] */
  ST0 = ST0 * (F64((uint32_t)(ebp + 0xffffffe8u)));
/* 4325e0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4325e3: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 4325e6: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 4325e9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4325ec: call 0x434c48 */
  esp -= 4; W32(esp, 0x4325f1u); SPILL(); f_434c48(); if (g_unwind) return; RELOAD();
/* 4325f1: add eax, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4325f4: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 4325f7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4325f8: add eax, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4325fb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4325fc: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 432601: jle 0x43263b */
  if ((zf || sf != of)) goto L_43263b;
L_432603: /* 432603: add eax, 0xfffffa00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffa00u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 432608: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432609: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43260a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43260b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 43260e: call 0x434c1e */
  esp -= 4; W32(esp, 0x432613u); SPILL(); f_434c1e(); if (g_unwind) return; RELOAD();
/* 432613: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 432616: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 432619: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 43261c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 43261d: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 432620: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 432624: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 432627: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 43262b: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43262e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 432631: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 432634: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 432636: jmp 0x432711 */
  goto L_432711;
L_43263b: /* 43263b: cmp eax, 0xfffffc03 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffc03u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 432640: jge 0x43267a */
  if ((sf == of)) goto L_43267a;
L_432642: /* 432642: add eax, 0x600 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x600u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 432647: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432648: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432649: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43264a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 43264d: call 0x434c1e */
  esp -= 4; W32(esp, 0x432652u); SPILL(); f_434c1e(); if (g_unwind) return; RELOAD();
/* 432652: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 432655: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 432658: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 43265b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 43265c: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 43265f: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 432663: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 432666: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 43266a: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43266d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 432670: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 432673: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* 432675: jmp 0x432711 */
  goto L_432711;
L_43267a: /* 43267a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43267b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43267c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43267d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 432680: call 0x434c1e */
  esp -= 4; W32(esp, 0x432685u); SPILL(); f_434c1e(); if (g_unwind) return; RELOAD();
/* 432685: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 432688: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 43268b: test bl, 0x20 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43268e: je 0x4326a1 */
  if (zf) goto L_4326a1;
L_432690: /* 432690: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 432691: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 432692: call 0x434d89 */
  esp -= 4; W32(esp, 0x432697u); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 432697: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 43269a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43269b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43269c: jmp 0x432752 */
  goto L_432752;
L_4326a1: /* 4326a1: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 4326a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4326a5: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4326a8: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4326ac: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 4326af: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 4326b3: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4326b6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4326b9: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4326bc: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 4326be: jmp 0x432711 */
  goto L_432711;
L_4326c0: /* 4326c0: mov ecx, 0x7ff8 */
  ecx = 0x7ff8u;
/* 4326c5: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4326c7: cmp dx, ax */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4326ca: jne 0x4326db */
  if (!zf) goto L_4326db;
L_4326cc: /* 4326cc: test dword ptr [ebp + 0xc], 0x7ffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x7ffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4326d3: jne 0x4326f1 */
  if (!zf) goto L_4326f1;
L_4326d5: /* 4326d5: cmp dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4326d9: jne 0x4326f1 */
  if (!zf) goto L_4326f1;
L_4326db: /* 4326db: and edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 4326dd: cmp di, ax */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4326e0: jne 0x43271b */
  if (!zf) goto L_43271b;
L_4326e2: /* 4326e2: test dword ptr [ebp + 0x14], 0x7ffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x7ffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4326e9: jne 0x4326f1 */
  if (!zf) goto L_4326f1;
L_4326eb: /* 4326eb: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4326ef: je 0x43271b */
  if (zf) goto L_43271b;
L_4326f1: /* 4326f1: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4326f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4326f5: fadd qword ptr [ebp + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0x10u)));
/* 4326f8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4326fb: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 4326ff: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 432702: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 432706: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 432709: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 43270c: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 43270f: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
L_432711: /* 432711: call 0x434b4f */
  esp -= 4; W32(esp, 0x432716u); SPILL(); f_434b4f(); if (g_unwind) return; RELOAD();
/* 432716: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 432719: jmp 0x432752 */
  goto L_432752;
L_43271b: /* 43271b: cmp dx, cx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 43271e: je 0x432736 */
  if (zf) goto L_432736;
L_432720: /* 432720: cmp di, cx */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 432723: je 0x432736 */
  if (zf) goto L_432736;
L_432725: /* 432725: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 432726: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 432727: call 0x434d89 */
  esp -= 4; W32(esp, 0x43272cu); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 43272c: fld qword ptr [0x44eba8] */
  { double v = F64((uint32_t)(0x44eba8u)); FPUSH(v); }
/* 432732: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 432733: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 432734: jmp 0x432752 */
  goto L_432752;
L_432736: /* 432736: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 432739: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 43273a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 43273d: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 432741: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 432744: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 432747: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 43274a: call 0x434a32 */
  esp -= 4; W32(esp, 0x43274fu); SPILL(); f_434a32(); if (g_unwind) return; RELOAD();
/* 43274f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_432752: /* 432752: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 432753: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 432754: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 432755: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 432756: ret  */
  esp += 4; SPILL(); return;
}

void f_432757(void) {
  LOAD_REGS();
L_432757: /* 432757: fld qword ptr [esp + 0xc] */
  { double v = F64((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 43275b: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 43275d: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 432760: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 432764: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 432768: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 43276b: call 0x4324e0 */
  esp -= 4; W32(esp, 0x432770u); SPILL(); f_4324e0(); if (g_unwind) return; RELOAD();
/* 432770: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 432773: ret  */
  esp += 4; SPILL(); return;
}

void f_432774(void) {
  LOAD_REGS();
L_432774: /* 432774: fld qword ptr [esp + 0xc] */
  { double v = F64((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 432778: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* 43277a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 43277d: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 432781: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 432785: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 432788: call 0x4324e0 */
  esp -= 4; W32(esp, 0x43278du); SPILL(); f_4324e0(); if (g_unwind) return; RELOAD();
/* 43278d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 432790: ret  */
  esp += 4; SPILL(); return;
}

void f_432791(void) {
  LOAD_REGS();
L_432791: /* 432791: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 432792: mov ebp, esp */
  ebp = esp;
/* 432794: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432795: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432796: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 432799: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 43279c: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 43279f: xor eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4327a2: and eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4327a7: xor eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4327aa: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4327ad: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 4327b0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4327b1: ret  */
  esp += 4; SPILL(); return;
}

void f_4327b2(void) {
  LOAD_REGS();
L_4327b2: /* 4327b2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4327b3: mov ebp, esp */
  ebp = esp;
/* 4327b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4327b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4327b7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4327ba: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 4327bd: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4327c0: mov ecx, eax */
  ecx = eax;
/* 4327c2: not ecx */
  ecx = ~ecx;
/* 4327c4: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4327c6: and ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4327cc: not eax */
  eax = ~eax;
/* 4327ce: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4327d0: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 4327d3: fld qword ptr [ebp - 8] */
  { double v = F64((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 4327d6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4327d7: ret  */
  esp += 4; SPILL(); return;
}

void f_4327d8(void) {
  LOAD_REGS();
L_4327d8: /* 4327d8: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4327dc: fld qword ptr [esp + 8] */
  { double v = F64((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 4327e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4327e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4327e2: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4327e5: call 0x434033 */
  esp -= 4; W32(esp, 0x4327eau); SPILL(); hle_ldexp(); RELOAD();
/* 4327ea: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4327ed: ret  */
  esp += 4; SPILL(); return;
}

void f_4327ee(void) {
  LOAD_REGS();
L_4327ee: /* 4327ee: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4327ef: mov ebp, esp */
  ebp = esp;
/* 4327f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4327f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4327f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4327f4: mov esi, 0xffff */
  esi = 0xffffu;
/* 4327f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4327fa: push 0x133f */
  { uint32_t v = 0x133fu; esp -= 4; W32(esp, v); }
/* 4327ff: call 0x434d89 */
  esp -= 4; W32(esp, 0x432804u); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 432804: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 432807: mov edi, eax */
  edi = eax;
/* 432809: mov eax, dword ptr [ebp + 0xe] */
  eax = R32((uint32_t)(ebp + 0xeu));
/* 43280c: and ax, 0x7ff0 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7ff0u);
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 432810: cmp ax, 0x7ff0 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7ff0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 432814: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 432815: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 432816: jne 0x432872 */
  if (!zf) goto L_432872;
L_432818: /* 432818: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432819: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 43281a: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 43281d: call 0x434c5d */
  esp -= 4; W32(esp, 0x432822u); SPILL(); f_434c5d(); if (g_unwind) return; RELOAD();
/* 432822: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 432824: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 432825: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 432826: jle 0x432855 */
  if ((zf || sf != of)) goto L_432855;
L_432828: /* 432828: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 43282b: jle 0x43284a */
  if ((zf || sf != of)) goto L_43284a;
L_43282d: /* 43282d: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 432830: jne 0x432855 */
  if (!zf) goto L_432855;
L_432832: /* 432832: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 432835: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 432836: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432837: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432838: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 43283b: push 0x25 */
  { uint32_t v = 0x25u; esp -= 4; W32(esp, v); }
/* 43283d: call 0x4349df */
  esp -= 4; W32(esp, 0x432842u); SPILL(); f_4349df(); if (g_unwind) return; RELOAD();
/* 432842: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 432845: jmp 0x4328d0 */
  goto L_4328d0;
L_43284a: /* 43284a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 43284b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 43284c: call 0x434d89 */
  esp -= 4; W32(esp, 0x432851u); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 432851: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 432852: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 432853: jmp 0x4328cd */
  goto L_4328cd;
L_432855: /* 432855: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 432858: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 432859: fadd qword ptr [0x441208] */
  ST0 = ST0 + (F64((uint32_t)(0x441208u)));
/* 43285f: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 432862: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 432866: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 432869: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 43286c: push 0x25 */
  { uint32_t v = 0x25u; esp -= 4; W32(esp, v); }
/* 43286e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 432870: jmp 0x432899 */
  goto L_432899;
L_432872: /* 432872: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 432878: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 43287a: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 43287d: jp 0x4328a3 */
  if (pf) goto L_4328a3;
L_43287f: /* 43287f: fld qword ptr [0x44eba8] */
  { double v = F64((uint32_t)(0x44eba8u)); FPUSH(v); }
/* 432885: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 432886: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 432889: fchs  */
  ST0 = -ST0;
/* 43288b: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 43288f: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 432892: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 432895: push 0x25 */
  { uint32_t v = 0x25u; esp -= 4; W32(esp, v); }
/* 432897: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
L_432899: /* 432899: call 0x434a91 */
  esp -= 4; W32(esp, 0x43289eu); SPILL(); f_434a91(); if (g_unwind) return; RELOAD();
/* 43289e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4328a1: jmp 0x4328d0 */
  goto L_4328d0;
L_4328a3: /* 4328a3: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 4328a6: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 4328a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4328aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4328ab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4328ac: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 4328af: call 0x434cb8 */
  esp -= 4; W32(esp, 0x4328b4u); SPILL(); f_434cb8(); if (g_unwind) return; RELOAD();
/* 4328b4: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4328b7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 4328b9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 4328ba: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 4328bd: fild dword ptr [ebp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 4328c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4328c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4328c2: fstp qword ptr [ebp + 8] */
  WF64((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 4328c5: call 0x434d89 */
  esp -= 4; W32(esp, 0x4328cau); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 4328ca: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4328cd: /* 4328cd: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
L_4328d0: /* 4328d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4328d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4328d2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4328d3: ret  */
  esp += 4; SPILL(); return;
}

void f_4328d4(void) {
  LOAD_REGS();
L_4328d4: /* 4328d4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4328d5: mov ebp, esp */
  ebp = esp;
/* 4328d7: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4328da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4328db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4328dc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4328dd: mov esi, 0xffff */
  esi = 0xffffu;
/* 4328e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4328e3: push 0x133f */
  { uint32_t v = 0x133fu; esp -= 4; W32(esp, v); }
/* 4328e8: call 0x434d89 */
  esp -= 4; W32(esp, 0x4328edu); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 4328ed: mov edi, dword ptr [ebp + 0xe] */
  edi = R32((uint32_t)(ebp + 0xeu));
/* 4328f0: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 4328f3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4328f4: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4328f7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4328f8: mov ecx, 0x7ff0 */
  ecx = 0x7ff0u;
/* 4328fd: mov eax, edi */
  eax = edi;
/* 4328ff: and ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 432902: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 432905: je 0x432912 */
  if (zf) goto L_432912;
L_432907: /* 432907: mov eax, dword ptr [ebp + 0x16] */
  eax = R32((uint32_t)(ebp + 0x16u));
/* 43290a: and ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 43290d: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 432910: jne 0x43297e */
  if (!zf) goto L_43297e;
L_432912: /* 432912: mov eax, 0x7ff8 */
  eax = 0x7ff8u;
/* 432917: and edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 432919: cmp di, cx */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 43291c: mov ebx, 0x7ffff */
  ebx = 0x7ffffu;
/* 432921: jne 0x43292c */
  if (!zf) goto L_43292c;
L_432923: /* 432923: test dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 432926: jne 0x432941 */
  if (!zf) goto L_432941;
L_432928: /* 432928: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43292a: jne 0x432941 */
  if (!zf) goto L_432941;
L_43292c: /* 43292c: mov esi, dword ptr [ebp + 0x16] */
  esi = R32((uint32_t)(ebp + 0x16u));
/* 43292f: and esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 432931: cmp si, cx */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 432934: jne 0x432967 */
  if (!zf) goto L_432967;
L_432936: /* 432936: test dword ptr [ebp + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 432939: jne 0x432941 */
  if (!zf) goto L_432941;
L_43293b: /* 43293b: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43293f: je 0x432967 */
  if (zf) goto L_432967;
L_432941: /* 432941: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 432944: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 432947: fadd qword ptr [ebp + 0x10] */
  ST0 = ST0 + (F64((uint32_t)(ebp + 0x10u)));
/* 43294a: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 43294d: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 432951: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 432954: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 432958: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43295b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 43295e: push 0x26 */
  { uint32_t v = 0x26u; esp -= 4; W32(esp, v); }
/* 432960: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 432962: jmp 0x432b39 */
  goto L_432b39;
L_432967: /* 432967: cmp di, ax */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 43296a: je 0x432b53 */
  if (zf) goto L_432b53;
L_432970: /* 432970: cmp si, ax */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 432973: je 0x432b53 */
  if (zf) goto L_432b53;
L_432979: /* 432979: mov esi, 0xffff */
  esi = 0xffffu;
L_43297e: /* 43297e: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 432981: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 432984: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 432986: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 432988: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 43298b: jp 0x4329a2 */
  if (pf) goto L_4329a2;
L_43298d: /* 43298d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 43298e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 432990: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 432993: call 0x434d89 */
  esp -= 4; W32(esp, 0x432998u); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 432998: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 43299b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43299c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 43299d: jmp 0x432b70 */
  goto L_432b70;
L_4329a2: /* 4329a2: fld qword ptr [0x43fc10] */
  { double v = F64((uint32_t)(0x43fc10u)); FPUSH(v); }
/* 4329a8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4329aa: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4329ac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4329ae: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4329b1: jp 0x4329d3 */
  if (pf) goto L_4329d3;
L_4329b3: /* 4329b3: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 4329b6: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 4329bd: fcomp st(2) */
  fpu_com(ST0, STI(2));
  FPOP();
/* 4329bf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4329c1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4329c4: jne 0x4329cc */
  if (!zf) goto L_4329cc;
L_4329c6: /* 4329c6: and dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 4329ca: jmp 0x4329d3 */
  goto L_4329d3;
L_4329cc: /* 4329cc: mov dword ptr [ebp - 0x18], 0x80000000 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x80000000u);
L_4329d3: /* 4329d3: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4329d5: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4329d7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4329d9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4329dc: jne 0x4329ea */
  if (!zf) goto L_4329ea;
L_4329de: /* 4329de: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 4329e1: fcomp st(2) */
  fpu_com(ST0, STI(2));
  FPOP();
/* 4329e3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4329e5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4329e8: jnp 0x432a01 */
  if (!pf) goto L_432a01;
L_4329ea: /* 4329ea: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 4329ec: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 4329ee: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4329f0: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 4329f3: jp 0x432a18 */
  if (pf) goto L_432a18;
L_4329f5: /* 4329f5: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 4329f8: fcomp st(2) */
  fpu_com(ST0, STI(2));
  FPOP();
/* 4329fa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 4329fc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4329ff: jne 0x432a18 */
  if (!zf) goto L_432a18;
L_432a01: /* 432a01: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 432a03: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 432a05: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 432a08: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 432a0a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 432a0d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 432a10: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 432a13: jne 0x432a62 */
  if (!zf) goto L_432a62;
L_432a15: /* 432a15: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 432a16: jmp 0x432a5b */
  goto L_432a5b;
L_432a18: /* 432a18: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 432a1a: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 432a1c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 432a1e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 432a21: jne 0x432a2f */
  if (!zf) goto L_432a2f;
L_432a23: /* 432a23: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 432a26: fcomp st(2) */
  fpu_com(ST0, STI(2));
  FPOP();
/* 432a28: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 432a2a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 432a2d: je 0x432a48 */
  if (zf) goto L_432a48;
L_432a2f: /* 432a2f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 432a31: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 432a33: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 432a35: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 432a38: jp 0x432a60 */
  if (pf) goto L_432a60;
L_432a3a: /* 432a3a: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 432a3d: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 432a3f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 432a41: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 432a44: jp 0x432a62 */
  if (pf) goto L_432a62;
L_432a46: /* 432a46: jmp 0x432a4c */
  goto L_432a4c;
L_432a48: /* 432a48: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 432a4a: fstp st(0) */
  STI(0) = ST0; FPOP();
L_432a4c: /* 432a4c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 432a4f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 432a50: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 432a52: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 432a55: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 432a58: jne 0x432a62 */
  if (!zf) goto L_432a62;
L_432a5a: /* 432a5a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_432a5b: /* 432a5b: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 432a5e: jmp 0x432a62 */
  goto L_432a62;
L_432a60: /* 432a60: fstp st(0) */
  STI(0) = ST0; FPOP();
L_432a62: /* 432a62: test word ptr [ebp - 0x16], cx */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffeau))); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 432a66: jne 0x432aca */
  if (!zf) goto L_432aca;
L_432a68: /* 432a68: test dword ptr [ebp - 0x18], 0xfffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 432a6f: jne 0x432a77 */
  if (!zf) goto L_432a77;
L_432a71: /* 432a71: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 432a75: je 0x432aca */
  if (zf) goto L_432aca;
L_432a77: /* 432a77: fld qword ptr [ebp - 0x1c] */
  { double v = F64((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 432a7a: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 432a7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432a7e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432a7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432a80: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 432a83: call 0x434cb8 */
  esp -= 4; W32(esp, 0x432a88u); SPILL(); f_434cb8(); if (g_unwind) return; RELOAD();
/* 432a88: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 432a8b: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 432a8e: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 432a91: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 432a94: add eax, 0x600 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x600u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 432a99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432a9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432a9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432a9c: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 432a9f: call 0x434c1e */
  esp -= 4; W32(esp, 0x432aa4u); SPILL(); f_434c1e(); if (g_unwind) return; RELOAD();
/* 432aa4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 432aa7: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 432aaa: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 432aad: fld qword ptr [ebp - 0x1c] */
  { double v = F64((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 432ab0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 432ab3: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 432ab7: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 432aba: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 432abe: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 432ac1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 432ac4: push 0x26 */
  { uint32_t v = 0x26u; esp -= 4; W32(esp, v); }
/* 432ac6: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* 432ac8: jmp 0x432b39 */
  goto L_432b39;
L_432aca: /* 432aca: cmp dword ptr [ebp - 0x18], 0x7ff00000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x7ff00000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 432ad1: jne 0x432ad9 */
  if (!zf) goto L_432ad9;
L_432ad3: /* 432ad3: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 432ad7: je 0x432ae8 */
  if (zf) goto L_432ae8;
L_432ad9: /* 432ad9: cmp dword ptr [ebp - 0x18], 0xfff00000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xfff00000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 432ae0: jne 0x432b43 */
  if (!zf) goto L_432b43;
L_432ae2: /* 432ae2: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 432ae6: jne 0x432b43 */
  if (!zf) goto L_432b43;
L_432ae8: /* 432ae8: fld qword ptr [ebp - 0x1c] */
  { double v = F64((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 432aeb: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 432aee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432aef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432af0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432af1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 432af4: call 0x434cb8 */
  esp -= 4; W32(esp, 0x432af9u); SPILL(); f_434cb8(); if (g_unwind) return; RELOAD();
/* 432af9: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 432afc: fstp qword ptr [ebp - 0x10] */
  WF64((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* 432aff: fld qword ptr [ebp - 0x10] */
  { double v = F64((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* 432b02: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 432b05: add eax, 0xfffffa00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffa00u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 432b0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432b0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432b0c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432b0d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 432b10: call 0x434c1e */
  esp -= 4; W32(esp, 0x432b15u); SPILL(); f_434c1e(); if (g_unwind) return; RELOAD();
/* 432b15: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 432b18: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 432b1b: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 432b1e: fld qword ptr [ebp - 0x1c] */
  { double v = F64((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 432b21: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 432b24: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 432b28: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 432b2b: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 432b2f: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 432b32: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 432b35: push 0x26 */
  { uint32_t v = 0x26u; esp -= 4; W32(esp, v); }
/* 432b37: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
L_432b39: /* 432b39: call 0x434b4f */
  esp -= 4; W32(esp, 0x432b3eu); SPILL(); f_434b4f(); if (g_unwind) return; RELOAD();
/* 432b3e: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 432b41: jmp 0x432b70 */
  goto L_432b70;
L_432b43: /* 432b43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 432b44: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 432b47: call 0x434d89 */
  esp -= 4; W32(esp, 0x432b4cu); SPILL(); f_434d89(); if (g_unwind) return; RELOAD();
/* 432b4c: fld qword ptr [ebp - 0x1c] */
  { double v = F64((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 432b4f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 432b50: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 432b51: jmp 0x432b70 */
  goto L_432b70;
L_432b53: /* 432b53: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 432b56: fld qword ptr [ebp + 0x10] */
  { double v = F64((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 432b59: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 432b5c: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 432b60: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 432b63: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 432b66: push 0x26 */
  { uint32_t v = 0x26u; esp -= 4; W32(esp, v); }
/* 432b68: call 0x434a32 */
  esp -= 4; W32(esp, 0x432b6du); SPILL(); f_434a32(); if (g_unwind) return; RELOAD();
/* 432b6d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_432b70: /* 432b70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 432b71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 432b72: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 432b73: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 432b74: ret  */
  esp += 4; SPILL(); return;
}

void f_432b75(void) {
  LOAD_REGS();
L_432b75: /* 432b75: mov ax, word ptr [esp + 0xa] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0xau))) & 0xffffu);
/* 432b7a: and ax, 0x7ff0 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7ff0u);
  uint16_t r = (uint16_t)(a & b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 432b7e: xor ecx, ecx */
  ecx = 0;
/* 432b80: cmp ax, 0x7ff0 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7ff0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 432b84: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 432b87: mov eax, ecx */
  eax = ecx;
/* 432b89: ret  */
  esp += 4; SPILL(); return;
}

void f_432b8a(void) {
  LOAD_REGS();
L_432b8a: /* 432b8a: mov eax, dword ptr [esp + 0xa] */
  eax = R32((uint32_t)(esp + 0xau));
/* 432b8e: mov ecx, 0x7ff8 */
  ecx = 0x7ff8u;
/* 432b93: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432b95: cmp ax, 0x7ff0 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x7ff0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 432b99: jne 0x432bac */
  if (!zf) goto L_432bac;
L_432b9b: /* 432b9b: test dword ptr [esp + 8], 0x7ffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x7ffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 432ba3: jne 0x432bb1 */
  if (!zf) goto L_432bb1;
L_432ba5: /* 432ba5: cmp dword ptr [esp + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 432baa: jne 0x432bb1 */
  if (!zf) goto L_432bb1;
L_432bac: /* 432bac: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 432baf: jne 0x432bb5 */
  if (!zf) goto L_432bb5;
L_432bb1: /* 432bb1: xor eax, eax */
  eax = 0;
/* 432bb3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 432bb4: ret  */
  esp += 4; SPILL(); return;
L_432bb5: /* 432bb5: xor eax, eax */
  eax = 0;
/* 432bb7: ret  */
  esp += 4; SPILL(); return;
}

void f_432bb8(void) {
  LOAD_REGS();
L_432bb8: /* 432bb8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 432bb9: mov ebp, esp */
  ebp = esp;
/* 432bbb: mov eax, dword ptr [ebp + 0xe] */
  eax = R32((uint32_t)(ebp + 0xeu));
/* 432bbe: mov ecx, 0x7ff0 */
  ecx = 0x7ff0u;
/* 432bc3: mov edx, eax */
  edx = eax;
/* 432bc5: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 432bc7: cmp dx, cx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 432bca: jne 0x432bf9 */
  if (!zf) goto L_432bf9;
L_432bcc: /* 432bcc: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 432bcf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432bd0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432bd1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 432bd4: call 0x434c5d */
  esp -= 4; W32(esp, 0x432bd9u); SPILL(); f_434c5d(); if (g_unwind) return; RELOAD();
/* 432bd9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 432bda: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 432bdb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 432bdc: je 0x432bf2 */
  if (zf) goto L_432bf2;
L_432bde: /* 432bde: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 432bdf: je 0x432bee */
  if (zf) goto L_432bee;
L_432be1: /* 432be1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 432be2: je 0x432be9 */
  if (zf) goto L_432be9;
L_432be4: /* 432be4: xor eax, eax */
  eax = 0;
/* 432be6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 432be7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 432be8: ret  */
  esp += 4; SPILL(); return;
L_432be9: /* 432be9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
L_432beb: /* 432beb: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 432bec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 432bed: ret  */
  esp += 4; SPILL(); return;
L_432bee: /* 432bee: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 432bf0: jmp 0x432beb */
  goto L_432beb;
L_432bf2: /* 432bf2: mov eax, 0x200 */
  eax = 0x200u;
/* 432bf7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 432bf8: ret  */
  esp += 4; SPILL(); return;
L_432bf9: /* 432bf9: and eax, 0x8000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432bfe: test dx, dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 432c01: mov ecx, eax */
  ecx = eax;
/* 432c03: jne 0x432c24 */
  if (!zf) goto L_432c24;
L_432c05: /* 432c05: test dword ptr [ebp + 0xc], 0xfffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0xfffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 432c0c: jne 0x432c14 */
  if (!zf) goto L_432c14;
L_432c0e: /* 432c0e: cmp dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 432c12: je 0x432c24 */
  if (zf) goto L_432c24;
L_432c14: /* 432c14: mov eax, ecx */
  eax = ecx;
/* 432c16: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 432c18: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 432c1a: and eax, 0xffffff90 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff90u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432c1d: add eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 432c22: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 432c23: ret  */
  esp += 4; SPILL(); return;
L_432c24: /* 432c24: fld qword ptr [ebp + 8] */
  { double v = F64((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 432c27: fcomp qword ptr [0x43fc10] */
  fpu_com(ST0, F64((uint32_t)(0x43fc10u)));
  FPOP();
/* 432c2d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 432c2f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 432c32: mov eax, ecx */
  eax = ecx;
/* 432c34: jp 0x432c42 */
  if (pf) goto L_432c42;
L_432c36: /* 432c36: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 432c38: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 432c3a: and eax, 0xffffffe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432c3d: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 432c40: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 432c41: ret  */
  esp += 4; SPILL(); return;
L_432c42: /* 432c42: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 432c44: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 432c46: and eax, 0xffffff08 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffff08u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432c4b: add eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 432c50: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 432c51: ret  */
  esp += 4; SPILL(); return;
}

void f_432c52(void) {
  LOAD_REGS();
L_432c52: /* 432c52: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 432c56: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 432c58: jl 0x432c6d */
  if ((sf != of)) goto L_432c6d;
L_432c5a: /* 432c5a: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 432c5d: jg 0x432c6d */
  if ((!zf && sf == of)) goto L_432c6d;
L_432c5f: /* 432c5f: sub eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 432c63: js 0x432c6a */
  if (sf) goto L_432c6a;
L_432c65: /* 432c65: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 432c68: jle 0x432c6d */
  if ((zf || sf != of)) goto L_432c6d;
L_432c6a: /* 432c6a: push 0x1f */
  { uint32_t v = 0x1fu; esp -= 4; W32(esp, v); }
/* 432c6c: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
L_432c6d: /* 432c6d: ret  */
  esp += 4; SPILL(); return;
}

void f_432c6e(void) {
  LOAD_REGS();
L_432c6e: /* 432c6e: cmp dword ptr [esp + 4], 0xa */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 432c73: jl 0x432c80 */
  if ((sf != of)) goto L_432c80;
L_432c75: /* 432c75: cmp dword ptr [esp + 4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 432c7a: jg 0x432c80 */
  if ((!zf && sf == of)) goto L_432c80;
L_432c7c: /* 432c7c: xor eax, eax */
  eax = 0;
/* 432c7e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 432c7f: ret  */
  esp += 4; SPILL(); return;
L_432c80: /* 432c80: xor eax, eax */
  eax = 0;
/* 432c82: ret  */
  esp += 4; SPILL(); return;
}

void f_432c83(void) {
  LOAD_REGS();
L_432c83: /* 432c83: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 432c87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 432c89: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 432c8a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 432c8b: jl 0x432c9f */
  if ((sf != of)) goto L_432c9f;
L_432c8d: /* 432c8d: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 432c90: jge 0x432c9f */
  if ((sf == of)) goto L_432c9f;
L_432c92: /* 432c92: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 432c96: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 432c99: lea esi, [ecx + eax*2 + 0x1c] */
  esi = (uint32_t)(ecx + eax*2 + 0x1cu);
/* 432c9d: jmp 0x432ca4 */
  goto L_432ca4;
L_432c9f: /* 432c9f: mov esi, 0x44f650 */
  esi = 0x44f650u;
L_432ca4: /* 432ca4: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 432ca8: mov edi, eax */
  edi = eax;
/* 432caa: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 432cab: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 432cac: movsw word ptr es:[edi], word ptr [esi] */
  W16(edi, R16(esi)); esi += (DF ? -2 : 2); edi += (DF ? -2 : 2);
/* 432cae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 432caf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 432cb0: ret  */
  esp += 4; SPILL(); return;
}

void f_432cb1(void) {
  LOAD_REGS();
L_432cb1: /* 432cb1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 432cb5: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 432cb9: add ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  ecx = r;
  }
/* 432cbb: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 432cbd: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 432cbe: shl eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  eax = r;
  }
  }
/* 432cc0: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* 432cc2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 432cc6: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 432cc8: not eax */
  eax = ~eax;
/* 432cca: and eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432ccc: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 432cce: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 432cd0: ret  */
  esp += 4; SPILL(); return;
}

void f_432cd1(void) {
  LOAD_REGS();
L_432cd1: /* 432cd1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 432cd2: mov ebp, esp */
  ebp = esp;
/* 432cd4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 432cd7: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 432cda: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 432cdb: xor edx, edx */
  edx = 0;
/* 432cdd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 432cde: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 432ce1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 432ce2: or dword ptr [edi + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi + 0x10u), r);
  }
/* 432ce5: cmp ecx, 0xd */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 432ce8: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 432ceb: jg 0x432dff */
  if ((!zf && sf == of)) goto L_432dff;
L_432cf1: /* 432cf1: je 0x432ded */
  if (zf) goto L_432ded;
L_432cf7: /* 432cf7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 432cf9: jl 0x432e5a */
  if ((sf != of)) goto L_432e5a;
L_432cff: /* 432cff: cmp ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 432d02: jle 0x432dd0 */
  if ((zf || sf != of)) goto L_432dd0;
L_432d08: /* 432d08: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 432d0b: je 0x432e12 */
  if (zf) goto L_432e12;
L_432d11: /* 432d11: cmp ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 432d14: je 0x432d78 */
  if (zf) goto L_432d78;
L_432d16: /* 432d16: cmp ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 432d19: je 0x432d5e */
  if (zf) goto L_432d5e;
L_432d1b: /* 432d1b: cmp ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 432d1e: je 0x432d46 */
  if (zf) goto L_432d46;
L_432d20: /* 432d20: cmp ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 432d23: jne 0x432e5a */
  if (!zf) goto L_432e5a;
L_432d29: /* 432d29: and eax, 0xffffffed */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffedu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432d2c: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 432d2e: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 432d31: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 432d34: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 432d37: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 432d39: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 432d3b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 432d3e: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* 432d41: jmp 0x432e5a */
  goto L_432e5a;
L_432d46: /* 432d46: and eax, 0xffffffeb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffebu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432d49: or eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 432d4c: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 432d4f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 432d52: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 432d55: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 432d57: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 432d59: jmp 0x432e5a */
  goto L_432e5a;
L_432d5e: /* 432d5e: and eax, 0xffffffe9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe9u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432d61: or eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 432d64: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 432d67: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 432d6a: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 432d6d: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 432d70: mov word ptr [edi], ax */
  W16((uint32_t)(edi), (eax & 0xffffu));
/* 432d73: jmp 0x432e5a */
  goto L_432e5a;
L_432d78: /* 432d78: and eax, 0xfffffff7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432d7b: or eax, 0x16 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x16u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 432d7e: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 432d81: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 432d84: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 432d87: mov eax, ecx */
  eax = ecx;
/* 432d89: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 432d8c: and eax, 0xa0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432d91: and ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 432d97: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 432d99: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 432d9c: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 432d9f: je 0x432dc9 */
  if (zf) goto L_432dc9;
L_432da1: /* 432da1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 432da2: je 0x432dbe */
  if (zf) goto L_432dbe;
L_432da4: /* 432da4: sub eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 432da9: je 0x432db6 */
  if (zf) goto L_432db6;
L_432dab: /* 432dab: mov dword ptr [edi], 3 */
  W32((uint32_t)(edi), 0x3u);
/* 432db1: jmp 0x432e5a */
  goto L_432e5a;
L_432db6: /* 432db6: and dword ptr [edi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(edi), r);
  }
/* 432db9: jmp 0x432e5a */
  goto L_432e5a;
L_432dbe: /* 432dbe: mov dword ptr [edi], 2 */
  W32((uint32_t)(edi), 0x2u);
/* 432dc4: jmp 0x432e5a */
  goto L_432e5a;
L_432dc9: /* 432dc9: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 432dcb: jmp 0x432e5a */
  goto L_432e5a;
L_432dd0: /* 432dd0: and eax, 0xffffffe5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe5u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432dd3: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 432dd6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432dd7: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 432dda: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 432ddd: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 432de0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432de1: call 0x432c83 */
  esp -= 4; W32(esp, 0x432de6u); SPILL(); f_432c83(); if (g_unwind) return; RELOAD();
/* 432de6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 432de9: mov esi, eax */
  esi = eax;
/* 432deb: jmp 0x432e28 */
  goto L_432e28;
L_432ded: /* 432ded: and eax, 0xffffffe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432df0: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 432df3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 432df6: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 432df9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 432dfb: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 432dfd: jmp 0x432e5a */
  goto L_432e5a;
L_432dff: /* 432dff: sub ecx, 0xe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 432e02: je 0x432e47 */
  if (zf) goto L_432e47;
L_432e04: /* 432e04: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 432e05: je 0x432e36 */
  if (zf) goto L_432e36;
L_432e07: /* 432e07: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 432e08: je 0x432e2e */
  if (zf) goto L_432e2e;
L_432e0a: /* 432e0a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 432e0b: je 0x432e1a */
  if (zf) goto L_432e1a;
L_432e0d: /* 432e0d: sub ecx, 0xe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 432e10: jne 0x432e5a */
  if (!zf) goto L_432e5a;
L_432e12: /* 432e12: and eax, 0xfffffffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432e15: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 432e18: jmp 0x432e5a */
  goto L_432e5a;
L_432e1a: /* 432e1a: and eax, 0xffffffe5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe5u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432e1d: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 432e20: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 432e23: mov esi, 0x44f650 */
  esi = 0x44f650u;
L_432e28: /* 432e28: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 432e29: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 432e2a: movsw word ptr es:[edi], word ptr [esi] */
  W16(edi, R16(esi)); esi += (DF ? -2 : 2); edi += (DF ? -2 : 2);
/* 432e2c: jmp 0x432e5a */
  goto L_432e5a;
L_432e2e: /* 432e2e: and eax, 0xfffffff5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff5u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432e31: or eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 432e34: jmp 0x432e3c */
  goto L_432e3c;
L_432e36: /* 432e36: and eax, 0xffffffe5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe5u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432e39: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_432e3c: /* 432e3c: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 432e3f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 432e42: mov esi, dword ptr [eax + 0x14] */
  esi = R32((uint32_t)(eax + 0x14u));
/* 432e45: jmp 0x432e28 */
  goto L_432e28;
L_432e47: /* 432e47: and eax, 0xffffffe3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432e4a: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 432e4d: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 432e50: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 432e53: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 432e56: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 432e58: fstp qword ptr [edi] */
  WF64((uint32_t)(edi), ST0); FPOP();
L_432e5a: /* 432e5a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 432e5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 432e5c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 432e5d: ret  */
  esp += 4; SPILL(); return;
}

void f_432e5e(void) {
  LOAD_REGS();
L_432e5e: /* 432e5e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 432e5f: mov ebp, esp */
  ebp = esp;
/* 432e61: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 432e64: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 432e65: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 432e68: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 432e6a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 432e6b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 432e6e: jle 0x432ef5 */
  if ((zf || sf != of)) goto L_432ef5;
L_432e74: /* 432e74: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 432e75: lea edi, [esi + 8] */
  edi = (uint32_t)(esi + 0x8u);
/* 432e78: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
L_432e7b: /* 432e7b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 432e7e: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 432e81: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 432e83: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432e86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432e87: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 432e88: call 0x432cb1 */
  esp -= 4; W32(esp, 0x432e8du); SPILL(); f_432cb1(); if (g_unwind) return; RELOAD();
/* 432e8d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 432e90: mov ecx, eax */
  ecx = eax;
/* 432e92: and ecx, 0xfffff800 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffff800u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 432e98: add ecx, 0x800 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 432e9e: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 432ea0: and ecx, 0x3800 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3800u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 432ea6: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 432ea8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 432eab: dec dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 432eae: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 432eb1: jne 0x432e7b */
  if (!zf) goto L_432e7b;
L_432eb3: /* 432eb3: lea edi, [ebx + ebx*4] */
  edi = (uint32_t)(ebx + ebx*4);
/* 432eb6: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 432eb8: lea eax, [esi + 0x1c] */
  eax = (uint32_t)(esi + 0x1cu);
/* 432ebb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 432ebc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432ebd: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 432ec0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432ec1: call 0x40126b */
  esp -= 4; W32(esp, 0x432ec6u); SPILL(); hle_memcpy(); RELOAD();
/* 432ec6: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 432ec8: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 432ec9: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 432ecb: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 432ece: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 432ed0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432ed1: lea eax, [edi + esi + 0x1c] */
  eax = (uint32_t)(edi + esi + 0x1cu);
/* 432ed5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432ed6: lea eax, [esi + 0x1c] */
  eax = (uint32_t)(esi + 0x1cu);
/* 432ed9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432eda: call 0x403f12 */
  esp -= 4; W32(esp, 0x432edfu); SPILL(); hle_memcpy(); RELOAD();
/* 432edf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 432ee0: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 432ee3: sub esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 432ee5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432ee6: add esi, 0x6c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x6cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 432ee9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 432eea: call 0x40126b */
  esp -= 4; W32(esp, 0x432eefu); SPILL(); hle_memcpy(); RELOAD();
/* 432eef: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 432ef2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 432ef3: jmp 0x432f33 */
  goto L_432f33;
L_432ef5: /* 432ef5: jge 0x432f33 */
  if ((sf == of)) goto L_432f33;
L_432ef7: /* 432ef7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 432efa: mov eax, ecx */
  eax = ecx;
/* 432efc: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 432eff: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 432f00: shl eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 432f03: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 432f05: and eax, 0x3800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432f0a: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 432f0c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 432f0f: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 432f12: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432f15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 432f17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432f18: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* 432f1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432f1c: call 0x432cb1 */
  esp -= 4; W32(esp, 0x432f21u); SPILL(); f_432cb1(); if (g_unwind) return; RELOAD();
/* 432f21: lea eax, [esi + 0x1c] */
  eax = (uint32_t)(esi + 0x1cu);
/* 432f24: push 0x46 */
  { uint32_t v = 0x46u; esp -= 4; W32(esp, v); }
/* 432f26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432f27: add esi, 0x26 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x26u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 432f2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 432f2b: call 0x403f12 */
  esp -= 4; W32(esp, 0x432f30u); SPILL(); hle_memcpy(); RELOAD();
/* 432f30: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_432f33: /* 432f33: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 432f34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 432f35: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 432f36: ret  */
  esp += 4; SPILL(); return;
}

void f_432f37(void) {
  LOAD_REGS();
L_432f37: /* 432f37: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 432f38: mov ebp, esp */
  ebp = esp;
/* 432f3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432f3b: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 432f3e: call 0x432c6e */
  esp -= 4; W32(esp, 0x432f43u); SPILL(); f_432c6e(); if (g_unwind) return; RELOAD();
/* 432f43: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 432f46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 432f48: je 0x432f6f */
  if (zf) goto L_432f6f;
L_432f4a: /* 432f4a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 432f4d: mov eax, dword ptr [ecx + 0xc4] */
  eax = R32((uint32_t)(ecx + 0xc4u));
/* 432f53: cmp eax, dword ptr [ecx + 0x30] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 432f56: jbe 0x432f6f */
  if ((cf | zf)) goto L_432f6f;
L_432f58: /* 432f58: push esp */
  { uint32_t v = esp; esp -= 4; W32(esp, v); }
/* 432f59: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 432f5a: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 432f5d: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 432f60: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 432f63: cmp dword ptr [ebp - 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 432f66: ja 0x432f6f */
  if ((!cf && !zf)) goto L_432f6f;
L_432f68: /* 432f68: mov dword ptr [ebp + 0xc], 0x1f */
  W32((uint32_t)(ebp + 0xcu), 0x1fu);
L_432f6f: /* 432f6f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 432f72: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 432f73: ret  */
  esp += 4; SPILL(); return;
}

void f_432f74(void) {
  LOAD_REGS();
L_432f74: /* 432f74: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 432f78: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 432f7a: jl 0x432fdf */
  if ((sf != of)) goto L_432fdf;
L_432f7c: /* 432f7c: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 432f7f: jge 0x432fdf */
  if ((sf == of)) goto L_432fdf;
L_432f81: /* 432f81: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 432f85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 432f86: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 432f8a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 432f8b: lea eax, [ecx + ecx*4] */
  eax = (uint32_t)(ecx + ecx*4);
/* 432f8e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 432f8f: lea edi, [ebx + eax*2 + 0x1c] */
  edi = (uint32_t)(ebx + eax*2 + 0x1cu);
/* 432f93: mov esi, edx */
  esi = edx;
/* 432f95: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 432f96: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 432f97: movsw word ptr es:[edi], word ptr [esi] */
  W16(edi, R16(esi)); esi += (DF ? -2 : 2); edi += (DF ? -2 : 2);
/* 432f99: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 432f9c: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 432f9f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 432fa1: xor ecx, ecx */
  ecx = 0;
/* 432fa3: mov cx, word ptr [edx + 8] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx + 0x8u))) & 0xffffu);
/* 432fa7: mov esi, 0x7fff */
  esi = 0x7fffu;
/* 432fac: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 432faf: and ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 432fb1: je 0x432fbb */
  if (zf) goto L_432fbb;
L_432fb3: /* 432fb3: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 432fb5: je 0x432fcb */
  if (zf) goto L_432fcb;
L_432fb7: /* 432fb7: xor ecx, ecx */
  ecx = 0;
/* 432fb9: jmp 0x432fce */
  goto L_432fce;
L_432fbb: /* 432fbb: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 432fbe: jne 0x432fcb */
  if (!zf) goto L_432fcb;
L_432fc0: /* 432fc0: cmp dword ptr [edx + 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 432fc4: jne 0x432fcb */
  if (!zf) goto L_432fcb;
L_432fc6: /* 432fc6: xor ecx, ecx */
  ecx = 0;
/* 432fc8: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 432fc9: jmp 0x432fce */
  goto L_432fce;
L_432fcb: /* 432fcb: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 432fcd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_432fce: /* 432fce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 432fcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 432fd0: add ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 432fd3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 432fd4: call 0x432cb1 */
  esp -= 4; W32(esp, 0x432fd9u); SPILL(); f_432cb1(); if (g_unwind) return; RELOAD();
/* 432fd9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 432fdc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 432fdd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 432fde: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_432fdf: /* 432fdf: ret  */
  esp += 4; SPILL(); return;
}

void f_432fe0(void) {
  LOAD_REGS();
L_432fe0: /* 432fe0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 432fe1: mov ebp, esp */
  ebp = esp;
/* 432fe3: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 432fe6: cmp eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 432fe9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 432fea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 432feb: jg 0x4330be */
  if ((!zf && sf == of)) goto L_4330be;
L_432ff1: /* 432ff1: je 0x4330a9 */
  if (zf) goto L_4330a9;
L_432ff7: /* 432ff7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 432ff9: jl 0x4330f7 */
  if ((sf != of)) goto L_4330f7;
L_432fff: /* 432fff: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 433002: jle 0x433098 */
  if ((zf || sf != of)) goto L_433098;
L_433008: /* 433008: cmp eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43300b: je 0x433041 */
  if (zf) goto L_433041;
L_43300d: /* 43300d: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433010: je 0x43302d */
  if (zf) goto L_43302d;
L_433012: /* 433012: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433015: jne 0x4330f7 */
  if (!zf) goto L_4330f7;
L_43301b: /* 43301b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 43301e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 433021: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 433024: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 433026: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 433028: jmp 0x4330f7 */
  goto L_4330f7;
L_43302d: /* 43302d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 433030: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 433033: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 433036: mov cx, word ptr [ecx] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 433039: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 43303c: jmp 0x4330f7 */
  goto L_4330f7;
L_433041: /* 433041: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 433044: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 433046: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 433049: je 0x433084 */
  if (zf) goto L_433084;
L_43304b: /* 43304b: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 43304c: je 0x43307b */
  if (zf) goto L_43307b;
L_43304e: /* 43304e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 43304f: je 0x433064 */
  if (zf) goto L_433064;
L_433051: /* 433051: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 433052: jne 0x4330f7 */
  if (!zf) goto L_4330f7;
L_433058: /* 433058: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 43305b: or byte ptr [eax + 5], 0x45 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x5u))); uint8_t b = (uint8_t)(0x45u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(eax + 0x5u), r);
  }
/* 43305f: jmp 0x4330f7 */
  goto L_4330f7;
L_433064: /* 433064: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 433067: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 43306a: and ecx, 0xffffbbff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffbbffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 433070: or ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_433076: /* 433076: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 433079: jmp 0x4330f7 */
  goto L_4330f7;
L_43307b: /* 43307b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 43307e: and byte ptr [eax + 5], 0xba */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x5u))); uint8_t b = (uint8_t)(0xbau);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax + 0x5u), r);
  }
/* 433082: jmp 0x4330f7 */
  goto L_4330f7;
L_433084: /* 433084: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 433087: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 43308a: and ecx, 0xfffffaff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffaffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 433090: or ecx, 0x4000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 433096: jmp 0x433076 */
  goto L_433076;
L_433098: /* 433098: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 43309b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43309c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 43309f: call 0x432f74 */
  esp -= 4; W32(esp, 0x4330a4u); SPILL(); f_432f74(); if (g_unwind) return; RELOAD();
/* 4330a4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4330a7: jmp 0x4330f7 */
  goto L_4330f7;
L_4330a9: /* 4330a9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4330ac: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 4330af: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4330b2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 4330b4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 4330b6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4330b9: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 4330bc: jmp 0x4330f7 */
  goto L_4330f7;
L_4330be: /* 4330be: sub eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 4330c1: je 0x4330ea */
  if (zf) goto L_4330ea;
L_4330c3: /* 4330c3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4330c4: je 0x4330db */
  if (zf) goto L_4330db;
L_4330c6: /* 4330c6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4330c7: je 0x4330cc */
  if (zf) goto L_4330cc;
L_4330c9: /* 4330c9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 4330ca: jne 0x4330f7 */
  if (!zf) goto L_4330f7;
L_4330cc: /* 4330cc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4330cf: mov edi, dword ptr [eax + 0x14] */
  edi = R32((uint32_t)(eax + 0x14u));
/* 4330d2: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 4330d5: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4330d6: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 4330d7: movsw word ptr es:[edi], word ptr [esi] */
  W16(edi, R16(esi)); esi += (DF ? -2 : 2); edi += (DF ? -2 : 2);
/* 4330d9: jmp 0x4330f7 */
  goto L_4330f7;
L_4330db: /* 4330db: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4330de: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 4330e1: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 4330e4: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 4330e6: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 4330e8: jmp 0x4330f7 */
  goto L_4330f7;
L_4330ea: /* 4330ea: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4330ed: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 4330f0: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 4330f3: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4330f5: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
L_4330f7: /* 4330f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4330f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4330f9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4330fa: ret  */
  esp += 4; SPILL(); return;
}

void f_4330fb(void) {
  LOAD_REGS();
L_4330fb: /* 4330fb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4330fc: mov ebp, esp */
  ebp = esp;
/* 4330fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4330ff: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 433102: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 433104: jge 0x433111 */
  if ((sf == of)) goto L_433111;
L_433106: /* 433106: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 433107: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 43310a: call 0x432e5e */
  esp -= 4; W32(esp, 0x43310fu); SPILL(); f_432e5e(); if (g_unwind) return; RELOAD();
/* 43310f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433110: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_433111: /* 433111: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 433114: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 433117: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 43311a: call 0x432fe0 */
  esp -= 4; W32(esp, 0x43311fu); SPILL(); f_432fe0(); if (g_unwind) return; RELOAD();
/* 43311f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 433122: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 433124: jle 0x433131 */
  if ((zf || sf != of)) goto L_433131;
L_433126: /* 433126: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 433127: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 43312a: call 0x432e5e */
  esp -= 4; W32(esp, 0x43312fu); SPILL(); f_432e5e(); if (g_unwind) return; RELOAD();
/* 43312f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433130: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_433131: /* 433131: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 433132: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 433133: ret  */
  esp += 4; SPILL(); return;
}

void f_433134(void) {
  LOAD_REGS();
L_433134: /* 433134: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 433135: mov ebp, esp */
  ebp = esp;
/* 433137: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* 43313a: sub esp, 0xb4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xb4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 433140: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 433145: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 433148: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 433149: mov dword ptr [esp + 0xb4], eax */
  W32((uint32_t)(esp + 0xb4u), eax);
/* 433150: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 433153: cmp eax, 0xc000008e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc000008eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433158: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 433159: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 43315a: mov ecx, 0xc00002b4 */
  ecx = 0xc00002b4u;
/* 43315f: mov edx, 0xc00002b5 */
  edx = 0xc00002b5u;
/* 433164: je 0x43318a */
  if (zf) goto L_43318a;
L_433166: /* 433166: cmp eax, 0xc000008f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc000008fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43316b: je 0x43318a */
  if (zf) goto L_43318a;
L_43316d: /* 43316d: cmp eax, 0xc0000090 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc0000090u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433172: je 0x43318a */
  if (zf) goto L_43318a;
L_433174: /* 433174: cmp eax, 0xc0000091 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc0000091u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433179: je 0x43318a */
  if (zf) goto L_43318a;
L_43317b: /* 43317b: cmp eax, 0xc0000093 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc0000093u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433180: je 0x43318a */
  if (zf) goto L_43318a;
L_433182: /* 433182: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433184: je 0x43318a */
  if (zf) goto L_43318a;
L_433186: /* 433186: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433188: jne 0x4331d8 */
  if (!zf) goto L_4331d8;
L_43318a: /* 43318a: fninit  */
  fpu_init();
/* 43318c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43318e: je 0x43370f */
  if (zf) goto L_43370f;
L_433194: /* 433194: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433196: je 0x43370f */
  if (zf) goto L_43370f;
L_43319c: /* 43319c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 43319f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4331a1: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 4331a4: add eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4331a7: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4331a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4331ab: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 4331af: lea ebx, [ecx + 0x1c] */
  ebx = (uint32_t)(ecx + 0x1cu);
/* 4331b2: je 0x4331cb */
  if (zf) goto L_4331cb;
L_4331b4: /* 4331b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4331b5: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0x4331b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4331b8: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4331bb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4331bc: jne 0x43371e */
  if (!zf) goto L_43371e;
L_4331c2: /* 4331c2: and byte ptr [ebx + 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebx + 0x4u), r);
  }
/* 4331c6: jmp 0x43371e */
  goto L_43371e;
L_4331cb: /* 4331cb: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* 4331ce: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 4331d0: and cl, 0xf8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xf8u);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4331d3: cmp cl, 0xd8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xd8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4331d6: je 0x4331df */
  if (zf) goto L_4331df;
L_4331d8: /* 4331d8: xor eax, eax */
  eax = 0;
/* 4331da: jmp 0x43371e */
  goto L_43371e;
L_4331df: /* 4331df: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 4331e2: mov word ptr [esp + 0x14], ax */
  W16((uint32_t)(esp + 0x14u), (eax & 0xffffu));
/* 4331e7: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 4331eb: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 4331ef: mov eax, 0xc000 */
  eax = 0xc000u;
/* 4331f4: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4331f6: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4331f8: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4331fc: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* 4331fe: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 433200: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 433203: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 433205: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 433206: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 433208: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 43320c: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 43320f: and eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 433212: shl ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 433215: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 433217: lea eax, [ecx*4 + 0x44e3f0] */
  eax = (uint32_t)(ecx*4 + 0x44e3f0u);
/* 43321e: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 433222: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 433224: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 433227: xor eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 433229: and eax, 0x1ffe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1ffe0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 43322e: xor esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  esi = r;
  }
/* 433230: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* 433234: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 433236: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 433239: mov edx, eax */
  edx = eax;
/* 43323b: mov edi, 0xc00 */
  edi = 0xc00u;
/* 433240: and edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* 433242: je 0x43326d */
  if (zf) goto L_43326d;
L_433244: /* 433244: cmp edx, 0x400 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43324a: je 0x433265 */
  if (zf) goto L_433265;
L_43324c: /* 43324c: cmp edx, 0x800 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433252: je 0x43325d */
  if (zf) goto L_43325d;
L_433254: /* 433254: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433256: jne 0x433274 */
  if (!zf) goto L_433274;
L_433258: /* 433258: or esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 43325b: jmp 0x433270 */
  goto L_433270;
L_43325d: /* 43325d: and esi, 0xfffffffe */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 433260: or esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 433263: jmp 0x433270 */
  goto L_433270;
L_433265: /* 433265: and esi, 0xfffffffd */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffdu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 433268: or esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 43326b: jmp 0x433270 */
  goto L_433270;
L_43326d: /* 43326d: and esi, 0xfffffffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
L_433270: /* 433270: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
L_433274: /* 433274: mov edx, eax */
  edx = eax;
/* 433276: mov edi, 0x300 */
  edi = 0x300u;
/* 43327b: and edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edx = r;
  }
/* 43327d: je 0x433298 */
  if (zf) goto L_433298;
L_43327f: /* 43327f: cmp edx, 0x200 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433285: je 0x433290 */
  if (zf) goto L_433290;
L_433287: /* 433287: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433289: jne 0x4332a2 */
  if (!zf) goto L_4332a2;
L_43328b: /* 43328b: and esi, 0xffffffe3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffe3u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 43328e: jmp 0x43329e */
  goto L_43329e;
L_433290: /* 433290: and esi, 0xffffffe7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffe7u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 433293: or esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 433296: jmp 0x43329e */
  goto L_43329e;
L_433298: /* 433298: and esi, 0xffffffeb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffebu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 43329b: or esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_43329e: /* 43329e: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
L_4332a2: /* 4332a2: mov edx, eax */
  edx = eax;
/* 4332a4: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 4332a7: mov esi, eax */
  esi = eax;
/* 4332a9: not edx */
  edx = ~edx;
/* 4332ab: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4332ae: shr esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 4332b1: not esi */
  esi = ~esi;
/* 4332b3: xor edi, edi */
  edi = 0;
/* 4332b5: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 4332b6: and esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 4332b8: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 4332ba: lea esi, [eax + eax] */
  esi = (uint32_t)(eax + eax);
/* 4332bd: not esi */
  esi = ~esi;
/* 4332bf: and esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 4332c2: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 4332c4: mov esi, eax */
  esi = eax;
/* 4332c6: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4332c9: not eax */
  eax = ~eax;
/* 4332cb: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4332ce: shr esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 4332d0: not esi */
  esi = ~esi;
/* 4332d2: and esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 4332d5: or edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 4332d7: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 4332d9: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 4332dd: and eax, 0xffffffe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4332e0: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 4332e2: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* 4332e6: mov eax, ecx */
  eax = ecx;
/* 4332e8: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4332eb: mov edx, ecx */
  edx = ecx;
/* 4332ed: and edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4332f0: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4332f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4332f3: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4332f5: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4332f7: mov edx, ecx */
  edx = ecx;
/* 4332f9: and edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4332fb: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4332fe: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 433300: mov edx, ecx */
  edx = ecx;
/* 433302: and edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 433304: shl edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 433307: and ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 43330a: or edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 43330c: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 433310: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 433312: shl edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 433314: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 433316: mov dl, byte ptr [esp + 0x48] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x48u))) & 0xffu);
/* 43331a: and ecx, 0xffffffe0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffe0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 43331d: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 43331f: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 433322: mov dword ptr [esp + 0x4c], eax */
  W32((uint32_t)(esp + 0x4cu), eax);
/* 433326: je 0x433330 */
  if (zf) goto L_433330;
L_433328: /* 433328: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43332a: je 0x433330 */
  if (zf) goto L_433330;
L_43332c: /* 43332c: mov eax, edi */
  eax = edi;
/* 43332e: jmp 0x433332 */
  goto L_433332;
L_433330: /* 433330: xor eax, eax */
  eax = 0;
L_433332: /* 433332: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 433336: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 433338: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 43333a: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 43333c: test dl, 2 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43333f: je 0x43334c */
  if (zf) goto L_43334c;
L_433341: /* 433341: test byte ptr [esp + 0x4c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x4cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 433346: je 0x43334c */
  if (zf) goto L_43334c;
L_433348: /* 433348: mov eax, edi */
  eax = edi;
/* 43334a: jmp 0x43334e */
  goto L_43334e;
L_43334c: /* 43334c: xor eax, eax */
  eax = 0;
L_43334e: /* 43334e: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 433350: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 433352: and eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 433355: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 433357: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43335a: je 0x433367 */
  if (zf) goto L_433367;
L_43335c: /* 43335c: test byte ptr [esp + 0x4c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x4cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 433361: je 0x433367 */
  if (zf) goto L_433367;
L_433363: /* 433363: mov eax, edi */
  eax = edi;
/* 433365: jmp 0x433369 */
  goto L_433369;
L_433367: /* 433367: xor eax, eax */
  eax = 0;
L_433369: /* 433369: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 43336c: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 43336e: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 433371: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 433373: test dl, 8 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 433376: je 0x433383 */
  if (zf) goto L_433383;
L_433378: /* 433378: test byte ptr [esp + 0x4c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x4cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 43337d: je 0x433383 */
  if (zf) goto L_433383;
L_43337f: /* 43337f: mov eax, edi */
  eax = edi;
/* 433381: jmp 0x433385 */
  goto L_433385;
L_433383: /* 433383: xor eax, eax */
  eax = 0;
L_433385: /* 433385: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 433388: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 43338a: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 43338c: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 43338e: test dl, 0x10 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 433391: je 0x43339e */
  if (zf) goto L_43339e;
L_433393: /* 433393: test byte ptr [esp + 0x4c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x4cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 433398: je 0x43339e */
  if (zf) goto L_43339e;
L_43339a: /* 43339a: mov eax, edi */
  eax = edi;
/* 43339c: jmp 0x4333a0 */
  goto L_4333a0;
L_43339e: /* 43339e: xor eax, eax */
  eax = 0;
L_4333a0: /* 4333a0: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 4333a4: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 4333a7: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 4333a9: and eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4333ac: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 4333ae: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 4333b2: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 4333b6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4333b8: mov eax, ecx */
  eax = ecx;
/* 4333ba: shr eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 12;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4333bd: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4333c0: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4333c2: jne 0x4333ce */
  if (!zf) goto L_4333ce;
L_4333c4: /* 4333c4: mov edx, edi */
  edx = edi;
/* 4333c6: shr edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 4333c9: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4333cc: jmp 0x4333d0 */
  goto L_4333d0;
L_4333ce: /* 4333ce: mov edx, eax */
  edx = eax;
L_4333d0: /* 4333d0: mov eax, ecx */
  eax = ecx;
/* 4333d2: shr eax, 0x11 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 17;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4333d5: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4333d8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4333da: jne 0x4333e6 */
  if (!zf) goto L_4333e6;
L_4333dc: /* 4333dc: mov esi, edi */
  esi = edi;
/* 4333de: shr esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 4333e1: and esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 4333e4: jmp 0x4333e8 */
  goto L_4333e8;
L_4333e6: /* 4333e6: mov esi, eax */
  esi = eax;
L_4333e8: /* 4333e8: mov eax, ecx */
  eax = ecx;
/* 4333ea: shr eax, 0x16 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 22;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4333ed: and eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4333f0: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4333f3: jne 0x433401 */
  if (!zf) goto L_433401;
L_4333f5: /* 4333f5: shr edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* 4333f8: and edi, 7 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* 4333fb: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* 4333ff: jmp 0x433405 */
  goto L_433405;
L_433401: /* 433401: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
L_433405: /* 433405: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 433408: cmp edi, 0xc000008e */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc000008eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43340e: je 0x4335cf */
  if (zf) goto L_4335cf;
L_433414: /* 433414: cmp edi, 0xc000008f */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc000008fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43341a: je 0x43352b */
  if (zf) goto L_43352b;
L_433420: /* 433420: cmp edi, 0xc0000090 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc0000090u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433426: je 0x4335cf */
  if (zf) goto L_4335cf;
L_43342c: /* 43342c: cmp edi, 0xc0000091 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc0000091u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433432: je 0x433440 */
  if (zf) goto L_433440;
L_433434: /* 433434: cmp edi, 0xc0000093 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xc0000093u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43343a: jne 0x433648 */
  if (!zf) goto L_433648;
L_433440: /* 433440: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 433441: call 0x432c6e */
  esp -= 4; W32(esp, 0x433446u); SPILL(); f_432c6e(); if (g_unwind) return; RELOAD();
/* 433446: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 433449: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 43344b: je 0x43352b */
  if (zf) goto L_43352b;
L_433451: /* 433451: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 433452: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 433456: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 433457: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 433458: call 0x432cd1 */
  esp -= 4; W32(esp, 0x43345du); SPILL(); f_432cd1(); if (g_unwind) return; RELOAD();
/* 43345d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 43345f: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 433463: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 433464: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 433465: call 0x432c83 */
  esp -= 4; W32(esp, 0x43346au); SPILL(); f_432c83(); if (g_unwind) return; RELOAD();
/* 43346a: mov esi, eax */
  esi = eax;
/* 43346c: mov eax, dword ptr [esp + 0xb8] */
  eax = R32((uint32_t)(esp + 0xb8u));
/* 433473: lea edi, [esp + 0x4c] */
  edi = (uint32_t)(esp + 0x4cu);
/* 433477: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 433478: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 433479: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 43347c: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 43347f: cmp dword ptr [esp + 0x14], 0xd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433484: movsw word ptr es:[edi], word ptr [esi] */
  W16(edi, R16(esi)); esi += (DF ? -2 : 2); edi += (DF ? -2 : 2);
/* 433486: jne 0x433495 */
  if (!zf) goto L_433495;
L_433488: /* 433488: and eax, 0xffffffe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 43348b: mov dword ptr [esp + 0x18], 0xc0 */
  W32((uint32_t)(esp + 0x18u), 0xc0u);
/* 433493: jmp 0x4334a3 */
  goto L_4334a3;
L_433495: /* 433495: and eax, 0xffffffe3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffe3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 433498: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 43349b: mov dword ptr [esp + 0x18], 0x600 */
  W32((uint32_t)(esp + 0x18u), 0x600u);
L_4334a3: /* 4334a3: cmp dword ptr [ebp + 8], 0xc0000091 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0xc0000091u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4334aa: mov dword ptr [esp + 0xa0], eax */
  W32((uint32_t)(esp + 0xa0u), eax);
/* 4334b1: jne 0x4334b7 */
  if (!zf) goto L_4334b7;
L_4334b3: /* 4334b3: neg dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(0 - a);
  W32((uint32_t)(esp + 0x18u), r);
  }
L_4334b7: /* 4334b7: fild dword ptr [esp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 4334bb: fld xword ptr [esp + 0x34] */
  { double v = F80((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 4334bf: fscale  */
  ST0 = ldexp(ST0, (int)trunc(STI(1)));
/* 4334c1: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 4334c3: fstp xword ptr [esp + 0x34] */
  WF80((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 4334c7: cmp dword ptr [esp + 0x14], 0xd */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u))); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4334cc: jne 0x4334e3 */
  if (!zf) goto L_4334e3;
L_4334ce: /* 4334ce: fld xword ptr [esp + 0x34] */
  { double v = F80((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 4334d2: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4334d6: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 4334da: fstp dword ptr [esp + 0x90] */
  WF32((uint32_t)(esp + 0x90u), ST0); FPOP();
/* 4334e1: jmp 0x4334f6 */
  goto L_4334f6;
L_4334e3: /* 4334e3: fld xword ptr [esp + 0x34] */
  { double v = F80((uint32_t)(esp + 0x34u)); FPUSH(v); }
/* 4334e7: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 4334eb: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 4334ef: fstp qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0); FPOP();
L_4334f6: /* 4334f6: fnclex  */
  FSW_CC = 0;
/* 4334f8: lea eax, [esp + 0x40] */
  eax = (uint32_t)(esp + 0x40u);
/* 4334fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4334fd: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0x433500u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 433500: mov edi, eax */
  edi = eax;
/* 433502: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433505: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 433506: jne 0x43370b */
  if (!zf) goto L_43370b;
L_43350c: /* 43350c: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 433510: push dword ptr [esp + 0x28] */
  { uint32_t v = R32((uint32_t)(esp + 0x28u)); esp -= 4; W32(esp, v); }
/* 433514: call 0x432f37 */
  esp -= 4; W32(esp, 0x433519u); SPILL(); f_432f37(); if (g_unwind) return; RELOAD();
/* 433519: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 43351d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 43351f: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 433522: sar ecx, 0x1d */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 29;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 433525: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 433526: jmp 0x4335b8 */
  goto L_4335b8;
L_43352b: /* 43352b: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 43352e: sar ecx, 0x1d */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 29;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 433531: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 433532: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 433533: call 0x432c52 */
  esp -= 4; W32(esp, 0x433538u); SPILL(); f_432c52(); if (g_unwind) return; RELOAD();
/* 433538: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 433539: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 43353a: mov edi, eax */
  edi = eax;
/* 43353c: call 0x432c52 */
  esp -= 4; W32(esp, 0x433541u); SPILL(); f_432c52(); if (g_unwind) return; RELOAD();
/* 433541: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 433542: push dword ptr [esp + 0x28] */
  { uint32_t v = R32((uint32_t)(esp + 0x28u)); esp -= 4; W32(esp, v); }
/* 433546: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 43354a: call 0x432c52 */
  esp -= 4; W32(esp, 0x43354fu); SPILL(); f_432c52(); if (g_unwind) return; RELOAD();
/* 43354f: mov esi, eax */
  esi = eax;
/* 433551: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 433554: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433556: jne 0x43355b */
  if (!zf) goto L_43355b;
L_433558: /* 433558: push 0x1f */
  { uint32_t v = 0x1fu; esp -= 4; W32(esp, v); }
/* 43355a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_43355b: /* 43355b: cmp dword ptr [esp + 0x18], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43355f: jne 0x433569 */
  if (!zf) goto L_433569;
L_433561: /* 433561: mov dword ptr [esp + 0x18], 0x1f */
  W32((uint32_t)(esp + 0x18u), 0x1fu);
L_433569: /* 433569: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 43356a: lea eax, [esp + 0x94] */
  eax = (uint32_t)(esp + 0x94u);
/* 433571: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 433572: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 433573: call 0x432cd1 */
  esp -= 4; W32(esp, 0x433578u); SPILL(); f_432cd1(); if (g_unwind) return; RELOAD();
/* 433578: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 433579: lea eax, [esp + 0x60] */
  eax = (uint32_t)(esp + 0x60u);
/* 43357d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 43357e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43357f: call 0x432cd1 */
  esp -= 4; W32(esp, 0x433584u); SPILL(); f_432cd1(); if (g_unwind) return; RELOAD();
/* 433584: push dword ptr [esp + 0x30] */
  { uint32_t v = R32((uint32_t)(esp + 0x30u)); esp -= 4; W32(esp, v); }
/* 433588: lea eax, [esp + 0x8c] */
  eax = (uint32_t)(esp + 0x8cu);
/* 43358f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 433590: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 433591: call 0x432cd1 */
  esp -= 4; W32(esp, 0x433596u); SPILL(); f_432cd1(); if (g_unwind) return; RELOAD();
/* 433596: lea eax, [esp + 0x64] */
  eax = (uint32_t)(esp + 0x64u);
/* 43359a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43359b: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0x43359eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 43359e: mov edi, eax */
  edi = eax;
/* 4335a0: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4335a3: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4335a6: jne 0x43370b */
  if (!zf) goto L_43370b;
L_4335ac: /* 4335ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4335ad: push dword ptr [esp + 0x28] */
  { uint32_t v = R32((uint32_t)(esp + 0x28u)); esp -= 4; W32(esp, v); }
/* 4335b1: call 0x432f37 */
  esp -= 4; W32(esp, 0x4335b6u); SPILL(); f_432f37(); if (g_unwind) return; RELOAD();
/* 4335b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
L_4335b8: /* 4335b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4335b9: lea eax, [esp + 0xa0] */
  eax = (uint32_t)(esp + 0xa0u);
/* 4335c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4335c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4335c2: call 0x4330fb */
  esp -= 4; W32(esp, 0x4335c7u); SPILL(); f_4330fb(); if (g_unwind) return; RELOAD();
/* 4335c7: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4335ca: jmp 0x433655 */
  goto L_433655;
L_4335cf: /* 4335cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4335d0: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* 4335d4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4335d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4335d6: call 0x432cd1 */
  esp -= 4; W32(esp, 0x4335dbu); SPILL(); f_432cd1(); if (g_unwind) return; RELOAD();
/* 4335db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4335dc: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* 4335e3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4335e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4335e5: call 0x432cd1 */
  esp -= 4; W32(esp, 0x4335eau); SPILL(); f_432cd1(); if (g_unwind) return; RELOAD();
/* 4335ea: push dword ptr [esp + 0x2c] */
  { uint32_t v = R32((uint32_t)(esp + 0x2cu)); esp -= 4; W32(esp, v); }
/* 4335ee: lea eax, [esp + 0xac] */
  eax = (uint32_t)(esp + 0xacu);
/* 4335f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4335f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4335f7: call 0x432cd1 */
  esp -= 4; W32(esp, 0x4335fcu); SPILL(); f_432cd1(); if (g_unwind) return; RELOAD();
/* 4335fc: and dword ptr [esp + 0xc4], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xc4u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esp + 0xc4u), r);
  }
/* 433604: lea eax, [esp + 0x64] */
  eax = (uint32_t)(esp + 0x64u);
/* 433608: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 433609: call dword ptr [ebp + 0x10] */
  { uint32_t t = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, 0x43360cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 43360c: mov edi, eax */
  edi = eax;
/* 43360e: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 433611: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 433614: jne 0x43370b */
  if (!zf) goto L_43370b;
L_43361a: /* 43361a: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 43361e: push dword ptr [esp + 0x28] */
  { uint32_t v = R32((uint32_t)(esp + 0x28u)); esp -= 4; W32(esp, v); }
/* 433622: call 0x432f37 */
  esp -= 4; W32(esp, 0x433627u); SPILL(); f_432f37(); if (g_unwind) return; RELOAD();
/* 433627: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 43362b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 43362d: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 433630: sar ecx, 0x1d */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 29;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 433633: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 433634: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 433635: lea eax, [esp + 0xa0] */
  eax = (uint32_t)(esp + 0xa0u);
/* 43363c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 43363d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 43363e: call 0x4330fb */
  esp -= 4; W32(esp, 0x433643u); SPILL(); f_4330fb(); if (g_unwind) return; RELOAD();
/* 433643: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 433646: jmp 0x43364c */
  goto L_43364c;
L_433648: /* 433648: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
L_43364c: /* 43364c: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 43364f: jne 0x43370b */
  if (!zf) goto L_43370b;
L_433655: /* 433655: and byte ptr [ebx + 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebx + 0x4u), r);
  }
/* 433659: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 43365d: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 43365f: mov eax, edx */
  eax = edx;
/* 433661: and eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 433664: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 433667: je 0x433696 */
  if (zf) goto L_433696;
L_433669: /* 433669: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 43366a: je 0x433688 */
  if (zf) goto L_433688;
L_43366c: /* 43366c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 43366d: je 0x43367a */
  if (zf) goto L_43367a;
L_43366f: /* 43366f: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 433670: jne 0x43369c */
  if (!zf) goto L_43369c;
L_433672: /* 433672: or ecx, 0xc00 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xc00u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 433678: jmp 0x43369c */
  goto L_43369c;
L_43367a: /* 43367a: and ecx, 0xfffffbff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffbffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 433680: or ecx, 0x800 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 433686: jmp 0x43369c */
  goto L_43369c;
L_433688: /* 433688: and ecx, 0xfffff7ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffff7ffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 43368e: or ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 433694: jmp 0x43369c */
  goto L_43369c;
L_433696: /* 433696: and ecx, 0xfffff3ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffff3ffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
L_43369c: /* 43369c: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 43369f: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 4336a2: sub edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edx = r;
  }
/* 4336a5: je 0x4336c3 */
  if (zf) goto L_4336c3;
L_4336a7: /* 4336a7: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 4336a8: je 0x4336b5 */
  if (zf) goto L_4336b5;
L_4336aa: /* 4336aa: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* 4336ab: jne 0x4336c9 */
  if (!zf) goto L_4336c9;
L_4336ad: /* 4336ad: and ecx, 0xfffffcff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffcffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4336b3: jmp 0x4336c9 */
  goto L_4336c9;
L_4336b5: /* 4336b5: and ecx, 0xfffffeff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffeffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4336bb: or ecx, 0x200 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 4336c1: jmp 0x4336c9 */
  goto L_4336c9;
L_4336c3: /* 4336c3: or ecx, 0x300 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x300u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_4336c9: /* 4336c9: mov al, byte ptr [esp + 0x48] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x48u))) & 0xffu);
/* 4336cd: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4336cf: je 0x4336d6 */
  if (zf) goto L_4336d6;
L_4336d1: /* 4336d1: and ecx, 0xffffffdf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffdfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4336d4: jmp 0x4336d9 */
  goto L_4336d9;
L_4336d6: /* 4336d6: or ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_4336d9: /* 4336d9: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4336db: je 0x4336e2 */
  if (zf) goto L_4336e2;
L_4336dd: /* 4336dd: and ecx, 0xffffffef */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffefu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4336e0: jmp 0x4336e5 */
  goto L_4336e5;
L_4336e2: /* 4336e2: or ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_4336e5: /* 4336e5: test al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4336e7: je 0x4336ee */
  if (zf) goto L_4336ee;
L_4336e9: /* 4336e9: and ecx, 0xfffffff7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffff7u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4336ec: jmp 0x4336f1 */
  goto L_4336f1;
L_4336ee: /* 4336ee: or ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_4336f1: /* 4336f1: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4336f3: je 0x4336fa */
  if (zf) goto L_4336fa;
L_4336f5: /* 4336f5: and ecx, 0xfffffffb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 4336f8: jmp 0x4336fd */
  goto L_4336fd;
L_4336fa: /* 4336fa: or ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_4336fd: /* 4336fd: test al, 0x10 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4336ff: je 0x433706 */
  if (zf) goto L_433706;
L_433701: /* 433701: and ecx, 0xfffffffe */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 433704: jmp 0x433709 */
  goto L_433709;
L_433706: /* 433706: or ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_433709: /* 433709: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
L_43370b: /* 43370b: mov eax, edi */
  eax = edi;
/* 43370d: jmp 0x43371e */
  goto L_43371e;
L_43370f: /* 43370f: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 433712: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 433715: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 433716: call 0x4358a3 */
  esp -= 4; W32(esp, 0x43371bu); SPILL(); f_4358a3(); if (g_unwind) return; RELOAD();
/* 43371b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_43371e: /* 43371e: mov ecx, dword ptr [esp + 0xbc] */
  ecx = R32((uint32_t)(esp + 0xbcu));
/* 433725: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 433728: call 0x4013ab */
  esp -= 4; W32(esp, 0x43372du); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 43372d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 43372e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 43372f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 433730: mov esp, ebp */
  esp = ebp;
/* 433732: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 433733: ret  */
  esp += 4; SPILL(); return;
}
