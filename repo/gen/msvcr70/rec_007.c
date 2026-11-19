#include "recomp.h"
#include "rec_mod.h"

void f_41d879(void) {
  LOAD_REGS();
L_41d879: /* 41d879: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41d87a: mov ebp, esp */
  ebp = esp;
/* 41d87c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41d87f: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41d884: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 41d887: sub eax, 0x58 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 41d88a: je 0x41d8f3 */
  if (zf) goto L_41d8f3;
L_41d88c: /* 41d88c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 41d88d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 41d88e: je 0x41d8ec */
  if (zf) goto L_41d8ec;
L_41d890: /* 41d890: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41d893: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d894: call 0x41d49d */
  esp -= 4; W32(esp, 0x41d899u); SPILL(); f_41d49d(); if (g_unwind) return; RELOAD();
/* 41d899: test byte ptr [ebp - 4], 0xf */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41d89d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41d89e: jne 0x41d8de */
  if (!zf) goto L_41d8de;
L_41d8a0: /* 41d8a0: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41d8a5: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41d8a7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41d8a9: je 0x41d8de */
  if (zf) goto L_41d8de;
L_41d8ab: /* 41d8ab: cmp al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d8ad: je 0x41d8d8 */
  if (zf) goto L_41d8d8;
L_41d8af: /* 41d8af: cmp al, 0x5a */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d8b1: je 0x41d8bf */
  if (zf) goto L_41d8bf;
L_41d8b3: /* 41d8b3: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41d8b6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41d8b8: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x41d8bdu); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
/* 41d8bd: jmp 0x41d906 */
  goto L_41d906;
L_41d8bf: /* 41d8bf: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41d8c5: push 0x440528 */
  { uint32_t v = 0x440528u; esp -= 4; W32(esp, v); }
/* 41d8ca: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41d8cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d8ce: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d8d1: call 0x41d685 */
  esp -= 4; W32(esp, 0x41d8d6u); SPILL(); f_41d685(); if (g_unwind) return; RELOAD();
/* 41d8d6: jmp 0x41d8e1 */
  goto L_41d8e1;
L_41d8d8: /* 41d8d8: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
L_41d8de: /* 41d8de: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
L_41d8e1: /* 41d8e1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41d8e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d8e5: call 0x41c766 */
  esp -= 4; W32(esp, 0x41d8eau); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41d8ea: jmp 0x41d906 */
  goto L_41d906;
L_41d8ec: /* 41d8ec: push 0x43e8f0 */
  { uint32_t v = 0x43e8f0u; esp -= 4; W32(esp, v); }
/* 41d8f1: jmp 0x41d8f8 */
  goto L_41d8f8;
L_41d8f3: /* 41d8f3: push 0x440520 */
  { uint32_t v = 0x440520u; esp -= 4; W32(esp, v); }
L_41d8f8: /* 41d8f8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41d8fb: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41d901: call 0x41cfdc */
  esp -= 4; W32(esp, 0x41d906u); SPILL(); f_41cfdc(); if (g_unwind) return; RELOAD();
L_41d906: /* 41d906: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41d909: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41d90a: ret  */
  esp += 4; SPILL(); return;
}

void f_41d90b(void) {
  LOAD_REGS();
L_41d90b: /* 41d90b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41d90c: mov ebp, esp */
  ebp = esp;
/* 41d90e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41d911: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41d916: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41d918: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41d91a: je 0x41d95d */
  if (zf) goto L_41d95d;
L_41d91c: /* 41d91c: cmp al, 0x5a */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d91e: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41d921: jne 0x41d93e */
  if (!zf) goto L_41d93e;
L_41d923: /* 41d923: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41d926: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41d92c: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 41d930: and word ptr [ebp - 4], 0xfe00 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)(0xfe00u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41d936: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d937: call 0x41c766 */
  esp -= 4; W32(esp, 0x41d93cu); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41d93c: jmp 0x41d983 */
  goto L_41d983;
L_41d93e: /* 41d93e: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 41d940: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41d943: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d944: call 0x41d879 */
  esp -= 4; W32(esp, 0x41d949u); SPILL(); f_41d879(); if (g_unwind) return; RELOAD();
/* 41d949: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d94a: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41d94d: push 0x440530 */
  { uint32_t v = 0x440530u; esp -= 4; W32(esp, v); }
/* 41d952: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d953: call 0x41d624 */
  esp -= 4; W32(esp, 0x41d958u); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 41d958: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41d95b: jmp 0x41d97c */
  goto L_41d97c;
L_41d95d: /* 41d95d: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 41d95f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41d962: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41d965: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41d967: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d968: push 0x440530 */
  { uint32_t v = 0x440530u; esp -= 4; W32(esp, v); }
/* 41d96d: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d970: call 0x41cfdc */
  esp -= 4; W32(esp, 0x41d975u); SPILL(); f_41cfdc(); if (g_unwind) return; RELOAD();
/* 41d975: mov ecx, eax */
  ecx = eax;
/* 41d977: call 0x41d1a5 */
  esp -= 4; W32(esp, 0x41d97cu); SPILL(); f_41d1a5(); if (g_unwind) return; RELOAD();
L_41d97c: /* 41d97c: mov ecx, eax */
  ecx = eax;
/* 41d97e: call 0x41d646 */
  esp -= 4; W32(esp, 0x41d983u); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
L_41d983: /* 41d983: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41d986: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41d987: ret  */
  esp += 4; SPILL(); return;
}

void f_41d988(void) {
  LOAD_REGS();
L_41d988: /* 41d988: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41d989: mov ebp, esp */
  ebp = esp;
/* 41d98b: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41d98e: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41d993: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41d996: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41d997: je 0x41daa1 */
  if (zf) goto L_41daa1;
L_41d99d: /* 41d99d: call 0x41c234 */
  esp -= 4; W32(esp, 0x41d9a2u); SPILL(); f_41c234(); if (g_unwind) return; RELOAD();
/* 41d9a2: mov edi, eax */
  edi = eax;
/* 41d9a4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 41d9a6: jge 0x41d9ac */
  if ((sf == of)) goto L_41d9ac;
L_41d9a8: /* 41d9a8: xor edi, edi */
  edi = 0;
/* 41d9aa: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_41d9ac: /* 41d9ac: jne 0x41d9e3 */
  if (!zf) goto L_41d9e3;
L_41d9ae: /* 41d9ae: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41d9b1: push 0x5d */
  { uint32_t v = 0x5du; esp -= 4; W32(esp, v); }
/* 41d9b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d9b4: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
L_41d9b7: /* 41d9b7: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41d9b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d9ba: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 41d9bd: push 0x5b */
  { uint32_t v = 0x5bu; esp -= 4; W32(esp, v); }
/* 41d9bf: call 0x41cfb7 */
  esp -= 4; W32(esp, 0x41d9c4u); SPILL(); f_41cfb7(); if (g_unwind) return; RELOAD();
L_41d9c4: /* 41d9c4: mov ecx, eax */
  ecx = eax;
/* 41d9c6: call 0x41d1a5 */
  esp -= 4; W32(esp, 0x41d9cbu); SPILL(); f_41d1a5(); if (g_unwind) return; RELOAD();
/* 41d9cb: mov ecx, eax */
  ecx = eax;
/* 41d9cd: call 0x41d646 */
  esp -= 4; W32(esp, 0x41d9d2u); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41d9d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41d9d3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41d9d6: call 0x42072f */
  esp -= 4; W32(esp, 0x41d9dbu); SPILL(); f_42072f(); if (g_unwind) return; RELOAD();
/* 41d9db: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41d9dc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41d9dd: /* 41d9dd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41d9e0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41d9e1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41d9e2: ret  */
  esp += 4; SPILL(); return;
L_41d9e3: /* 41d9e3: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 41d9e7: and word ptr [ebp - 4], 0xfe00 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)(0xfe00u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41d9ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41d9ee: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 41d9f1: test byte ptr [esi + 4], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41d9f5: je 0x41da04 */
  if (zf) goto L_41da04;
L_41d9f7: /* 41d9f7: push 0x4403f4 */
  { uint32_t v = 0x4403f4u; esp -= 4; W32(esp, v); }
/* 41d9fc: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41d9ff: call 0x41d431 */
  esp -= 4; W32(esp, 0x41da04u); SPILL(); f_41d431(); if (g_unwind) return; RELOAD();
L_41da04: /* 41da04: push 0x5d */
  { uint32_t v = 0x5du; esp -= 4; W32(esp, v); }
/* 41da06: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41da09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41da0a: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41da0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41da0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41da10: call 0x41d6c4 */
  esp -= 4; W32(esp, 0x41da15u); SPILL(); f_41d6c4(); if (g_unwind) return; RELOAD();
/* 41da15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41da16: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 41da19: push 0x5b */
  { uint32_t v = 0x5bu; esp -= 4; W32(esp, v); }
/* 41da1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41da1c: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x41da21u); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 41da21: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41da24: mov ecx, eax */
  ecx = eax;
/* 41da26: call 0x41d646 */
  esp -= 4; W32(esp, 0x41da2bu); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41da2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41da2c: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41da2f: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41da34u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41da34: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 41da35: jne 0x41da04 */
  if (!zf) goto L_41da04;
L_41da37: /* 41da37: mov ecx, esi */
  ecx = esi;
/* 41da39: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41da3eu); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41da3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41da40: jne 0x41da7c */
  if (!zf) goto L_41da7c;
L_41da42: /* 41da42: test byte ptr [esi + 4], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41da46: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41da49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41da4a: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 41da4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41da4e: jne 0x41da6e */
  if (!zf) goto L_41da6e;
L_41da50: /* 41da50: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 41da52: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41da55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41da56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41da57: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41da5a: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 41da5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41da5d: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x41da62u); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 41da62: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41da65: mov ecx, eax */
  ecx = eax;
/* 41da67: call 0x41d646 */
  esp -= 4; W32(esp, 0x41da6cu); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41da6c: mov ecx, eax */
  ecx = eax;
L_41da6e: /* 41da6e: call 0x41d364 */
  esp -= 4; W32(esp, 0x41da73u); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41da73: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41da76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41da77: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41da7cu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_41da7c: /* 41da7c: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41da7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41da80: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41da83: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41da84: call 0x420aa2 */
  esp -= 4; W32(esp, 0x41da89u); SPILL(); f_420aa2(); if (g_unwind) return; RELOAD();
/* 41da89: or byte ptr [ebp - 0xc], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff4u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 41da8d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41da8e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41da8f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41da92: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41da95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41da96: call 0x41c766 */
  esp -= 4; W32(esp, 0x41da9bu); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41da9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41da9c: jmp 0x41d9dd */
  goto L_41d9dd;
L_41daa1: /* 41daa1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 41daa4: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41daa9u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41daa9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41daab: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 41daae: push 0x5d */
  { uint32_t v = 0x5du; esp -= 4; W32(esp, v); }
/* 41dab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dab1: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41dab4: jne 0x41d9b7 */
  if (!zf) goto L_41d9b7;
L_41daba: /* 41daba: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41dabc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dabd: push 0x440538 */
  { uint32_t v = 0x440538u; esp -= 4; W32(esp, v); }
/* 41dac2: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41dac5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dac6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41dac7: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41daca: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 41dacc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dacd: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x41dad2u); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 41dad2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41dad5: mov ecx, eax */
  ecx = eax;
/* 41dad7: call 0x41d685 */
  esp -= 4; W32(esp, 0x41dadcu); SPILL(); f_41d685(); if (g_unwind) return; RELOAD();
/* 41dadc: jmp 0x41d9c4 */
  goto L_41d9c4;
}

void f_41dae1(void) {
  LOAD_REGS();
L_41dae1: /* 41dae1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41dae2: mov ebp, esp */
  ebp = esp;
/* 41dae4: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41dae7: push 0x27 */
  { uint32_t v = 0x27u; esp -= 4; W32(esp, v); }
/* 41dae9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41daec: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41daef: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41daf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41daf2: call 0x41d6c4 */
  esp -= 4; W32(esp, 0x41daf7u); SPILL(); f_41d6c4(); if (g_unwind) return; RELOAD();
/* 41daf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41daf8: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41dafb: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 41dafd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dafe: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x41db03u); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 41db03: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41db06: mov ecx, eax */
  ecx = eax;
/* 41db08: call 0x41d646 */
  esp -= 4; W32(esp, 0x41db0du); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41db0d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41db10: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41db11: ret  */
  esp += 4; SPILL(); return;
}

void f_41db12(void) {
  LOAD_REGS();
L_41db12: /* 41db12: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41db13: mov ebp, esp */
  ebp = esp;
/* 41db15: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41db18: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41db1b: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41db1e: call 0x41c766 */
  esp -= 4; W32(esp, 0x41db23u); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41db23: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41db26: call 0x41ca50 */
  esp -= 4; W32(esp, 0x41db2bu); SPILL(); f_41ca50(); if (g_unwind) return; RELOAD();
/* 41db2b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41db2d: je 0x41dc4b */
  if (zf) goto L_41dc4b;
L_41db33: /* 41db33: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41db38: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41db3b: je 0x41dc4b */
  if (zf) goto L_41dc4b;
L_41db41: /* 41db41: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41db44: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41db45: call 0x41c934 */
  esp -= 4; W32(esp, 0x41db4au); SPILL(); f_41c934(); if (g_unwind) return; RELOAD();
/* 41db4a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41db4b: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41db4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41db4f: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41db52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41db53: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 41db55: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41db58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41db59: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41db5c: call 0x41d646 */
  esp -= 4; W32(esp, 0x41db61u); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41db61: mov ecx, eax */
  ecx = eax;
/* 41db63: call 0x41d364 */
  esp -= 4; W32(esp, 0x41db68u); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41db68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41db69: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41db6c: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41db71u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41db71: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41db74: call 0x41ca50 */
  esp -= 4; W32(esp, 0x41db79u); SPILL(); f_41ca50(); if (g_unwind) return; RELOAD();
/* 41db79: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41db7b: je 0x41dc72 */
  if (zf) goto L_41dc72;
L_41db81: /* 41db81: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41db86: cmp byte ptr [eax], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41db89: je 0x41dc43 */
  if (zf) goto L_41dc43;
L_41db8f: /* 41db8f: push 0x4404cc */
  { uint32_t v = 0x4404ccu; esp -= 4; W32(esp, v); }
/* 41db94: jmp 0x41dbfb */
  goto L_41dbfb;
L_41db96: /* 41db96: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41db9b: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41db9d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41db9f: je 0x41dc0f */
  if (zf) goto L_41dc0f;
L_41dba1: /* 41dba1: cmp al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41dba3: je 0x41dc0f */
  if (zf) goto L_41dc0f;
L_41dba5: /* 41dba5: push 0x27 */
  { uint32_t v = 0x27u; esp -= 4; W32(esp, v); }
/* 41dba7: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41dbaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dbab: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41dbae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dbaf: call 0x41f842 */
  esp -= 4; W32(esp, 0x41dbb4u); SPILL(); f_41f842(); if (g_unwind) return; RELOAD();
/* 41dbb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dbb5: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41dbb8: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 41dbba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dbbb: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x41dbc0u); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 41dbc0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41dbc3: mov ecx, eax */
  ecx = eax;
/* 41dbc5: call 0x41d646 */
  esp -= 4; W32(esp, 0x41dbcau); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41dbca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dbcb: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41dbce: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41dbd3u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41dbd3: mov edx, dword ptr [0x44f478] */
  edx = R32((uint32_t)(0x44f478u));
/* 41dbd9: cmp byte ptr [edx], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41dbdc: jne 0x41dbe5 */
  if (!zf) goto L_41dbe5;
L_41dbde: /* 41dbde: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 41dbdf: mov dword ptr [0x44f478], edx */
  W32((uint32_t)(0x44f478u), edx);
L_41dbe5: /* 41dbe5: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41dbe8: call 0x41ca50 */
  esp -= 4; W32(esp, 0x41dbedu); SPILL(); f_41ca50(); if (g_unwind) return; RELOAD();
/* 41dbed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41dbef: je 0x41dc03 */
  if (zf) goto L_41dc03;
L_41dbf1: /* 41dbf1: cmp byte ptr [edx], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41dbf4: je 0x41dc03 */
  if (zf) goto L_41dc03;
L_41dbf6: /* 41dbf6: push 0x44053c */
  { uint32_t v = 0x44053cu; esp -= 4; W32(esp, v); }
L_41dbfb: /* 41dbfb: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41dbfe: call 0x41d431 */
  esp -= 4; W32(esp, 0x41dc03u); SPILL(); f_41d431(); if (g_unwind) return; RELOAD();
L_41dc03: /* 41dc03: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41dc06: call 0x41ca50 */
  esp -= 4; W32(esp, 0x41dc0bu); SPILL(); f_41ca50(); if (g_unwind) return; RELOAD();
/* 41dc0b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41dc0d: jne 0x41db96 */
  if (!zf) goto L_41db96;
L_41dc0f: /* 41dc0f: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41dc12: call 0x41ca50 */
  esp -= 4; W32(esp, 0x41dc17u); SPILL(); f_41ca50(); if (g_unwind) return; RELOAD();
/* 41dc17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41dc19: je 0x41dc39 */
  if (zf) goto L_41dc39;
L_41dc1b: /* 41dc1b: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41dc20: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41dc23: jne 0x41dc2f */
  if (!zf) goto L_41dc2f;
L_41dc25: /* 41dc25: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41dc27: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41dc2a: call 0x41ce96 */
  esp -= 4; W32(esp, 0x41dc2fu); SPILL(); f_41ce96(); if (g_unwind) return; RELOAD();
L_41dc2f: /* 41dc2f: push 0x7d */
  { uint32_t v = 0x7du; esp -= 4; W32(esp, v); }
/* 41dc31: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41dc34: call 0x41d3c7 */
  esp -= 4; W32(esp, 0x41dc39u); SPILL(); f_41d3c7(); if (g_unwind) return; RELOAD();
L_41dc39: /* 41dc39: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41dc3e: cmp byte ptr [eax], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41dc41: jne 0x41dc72 */
  if (!zf) goto L_41dc72;
L_41dc43: /* 41dc43: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41dc49: jmp 0x41dc72 */
  goto L_41dc72;
L_41dc4b: /* 41dc4b: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41dc4e: call 0x41ca50 */
  esp -= 4; W32(esp, 0x41dc53u); SPILL(); f_41ca50(); if (g_unwind) return; RELOAD();
/* 41dc53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41dc55: je 0x41dc72 */
  if (zf) goto L_41dc72;
L_41dc57: /* 41dc57: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41dc5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dc5b: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41dc5e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41dc60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dc61: call 0x41d602 */
  esp -= 4; W32(esp, 0x41dc66u); SPILL(); f_41d602(); if (g_unwind) return; RELOAD();
/* 41dc66: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41dc69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dc6a: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41dc6d: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41dc72u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_41dc72: /* 41dc72: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41dc75: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41dc78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dc79: call 0x41c766 */
  esp -= 4; W32(esp, 0x41dc7eu); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41dc7e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41dc81: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41dc82: ret  */
  esp += 4; SPILL(); return;
}

void f_41dc83(void) {
  LOAD_REGS();
L_41dc83: /* 41dc83: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41dc84: mov ebp, esp */
  ebp = esp;
/* 41dc86: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41dc89: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41dc8c: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41dc8f: call 0x41cfdc */
  esp -= 4; W32(esp, 0x41dc94u); SPILL(); f_41cfdc(); if (g_unwind) return; RELOAD();
/* 41dc94: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41dc99: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41dc9b: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41dca1: cmp al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41dca3: jne 0x41dd14 */
  if (!zf) goto L_41dd14;
L_41dca5: /* 41dca5: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41dcaa: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41dcac: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41dcb2: cmp al, 0x5f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41dcb4: jne 0x41dd14 */
  if (!zf) goto L_41dd14;
L_41dcb6: /* 41dcb6: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41dcbc: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41dcbf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41dcc1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dcc2: call 0x41d6c4 */
  esp -= 4; W32(esp, 0x41dcc7u); SPILL(); f_41d6c4(); if (g_unwind) return; RELOAD();
/* 41dcc7: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41dcca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41dccc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dccd: call 0x41d6c4 */
  esp -= 4; W32(esp, 0x41dcd2u); SPILL(); f_41d6c4(); if (g_unwind) return; RELOAD();
/* 41dcd2: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41dcd7: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41dcd9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41dcdc: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41dcde: je 0x41dcf6 */
  if (zf) goto L_41dcf6;
L_41dce0: /* 41dce0: cmp cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41dce3: je 0x41dcf1 */
  if (zf) goto L_41dcf1;
L_41dce5: /* 41dce5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41dce6: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41dceb: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41dced: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41dcef: jne 0x41dce0 */
  if (!zf) goto L_41dce0;
L_41dcf1: /* 41dcf1: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41dcf4: jne 0x41dd00 */
  if (!zf) goto L_41dd00;
L_41dcf6: /* 41dcf6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 41dcf7: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41dcfc: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41dcfe: jmp 0x41dd16 */
  goto L_41dd16;
L_41dd00: /* 41dd00: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41dd03: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41dd04: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41dd09: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41dd0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dd0d: call 0x41c766 */
  esp -= 4; W32(esp, 0x41dd12u); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41dd12: jmp 0x41dd1e */
  goto L_41dd1e;
L_41dd14: /* 41dd14: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
L_41dd16: /* 41dd16: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41dd19: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x41dd1eu); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
L_41dd1e: /* 41dd1e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41dd21: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41dd22: ret  */
  esp += 4; SPILL(); return;
}

void f_41dd23(void) {
  LOAD_REGS();
L_41dd23: /* 41dd23: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41dd24: mov ebp, esp */
  ebp = esp;
/* 41dd26: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41dd27: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41dd28: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41dd2d: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41dd2f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41dd31: jne 0x41dd3f */
  if (!zf) goto L_41dd3f;
L_41dd33: /* 41dd33: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41dd36: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41dd38: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x41dd3du); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
/* 41dd3d: jmp 0x41dd6e */
  goto L_41dd6e;
L_41dd3f: /* 41dd3f: cmp al, 0x3f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41dd41: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41dd43: jne 0x41dd64 */
  if (!zf) goto L_41dd64;
L_41dd45: /* 41dd45: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41dd4b: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41dd4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dd4f: call 0x41d6c4 */
  esp -= 4; W32(esp, 0x41dd54u); SPILL(); f_41d6c4(); if (g_unwind) return; RELOAD();
/* 41dd54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dd55: push 0x2d */
  { uint32_t v = 0x2du; esp -= 4; W32(esp, v); }
/* 41dd57: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41dd5a: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x41dd5fu); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 41dd5f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41dd62: jmp 0x41dd6e */
  goto L_41dd6e;
L_41dd64: /* 41dd64: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41dd67: call 0x41d6c4 */
  esp -= 4; W32(esp, 0x41dd6cu); SPILL(); f_41d6c4(); if (g_unwind) return; RELOAD();
/* 41dd6c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41dd6d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41dd6e: /* 41dd6e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41dd71: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41dd72: ret  */
  esp += 4; SPILL(); return;
}

void f_41dd73(void) {
  LOAD_REGS();
L_41dd73: /* 41dd73: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41dd74: lea ebp, [esp - 0x74] */
  ebp = (uint32_t)(esp + 0xffffff8cu);
/* 41dd78: sub esp, 0xd0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41dd7e: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 41dd83: xor eax, dword ptr [ebp + 0x78] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x78u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 41dd86: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41dd87: mov dword ptr [ebp + 0x70], eax */
  W32((uint32_t)(ebp + 0x70u), eax);
/* 41dd8a: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41dd8f: mov bl, byte ptr [eax] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41dd91: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41dd97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41dd98: movsx esi, bl */
  esi = (uint32_t)(int32_t)(int8_t)((ebx & 0xffu));
/* 41dd9b: cmp esi, 0x44 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41dd9e: jg 0x41deab */
  if ((!zf && sf == of)) goto L_41deab;
L_41dda4: /* 41dda4: je 0x41decc */
  if (zf) goto L_41decc;
L_41ddaa: /* 41ddaa: sub esi, 0 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  esi = r;
  }
/* 41ddad: je 0x41de9e */
  if (zf) goto L_41de9e;
L_41ddb3: /* 41ddb3: sub esi, 0x30 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  esi = r;
  }
/* 41ddb6: je 0x41de91 */
  if (zf) goto L_41de91;
L_41ddbc: /* 41ddbc: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 41ddbd: je 0x41de50 */
  if (zf) goto L_41de50;
L_41ddc3: /* 41ddc3: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 41ddc4: jne 0x41dfe7 */
  if (!zf) goto L_41dfe7;
L_41ddca: /* 41ddca: lea eax, [ebp + 0x68] */
  eax = (uint32_t)(ebp + 0x68u);
/* 41ddcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ddce: call 0x41dd23 */
  esp -= 4; W32(esp, 0x41ddd3u); SPILL(); f_41dd23(); if (g_unwind) return; RELOAD();
/* 41ddd3: lea eax, [ebp + 0x60] */
  eax = (uint32_t)(ebp + 0x60u);
/* 41ddd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ddd7: call 0x41dd23 */
  esp -= 4; W32(esp, 0x41dddcu); SPILL(); f_41dd23(); if (g_unwind) return; RELOAD();
/* 41dddc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41dddd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41ddde: lea ecx, [ebp + 0x68] */
  ecx = (uint32_t)(ebp + 0x68u);
/* 41dde1: call 0x41ca50 */
  esp -= 4; W32(esp, 0x41dde6u); SPILL(); f_41ca50(); if (g_unwind) return; RELOAD();
/* 41dde6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41dde8: je 0x41dea4 */
  if (zf) goto L_41dea4;
L_41ddee: /* 41ddee: lea ecx, [ebp + 0x60] */
  ecx = (uint32_t)(ebp + 0x60u);
/* 41ddf1: call 0x41ca50 */
  esp -= 4; W32(esp, 0x41ddf6u); SPILL(); f_41ca50(); if (g_unwind) return; RELOAD();
/* 41ddf6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41ddf8: je 0x41dea4 */
  if (zf) goto L_41dea4;
L_41ddfe: /* 41ddfe: push 0x64 */
  { uint32_t v = 0x64u; esp -= 4; W32(esp, v); }
/* 41de00: lea eax, [ebp - 0x5b] */
  eax = (uint32_t)(ebp + 0xffffffa5u);
/* 41de03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41de04: lea ecx, [ebp + 0x68] */
  ecx = (uint32_t)(ebp + 0x68u);
/* 41de07: call 0x41caed */
  esp -= 4; W32(esp, 0x41de0cu); SPILL(); f_41caed(); if (g_unwind) return; RELOAD();
/* 41de0c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41de0e: je 0x41dfe7 */
  if (zf) goto L_41dfe7;
L_41de14: /* 41de14: mov al, byte ptr [ebp - 0x5b] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffa5u))) & 0xffu);
/* 41de17: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41de19: mov byte ptr [ebp - 0x5c], al */
  W8((uint32_t)(ebp + 0xffffffa4u), (eax & 0xffu));
/* 41de1c: jne 0x41de2a */
  if (!zf) goto L_41de2a;
L_41de1e: /* 41de1e: mov al, byte ptr [ebp - 0x5a] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffa6u))) & 0xffu);
/* 41de21: mov byte ptr [ebp - 0x5b], al */
  W8((uint32_t)(ebp + 0xffffffa5u), (eax & 0xffu));
/* 41de24: mov byte ptr [ebp - 0x5a], 0x2e */
  W8((uint32_t)(ebp + 0xffffffa6u), 0x2eu);
/* 41de28: jmp 0x41de2e */
  goto L_41de2e;
L_41de2a: /* 41de2a: mov byte ptr [ebp - 0x5b], 0x2e */
  W8((uint32_t)(ebp + 0xffffffa5u), 0x2eu);
L_41de2e: /* 41de2e: lea eax, [ebp + 0x60] */
  eax = (uint32_t)(ebp + 0x60u);
/* 41de31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41de32: push dword ptr [ebp + 0x7c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x7cu)); esp -= 4; W32(esp, v); }
/* 41de35: lea eax, [ebp + 0x28] */
  eax = (uint32_t)(ebp + 0x28u);
/* 41de38: push 0x65 */
  { uint32_t v = 0x65u; esp -= 4; W32(esp, v); }
/* 41de3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41de3b: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 41de3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41de3f: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 41de42: call 0x41cfdc */
  esp -= 4; W32(esp, 0x41de47u); SPILL(); f_41cfdc(); if (g_unwind) return; RELOAD();
/* 41de47: mov ecx, eax */
  ecx = eax;
/* 41de49: call 0x41d646 */
  esp -= 4; W32(esp, 0x41de4eu); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41de4e: jmp 0x41de85 */
  goto L_41de85;
L_41de50: /* 41de50: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41de55: cmp byte ptr [eax], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41de58: jne 0x41de6a */
  if (!zf) goto L_41de6a;
L_41de5a: /* 41de5a: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41de60: push 0x440558 */
  { uint32_t v = 0x440558u; esp -= 4; W32(esp, v); }
/* 41de65: jmp 0x41df04 */
  goto L_41df04;
L_41de6a: /* 41de6a: lea eax, [ebp + 0x38] */
  eax = (uint32_t)(ebp + 0x38u);
/* 41de6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41de6e: call 0x41f687 */
  esp -= 4; W32(esp, 0x41de73u); SPILL(); f_41f687(); if (g_unwind) return; RELOAD();
/* 41de73: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41de74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41de75: push dword ptr [ebp + 0x7c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x7cu)); esp -= 4; W32(esp, v); }
/* 41de78: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* 41de7b: push 0x4403cc */
  { uint32_t v = 0x4403ccu; esp -= 4; W32(esp, v); }
/* 41de80: call 0x41cfdc */
  esp -= 4; W32(esp, 0x41de85u); SPILL(); f_41cfdc(); if (g_unwind) return; RELOAD();
L_41de85: /* 41de85: mov ecx, eax */
  ecx = eax;
/* 41de87: call 0x41d364 */
  esp -= 4; W32(esp, 0x41de8cu); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41de8c: jmp 0x41dffc */
  goto L_41dffc;
L_41de91: /* 41de91: push dword ptr [ebp + 0x7c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x7cu)); esp -= 4; W32(esp, v); }
/* 41de94: call 0x41dd23 */
  esp -= 4; W32(esp, 0x41de99u); SPILL(); f_41dd23(); if (g_unwind) return; RELOAD();
/* 41de99: jmp 0x41dffb */
  goto L_41dffb;
L_41de9e: /* 41de9e: dec dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0x44f478u), r);
  }
L_41dea4: /* 41dea4: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41dea6: jmp 0x41dfe9 */
  goto L_41dfe9;
L_41deab: /* 41deab: cmp esi, 0x45 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41deae: je 0x41dff3 */
  if (zf) goto L_41dff3;
L_41deb4: /* 41deb4: jle 0x41dfe7 */
  if ((zf || sf != of)) goto L_41dfe7;
L_41deba: /* 41deba: cmp esi, 0x4a */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41debd: jle 0x41df49 */
  if ((zf || sf != of)) goto L_41df49;
L_41dec3: /* 41dec3: cmp esi, 0x51 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x51u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41dec6: jne 0x41dfe7 */
  if (!zf) goto L_41dfe7;
L_41decc: /* 41decc: lea eax, [ebp + 0x68] */
  eax = (uint32_t)(ebp + 0x68u);
/* 41decf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ded0: call 0x41dd23 */
  esp -= 4; W32(esp, 0x41ded5u); SPILL(); f_41dd23(); if (g_unwind) return; RELOAD();
/* 41ded5: test byte ptr [0x44f489], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44f489u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41dedc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41dedd: je 0x41df11 */
  if (zf) goto L_41df11;
L_41dedf: /* 41dedf: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 41dee1: lea eax, [ebp + 0x58] */
  eax = (uint32_t)(ebp + 0x58u);
/* 41dee4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dee5: lea ecx, [ebp + 0x68] */
  ecx = (uint32_t)(ebp + 0x68u);
/* 41dee8: call 0x41caed */
  esp -= 4; W32(esp, 0x41deedu); SPILL(); f_41caed(); if (g_unwind) return; RELOAD();
/* 41deed: lea eax, [ebp + 0x58] */
  eax = (uint32_t)(ebp + 0x58u);
/* 41def0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41def1: call 0x40643e */
  esp -= 4; W32(esp, 0x41def6u); SPILL(); f_40643e(); if (g_unwind) return; RELOAD();
/* 41def6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41def7: call dword ptr [0x44f48c] */
  { uint32_t t = R32((uint32_t)(0x44f48cu)); esp -= 4; W32(esp, 0x41defdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41defd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41deff: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41df00: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41df01: je 0x41df11 */
  if (zf) goto L_41df11;
L_41df03: /* 41df03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_41df04: /* 41df04: mov ecx, dword ptr [ebp + 0x7c] */
  ecx = R32((uint32_t)(ebp + 0x7cu));
/* 41df07: call 0x41cfdc */
  esp -= 4; W32(esp, 0x41df0cu); SPILL(); f_41cfdc(); if (g_unwind) return; RELOAD();
/* 41df0c: jmp 0x41dffc */
  goto L_41dffc;
L_41df11: /* 41df11: cmp bl, 0x44 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41df14: push 0x440554 */
  { uint32_t v = 0x440554u; esp -= 4; W32(esp, v); }
/* 41df19: push dword ptr [ebp + 0x7c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x7cu)); esp -= 4; W32(esp, v); }
/* 41df1c: lea eax, [ebp + 0x68] */
  eax = (uint32_t)(ebp + 0x68u);
/* 41df1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41df20: jne 0x41df2c */
  if (!zf) goto L_41df2c;
L_41df22: /* 41df22: push 0x440540 */
  { uint32_t v = 0x440540u; esp -= 4; W32(esp, v); }
/* 41df27: lea eax, [ebp + 0x50] */
  eax = (uint32_t)(ebp + 0x50u);
/* 41df2a: jmp 0x41df34 */
  goto L_41df34;
L_41df2c: /* 41df2c: push 0x4404d4 */
  { uint32_t v = 0x4404d4u; esp -= 4; W32(esp, v); }
/* 41df31: lea eax, [ebp + 0x48] */
  eax = (uint32_t)(ebp + 0x48u);
L_41df34: /* 41df34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41df35: call 0x41d624 */
  esp -= 4; W32(esp, 0x41df3au); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 41df3a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41df3d: mov ecx, eax */
  ecx = eax;
/* 41df3f: call 0x41d685 */
  esp -= 4; W32(esp, 0x41df44u); SPILL(); f_41d685(); if (g_unwind) return; RELOAD();
/* 41df44: jmp 0x41dffc */
  goto L_41dffc;
L_41df49: /* 41df49: push 0x7b */
  { uint32_t v = 0x7bu; esp -= 4; W32(esp, v); }
/* 41df4b: lea ecx, [ebp + 0x68] */
  ecx = (uint32_t)(ebp + 0x68u);
/* 41df4e: call 0x41cfb7 */
  esp -= 4; W32(esp, 0x41df53u); SPILL(); f_41cfb7(); if (g_unwind) return; RELOAD();
/* 41df53: cmp bl, 0x48 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x48u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41df56: jl 0x41df7a */
  if ((sf != of)) goto L_41df7a;
L_41df58: /* 41df58: cmp bl, 0x4a */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x4au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41df5b: jg 0x41df7a */
  if ((!zf && sf == of)) goto L_41df7a;
L_41df5d: /* 41df5d: lea eax, [ebp + 0x40] */
  eax = (uint32_t)(ebp + 0x40u);
/* 41df60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41df61: call 0x41f687 */
  esp -= 4; W32(esp, 0x41df66u); SPILL(); f_41f687(); if (g_unwind) return; RELOAD();
/* 41df66: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41df67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41df68: lea ecx, [ebp + 0x68] */
  ecx = (uint32_t)(ebp + 0x68u);
/* 41df6b: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41df70u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41df70: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 41df72: lea ecx, [ebp + 0x68] */
  ecx = (uint32_t)(ebp + 0x68u);
/* 41df75: call 0x41d3c7 */
  esp -= 4; W32(esp, 0x41df7au); SPILL(); f_41d3c7(); if (g_unwind) return; RELOAD();
L_41df7a: /* 41df7a: sub esi, 0x46 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  esi = r;
  }
/* 41df7d: je 0x41dfa8 */
  if (zf) goto L_41dfa8;
L_41df7f: /* 41df7f: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 41df80: je 0x41df8b */
  if (zf) goto L_41df8b;
L_41df82: /* 41df82: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 41df83: je 0x41dfc5 */
  if (zf) goto L_41dfc5;
L_41df85: /* 41df85: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 41df86: je 0x41dfa8 */
  if (zf) goto L_41dfa8;
L_41df88: /* 41df88: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 41df89: jne 0x41dfd8 */
  if (!zf) goto L_41dfd8;
L_41df8b: /* 41df8b: lea eax, [ebp + 0x30] */
  eax = (uint32_t)(ebp + 0x30u);
/* 41df8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41df8f: call 0x41dd23 */
  esp -= 4; W32(esp, 0x41df94u); SPILL(); f_41dd23(); if (g_unwind) return; RELOAD();
/* 41df94: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41df95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41df96: lea ecx, [ebp + 0x68] */
  ecx = (uint32_t)(ebp + 0x68u);
/* 41df99: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41df9eu); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41df9e: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 41dfa0: lea ecx, [ebp + 0x68] */
  ecx = (uint32_t)(ebp + 0x68u);
/* 41dfa3: call 0x41d3c7 */
  esp -= 4; W32(esp, 0x41dfa8u); SPILL(); f_41d3c7(); if (g_unwind) return; RELOAD();
L_41dfa8: /* 41dfa8: lea eax, [ebp + 0x20] */
  eax = (uint32_t)(ebp + 0x20u);
/* 41dfab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dfac: call 0x41dd23 */
  esp -= 4; W32(esp, 0x41dfb1u); SPILL(); f_41dd23(); if (g_unwind) return; RELOAD();
/* 41dfb1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41dfb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dfb3: lea ecx, [ebp + 0x68] */
  ecx = (uint32_t)(ebp + 0x68u);
/* 41dfb6: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41dfbbu); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41dfbb: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 41dfbd: lea ecx, [ebp + 0x68] */
  ecx = (uint32_t)(ebp + 0x68u);
/* 41dfc0: call 0x41d3c7 */
  esp -= 4; W32(esp, 0x41dfc5u); SPILL(); f_41d3c7(); if (g_unwind) return; RELOAD();
L_41dfc5: /* 41dfc5: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 41dfc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dfc9: call 0x41dd23 */
  esp -= 4; W32(esp, 0x41dfceu); SPILL(); f_41dd23(); if (g_unwind) return; RELOAD();
/* 41dfce: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41dfcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41dfd0: lea ecx, [ebp + 0x68] */
  ecx = (uint32_t)(ebp + 0x68u);
/* 41dfd3: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41dfd8u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
L_41dfd8: /* 41dfd8: push 0x7d */
  { uint32_t v = 0x7du; esp -= 4; W32(esp, v); }
/* 41dfda: push dword ptr [ebp + 0x7c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x7cu)); esp -= 4; W32(esp, v); }
/* 41dfdd: lea ecx, [ebp + 0x68] */
  ecx = (uint32_t)(ebp + 0x68u);
/* 41dfe0: call 0x41d646 */
  esp -= 4; W32(esp, 0x41dfe5u); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41dfe5: jmp 0x41dffc */
  goto L_41dffc;
L_41dfe7: /* 41dfe7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
L_41dfe9: /* 41dfe9: mov ecx, dword ptr [ebp + 0x7c] */
  ecx = R32((uint32_t)(ebp + 0x7cu));
/* 41dfec: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x41dff1u); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
/* 41dff1: jmp 0x41dffc */
  goto L_41dffc;
L_41dff3: /* 41dff3: push dword ptr [ebp + 0x7c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x7cu)); esp -= 4; W32(esp, v); }
/* 41dff6: call 0x41f687 */
  esp -= 4; W32(esp, 0x41dffbu); SPILL(); f_41f687(); if (g_unwind) return; RELOAD();
L_41dffb: /* 41dffb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41dffc: /* 41dffc: mov ecx, dword ptr [ebp + 0x70] */
  ecx = R32((uint32_t)(ebp + 0x70u));
/* 41dfff: xor ecx, dword ptr [ebp + 0x78] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x78u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 41e002: mov eax, dword ptr [ebp + 0x7c] */
  eax = R32((uint32_t)(ebp + 0x7cu));
/* 41e005: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41e006: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41e007: call 0x4013ab */
  esp -= 4; W32(esp, 0x41e00cu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 41e00c: add ebp, 0x74 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 41e00f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41e010: ret  */
  esp += 4; SPILL(); return;
}

void f_41e011(void) {
  LOAD_REGS();
L_41e011: /* 41e011: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41e012: mov ebp, esp */
  ebp = esp;
/* 41e014: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41e015: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41e016: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41e01b: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41e01d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41e01f: je 0x41e0bb */
  if (zf) goto L_41e0bb;
L_41e025: /* 41e025: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41e029: je 0x41e060 */
  if (zf) goto L_41e060;
L_41e02b: /* 41e02b: cmp al, 0x58 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41e02d: jne 0x41e060 */
  if (!zf) goto L_41e060;
L_41e02f: /* 41e02f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 41e032: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41e038: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41e03du); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41e03d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41e03f: je 0x41e050 */
  if (zf) goto L_41e050;
L_41e041: /* 41e041: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41e044: push 0x440520 */
  { uint32_t v = 0x440520u; esp -= 4; W32(esp, v); }
/* 41e049: call 0x41cfdc */
  esp -= 4; W32(esp, 0x41e04eu); SPILL(); f_41cfdc(); if (g_unwind) return; RELOAD();
/* 41e04e: jmp 0x41e0cb */
  goto L_41e0cb;
L_41e050: /* 41e050: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41e051: push 0x440568 */
  { uint32_t v = 0x440568u; esp -= 4; W32(esp, v); }
/* 41e056: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41e059: call 0x41d624 */
  esp -= 4; W32(esp, 0x41e05eu); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 41e05e: jmp 0x41e0c8 */
  goto L_41e0c8;
L_41e060: /* 41e060: cmp al, 0x59 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x59u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41e062: jne 0x41e077 */
  if (!zf) goto L_41e077;
L_41e064: /* 41e064: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41e067: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41e06d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41e070: call 0x41d988 */
  esp -= 4; W32(esp, 0x41e075u); SPILL(); f_41d988(); if (g_unwind) return; RELOAD();
/* 41e075: jmp 0x41e0b7 */
  goto L_41e0b7;
L_41e077: /* 41e077: cmp al, 0x5f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41e079: jne 0x41e0ac */
  if (!zf) goto L_41e0ac;
L_41e07b: /* 41e07b: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41e080: cmp byte ptr [eax + 1], 0x5a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1u))); uint8_t b = (uint8_t)(0x5au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41e084: jne 0x41e0ac */
  if (!zf) goto L_41e0ac;
L_41e086: /* 41e086: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41e089: add dword ptr [0x44f478], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41e090: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41e093: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e094: call 0x42072f */
  esp -= 4; W32(esp, 0x41e099u); SPILL(); f_42072f(); if (g_unwind) return; RELOAD();
/* 41e099: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e09a: push 0x440560 */
  { uint32_t v = 0x440560u; esp -= 4; W32(esp, v); }
/* 41e09f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41e0a2: call 0x41d624 */
  esp -= 4; W32(esp, 0x41e0a7u); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 41e0a7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41e0aa: jmp 0x41e0cb */
  goto L_41e0cb;
L_41e0ac: /* 41e0ac: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41e0af: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41e0b2: call 0x42072f */
  esp -= 4; W32(esp, 0x41e0b7u); SPILL(); f_42072f(); if (g_unwind) return; RELOAD();
L_41e0b7: /* 41e0b7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e0b8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e0b9: jmp 0x41e0cb */
  goto L_41e0cb;
L_41e0bb: /* 41e0bb: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41e0be: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41e0c0: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41e0c3: call 0x41d602 */
  esp -= 4; W32(esp, 0x41e0c8u); SPILL(); f_41d602(); if (g_unwind) return; RELOAD();
L_41e0c8: /* 41e0c8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_41e0cb: /* 41e0cb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41e0ce: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41e0cf: ret  */
  esp += 4; SPILL(); return;
}

void f_41e0d0(void) {
  LOAD_REGS();
L_41e0d0: /* 41e0d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41e0d1: mov ebp, esp */
  ebp = esp;
/* 41e0d3: sub esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41e0d6: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 41e0db: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 41e0de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41e0df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41e0e0: mov esi, 0xfffffe00 */
  esi = 0xfffffe00u;
/* 41e0e5: and dword ptr [ebp - 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 41e0e8: xor ebx, ebx */
  ebx = 0;
/* 41e0ea: test byte ptr [ebp - 0x14], 0xf */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41e0ee: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 41e0f1: mov dword ptr [ebp - 8], 1 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x1u);
/* 41e0f8: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 41e0fb: mov byte ptr [0x44f491], 1 */
  W8((uint32_t)(0x44f491u), 0x1u);
/* 41e102: jne 0x41e26c */
  if (!zf) goto L_41e26c;
L_41e108: /* 41e108: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_41e109: /* 41e109: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41e10e: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41e110: cmp cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41e112: je 0x41e26b */
  if (zf) goto L_41e26b;
L_41e118: /* 41e118: cmp cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41e11b: je 0x41e26b */
  if (zf) goto L_41e26b;
L_41e121: /* 41e121: cmp dword ptr [ebp - 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41e124: je 0x41e12b */
  if (zf) goto L_41e12b;
L_41e126: /* 41e126: mov dword ptr [ebp - 8], ebx */
  W32((uint32_t)(ebp + 0xfffffff8u), ebx);
/* 41e129: jmp 0x41e13a */
  goto L_41e13a;
L_41e12b: /* 41e12b: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 41e12d: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 41e130: call 0x41d3c7 */
  esp -= 4; W32(esp, 0x41e135u); SPILL(); f_41d3c7(); if (g_unwind) return; RELOAD();
/* 41e135: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
L_41e13a: /* 41e13a: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41e13c: movsx ecx, dl */
  ecx = (uint32_t)(int32_t)(int8_t)((edx & 0xffu));
/* 41e13f: sub ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 41e142: js 0x41e160 */
  if (sf) goto L_41e160;
L_41e144: /* 41e144: cmp ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e147: jg 0x41e160 */
  if ((!zf && sf == of)) goto L_41e160;
L_41e149: /* 41e149: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41e14a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41e14b: mov ecx, dword ptr [0x44f474] */
  ecx = R32((uint32_t)(0x44f474u));
/* 41e151: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41e156: call 0x41c83a */
  esp -= 4; W32(esp, 0x41e15bu); SPILL(); f_41c83a(); if (g_unwind) return; RELOAD();
/* 41e15b: jmp 0x41e258 */
  goto L_41e258;
L_41e160: /* 41e160: and dword ptr [ebp - 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 41e163: cmp dl, 0x58 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41e166: mov edi, eax */
  edi = eax;
/* 41e168: mov dword ptr [ebp - 0x10], ebx */
  W32((uint32_t)(ebp + 0xfffffff0u), ebx);
/* 41e16b: jne 0x41e17a */
  if (!zf) goto L_41e17a;
L_41e16d: /* 41e16d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41e16e: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41e173: push 0x440520 */
  { uint32_t v = 0x440520u; esp -= 4; W32(esp, v); }
/* 41e178: jmp 0x41e1d4 */
  goto L_41e1d4;
L_41e17a: /* 41e17a: cmp dl, 0x24 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x24u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41e17d: jne 0x41e197 */
  if (!zf) goto L_41e197;
L_41e17f: /* 41e17f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41e180: cmp byte ptr [eax], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41e182: je 0x41e197 */
  if (zf) goto L_41e197;
L_41e184: /* 41e184: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41e189: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 41e18c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e18d: call 0x41dd73 */
  esp -= 4; W32(esp, 0x41e192u); SPILL(); f_41dd73(); if (g_unwind) return; RELOAD();
/* 41e192: jmp 0x41e22b */
  goto L_41e22b;
L_41e197: /* 41e197: cmp dl, 0x3f */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x3fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41e19a: jne 0x41e217 */
  if (!zf) goto L_41e217;
L_41e19c: /* 41e19c: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41e19f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e1a0: call 0x41dd23 */
  esp -= 4; W32(esp, 0x41e1a5u); SPILL(); f_41dd23(); if (g_unwind) return; RELOAD();
/* 41e1a5: test byte ptr [0x44f489], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44f489u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41e1ac: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e1ad: je 0x41e1f0 */
  if (zf) goto L_41e1f0;
L_41e1af: /* 41e1af: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 41e1b1: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 41e1b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e1b5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41e1b8: call 0x41caed */
  esp -= 4; W32(esp, 0x41e1bdu); SPILL(); f_41caed(); if (g_unwind) return; RELOAD();
/* 41e1bd: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 41e1c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e1c1: call 0x40643e */
  esp -= 4; W32(esp, 0x41e1c6u); SPILL(); f_40643e(); if (g_unwind) return; RELOAD();
/* 41e1c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e1c7: call dword ptr [0x44f48c] */
  { uint32_t t = R32((uint32_t)(0x44f48cu)); esp -= 4; W32(esp, 0x41e1cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41e1cd: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41e1cf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e1d0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e1d1: je 0x41e1de */
  if (zf) goto L_41e1de;
L_41e1d3: /* 41e1d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_41e1d4: /* 41e1d4: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41e1d7: call 0x41d261 */
  esp -= 4; W32(esp, 0x41e1dcu); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
/* 41e1dc: jmp 0x41e235 */
  goto L_41e235;
L_41e1de: /* 41e1de: push 0x440554 */
  { uint32_t v = 0x440554u; esp -= 4; W32(esp, v); }
/* 41e1e3: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 41e1e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e1e7: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41e1ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e1eb: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 41e1ee: jmp 0x41e200 */
  goto L_41e200;
L_41e1f0: /* 41e1f0: push 0x440554 */
  { uint32_t v = 0x440554u; esp -= 4; W32(esp, v); }
/* 41e1f5: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 41e1f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e1f9: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41e1fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e1fd: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
L_41e200: /* 41e200: push 0x440540 */
  { uint32_t v = 0x440540u; esp -= 4; W32(esp, v); }
/* 41e205: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e206: call 0x41d624 */
  esp -= 4; W32(esp, 0x41e20bu); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 41e20b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41e20e: mov ecx, eax */
  ecx = eax;
/* 41e210: call 0x41d685 */
  esp -= 4; W32(esp, 0x41e215u); SPILL(); f_41d685(); if (g_unwind) return; RELOAD();
/* 41e215: jmp 0x41e22c */
  goto L_41e22c;
L_41e217: /* 41e217: and dword ptr [ebp - 0x24], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 41e21a: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 41e21d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e21e: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 41e221: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e222: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 41e225: call 0x420aa2 */
  esp -= 4; W32(esp, 0x41e22au); SPILL(); f_420aa2(); if (g_unwind) return; RELOAD();
/* 41e22a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41e22b: /* 41e22b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41e22c: /* 41e22c: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41e22f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e230: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41e235u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_41e235: /* 41e235: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41e23a: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41e23c: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e23f: jle 0x41e255 */
  if ((zf || sf != of)) goto L_41e255;
L_41e241: /* 41e241: mov ecx, dword ptr [0x44f474] */
  ecx = R32((uint32_t)(0x44f474u));
/* 41e247: cmp dword ptr [ecx], 9 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41e24a: je 0x41e255 */
  if (zf) goto L_41e255;
L_41e24c: /* 41e24c: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41e24f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e250: call 0x41cc52 */
  esp -= 4; W32(esp, 0x41e255u); SPILL(); f_41cc52(); if (g_unwind) return; RELOAD();
L_41e255: /* 41e255: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
L_41e258: /* 41e258: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 41e25b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e25c: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41e261u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41e261: test byte ptr [ebp - 0x14], 0xf */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffecu))); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41e265: je 0x41e109 */
  if (zf) goto L_41e109;
L_41e26b: /* 41e26b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_41e26c: /* 41e26c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41e26f: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41e272: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e273: mov byte ptr [0x44f491], bl */
  W8((uint32_t)(0x44f491u), (ebx & 0xffu));
/* 41e279: call 0x41c766 */
  esp -= 4; W32(esp, 0x41e27eu); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41e27e: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41e281: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 41e284: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41e287: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41e288: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41e289: call 0x4013ab */
  esp -= 4; W32(esp, 0x41e28eu); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 41e28e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41e28f: ret  */
  esp += 4; SPILL(); return;
}

void f_41e290(void) {
  LOAD_REGS();
L_41e290: /* 41e290: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41e291: lea ebp, [esp - 0x74] */
  ebp = (uint32_t)(esp + 0xffffff8cu);
/* 41e295: sub esp, 0xcc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41e29b: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41e2a0: cmp byte ptr [eax], 0x3f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x3fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41e2a3: jne 0x41e383 */
  if (!zf) goto L_41e383;
L_41e2a9: /* 41e2a9: cmp byte ptr [eax + 1], 0x24 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1u))); uint8_t b = (uint8_t)(0x24u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41e2ad: jne 0x41e383 */
  if (!zf) goto L_41e383;
L_41e2b3: /* 41e2b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41e2b4: mov ebx, dword ptr [0x44f474] */
  ebx = R32((uint32_t)(0x44f474u));
/* 41e2ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41e2bb: mov esi, dword ptr [0x44f46c] */
  esi = R32((uint32_t)(0x44f46cu));
/* 41e2c1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41e2c2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41e2c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41e2c4: mov edi, dword ptr [0x44f470] */
  edi = R32((uint32_t)(0x44f470u));
/* 41e2ca: lea ecx, [ebp + 0x20] */
  ecx = (uint32_t)(ebp + 0x20u);
/* 41e2cd: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41e2d2: call 0x41cc34 */
  esp -= 4; W32(esp, 0x41e2d7u); SPILL(); f_41cc34(); if (g_unwind) return; RELOAD();
/* 41e2d7: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 41e2da: call 0x41cc34 */
  esp -= 4; W32(esp, 0x41e2dfu); SPILL(); f_41cc34(); if (g_unwind) return; RELOAD();
/* 41e2df: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 41e2e2: call 0x41cc34 */
  esp -= 4; W32(esp, 0x41e2e7u); SPILL(); f_41cc34(); if (g_unwind) return; RELOAD();
/* 41e2e7: lea eax, [ebp + 0x20] */
  eax = (uint32_t)(ebp + 0x20u);
/* 41e2ea: mov dword ptr [0x44f46c], eax */
  W32((uint32_t)(0x44f46cu), eax);
/* 41e2ef: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 41e2f2: mov dword ptr [0x44f470], eax */
  W32((uint32_t)(0x44f470u), eax);
/* 41e2f7: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 41e2fa: mov dword ptr [0x44f474], eax */
  W32((uint32_t)(0x44f474u), eax);
/* 41e2ff: lea eax, [ebp + 0x6c] */
  eax = (uint32_t)(ebp + 0x6cu);
/* 41e302: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41e304: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e305: call 0x41e395 */
  esp -= 4; W32(esp, 0x41e30au); SPILL(); f_41e395(); if (g_unwind) return; RELOAD();
/* 41e30a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e30b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e30c: lea ecx, [ebp + 0x6c] */
  ecx = (uint32_t)(ebp + 0x6cu);
/* 41e30f: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41e314u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41e314: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41e316: je 0x41e31f */
  if (zf) goto L_41e31f;
L_41e318: /* 41e318: mov byte ptr [0x44f490], 1 */
  W8((uint32_t)(0x44f490u), 0x1u);
L_41e31f: /* 41e31f: lea eax, [ebp + 0x5c] */
  eax = (uint32_t)(ebp + 0x5cu);
/* 41e322: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e323: call 0x41e0d0 */
  esp -= 4; W32(esp, 0x41e328u); SPILL(); f_41e0d0(); if (g_unwind) return; RELOAD();
/* 41e328: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e329: lea eax, [ebp + 0x64] */
  eax = (uint32_t)(ebp + 0x64u);
/* 41e32c: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 41e32e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e32f: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x41e334u); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 41e334: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41e337: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e338: lea ecx, [ebp + 0x6c] */
  ecx = (uint32_t)(ebp + 0x6cu);
/* 41e33b: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41e340u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41e340: lea ecx, [ebp + 0x6c] */
  ecx = (uint32_t)(ebp + 0x6cu);
/* 41e343: call 0x41cab5 */
  esp -= 4; W32(esp, 0x41e348u); SPILL(); f_41cab5(); if (g_unwind) return; RELOAD();
/* 41e348: cmp al, 0x3e */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41e34a: jne 0x41e356 */
  if (!zf) goto L_41e356;
L_41e34c: /* 41e34c: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 41e34e: lea ecx, [ebp + 0x6c] */
  ecx = (uint32_t)(ebp + 0x6cu);
/* 41e351: call 0x41d3c7 */
  esp -= 4; W32(esp, 0x41e356u); SPILL(); f_41d3c7(); if (g_unwind) return; RELOAD();
L_41e356: /* 41e356: push 0x3e */
  { uint32_t v = 0x3eu; esp -= 4; W32(esp, v); }
/* 41e358: lea ecx, [ebp + 0x6c] */
  ecx = (uint32_t)(ebp + 0x6cu);
/* 41e35b: call 0x41d3c7 */
  esp -= 4; W32(esp, 0x41e360u); SPILL(); f_41d3c7(); if (g_unwind) return; RELOAD();
/* 41e360: mov ecx, dword ptr [ebp + 0x7c] */
  ecx = R32((uint32_t)(ebp + 0x7cu));
/* 41e363: lea eax, [ebp + 0x6c] */
  eax = (uint32_t)(ebp + 0x6cu);
/* 41e366: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e367: mov dword ptr [0x44f46c], esi */
  W32((uint32_t)(0x44f46cu), esi);
/* 41e36d: mov dword ptr [0x44f470], edi */
  W32((uint32_t)(0x44f470u), edi);
/* 41e373: mov dword ptr [0x44f474], ebx */
  W32((uint32_t)(0x44f474u), ebx);
/* 41e379: call 0x41c766 */
  esp -= 4; W32(esp, 0x41e37eu); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41e37e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41e37f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41e380: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41e381: jmp 0x41e38d */
  goto L_41e38d;
L_41e383: /* 41e383: mov ecx, dword ptr [ebp + 0x7c] */
  ecx = R32((uint32_t)(ebp + 0x7cu));
/* 41e386: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41e388: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x41e38du); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
L_41e38d: /* 41e38d: mov eax, dword ptr [ebp + 0x7c] */
  eax = R32((uint32_t)(ebp + 0x7cu));
/* 41e390: add ebp, 0x74 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 41e393: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41e394: ret  */
  esp += 4; SPILL(); return;
}

void f_41e395(void) {
  LOAD_REGS();
L_41e395: /* 41e395: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41e396: mov ebp, esp */
  ebp = esp;
/* 41e398: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41e39b: mov eax, dword ptr [0x44a9a8] */
  eax = R32((uint32_t)(0x44a9a8u));
/* 41e3a0: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 41e3a3: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 41e3a6: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41e3ab: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41e3ad: movsx ecx, dl */
  ecx = (uint32_t)(int32_t)(int8_t)((edx & 0xffu));
/* 41e3b0: sub ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  ecx = r;
  }
/* 41e3b3: js 0x41e3d1 */
  if (sf) goto L_41e3d1;
L_41e3b5: /* 41e3b5: cmp ecx, 9 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e3b8: jg 0x41e3d1 */
  if ((!zf && sf == of)) goto L_41e3d1;
L_41e3ba: /* 41e3ba: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41e3bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41e3bc: mov ecx, dword ptr [0x44f470] */
  ecx = R32((uint32_t)(0x44f470u));
/* 41e3c2: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41e3c7: call 0x41c83a */
  esp -= 4; W32(esp, 0x41e3ccu); SPILL(); f_41c83a(); if (g_unwind) return; RELOAD();
/* 41e3cc: jmp 0x41e55a */
  goto L_41e55a;
L_41e3d1: /* 41e3d1: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 41e3d5: and word ptr [ebp - 0x10], 0xfe00 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff0u))); uint16_t b = (uint16_t)(0xfe00u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 41e3db: cmp dl, 0x3f */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x3fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41e3de: jne 0x41e425 */
  if (!zf) goto L_41e425;
L_41e3e0: /* 41e3e0: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 41e3e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e3e4: call 0x41e290 */
  esp -= 4; W32(esp, 0x41e3e9u); SPILL(); f_41e290(); if (g_unwind) return; RELOAD();
/* 41e3e9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e3ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e3eb: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 41e3ee: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41e3f3u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41e3f3: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41e3f8: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41e3fa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41e3fb: cmp cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41e3fe: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41e403: je 0x41e53d */
  if (zf) goto L_41e53d;
L_41e409: /* 41e409: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 41e40a: xor ecx, ecx */
  ecx = 0;
/* 41e40c: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41e411: cmp byte ptr [eax], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41e413: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 41e416: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 41e417: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41e418: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 41e41b: call 0x41cbb3 */
  esp -= 4; W32(esp, 0x41e420u); SPILL(); f_41cbb3(); if (g_unwind) return; RELOAD();
/* 41e420: jmp 0x41e53d */
  goto L_41e53d;
L_41e425: /* 41e425: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41e426: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41e427: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41e428: mov ecx, 0x440584 */
  ecx = 0x440584u;
/* 41e42d: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* 41e42f: mov edi, ecx */
  edi = ecx;
/* 41e431: mov esi, eax */
  esi = eax;
/* 41e433: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_41e434: /* 41e434: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 41e436: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41e438: je 0x41e443 */
  if (zf) goto L_41e443;
L_41e43a: /* 41e43a: cmp dl, byte ptr [edi] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41e43c: jne 0x41e443 */
  if (!zf) goto L_41e443;
L_41e43e: /* 41e43e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 41e43f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 41e440: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 41e441: jne 0x41e434 */
  if (!zf) goto L_41e434;
L_41e443: /* 41e443: movzx edx, byte ptr [esi] */
  edx = (uint32_t)(R8((uint32_t)(esi)));
/* 41e446: movzx esi, byte ptr [edi] */
  esi = (uint32_t)(R8((uint32_t)(edi)));
/* 41e449: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edx = r;
  }
/* 41e44b: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 41e44e: jne 0x41e455 */
  if (!zf) goto L_41e455;
L_41e450: /* 41e450: add eax, 0x13 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x13u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 41e453: jmp 0x41e484 */
  goto L_41e484;
L_41e455: /* 41e455: mov ecx, 0x440574 */
  ecx = 0x440574u;
/* 41e45a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 41e45c: mov edi, ecx */
  edi = ecx;
/* 41e45e: mov esi, eax */
  esi = eax;
/* 41e460: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_41e461: /* 41e461: mov dl, byte ptr [esi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 41e463: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41e465: je 0x41e470 */
  if (zf) goto L_41e470;
L_41e467: /* 41e467: cmp dl, byte ptr [edi] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41e469: jne 0x41e470 */
  if (!zf) goto L_41e470;
L_41e46b: /* 41e46b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 41e46c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 41e46d: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebx = r;
  }
/* 41e46e: jne 0x41e461 */
  if (!zf) goto L_41e461;
L_41e470: /* 41e470: movzx edx, byte ptr [edi] */
  edx = (uint32_t)(R8((uint32_t)(edi)));
/* 41e473: movzx esi, byte ptr [esi] */
  esi = (uint32_t)(R8((uint32_t)(esi)));
/* 41e476: sub esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  esi = r;
  }
/* 41e478: mov dword ptr [ebp - 8], esi */
  W32((uint32_t)(ebp + 0xfffffff8u), esi);
/* 41e47b: jne 0x41e522 */
  if (!zf) goto L_41e522;
L_41e481: /* 41e481: add eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_41e484: /* 41e484: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41e489: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 41e48c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e48d: mov esi, ecx */
  esi = ecx;
/* 41e48f: call 0x41dd23 */
  esp -= 4; W32(esp, 0x41e494u); SPILL(); f_41dd23(); if (g_unwind) return; RELOAD();
/* 41e494: test byte ptr [0x44f489], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44f489u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41e49b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e49c: je 0x41e503 */
  if (zf) goto L_41e503;
L_41e49e: /* 41e49e: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 41e4a0: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 41e4a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e4a4: lea ecx, [ebp - 0xc] */
  ecx = (uint32_t)(ebp + 0xfffffff4u);
/* 41e4a7: call 0x41caed */
  esp -= 4; W32(esp, 0x41e4acu); SPILL(); f_41caed(); if (g_unwind) return; RELOAD();
/* 41e4ac: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 41e4af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e4b0: call 0x40643e */
  esp -= 4; W32(esp, 0x41e4b5u); SPILL(); f_40643e(); if (g_unwind) return; RELOAD();
/* 41e4b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e4b6: call dword ptr [0x44f48c] */
  { uint32_t t = R32((uint32_t)(0x44f48cu)); esp -= 4; W32(esp, 0x41e4bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 41e4bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41e4be: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e4bf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e4c0: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 41e4c3: je 0x41e4cd */
  if (zf) goto L_41e4cd;
L_41e4c5: /* 41e4c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e4c6: call 0x41d261 */
  esp -= 4; W32(esp, 0x41e4cbu); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
/* 41e4cb: jmp 0x41e53a */
  goto L_41e53a;
L_41e4cd: /* 41e4cd: push 0x440570 */
  { uint32_t v = 0x440570u; esp -= 4; W32(esp, v); }
/* 41e4d2: call 0x41d261 */
  esp -= 4; W32(esp, 0x41e4d7u); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
/* 41e4d7: push 0x440554 */
  { uint32_t v = 0x440554u; esp -= 4; W32(esp, v); }
/* 41e4dc: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 41e4df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e4e0: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 41e4e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e4e4: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
L_41e4e7: /* 41e4e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41e4e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e4e9: call 0x41d624 */
  esp -= 4; W32(esp, 0x41e4eeu); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 41e4ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41e4f1: mov ecx, eax */
  ecx = eax;
/* 41e4f3: call 0x41d685 */
  esp -= 4; W32(esp, 0x41e4f8u); SPILL(); f_41d685(); if (g_unwind) return; RELOAD();
/* 41e4f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e4f9: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 41e4fc: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41e501u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41e501: jmp 0x41e53a */
  goto L_41e53a;
L_41e503: /* 41e503: push 0x440570 */
  { uint32_t v = 0x440570u; esp -= 4; W32(esp, v); }
/* 41e508: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 41e50b: call 0x41d261 */
  esp -= 4; W32(esp, 0x41e510u); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
/* 41e510: push 0x440554 */
  { uint32_t v = 0x440554u; esp -= 4; W32(esp, v); }
/* 41e515: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 41e518: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e519: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 41e51c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e51d: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 41e520: jmp 0x41e4e7 */
  goto L_41e4e7;
L_41e522: /* 41e522: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 41e524: push 0x44f478 */
  { uint32_t v = 0x44f478u; esp -= 4; W32(esp, v); }
/* 41e529: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 41e52c: call 0x41d00c */
  esp -= 4; W32(esp, 0x41e531u); SPILL(); f_41d00c(); if (g_unwind) return; RELOAD();
/* 41e531: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e532: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 41e535: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41e53au); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_41e53a: /* 41e53a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41e53b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41e53c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_41e53d: /* 41e53d: cmp byte ptr [ebp + 0xc], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41e541: je 0x41e557 */
  if (zf) goto L_41e557;
L_41e543: /* 41e543: mov ecx, dword ptr [0x44f470] */
  ecx = R32((uint32_t)(0x44f470u));
/* 41e549: cmp dword ptr [ecx], 9 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41e54c: je 0x41e557 */
  if (zf) goto L_41e557;
L_41e54e: /* 41e54e: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 41e551: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e552: call 0x41cc52 */
  esp -= 4; W32(esp, 0x41e557u); SPILL(); f_41cc52(); if (g_unwind) return; RELOAD();
L_41e557: /* 41e557: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
L_41e55a: /* 41e55a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41e55d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e55e: call 0x41c766 */
  esp -= 4; W32(esp, 0x41e563u); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41e563: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41e566: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 41e569: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41e56c: call 0x4013ab */
  esp -= 4; W32(esp, 0x41e571u); SPILL(); f_4013ab(); if (g_unwind) return; RELOAD();
/* 41e571: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41e572: ret  */
  esp += 4; SPILL(); return;
}

void f_41e573(void) {
  LOAD_REGS();
L_41e573: /* 41e573: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41e574: mov ebp, esp */
  ebp = esp;
/* 41e576: sub esp, 0x80 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41e57c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41e57d: mov eax, 0xfffffe00 */
  eax = 0xfffffe00u;
/* 41e582: and dword ptr [ebp - 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41e585: and dword ptr [ebp - 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 41e588: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41e58d: movsx ecx, byte ptr [eax] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 41e590: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41e591: xor edi, edi */
  edi = 0;
/* 41e593: push 0x41 */
  { uint32_t v = 0x41u; esp -= 4; W32(esp, v); }
/* 41e595: xor esi, esi */
  esi = 0;
/* 41e597: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41e598: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* 41e599: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e59b: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* 41e59e: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 41e5a1: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41e5a6: jg 0x41e635 */
  if ((!zf && sf == of)) goto L_41e635;
L_41e5ac: /* 41e5ac: je 0x41e981 */
  if (zf) goto L_41e981;
L_41e5b2: /* 41e5b2: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41e5b4: je 0x41e628 */
  if (zf) goto L_41e628;
L_41e5b6: /* 41e5b6: cmp ecx, 0x2f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e5b9: jle 0x41e793 */
  if ((zf || sf != of)) goto L_41e793;
L_41e5bf: /* 41e5bf: cmp ecx, 0x31 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x31u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e5c2: jle 0x41e5dd */
  if ((zf || sf != of)) goto L_41e5dd;
L_41e5c4: /* 41e5c4: cmp ecx, 0x39 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x39u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e5c7: jg 0x41e793 */
  if ((!zf && sf == of)) goto L_41e793;
L_41e5cd: /* 41e5cd: movsx eax, byte ptr [eax - 1] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* 41e5d1: push dword ptr [eax*4 + 0x43fdc8] */
  { uint32_t v = R32((uint32_t)(eax*4 + 0x43fdc8u)); esp -= 4; W32(esp, v); }
/* 41e5d8: jmp 0x41e8e6 */
  goto L_41e8e6;
L_41e5dd: /* 41e5dd: mov esi, eax */
  esi = eax;
/* 41e5df: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41e5e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41e5e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e5e4: call 0x41e395 */
  esp -= 4; W32(esp, 0x41e5e9u); SPILL(); f_41e395(); if (g_unwind) return; RELOAD();
/* 41e5e9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e5ea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e5eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e5ec: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41e5ef: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41e5f4u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41e5f4: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41e5f7: mov dword ptr [0x44f478], esi */
  W32((uint32_t)(0x44f478u), esi);
/* 41e5fd: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41e602u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41e602: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41e604: jne 0x41e918 */
  if (!zf) goto L_41e918;
L_41e60a: /* 41e60a: cmp byte ptr [esi - 1], 0x31 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0xffffffffu))); uint8_t b = (uint8_t)(0x31u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41e60e: jne 0x41e918 */
  if (!zf) goto L_41e918;
L_41e614: /* 41e614: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41e617: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e618: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 41e61b: push 0x7e */
  { uint32_t v = 0x7eu; esp -= 4; W32(esp, v); }
/* 41e61d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e61e: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x41e623u); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 41e623: jmp 0x41e90c */
  goto L_41e90c;
L_41e628: /* 41e628: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 41e629: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
L_41e62e: /* 41e62e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41e630: jmp 0x41e795 */
  goto L_41e795;
L_41e635: /* 41e635: cmp ecx, 0x42 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x42u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e638: je 0x41e97e */
  if (zf) goto L_41e97e;
L_41e63e: /* 41e63e: jle 0x41e793 */
  if ((zf || sf != of)) goto L_41e793;
L_41e644: /* 41e644: cmp ecx, 0x5a */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e647: jle 0x41e981 */
  if ((zf || sf != of)) goto L_41e981;
L_41e64d: /* 41e64d: cmp ecx, 0x5f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41e650: jne 0x41e793 */
  if (!zf) goto L_41e793;
L_41e656: /* 41e656: movsx ecx, byte ptr [eax] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 41e659: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41e65a: cmp ecx, 0x50 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e65d: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41e662: jg 0x41e768 */
  if ((!zf && sf == of)) goto L_41e768;
L_41e668: /* 41e668: je 0x41e715 */
  if (zf) goto L_41e715;
L_41e66e: /* 41e66e: cmp ecx, 0x3f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e671: jg 0x41e6d2 */
  if ((!zf && sf == of)) goto L_41e6d2;
L_41e673: /* 41e673: je 0x41e6b0 */
  if (zf) goto L_41e6b0;
L_41e675: /* 41e675: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41e677: je 0x41e628 */
  if (zf) goto L_41e628;
L_41e679: /* 41e679: cmp ecx, 0x2f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e67c: jle 0x41e793 */
  if ((zf || sf != of)) goto L_41e793;
L_41e682: /* 41e682: cmp ecx, 0x36 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x36u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e685: jle 0x41e6a0 */
  if ((zf || sf != of)) goto L_41e6a0;
L_41e687: /* 41e687: cmp ecx, 0x39 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x39u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e68a: jg 0x41e793 */
  if ((!zf && sf == of)) goto L_41e793;
L_41e690: /* 41e690: movsx eax, byte ptr [eax - 1] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* 41e694: push dword ptr [eax*4 + 0x43fe58] */
  { uint32_t v = R32((uint32_t)(eax*4 + 0x43fe58u)); esp -= 4; W32(esp, v); }
/* 41e69b: jmp 0x41e974 */
  goto L_41e974;
L_41e6a0: /* 41e6a0: movsx eax, byte ptr [eax - 1] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* 41e6a4: push dword ptr [eax*4 + 0x43fe58] */
  { uint32_t v = R32((uint32_t)(eax*4 + 0x43fe58u)); esp -= 4; W32(esp, v); }
/* 41e6ab: jmp 0x41e8e6 */
  goto L_41e8e6;
L_41e6b0: /* 41e6b0: movsx ecx, byte ptr [eax] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 41e6b3: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41e6b4: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41e6b6: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41e6bb: je 0x41e628 */
  if (zf) goto L_41e628;
L_41e6c1: /* 41e6c1: cmp ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41e6c4: jne 0x41e793 */
  if (!zf) goto L_41e793;
L_41e6ca: /* 41e6ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41e6cb: push 0x440598 */
  { uint32_t v = 0x440598u; esp -= 4; W32(esp, v); }
/* 41e6d0: jmp 0x41e6fd */
  goto L_41e6fd;
L_41e6d2: /* 41e6d2: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e6d4: jl 0x41e793 */
  if ((sf != of)) goto L_41e793;
L_41e6da: /* 41e6da: cmp ecx, 0x42 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x42u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e6dd: jle 0x41e969 */
  if ((zf || sf != of)) goto L_41e969;
L_41e6e3: /* 41e6e3: cmp ecx, 0x43 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x43u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e6e6: je 0x41e6f6 */
  if (zf) goto L_41e6f6;
L_41e6e8: /* 41e6e8: jle 0x41e793 */
  if ((zf || sf != of)) goto L_41e793;
L_41e6ee: /* 41e6ee: cmp ecx, 0x4f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e6f1: jmp 0x41e78d */
  goto L_41e78d;
L_41e6f6: /* 41e6f6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41e6f8: push 0x44031c */
  { uint32_t v = 0x44031cu; esp -= 4; W32(esp, v); }
L_41e6fd: /* 41e6fd: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41e700: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e701: call 0x41dc83 */
  esp -= 4; W32(esp, 0x41e706u); SPILL(); f_41dc83(); if (g_unwind) return; RELOAD();
/* 41e706: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41e709: or byte ptr [ebp - 0x13], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffedu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xffffffedu), r);
  }
/* 41e70d: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41e710: jmp 0x41e91b */
  goto L_41e91b;
L_41e715: /* 41e715: movsx eax, byte ptr [eax - 1] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* 41e719: push dword ptr [eax*4 + 0x43fe3c] */
  { uint32_t v = R32((uint32_t)(eax*4 + 0x43fe3cu)); esp -= 4; W32(esp, v); }
/* 41e720: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41e723: call 0x41d261 */
  esp -= 4; W32(esp, 0x41e728u); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
/* 41e728: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 41e72b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e72c: call 0x41e573 */
  esp -= 4; W32(esp, 0x41e731u); SPILL(); f_41e573(); if (g_unwind) return; RELOAD();
/* 41e731: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e732: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e733: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41e736: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41e73bu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41e73b: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41e73e: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41e743u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41e743: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41e745: jne 0x41e759 */
  if (!zf) goto L_41e759;
L_41e747: /* 41e747: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41e74a: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41e74fu); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41e74f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41e751: jne 0x41e759 */
  if (!zf) goto L_41e759;
L_41e753: /* 41e753: test byte ptr [ebp - 0xc], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff4u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41e757: jne 0x41e793 */
  if (!zf) goto L_41e793;
L_41e759: /* 41e759: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41e75c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e75d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41e760: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41e763: jmp 0x41e8d4 */
  goto L_41e8d4;
L_41e768: /* 41e768: cmp ecx, 0x56 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x56u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e76b: jg 0x41e92b */
  if ((!zf && sf == of)) goto L_41e92b;
L_41e771: /* 41e771: cmp ecx, 0x55 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x55u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e774: jge 0x41e8db */
  if ((sf == of)) goto L_41e8db;
L_41e77a: /* 41e77a: cmp ecx, 0x51 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x51u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41e77d: je 0x41e8ee */
  if (zf) goto L_41e8ee;
L_41e783: /* 41e783: cmp ecx, 0x52 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x52u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e786: je 0x41e7a2 */
  if (zf) goto L_41e7a2;
L_41e788: /* 41e788: jle 0x41e793 */
  if ((zf || sf != of)) goto L_41e793;
L_41e78a: /* 41e78a: cmp ecx, 0x54 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
L_41e78d: /* 41e78d: jle 0x41e969 */
  if ((zf || sf != of)) goto L_41e969;
L_41e793: /* 41e793: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
L_41e795: /* 41e795: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41e798: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x41e79du); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
/* 41e79d: jmp 0x41e924 */
  goto L_41e924;
L_41e7a2: /* 41e7a2: movsx eax, byte ptr [eax - 1] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* 41e7a6: push dword ptr [eax*4 + 0x43fe3c] */
  { uint32_t v = R32((uint32_t)(eax*4 + 0x43fe3cu)); esp -= 4; W32(esp, v); }
/* 41e7ad: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41e7b0: call 0x41d261 */
  esp -= 4; W32(esp, 0x41e7b5u); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
/* 41e7b5: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41e7ba: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 41e7bd: push dword ptr [eax*4 + 0x43fef8] */
  { uint32_t v = R32((uint32_t)(eax*4 + 0x43fef8u)); esp -= 4; W32(esp, v); }
/* 41e7c4: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41e7c7: call 0x41d261 */
  esp -= 4; W32(esp, 0x41e7ccu); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
/* 41e7cc: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41e7d1: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 41e7d4: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41e7da: cmp eax, 0x30 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41e7dd: je 0x41e8a2 */
  if (zf) goto L_41e8a2;
L_41e7e3: /* 41e7e3: cmp eax, 0x31 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x31u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e7e6: je 0x41e7fe */
  if (zf) goto L_41e7fe;
L_41e7e8: /* 41e7e8: jle 0x41e7f3 */
  if ((zf || sf != of)) goto L_41e7f3;
L_41e7ea: /* 41e7ea: cmp eax, 0x34 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e7ed: jle 0x41e759 */
  if ((zf || sf != of)) goto L_41e759;
L_41e7f3: /* 41e7f3: dec dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41e7f9: jmp 0x41e62e */
  goto L_41e62e;
L_41e7fe: /* 41e7fe: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41e801: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e802: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41e805: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e806: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41e809: call 0x41d364 */
  esp -= 4; W32(esp, 0x41e80eu); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41e80e: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 41e810: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 41e813: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e814: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 41e817: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e818: call 0x41dd23 */
  esp -= 4; W32(esp, 0x41e81du); SPILL(); f_41dd23(); if (g_unwind) return; RELOAD();
/* 41e81d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e81e: mov ecx, eax */
  ecx = eax;
/* 41e820: call 0x41d646 */
  esp -= 4; W32(esp, 0x41e825u); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41e825: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e826: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 41e829: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41e82eu); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41e82e: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 41e830: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 41e833: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e834: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 41e837: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e838: call 0x41dd23 */
  esp -= 4; W32(esp, 0x41e83du); SPILL(); f_41dd23(); if (g_unwind) return; RELOAD();
/* 41e83d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e83e: mov ecx, eax */
  ecx = eax;
/* 41e840: call 0x41d646 */
  esp -= 4; W32(esp, 0x41e845u); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41e845: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e846: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 41e849: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41e84eu); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41e84e: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 41e850: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 41e853: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e854: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 41e857: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e858: call 0x41dd23 */
  esp -= 4; W32(esp, 0x41e85du); SPILL(); f_41dd23(); if (g_unwind) return; RELOAD();
/* 41e85d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e85e: mov ecx, eax */
  ecx = eax;
/* 41e860: call 0x41d646 */
  esp -= 4; W32(esp, 0x41e865u); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41e865: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e866: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 41e869: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41e86eu); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41e86e: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 41e870: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 41e873: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e874: lea eax, [ebp - 0x70] */
  eax = (uint32_t)(ebp + 0xffffff90u);
/* 41e877: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41e878: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e879: call 0x41d6c4 */
  esp -= 4; W32(esp, 0x41e87eu); SPILL(); f_41d6c4(); if (g_unwind) return; RELOAD();
/* 41e87e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e87f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e880: mov ecx, eax */
  ecx = eax;
/* 41e882: call 0x41d646 */
  esp -= 4; W32(esp, 0x41e887u); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41e887: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e888: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 41e88b: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41e890u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41e890: push 0x27 */
  { uint32_t v = 0x27u; esp -= 4; W32(esp, v); }
/* 41e892: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41e895: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 41e898: call 0x41d646 */
  esp -= 4; W32(esp, 0x41e89du); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41e89d: jmp 0x41e924 */
  goto L_41e924;
L_41e8a2: /* 41e8a2: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41e8a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41e8a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e8a7: call 0x420bd2 */
  esp -= 4; W32(esp, 0x41e8acu); SPILL(); f_420bd2(); if (g_unwind) return; RELOAD();
/* 41e8ac: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e8ad: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e8ae: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41e8b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e8b2: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41e8b5: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41e8b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e8b9: lea eax, [ebp - 0x78] */
  eax = (uint32_t)(ebp + 0xffffff88u);
/* 41e8bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e8bd: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 41e8bf: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 41e8c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e8c3: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 41e8c6: call 0x41d646 */
  esp -= 4; W32(esp, 0x41e8cbu); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41e8cb: mov ecx, eax */
  ecx = eax;
/* 41e8cd: call 0x41d364 */
  esp -= 4; W32(esp, 0x41e8d2u); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41e8d2: mov ecx, eax */
  ecx = eax;
L_41e8d4: /* 41e8d4: call 0x41d364 */
  esp -= 4; W32(esp, 0x41e8d9u); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41e8d9: jmp 0x41e924 */
  goto L_41e924;
L_41e8db: /* 41e8db: movsx eax, byte ptr [eax - 1] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* 41e8df: push dword ptr [eax*4 + 0x43fe3c] */
  { uint32_t v = R32((uint32_t)(eax*4 + 0x43fe3cu)); esp -= 4; W32(esp, v); }
L_41e8e6: /* 41e8e6: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41e8e9: call 0x41d261 */
  esp -= 4; W32(esp, 0x41e8eeu); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
L_41e8ee: /* 41e8ee: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41e8f1: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41e8f6u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41e8f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41e8f8: jne 0x41e918 */
  if (!zf) goto L_41e918;
L_41e8fa: /* 41e8fa: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41e8fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e8fe: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 41e901: push 0x4403e8 */
  { uint32_t v = 0x4403e8u; esp -= 4; W32(esp, v); }
/* 41e906: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e907: call 0x41d624 */
  esp -= 4; W32(esp, 0x41e90cu); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
L_41e90c: /* 41e90c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41e90f: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41e912: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e913: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41e918u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_41e918: /* 41e918: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
L_41e91b: /* 41e91b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41e91e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e91f: call 0x41c766 */
  esp -= 4; W32(esp, 0x41e924u); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
L_41e924: /* 41e924: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41e927: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41e928: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41e929: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41e92a: ret  */
  esp += 4; SPILL(); return;
L_41e92b: /* 41e92b: cmp ecx, 0x58 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e92e: jl 0x41e793 */
  if ((sf != of)) goto L_41e793;
L_41e934: /* 41e934: cmp ecx, 0x59 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x59u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e937: jle 0x41e969 */
  if ((zf || sf != of)) goto L_41e969;
L_41e939: /* 41e939: cmp ecx, 0x5f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41e93c: jne 0x41e793 */
  if (!zf) goto L_41e793;
L_41e942: /* 41e942: movsx ecx, byte ptr [eax] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 41e945: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41e946: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e948: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41e94d: jl 0x41e793 */
  if ((sf != of)) goto L_41e793;
L_41e953: /* 41e953: cmp ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41e956: jg 0x41e793 */
  if ((!zf && sf == of)) goto L_41e793;
L_41e95c: /* 41e95c: movsx eax, byte ptr [eax - 1] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* 41e960: push dword ptr [eax*4 + 0x43fea0] */
  { uint32_t v = R32((uint32_t)(eax*4 + 0x43fea0u)); esp -= 4; W32(esp, v); }
/* 41e967: jmp 0x41e974 */
  goto L_41e974;
L_41e969: /* 41e969: movsx eax, byte ptr [eax - 1] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* 41e96d: push dword ptr [eax*4 + 0x43fe3c] */
  { uint32_t v = R32((uint32_t)(eax*4 + 0x43fe3cu)); esp -= 4; W32(esp, v); }
L_41e974: /* 41e974: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41e977: call 0x41cfdc */
  esp -= 4; W32(esp, 0x41e97cu); SPILL(); f_41cfdc(); if (g_unwind) return; RELOAD();
/* 41e97c: jmp 0x41e924 */
  goto L_41e924;
L_41e97e: /* 41e97e: xor esi, esi */
  esi = 0;
/* 41e980: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_41e981: /* 41e981: movsx eax, byte ptr [eax - 1] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* 41e985: push dword ptr [eax*4 + 0x43fdac] */
  { uint32_t v = R32((uint32_t)(eax*4 + 0x43fdacu)); esp -= 4; W32(esp, v); }
/* 41e98c: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41e98f: call 0x41d261 */
  esp -= 4; W32(esp, 0x41e994u); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
/* 41e994: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41e996: je 0x41e8ee */
  if (zf) goto L_41e8ee;
L_41e99c: /* 41e99c: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41e99f: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41e9a4u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41e9a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41e9a6: jne 0x41e918 */
  if (!zf) goto L_41e918;
L_41e9ac: /* 41e9ac: or dword ptr [ebp - 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41e9b0: jmp 0x41e918 */
  goto L_41e918;
}

void f_41e9b5(void) {
  LOAD_REGS();
L_41e9b5: /* 41e9b5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41e9b6: mov ebp, esp */
  ebp = esp;
/* 41e9b8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41e9bb: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 41e9bf: and word ptr [ebp - 4], 0xfe00 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu))); uint16_t b = (uint16_t)(0xfe00u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41e9c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41e9c6: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41e9c9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41e9cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e9cc: call 0x41e395 */
  esp -= 4; W32(esp, 0x41e9d1u); SPILL(); f_41e395(); if (g_unwind) return; RELOAD();
/* 41e9d1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e9d2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41e9d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e9d4: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41e9d7: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41e9dcu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41e9dc: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41e9df: test al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41e9e1: mov esi, 0x4405b0 */
  esi = 0x4405b0u;
/* 41e9e6: jne 0x41ea2a */
  if (!zf) goto L_41ea2a;
L_41e9e8: /* 41e9e8: mov ecx, dword ptr [0x44f478] */
  ecx = R32((uint32_t)(0x44f478u));
/* 41e9ee: mov cl, byte ptr [ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 41e9f0: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41e9f2: je 0x41ea2a */
  if (zf) goto L_41ea2a;
L_41e9f4: /* 41e9f4: cmp cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41e9f7: je 0x41ea37 */
  if (zf) goto L_41ea37;
L_41e9f9: /* 41e9f9: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41e9fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41e9fd: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41ea00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ea01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ea02: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41ea05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ea06: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41ea09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ea0a: call 0x41f842 */
  esp -= 4; W32(esp, 0x41ea0fu); SPILL(); f_41f842(); if (g_unwind) return; RELOAD();
/* 41ea0f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41ea10: mov ecx, eax */
  ecx = eax;
/* 41ea12: call 0x41d685 */
  esp -= 4; W32(esp, 0x41ea17u); SPILL(); f_41d685(); if (g_unwind) return; RELOAD();
/* 41ea17: mov ecx, eax */
  ecx = eax;
/* 41ea19: call 0x41d364 */
  esp -= 4; W32(esp, 0x41ea1eu); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41ea1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ea1f: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41ea22: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41ea27u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41ea27: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
L_41ea2a: /* 41ea2a: mov ecx, dword ptr [0x44f478] */
  ecx = R32((uint32_t)(0x44f478u));
/* 41ea30: mov cl, byte ptr [ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 41ea32: cmp cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41ea35: jne 0x41ea3f */
  if (!zf) goto L_41ea3f;
L_41ea37: /* 41ea37: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41ea3d: jmp 0x41eaa2 */
  goto L_41eaa2;
L_41ea3f: /* 41ea3f: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ea41: je 0x41ea5c */
  if (zf) goto L_41ea5c;
L_41ea43: /* 41ea43: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 41ea47: mov ecx, eax */
  ecx = eax;
/* 41ea49: and ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 41ea4c: cmp cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41ea4f: je 0x41eaa2 */
  if (zf) goto L_41eaa2;
L_41ea51: /* 41ea51: and eax, 0xfffffff1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41ea54: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41ea57: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 41ea5a: jmp 0x41eaa2 */
  goto L_41eaa2;
L_41ea5c: /* 41ea5c: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41ea5f: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41ea64u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41ea64: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41ea66: je 0x41ea74 */
  if (zf) goto L_41ea74;
L_41ea68: /* 41ea68: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41ea6a: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41ea6d: call 0x41cbb3 */
  esp -= 4; W32(esp, 0x41ea72u); SPILL(); f_41cbb3(); if (g_unwind) return; RELOAD();
/* 41ea72: jmp 0x41eaa2 */
  goto L_41eaa2;
L_41ea74: /* 41ea74: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41ea77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ea78: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41ea7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ea7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ea7d: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41ea80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ea81: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41ea83: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41ea86: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x41ea8bu); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
/* 41ea8b: mov ecx, eax */
  ecx = eax;
/* 41ea8d: call 0x41d685 */
  esp -= 4; W32(esp, 0x41ea92u); SPILL(); f_41d685(); if (g_unwind) return; RELOAD();
/* 41ea92: mov ecx, eax */
  ecx = eax;
/* 41ea94: call 0x41d364 */
  esp -= 4; W32(esp, 0x41ea99u); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41ea99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ea9a: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41ea9d: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41eaa2u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_41eaa2: /* 41eaa2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41eaa5: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41eaa8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41eaa9: call 0x41c766 */
  esp -= 4; W32(esp, 0x41eaaeu); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41eaae: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41eab1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41eab2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41eab3: ret  */
  esp += 4; SPILL(); return;
}

void f_41eab4(void) {
  LOAD_REGS();
L_41eab4: /* 41eab4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41eab5: mov ebp, esp */
  ebp = esp;
/* 41eab7: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41eaba: mov eax, dword ptr [0x44f488] */
  eax = R32((uint32_t)(0x44f488u));
/* 41eabf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41eac0: mov ecx, eax */
  ecx = eax;
/* 41eac2: shr ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 15;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 41eac5: xor ebx, ebx */
  ebx = 0;
/* 41eac7: not ecx */
  ecx = ~ecx;
/* 41eac9: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 41eaca: and ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ecx = r;
  }
/* 41eacc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41eacd: je 0x41ead4 */
  if (zf) goto L_41ead4;
L_41eacf: /* 41eacf: test ah, 0x10 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ead2: je 0x41ead6 */
  if (zf) goto L_41ead6;
L_41ead4: /* 41ead4: xor ebx, ebx */
  ebx = 0;
L_41ead6: /* 41ead6: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41eadb: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 41eade: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 41eae2: mov esi, 0xfffffe00 */
  esi = 0xfffffe00u;
/* 41eae7: and dword ptr [ebp - 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41eaea: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41eaf0: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 41eaf3: je 0x41eb99 */
  if (zf) goto L_41eb99;
L_41eaf9: /* 41eaf9: sub eax, 0x54 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 41eafc: je 0x41eb51 */
  if (zf) goto L_41eb51;
L_41eafe: /* 41eafe: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 41eaff: je 0x41eb4a */
  if (zf) goto L_41eb4a;
L_41eb01: /* 41eb01: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 41eb02: je 0x41eb43 */
  if (zf) goto L_41eb43;
L_41eb04: /* 41eb04: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 41eb05: je 0x41eb1b */
  if (zf) goto L_41eb1b;
L_41eb07: /* 41eb07: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 41eb08: je 0x41eb14 */
  if (zf) goto L_41eb14;
L_41eb0a: /* 41eb0a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 41eb0b: jne 0x41eb5e */
  if (!zf) goto L_41eb5e;
L_41eb0d: /* 41eb0d: push 0x4405f0 */
  { uint32_t v = 0x4405f0u; esp -= 4; W32(esp, v); }
/* 41eb12: jmp 0x41eb56 */
  goto L_41eb56;
L_41eb14: /* 41eb14: push 0x4405e4 */
  { uint32_t v = 0x4405e4u; esp -= 4; W32(esp, v); }
/* 41eb19: jmp 0x41eb56 */
  goto L_41eb56;
L_41eb1b: /* 41eb1b: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41eb1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41eb1f: mov ebx, ecx */
  ebx = ecx;
/* 41eb21: call 0x41d7a8 */
  esp -= 4; W32(esp, 0x41eb26u); SPILL(); f_41d7a8(); if (g_unwind) return; RELOAD();
/* 41eb26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41eb27: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41eb2a: push 0x4405dc */
  { uint32_t v = 0x4405dcu; esp -= 4; W32(esp, v); }
/* 41eb2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41eb30: call 0x41d624 */
  esp -= 4; W32(esp, 0x41eb35u); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 41eb35: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41eb38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41eb39: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41eb3c: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41eb41u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41eb41: jmp 0x41eb5e */
  goto L_41eb5e;
L_41eb43: /* 41eb43: push 0x4405d4 */
  { uint32_t v = 0x4405d4u; esp -= 4; W32(esp, v); }
/* 41eb48: jmp 0x41eb56 */
  goto L_41eb56;
L_41eb4a: /* 41eb4a: push 0x4405cc */
  { uint32_t v = 0x4405ccu; esp -= 4; W32(esp, v); }
/* 41eb4f: jmp 0x41eb56 */
  goto L_41eb56;
L_41eb51: /* 41eb51: push 0x4405c4 */
  { uint32_t v = 0x4405c4u; esp -= 4; W32(esp, v); }
L_41eb56: /* 41eb56: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41eb59: call 0x41d261 */
  esp -= 4; W32(esp, 0x41eb5eu); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
L_41eb5e: /* 41eb5e: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 41eb62: and dword ptr [ebp - 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 41eb65: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41eb67: je 0x41eb75 */
  if (zf) goto L_41eb75;
L_41eb69: /* 41eb69: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41eb6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41eb6d: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41eb70: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41eb75u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_41eb75: /* 41eb75: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41eb78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41eb79: call 0x41e9b5 */
  esp -= 4; W32(esp, 0x41eb7eu); SPILL(); f_41e9b5(); if (g_unwind) return; RELOAD();
/* 41eb7e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41eb7f: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41eb82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41eb83: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41eb86: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41eb8bu); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41eb8b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41eb8e: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41eb91: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41eb92: call 0x41c766 */
  esp -= 4; W32(esp, 0x41eb97u); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41eb97: jmp 0x41ebac */
  goto L_41ebac;
L_41eb99: /* 41eb99: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41eb9c: dec dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41eba2: push 0x4405b6 */
  { uint32_t v = 0x4405b6u; esp -= 4; W32(esp, v); }
/* 41eba7: call 0x41cfdc */
  esp -= 4; W32(esp, 0x41ebacu); SPILL(); f_41cfdc(); if (g_unwind) return; RELOAD();
L_41ebac: /* 41ebac: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41ebaf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41ebb0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41ebb1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41ebb2: ret  */
  esp += 4; SPILL(); return;
}

void f_41ebb3(void) {
  LOAD_REGS();
L_41ebb3: /* 41ebb3: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41ebb8: cmp byte ptr [eax], 0x3f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x3fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41ebbb: jne 0x41ebce */
  if (!zf) goto L_41ebce;
L_41ebbd: /* 41ebbd: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 41ebc1: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41ebc7: call 0x41e573 */
  esp -= 4; W32(esp, 0x41ebccu); SPILL(); f_41e573(); if (g_unwind) return; RELOAD();
/* 41ebcc: jmp 0x41ebda */
  goto L_41ebda;
L_41ebce: /* 41ebce: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41ebd0: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41ebd4: call 0x41e395 */
  esp -= 4; W32(esp, 0x41ebd9u); SPILL(); f_41e395(); if (g_unwind) return; RELOAD();
/* 41ebd9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41ebda: /* 41ebda: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 41ebde: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41ebdf: ret  */
  esp += 4; SPILL(); return;
}

void f_41ebe0(void) {
  LOAD_REGS();
L_41ebe0: /* 41ebe0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41ebe1: mov ebp, esp */
  ebp = esp;
/* 41ebe3: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41ebe6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41ebe8: call 0x41c6c9 */
  esp -= 4; W32(esp, 0x41ebedu); SPILL(); f_41c6c9(); if (g_unwind) return; RELOAD();
/* 41ebed: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41ebf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ebf1: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41ebf4: call 0x41cfdc */
  esp -= 4; W32(esp, 0x41ebf9u); SPILL(); f_41cfdc(); if (g_unwind) return; RELOAD();
/* 41ebf9: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41ebfe: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41ec01: je 0x41ec4a */
  if (zf) goto L_41ec4a;
L_41ec03: /* 41ec03: movsx ecx, byte ptr [eax] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 41ec06: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41ec07: sub ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 41ec0a: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41ec0f: je 0x41ec3b */
  if (zf) goto L_41ec3b;
L_41ec11: /* 41ec11: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 41ec12: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 41ec13: je 0x41ec26 */
  if (zf) goto L_41ec26;
L_41ec15: /* 41ec15: sub ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 41ec18: jne 0x41ec54 */
  if (!zf) goto L_41ec54;
L_41ec1a: /* 41ec1a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41ec1d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41ec1f: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x41ec24u); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
/* 41ec24: jmp 0x41ec6d */
  goto L_41ec6d;
L_41ec26: /* 41ec26: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41ec29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ec2a: call 0x41e9b5 */
  esp -= 4; W32(esp, 0x41ec2fu); SPILL(); f_41e9b5(); if (g_unwind) return; RELOAD();
/* 41ec2f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41ec30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ec31: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41ec34: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41ec39u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41ec39: jmp 0x41ec54 */
  goto L_41ec54;
L_41ec3b: /* 41ec3b: push 0x440520 */
  { uint32_t v = 0x440520u; esp -= 4; W32(esp, v); }
/* 41ec40: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41ec43: call 0x41d431 */
  esp -= 4; W32(esp, 0x41ec48u); SPILL(); f_41d431(); if (g_unwind) return; RELOAD();
/* 41ec48: jmp 0x41ec54 */
  goto L_41ec54;
L_41ec4a: /* 41ec4a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41ec4c: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41ec4f: call 0x41ce96 */
  esp -= 4; W32(esp, 0x41ec54u); SPILL(); f_41ce96(); if (g_unwind) return; RELOAD();
L_41ec54: /* 41ec54: push 0x440600 */
  { uint32_t v = 0x440600u; esp -= 4; W32(esp, v); }
/* 41ec59: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41ec5c: call 0x41d431 */
  esp -= 4; W32(esp, 0x41ec61u); SPILL(); f_41d431(); if (g_unwind) return; RELOAD();
/* 41ec61: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41ec64: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41ec67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ec68: call 0x41c766 */
  esp -= 4; W32(esp, 0x41ec6du); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
L_41ec6d: /* 41ec6d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41ec70: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41ec71: ret  */
  esp += 4; SPILL(); return;
}

void f_41ec72(void) {
  LOAD_REGS();
L_41ec72: /* 41ec72: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41ec73: mov ebp, esp */
  ebp = esp;
/* 41ec75: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41ec78: and dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 41ec7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ec7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41ec7e: mov edi, 0xfffffe00 */
  edi = 0xfffffe00u;
/* 41ec83: and dword ptr [ebp - 0x1c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 41ec86: call 0x41c297 */
  esp -= 4; W32(esp, 0x41ec8bu); SPILL(); f_41c297(); if (g_unwind) return; RELOAD();
/* 41ec8b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 41ec8e: mov esi, eax */
  esi = eax;
/* 41ec90: call 0x41ca7c */
  esp -= 4; W32(esp, 0x41ec95u); SPILL(); f_41ca7c(); if (g_unwind) return; RELOAD();
/* 41ec95: cmp esi, 0xffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ec9b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 41ec9e: jne 0x41ecaf */
  if (!zf) goto L_41ecaf;
L_41eca0: /* 41eca0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41eca3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41eca5: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x41ecaau); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
/* 41ecaa: jmp 0x41f680 */
  goto L_41f680;
L_41ecaf: /* 41ecaf: cmp esi, 0xfffe */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ecb5: jne 0x41eccc */
  if (!zf) goto L_41eccc;
L_41ecb7: /* 41ecb7: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41ecba: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41ecbc: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41ecbf: call 0x41d602 */
  esp -= 4; W32(esp, 0x41ecc4u); SPILL(); f_41d602(); if (g_unwind) return; RELOAD();
/* 41ecc4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41ecc7: jmp 0x41f680 */
  goto L_41f680;
L_41eccc: /* 41eccc: cmp esi, 0xfffd */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ecd2: jne 0x41ece4 */
  if (!zf) goto L_41ece4;
L_41ecd4: /* 41ecd4: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41ecd7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41ecda: call 0x41c766 */
  esp -= 4; W32(esp, 0x41ecdfu); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41ecdf: jmp 0x41f680 */
  goto L_41f680;
L_41ece4: /* 41ece4: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 41ece7: and dword ptr [ebp - 4], 0x8000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x8000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 41ecee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41ecef: mov ebx, 0x800 */
  ebx = 0x800u;
/* 41ecf4: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* 41ecf9: je 0x41f19c */
  if (zf) goto L_41f19c;
L_41ecff: /* 41ecff: xor eax, eax */
  eax = 0;
/* 41ed01: mov dword ptr [ebp - 0xc], esi */
  W32((uint32_t)(ebp + 0xfffffff4u), esi);
/* 41ed04: and dword ptr [ebp - 0xc], 0x1800 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x1800u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 41ed0b: cmp dword ptr [ebp - 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ed0e: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 41ed11: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 41ed14: cmp dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ed18: mov eax, esi */
  eax = esi;
/* 41ed1a: je 0x41ed23 */
  if (zf) goto L_41ed23;
L_41ed1c: /* 41ed1c: and eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41ed21: jmp 0x41ed25 */
  goto L_41ed25;
L_41ed23: /* 41ed23: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41ed25: /* 41ed25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41ed27: je 0x41ed38 */
  if (zf) goto L_41ed38;
L_41ed29: /* 41ed29: mov eax, esi */
  eax = esi;
/* 41ed2b: and eax, 0x1b00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1b00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41ed30: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ed32: je 0x41f19c */
  if (zf) goto L_41f19c;
L_41ed38: /* 41ed38: cmp dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ed3c: mov eax, esi */
  eax = esi;
/* 41ed3e: je 0x41ed47 */
  if (zf) goto L_41ed47;
L_41ed40: /* 41ed40: and eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41ed45: jmp 0x41ed49 */
  goto L_41ed49;
L_41ed47: /* 41ed47: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41ed49: /* 41ed49: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41ed4b: je 0x41ed6a */
  if (zf) goto L_41ed6a;
L_41ed4d: /* 41ed4d: mov eax, esi */
  eax = esi;
/* 41ed4f: and eax, 0x1b00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1b00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41ed54: cmp eax, 0x1100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ed59: je 0x41f19c */
  if (zf) goto L_41f19c;
L_41ed5f: /* 41ed5f: cmp eax, 0x1200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ed64: je 0x41f19c */
  if (zf) goto L_41f19c;
L_41ed6a: /* 41ed6a: test esi, 0x4000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41ed70: je 0x41edc1 */
  if (zf) goto L_41edc1;
L_41ed72: /* 41ed72: mov eax, dword ptr [0x44f488] */
  eax = R32((uint32_t)(0x44f488u));
/* 41ed77: mov ecx, eax */
  ecx = eax;
/* 41ed79: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 41ed7b: not ecx */
  ecx = ~ecx;
/* 41ed7d: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ed80: je 0x41edae */
  if (zf) goto L_41edae;
L_41ed82: /* 41ed82: shr eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 41ed85: not eax */
  eax = ~eax;
/* 41ed87: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ed89: je 0x41edae */
  if (zf) goto L_41edae;
L_41ed8b: /* 41ed8b: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 41ed8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ed8f: call 0x41ebe0 */
  esp -= 4; W32(esp, 0x41ed94u); SPILL(); f_41ebe0(); if (g_unwind) return; RELOAD();
/* 41ed94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ed95: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 41ed98: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 41ed9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ed9b: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x41eda0u); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 41eda0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41eda3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41eda4: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41eda7: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41edacu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41edac: jmp 0x41edc1 */
  goto L_41edc1;
L_41edae: /* 41edae: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 41edb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41edb2: call 0x41ebe0 */
  esp -= 4; W32(esp, 0x41edb7u); SPILL(); f_41ebe0(); if (g_unwind) return; RELOAD();
/* 41edb7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41edb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41edb9: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41edbc: call 0x41cb7e */
  esp -= 4; W32(esp, 0x41edc1u); SPILL(); f_41cb7e(); if (g_unwind) return; RELOAD();
L_41edc1: /* 41edc1: cmp dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41edc5: mov ebx, 0x1000 */
  ebx = 0x1000u;
/* 41edca: mov eax, esi */
  eax = esi;
/* 41edcc: je 0x41edd5 */
  if (zf) goto L_41edd5;
L_41edce: /* 41edce: and eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41edd3: jmp 0x41edd7 */
  goto L_41edd7;
L_41edd5: /* 41edd5: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41edd7: /* 41edd7: xor ecx, ecx */
  ecx = 0;
/* 41edd9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41eddb: je 0x41eeba */
  if (zf) goto L_41eeba;
L_41ede1: /* 41ede1: cmp dword ptr [ebp - 0xc], 0x1800 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x1800u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ede8: jne 0x41eeba */
  if (!zf) goto L_41eeba;
L_41edee: /* 41edee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41edef: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 41edf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41edf3: call 0x41d6c4 */
  esp -= 4; W32(esp, 0x41edf8u); SPILL(); f_41d6c4(); if (g_unwind) return; RELOAD();
/* 41edf8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41edf9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41edfa: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 41edfd: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 41edff: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 41ee02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ee03: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 41ee06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ee07: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 41ee0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ee0b: push 0x7b */
  { uint32_t v = 0x7bu; esp -= 4; W32(esp, v); }
/* 41ee0d: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41ee10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ee11: call 0x41d646 */
  esp -= 4; W32(esp, 0x41ee16u); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41ee16: mov ecx, eax */
  ecx = eax;
/* 41ee18: call 0x41d364 */
  esp -= 4; W32(esp, 0x41ee1du); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41ee1d: mov ecx, eax */
  ecx = eax;
/* 41ee1f: call 0x41d646 */
  esp -= 4; W32(esp, 0x41ee24u); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41ee24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ee25: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41ee28: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41ee2du); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41ee2d: push 0x4406f0 */
  { uint32_t v = 0x4406f0u; esp -= 4; W32(esp, v); }
/* 41ee32: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 41ee35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ee36: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 41ee39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ee3a: call 0x41d32d */
  esp -= 4; W32(esp, 0x41ee3fu); SPILL(); f_41d32d(); if (g_unwind) return; RELOAD();
/* 41ee3f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41ee40: mov ecx, eax */
  ecx = eax;
/* 41ee42: call 0x41d685 */
  esp -= 4; W32(esp, 0x41ee47u); SPILL(); f_41d685(); if (g_unwind) return; RELOAD();
/* 41ee47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ee48: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41ee4b: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41ee50u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41ee50: mov eax, dword ptr [0x44f488] */
  eax = R32((uint32_t)(0x44f488u));
/* 41ee55: mov ecx, eax */
  ecx = eax;
/* 41ee57: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 41ee59: not ecx */
  ecx = ~ecx;
/* 41ee5b: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ee5e: je 0x41eea2 */
  if (zf) goto L_41eea2;
L_41ee60: /* 41ee60: shr eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 41ee63: not eax */
  eax = ~eax;
/* 41ee65: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ee67: je 0x41eea2 */
  if (zf) goto L_41eea2;
L_41ee69: /* 41ee69: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41ee6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ee6d: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 41ee70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ee71: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 41ee73: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 41ee76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ee77: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 41ee7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ee7b: call 0x41d288 */
  esp -= 4; W32(esp, 0x41ee80u); SPILL(); f_41d288(); if (g_unwind) return; RELOAD();
/* 41ee80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ee81: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41ee84: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 41ee86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ee87: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x41ee8cu); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 41ee8c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41ee8f: mov ecx, eax */
  ecx = eax;
/* 41ee91: call 0x41d646 */
  esp -= 4; W32(esp, 0x41ee96u); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41ee96: mov ecx, eax */
  ecx = eax;
/* 41ee98: call 0x41d364 */
  esp -= 4; W32(esp, 0x41ee9du); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41ee9d: jmp 0x41f3f2 */
  goto L_41f3f2;
L_41eea2: /* 41eea2: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 41eea5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41eea6: call 0x41d288 */
  esp -= 4; W32(esp, 0x41eeabu); SPILL(); f_41d288(); if (g_unwind) return; RELOAD();
/* 41eeab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41eeac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41eead: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41eeb0: call 0x41cb7e */
  esp -= 4; W32(esp, 0x41eeb5u); SPILL(); f_41cb7e(); if (g_unwind) return; RELOAD();
/* 41eeb5: jmp 0x41f3fb */
  goto L_41f3fb;
L_41eeba: /* 41eeba: and dword ptr [ebp - 0x24], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffdcu), r);
  }
/* 41eebd: and dword ptr [ebp - 0x2c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffd4u), r);
  }
/* 41eec0: and dword ptr [ebp - 0xc], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 41eec3: cmp dword ptr [ebp - 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41eec6: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 41eec9: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 41eecc: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 41eecf: mov eax, esi */
  eax = esi;
/* 41eed1: je 0x41eeda */
  if (zf) goto L_41eeda;
L_41eed3: /* 41eed3: and eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41eed8: jmp 0x41eedc */
  goto L_41eedc;
L_41eeda: /* 41eeda: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41eedc: /* 41eedc: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41eede: je 0x41ef27 */
  if (zf) goto L_41ef27;
L_41eee0: /* 41eee0: cmp dword ptr [ebp - 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41eee3: je 0x41ef0c */
  if (zf) goto L_41ef0c;
L_41eee5: /* 41eee5: mov eax, esi */
  eax = esi;
/* 41eee7: and eax, 0x700 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x700u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41eeec: cmp eax, 0x500 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x500u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41eef1: jne 0x41ef0c */
  if (!zf) goto L_41ef0c;
L_41eef3: /* 41eef3: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 41eef6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41eef8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41eef9: call 0x41d6c4 */
  esp -= 4; W32(esp, 0x41eefeu); SPILL(); f_41d6c4(); if (g_unwind) return; RELOAD();
/* 41eefe: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41eeff: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41ef00: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 41ef03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ef04: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 41ef07: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41ef0cu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_41ef0c: /* 41ef0c: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 41ef0f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41ef11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ef12: call 0x41d6c4 */
  esp -= 4; W32(esp, 0x41ef17u); SPILL(); f_41d6c4(); if (g_unwind) return; RELOAD();
/* 41ef17: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41ef18: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41ef19: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 41ef1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ef1d: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 41ef20: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41ef25u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41ef25: xor ecx, ecx */
  ecx = 0;
L_41ef27: /* 41ef27: cmp dword ptr [ebp - 8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ef2a: je 0x41ef6a */
  if (zf) goto L_41ef6a;
L_41ef2c: /* 41ef2c: mov eax, esi */
  eax = esi;
/* 41ef2e: and eax, 0x700 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x700u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41ef33: cmp eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41ef38: je 0x41ef6a */
  if (zf) goto L_41ef6a;
L_41ef3a: /* 41ef3a: mov eax, dword ptr [0x44f488] */
  eax = R32((uint32_t)(0x44f488u));
/* 41ef3f: and eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41ef42: cmp al, 0x60 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x60u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41ef44: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 41ef47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ef48: je 0x41ef5b */
  if (zf) goto L_41ef5b;
L_41ef4a: /* 41ef4a: call 0x41c967 */
  esp -= 4; W32(esp, 0x41ef4fu); SPILL(); f_41c967(); if (g_unwind) return; RELOAD();
/* 41ef4f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41ef50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ef51: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41ef54: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41ef59u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41ef59: jmp 0x41ef6a */
  goto L_41ef6a;
L_41ef5b: /* 41ef5b: call 0x41c967 */
  esp -= 4; W32(esp, 0x41ef60u); SPILL(); f_41c967(); if (g_unwind) return; RELOAD();
/* 41ef60: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41ef61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ef62: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41ef65: call 0x41cb7e */
  esp -= 4; W32(esp, 0x41ef6au); SPILL(); f_41cb7e(); if (g_unwind) return; RELOAD();
L_41ef6a: /* 41ef6a: mov eax, dword ptr [0x44f488] */
  eax = R32((uint32_t)(0x44f488u));
/* 41ef6f: mov ecx, eax */
  ecx = eax;
/* 41ef71: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 41ef73: not ecx */
  ecx = ~ecx;
/* 41ef75: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ef78: je 0x41efa7 */
  if (zf) goto L_41efa7;
L_41ef7a: /* 41ef7a: shr eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 41ef7d: not eax */
  eax = ~eax;
/* 41ef7f: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ef81: je 0x41efa7 */
  if (zf) goto L_41efa7;
L_41ef83: /* 41ef83: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41ef86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ef87: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 41ef8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ef8b: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 41ef8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ef8f: call 0x41d288 */
  esp -= 4; W32(esp, 0x41ef94u); SPILL(); f_41d288(); if (g_unwind) return; RELOAD();
/* 41ef94: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41ef95: mov ecx, eax */
  ecx = eax;
/* 41ef97: call 0x41d364 */
  esp -= 4; W32(esp, 0x41ef9cu); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41ef9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ef9d: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41efa0: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41efa5u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41efa5: jmp 0x41efba */
  goto L_41efba;
L_41efa7: /* 41efa7: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 41efaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41efab: call 0x41d288 */
  esp -= 4; W32(esp, 0x41efb0u); SPILL(); f_41d288(); if (g_unwind) return; RELOAD();
/* 41efb0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41efb1: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41efb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41efb5: call 0x41cb7e */
  esp -= 4; W32(esp, 0x41efbau); SPILL(); f_41cb7e(); if (g_unwind) return; RELOAD();
L_41efba: /* 41efba: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 41efbd: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41efc2u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41efc2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41efc4: jne 0x41f001 */
  if (!zf) goto L_41f001;
L_41efc6: /* 41efc6: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41efc9: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41efceu); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41efce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41efd0: jne 0x41eff6 */
  if (!zf) goto L_41eff6;
L_41efd2: /* 41efd2: test dword ptr [0x44f488], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f488u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41efd8: jne 0x41eff6 */
  if (!zf) goto L_41eff6;
L_41efda: /* 41efda: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41efdd: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 41efe0: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 41efe2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41efe3: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x41efe8u); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 41efe8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41efeb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41efec: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41efef: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41eff4u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41eff4: jmp 0x41f001 */
  goto L_41f001;
L_41eff6: /* 41eff6: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41eff9: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41effc: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41f001u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_41f001: /* 41f001: and dword ptr [ebp - 0x34], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffccu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffccu), r);
  }
/* 41f004: xor ebx, ebx */
  ebx = 0;
/* 41f006: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f009: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 41f00c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41f00d: je 0x41f041 */
  if (zf) goto L_41f041;
L_41f00f: /* 41f00f: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 41f012: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f013: call 0x41ce67 */
  esp -= 4; W32(esp, 0x41f018u); SPILL(); f_41ce67(); if (g_unwind) return; RELOAD();
/* 41f018: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f019: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41f01c: push 0x4406ec */
  { uint32_t v = 0x4406ecu; esp -= 4; W32(esp, v); }
/* 41f021: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f022: call 0x41d624 */
  esp -= 4; W32(esp, 0x41f027u); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 41f027: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41f02a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f02b: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41f02e: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41f033u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41f033: test byte ptr [0x44f489], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44f489u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41f03a: je 0x41f072 */
  if (zf) goto L_41f072;
L_41f03c: /* 41f03c: jmp 0x41f673 */
  goto L_41f673;
L_41f041: /* 41f041: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 41f043: mov ecx, 0x44f458 */
  ecx = 0x44f458u;
/* 41f048: call 0x41c6e2 */
  esp -= 4; W32(esp, 0x41f04du); SPILL(); f_41c6e2(); if (g_unwind) return; RELOAD();
/* 41f04d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f04f: je 0x41f05b */
  if (zf) goto L_41f05b;
L_41f051: /* 41f051: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 41f054: and dword ptr [eax + 4], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 41f057: mov ebx, eax */
  ebx = eax;
/* 41f059: jmp 0x41f05d */
  goto L_41f05d;
L_41f05b: /* 41f05b: xor ebx, ebx */
  ebx = 0;
L_41f05d: /* 41f05d: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 41f060: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41f061: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f062: call 0x41ce67 */
  esp -= 4; W32(esp, 0x41f067u); SPILL(); f_41ce67(); if (g_unwind) return; RELOAD();
/* 41f067: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41f068: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41f069: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f06a: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 41f06d: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41f072u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_41f072: /* 41f072: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 41f075: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f077: mov eax, esi */
  eax = esi;
/* 41f079: je 0x41f082 */
  if (zf) goto L_41f082;
L_41f07b: /* 41f07b: and eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f080: jmp 0x41f087 */
  goto L_41f087;
L_41f082: /* 41f082: and eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41f087: /* 41f087: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f089: je 0x41f0f1 */
  if (zf) goto L_41f0f1;
L_41f08b: /* 41f08b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f08d: je 0x41f0ca */
  if (zf) goto L_41f0ca;
L_41f08f: /* 41f08f: mov eax, esi */
  eax = esi;
/* 41f091: and eax, 0x700 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x700u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f096: cmp eax, 0x500 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x500u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f09b: jne 0x41f0ca */
  if (!zf) goto L_41f0ca;
L_41f09d: /* 41f09d: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 41f09f: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 41f0a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f0a3: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 41f0a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f0a7: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41f0aa: push 0x4406e0 */
  { uint32_t v = 0x4406e0u; esp -= 4; W32(esp, v); }
/* 41f0af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f0b0: call 0x41d624 */
  esp -= 4; W32(esp, 0x41f0b5u); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 41f0b5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41f0b8: mov ecx, eax */
  ecx = eax;
/* 41f0ba: call 0x41d646 */
  esp -= 4; W32(esp, 0x41f0bfu); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41f0bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f0c0: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41f0c3: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41f0c8u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41f0c8: jmp 0x41f0d7 */
  goto L_41f0d7;
L_41f0ca: /* 41f0ca: push 0x4406d4 */
  { uint32_t v = 0x4406d4u; esp -= 4; W32(esp, v); }
/* 41f0cf: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41f0d2: call 0x41d431 */
  esp -= 4; W32(esp, 0x41f0d7u); SPILL(); f_41d431(); if (g_unwind) return; RELOAD();
L_41f0d7: /* 41f0d7: push 0x4406f0 */
  { uint32_t v = 0x4406f0u; esp -= 4; W32(esp, v); }
/* 41f0dc: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 41f0df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f0e0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 41f0e3: call 0x41d685 */
  esp -= 4; W32(esp, 0x41f0e8u); SPILL(); f_41d685(); if (g_unwind) return; RELOAD();
/* 41f0e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f0e9: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41f0ec: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41f0f1u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
L_41f0f1: /* 41f0f1: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 41f0f3: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 41f0f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f0f7: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 41f0fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f0fb: call 0x41d879 */
  esp -= 4; W32(esp, 0x41f100u); SPILL(); f_41d879(); if (g_unwind) return; RELOAD();
/* 41f100: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f101: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 41f104: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 41f106: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f107: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x41f10cu); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 41f10c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41f10f: mov ecx, eax */
  ecx = eax;
/* 41f111: call 0x41d646 */
  esp -= 4; W32(esp, 0x41f116u); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41f116: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f117: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41f11a: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41f11fu); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41f11f: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f121: je 0x41f13d */
  if (zf) goto L_41f13d;
L_41f123: /* 41f123: mov eax, esi */
  eax = esi;
/* 41f125: and eax, 0x700 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x700u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f12a: cmp eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f12f: je 0x41f13d */
  if (zf) goto L_41f13d;
L_41f131: /* 41f131: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41f134: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f135: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41f138: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41f13du); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
L_41f13d: /* 41f13d: mov eax, dword ptr [0x44f488] */
  eax = R32((uint32_t)(0x44f488u));
/* 41f142: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 41f145: not eax */
  eax = ~eax;
/* 41f147: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41f149: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 41f14c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f14d: je 0x41f160 */
  if (zf) goto L_41f160;
L_41f14f: /* 41f14f: call 0x41d90b */
  esp -= 4; W32(esp, 0x41f154u); SPILL(); f_41d90b(); if (g_unwind) return; RELOAD();
/* 41f154: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41f155: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f156: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41f159: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41f15eu); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41f15e: jmp 0x41f16f */
  goto L_41f16f;
L_41f160: /* 41f160: call 0x41d90b */
  esp -= 4; W32(esp, 0x41f165u); SPILL(); f_41d90b(); if (g_unwind) return; RELOAD();
/* 41f165: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41f166: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f167: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41f16a: call 0x41cb7e */
  esp -= 4; W32(esp, 0x41f16fu); SPILL(); f_41cb7e(); if (g_unwind) return; RELOAD();
L_41f16f: /* 41f16f: mov eax, dword ptr [0x44f488] */
  eax = R32((uint32_t)(0x44f488u));
/* 41f174: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 41f177: not eax */
  eax = ~eax;
/* 41f179: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41f17b: je 0x41f3fb */
  if (zf) goto L_41f3fb;
L_41f181: /* 41f181: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f183: je 0x41f3fb */
  if (zf) goto L_41f3fb;
L_41f189: /* 41f189: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41f18c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f18d: mov ecx, ebx */
  ecx = ebx;
/* 41f18f: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41f194u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41f194: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 41f197: jmp 0x41f3f2 */
  goto L_41f3f2;
L_41f19c: /* 41f19c: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41f19f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41f1a2: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41f1a7u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41f1a7: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41f1aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f1ac: mov ecx, 0x7c00 */
  ecx = 0x7c00u;
/* 41f1b1: jne 0x41f251 */
  if (!zf) goto L_41f251;
L_41f1b7: /* 41f1b7: mov edx, esi */
  edx = esi;
/* 41f1b9: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 41f1bb: cmp edx, 0x6800 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6800u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f1c1: jne 0x41f1d1 */
  if (!zf) goto L_41f1d1;
L_41f1c3: /* 41f1c3: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41f1c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f1c7: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41f1ca: call 0x41db12 */
  esp -= 4; W32(esp, 0x41f1cfu); SPILL(); f_41db12(); if (g_unwind) return; RELOAD();
/* 41f1cf: jmp 0x41f246 */
  goto L_41f246;
L_41f1d1: /* 41f1d1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f1d3: jne 0x41f251 */
  if (!zf) goto L_41f251;
L_41f1d5: /* 41f1d5: mov edx, esi */
  edx = esi;
/* 41f1d7: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 41f1d9: cmp edx, 0x7000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f1df: je 0x41f1c3 */
  if (zf) goto L_41f1c3;
L_41f1e1: /* 41f1e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f1e3: jne 0x41f251 */
  if (!zf) goto L_41f251;
L_41f1e5: /* 41f1e5: mov edx, esi */
  edx = esi;
/* 41f1e7: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 41f1e9: cmp edx, 0x6000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x6000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f1ef: jne 0x41f22e */
  if (!zf) goto L_41f22e;
L_41f1f1: /* 41f1f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f1f2: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 41f1f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f1f6: call 0x41d6c4 */
  esp -= 4; W32(esp, 0x41f1fbu); SPILL(); f_41d6c4(); if (g_unwind) return; RELOAD();
/* 41f1fb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41f1fc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41f1fd: push 0x4406d0 */
  { uint32_t v = 0x4406d0u; esp -= 4; W32(esp, v); }
/* 41f202: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41f205: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 41f208: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f209: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 41f20c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f20d: push 0x7b */
  { uint32_t v = 0x7bu; esp -= 4; W32(esp, v); }
/* 41f20f: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 41f212: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f213: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41f216: call 0x41d646 */
  esp -= 4; W32(esp, 0x41f21bu); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41f21b: mov ecx, eax */
  ecx = eax;
/* 41f21d: call 0x41d364 */
  esp -= 4; W32(esp, 0x41f222u); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41f222: mov ecx, eax */
  ecx = eax;
/* 41f224: call 0x41d685 */
  esp -= 4; W32(esp, 0x41f229u); SPILL(); f_41d685(); if (g_unwind) return; RELOAD();
/* 41f229: jmp 0x41f67f */
  goto L_41f67f;
L_41f22e: /* 41f22e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f230: jne 0x41f251 */
  if (!zf) goto L_41f251;
L_41f232: /* 41f232: mov edx, esi */
  edx = esi;
/* 41f234: and edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 41f236: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f238: jne 0x41f24d */
  if (!zf) goto L_41f24d;
L_41f23a: /* 41f23a: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41f23d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f23e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41f241: call 0x41d584 */
  esp -= 4; W32(esp, 0x41f246u); SPILL(); f_41d584(); if (g_unwind) return; RELOAD();
L_41f246: /* 41f246: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41f247: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41f248: jmp 0x41f67f */
  goto L_41f67f;
L_41f24d: /* 41f24d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f24f: je 0x41f25c */
  if (zf) goto L_41f25c;
L_41f251: /* 41f251: mov eax, esi */
  eax = esi;
/* 41f253: and eax, 0x1800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f258: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41f25a: jmp 0x41f263 */
  goto L_41f263;
L_41f25c: /* 41f25c: mov eax, esi */
  eax = esi;
/* 41f25e: and eax, 0x6000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41f263: /* 41f263: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41f265: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41f267: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41f268: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f26a: mov edi, 0x1000 */
  edi = 0x1000u;
/* 41f26f: mov eax, esi */
  eax = esi;
/* 41f271: je 0x41f27a */
  if (zf) goto L_41f27a;
L_41f273: /* 41f273: and eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f278: jmp 0x41f27c */
  goto L_41f27c;
L_41f27a: /* 41f27a: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41f27c: /* 41f27c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f27e: je 0x41f2ac */
  if (zf) goto L_41f2ac;
L_41f280: /* 41f280: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41f283: mov edx, esi */
  edx = esi;
/* 41f285: and edx, 0x1b00 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1b00u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 41f28b: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 41f28d: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* 41f28f: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 41f291: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 41f292: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41f294: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41f296: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f298: je 0x41f2ac */
  if (zf) goto L_41f2ac;
L_41f29a: /* 41f29a: push 0x4406ac */
  { uint32_t v = 0x4406acu; esp -= 4; W32(esp, v); }
L_41f29f: /* 41f29f: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41f2a2: call 0x41d431 */
  esp -= 4; W32(esp, 0x41f2a7u); SPILL(); f_41d431(); if (g_unwind) return; RELOAD();
/* 41f2a7: jmp 0x41f36a */
  goto L_41f36a;
L_41f2ac: /* 41f2ac: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f2b0: mov eax, esi */
  eax = esi;
/* 41f2b2: je 0x41f2bd */
  if (zf) goto L_41f2bd;
L_41f2b4: /* 41f2b4: and eax, 0x1800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f2b9: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41f2bb: jmp 0x41f2c2 */
  goto L_41f2c2;
L_41f2bd: /* 41f2bd: and eax, 0x6000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41f2c2: /* 41f2c2: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41f2c4: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41f2c6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41f2c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f2c9: mov eax, esi */
  eax = esi;
/* 41f2cb: je 0x41f2d4 */
  if (zf) goto L_41f2d4;
L_41f2cd: /* 41f2cd: and eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f2d2: jmp 0x41f2d6 */
  goto L_41f2d6;
L_41f2d4: /* 41f2d4: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41f2d6: /* 41f2d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f2d8: je 0x41f2ff */
  if (zf) goto L_41f2ff;
L_41f2da: /* 41f2da: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41f2dd: mov edx, esi */
  edx = esi;
/* 41f2df: and edx, 0x1b00 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1b00u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 41f2e5: sub edx, 0x1100 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1100u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 41f2eb: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* 41f2ed: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 41f2ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 41f2f0: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41f2f2: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41f2f4: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f2f6: je 0x41f2ff */
  if (zf) goto L_41f2ff;
L_41f2f8: /* 41f2f8: push 0x440678 */
  { uint32_t v = 0x440678u; esp -= 4; W32(esp, v); }
/* 41f2fd: jmp 0x41f29f */
  goto L_41f29f;
L_41f2ff: /* 41f2ff: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f303: mov eax, esi */
  eax = esi;
/* 41f305: je 0x41f310 */
  if (zf) goto L_41f310;
L_41f307: /* 41f307: and eax, 0x1800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f30c: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41f30e: jmp 0x41f315 */
  goto L_41f315;
L_41f310: /* 41f310: and eax, 0x6000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41f315: /* 41f315: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41f317: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41f319: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41f31a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f31c: mov eax, esi */
  eax = esi;
/* 41f31e: je 0x41f327 */
  if (zf) goto L_41f327;
L_41f320: /* 41f320: and eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f325: jmp 0x41f329 */
  goto L_41f329;
L_41f327: /* 41f327: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41f329: /* 41f329: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f32b: je 0x41f355 */
  if (zf) goto L_41f355;
L_41f32d: /* 41f32d: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41f330: mov edx, esi */
  edx = esi;
/* 41f332: and edx, 0x1b00 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1b00u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 41f338: sub edx, 0x1200 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1200u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 41f33e: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  edx = r;
  }
/* 41f340: sbb edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* 41f342: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 41f343: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41f345: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41f347: test edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f349: je 0x41f355 */
  if (zf) goto L_41f355;
L_41f34b: /* 41f34b: push 0x440648 */
  { uint32_t v = 0x440648u; esp -= 4; W32(esp, v); }
/* 41f350: jmp 0x41f29f */
  goto L_41f29f;
L_41f355: /* 41f355: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f359: jne 0x41f370 */
  if (!zf) goto L_41f370;
L_41f35b: /* 41f35b: mov eax, esi */
  eax = esi;
/* 41f35d: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f35f: cmp eax, 0x7800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7800u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f364: je 0x41f673 */
  if (zf) goto L_41f673;
L_41f36a: /* 41f36a: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f36e: je 0x41f37b */
  if (zf) goto L_41f37b;
L_41f370: /* 41f370: mov eax, esi */
  eax = esi;
/* 41f372: and eax, 0x1800 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1800u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f377: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41f379: jmp 0x41f382 */
  goto L_41f382;
L_41f37b: /* 41f37b: mov eax, esi */
  eax = esi;
/* 41f37d: and eax, 0x6000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41f382: /* 41f382: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41f384: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41f386: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41f387: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f389: mov eax, esi */
  eax = esi;
/* 41f38b: je 0x41f394 */
  if (zf) goto L_41f394;
L_41f38d: /* 41f38d: and eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f392: jmp 0x41f396 */
  goto L_41f396;
L_41f394: /* 41f394: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41f396: /* 41f396: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f398: je 0x41f3e3 */
  if (zf) goto L_41f3e3;
L_41f39a: /* 41f39a: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41f39d: mov eax, esi */
  eax = esi;
/* 41f39f: and eax, 0x1b00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1b00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f3a4: xor edx, edx */
  edx = 0;
/* 41f3a6: cmp eax, 0x1100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f3ab: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 41f3ae: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* 41f3b0: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 41f3b2: test edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f3b4: jne 0x41f3cc */
  if (!zf) goto L_41f3cc;
L_41f3b6: /* 41f3b6: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41f3b9: xor edx, edx */
  edx = 0;
/* 41f3bb: cmp eax, 0x1200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1200u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f3c0: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 41f3c3: nop  */
/* 41f3c4: neg ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ecx = r;
  }
/* 41f3c6: sbb ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ecx = r;
  }
/* 41f3c8: test edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f3ca: je 0x41f3e3 */
  if (zf) goto L_41f3e3;
L_41f3cc: /* 41f3cc: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41f3cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f3d0: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 41f3d3: push 0x4406ec */
  { uint32_t v = 0x4406ecu; esp -= 4; W32(esp, v); }
/* 41f3d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f3d9: call 0x41d624 */
  esp -= 4; W32(esp, 0x41f3deu); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 41f3de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41f3e1: jmp 0x41f3f2 */
  goto L_41f3f2;
L_41f3e3: /* 41f3e3: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41f3e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f3e7: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 41f3ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f3eb: call 0x420c80 */
  esp -= 4; W32(esp, 0x41f3f0u); SPILL(); f_420c80(); if (g_unwind) return; RELOAD();
/* 41f3f0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41f3f1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41f3f2: /* 41f3f2: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41f3f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f3f6: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41f3fbu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_41f3fb: /* 41f3fb: xor edx, edx */
  edx = 0;
/* 41f3fd: cmp dword ptr [ebp - 4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f400: mov ecx, 0x6000 */
  ecx = 0x6000u;
/* 41f405: mov ebx, 0x800 */
  ebx = 0x800u;
/* 41f40a: mov edi, 0x1800 */
  edi = 0x1800u;
/* 41f40f: mov eax, esi */
  eax = esi;
/* 41f411: je 0x41f419 */
  if (zf) goto L_41f419;
L_41f413: /* 41f413: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f415: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41f417: jmp 0x41f41b */
  goto L_41f41b;
L_41f419: /* 41f419: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41f41b: /* 41f41b: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41f41d: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41f41f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41f420: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f422: je 0x41f62a */
  if (zf) goto L_41f62a;
L_41f428: /* 41f428: mov eax, dword ptr [0x44f488] */
  eax = R32((uint32_t)(0x44f488u));
/* 41f42d: shr eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 9;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 41f430: not eax */
  eax = ~eax;
/* 41f432: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41f434: je 0x41f541 */
  if (zf) goto L_41f541;
L_41f43a: /* 41f43a: cmp dword ptr [ebp - 4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f43d: mov eax, esi */
  eax = esi;
/* 41f43f: je 0x41f447 */
  if (zf) goto L_41f447;
L_41f441: /* 41f441: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f443: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41f445: jmp 0x41f449 */
  goto L_41f449;
L_41f447: /* 41f447: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41f449: /* 41f449: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41f44b: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41f44d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41f44e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f450: je 0x41f494 */
  if (zf) goto L_41f494;
L_41f452: /* 41f452: cmp dword ptr [ebp - 4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f455: je 0x41f46a */
  if (zf) goto L_41f46a;
L_41f457: /* 41f457: mov eax, esi */
  eax = esi;
/* 41f459: and eax, 0x700 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x700u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f45e: sub eax, 0x200 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41f463: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41f465: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41f467: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41f468: jmp 0x41f46d */
  goto L_41f46d;
L_41f46a: /* 41f46a: xor eax, eax */
  eax = 0;
/* 41f46c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_41f46d: /* 41f46d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f46f: je 0x41f494 */
  if (zf) goto L_41f494;
L_41f471: /* 41f471: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41f474: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f475: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 41f478: push 0x440640 */
  { uint32_t v = 0x440640u; esp -= 4; W32(esp, v); }
/* 41f47d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f47e: call 0x41d624 */
  esp -= 4; W32(esp, 0x41f483u); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 41f483: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41f486: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f487: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41f48a: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41f48fu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41f48f: mov ecx, 0x6000 */
  ecx = 0x6000u;
L_41f494: /* 41f494: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41f497: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f499: je 0x41f4b5 */
  if (zf) goto L_41f4b5;
L_41f49b: /* 41f49b: mov eax, esi */
  eax = esi;
/* 41f49d: and eax, 0x700 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x700u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f4a2: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f4a7: je 0x41f51e */
  if (zf) goto L_41f51e;
L_41f4a9: /* 41f4a9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f4ab: je 0x41f4b5 */
  if (zf) goto L_41f4b5;
L_41f4ad: /* 41f4ad: mov eax, esi */
  eax = esi;
/* 41f4af: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f4b1: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41f4b3: jmp 0x41f4b9 */
  goto L_41f4b9;
L_41f4b5: /* 41f4b5: mov eax, esi */
  eax = esi;
/* 41f4b7: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41f4b9: /* 41f4b9: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41f4bb: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41f4bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41f4be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f4c0: mov eax, esi */
  eax = esi;
/* 41f4c2: je 0x41f4cb */
  if (zf) goto L_41f4cb;
L_41f4c4: /* 41f4c4: and eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f4c9: jmp 0x41f4d0 */
  goto L_41f4d0;
L_41f4cb: /* 41f4cb: and eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41f4d0: /* 41f4d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f4d2: je 0x41f541 */
  if (zf) goto L_41f541;
L_41f4d4: /* 41f4d4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f4d6: mov eax, esi */
  eax = esi;
/* 41f4d8: je 0x41f4e0 */
  if (zf) goto L_41f4e0;
L_41f4da: /* 41f4da: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f4dc: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41f4de: jmp 0x41f4e2 */
  goto L_41f4e2;
L_41f4e0: /* 41f4e0: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41f4e2: /* 41f4e2: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41f4e4: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41f4e6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41f4e7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f4e9: je 0x41f4f9 */
  if (zf) goto L_41f4f9;
L_41f4eb: /* 41f4eb: mov eax, esi */
  eax = esi;
/* 41f4ed: and eax, 0x700 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x700u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f4f2: cmp eax, 0x500 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x500u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f4f7: je 0x41f51e */
  if (zf) goto L_41f51e;
L_41f4f9: /* 41f4f9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f4fb: mov eax, esi */
  eax = esi;
/* 41f4fd: je 0x41f505 */
  if (zf) goto L_41f505;
L_41f4ff: /* 41f4ff: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f501: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41f503: jmp 0x41f507 */
  goto L_41f507;
L_41f505: /* 41f505: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41f507: /* 41f507: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41f509: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41f50b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41f50c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f50e: je 0x41f541 */
  if (zf) goto L_41f541;
L_41f510: /* 41f510: mov eax, esi */
  eax = esi;
/* 41f512: and eax, 0x700 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x700u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f517: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f51c: jne 0x41f541 */
  if (!zf) goto L_41f541;
L_41f51e: /* 41f51e: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41f521: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f522: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 41f525: push 0x440634 */
  { uint32_t v = 0x440634u; esp -= 4; W32(esp, v); }
/* 41f52a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f52b: call 0x41d624 */
  esp -= 4; W32(esp, 0x41f530u); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 41f530: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41f533: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f534: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41f537: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41f53cu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41f53c: mov ecx, 0x6000 */
  ecx = 0x6000u;
L_41f541: /* 41f541: mov eax, dword ptr [0x44f488] */
  eax = R32((uint32_t)(0x44f488u));
/* 41f546: shr eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 41f549: not eax */
  eax = ~eax;
/* 41f54b: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41f54d: je 0x41f62a */
  if (zf) goto L_41f62a;
L_41f553: /* 41f553: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 41f556: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f558: mov eax, esi */
  eax = esi;
/* 41f55a: je 0x41f562 */
  if (zf) goto L_41f562;
L_41f55c: /* 41f55c: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f55e: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41f560: jmp 0x41f564 */
  goto L_41f564;
L_41f562: /* 41f562: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41f564: /* 41f564: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41f566: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41f568: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41f569: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f56b: je 0x41f595 */
  if (zf) goto L_41f595;
L_41f56d: /* 41f56d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f56f: mov eax, esi */
  eax = esi;
/* 41f571: je 0x41f57d */
  if (zf) goto L_41f57d;
L_41f573: /* 41f573: and al, 0xc0 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xc0u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 41f575: sub al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 41f577: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 41f579: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41f57b: jmp 0x41f585 */
  goto L_41f585;
L_41f57d: /* 41f57d: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f57f: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41f581: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41f583: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_41f585: /* 41f585: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41f586: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f588: je 0x41f595 */
  if (zf) goto L_41f595;
L_41f58a: /* 41f58a: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41f58d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f58e: push 0x440628 */
  { uint32_t v = 0x440628u; esp -= 4; W32(esp, v); }
/* 41f593: jmp 0x41f610 */
  goto L_41f610;
L_41f595: /* 41f595: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f597: mov eax, esi */
  eax = esi;
/* 41f599: je 0x41f5a1 */
  if (zf) goto L_41f5a1;
L_41f59b: /* 41f59b: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f59d: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41f59f: jmp 0x41f5a3 */
  goto L_41f5a3;
L_41f5a1: /* 41f5a1: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41f5a3: /* 41f5a3: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41f5a5: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41f5a7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41f5a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f5aa: je 0x41f5d7 */
  if (zf) goto L_41f5d7;
L_41f5ac: /* 41f5ac: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f5ae: mov eax, esi */
  eax = esi;
/* 41f5b0: je 0x41f5bc */
  if (zf) goto L_41f5bc;
L_41f5b2: /* 41f5b2: and al, 0xc0 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xc0u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 41f5b4: sub al, 0x80 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a - b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 41f5b6: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 41f5b8: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41f5ba: jmp 0x41f5c7 */
  goto L_41f5c7;
L_41f5bc: /* 41f5bc: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f5be: sub eax, 0x1000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41f5c3: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41f5c5: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_41f5c7: /* 41f5c7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41f5c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f5ca: je 0x41f5d7 */
  if (zf) goto L_41f5d7;
L_41f5cc: /* 41f5cc: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41f5cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f5d0: push 0x44061c */
  { uint32_t v = 0x44061cu; esp -= 4; W32(esp, v); }
/* 41f5d5: jmp 0x41f610 */
  goto L_41f610;
L_41f5d7: /* 41f5d7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f5d9: mov eax, esi */
  eax = esi;
/* 41f5db: je 0x41f5e3 */
  if (zf) goto L_41f5e3;
L_41f5dd: /* 41f5dd: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f5df: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41f5e1: jmp 0x41f5e5 */
  goto L_41f5e5;
L_41f5e3: /* 41f5e3: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41f5e5: /* 41f5e5: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41f5e7: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41f5e9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41f5ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f5ec: je 0x41f62a */
  if (zf) goto L_41f62a;
L_41f5ee: /* 41f5ee: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f5f0: mov eax, esi */
  eax = esi;
/* 41f5f2: je 0x41f5fc */
  if (zf) goto L_41f5fc;
L_41f5f4: /* 41f5f4: and al, 0xc0 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xc0u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 41f5f6: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 41f5f8: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41f5fa: jmp 0x41f602 */
  goto L_41f602;
L_41f5fc: /* 41f5fc: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f5fe: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41f600: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_41f602: /* 41f602: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41f603: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f605: je 0x41f62a */
  if (zf) goto L_41f62a;
L_41f607: /* 41f607: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41f60a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f60b: push 0x440610 */
  { uint32_t v = 0x440610u; esp -= 4; W32(esp, v); }
L_41f610: /* 41f610: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 41f613: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f614: call 0x41d624 */
  esp -= 4; W32(esp, 0x41f619u); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 41f619: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41f61c: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41f61f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f620: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41f625u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41f625: mov ecx, 0x6000 */
  ecx = 0x6000u;
L_41f62a: /* 41f62a: cmp dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41f62e: mov eax, esi */
  eax = esi;
/* 41f630: je 0x41f638 */
  if (zf) goto L_41f638;
L_41f632: /* 41f632: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f634: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 41f636: jmp 0x41f63a */
  goto L_41f63a;
L_41f638: /* 41f638: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_41f63a: /* 41f63a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 41f63c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 41f63e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41f63f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f641: je 0x41f64b */
  if (zf) goto L_41f64b;
L_41f643: /* 41f643: and esi, 0x400 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 41f649: jmp 0x41f651 */
  goto L_41f651;
L_41f64b: /* 41f64b: and esi, 0x1000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
L_41f651: /* 41f651: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f653: je 0x41f673 */
  if (zf) goto L_41f673;
L_41f655: /* 41f655: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41f658: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f659: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 41f65c: push 0x440604 */
  { uint32_t v = 0x440604u; esp -= 4; W32(esp, v); }
/* 41f661: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f662: call 0x41d624 */
  esp -= 4; W32(esp, 0x41f667u); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 41f667: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41f66a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f66b: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41f66e: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41f673u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_41f673: /* 41f673: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41f676: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41f679: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f67a: call 0x41c766 */
  esp -= 4; W32(esp, 0x41f67fu); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
L_41f67f: /* 41f67f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_41f680: /* 41f680: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41f683: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41f684: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41f685: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41f686: ret  */
  esp += 4; SPILL(); return;
}

void f_41f687(void) {
  LOAD_REGS();
L_41f687: /* 41f687: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41f688: mov ebp, esp */
  ebp = esp;
/* 41f68a: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41f68d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41f68e: mov esi, 0x2000 */
  esi = 0x2000u;
/* 41f693: test dword ptr [0x44f488], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f488u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f699: je 0x41f6bd */
  if (zf) goto L_41f6bd;
L_41f69b: /* 41f69b: and byte ptr [0x44f489], 0xdf */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44f489u))); uint8_t b = (uint8_t)(0xdfu);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(0x44f489u), r);
  }
/* 41f6a2: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41f6a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41f6a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f6a8: call 0x420bd2 */
  esp -= 4; W32(esp, 0x41f6adu); SPILL(); f_420bd2(); if (g_unwind) return; RELOAD();
/* 41f6ad: or dword ptr [0x44f488], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f488u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0x44f488u), r);
  }
/* 41f6b3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41f6b4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41f6b5: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41f6b8: jmp 0x41f80f */
  goto L_41f80f;
L_41f6bd: /* 41f6bd: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41f6c2: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41f6c4: cmp al, 0x3f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41f6c6: jne 0x41f82a */
  if (!zf) goto L_41f82a;
L_41f6cc: /* 41f6cc: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41f6d2: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41f6d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f6d6: call 0x41ebb3 */
  esp -= 4; W32(esp, 0x41f6dbu); SPILL(); f_41ebb3(); if (g_unwind) return; RELOAD();
/* 41f6db: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41f6dc: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41f6df: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41f6e4u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41f6e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f6e6: jne 0x41f6f3 */
  if (!zf) goto L_41f6f3;
L_41f6e8: /* 41f6e8: test byte ptr [ebp - 4], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41f6ec: je 0x41f6f3 */
  if (zf) goto L_41f6f3;
L_41f6ee: /* 41f6ee: xor esi, esi */
  esi = 0;
/* 41f6f0: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 41f6f1: jmp 0x41f6f5 */
  goto L_41f6f5;
L_41f6f3: /* 41f6f3: xor esi, esi */
  esi = 0;
L_41f6f5: /* 41f6f5: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41f6f8: call 0x41ca50 */
  esp -= 4; W32(esp, 0x41f6fdu); SPILL(); f_41ca50(); if (g_unwind) return; RELOAD();
/* 41f6fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f6ff: je 0x41f80c */
  if (zf) goto L_41f80c;
L_41f705: /* 41f705: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41f70a: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41f70c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41f70e: je 0x41f7ac */
  if (zf) goto L_41f7ac;
L_41f714: /* 41f714: cmp al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41f716: je 0x41f7ac */
  if (zf) goto L_41f7ac;
L_41f71c: /* 41f71c: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41f71f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f720: call 0x41f842 */
  esp -= 4; W32(esp, 0x41f725u); SPILL(); f_41f842(); if (g_unwind) return; RELOAD();
/* 41f725: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41f726: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41f729: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41f72eu); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41f72e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f730: jne 0x41f7ac */
  if (!zf) goto L_41f7ac;
L_41f732: /* 41f732: cmp byte ptr [0x44f490], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44f490u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41f738: je 0x41f783 */
  if (zf) goto L_41f783;
L_41f73a: /* 41f73a: and byte ptr [0x44f490], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44f490u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(0x44f490u), r);
  }
/* 41f740: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41f743: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f744: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41f747: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f748: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41f74b: call 0x41d364 */
  esp -= 4; W32(esp, 0x41f750u); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41f750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f751: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41f754: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41f759u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41f759: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41f75e: cmp byte ptr [eax], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41f761: je 0x41f7ac */
  if (zf) goto L_41f7ac;
L_41f763: /* 41f763: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41f766: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f767: call 0x41f842 */
  esp -= 4; W32(esp, 0x41f76cu); SPILL(); f_41f842(); if (g_unwind) return; RELOAD();
/* 41f76c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41f76d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f76e: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41f771: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41f776u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41f776: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41f779: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f77a: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41f77d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f77e: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41f781: jmp 0x41f78e */
  goto L_41f78e;
L_41f783: /* 41f783: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41f786: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f787: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41f78a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f78b: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
L_41f78e: /* 41f78e: push 0x4405b0 */
  { uint32_t v = 0x4405b0u; esp -= 4; W32(esp, v); }
/* 41f793: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41f796: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f797: call 0x41d685 */
  esp -= 4; W32(esp, 0x41f79cu); SPILL(); f_41d685(); if (g_unwind) return; RELOAD();
/* 41f79c: mov ecx, eax */
  ecx = eax;
/* 41f79e: call 0x41d364 */
  esp -= 4; W32(esp, 0x41f7a3u); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41f7a3: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41f7a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f7a7: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41f7acu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_41f7ac: /* 41f7ac: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f7ae: je 0x41f7c0 */
  if (zf) goto L_41f7c0;
L_41f7b0: /* 41f7b0: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41f7b3: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41f7b8u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41f7b8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f7ba: jne 0x41f7c0 */
  if (!zf) goto L_41f7c0;
L_41f7bc: /* 41f7bc: or dword ptr [ebp - 4], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_41f7c0: /* 41f7c0: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41f7c3: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41f7c8u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41f7c8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f7ca: jne 0x41f80c */
  if (!zf) goto L_41f80c;
L_41f7cc: /* 41f7cc: test byte ptr [ebp - 3], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffdu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41f7d0: jne 0x41f80c */
  if (!zf) goto L_41f80c;
L_41f7d2: /* 41f7d2: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41f7d7: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41f7d9: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41f7db: je 0x41f7e7 */
  if (zf) goto L_41f7e7;
L_41f7dd: /* 41f7dd: cmp al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41f7df: jne 0x41f82e */
  if (!zf) goto L_41f82e;
L_41f7e1: /* 41f7e1: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
L_41f7e7: /* 41f7e7: test byte ptr [0x44f489], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44f489u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41f7ee: je 0x41f81a */
  if (zf) goto L_41f81a;
L_41f7f0: /* 41f7f0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f7f2: jne 0x41f81a */
  if (!zf) goto L_41f81a;
L_41f7f4: /* 41f7f4: and dword ptr [ebp - 0x10], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 41f7f7: and word ptr [ebp - 0xc], 0xfe00 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff4u))); uint16_t b = (uint16_t)(0xfe00u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 41f7fd: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41f800: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f801: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41f804: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f805: call 0x41ec72 */
  esp -= 4; W32(esp, 0x41f80au); SPILL(); f_41ec72(); if (g_unwind) return; RELOAD();
/* 41f80a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41f80b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41f80c: /* 41f80c: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
L_41f80f: /* 41f80f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41f812: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f813: call 0x41c766 */
  esp -= 4; W32(esp, 0x41f818u); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41f818: jmp 0x41f83c */
  goto L_41f83c;
L_41f81a: /* 41f81a: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41f81d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f81e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41f821: call 0x41ec72 */
  esp -= 4; W32(esp, 0x41f826u); SPILL(); f_41ec72(); if (g_unwind) return; RELOAD();
/* 41f826: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41f827: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41f828: jmp 0x41f83c */
  goto L_41f83c;
L_41f82a: /* 41f82a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41f82c: je 0x41f832 */
  if (zf) goto L_41f832;
L_41f82e: /* 41f82e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41f830: jmp 0x41f834 */
  goto L_41f834;
L_41f832: /* 41f832: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
L_41f834: /* 41f834: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41f837: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x41f83cu); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
L_41f83c: /* 41f83c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41f83f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41f840: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41f841: ret  */
  esp += 4; SPILL(); return;
}

void f_41f842(void) {
  LOAD_REGS();
L_41f842: /* 41f842: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41f843: lea ebp, [esp - 0x74] */
  ebp = (uint32_t)(esp + 0xffffff8cu);
/* 41f847: sub esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41f84d: mov eax, dword ptr [ebp + 0x70] */
  eax = R32((uint32_t)(ebp + 0x70u));
/* 41f850: and dword ptr [ebp + 0x6c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x6cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x6cu), r);
  }
/* 41f854: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41f855: and eax, 0xfffffe00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffe00u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41f85a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41f85b: mov dword ptr [ebp + 0x70], eax */
  W32((uint32_t)(ebp + 0x70u), eax);
/* 41f85e: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 41f860: mov esi, 0x4405b0 */
  esi = 0x4405b0u;
/* 41f865: jmp 0x41fa57 */
  goto L_41fa57;
L_41f86a: /* 41f86a: mov ecx, dword ptr [0x44f478] */
  ecx = R32((uint32_t)(0x44f478u));
/* 41f870: mov cl, byte ptr [ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 41f872: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41f874: je 0x41fa5f */
  if (zf) goto L_41fa5f;
L_41f87a: /* 41f87a: cmp cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41f87d: je 0x41fa5f */
  if (zf) goto L_41fa5f;
L_41f883: /* 41f883: cmp byte ptr [0x44f490], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44f490u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41f88a: je 0x41f899 */
  if (zf) goto L_41f899;
L_41f88c: /* 41f88c: cmp byte ptr [0x44f491], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44f491u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41f893: je 0x41facf */
  if (zf) goto L_41facf;
L_41f899: /* 41f899: lea ecx, [ebp + 0x6c] */
  ecx = (uint32_t)(ebp + 0x6cu);
/* 41f89c: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41f8a1u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41f8a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41f8a3: jne 0x41f8e0 */
  if (!zf) goto L_41f8e0;
L_41f8a5: /* 41f8a5: lea eax, [ebp + 0x6c] */
  eax = (uint32_t)(ebp + 0x6cu);
/* 41f8a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f8a9: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 41f8ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41f8ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f8ae: call 0x41d624 */
  esp -= 4; W32(esp, 0x41f8b3u); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 41f8b3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41f8b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f8b7: lea ecx, [ebp + 0x6c] */
  ecx = (uint32_t)(ebp + 0x6cu);
/* 41f8ba: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41f8bfu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41f8bf: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41f8c1: je 0x41f8e0 */
  if (zf) goto L_41f8e0;
L_41f8c3: /* 41f8c3: lea eax, [ebp + 0x6c] */
  eax = (uint32_t)(ebp + 0x6cu);
/* 41f8c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f8c7: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 41f8ca: push 0x5b */
  { uint32_t v = 0x5bu; esp -= 4; W32(esp, v); }
/* 41f8cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f8cd: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x41f8d2u); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 41f8d2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41f8d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f8d6: lea ecx, [ebp + 0x6c] */
  ecx = (uint32_t)(ebp + 0x6cu);
/* 41f8d9: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41f8deu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41f8de: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_41f8e0: /* 41f8e0: mov edx, dword ptr [0x44f478] */
  edx = R32((uint32_t)(0x44f478u));
/* 41f8e6: cmp byte ptr [edx], 0x3f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x3fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41f8e9: jne 0x41fa2f */
  if (!zf) goto L_41fa2f;
L_41f8ef: /* 41f8ef: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 41f8f0: mov dword ptr [0x44f478], edx */
  W32((uint32_t)(0x44f478u), edx);
/* 41f8f6: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 41f8f8: movsx eax, cl */
  eax = (uint32_t)(int32_t)(int8_t)((ecx & 0xffu));
/* 41f8fb: sub eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 41f8fe: je 0x41fa1b */
  if (zf) goto L_41fa1b;
L_41f904: /* 41f904: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 41f905: je 0x41f9ec */
  if (zf) goto L_41f9ec;
L_41f90b: /* 41f90b: sub eax, 0x1a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 41f90e: je 0x41f96f */
  if (zf) goto L_41f96f;
L_41f910: /* 41f910: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 41f911: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 41f912: je 0x41f9ec */
  if (zf) goto L_41f9ec;
L_41f918: /* 41f918: sub eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 41f91b: lea eax, [ebp + 0x6c] */
  eax = (uint32_t)(ebp + 0x6cu);
/* 41f91e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f91f: je 0x41f933 */
  if (zf) goto L_41f933;
L_41f921: /* 41f921: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 41f924: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f925: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 41f928: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f929: call 0x41dae1 */
  esp -= 4; W32(esp, 0x41f92eu); SPILL(); f_41dae1(); if (g_unwind) return; RELOAD();
/* 41f92e: jmp 0x41fa43 */
  goto L_41fa43;
L_41f933: /* 41f933: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 41f936: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f937: push 0x5d */
  { uint32_t v = 0x5du; esp -= 4; W32(esp, v); }
/* 41f939: lea eax, [ebp + 0x34] */
  eax = (uint32_t)(ebp + 0x34u);
/* 41f93c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f93d: lea eax, [ebp + 4] */
  eax = (uint32_t)(ebp + 0x4u);
/* 41f940: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 41f941: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41f943: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f944: mov dword ptr [0x44f478], edx */
  W32((uint32_t)(0x44f478u), edx);
/* 41f94a: call 0x41e395 */
  esp -= 4; W32(esp, 0x41f94fu); SPILL(); f_41e395(); if (g_unwind) return; RELOAD();
/* 41f94f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41f950: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41f951: mov ecx, eax */
  ecx = eax;
/* 41f953: call 0x41d646 */
  esp -= 4; W32(esp, 0x41f958u); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41f958: mov ecx, eax */
  ecx = eax;
/* 41f95a: call 0x41d364 */
  esp -= 4; W32(esp, 0x41f95fu); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41f95f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f960: lea ecx, [ebp + 0x6c] */
  ecx = (uint32_t)(ebp + 0x6cu);
/* 41f963: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41f968u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41f968: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 41f96a: jmp 0x41fa54 */
  goto L_41fa54;
L_41f96f: /* 41f96f: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* 41f972: cmp byte ptr [eax], 0x5f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x5fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41f975: jne 0x41f9bd */
  if (!zf) goto L_41f9bd;
L_41f977: /* 41f977: cmp byte ptr [edx + 2], 0x3f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x2u))); uint8_t b = (uint8_t)(0x3fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41f97b: jne 0x41f9bd */
  if (!zf) goto L_41f9bd;
L_41f97d: /* 41f97d: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41f982: lea eax, [ebp + 0x6c] */
  eax = (uint32_t)(ebp + 0x6cu);
/* 41f985: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f986: lea eax, [ebp + 0x24] */
  eax = (uint32_t)(ebp + 0x24u);
/* 41f989: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f98a: lea eax, [ebp + 0x4c] */
  eax = (uint32_t)(ebp + 0x4cu);
/* 41f98d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f98e: call 0x41e573 */
  esp -= 4; W32(esp, 0x41f993u); SPILL(); f_41e573(); if (g_unwind) return; RELOAD();
/* 41f993: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41f994: mov ecx, eax */
  ecx = eax;
/* 41f996: call 0x41d364 */
  esp -= 4; W32(esp, 0x41f99bu); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41f99b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f99c: lea ecx, [ebp + 0x6c] */
  ecx = (uint32_t)(ebp + 0x6cu);
/* 41f99f: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41f9a4u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41f9a4: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41f9a9: cmp byte ptr [eax], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41f9ac: jne 0x41fa54 */
  if (!zf) goto L_41fa54;
L_41f9b2: /* 41f9b2: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41f9b8: jmp 0x41fa54 */
  goto L_41fa54;
L_41f9bd: /* 41f9bd: lea eax, [ebp + 0x6c] */
  eax = (uint32_t)(ebp + 0x6cu);
/* 41f9c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f9c1: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 41f9c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f9c5: push 0x27 */
  { uint32_t v = 0x27u; esp -= 4; W32(esp, v); }
/* 41f9c7: lea eax, [ebp + 0x44] */
  eax = (uint32_t)(ebp + 0x44u);
/* 41f9ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f9cb: lea eax, [ebp + 0x3c] */
  eax = (uint32_t)(ebp + 0x3cu);
/* 41f9ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f9cf: call 0x41f687 */
  esp -= 4; W32(esp, 0x41f9d4u); SPILL(); f_41f687(); if (g_unwind) return; RELOAD();
/* 41f9d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f9d5: lea eax, [ebp + 0x2c] */
  eax = (uint32_t)(ebp + 0x2cu);
/* 41f9d8: push 0x60 */
  { uint32_t v = 0x60u; esp -= 4; W32(esp, v); }
/* 41f9da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41f9db: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x41f9e0u); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 41f9e0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41f9e3: mov ecx, eax */
  ecx = eax;
/* 41f9e5: call 0x41d646 */
  esp -= 4; W32(esp, 0x41f9eau); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41f9ea: jmp 0x41fa44 */
  goto L_41fa44;
L_41f9ec: /* 41f9ec: cmp cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41f9ef: je 0x41f9fd */
  if (zf) goto L_41f9fd;
L_41f9f1: /* 41f9f1: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 41f9f2: mov dword ptr [0x44f478], edx */
  W32((uint32_t)(0x44f478u), edx);
/* 41f9f8: cmp byte ptr [edx], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41f9fb: jne 0x41f9f1 */
  if (!zf) goto L_41f9f1;
L_41f9fd: /* 41f9fd: lea eax, [ebp + 0x6c] */
  eax = (uint32_t)(ebp + 0x6cu);
/* 41fa00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fa01: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 41fa04: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 41fa05: push 0x440598 */
  { uint32_t v = 0x440598u; esp -= 4; W32(esp, v); }
/* 41fa0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fa0b: mov dword ptr [0x44f478], edx */
  W32((uint32_t)(0x44f478u), edx);
/* 41fa11: call 0x41d624 */
  esp -= 4; W32(esp, 0x41fa16u); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 41fa16: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41fa19: jmp 0x41fa4b */
  goto L_41fa4b;
L_41fa1b: /* 41fa1b: lea eax, [ebp + 0x6c] */
  eax = (uint32_t)(ebp + 0x6cu);
/* 41fa1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fa1f: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 41fa22: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 41fa23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fa24: mov dword ptr [0x44f478], edx */
  W32((uint32_t)(0x44f478u), edx);
/* 41fa2a: lea eax, [ebp + 0x64] */
  eax = (uint32_t)(ebp + 0x64u);
/* 41fa2d: jmp 0x41fa3a */
  goto L_41fa3a;
L_41fa2f: /* 41fa2f: lea eax, [ebp + 0x6c] */
  eax = (uint32_t)(ebp + 0x6cu);
/* 41fa32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fa33: lea eax, [ebp + 0x54] */
  eax = (uint32_t)(ebp + 0x54u);
/* 41fa36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fa37: lea eax, [ebp + 0x5c] */
  eax = (uint32_t)(ebp + 0x5cu);
L_41fa3a: /* 41fa3a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41fa3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fa3d: call 0x41e395 */
  esp -= 4; W32(esp, 0x41fa42u); SPILL(); f_41e395(); if (g_unwind) return; RELOAD();
/* 41fa42: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41fa43: /* 41fa43: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_41fa44: /* 41fa44: mov ecx, eax */
  ecx = eax;
/* 41fa46: call 0x41d364 */
  esp -= 4; W32(esp, 0x41fa4bu); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
L_41fa4b: /* 41fa4b: lea ecx, [ebp + 0x6c] */
  ecx = (uint32_t)(ebp + 0x6cu);
/* 41fa4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fa4f: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41fa54u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_41fa54: /* 41fa54: mov eax, dword ptr [ebp + 0x70] */
  eax = R32((uint32_t)(ebp + 0x70u));
L_41fa57: /* 41fa57: test al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41fa59: je 0x41f86a */
  if (zf) goto L_41f86a;
L_41fa5f: /* 41fa5f: mov ecx, dword ptr [0x44f478] */
  ecx = R32((uint32_t)(0x44f478u));
/* 41fa65: mov cl, byte ptr [ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 41fa67: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41fa69: je 0x41fa89 */
  if (zf) goto L_41fa89;
L_41fa6b: /* 41fa6b: cmp cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41fa6e: je 0x41facf */
  if (zf) goto L_41facf;
L_41fa70: /* 41fa70: and dword ptr [ebp + 0x6c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x6cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x6cu), r);
  }
/* 41fa74: mov ecx, eax */
  ecx = eax;
/* 41fa76: and ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 41fa79: cmp cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41fa7c: je 0x41facf */
  if (zf) goto L_41facf;
L_41fa7e: /* 41fa7e: and eax, 0xfffffff1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41fa81: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 41fa84: mov dword ptr [ebp + 0x70], eax */
  W32((uint32_t)(ebp + 0x70u), eax);
/* 41fa87: jmp 0x41facf */
  goto L_41facf;
L_41fa89: /* 41fa89: lea ecx, [ebp + 0x6c] */
  ecx = (uint32_t)(ebp + 0x6cu);
/* 41fa8c: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41fa91u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41fa91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41fa93: je 0x41faa1 */
  if (zf) goto L_41faa1;
L_41fa95: /* 41fa95: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41fa97: lea ecx, [ebp + 0x6c] */
  ecx = (uint32_t)(ebp + 0x6cu);
/* 41fa9a: call 0x41cbb3 */
  esp -= 4; W32(esp, 0x41fa9fu); SPILL(); f_41cbb3(); if (g_unwind) return; RELOAD();
/* 41fa9f: jmp 0x41facf */
  goto L_41facf;
L_41faa1: /* 41faa1: lea eax, [ebp + 0x6c] */
  eax = (uint32_t)(ebp + 0x6cu);
/* 41faa4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41faa5: lea eax, [ebp + 0x5c] */
  eax = (uint32_t)(ebp + 0x5cu);
/* 41faa8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41faa9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41faaa: lea eax, [ebp + 0x54] */
  eax = (uint32_t)(ebp + 0x54u);
/* 41faad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41faae: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41fab0: lea ecx, [ebp + 0x64] */
  ecx = (uint32_t)(ebp + 0x64u);
/* 41fab3: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x41fab8u); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
/* 41fab8: mov ecx, eax */
  ecx = eax;
/* 41faba: call 0x41d685 */
  esp -= 4; W32(esp, 0x41fabfu); SPILL(); f_41d685(); if (g_unwind) return; RELOAD();
/* 41fabf: mov ecx, eax */
  ecx = eax;
/* 41fac1: call 0x41d364 */
  esp -= 4; W32(esp, 0x41fac6u); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41fac6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fac7: lea ecx, [ebp + 0x6c] */
  ecx = (uint32_t)(ebp + 0x6cu);
/* 41faca: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41facfu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_41facf: /* 41facf: mov ecx, dword ptr [ebp + 0x7c] */
  ecx = R32((uint32_t)(ebp + 0x7cu));
/* 41fad2: lea eax, [ebp + 0x6c] */
  eax = (uint32_t)(ebp + 0x6cu);
/* 41fad5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fad6: call 0x41c766 */
  esp -= 4; W32(esp, 0x41fadbu); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41fadb: mov eax, dword ptr [ebp + 0x7c] */
  eax = R32((uint32_t)(ebp + 0x7cu));
/* 41fade: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41fadf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 41fae0: add ebp, 0x74 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 41fae3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41fae4: ret  */
  esp += 4; SPILL(); return;
}

void f_41fae5(void) {
  LOAD_REGS();
L_41fae5: /* 41fae5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41fae6: mov ebp, esp */
  ebp = esp;
/* 41fae8: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41faeb: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41faf0: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41faf2: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41faf4: jne 0x41fb0b */
  if (!zf) goto L_41fb0b;
L_41faf6: /* 41faf6: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41faf9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41fafb: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41fafe: call 0x41d602 */
  esp -= 4; W32(esp, 0x41fb03u); SPILL(); f_41d602(); if (g_unwind) return; RELOAD();
/* 41fb03: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41fb06: jmp 0x41fe09 */
  goto L_41fe09;
L_41fb0b: /* 41fb0b: cmp cl, 0x36 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x36u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41fb0e: jl 0x41fb15 */
  if ((sf != of)) goto L_41fb15;
L_41fb10: /* 41fb10: cmp cl, 0x39 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41fb13: jle 0x41fb29 */
  if ((zf || sf != of)) goto L_41fb29;
L_41fb15: /* 41fb15: cmp cl, 0x5f */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41fb18: je 0x41fb29 */
  if (zf) goto L_41fb29;
L_41fb1a: /* 41fb1a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41fb1d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41fb1f: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x41fb24u); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
/* 41fb24: jmp 0x41fe09 */
  goto L_41fe09;
L_41fb29: /* 41fb29: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41fb2a: movsx ebx, cl */
  ebx = (uint32_t)(int32_t)(int8_t)((ecx & 0xffu));
/* 41fb2d: sub ebx, 0x36 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x36u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 41fb30: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41fb31: cmp ebx, 0x29 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x29u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41fb34: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41fb35: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 41fb36: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41fb3b: jne 0x41fb61 */
  if (!zf) goto L_41fb61;
L_41fb3d: /* 41fb3d: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41fb3f: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41fb41: je 0x41fb59 */
  if (zf) goto L_41fb59;
L_41fb43: /* 41fb43: movsx ebx, cl */
  ebx = (uint32_t)(int32_t)(int8_t)((ecx & 0xffu));
/* 41fb46: sub ebx, 0x3d */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3du);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 41fb49: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 41fb4a: cmp ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41fb4d: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
/* 41fb52: jl 0x41fb6a */
  if ((sf != of)) goto L_41fb6a;
L_41fb54: /* 41fb54: cmp ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 41fb57: jmp 0x41fb68 */
  goto L_41fb68;
L_41fb59: /* 41fb59: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41fb5c: jmp 0x41fc9c */
  goto L_41fc9c;
L_41fb61: /* 41fb61: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 41fb63: jl 0x41fb6a */
  if ((sf != of)) goto L_41fb6a;
L_41fb65: /* 41fb65: cmp ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
L_41fb68: /* 41fb68: jle 0x41fb6d */
  if ((zf || sf != of)) goto L_41fb6d;
L_41fb6a: /* 41fb6a: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
L_41fb6d: /* 41fb6d: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 41fb70: je 0x41fc91 */
  if (zf) goto L_41fc91;
L_41fb76: /* 41fb76: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 41fb79: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 41fb7d: mov esi, 0xfffffe00 */
  esi = 0xfffffe00u;
/* 41fb82: and dword ptr [ebp - 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 41fb85: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41fb88: call 0x41c766 */
  esp -= 4; W32(esp, 0x41fb8du); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41fb8d: mov edi, ebx */
  edi = ebx;
/* 41fb8f: and edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  edi = r;
  }
/* 41fb92: je 0x41fc38 */
  if (zf) goto L_41fc38;
L_41fb98: /* 41fb98: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41fb9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fb9c: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41fb9f: push 0x4405b0 */
  { uint32_t v = 0x4405b0u; esp -= 4; W32(esp, v); }
/* 41fba4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fba5: call 0x41d624 */
  esp -= 4; W32(esp, 0x41fbaau); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 41fbaa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41fbad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fbae: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41fbb1: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41fbb6u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41fbb6: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41fbbb: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41fbbe: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41fbc1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fbc2: je 0x41fbe9 */
  if (zf) goto L_41fbe9;
L_41fbc4: /* 41fbc4: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41fbc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fbc8: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 41fbcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fbcc: call 0x41f842 */
  esp -= 4; W32(esp, 0x41fbd1u); SPILL(); f_41f842(); if (g_unwind) return; RELOAD();
/* 41fbd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fbd2: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 41fbd5: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 41fbd7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fbd8: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x41fbddu); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 41fbdd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41fbe0: mov ecx, eax */
  ecx = eax;
/* 41fbe2: call 0x41d364 */
  esp -= 4; W32(esp, 0x41fbe7u); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41fbe7: jmp 0x41fbf7 */
  goto L_41fbf7;
L_41fbe9: /* 41fbe9: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 41fbec: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41fbee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fbef: call 0x41d602 */
  esp -= 4; W32(esp, 0x41fbf4u); SPILL(); f_41d602(); if (g_unwind) return; RELOAD();
/* 41fbf4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_41fbf7: /* 41fbf7: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41fbfa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fbfb: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41fc00u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41fc00: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41fc05: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41fc07: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41fc09: je 0x41fc98 */
  if (zf) goto L_41fc98;
L_41fc0f: /* 41fc0f: cmp al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41fc11: jne 0x41fc91 */
  if (!zf) goto L_41fc91;
L_41fc13: /* 41fc13: mov eax, dword ptr [0x44f488] */
  eax = R32((uint32_t)(0x44f488u));
/* 41fc18: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41fc1e: and eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41fc21: cmp al, 0x60 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x60u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41fc23: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 41fc26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fc27: je 0x41fc80 */
  if (zf) goto L_41fc80;
L_41fc29: /* 41fc29: call 0x41c967 */
  esp -= 4; W32(esp, 0x41fc2eu); SPILL(); f_41c967(); if (g_unwind) return; RELOAD();
/* 41fc2e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41fc2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fc30: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41fc33: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41fc38u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_41fc38: /* 41fc38: test bl, 4 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41fc3b: je 0x41fcc1 */
  if (zf) goto L_41fcc1;
L_41fc41: /* 41fc41: mov eax, dword ptr [0x44f488] */
  eax = R32((uint32_t)(0x44f488u));
/* 41fc46: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 41fc48: not eax */
  eax = ~eax;
/* 41fc4a: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41fc4c: je 0x41fcae */
  if (zf) goto L_41fcae;
L_41fc4e: /* 41fc4e: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41fc51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fc52: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 41fc55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fc56: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 41fc59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fc5a: call 0x41ebe0 */
  esp -= 4; W32(esp, 0x41fc5fu); SPILL(); f_41ebe0(); if (g_unwind) return; RELOAD();
/* 41fc5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fc60: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41fc63: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 41fc65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fc66: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x41fc6bu); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 41fc6b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41fc6e: mov ecx, eax */
  ecx = eax;
/* 41fc70: call 0x41d364 */
  esp -= 4; W32(esp, 0x41fc75u); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41fc75: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fc76: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41fc79: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41fc7eu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41fc7e: jmp 0x41fcc1 */
  goto L_41fcc1;
L_41fc80: /* 41fc80: call 0x41c967 */
  esp -= 4; W32(esp, 0x41fc85u); SPILL(); f_41c967(); if (g_unwind) return; RELOAD();
/* 41fc85: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41fc86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fc87: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41fc8a: call 0x41cb7e */
  esp -= 4; W32(esp, 0x41fc8fu); SPILL(); f_41cb7e(); if (g_unwind) return; RELOAD();
/* 41fc8f: jmp 0x41fc38 */
  goto L_41fc38;
L_41fc91: /* 41fc91: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 41fc93: jmp 0x41fdfe */
  goto L_41fdfe;
L_41fc98: /* 41fc98: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41fc9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_41fc9c: /* 41fc9c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 41fc9e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 41fca1: call 0x41d602 */
  esp -= 4; W32(esp, 0x41fca6u); SPILL(); f_41d602(); if (g_unwind) return; RELOAD();
/* 41fca6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41fca9: jmp 0x41fe06 */
  goto L_41fe06;
L_41fcae: /* 41fcae: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 41fcb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fcb2: call 0x41ebe0 */
  esp -= 4; W32(esp, 0x41fcb7u); SPILL(); f_41ebe0(); if (g_unwind) return; RELOAD();
/* 41fcb7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41fcb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fcb9: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41fcbc: call 0x41cb7e */
  esp -= 4; W32(esp, 0x41fcc1u); SPILL(); f_41cb7e(); if (g_unwind) return; RELOAD();
L_41fcc1: /* 41fcc1: mov eax, dword ptr [0x44f488] */
  eax = R32((uint32_t)(0x44f488u));
/* 41fcc6: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 41fcc8: not eax */
  eax = ~eax;
/* 41fcca: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41fccc: je 0x41fcf2 */
  if (zf) goto L_41fcf2;
L_41fcce: /* 41fcce: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41fcd1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fcd2: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 41fcd5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fcd6: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 41fcd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fcda: call 0x41d288 */
  esp -= 4; W32(esp, 0x41fcdfu); SPILL(); f_41d288(); if (g_unwind) return; RELOAD();
/* 41fcdf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41fce0: mov ecx, eax */
  ecx = eax;
/* 41fce2: call 0x41d364 */
  esp -= 4; W32(esp, 0x41fce7u); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41fce7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fce8: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41fceb: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41fcf0u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41fcf0: jmp 0x41fd05 */
  goto L_41fd05;
L_41fcf2: /* 41fcf2: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 41fcf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fcf6: call 0x41d288 */
  esp -= 4; W32(esp, 0x41fcfbu); SPILL(); f_41d288(); if (g_unwind) return; RELOAD();
/* 41fcfb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41fcfc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fcfd: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41fd00: call 0x41cb7e */
  esp -= 4; W32(esp, 0x41fd05u); SPILL(); f_41cb7e(); if (g_unwind) return; RELOAD();
L_41fd05: /* 41fd05: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 41fd08: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41fd0du); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41fd0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41fd0f: jne 0x41fd39 */
  if (!zf) goto L_41fd39;
L_41fd11: /* 41fd11: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 41fd13: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 41fd16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fd17: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41fd1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fd1b: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 41fd1e: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 41fd20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fd21: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x41fd26u); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 41fd26: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41fd29: mov ecx, eax */
  ecx = eax;
/* 41fd2b: call 0x41d646 */
  esp -= 4; W32(esp, 0x41fd30u); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41fd30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fd31: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41fd34: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41fd39u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_41fd39: /* 41fd39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 41fd3b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 41fd3d: mov ecx, 0x44f458 */
  ecx = 0x44f458u;
/* 41fd42: call 0x41c6e2 */
  esp -= 4; W32(esp, 0x41fd47u); SPILL(); f_41c6e2(); if (g_unwind) return; RELOAD();
/* 41fd47: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41fd49: je 0x41fd55 */
  if (zf) goto L_41fd55;
L_41fd4b: /* 41fd4b: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 41fd4e: and dword ptr [eax + 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x4u), r);
  }
/* 41fd51: mov esi, eax */
  esi = eax;
/* 41fd53: jmp 0x41fd57 */
  goto L_41fd57;
L_41fd55: /* 41fd55: xor esi, esi */
  esi = 0;
L_41fd57: /* 41fd57: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41fd5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41fd5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fd5c: call 0x41ce67 */
  esp -= 4; W32(esp, 0x41fd61u); SPILL(); f_41ce67(); if (g_unwind) return; RELOAD();
/* 41fd61: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41fd62: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41fd63: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 41fd65: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 41fd68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fd69: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 41fd6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fd6d: call 0x41d879 */
  esp -= 4; W32(esp, 0x41fd72u); SPILL(); f_41d879(); if (g_unwind) return; RELOAD();
/* 41fd72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fd73: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41fd76: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 41fd78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fd79: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x41fd7eu); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 41fd7e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41fd81: mov ecx, eax */
  ecx = eax;
/* 41fd83: call 0x41d646 */
  esp -= 4; W32(esp, 0x41fd88u); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41fd88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fd89: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41fd8c: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41fd91u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41fd91: mov eax, dword ptr [0x44f488] */
  eax = R32((uint32_t)(0x44f488u));
/* 41fd96: and eax, 0x60 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 41fd99: cmp al, 0x60 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x60u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41fd9b: je 0x41fdad */
  if (zf) goto L_41fdad;
L_41fd9d: /* 41fd9d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41fd9f: je 0x41fdad */
  if (zf) goto L_41fdad;
L_41fda1: /* 41fda1: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41fda4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fda5: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41fda8: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41fdadu); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
L_41fdad: /* 41fdad: mov eax, dword ptr [0x44f488] */
  eax = R32((uint32_t)(0x44f488u));
/* 41fdb2: shr eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 41fdb5: not eax */
  eax = ~eax;
/* 41fdb7: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41fdb9: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 41fdbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fdbd: je 0x41fdd0 */
  if (zf) goto L_41fdd0;
L_41fdbf: /* 41fdbf: call 0x41d90b */
  esp -= 4; W32(esp, 0x41fdc4u); SPILL(); f_41d90b(); if (g_unwind) return; RELOAD();
/* 41fdc4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41fdc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fdc6: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41fdc9: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x41fdceu); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 41fdce: jmp 0x41fddf */
  goto L_41fddf;
L_41fdd0: /* 41fdd0: call 0x41d90b */
  esp -= 4; W32(esp, 0x41fdd5u); SPILL(); f_41d90b(); if (g_unwind) return; RELOAD();
/* 41fdd5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 41fdd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fdd7: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 41fdda: call 0x41cb7e */
  esp -= 4; W32(esp, 0x41fddfu); SPILL(); f_41cb7e(); if (g_unwind) return; RELOAD();
L_41fddf: /* 41fddf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41fde1: je 0x41fdfc */
  if (zf) goto L_41fdfc;
L_41fde3: /* 41fde3: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41fde6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fde7: mov ecx, esi */
  ecx = esi;
/* 41fde9: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41fdeeu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41fdee: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41fdf1: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41fdf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fdf5: call 0x41c766 */
  esp -= 4; W32(esp, 0x41fdfau); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 41fdfa: jmp 0x41fe06 */
  goto L_41fe06;
L_41fdfc: /* 41fdfc: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
L_41fdfe: /* 41fdfe: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 41fe01: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x41fe06u); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
L_41fe06: /* 41fe06: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 41fe07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 41fe08: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_41fe09: /* 41fe09: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 41fe0c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 41fe0d: ret  */
  esp += 4; SPILL(); return;
}

void f_41fe0e(void) {
  LOAD_REGS();
L_41fe0e: /* 41fe0e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 41fe0f: mov ebp, esp */
  ebp = esp;
/* 41fe11: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 41fe14: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41fe19: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41fe1b: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 41fe1f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 41fe20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41fe21: mov esi, 0xfffffe00 */
  esi = 0xfffffe00u;
/* 41fe26: and dword ptr [ebp - 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 41fe29: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41fe2b: je 0x420307 */
  if (zf) goto L_420307;
L_41fe31: /* 41fe31: cmp al, 0x24 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x24u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 41fe33: jne 0x41ff32 */
  if (!zf) goto L_41ff32;
L_41fe39: /* 41fe39: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41fe3f: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41fe44: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 41fe47: mov ecx, eax */
  ecx = eax;
/* 41fe49: sub ecx, 0x41 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x41u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 41fe4c: je 0x41ff1f */
  if (zf) goto L_41ff1f;
L_41fe52: /* 41fe52: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 41fe53: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41fe56: je 0x41ff18 */
  if (zf) goto L_41ff18;
L_41fe5c: /* 41fe5c: lea esi, [eax + 0xfffffcd] */
  esi = (uint32_t)(eax + 0xfffffcdu);
/* 41fe62: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41fe67: movsx eax, byte ptr [eax + 1] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + 0x1u)));
/* 41fe6b: add dword ptr [0x44f478], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41fe72: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 41fe75: push 0x44071c */
  { uint32_t v = 0x44071cu; esp -= 4; W32(esp, v); }
/* 41fe7a: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 41fe7c: call 0x41d261 */
  esp -= 4; W32(esp, 0x41fe81u); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
/* 41fe81: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 41fe84: jbe 0x41fea4 */
  if ((cf | zf)) goto L_41fea4;
L_41fe86: /* 41fe86: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  esi = r;
  }
L_41fe87: /* 41fe87: push 0x4403ac */
  { uint32_t v = 0x4403acu; esp -= 4; W32(esp, v); }
/* 41fe8c: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 41fe8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fe90: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41fe93: call 0x41d685 */
  esp -= 4; W32(esp, 0x41fe98u); SPILL(); f_41d685(); if (g_unwind) return; RELOAD();
/* 41fe98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fe99: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41fe9c: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41fea1u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41fea1: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 41fea2: jne 0x41fe87 */
  if (!zf) goto L_41fe87;
L_41fea4: /* 41fea4: push 0x440718 */
  { uint32_t v = 0x440718u; esp -= 4; W32(esp, v); }
/* 41fea9: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 41feac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fead: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41feb0: call 0x41d685 */
  esp -= 4; W32(esp, 0x41feb5u); SPILL(); f_41d685(); if (g_unwind) return; RELOAD();
/* 41feb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41feb6: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41feb9: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41febeu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 41febe: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 41fec1: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41fec6u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41fec6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41fec8: jne 0x41ff0a */
  if (!zf) goto L_41ff0a;
L_41feca: /* 41feca: test byte ptr [ecx + 4], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x4u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41fece: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41fed1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fed2: je 0x41feda */
  if (zf) goto L_41feda;
L_41fed4: /* 41fed4: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41fed7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fed8: jmp 0x41fefc */
  goto L_41fefc;
L_41feda: /* 41feda: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 41fedd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fede: push 0x29 */
  { uint32_t v = 0x29u; esp -= 4; W32(esp, v); }
/* 41fee0: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 41fee3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fee4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 41fee5: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 41fee8: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 41feea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41feeb: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x41fef0u); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 41fef0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41fef3: mov ecx, eax */
  ecx = eax;
/* 41fef5: call 0x41d646 */
  esp -= 4; W32(esp, 0x41fefau); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41fefa: mov ecx, eax */
  ecx = eax;
L_41fefc: /* 41fefc: call 0x41d364 */
  esp -= 4; W32(esp, 0x41ff01u); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 41ff01: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 41ff04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ff05: call 0x41c7cf */
  esp -= 4; W32(esp, 0x41ff0au); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_41ff0a: /* 41ff0a: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 41ff10: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 41ff13: jmp 0x4202f8 */
  goto L_4202f8;
L_41ff18: /* 41ff18: push 0x440710 */
  { uint32_t v = 0x440710u; esp -= 4; W32(esp, v); }
/* 41ff1d: jmp 0x41ff27 */
  goto L_41ff27;
L_41ff1f: /* 41ff1f: push 0x440708 */
  { uint32_t v = 0x440708u; esp -= 4; W32(esp, v); }
/* 41ff24: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
L_41ff27: /* 41ff27: call 0x41d261 */
  esp -= 4; W32(esp, 0x41ff2cu); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
/* 41ff2c: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
L_41ff32: /* 41ff32: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 41ff37: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 41ff39: xor ecx, ecx */
  ecx = 0;
/* 41ff3b: cmp al, 0x41 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 41ff3d: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 41ff40: and dword ptr [ebp - 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 41ff43: and dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 41ff47: and dword ptr [ebp - 0x20], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe0u), r);
  }
/* 41ff4b: movsx ebx, al */
  ebx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 41ff4e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 41ff4f: and ecx, 0x2b */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 41ff52: add ecx, 0x16 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x16u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 41ff55: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 41ff57: and dword ptr [ebp - 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 41ff5a: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 41ff5c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_41ff5d: /* 41ff5d: mov eax, ebx */
  eax = ebx;
/* 41ff5f: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 41ff62: je 0x420022 */
  if (zf) goto L_420022;
L_41ff68: /* 41ff68: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 41ff69: je 0x41ffa8 */
  if (zf) goto L_41ffa8;
L_41ff6b: /* 41ff6b: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 41ff6e: jne 0x420082 */
  if (!zf) goto L_420082;
L_41ff74: /* 41ff74: mov eax, dword ptr [0x44f488] */
  eax = R32((uint32_t)(0x44f488u));
/* 41ff79: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 41ff7b: not eax */
  eax = ~eax;
/* 41ff7d: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ff7f: je 0x41fffd */
  if (zf) goto L_41fffd;
L_41ff81: /* 41ff81: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 41ff84: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41ff89u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41ff89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41ff8b: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 41ff8d: jne 0x420075 */
  if (!zf) goto L_420075;
L_41ff93: /* 41ff93: call 0x41c6c9 */
  esp -= 4; W32(esp, 0x41ff98u); SPILL(); f_41c6c9(); if (g_unwind) return; RELOAD();
/* 41ff98: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41ff9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ff9c: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 41ff9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ffa0: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 41ffa3: jmp 0x420059 */
  goto L_420059;
L_41ffa8: /* 41ffa8: mov eax, dword ptr [0x44f488] */
  eax = R32((uint32_t)(0x44f488u));
/* 41ffad: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 41ffaf: not eax */
  eax = ~eax;
/* 41ffb1: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 41ffb3: je 0x41fffd */
  if (zf) goto L_41fffd;
L_41ffb5: /* 41ffb5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41ffb8: call 0x41ca67 */
  esp -= 4; W32(esp, 0x41ffbdu); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 41ffbd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 41ffbf: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* 41ffc1: jne 0x41ffec */
  if (!zf) goto L_41ffec;
L_41ffc3: /* 41ffc3: call 0x41c6c9 */
  esp -= 4; W32(esp, 0x41ffc8u); SPILL(); f_41c6c9(); if (g_unwind) return; RELOAD();
/* 41ffc8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41ffcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ffcc: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 41ffcf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ffd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 41ffd1: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 41ffd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41ffd5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41ffd8: call 0x41d646 */
  esp -= 4; W32(esp, 0x41ffddu); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 41ffdd: mov ecx, eax */
  ecx = eax;
/* 41ffdf: call 0x41d685 */
  esp -= 4; W32(esp, 0x41ffe4u); SPILL(); f_41d685(); if (g_unwind) return; RELOAD();
/* 41ffe4: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 41ffe7: jmp 0x42006d */
  goto L_42006d;
L_41ffec: /* 41ffec: call 0x41c6c9 */
  esp -= 4; W32(esp, 0x41fff1u); SPILL(); f_41c6c9(); if (g_unwind) return; RELOAD();
/* 41fff1: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
L_41fff4: /* 41fff4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 41fff7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 41fff8: call 0x41d261 */
  esp -= 4; W32(esp, 0x41fffdu); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
L_41fffd: /* 41fffd: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 420003: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 420008: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 42000a: xor ecx, ecx */
  ecx = 0;
/* 42000c: cmp al, 0x41 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 42000e: setl cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf != of)) ? 1 : 0) & 0xffu);
/* 420011: movsx ebx, al */
  ebx = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 420014: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 420015: and ecx, 0x2b */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2bu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 420018: add ecx, 0x16 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x16u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 42001b: sub ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 42001d: jmp 0x41ff5d */
  goto L_41ff5d;
L_420022: /* 420022: mov eax, dword ptr [0x44f488] */
  eax = R32((uint32_t)(0x44f488u));
/* 420027: mov ecx, eax */
  ecx = eax;
/* 420029: shr ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 42002b: not ecx */
  ecx = ~ecx;
/* 42002d: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 420030: je 0x41fffd */
  if (zf) goto L_41fffd;
L_420032: /* 420032: shr eax, 0x11 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 17;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 420035: not eax */
  eax = ~eax;
/* 420037: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 420039: je 0x41fffd */
  if (zf) goto L_41fffd;
L_42003b: /* 42003b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 42003e: call 0x41ca67 */
  esp -= 4; W32(esp, 0x420043u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 420043: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420045: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 420047: jne 0x420075 */
  if (!zf) goto L_420075;
L_420049: /* 420049: call 0x41c6c9 */
  esp -= 4; W32(esp, 0x42004eu); SPILL(); f_41c6c9(); if (g_unwind) return; RELOAD();
/* 42004e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 420051: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420052: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 420055: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420056: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
L_420059: /* 420059: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42005a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42005b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 42005e: call 0x41d646 */
  esp -= 4; W32(esp, 0x420063u); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 420063: mov ecx, eax */
  ecx = eax;
/* 420065: call 0x41d685 */
  esp -= 4; W32(esp, 0x42006au); SPILL(); f_41d685(); if (g_unwind) return; RELOAD();
/* 42006a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
L_42006d: /* 42006d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42006e: call 0x41c7cf */
  esp -= 4; W32(esp, 0x420073u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 420073: jmp 0x41fffd */
  goto L_41fffd;
L_420075: /* 420075: call 0x41c6c9 */
  esp -= 4; W32(esp, 0x42007au); SPILL(); f_41c6c9(); if (g_unwind) return; RELOAD();
/* 42007a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 42007d: jmp 0x41fff4 */
  goto L_41fff4;
L_420082: /* 420082: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 420088: cmp ebx, 0x1f */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42008b: ja 0x420303 */
  if ((!cf && !zf)) goto L_420303;
L_420091: /* 420091: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 420094: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 420097: call 0x41cfb7 */
  esp -= 4; W32(esp, 0x42009cu); SPILL(); f_41cfb7(); if (g_unwind) return; RELOAD();
/* 42009c: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 42009f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4200a0: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 4200a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4200a4: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 4200a7: call 0x41d364 */
  esp -= 4; W32(esp, 0x4200acu); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 4200ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4200ad: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 4200b0: call 0x41c7cf */
  esp -= 4; W32(esp, 0x4200b5u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 4200b5: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 4200b8: call 0x41ca67 */
  esp -= 4; W32(esp, 0x4200bdu); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 4200bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4200bf: jne 0x4200e6 */
  if (!zf) goto L_4200e6;
L_4200c1: /* 4200c1: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 4200c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4200c5: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 4200c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4200c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4200ca: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 4200cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4200ce: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 4200d1: call 0x41d646 */
  esp -= 4; W32(esp, 0x4200d6u); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 4200d6: mov ecx, eax */
  ecx = eax;
/* 4200d8: call 0x41d364 */
  esp -= 4; W32(esp, 0x4200ddu); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 4200dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4200de: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 4200e1: call 0x41c7cf */
  esp -= 4; W32(esp, 0x4200e6u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_4200e6: /* 4200e6: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4200e9: call 0x41ca67 */
  esp -= 4; W32(esp, 0x4200eeu); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 4200ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4200f0: jne 0x420117 */
  if (!zf) goto L_420117;
L_4200f2: /* 4200f2: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 4200f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4200f6: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 4200f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4200fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4200fb: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 4200fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4200ff: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 420102: call 0x41d646 */
  esp -= 4; W32(esp, 0x420107u); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 420107: mov ecx, eax */
  ecx = eax;
/* 420109: call 0x41d364 */
  esp -= 4; W32(esp, 0x42010eu); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 42010e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42010f: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 420112: call 0x41c7cf */
  esp -= 4; W32(esp, 0x420117u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_420117: /* 420117: test bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42011a: je 0x4201cb */
  if (zf) goto L_4201cb;
L_420120: /* 420120: cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 420124: jne 0x420303 */
  if (!zf) goto L_420303;
L_42012a: /* 42012a: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42012e: je 0x420189 */
  if (zf) goto L_420189;
L_420130: /* 420130: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 420133: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420134: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 420137: push 0x4405b0 */
  { uint32_t v = 0x4405b0u; esp -= 4; W32(esp, v); }
/* 42013c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42013d: call 0x41d624 */
  esp -= 4; W32(esp, 0x420142u); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 420142: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 420145: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420146: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 420149: call 0x41c7cf */
  esp -= 4; W32(esp, 0x42014eu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 42014e: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 420153: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 420156: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 420159: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42015a: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 42015d: je 0x42017c */
  if (zf) goto L_42017c;
L_42015f: /* 42015f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420160: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 420163: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420164: call 0x41f842 */
  esp -= 4; W32(esp, 0x420169u); SPILL(); f_41f842(); if (g_unwind) return; RELOAD();
/* 420169: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42016a: mov ecx, eax */
  ecx = eax;
/* 42016c: call 0x41d364 */
  esp -= 4; W32(esp, 0x420171u); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
L_420171: /* 420171: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420172: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 420175: call 0x41c7cf */
  esp -= 4; W32(esp, 0x42017au); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 42017a: jmp 0x4201a6 */
  goto L_4201a6;
L_42017c: /* 42017c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42017e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42017f: call 0x41d602 */
  esp -= 4; W32(esp, 0x420184u); SPILL(); f_41d602(); if (g_unwind) return; RELOAD();
/* 420184: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 420187: jmp 0x420171 */
  goto L_420171;
L_420189: /* 420189: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 42018e: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 420191: je 0x4201b1 */
  if (zf) goto L_4201b1;
L_420193: /* 420193: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 420196: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420197: call 0x41f842 */
  esp -= 4; W32(esp, 0x42019cu); SPILL(); f_41f842(); if (g_unwind) return; RELOAD();
/* 42019c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42019d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42019e: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 4201a1: call 0x41cb7e */
  esp -= 4; W32(esp, 0x4201a6u); SPILL(); f_41cb7e(); if (g_unwind) return; RELOAD();
L_4201a6: /* 4201a6: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 4201ab: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 4201ad: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4201af: jne 0x4201bd */
  if (!zf) goto L_4201bd;
L_4201b1: /* 4201b1: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4201b3: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 4201b6: call 0x41ce96 */
  esp -= 4; W32(esp, 0x4201bbu); SPILL(); f_41ce96(); if (g_unwind) return; RELOAD();
/* 4201bb: jmp 0x4201cb */
  goto L_4201cb;
L_4201bd: /* 4201bd: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 4201c3: cmp al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4201c5: jne 0x420303 */
  if (!zf) goto L_420303;
L_4201cb: /* 4201cb: mov eax, dword ptr [0x44f488] */
  eax = R32((uint32_t)(0x44f488u));
/* 4201d0: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 4201d2: not eax */
  eax = ~eax;
/* 4201d4: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4201d6: mov eax, ebx */
  eax = ebx;
/* 4201d8: je 0x42020f */
  if (zf) goto L_42020f;
L_4201da: /* 4201da: and eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 4201dd: cmp al, 0xc */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4201df: jne 0x420229 */
  if (!zf) goto L_420229;
L_4201e1: /* 4201e1: cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4201e5: jne 0x420303 */
  if (!zf) goto L_420303;
L_4201eb: /* 4201eb: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 4201ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4201ef: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 4201f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4201f3: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 4201f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4201f7: call 0x41ebe0 */
  esp -= 4; W32(esp, 0x4201fcu); SPILL(); f_41ebe0(); if (g_unwind) return; RELOAD();
/* 4201fc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4201fd: mov ecx, eax */
  ecx = eax;
/* 4201ff: call 0x41d364 */
  esp -= 4; W32(esp, 0x420204u); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 420204: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420205: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 420208: call 0x41c7cf */
  esp -= 4; W32(esp, 0x42020du); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 42020d: jmp 0x420229 */
  goto L_420229;
L_42020f: /* 42020f: and eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 420212: cmp al, 0xc */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 420214: jne 0x420229 */
  if (!zf) goto L_420229;
L_420216: /* 420216: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 420219: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42021a: call 0x41ebe0 */
  esp -= 4; W32(esp, 0x42021fu); SPILL(); f_41ebe0(); if (g_unwind) return; RELOAD();
/* 42021f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 420220: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420221: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 420224: call 0x41cb7e */
  esp -= 4; W32(esp, 0x420229u); SPILL(); f_41cb7e(); if (g_unwind) return; RELOAD();
L_420229: /* 420229: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42022c: je 0x42024c */
  if (zf) goto L_42024c;
L_42022e: /* 42022e: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 420231: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420232: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 420235: push 0x4406fc */
  { uint32_t v = 0x4406fcu; esp -= 4; W32(esp, v); }
/* 42023a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42023b: call 0x41d624 */
  esp -= 4; W32(esp, 0x420240u); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 420240: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 420243: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420244: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 420247: call 0x41c7cf */
  esp -= 4; W32(esp, 0x42024cu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_42024c: /* 42024c: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42024f: je 0x42026f */
  if (zf) goto L_42026f;
L_420251: /* 420251: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 420254: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420255: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 420258: push 0x4406f4 */
  { uint32_t v = 0x4406f4u; esp -= 4; W32(esp, v); }
/* 42025d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42025e: call 0x41d624 */
  esp -= 4; W32(esp, 0x420263u); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 420263: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 420266: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420267: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 42026a: call 0x41c7cf */
  esp -= 4; W32(esp, 0x42026fu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_42026f: /* 42026f: cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 420273: jne 0x4202f1 */
  if (!zf) goto L_4202f1;
L_420275: /* 420275: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 420278: mov ecx, edx */
  ecx = edx;
/* 42027a: call 0x41ca67 */
  esp -= 4; W32(esp, 0x42027fu); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 42027f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420281: jne 0x4202ce */
  if (!zf) goto L_4202ce;
L_420283: /* 420283: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 420286: test bl, 0x10 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 420289: jne 0x4202bf */
  if (!zf) goto L_4202bf;
L_42028b: /* 42028b: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 42028e: call 0x41ca67 */
  esp -= 4; W32(esp, 0x420293u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 420293: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420295: jne 0x4202bf */
  if (!zf) goto L_4202bf;
L_420297: /* 420297: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 420298: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 42029b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42029c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42029d: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 4202a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4202a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4202a2: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 4202a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4202a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4202a7: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x4202acu); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 4202ac: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4202af: mov ecx, eax */
  ecx = eax;
/* 4202b1: call 0x41d646 */
  esp -= 4; W32(esp, 0x4202b6u); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 4202b6: mov ecx, eax */
  ecx = eax;
/* 4202b8: call 0x41d364 */
  esp -= 4; W32(esp, 0x4202bdu); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 4202bd: jmp 0x4202e8 */
  goto L_4202e8;
L_4202bf: /* 4202bf: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 4202c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4202c2: jns 0x4202db */
  if (!sf) goto L_4202db;
L_4202c4: /* 4202c4: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 4202c7: call 0x41c7cf */
  esp -= 4; W32(esp, 0x4202ccu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 4202cc: jmp 0x4202f1 */
  goto L_4202f1;
L_4202ce: /* 4202ce: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 4202d1: call 0x41ca67 */
  esp -= 4; W32(esp, 0x4202d6u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 4202d6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4202d8: jne 0x4202f1 */
  if (!zf) goto L_4202f1;
L_4202da: /* 4202da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_4202db: /* 4202db: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 4202de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4202df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4202e0: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x4202e5u); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 4202e5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4202e8: /* 4202e8: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 4202eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4202ec: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x4202f1u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
L_4202f1: /* 4202f1: or dword ptr [ebp - 4], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4202f5: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
L_4202f8: /* 4202f8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4202fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4202fc: call 0x41c766 */
  esp -= 4; W32(esp, 0x420301u); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 420301: jmp 0x42037f */
  goto L_42037f;
L_420303: /* 420303: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 420305: jmp 0x420377 */
  goto L_420377;
L_420307: /* 420307: cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42030b: jne 0x420375 */
  if (!zf) goto L_420375;
L_42030d: /* 42030d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 420310: mov ecx, edx */
  ecx = edx;
/* 420312: call 0x41ca67 */
  esp -= 4; W32(esp, 0x420317u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 420317: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420319: jne 0x420359 */
  if (!zf) goto L_420359;
L_42031b: /* 42031b: test byte ptr [edx + 4], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + 0x4u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42031f: jne 0x420356 */
  if (!zf) goto L_420356;
L_420321: /* 420321: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 420324: call 0x41ca67 */
  esp -= 4; W32(esp, 0x420329u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 420329: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42032b: jne 0x420356 */
  if (!zf) goto L_420356;
L_42032d: /* 42032d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 42032e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 420331: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 420334: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 420336: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420337: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 420338: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 42033b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42033d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42033e: call 0x41d602 */
  esp -= 4; W32(esp, 0x420343u); SPILL(); f_41d602(); if (g_unwind) return; RELOAD();
/* 420343: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 420346: mov ecx, eax */
  ecx = eax;
/* 420348: call 0x41d646 */
  esp -= 4; W32(esp, 0x42034du); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 42034d: mov ecx, eax */
  ecx = eax;
/* 42034f: call 0x41d364 */
  esp -= 4; W32(esp, 0x420354u); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 420354: jmp 0x42037f */
  goto L_42037f;
L_420356: /* 420356: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 420357: jmp 0x420366 */
  goto L_420366;
L_420359: /* 420359: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 42035c: call 0x41ca67 */
  esp -= 4; W32(esp, 0x420361u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 420361: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420363: jne 0x420375 */
  if (!zf) goto L_420375;
L_420365: /* 420365: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_420366: /* 420366: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 420368: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42036b: call 0x41d602 */
  esp -= 4; W32(esp, 0x420370u); SPILL(); f_41d602(); if (g_unwind) return; RELOAD();
/* 420370: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 420373: jmp 0x42037f */
  goto L_42037f;
L_420375: /* 420375: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
L_420377: /* 420377: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 42037a: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x42037fu); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
L_42037f: /* 42037f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 420382: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 420383: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 420384: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 420385: ret  */
  esp += 4; SPILL(); return;
}

void f_420386(void) {
  LOAD_REGS();
L_420386: /* 420386: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 420387: mov ebp, esp */
  ebp = esp;
/* 420389: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 42038c: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 420390: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 420394: mov eax, 0xfffffe00 */
  eax = 0xfffffe00u;
/* 420399: and dword ptr [ebp - 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42039c: and dword ptr [ebp - 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 42039f: mov eax, dword ptr [0x44f47c] */
  eax = R32((uint32_t)(0x44f47cu));
/* 4203a4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4203a6: je 0x420419 */
  if (zf) goto L_420419;
L_4203a8: /* 4203a8: cmp byte ptr [eax], 0x3f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x3fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4203ab: jne 0x420406 */
  if (!zf) goto L_420406;
L_4203ad: /* 4203ad: mov al, byte ptr [eax + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x1u))) & 0xffu);
/* 4203b0: cmp al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4203b2: jne 0x4203d8 */
  if (!zf) goto L_4203d8;
L_4203b4: /* 4203b4: add dword ptr [0x44f478], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(0x44f478u), r);
  }
/* 4203bb: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 4203be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4203bf: call 0x41f687 */
  esp -= 4; W32(esp, 0x4203c4u); SPILL(); f_41f687(); if (g_unwind) return; RELOAD();
/* 4203c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4203c5: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 4203c8: push 0x440724 */
  { uint32_t v = 0x440724u; esp -= 4; W32(esp, v); }
/* 4203cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4203ce: call 0x41d624 */
  esp -= 4; W32(esp, 0x4203d3u); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 4203d3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4203d6: jmp 0x420410 */
  goto L_420410;
L_4203d8: /* 4203d8: cmp al, 0x24 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x24u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4203da: jne 0x420406 */
  if (!zf) goto L_420406;
L_4203dc: /* 4203dc: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 4203df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4203e0: call 0x41e290 */
  esp -= 4; W32(esp, 0x4203e5u); SPILL(); f_41e290(); if (g_unwind) return; RELOAD();
/* 4203e5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4203e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4203e7: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 4203ea: call 0x41c7cf */
  esp -= 4; W32(esp, 0x4203efu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 4203ef: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4203f2: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4203f4: cmp al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4203f6: jne 0x420419 */
  if (!zf) goto L_420419;
L_4203f8: /* 4203f8: mov eax, dword ptr [0x44f47c] */
  eax = R32((uint32_t)(0x44f47cu));
/* 4203fd: and dword ptr [ebp - 4], 0xfffffff0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 420401: mov dword ptr [0x44f478], eax */
  W32((uint32_t)(0x44f478u), eax);
L_420406: /* 420406: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 420409: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42040a: call 0x41f687 */
  esp -= 4; W32(esp, 0x42040fu); SPILL(); f_41f687(); if (g_unwind) return; RELOAD();
/* 42040f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_420410: /* 420410: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 420413: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420414: call 0x41c7cf */
  esp -= 4; W32(esp, 0x420419u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_420419: /* 420419: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 42041c: shl eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 42041f: sar eax, 0x1c */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 28;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 420422: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 420425: jne 0x42042b */
  if (!zf) goto L_42042b;
L_420427: /* 420427: xor eax, eax */
  eax = 0;
/* 420429: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42042a: ret  */
  esp += 4; SPILL(); return;
L_42042b: /* 42042b: mov ecx, dword ptr [0x44f478] */
  ecx = R32((uint32_t)(0x44f478u));
/* 420431: cmp byte ptr [ecx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 420434: je 0x42043f */
  if (zf) goto L_42043f;
L_420436: /* 420436: test byte ptr [0x44f489], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x44f489u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42043d: je 0x420444 */
  if (zf) goto L_420444;
L_42043f: /* 42043f: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 420442: jne 0x420454 */
  if (!zf) goto L_420454;
L_420444: /* 420444: push dword ptr [0x44f47c] */
  { uint32_t v = R32((uint32_t)(0x44f47cu)); esp -= 4; W32(esp, v); }
/* 42044a: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 42044d: call 0x41d261 */
  esp -= 4; W32(esp, 0x420452u); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
/* 420452: jmp 0x420460 */
  goto L_420460;
L_420454: /* 420454: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 420457: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420458: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 42045b: call 0x41c7cf */
  esp -= 4; W32(esp, 0x420460u); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_420460: /* 420460: mov eax, dword ptr [0x44f480] */
  eax = R32((uint32_t)(0x44f480u));
/* 420465: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420467: jne 0x42048d */
  if (!zf) goto L_42048d;
L_420469: /* 420469: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 42046c: call 0x41ca90 */
  esp -= 4; W32(esp, 0x420471u); SPILL(); f_41ca90(); if (g_unwind) return; RELOAD();
/* 420471: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 420472: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 420474: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420475: mov ecx, 0x44f458 */
  ecx = 0x44f458u;
/* 42047a: mov dword ptr [0x44f484], eax */
  W32((uint32_t)(0x44f484u), eax);
/* 42047f: call 0x41c6e2 */
  esp -= 4; W32(esp, 0x420484u); SPILL(); f_41c6e2(); if (g_unwind) return; RELOAD();
/* 420484: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420486: mov dword ptr [0x44f480], eax */
  W32((uint32_t)(0x44f480u), eax);
/* 42048b: je 0x4204cb */
  if (zf) goto L_4204cb;
L_42048d: /* 42048d: push dword ptr [0x44f484] */
  { uint32_t v = R32((uint32_t)(0x44f484u)); esp -= 4; W32(esp, v); }
/* 420493: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 420496: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420497: call 0x41caed */
  esp -= 4; W32(esp, 0x42049cu); SPILL(); f_41caed(); if (g_unwind) return; RELOAD();
/* 42049c: mov eax, dword ptr [0x44f480] */
  eax = R32((uint32_t)(0x44f480u));
/* 4204a1: mov edx, eax */
  edx = eax;
/* 4204a3: jmp 0x4204bc */
  goto L_4204bc;
L_4204a5: /* 4204a5: cmp cl, 0x20 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4204a8: jne 0x4204b8 */
  if (!zf) goto L_4204b8;
L_4204aa: /* 4204aa: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 4204ab: mov byte ptr [edx], cl */
  W8((uint32_t)(edx), (ecx & 0xffu));
/* 4204ad: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4204ae: jmp 0x4204b1 */
  goto L_4204b1;
L_4204b0: /* 4204b0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_4204b1: /* 4204b1: cmp byte ptr [eax], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4204b4: je 0x4204b0 */
  if (zf) goto L_4204b0;
L_4204b6: /* 4204b6: jmp 0x4204bc */
  goto L_4204bc;
L_4204b8: /* 4204b8: mov byte ptr [edx], cl */
  W8((uint32_t)(edx), (ecx & 0xffu));
/* 4204ba: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 4204bb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_4204bc: /* 4204bc: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 4204be: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4204c0: jne 0x4204a5 */
  if (!zf) goto L_4204a5;
L_4204c2: /* 4204c2: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 4204c4: mov byte ptr [edx], al */
  W8((uint32_t)(edx), (eax & 0xffu));
/* 4204c6: mov eax, dword ptr [0x44f480] */
  eax = R32((uint32_t)(0x44f480u));
L_4204cb: /* 4204cb: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4204cc: ret  */
  esp += 4; SPILL(); return;
}

void f_4204cd(void) {
  LOAD_REGS();
L_4204cd: /* 4204cd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4204ce: mov ebp, esp */
  ebp = esp;
/* 4204d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4204d1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4204d2: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 4204d7: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 4204d9: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4204db: je 0x42057b */
  if (zf) goto L_42057b;
L_4204e1: /* 4204e1: cmp al, 0x36 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x36u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 4204e3: jl 0x4204e9 */
  if ((sf != of)) goto L_4204e9;
L_4204e5: /* 4204e5: cmp al, 0x39 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 4204e7: jle 0x4204ed */
  if ((zf || sf != of)) goto L_4204ed;
L_4204e9: /* 4204e9: cmp al, 0x5f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4204eb: jne 0x42054c */
  if (!zf) goto L_42054c;
L_4204ed: /* 4204ed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4204ee: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4204f1: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 4204f4: call 0x41cfb7 */
  esp -= 4; W32(esp, 0x4204f9u); SPILL(); f_41cfb7(); if (g_unwind) return; RELOAD();
/* 4204f9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 4204fc: call 0x41ca67 */
  esp -= 4; W32(esp, 0x420501u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 420501: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420503: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 420506: jne 0x420524 */
  if (!zf) goto L_420524;
L_420508: /* 420508: mov ecx, esi */
  ecx = esi;
/* 42050a: call 0x41ca67 */
  esp -= 4; W32(esp, 0x42050fu); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 42050f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420511: jne 0x420519 */
  if (!zf) goto L_420519;
L_420513: /* 420513: test byte ptr [esi + 4], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 420517: jne 0x420524 */
  if (!zf) goto L_420524;
L_420519: /* 420519: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42051c: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 42051f: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x420524u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
L_420524: /* 420524: mov ecx, esi */
  ecx = esi;
/* 420526: call 0x41ca67 */
  esp -= 4; W32(esp, 0x42052bu); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 42052b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42052d: jne 0x420538 */
  if (!zf) goto L_420538;
L_42052f: /* 42052f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 420530: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 420533: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x420538u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
L_420538: /* 420538: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 42053b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42053c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42053f: call 0x41fae5 */
  esp -= 4; W32(esp, 0x420544u); SPILL(); f_41fae5(); if (g_unwind) return; RELOAD();
/* 420544: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 420545: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 420546: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 420547: jmp 0x4205de */
  goto L_4205de;
L_42054c: /* 42054c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42054e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420551: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 420554: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 420557: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42055a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42055b: call 0x41fe0e */
  esp -= 4; W32(esp, 0x420560u); SPILL(); f_41fe0e(); if (g_unwind) return; RELOAD();
/* 420560: xor eax, eax */
  eax = 0;
/* 420562: cmp byte ptr [ebp + 0x14], 0x2a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x14u))); uint8_t b = (uint8_t)(0x2au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 420566: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 420569: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42056a: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 42056d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42056e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 420571: call 0x41e011 */
  esp -= 4; W32(esp, 0x420576u); SPILL(); f_41e011(); if (g_unwind) return; RELOAD();
/* 420576: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 420579: jmp 0x4205de */
  goto L_4205de;
L_42057b: /* 42057b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 42057d: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 420580: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x420585u); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
/* 420585: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 420588: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 42058b: call 0x41d3c7 */
  esp -= 4; W32(esp, 0x420590u); SPILL(); f_41d3c7(); if (g_unwind) return; RELOAD();
/* 420590: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 420593: call 0x41ca67 */
  esp -= 4; W32(esp, 0x420598u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 420598: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42059a: jne 0x4205a5 */
  if (!zf) goto L_4205a5;
L_42059c: /* 42059c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 42059d: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 4205a0: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x4205a5u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
L_4205a5: /* 4205a5: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 4205a8: call 0x41ca67 */
  esp -= 4; W32(esp, 0x4205adu); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 4205ad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4205af: jne 0x4205d2 */
  if (!zf) goto L_4205d2;
L_4205b1: /* 4205b1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 4205b4: call 0x41ca67 */
  esp -= 4; W32(esp, 0x4205b9u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 4205b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4205bb: jne 0x4205c7 */
  if (!zf) goto L_4205c7;
L_4205bd: /* 4205bd: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 4205bf: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 4205c2: call 0x41d3c7 */
  esp -= 4; W32(esp, 0x4205c7u); SPILL(); f_41d3c7(); if (g_unwind) return; RELOAD();
L_4205c7: /* 4205c7: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4205ca: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 4205cd: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x4205d2u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
L_4205d2: /* 4205d2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4205d5: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 4205d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4205d9: call 0x41c766 */
  esp -= 4; W32(esp, 0x4205deu); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
L_4205de: /* 4205de: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4205e1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4205e2: ret  */
  esp += 4; SPILL(); return;
}

void f_4205e3(void) {
  LOAD_REGS();
L_4205e3: /* 4205e3: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 4205e8: push 0x440730 */
  { uint32_t v = 0x440730u; esp -= 4; W32(esp, v); }
/* 4205ed: call 0x40101f */
  esp -= 4; W32(esp, 0x4205f2u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 4205f2: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 4205f5: xor esi, esi */
  esi = 0;
/* 4205f7: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4205f9: je 0x420607 */
  if (zf) goto L_420607;
L_4205fb: /* 4205fb: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 4205fd: call 0x40fa82 */
  esp -= 4; W32(esp, 0x420602u); SPILL(); f_40fa82(); if (g_unwind) return; RELOAD();
/* 420602: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 420603: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420605: jne 0x42060b */
  if (!zf) goto L_42060b;
L_420607: /* 420607: xor eax, eax */
  eax = 0;
/* 420609: jmp 0x42067a */
  goto L_42067a;
L_42060b: /* 42060b: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 42060d: call 0x4011b7 */
  esp -= 4; W32(esp, 0x420612u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 420612: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 420613: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 420616: mov dword ptr [0x44f458], edi */
  W32((uint32_t)(0x44f458u), edi);
/* 42061c: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 42061f: mov dword ptr [0x44f45c], eax */
  W32((uint32_t)(0x44f45cu), eax);
/* 420624: mov dword ptr [0x44f468], esi */
  W32((uint32_t)(0x44f468u), esi);
/* 42062a: mov dword ptr [0x44f460], esi */
  W32((uint32_t)(0x44f460u), esi);
/* 420630: mov dword ptr [0x44f464], esi */
  W32((uint32_t)(0x44f464u), esi);
/* 420636: movzx eax, word ptr [ebp + 0x1c] */
  eax = (uint32_t)(R16((uint32_t)(ebp + 0x1cu)));
/* 42063a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42063b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42063c: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42063f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420642: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 420645: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 42064b: call 0x41cdf4 */
  esp -= 4; W32(esp, 0x420650u); SPILL(); f_41cdf4(); if (g_unwind) return; RELOAD();
/* 420650: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 420656: call 0x420386 */
  esp -= 4; W32(esp, 0x42065bu); SPILL(); f_420386(); if (g_unwind) return; RELOAD();
/* 42065b: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 420661: mov ecx, 0x44f458 */
  ecx = 0x44f458u;
/* 420666: call 0x41c20e */
  esp -= 4; W32(esp, 0x42066bu); SPILL(); f_41c20e(); if (g_unwind) return; RELOAD();
/* 42066b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42066f: call 0x420680 */
  esp -= 4; W32(esp, 0x420674u); SPILL(); f_420680(); if (g_unwind) return; RELOAD();
/* 420674: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
L_42067a: /* 42067a: call 0x40105a */
  esp -= 4; W32(esp, 0x42067fu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 42067f: ret  */
  esp += 4; SPILL(); return;
}

void f_420680(void) {
  LOAD_REGS();
L_420680: /* 420680: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 420682: call 0x4011d9 */
  esp -= 4; W32(esp, 0x420687u); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 420687: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 420688: ret  */
  esp += 4; SPILL(); return;
}

void f_420689(void) {
  LOAD_REGS();
L_420689: /* 420689: push 0x84 */
  { uint32_t v = 0x84u; esp -= 4; W32(esp, v); }
/* 42068e: push 0x440740 */
  { uint32_t v = 0x440740u; esp -= 4; W32(esp, v); }
/* 420693: call 0x40101f */
  esp -= 4; W32(esp, 0x420698u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 420698: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 42069b: xor esi, esi */
  esi = 0;
/* 42069d: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42069f: je 0x4206ad */
  if (zf) goto L_4206ad;
L_4206a1: /* 4206a1: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 4206a3: call 0x40fa82 */
  esp -= 4; W32(esp, 0x4206a8u); SPILL(); f_40fa82(); if (g_unwind) return; RELOAD();
/* 4206a8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4206a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4206ab: jne 0x4206b1 */
  if (!zf) goto L_4206b1;
L_4206ad: /* 4206ad: xor eax, eax */
  eax = 0;
/* 4206af: jmp 0x420720 */
  goto L_420720;
L_4206b1: /* 4206b1: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 4206b3: call 0x4011b7 */
  esp -= 4; W32(esp, 0x4206b8u); SPILL(); f_4011b7(); if (g_unwind) return; RELOAD();
/* 4206b8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4206b9: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 4206bc: mov dword ptr [0x44f458], edi */
  W32((uint32_t)(0x44f458u), edi);
/* 4206c2: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 4206c5: mov dword ptr [0x44f45c], eax */
  W32((uint32_t)(0x44f45cu), eax);
/* 4206ca: mov dword ptr [0x44f468], esi */
  W32((uint32_t)(0x44f468u), esi);
/* 4206d0: mov dword ptr [0x44f460], esi */
  W32((uint32_t)(0x44f460u), esi);
/* 4206d6: mov dword ptr [0x44f464], esi */
  W32((uint32_t)(0x44f464u), esi);
/* 4206dc: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4206df: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4206e2: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4206e5: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4206e8: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4206eb: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 4206f1: call 0x41cdf4 */
  esp -= 4; W32(esp, 0x4206f6u); SPILL(); f_41cdf4(); if (g_unwind) return; RELOAD();
/* 4206f6: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 4206fc: call 0x420386 */
  esp -= 4; W32(esp, 0x420701u); SPILL(); f_420386(); if (g_unwind) return; RELOAD();
/* 420701: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 420707: mov ecx, 0x44f458 */
  ecx = 0x44f458u;
/* 42070c: call 0x41c20e */
  esp -= 4; W32(esp, 0x420711u); SPILL(); f_41c20e(); if (g_unwind) return; RELOAD();
/* 420711: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 420715: call 0x420726 */
  esp -= 4; W32(esp, 0x42071au); SPILL(); f_420726(); if (g_unwind) return; RELOAD();
/* 42071a: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
L_420720: /* 420720: call 0x40105a */
  esp -= 4; W32(esp, 0x420725u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 420725: ret  */
  esp += 4; SPILL(); return;
}

void f_420726(void) {
  LOAD_REGS();
L_420726: /* 420726: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 420728: call 0x4011d9 */
  esp -= 4; W32(esp, 0x42072du); SPILL(); f_4011d9(); if (g_unwind) return; RELOAD();
/* 42072d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42072e: ret  */
  esp += 4; SPILL(); return;
}

void f_42072f(void) {
  LOAD_REGS();
L_42072f: /* 42072f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 420730: mov ebp, esp */
  ebp = esp;
/* 420732: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 420735: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 42073a: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 42073c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 42073e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42073f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 420740: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 420741: je 0x420a66 */
  if (zf) goto L_420a66;
L_420747: /* 420747: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 42074d: and dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 420751: movzx edi, al */
  edi = (uint32_t)((eax & 0xffu));
/* 420754: mov esi, 0xfffffe00 */
  esi = 0xfffffe00u;
/* 420759: and dword ptr [ebp - 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 42075c: mov eax, edi */
  eax = edi;
/* 42075e: or ebx, 0xffffffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ebx = r;
  }
/* 420761: cmp eax, 0x4d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 420764: jg 0x4207a9 */
  if ((!zf && sf == of)) goto L_4207a9;
L_420766: /* 420766: je 0x4207a2 */
  if (zf) goto L_4207a2;
L_420768: /* 420768: sub eax, 0x43 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x43u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 42076b: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42076e: ja 0x420941 */
  if ((!cf && !zf)) goto L_420941;
L_420774: /* 420774: jmp dword ptr [eax*4 + 0x420a7e] */
  switch (R32((uint32_t)(eax*4 + 0x420a7eu))) {
    case 0x42077bu: goto L_42077b;
    case 0x42078du: goto L_42078d;
    case 0x420794u: goto L_420794;
    case 0x42079bu: goto L_42079b;
    default: guest_badjump(0x420774, R32((uint32_t)(eax*4 + 0x420a7eu))); return;
  }
L_42077b: /* 42077b: push 0x4407e4 */
  { uint32_t v = 0x4407e4u; esp -= 4; W32(esp, v); }
L_420780: /* 420780: lea ecx, [ebp - 0xc] */
  ecx = (uint32_t)(ebp + 0xfffffff4u);
/* 420783: call 0x41d261 */
  esp -= 4; W32(esp, 0x420788u); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
/* 420788: jmp 0x42096c */
  goto L_42096c;
L_42078d: /* 42078d: push 0x4407dc */
  { uint32_t v = 0x4407dcu; esp -= 4; W32(esp, v); }
/* 420792: jmp 0x420780 */
  goto L_420780;
L_420794: /* 420794: push 0x4407d8 */
  { uint32_t v = 0x4407d8u; esp -= 4; W32(esp, v); }
/* 420799: jmp 0x420780 */
  goto L_420780;
L_42079b: /* 42079b: push 0x4407d0 */
  { uint32_t v = 0x4407d0u; esp -= 4; W32(esp, v); }
/* 4207a0: jmp 0x420780 */
  goto L_420780;
L_4207a2: /* 4207a2: push 0x4407c8 */
  { uint32_t v = 0x4407c8u; esp -= 4; W32(esp, v); }
/* 4207a7: jmp 0x420780 */
  goto L_420780;
L_4207a9: /* 4207a9: cmp eax, 0x4e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4207ac: je 0x420956 */
  if (zf) goto L_420956;
L_4207b2: /* 4207b2: cmp eax, 0x4f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4207b5: je 0x420949 */
  if (zf) goto L_420949;
L_4207bb: /* 4207bb: jle 0x420941 */
  if ((zf || sf != of)) goto L_420941;
L_4207c1: /* 4207c1: cmp eax, 0x53 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x53u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4207c4: jle 0x42093a */
  if ((zf || sf != of)) goto L_42093a;
L_4207ca: /* 4207ca: cmp eax, 0x5f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4207cd: jne 0x420941 */
  if (!zf) goto L_420941;
L_4207d3: /* 4207d3: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 4207d8: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 4207da: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 4207e0: mov byte ptr [ebp - 1], al */
  W8((uint32_t)(ebp + 0xffffffffu), (eax & 0xffu));
/* 4207e3: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 4207e6: cmp eax, 0x4d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4207e9: jg 0x420878 */
  if ((!zf && sf == of)) goto L_420878;
L_4207ef: /* 4207ef: cmp eax, 0x4c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4207f2: jge 0x42086e */
  if ((sf == of)) goto L_42086e;
L_4207f4: /* 4207f4: cmp eax, 0x47 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x47u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4207f7: jg 0x42084b */
  if ((!zf && sf == of)) goto L_42084b;
L_4207f9: /* 4207f9: cmp eax, 0x46 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x46u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4207fc: jge 0x420841 */
  if ((sf == of)) goto L_420841;
L_4207fe: /* 4207fe: cmp eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 420801: je 0x42081f */
  if (zf) goto L_42081f;
L_420803: /* 420803: cmp eax, 0x43 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x43u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 420806: jle 0x4208c0 */
  if ((zf || sf != of)) goto L_4208c0;
L_42080c: /* 42080c: cmp eax, 0x45 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42080f: jg 0x4208c0 */
  if ((!zf && sf == of)) goto L_4208c0;
L_420815: /* 420815: push 0x4407c0 */
  { uint32_t v = 0x4407c0u; esp -= 4; W32(esp, v); }
/* 42081a: jmp 0x420780 */
  goto L_420780;
L_42081f: /* 42081f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420822: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 420825: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420826: call 0x42072f */
  esp -= 4; W32(esp, 0x42082bu); SPILL(); f_42072f(); if (g_unwind) return; RELOAD();
/* 42082b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42082c: push 0x4407b8 */
  { uint32_t v = 0x4407b8u; esp -= 4; W32(esp, v); }
/* 420831: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 420834: call 0x41d624 */
  esp -= 4; W32(esp, 0x420839u); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 420839: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42083c: jmp 0x420a76 */
  goto L_420a76;
L_420841: /* 420841: push 0x4407b0 */
  { uint32_t v = 0x4407b0u; esp -= 4; W32(esp, v); }
/* 420846: jmp 0x420780 */
  goto L_420780;
L_42084b: /* 42084b: cmp eax, 0x48 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42084e: jl 0x4208c0 */
  if ((sf != of)) goto L_4208c0;
L_420850: /* 420850: cmp eax, 0x49 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x49u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 420853: jle 0x420864 */
  if ((zf || sf != of)) goto L_420864;
L_420855: /* 420855: cmp eax, 0x4b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 420858: jg 0x4208c0 */
  if ((!zf && sf == of)) goto L_4208c0;
L_42085a: /* 42085a: push 0x4407a8 */
  { uint32_t v = 0x4407a8u; esp -= 4; W32(esp, v); }
/* 42085f: jmp 0x420780 */
  goto L_420780;
L_420864: /* 420864: push 0x4407a0 */
  { uint32_t v = 0x4407a0u; esp -= 4; W32(esp, v); }
/* 420869: jmp 0x420780 */
  goto L_420780;
L_42086e: /* 42086e: push 0x440794 */
  { uint32_t v = 0x440794u; esp -= 4; W32(esp, v); }
/* 420873: jmp 0x420780 */
  goto L_420780;
L_420878: /* 420878: cmp eax, 0x4e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42087b: je 0x420930 */
  if (zf) goto L_420930;
L_420881: /* 420881: cmp eax, 0x4f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 420884: je 0x4208d4 */
  if (zf) goto L_4208d4;
L_420886: /* 420886: cmp eax, 0x57 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x57u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 420889: je 0x4208ca */
  if (zf) goto L_4208ca;
L_42088b: /* 42088b: jle 0x4208c0 */
  if ((zf || sf != of)) goto L_4208c0;
L_42088d: /* 42088d: cmp eax, 0x59 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x59u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 420890: jg 0x4208c0 */
  if ((!zf && sf == of)) goto L_4208c0;
L_420892: /* 420892: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
L_420895: /* 420895: dec dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 42089b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42089c: call 0x41eab4 */
  esp -= 4; W32(esp, 0x4208a1u); SPILL(); f_41eab4(); if (g_unwind) return; RELOAD();
/* 4208a1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4208a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4208a3: lea ecx, [ebp - 0xc] */
  ecx = (uint32_t)(ebp + 0xfffffff4u);
/* 4208a6: call 0x41c7cf */
  esp -= 4; W32(esp, 0x4208abu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 4208ab: lea ecx, [ebp - 0xc] */
  ecx = (uint32_t)(ebp + 0xfffffff4u);
/* 4208ae: call 0x41ca67 */
  esp -= 4; W32(esp, 0x4208b3u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 4208b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4208b5: je 0x42096c */
  if (zf) goto L_42096c;
L_4208bb: /* 4208bb: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 4208be: jmp 0x420922 */
  goto L_420922;
L_4208c0: /* 4208c0: push 0x44078c */
  { uint32_t v = 0x44078cu; esp -= 4; W32(esp, v); }
/* 4208c5: jmp 0x420780 */
  goto L_420780;
L_4208ca: /* 4208ca: push 0x440784 */
  { uint32_t v = 0x440784u; esp -= 4; W32(esp, v); }
/* 4208cf: jmp 0x420780 */
  goto L_420780;
L_4208d4: /* 4208d4: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
/* 4208d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4208d7: /* 4208d7: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4208da: and dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 4208de: and dword ptr [ebp - 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 4208e1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 4208e4: call 0x41c766 */
  esp -= 4; W32(esp, 0x4208e9u); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 4208e9: cmp ebx, -2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4208ec: jne 0x420a0b */
  if (!zf) goto L_420a0b;
L_4208f2: /* 4208f2: or byte ptr [ebp - 0x10], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffff0u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 4208f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4208f8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 4208fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4208fc: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 4208ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420900: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 420903: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420904: call 0x4204cd */
  esp -= 4; W32(esp, 0x420909u); SPILL(); f_4204cd(); if (g_unwind) return; RELOAD();
/* 420909: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42090c: test byte ptr [ebp - 0x18], 0x80 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe8u))); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 420910: jne 0x42091f */
  if (!zf) goto L_42091f;
L_420912: /* 420912: push 0x4403f4 */
  { uint32_t v = 0x4403f4u; esp -= 4; W32(esp, v); }
/* 420917: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 42091a: call 0x41d431 */
  esp -= 4; W32(esp, 0x42091fu); SPILL(); f_41d431(); if (g_unwind) return; RELOAD();
L_42091f: /* 42091f: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
L_420922: /* 420922: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 420925: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420926: call 0x41c766 */
  esp -= 4; W32(esp, 0x42092bu); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 42092b: jmp 0x420a76 */
  goto L_420a76;
L_420930: /* 420930: push 0x44077c */
  { uint32_t v = 0x44077cu; esp -= 4; W32(esp, v); }
/* 420935: jmp 0x420780 */
  goto L_420780;
L_42093a: /* 42093a: mov ebx, edi */
  ebx = edi;
/* 42093c: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 42093f: jmp 0x420963 */
  goto L_420963;
L_420941: /* 420941: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 420944: jmp 0x420895 */
  goto L_420895;
L_420949: /* 420949: push 0x440500 */
  { uint32_t v = 0x440500u; esp -= 4; W32(esp, v); }
/* 42094e: lea ecx, [ebp - 0xc] */
  ecx = (uint32_t)(ebp + 0xfffffff4u);
/* 420951: call 0x41d261 */
  esp -= 4; W32(esp, 0x420956u); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
L_420956: /* 420956: push 0x440774 */
  { uint32_t v = 0x440774u; esp -= 4; W32(esp, v); }
/* 42095b: lea ecx, [ebp - 0xc] */
  ecx = (uint32_t)(ebp + 0xfffffff4u);
/* 42095e: call 0x41d431 */
  esp -= 4; W32(esp, 0x420963u); SPILL(); f_41d431(); if (g_unwind) return; RELOAD();
L_420963: /* 420963: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 420966: jne 0x4208d7 */
  if (!zf) goto L_4208d7;
L_42096c: /* 42096c: mov eax, edi */
  eax = edi;
/* 42096e: sub eax, 0x43 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x43u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 420971: je 0x4209c0 */
  if (zf) goto L_4209c0;
L_420973: /* 420973: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 420975: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 420976: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 420978: je 0x4209b2 */
  if (zf) goto L_4209b2;
L_42097a: /* 42097a: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42097c: je 0x4209b2 */
  if (zf) goto L_4209b2;
L_42097e: /* 42097e: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 420980: je 0x4209b2 */
  if (zf) goto L_4209b2;
L_420982: /* 420982: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 420984: je 0x4209b2 */
  if (zf) goto L_4209b2;
L_420986: /* 420986: sub eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 420989: jne 0x4209de */
  if (!zf) goto L_4209de;
L_42098b: /* 42098b: movzx eax, byte ptr [ebp - 1] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
/* 42098f: sub eax, 0x45 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 420992: je 0x4209a4 */
  if (zf) goto L_4209a4;
L_420994: /* 420994: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 420996: je 0x4209a4 */
  if (zf) goto L_4209a4;
L_420998: /* 420998: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42099a: je 0x4209a4 */
  if (zf) goto L_4209a4;
L_42099c: /* 42099c: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 42099e: je 0x4209a4 */
  if (zf) goto L_4209a4;
L_4209a0: /* 4209a0: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 4209a2: jne 0x4209de */
  if (!zf) goto L_4209de;
L_4209a4: /* 4209a4: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 4209a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4209a8: push 0x4404f4 */
  { uint32_t v = 0x4404f4u; esp -= 4; W32(esp, v); }
/* 4209ad: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 4209b0: jmp 0x4209cc */
  goto L_4209cc;
L_4209b2: /* 4209b2: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 4209b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4209b6: push 0x4404f4 */
  { uint32_t v = 0x4404f4u; esp -= 4; W32(esp, v); }
/* 4209bb: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4209be: jmp 0x4209cc */
  goto L_4209cc;
L_4209c0: /* 4209c0: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 4209c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4209c4: push 0x44076c */
  { uint32_t v = 0x44076cu; esp -= 4; W32(esp, v); }
/* 4209c9: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
L_4209cc: /* 4209cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4209cd: call 0x41d624 */
  esp -= 4; W32(esp, 0x4209d2u); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 4209d2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4209d5: lea ecx, [ebp - 0xc] */
  ecx = (uint32_t)(ebp + 0xfffffff4u);
/* 4209d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4209d9: call 0x41c7cf */
  esp -= 4; W32(esp, 0x4209deu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_4209de: /* 4209de: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 4209e1: call 0x41ca67 */
  esp -= 4; W32(esp, 0x4209e6u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 4209e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4209e8: jne 0x4208bb */
  if (!zf) goto L_4208bb;
L_4209ee: /* 4209ee: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4209ef: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 4209f2: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 4209f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4209f5: call 0x41d5e0 */
  esp -= 4; W32(esp, 0x4209fau); SPILL(); f_41d5e0(); if (g_unwind) return; RELOAD();
/* 4209fa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4209fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4209fe: lea ecx, [ebp - 0xc] */
  ecx = (uint32_t)(ebp + 0xfffffff4u);
/* 420a01: call 0x41d1e4 */
  esp -= 4; W32(esp, 0x420a06u); SPILL(); f_41d1e4(); if (g_unwind) return; RELOAD();
/* 420a06: jmp 0x4208bb */
  goto L_4208bb;
L_420a0b: /* 420a0b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 420a0e: call 0x41ca67 */
  esp -= 4; W32(esp, 0x420a13u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 420a13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420a15: je 0x420a4f */
  if (zf) goto L_420a4f;
L_420a17: /* 420a17: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 420a1a: je 0x420a3d */
  if (zf) goto L_420a3d;
L_420a1c: /* 420a1c: push 0x440764 */
  { uint32_t v = 0x440764u; esp -= 4; W32(esp, v); }
/* 420a21: lea ecx, [ebp - 0xc] */
  ecx = (uint32_t)(ebp + 0xfffffff4u);
/* 420a24: call 0x41d261 */
  esp -= 4; W32(esp, 0x420a29u); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
/* 420a29: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 420a2c: je 0x420a4f */
  if (zf) goto L_420a4f;
L_420a2e: /* 420a2e: push 0x440758 */
  { uint32_t v = 0x440758u; esp -= 4; W32(esp, v); }
/* 420a33: lea ecx, [ebp - 0xc] */
  ecx = (uint32_t)(ebp + 0xfffffff4u);
/* 420a36: call 0x41d431 */
  esp -= 4; W32(esp, 0x420a3bu); SPILL(); f_41d431(); if (g_unwind) return; RELOAD();
/* 420a3b: jmp 0x420a4f */
  goto L_420a4f;
L_420a3d: /* 420a3d: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 420a40: je 0x420a4f */
  if (zf) goto L_420a4f;
L_420a42: /* 420a42: push 0x44074c */
  { uint32_t v = 0x44074cu; esp -= 4; W32(esp, v); }
/* 420a47: lea ecx, [ebp - 0xc] */
  ecx = (uint32_t)(ebp + 0xfffffff4u);
/* 420a4a: call 0x41d261 */
  esp -= 4; W32(esp, 0x420a4fu); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
L_420a4f: /* 420a4f: push 0x2a */
  { uint32_t v = 0x2au; esp -= 4; W32(esp, v); }
/* 420a51: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 420a54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420a55: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 420a58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420a59: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 420a5c: call 0x4204cd */
  esp -= 4; W32(esp, 0x420a61u); SPILL(); f_4204cd(); if (g_unwind) return; RELOAD();
/* 420a61: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 420a64: jmp 0x420a76 */
  goto L_420a76;
L_420a66: /* 420a66: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420a69: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 420a6b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 420a6e: call 0x41d602 */
  esp -= 4; W32(esp, 0x420a73u); SPILL(); f_41d602(); if (g_unwind) return; RELOAD();
/* 420a73: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_420a76: /* 420a76: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 420a79: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 420a7a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 420a7b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 420a7c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 420a7d: ret  */
  esp += 4; SPILL(); return;
}

void f_420aa2(void) {
  LOAD_REGS();
L_420aa2: /* 420aa2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 420aa3: mov ebp, esp */
  ebp = esp;
/* 420aa5: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 420aa8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 420aa9: mov esi, dword ptr [0x44f478] */
  esi = R32((uint32_t)(0x44f478u));
/* 420aaf: movsx eax, byte ptr [esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* 420ab2: xor edx, edx */
  edx = 0;
/* 420ab4: mov ecx, 0xfffffe00 */
  ecx = 0xfffffe00u;
/* 420ab9: and dword ptr [ebp - 4], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 420abc: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 420abe: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* 420ac1: je 0x420b3a */
  if (zf) goto L_420b3a;
L_420ac3: /* 420ac3: sub eax, 0x24 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 420ac6: je 0x420b2f */
  if (zf) goto L_420b2f;
L_420ac8: /* 420ac8: sub eax, 0x1d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 420acb: je 0x420b03 */
  if (zf) goto L_420b03;
L_420acd: /* 420acd: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 420ace: je 0x420ae0 */
  if (zf) goto L_420ae0;
L_420ad0: /* 420ad0: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420ad3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 420ad6: call 0x42072f */
  esp -= 4; W32(esp, 0x420adbu); SPILL(); f_42072f(); if (g_unwind) return; RELOAD();
/* 420adb: jmp 0x420bcb */
  goto L_420bcb;
L_420ae0: /* 420ae0: push 0x44074c */
  { uint32_t v = 0x44074cu; esp -= 4; W32(esp, v); }
/* 420ae5: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 420ae8: call 0x41d261 */
  esp -= 4; W32(esp, 0x420aedu); SPILL(); f_41d261(); if (g_unwind) return; RELOAD();
/* 420aed: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 420af0: call 0x41ca67 */
  esp -= 4; W32(esp, 0x420af5u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 420af5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420af7: jne 0x420b03 */
  if (!zf) goto L_420b03;
L_420af9: /* 420af9: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 420afb: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 420afe: call 0x41d3c7 */
  esp -= 4; W32(esp, 0x420b03u); SPILL(); f_41d3c7(); if (g_unwind) return; RELOAD();
L_420b03: /* 420b03: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420b06: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 420b09: call 0x41c766 */
  esp -= 4; W32(esp, 0x420b0eu); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 420b0e: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 420b14: or dword ptr [ebp - 0xc], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 420b18: push 0x26 */
  { uint32_t v = 0x26u; esp -= 4; W32(esp, v); }
/* 420b1a: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 420b1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420b1e: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 420b21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420b22: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 420b25: call 0x4204cd */
  esp -= 4; W32(esp, 0x420b2au); SPILL(); f_4204cd(); if (g_unwind) return; RELOAD();
/* 420b2a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 420b2d: jmp 0x420b4a */
  goto L_420b4a;
L_420b2f: /* 420b2f: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 420b32: cmp al, 0x24 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x24u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 420b34: je 0x420b50 */
  if (zf) goto L_420b50;
L_420b36: /* 420b36: cmp al, dl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 420b38: jne 0x420b6a */
  if (!zf) goto L_420b6a;
L_420b3a: /* 420b3a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420b3d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 420b3f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 420b42: call 0x41d602 */
  esp -= 4; W32(esp, 0x420b47u); SPILL(); f_41d602(); if (g_unwind) return; RELOAD();
L_420b47: /* 420b47: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_420b4a: /* 420b4a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 420b4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 420b4e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 420b4f: ret  */
  esp += 4; SPILL(); return;
L_420b50: /* 420b50: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 420b51: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 420b52: mov dword ptr [0x44f478], esi */
  W32((uint32_t)(0x44f478u), esi);
/* 420b58: movsx eax, byte ptr [esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* 420b5b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 420b5d: je 0x420b3a */
  if (zf) goto L_420b3a;
L_420b5f: /* 420b5f: sub eax, 0x41 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x41u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 420b62: je 0x420bb9 */
  if (zf) goto L_420bb9;
L_420b64: /* 420b64: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 420b65: je 0x420ba3 */
  if (zf) goto L_420ba3;
L_420b67: /* 420b67: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 420b68: je 0x420b76 */
  if (zf) goto L_420b76;
L_420b6a: /* 420b6a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 420b6d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 420b6f: call 0x41c9f0 */
  esp -= 4; W32(esp, 0x420b74u); SPILL(); f_41c9f0(); if (g_unwind) return; RELOAD();
/* 420b74: jmp 0x420b4a */
  goto L_420b4a;
L_420b76: /* 420b76: and dword ptr [ebp - 0xc], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 420b79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 420b7a: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 420b7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420b7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 420b7f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420b82: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 420b85: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 420b86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420b87: mov dword ptr [0x44f478], esi */
  W32((uint32_t)(0x44f478u), esi);
/* 420b8d: mov dword ptr [ebp - 0x10], edx */
  W32((uint32_t)(ebp + 0xfffffff0u), edx);
/* 420b90: call 0x41fe0e */
  esp -= 4; W32(esp, 0x420b95u); SPILL(); f_41fe0e(); if (g_unwind) return; RELOAD();
/* 420b95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420b96: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 420b99: call 0x42072f */
  esp -= 4; W32(esp, 0x420b9eu); SPILL(); f_42072f(); if (g_unwind) return; RELOAD();
/* 420b9e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 420ba1: jmp 0x420b4a */
  goto L_420b4a;
L_420ba3: /* 420ba3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 420ba5: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420ba8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 420ba9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 420bac: mov dword ptr [0x44f478], esi */
  W32((uint32_t)(0x44f478u), esi);
/* 420bb2: call 0x41e011 */
  esp -= 4; W32(esp, 0x420bb7u); SPILL(); f_41e011(); if (g_unwind) return; RELOAD();
/* 420bb7: jmp 0x420b47 */
  goto L_420b47;
L_420bb9: /* 420bb9: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420bbc: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 420bbd: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 420bc0: mov dword ptr [0x44f478], esi */
  W32((uint32_t)(0x44f478u), esi);
/* 420bc6: call 0x41fae5 */
  esp -= 4; W32(esp, 0x420bcbu); SPILL(); f_41fae5(); if (g_unwind) return; RELOAD();
L_420bcb: /* 420bcb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 420bcc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 420bcd: jmp 0x420b4a */
  goto L_420b4a;
}

void f_420bd2(void) {
  LOAD_REGS();
L_420bd2: /* 420bd2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 420bd3: mov ebp, esp */
  ebp = esp;
/* 420bd5: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 420bd8: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420bdb: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 420bde: call 0x41c99b */
  esp -= 4; W32(esp, 0x420be3u); SPILL(); f_41c99b(); if (g_unwind) return; RELOAD();
/* 420be3: mov eax, dword ptr [0x44f478] */
  eax = R32((uint32_t)(0x44f478u));
/* 420be8: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 420bea: xor ecx, ecx */
  ecx = 0;
/* 420bec: cmp al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 420bee: je 0x420c6a */
  if (zf) goto L_420c6a;
L_420bf0: /* 420bf0: cmp al, 0x3f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 420bf2: je 0x420c2c */
  if (zf) goto L_420c2c;
L_420bf4: /* 420bf4: cmp al, 0x58 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 420bf6: jne 0x420c5a */
  if (!zf) goto L_420c5a;
L_420bf8: /* 420bf8: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 420bfe: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 420c01: call 0x41ca67 */
  esp -= 4; W32(esp, 0x420c06u); SPILL(); f_41ca67(); if (g_unwind) return; RELOAD();
/* 420c06: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420c08: je 0x420c19 */
  if (zf) goto L_420c19;
L_420c0a: /* 420c0a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 420c0d: push 0x440520 */
  { uint32_t v = 0x440520u; esp -= 4; W32(esp, v); }
/* 420c12: call 0x41cfdc */
  esp -= 4; W32(esp, 0x420c17u); SPILL(); f_41cfdc(); if (g_unwind) return; RELOAD();
/* 420c17: jmp 0x420c7b */
  goto L_420c7b;
L_420c19: /* 420c19: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 420c1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420c1d: push 0x440568 */
  { uint32_t v = 0x440568u; esp -= 4; W32(esp, v); }
/* 420c22: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 420c25: call 0x41d624 */
  esp -= 4; W32(esp, 0x420c2au); SPILL(); f_41d624(); if (g_unwind) return; RELOAD();
/* 420c2a: jmp 0x420c78 */
  goto L_420c78;
L_420c2c: /* 420c2c: inc dword ptr [0x44f478] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x44f478u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x44f478u), r);
  }
/* 420c32: and word ptr [ebp - 0xc], 0xfe00 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff4u))); uint16_t b = (uint16_t)(0xfe00u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 420c38: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 420c39: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 420c3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420c3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 420c3e: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 420c41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420c42: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 420c45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420c46: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 420c49: call 0x41fe0e */
  esp -= 4; W32(esp, 0x420c4eu); SPILL(); f_41fe0e(); if (g_unwind) return; RELOAD();
/* 420c4e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 420c51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420c52: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 420c55: call 0x41c7cf */
  esp -= 4; W32(esp, 0x420c5au); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
L_420c5a: /* 420c5a: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 420c5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420c5e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 420c61: call 0x420aa2 */
  esp -= 4; W32(esp, 0x420c66u); SPILL(); f_420aa2(); if (g_unwind) return; RELOAD();
/* 420c66: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 420c67: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 420c68: jmp 0x420c7b */
  goto L_420c7b;
L_420c6a: /* 420c6a: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 420c6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420c6e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 420c70: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 420c73: call 0x41d602 */
  esp -= 4; W32(esp, 0x420c78u); SPILL(); f_41d602(); if (g_unwind) return; RELOAD();
L_420c78: /* 420c78: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_420c7b: /* 420c7b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 420c7e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 420c7f: ret  */
  esp += 4; SPILL(); return;
}

void f_420c80(void) {
  LOAD_REGS();
L_420c80: /* 420c80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 420c81: mov ebp, esp */
  ebp = esp;
/* 420c83: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 420c86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 420c87: xor esi, esi */
  esi = 0;
/* 420c89: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 420c8a: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 420c8c: mov ecx, 0x44f458 */
  ecx = 0x44f458u;
/* 420c91: call 0x41c6e2 */
  esp -= 4; W32(esp, 0x420c96u); SPILL(); f_41c6e2(); if (g_unwind) return; RELOAD();
/* 420c96: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 420c98: je 0x420ca4 */
  if (zf) goto L_420ca4;
L_420c9a: /* 420c9a: and word ptr [eax + 4], 0xfe00 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x4u))); uint16_t b = (uint16_t)(0xfe00u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(eax + 0x4u), r);
  }
/* 420ca0: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 420ca2: mov esi, eax */
  esi = eax;
L_420ca4: /* 420ca4: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 420ca7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 420ca8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420ca9: call 0x420bd2 */
  esp -= 4; W32(esp, 0x420caeu); SPILL(); f_420bd2(); if (g_unwind) return; RELOAD();
/* 420cae: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 420cb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420cb2: call 0x41c934 */
  esp -= 4; W32(esp, 0x420cb7u); SPILL(); f_41c934(); if (g_unwind) return; RELOAD();
/* 420cb7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 420cba: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420cbd: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 420cc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420cc1: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 420cc3: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 420cc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420cc7: lea ecx, [ebp - 8] */
  ecx = (uint32_t)(ebp + 0xfffffff8u);
/* 420cca: call 0x41d646 */
  esp -= 4; W32(esp, 0x420ccfu); SPILL(); f_41d646(); if (g_unwind) return; RELOAD();
/* 420ccf: mov ecx, eax */
  ecx = eax;
/* 420cd1: call 0x41d364 */
  esp -= 4; W32(esp, 0x420cd6u); SPILL(); f_41d364(); if (g_unwind) return; RELOAD();
/* 420cd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420cd7: mov ecx, esi */
  ecx = esi;
/* 420cd9: call 0x41c7cf */
  esp -= 4; W32(esp, 0x420cdeu); SPILL(); f_41c7cf(); if (g_unwind) return; RELOAD();
/* 420cde: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 420ce1: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 420ce4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420ce5: call 0x41c766 */
  esp -= 4; W32(esp, 0x420ceau); SPILL(); f_41c766(); if (g_unwind) return; RELOAD();
/* 420cea: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 420ced: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 420cee: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 420cef: ret  */
  esp += 4; SPILL(); return;
}

void f_420cf0(void) {
  LOAD_REGS();
L_420cf0: /* 420cf0: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 420cf2: push 0x4407f0 */
  { uint32_t v = 0x4407f0u; esp -= 4; W32(esp, v); }
/* 420cf7: call 0x40101f */
  esp -= 4; W32(esp, 0x420cfcu); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 420cfc: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_420d00: /* 420d00: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 420d03: js 0x420d13 */
  if (sf) goto L_420d13;
L_420d05: /* 420d05: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 420d08: sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 420d0b: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 420d0e: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0x420d11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 420d11: jmp 0x420d00 */
  goto L_420d00;
L_420d13: /* 420d13: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 420d17: call 0x40105a */
  esp -= 4; W32(esp, 0x420d1cu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 420d1c: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_420d1f(void) {
  LOAD_REGS();
L_420d1f: /* 420d1f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 420d22: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 420d25: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 420d28: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 420d2a: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 420d2d: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 420d30: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 420d36: je 0x420d48 */
  if (zf) goto L_420d48;
L_420d38: /* 420d38: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 420d3f: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 420d42: ret  */
  esp += 4; SPILL(); return;
L_420d48: /* 420d48: call 0x41b959 */
  esp -= 4; W32(esp, 0x420d4du); SPILL(); f_41b959(); if (g_unwind) return; RELOAD();
  SPILL(); f_420d4d(); return;
}

void f_420d43(void) {
  LOAD_REGS();
  goto L_420d43;
L_420d13: /* 420d13: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 420d17: call 0x40105a */
  esp -= 4; W32(esp, 0x420d1cu); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 420d1c: ret 0x10 */
  esp += 20; SPILL(); return;
L_420d43: /* 420d43: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* 420d46: jmp 0x420d13 */
  goto L_420d13;
}

void f_420d4d(void) {
  LOAD_REGS();
L_420d4d: /* 420d4d: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 420d4f: push 0x440800 */
  { uint32_t v = 0x440800u; esp -= 4; W32(esp, v); }
/* 420d54: call 0x40101f */
  esp -= 4; W32(esp, 0x420d59u); SPILL(); f_40101f(); if (g_unwind) return; RELOAD();
/* 420d59: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 420d5d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 420d60: mov eax, esi */
  eax = esi;
/* 420d62: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* 420d66: add dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 420d69: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_420d6d: /* 420d6d: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 420d70: js 0x420d7d */
  if (sf) goto L_420d7d;
L_420d72: /* 420d72: sub dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 420d75: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 420d78: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0x420d7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 420d7b: jmp 0x420d6d */
  goto L_420d6d;
L_420d7d: /* 420d7d: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* 420d84: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 420d88: call 0x420d95 */
  esp -= 4; W32(esp, 0x420d8du); SPILL(); f_420d95(); if (g_unwind) return; RELOAD();
/* 420d8d: call 0x40105a */
  esp -= 4; W32(esp, 0x420d92u); SPILL(); f_40105a(); if (g_unwind) return; RELOAD();
/* 420d92: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_420d95(void) {
  LOAD_REGS();
L_420d95: /* 420d95: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 420d99: jne 0x420dac */
  if (!zf) goto L_420dac;
L_420d9b: /* 420d9b: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 420d9e: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 420da1: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420da4: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 420da7: call 0x420cf0 */
  esp -= 4; W32(esp, 0x420dacu); SPILL(); f_420cf0(); if (g_unwind) return; RELOAD();
L_420dac: /* 420dac: ret  */
  esp += 4; SPILL(); return;
}

void f_420dad(void) {
  LOAD_REGS();
L_420dad: /* 420dad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 420dae: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 420db2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 420db4: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 420dba: jne 0x420dd0 */
  if (!zf) goto L_420dd0;
L_420dbc: /* 420dbc: cmp dword ptr [eax + 0x10], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 420dc0: jne 0x420dd0 */
  if (!zf) goto L_420dd0;
L_420dc2: /* 420dc2: cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x19930520u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 420dc9: jne 0x420dd0 */
  if (!zf) goto L_420dd0;
L_420dcb: /* 420dcb: call 0x41b959 */
  esp -= 4; W32(esp, 0x420dd0u); SPILL(); f_41b959(); if (g_unwind) return; RELOAD();
L_420dd0: /* 420dd0: mov eax, dword ptr [0x44ab6c] */
  eax = R32((uint32_t)(0x44ab6cu));
/* 420dd5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420dd7: je 0x420ded */
  if (zf) goto L_420ded;
L_420dd9: /* 420dd9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420dda: call 0x420e2b */
  esp -= 4; W32(esp, 0x420ddfu); SPILL(); f_420e2b(); if (g_unwind) return; RELOAD();
/* 420ddf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420de1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 420de2: je 0x420ded */
  if (zf) goto L_420ded;
L_420de4: /* 420de4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 420de5: call dword ptr [0x44ab6c] */
  { uint32_t t = R32((uint32_t)(0x44ab6cu)); esp -= 4; W32(esp, 0x420debu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 420deb: jmp 0x420def */
  goto L_420def;
L_420ded: /* 420ded: xor eax, eax */
  eax = 0;
L_420def: /* 420def: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 420df0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_420df3(void) {
  LOAD_REGS();
L_420df3: /* 420df3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 420df4: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420df8: xor esi, esi */
  esi = 0;
/* 420dfa: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420dfe: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 420dff: call dword ptr [0x4391c8] */
  esp -= 4; W32(esp, 0x420e05u); SPILL(); call_ind(R32(0x4391c8u)); if (g_unwind) return; /* KERNEL32!IsBadReadPtr */ RELOAD();
/* 420e05: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420e07: je 0x420e0b */
  if (zf) goto L_420e0b;
L_420e09: /* 420e09: xor esi, esi */
  esi = 0;
L_420e0b: /* 420e0b: mov eax, esi */
  eax = esi;
/* 420e0d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 420e0e: ret  */
  esp += 4; SPILL(); return;
}

void f_420e0f(void) {
  LOAD_REGS();
L_420e0f: /* 420e0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 420e10: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420e14: xor esi, esi */
  esi = 0;
/* 420e16: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420e1a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 420e1b: call dword ptr [0x43909c] */
  esp -= 4; W32(esp, 0x420e21u); SPILL(); call_ind(R32(0x43909cu)); if (g_unwind) return; /* KERNEL32!IsBadWritePtr */ RELOAD();
/* 420e21: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420e23: je 0x420e27 */
  if (zf) goto L_420e27;
L_420e25: /* 420e25: xor esi, esi */
  esi = 0;
L_420e27: /* 420e27: mov eax, esi */
  eax = esi;
/* 420e29: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 420e2a: ret  */
  esp += 4; SPILL(); return;
}

void f_420e2b(void) {
  LOAD_REGS();
L_420e2b: /* 420e2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 420e2c: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 420e30: xor esi, esi */
  esi = 0;
/* 420e32: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 420e33: call dword ptr [0x4391d0] */
  esp -= 4; W32(esp, 0x420e39u); SPILL(); call_ind(R32(0x4391d0u)); if (g_unwind) return; /* KERNEL32!IsBadCodePtr */ RELOAD();
/* 420e39: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420e3b: je 0x420e3f */
  if (zf) goto L_420e3f;
L_420e3d: /* 420e3d: xor esi, esi */
  esi = 0;
L_420e3f: /* 420e3f: mov eax, esi */
  eax = esi;
/* 420e41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 420e42: ret  */
  esp += 4; SPILL(); return;
}

void f_420e43(void) {
  LOAD_REGS();
L_420e43: /* 420e43: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 420e44: mov ebp, esp */
  ebp = esp;
/* 420e46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 420e47: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 420e4a: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 420e4d: je 0x420ec1 */
  if (zf) goto L_420ec1;
L_420e4f: /* 420e4f: cmp ebx, -2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 420e52: je 0x420ec1 */
  if (zf) goto L_420ec1;
L_420e54: /* 420e54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 420e55: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 420e57: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 420e58: call dword ptr [0x4391d8] */
  esp -= 4; W32(esp, 0x420e5eu); SPILL(); call_ind(R32(0x4391d8u)); if (g_unwind) return; /* KERNEL32!WaitForSingleObject */ RELOAD();
/* 420e5e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420e60: jne 0x420e75 */
  if (!zf) goto L_420e75;
L_420e62: /* 420e62: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 420e65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420e66: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 420e67: call dword ptr [0x4391d4] */
  esp -= 4; W32(esp, 0x420e6du); SPILL(); call_ind(R32(0x4391d4u)); if (g_unwind) return; /* KERNEL32!GetExitCodeProcess */ RELOAD();
/* 420e6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420e6f: je 0x420e75 */
  if (zf) goto L_420e75;
L_420e71: /* 420e71: mov esi, ebx */
  esi = ebx;
/* 420e73: jmp 0x420ea9 */
  goto L_420ea9;
L_420e75: /* 420e75: mov esi, dword ptr [0x43904c] */
  esi = R32((uint32_t)(0x43904cu));
/* 420e7b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x420e7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 420e7d: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 420e80: jne 0x420e9a */
  if (!zf) goto L_420e9a;
L_420e82: /* 420e82: call 0x4102a5 */
  esp -= 4; W32(esp, 0x420e87u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 420e87: mov dword ptr [eax], 0xa */
  W32((uint32_t)(eax), 0xau);
/* 420e8d: call 0x4102ae */
  esp -= 4; W32(esp, 0x420e92u); SPILL(); f_4102ae(); if (g_unwind) return; RELOAD();
/* 420e92: mov dword ptr [eax], 6 */
  W32((uint32_t)(eax), 0x6u);
/* 420e98: jmp 0x420ea3 */
  goto L_420ea3;
L_420e9a: /* 420e9a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x420e9cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 420e9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420e9d: call 0x4102b7 */
  esp -= 4; W32(esp, 0x420ea2u); SPILL(); f_4102b7(); if (g_unwind) return; RELOAD();
/* 420ea2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_420ea3: /* 420ea3: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 420ea6: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
L_420ea9: /* 420ea9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 420eaa: call dword ptr [0x439044] */
  esp -= 4; W32(esp, 0x420eb0u); SPILL(); call_ind(R32(0x439044u)); if (g_unwind) return; /* KERNEL32!CloseHandle */ RELOAD();
/* 420eb0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 420eb3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420eb5: je 0x420ebc */
  if (zf) goto L_420ebc;
L_420eb7: /* 420eb7: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 420eba: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_420ebc: /* 420ebc: mov eax, esi */
  eax = esi;
/* 420ebe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 420ebf: jmp 0x420ecf */
  goto L_420ecf;
L_420ec1: /* 420ec1: call 0x4102a5 */
  esp -= 4; W32(esp, 0x420ec6u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 420ec6: mov dword ptr [eax], 0xa */
  W32((uint32_t)(eax), 0xau);
/* 420ecc: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_420ecf: /* 420ecf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 420ed0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 420ed1: ret  */
  esp += 4; SPILL(); return;
}

void f_420ed2(void) {
  LOAD_REGS();
L_420ed2: /* 420ed2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 420ed4: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 420ed8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420ed9: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420edd: call 0x420f9e */
  esp -= 4; W32(esp, 0x420ee2u); SPILL(); f_420f9e(); if (g_unwind) return; RELOAD();
/* 420ee2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 420ee5: ret  */
  esp += 4; SPILL(); return;
}

void f_420ee6(void) {
  LOAD_REGS();
L_420ee6: /* 420ee6: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
L_420eea: /* 420eea: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 420eec: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 420eef: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420ef1: jne 0x420eea */
  if (!zf) goto L_420eea;
L_420ef3: /* 420ef3: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 420ef5: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 420ef9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420efa: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420efe: call 0x420f9e */
  esp -= 4; W32(esp, 0x420f03u); SPILL(); f_420f9e(); if (g_unwind) return; RELOAD();
/* 420f03: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 420f06: ret  */
  esp += 4; SPILL(); return;
}

void f_420f07(void) {
  LOAD_REGS();
L_420f07: /* 420f07: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 420f0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420f0c: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 420f10: call 0x4210de */
  esp -= 4; W32(esp, 0x420f15u); SPILL(); f_4210de(); if (g_unwind) return; RELOAD();
/* 420f15: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 420f16: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 420f17: ret  */
  esp += 4; SPILL(); return;
}

void f_420f18(void) {
  LOAD_REGS();
L_420f18: /* 420f18: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
L_420f1c: /* 420f1c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 420f1e: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 420f21: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420f23: jne 0x420f1c */
  if (!zf) goto L_420f1c;
L_420f25: /* 420f25: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 420f27: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 420f2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420f2c: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420f30: call 0x4210f1 */
  esp -= 4; W32(esp, 0x420f35u); SPILL(); f_4210f1(); if (g_unwind) return; RELOAD();
/* 420f35: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 420f38: ret  */
  esp += 4; SPILL(); return;
}

void f_420f39(void) {
  LOAD_REGS();
L_420f39: /* 420f39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 420f3b: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420f3f: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420f43: call 0x420f9e */
  esp -= 4; W32(esp, 0x420f48u); SPILL(); f_420f9e(); if (g_unwind) return; RELOAD();
/* 420f48: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 420f4b: ret  */
  esp += 4; SPILL(); return;
}

void f_420f4c(void) {
  LOAD_REGS();
L_420f4c: /* 420f4c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 420f4d: mov ebp, esp */
  ebp = esp;
/* 420f4f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 420f50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 420f51: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 420f54: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 420f57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420f58: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 420f5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420f5c: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 420f5f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 420f62: call 0x422060 */
  esp -= 4; W32(esp, 0x420f67u); SPILL(); f_422060(); if (g_unwind) return; RELOAD();
/* 420f67: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 420f6a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 420f6d: jne 0x420f73 */
  if (!zf) goto L_420f73;
L_420f6f: /* 420f6f: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 420f71: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 420f72: ret  */
  esp += 4; SPILL(); return;
L_420f73: /* 420f73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 420f74: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 420f77: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 420f7a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 420f7d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 420f7f: call 0x421e86 */
  esp -= 4; W32(esp, 0x420f84u); SPILL(); f_421e86(); if (g_unwind) return; RELOAD();
/* 420f84: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 420f87: mov esi, eax */
  esi = eax;
/* 420f89: call 0x401156 */
  esp -= 4; W32(esp, 0x420f8eu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 420f8e: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 420f91: call 0x401156 */
  esp -= 4; W32(esp, 0x420f96u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 420f96: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 420f99: mov eax, esi */
  eax = esi;
/* 420f9b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 420f9c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 420f9d: ret  */
  esp += 4; SPILL(); return;
}

void f_420f9e(void) {
  LOAD_REGS();
L_420f9e: /* 420f9e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 420f9f: mov ebp, esp */
  ebp = esp;
/* 420fa1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 420fa2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 420fa3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 420fa4: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 420fa7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 420fa8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 420fa9: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 420fab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 420fac: mov edi, ebx */
  edi = ebx;
/* 420fae: call 0x427075 */
  esp -= 4; W32(esp, 0x420fb3u); SPILL(); f_427075(); if (g_unwind) return; RELOAD();
/* 420fb3: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* 420fb5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 420fb6: mov esi, eax */
  esi = eax;
/* 420fb8: call 0x427075 */
  esp -= 4; W32(esp, 0x420fbdu); SPILL(); f_427075(); if (g_unwind) return; RELOAD();
/* 420fbd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 420fc0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420fc2: jne 0x421009 */
  if (!zf) goto L_421009;
L_420fc4: /* 420fc4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420fc6: jne 0x421013 */
  if (!zf) goto L_421013;
L_420fc8: /* 420fc8: push 0x3a */
  { uint32_t v = 0x3au; esp -= 4; W32(esp, v); }
/* 420fca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 420fcb: call 0x4169f3 */
  esp -= 4; W32(esp, 0x420fd0u); SPILL(); f_4169f3(); if (g_unwind) return; RELOAD();
/* 420fd0: mov esi, eax */
  esi = eax;
/* 420fd2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420fd4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 420fd5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 420fd6: jne 0x421013 */
  if (!zf) goto L_421013;
L_420fd8: /* 420fd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 420fd9: call 0x402493 */
  esp -= 4; W32(esp, 0x420fdeu); SPILL(); hle_strlen(); RELOAD();
/* 420fde: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 420fe1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 420fe2: call 0x4010eb */
  esp -= 4; W32(esp, 0x420fe7u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 420fe7: mov edi, eax */
  edi = eax;
/* 420fe9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 420feb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 420fec: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 420fed: je 0x421066 */
  if (zf) goto L_421066;
L_420fef: /* 420fef: push 0x44080c */
  { uint32_t v = 0x44080cu; esp -= 4; W32(esp, v); }
/* 420ff4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 420ff5: call 0x404b3a */
  esp -= 4; W32(esp, 0x420ffau); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 420ffa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 420ffb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 420ffc: call 0x401d57 */
  esp -= 4; W32(esp, 0x421001u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 421001: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421004: lea esi, [edi + 2] */
  esi = (uint32_t)(edi + 0x2u);
/* 421007: jmp 0x421013 */
  goto L_421013;
L_421009: /* 421009: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42100b: je 0x421011 */
  if (zf) goto L_421011;
L_42100d: /* 42100d: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 42100f: jbe 0x421013 */
  if ((cf | zf)) goto L_421013;
L_421011: /* 421011: mov esi, eax */
  esi = eax;
L_421013: /* 421013: or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 421017: push 0x2e */
  { uint32_t v = 0x2eu; esp -= 4; W32(esp, v); }
/* 421019: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42101a: call 0x427075 */
  esp -= 4; W32(esp, 0x42101fu); SPILL(); f_427075(); if (g_unwind) return; RELOAD();
/* 42101f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421021: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421022: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421023: je 0x42104c */
  if (zf) goto L_42104c;
L_421025: /* 421025: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 421027: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421028: call 0x418bc2 */
  esp -= 4; W32(esp, 0x42102du); SPILL(); f_418bc2(); if (g_unwind) return; RELOAD();
/* 42102d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421030: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421031: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421032: je 0x4210cb */
  if (zf) goto L_4210cb;
L_421038: /* 421038: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42103b: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42103e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42103f: call 0x420f4c */
  esp -= 4; W32(esp, 0x421044u); SPILL(); f_420f4c(); if (g_unwind) return; RELOAD();
/* 421044: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421047: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 42104a: jmp 0x4210cb */
  goto L_4210cb;
L_42104c: /* 42104c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42104d: call 0x402493 */
  esp -= 4; W32(esp, 0x421052u); SPILL(); hle_strlen(); RELOAD();
/* 421052: add eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 421055: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421056: call 0x4010eb */
  esp -= 4; W32(esp, 0x42105bu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42105b: mov ebx, eax */
  ebx = eax;
/* 42105d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42105f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421060: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421061: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 421064: jne 0x42106b */
  if (!zf) goto L_42106b;
L_421066: /* 421066: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 421069: jmp 0x4210d9 */
  goto L_4210d9;
L_42106b: /* 42106b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42106c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42106d: call 0x404b3a */
  esp -= 4; W32(esp, 0x421072u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 421072: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421073: call 0x402493 */
  esp -= 4; W32(esp, 0x421078u); SPILL(); hle_strlen(); RELOAD();
/* 421078: mov esi, eax */
  esi = eax;
/* 42107a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42107d: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 42107f: mov ebx, 0x44dd20 */
  ebx = 0x44dd20u;
L_421084: /* 421084: push dword ptr [ebx] */
  { uint32_t v = R32((uint32_t)(ebx)); esp -= 4; W32(esp, v); }
/* 421086: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421087: call 0x404b3a */
  esp -= 4; W32(esp, 0x42108cu); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 42108c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42108e: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 421091: call 0x418bc2 */
  esp -= 4; W32(esp, 0x421096u); SPILL(); f_418bc2(); if (g_unwind) return; RELOAD();
/* 421096: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421099: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42109c: jne 0x4210ab */
  if (!zf) goto L_4210ab;
L_42109e: /* 42109e: sub ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 4210a1: cmp ebx, 0x44dd14 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x44dd14u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4210a7: jge 0x421084 */
  if ((sf == of)) goto L_421084;
L_4210a9: /* 4210a9: jmp 0x4210bf */
  goto L_4210bf;
L_4210ab: /* 4210ab: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4210ae: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4210b1: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 4210b4: call 0x420f4c */
  esp -= 4; W32(esp, 0x4210b9u); SPILL(); f_420f4c(); if (g_unwind) return; RELOAD();
/* 4210b9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4210bc: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
L_4210bf: /* 4210bf: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 4210c2: call 0x401156 */
  esp -= 4; W32(esp, 0x4210c7u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4210c7: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 4210ca: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4210cb: /* 4210cb: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4210cd: je 0x4210d6 */
  if (zf) goto L_4210d6;
L_4210cf: /* 4210cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4210d0: call 0x401156 */
  esp -= 4; W32(esp, 0x4210d5u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4210d5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4210d6: /* 4210d6: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
L_4210d9: /* 4210d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4210da: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4210db: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4210dc: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4210dd: ret  */
  esp += 4; SPILL(); return;
}

void f_4210de(void) {
  LOAD_REGS();
L_4210de: /* 4210de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4210e0: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4210e4: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4210e8: call 0x4210f1 */
  esp -= 4; W32(esp, 0x4210edu); SPILL(); f_4210f1(); if (g_unwind) return; RELOAD();
/* 4210ed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4210f0: ret  */
  esp += 4; SPILL(); return;
}

void f_4210f1(void) {
  LOAD_REGS();
L_4210f1: /* 4210f1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4210f2: mov ebp, esp */
  ebp = esp;
/* 4210f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4210f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4210f6: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4210f9: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4210fc: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4210ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421100: call 0x420f9e */
  esp -= 4; W32(esp, 0x421105u); SPILL(); f_420f9e(); if (g_unwind) return; RELOAD();
/* 421105: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421108: call 0x4102a5 */
  esp -= 4; W32(esp, 0x42110du); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 42110d: cmp dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421110: jne 0x421256 */
  if (!zf) goto L_421256;
L_421116: /* 421116: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 421118: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421119: call 0x4169f3 */
  esp -= 4; W32(esp, 0x42111eu); SPILL(); f_4169f3(); if (g_unwind) return; RELOAD();
/* 42111e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421120: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421121: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421122: jne 0x421256 */
  if (!zf) goto L_421256;
L_421128: /* 421128: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* 42112a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42112b: call 0x4169f3 */
  esp -= 4; W32(esp, 0x421130u); SPILL(); f_4169f3(); if (g_unwind) return; RELOAD();
/* 421130: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421132: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421133: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421134: jne 0x421256 */
  if (!zf) goto L_421256;
L_42113a: /* 42113a: cmp byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42113c: je 0x421148 */
  if (zf) goto L_421148;
L_42113e: /* 42113e: cmp byte ptr [esi + 1], 0x3a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1u))); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 421142: je 0x421256 */
  if (zf) goto L_421256;
L_421148: /* 421148: push 0x440814 */
  { uint32_t v = 0x440814u; esp -= 4; W32(esp, v); }
/* 42114d: call 0x4164c5 */
  esp -= 4; W32(esp, 0x421152u); SPILL(); f_4164c5(); if (g_unwind) return; RELOAD();
/* 421152: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421154: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421155: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 421158: je 0x421256 */
  if (zf) goto L_421256;
L_42115e: /* 42115e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42115f: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 421164: call 0x4010eb */
  esp -= 4; W32(esp, 0x421169u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 421169: mov esi, eax */
  esi = eax;
/* 42116b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42116d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42116e: mov ebx, esi */
  ebx = esi;
/* 421170: je 0x421255 */
  if (zf) goto L_421255;
L_421176: /* 421176: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_421177: /* 421177: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 42117a: jmp 0x421191 */
  goto L_421191;
L_42117c: /* 42117c: cmp al, 0x3b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 42117e: je 0x421197 */
  if (zf) goto L_421197;
L_421180: /* 421180: lea edx, [esi + 0x102] */
  edx = (uint32_t)(esi + 0x102u);
/* 421186: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 421188: jae 0x421197 */
  if (!cf) goto L_421197;
L_42118a: /* 42118a: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 42118c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 42118d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 42118e: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
L_421191: /* 421191: mov al, byte ptr [ecx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 421193: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 421195: jne 0x42117c */
  if (!zf) goto L_42117c;
L_421197: /* 421197: and byte ptr [ebx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebx), r);
  }
/* 42119a: lea edi, [ebx - 1] */
  edi = (uint32_t)(ebx + 0xffffffffu);
/* 42119d: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 42119f: cmp al, 0x5c */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4211a1: mov ebx, esi */
  ebx = esi;
/* 4211a3: jne 0x4211b3 */
  if (!zf) goto L_4211b3;
L_4211a5: /* 4211a5: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 4211a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4211a8: call 0x427075 */
  esp -= 4; W32(esp, 0x4211adu); SPILL(); f_427075(); if (g_unwind) return; RELOAD();
/* 4211ad: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4211ae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4211af: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4211b1: jmp 0x4211b5 */
  goto L_4211b5;
L_4211b3: /* 4211b3: cmp al, 0x2f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
L_4211b5: /* 4211b5: je 0x4211c4 */
  if (zf) goto L_4211c4;
L_4211b7: /* 4211b7: push 0x440810 */
  { uint32_t v = 0x440810u; esp -= 4; W32(esp, v); }
/* 4211bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4211bd: call 0x401d57 */
  esp -= 4; W32(esp, 0x4211c2u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 4211c2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4211c3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4211c4: /* 4211c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4211c5: call 0x402493 */
  esp -= 4; W32(esp, 0x4211cau); SPILL(); hle_strlen(); RELOAD();
/* 4211ca: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4211cd: mov edi, eax */
  edi = eax;
/* 4211cf: call 0x402493 */
  esp -= 4; W32(esp, 0x4211d4u); SPILL(); hle_strlen(); RELOAD();
/* 4211d4: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4211d6: cmp edi, 0x104 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4211dc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4211dd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4211de: jae 0x42124d */
  if (!cf) goto L_42124d;
L_4211e0: /* 4211e0: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4211e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4211e4: call 0x401d57 */
  esp -= 4; W32(esp, 0x4211e9u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 4211e9: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4211ec: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4211ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4211f0: call 0x420f9e */
  esp -= 4; W32(esp, 0x4211f5u); SPILL(); f_420f9e(); if (g_unwind) return; RELOAD();
/* 4211f5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4211f8: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4211fdu); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4211fd: cmp dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421200: je 0x42123d */
  if (zf) goto L_42123d;
L_421202: /* 421202: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 421204: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421205: call 0x4169f3 */
  esp -= 4; W32(esp, 0x42120au); SPILL(); f_4169f3(); if (g_unwind) return; RELOAD();
/* 42120a: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42120c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42120d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42120e: je 0x42121e */
  if (zf) goto L_42121e;
L_421210: /* 421210: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* 421212: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421213: call 0x4169f3 */
  esp -= 4; W32(esp, 0x421218u); SPILL(); f_4169f3(); if (g_unwind) return; RELOAD();
/* 421218: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42121a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42121b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42121c: jne 0x42124d */
  if (!zf) goto L_42124d;
L_42121e: /* 42121e: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* 421221: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 421223: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421224: call 0x4169f3 */
  esp -= 4; W32(esp, 0x421229u); SPILL(); f_4169f3(); if (g_unwind) return; RELOAD();
/* 421229: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42122b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42122c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42122d: je 0x42123d */
  if (zf) goto L_42123d;
L_42122f: /* 42122f: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* 421231: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421232: call 0x4169f3 */
  esp -= 4; W32(esp, 0x421237u); SPILL(); f_4169f3(); if (g_unwind) return; RELOAD();
/* 421237: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421239: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42123a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42123b: jne 0x42124d */
  if (!zf) goto L_42124d;
L_42123d: /* 42123d: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 421240: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 421243: je 0x42124d */
  if (zf) goto L_42124d;
L_421245: /* 421245: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 421248: jmp 0x421177 */
  goto L_421177;
L_42124d: /* 42124d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42124e: call 0x401156 */
  esp -= 4; W32(esp, 0x421253u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 421253: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421254: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_421255: /* 421255: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_421256: /* 421256: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 421259: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42125a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42125b: ret  */
  esp += 4; SPILL(); return;
}

void f_42125c(void) {
  LOAD_REGS();
L_42125c: /* 42125c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42125d: mov ebp, esp */
  ebp = esp;
/* 42125f: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421263: jne 0x421273 */
  if (!zf) goto L_421273;
L_421265: /* 421265: cmp dword ptr [ebp + 0x10], 0xffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42126c: jg 0x421287 */
  if ((!zf && sf == of)) goto L_421287;
L_42126e: /* 42126e: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 421271: jmp 0x42127c */
  goto L_42127c;
L_421273: /* 421273: cmp dword ptr [ebp + 0x10], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421277: jne 0x421287 */
  if (!zf) goto L_421287;
L_421279: /* 421279: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
L_42127c: /* 42127c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 42127f: call dword ptr [0x43900c] */
  esp -= 4; W32(esp, 0x421285u); SPILL(); call_ind(R32(0x43900cu)); if (g_unwind) return; /* KERNEL32!GetProcAddress */ RELOAD();
/* 421285: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 421286: ret  */
  esp += 4; SPILL(); return;
L_421287: /* 421287: xor eax, eax */
  eax = 0;
/* 421289: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 42128a: ret  */
  esp += 4; SPILL(); return;
}

void f_42128b(void) {
  LOAD_REGS();
L_42128b: /* 42128b: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 42128f: call dword ptr [0x4390b8] */
  esp -= 4; W32(esp, 0x421295u); SPILL(); call_ind(R32(0x4390b8u)); if (g_unwind) return; /* KERNEL32!LoadLibraryA */ RELOAD();
/* 421295: ret  */
  esp += 4; SPILL(); return;
}

void f_421296(void) {
  LOAD_REGS();
L_421296: /* 421296: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 42129a: call dword ptr [0x4391dc] */
  esp -= 4; W32(esp, 0x4212a0u); SPILL(); call_ind(R32(0x4391dcu)); if (g_unwind) return; /* KERNEL32!FreeLibrary */ RELOAD();
/* 4212a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4212a2: jne 0x4212aa */
  if (!zf) goto L_4212aa;
L_4212a4: /* 4212a4: jmp dword ptr [0x43904c] */
  SPILL(); call_ind(R32(0x43904cu)); return; /* KERNEL32!GetLastError */
L_4212aa: /* 4212aa: xor eax, eax */
  eax = 0;
/* 4212ac: ret  */
  esp += 4; SPILL(); return;
}

void f_4212ad(void) {
  LOAD_REGS();
L_4212ad: /* 4212ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4212af: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 4212b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4212b4: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4212b8: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4212bc: call 0x42138f */
  esp -= 4; W32(esp, 0x4212c1u); SPILL(); f_42138f(); if (g_unwind) return; RELOAD();
/* 4212c1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4212c4: ret  */
  esp += 4; SPILL(); return;
}

void f_4212c5(void) {
  LOAD_REGS();
L_4212c5: /* 4212c5: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
L_4212c9: /* 4212c9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4212cb: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4212ce: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4212d0: jne 0x4212c9 */
  if (!zf) goto L_4212c9;
L_4212d2: /* 4212d2: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 4212d4: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 4212d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4212d9: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4212dd: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4212e1: call 0x42138f */
  esp -= 4; W32(esp, 0x4212e6u); SPILL(); f_42138f(); if (g_unwind) return; RELOAD();
/* 4212e6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4212e9: ret  */
  esp += 4; SPILL(); return;
}

void f_4212ea(void) {
  LOAD_REGS();
L_4212ea: /* 4212ea: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 4212ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4212ef: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4212f3: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4212f7: call 0x4214d8 */
  esp -= 4; W32(esp, 0x4212fcu); SPILL(); f_4214d8(); if (g_unwind) return; RELOAD();
/* 4212fc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4212ff: ret  */
  esp += 4; SPILL(); return;
}

void f_421300(void) {
  LOAD_REGS();
L_421300: /* 421300: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
L_421304: /* 421304: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 421306: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 421309: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42130b: jne 0x421304 */
  if (!zf) goto L_421304;
L_42130d: /* 42130d: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 42130f: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 421313: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421314: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 421318: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42131c: call 0x4214ef */
  esp -= 4; W32(esp, 0x421321u); SPILL(); f_4214ef(); if (g_unwind) return; RELOAD();
/* 421321: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421324: ret  */
  esp += 4; SPILL(); return;
}

void f_421325(void) {
  LOAD_REGS();
L_421325: /* 421325: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 421327: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42132b: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42132f: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 421333: call 0x42138f */
  esp -= 4; W32(esp, 0x421338u); SPILL(); f_42138f(); if (g_unwind) return; RELOAD();
/* 421338: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42133b: ret  */
  esp += 4; SPILL(); return;
}

void f_42133c(void) {
  LOAD_REGS();
L_42133c: /* 42133c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 42133d: mov ebp, esp */
  ebp = esp;
/* 42133f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 421340: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 421341: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 421344: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 421347: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421348: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 42134b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42134c: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 42134f: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 421352: call 0x422060 */
  esp -= 4; W32(esp, 0x421357u); SPILL(); f_422060(); if (g_unwind) return; RELOAD();
/* 421357: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42135a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42135d: jne 0x421363 */
  if (!zf) goto L_421363;
L_42135f: /* 42135f: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 421361: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 421362: ret  */
  esp += 4; SPILL(); return;
L_421363: /* 421363: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421364: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 421367: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 42136a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42136d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 421370: call 0x421e86 */
  esp -= 4; W32(esp, 0x421375u); SPILL(); f_421e86(); if (g_unwind) return; RELOAD();
/* 421375: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 421378: mov esi, eax */
  esi = eax;
/* 42137a: call 0x401156 */
  esp -= 4; W32(esp, 0x42137fu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42137f: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 421382: call 0x401156 */
  esp -= 4; W32(esp, 0x421387u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 421387: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42138a: mov eax, esi */
  eax = esi;
/* 42138c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42138d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 42138e: ret  */
  esp += 4; SPILL(); return;
}

void f_42138f(void) {
  LOAD_REGS();
L_42138f: /* 42138f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 421390: mov ebp, esp */
  ebp = esp;
/* 421392: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 421393: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 421394: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421395: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 421398: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421399: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42139a: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 42139c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42139d: mov edi, ebx */
  edi = ebx;
/* 42139f: call 0x427075 */
  esp -= 4; W32(esp, 0x4213a4u); SPILL(); f_427075(); if (g_unwind) return; RELOAD();
/* 4213a4: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* 4213a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4213a7: mov esi, eax */
  esi = eax;
/* 4213a9: call 0x427075 */
  esp -= 4; W32(esp, 0x4213aeu); SPILL(); f_427075(); if (g_unwind) return; RELOAD();
/* 4213ae: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4213b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4213b3: jne 0x4213fa */
  if (!zf) goto L_4213fa;
L_4213b5: /* 4213b5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4213b7: jne 0x421404 */
  if (!zf) goto L_421404;
L_4213b9: /* 4213b9: push 0x3a */
  { uint32_t v = 0x3au; esp -= 4; W32(esp, v); }
/* 4213bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4213bc: call 0x4169f3 */
  esp -= 4; W32(esp, 0x4213c1u); SPILL(); f_4169f3(); if (g_unwind) return; RELOAD();
/* 4213c1: mov esi, eax */
  esi = eax;
/* 4213c3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4213c5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4213c6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4213c7: jne 0x421404 */
  if (!zf) goto L_421404;
L_4213c9: /* 4213c9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4213ca: call 0x402493 */
  esp -= 4; W32(esp, 0x4213cfu); SPILL(); hle_strlen(); RELOAD();
/* 4213cf: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4213d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4213d3: call 0x4010eb */
  esp -= 4; W32(esp, 0x4213d8u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4213d8: mov edi, eax */
  edi = eax;
/* 4213da: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4213dc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4213dd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4213de: je 0x42145d */
  if (zf) goto L_42145d;
L_4213e0: /* 4213e0: push 0x44080c */
  { uint32_t v = 0x44080cu; esp -= 4; W32(esp, v); }
/* 4213e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4213e6: call 0x404b3a */
  esp -= 4; W32(esp, 0x4213ebu); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 4213eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4213ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4213ed: call 0x401d57 */
  esp -= 4; W32(esp, 0x4213f2u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 4213f2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4213f5: lea esi, [edi + 2] */
  esi = (uint32_t)(edi + 0x2u);
/* 4213f8: jmp 0x421404 */
  goto L_421404;
L_4213fa: /* 4213fa: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4213fc: je 0x421402 */
  if (zf) goto L_421402;
L_4213fe: /* 4213fe: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 421400: jbe 0x421404 */
  if ((cf | zf)) goto L_421404;
L_421402: /* 421402: mov esi, eax */
  esi = eax;
L_421404: /* 421404: or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 421408: push 0x2e */
  { uint32_t v = 0x2eu; esp -= 4; W32(esp, v); }
/* 42140a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42140b: call 0x427075 */
  esp -= 4; W32(esp, 0x421410u); SPILL(); f_427075(); if (g_unwind) return; RELOAD();
/* 421410: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421412: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421413: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421414: je 0x421443 */
  if (zf) goto L_421443;
L_421416: /* 421416: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 421418: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421419: call 0x418bc2 */
  esp -= 4; W32(esp, 0x42141eu); SPILL(); f_418bc2(); if (g_unwind) return; RELOAD();
/* 42141e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421421: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421422: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421423: je 0x4214c5 */
  if (zf) goto L_4214c5;
L_421429: /* 421429: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 42142c: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42142f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421430: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 421433: call 0x42133c */
  esp -= 4; W32(esp, 0x421438u); SPILL(); f_42133c(); if (g_unwind) return; RELOAD();
/* 421438: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42143b: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 42143e: jmp 0x4214c5 */
  goto L_4214c5;
L_421443: /* 421443: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421444: call 0x402493 */
  esp -= 4; W32(esp, 0x421449u); SPILL(); hle_strlen(); RELOAD();
/* 421449: add eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 42144c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42144d: call 0x4010eb */
  esp -= 4; W32(esp, 0x421452u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 421452: mov ebx, eax */
  ebx = eax;
/* 421454: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421456: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421457: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421458: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 42145b: jne 0x421462 */
  if (!zf) goto L_421462;
L_42145d: /* 42145d: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 421460: jmp 0x4214d3 */
  goto L_4214d3;
L_421462: /* 421462: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421463: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421464: call 0x404b3a */
  esp -= 4; W32(esp, 0x421469u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 421469: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42146a: call 0x402493 */
  esp -= 4; W32(esp, 0x42146fu); SPILL(); hle_strlen(); RELOAD();
/* 42146f: mov esi, eax */
  esi = eax;
/* 421471: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421474: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 421476: mov ebx, 0x44dd30 */
  ebx = 0x44dd30u;
L_42147b: /* 42147b: push dword ptr [ebx] */
  { uint32_t v = R32((uint32_t)(ebx)); esp -= 4; W32(esp, v); }
/* 42147d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42147e: call 0x404b3a */
  esp -= 4; W32(esp, 0x421483u); SPILL(); f_404b3a(); if (g_unwind) return; RELOAD();
/* 421483: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 421485: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 421488: call 0x418bc2 */
  esp -= 4; W32(esp, 0x42148du); SPILL(); f_418bc2(); if (g_unwind) return; RELOAD();
/* 42148d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421490: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421493: jne 0x4214a2 */
  if (!zf) goto L_4214a2;
L_421495: /* 421495: sub ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 421498: cmp ebx, 0x44dd24 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x44dd24u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42149e: jge 0x42147b */
  if ((sf == of)) goto L_42147b;
L_4214a0: /* 4214a0: jmp 0x4214b9 */
  goto L_4214b9;
L_4214a2: /* 4214a2: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4214a5: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4214a8: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 4214ab: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4214ae: call 0x42133c */
  esp -= 4; W32(esp, 0x4214b3u); SPILL(); f_42133c(); if (g_unwind) return; RELOAD();
/* 4214b3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4214b6: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
L_4214b9: /* 4214b9: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 4214bc: call 0x401156 */
  esp -= 4; W32(esp, 0x4214c1u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4214c1: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 4214c4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4214c5: /* 4214c5: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4214c7: je 0x4214d0 */
  if (zf) goto L_4214d0;
L_4214c9: /* 4214c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4214ca: call 0x401156 */
  esp -= 4; W32(esp, 0x4214cfu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4214cf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4214d0: /* 4214d0: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
L_4214d3: /* 4214d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4214d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4214d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4214d6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4214d7: ret  */
  esp += 4; SPILL(); return;
}

void f_4214d8(void) {
  LOAD_REGS();
L_4214d8: /* 4214d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4214da: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4214de: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4214e2: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4214e6: call 0x4214ef */
  esp -= 4; W32(esp, 0x4214ebu); SPILL(); f_4214ef(); if (g_unwind) return; RELOAD();
/* 4214eb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4214ee: ret  */
  esp += 4; SPILL(); return;
}

void f_4214ef(void) {
  LOAD_REGS();
L_4214ef: /* 4214ef: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4214f0: mov ebp, esp */
  ebp = esp;
/* 4214f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4214f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4214f4: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4214f7: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4214fa: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4214fd: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 421500: call 0x42138f */
  esp -= 4; W32(esp, 0x421505u); SPILL(); f_42138f(); if (g_unwind) return; RELOAD();
/* 421505: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421508: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42150b: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 42150e: jne 0x421653 */
  if (!zf) goto L_421653;
L_421514: /* 421514: call 0x4102a5 */
  esp -= 4; W32(esp, 0x421519u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 421519: cmp dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42151c: jne 0x421653 */
  if (!zf) goto L_421653;
L_421522: /* 421522: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* 421524: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 421527: call 0x4169f3 */
  esp -= 4; W32(esp, 0x42152cu); SPILL(); f_4169f3(); if (g_unwind) return; RELOAD();
/* 42152c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42152e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42152f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421530: jne 0x421653 */
  if (!zf) goto L_421653;
L_421536: /* 421536: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421537: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421538: push 0x440814 */
  { uint32_t v = 0x440814u; esp -= 4; W32(esp, v); }
/* 42153d: call 0x4164c5 */
  esp -= 4; W32(esp, 0x421542u); SPILL(); f_4164c5(); if (g_unwind) return; RELOAD();
/* 421542: mov edi, eax */
  edi = eax;
/* 421544: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421546: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421547: je 0x421651 */
  if (zf) goto L_421651;
L_42154d: /* 42154d: push 0x104 */
  { uint32_t v = 0x104u; esp -= 4; W32(esp, v); }
/* 421552: call 0x4010eb */
  esp -= 4; W32(esp, 0x421557u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 421557: mov esi, eax */
  esi = eax;
/* 421559: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42155b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42155c: je 0x421651 */
  if (zf) goto L_421651;
L_421562: /* 421562: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421563: mov ebx, 0x103 */
  ebx = 0x103u;
/* 421568: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421569: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42156a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42156b: jmp 0x421636 */
  goto L_421636;
L_421570: /* 421570: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 421573: je 0x421649 */
  if (zf) goto L_421649;
L_421579: /* 421579: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42157a: call 0x402493 */
  esp -= 4; W32(esp, 0x42157fu); SPILL(); hle_strlen(); RELOAD();
/* 42157f: lea edi, [eax + esi - 1] */
  edi = (uint32_t)(eax + esi + 0xffffffffu);
/* 421583: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 421585: cmp al, 0x5c */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 421587: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421588: jne 0x421598 */
  if (!zf) goto L_421598;
L_42158a: /* 42158a: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 42158c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42158d: call 0x427075 */
  esp -= 4; W32(esp, 0x421592u); SPILL(); f_427075(); if (g_unwind) return; RELOAD();
/* 421592: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421593: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421594: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421596: jmp 0x42159a */
  goto L_42159a;
L_421598: /* 421598: cmp al, 0x2f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
L_42159a: /* 42159a: je 0x4215a9 */
  if (zf) goto L_4215a9;
L_42159c: /* 42159c: push 0x440810 */
  { uint32_t v = 0x440810u; esp -= 4; W32(esp, v); }
/* 4215a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4215a2: call 0x401d57 */
  esp -= 4; W32(esp, 0x4215a7u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 4215a7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4215a8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4215a9: /* 4215a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4215aa: call 0x402493 */
  esp -= 4; W32(esp, 0x4215afu); SPILL(); hle_strlen(); RELOAD();
/* 4215af: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4215b2: mov edi, eax */
  edi = eax;
/* 4215b4: call 0x402493 */
  esp -= 4; W32(esp, 0x4215b9u); SPILL(); hle_strlen(); RELOAD();
/* 4215b9: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4215bb: cmp edi, 0x104 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4215c1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4215c2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4215c3: jae 0x421649 */
  if (!cf) goto L_421649;
L_4215c9: /* 4215c9: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4215cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4215cd: call 0x401d57 */
  esp -= 4; W32(esp, 0x4215d2u); SPILL(); f_401d57(); if (g_unwind) return; RELOAD();
/* 4215d2: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4215d5: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4215d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4215d9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4215dc: call 0x42138f */
  esp -= 4; W32(esp, 0x4215e1u); SPILL(); f_42138f(); if (g_unwind) return; RELOAD();
/* 4215e1: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4215e4: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4215e7: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 4215ea: jne 0x421649 */
  if (!zf) goto L_421649;
L_4215ec: /* 4215ec: call 0x4102a5 */
  esp -= 4; W32(esp, 0x4215f1u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 4215f1: cmp dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4215f4: je 0x421631 */
  if (zf) goto L_421631;
L_4215f6: /* 4215f6: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 4215f8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4215f9: call 0x4169f3 */
  esp -= 4; W32(esp, 0x4215feu); SPILL(); f_4169f3(); if (g_unwind) return; RELOAD();
/* 4215fe: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421600: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421601: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421602: je 0x421612 */
  if (zf) goto L_421612;
L_421604: /* 421604: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* 421606: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421607: call 0x4169f3 */
  esp -= 4; W32(esp, 0x42160cu); SPILL(); f_4169f3(); if (g_unwind) return; RELOAD();
/* 42160c: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42160e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42160f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421610: jne 0x421649 */
  if (!zf) goto L_421649;
L_421612: /* 421612: lea edi, [esi + 1] */
  edi = (uint32_t)(esi + 0x1u);
/* 421615: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 421617: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421618: call 0x4169f3 */
  esp -= 4; W32(esp, 0x42161du); SPILL(); f_4169f3(); if (g_unwind) return; RELOAD();
/* 42161d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42161f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421620: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421621: je 0x421631 */
  if (zf) goto L_421631;
L_421623: /* 421623: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* 421625: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421626: call 0x4169f3 */
  esp -= 4; W32(esp, 0x42162bu); SPILL(); f_4169f3(); if (g_unwind) return; RELOAD();
/* 42162b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 42162d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42162e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42162f: jne 0x421649 */
  if (!zf) goto L_421649;
L_421631: /* 421631: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421632: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421633: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
L_421636: /* 421636: call 0x4283df */
  esp -= 4; W32(esp, 0x42163bu); SPILL(); f_4283df(); if (g_unwind) return; RELOAD();
/* 42163b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42163e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421640: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 421643: jne 0x421570 */
  if (!zf) goto L_421570;
L_421649: /* 421649: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42164a: call 0x401156 */
  esp -= 4; W32(esp, 0x42164fu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42164f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421650: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_421651: /* 421651: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 421652: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_421653: /* 421653: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 421656: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 421657: ret  */
  esp += 4; SPILL(); return;
}

void f_421658(void) {
  LOAD_REGS();
L_421658: /* 421658: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 42165a: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 42165e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 42165f: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 421663: call 0x421724 */
  esp -= 4; W32(esp, 0x421668u); SPILL(); f_421724(); if (g_unwind) return; RELOAD();
/* 421668: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42166b: ret  */
  esp += 4; SPILL(); return;
}

void f_42166c(void) {
  LOAD_REGS();
L_42166c: /* 42166c: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
L_421670: /* 421670: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 421672: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 421675: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421677: jne 0x421670 */
  if (!zf) goto L_421670;
L_421679: /* 421679: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 42167b: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 42167f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421680: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 421684: call 0x421724 */
  esp -= 4; W32(esp, 0x421689u); SPILL(); f_421724(); if (g_unwind) return; RELOAD();
/* 421689: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42168c: ret  */
  esp += 4; SPILL(); return;
}

void f_42168d(void) {
  LOAD_REGS();
L_42168d: /* 42168d: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
/* 421691: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421692: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 421696: call 0x421861 */
  esp -= 4; W32(esp, 0x42169bu); SPILL(); f_421861(); if (g_unwind) return; RELOAD();
/* 42169b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42169c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42169d: ret  */
  esp += 4; SPILL(); return;
}

void f_42169e(void) {
  LOAD_REGS();
L_42169e: /* 42169e: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
L_4216a2: /* 4216a2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4216a4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4216a7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4216a9: jne 0x4216a2 */
  if (!zf) goto L_4216a2;
L_4216ab: /* 4216ab: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 4216ad: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 4216b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4216b2: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4216b6: call 0x421874 */
  esp -= 4; W32(esp, 0x4216bbu); SPILL(); f_421874(); if (g_unwind) return; RELOAD();
/* 4216bb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4216be: ret  */
  esp += 4; SPILL(); return;
}

void f_4216bf(void) {
  LOAD_REGS();
L_4216bf: /* 4216bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4216c1: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4216c5: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4216c9: call 0x421724 */
  esp -= 4; W32(esp, 0x4216ceu); SPILL(); f_421724(); if (g_unwind) return; RELOAD();
/* 4216ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4216d1: ret  */
  esp += 4; SPILL(); return;
}

void f_4216d2(void) {
  LOAD_REGS();
L_4216d2: /* 4216d2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4216d3: mov ebp, esp */
  ebp = esp;
/* 4216d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4216d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4216d7: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4216da: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 4216dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4216de: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 4216e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4216e2: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4216e5: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4216e8: call 0x422441 */
  esp -= 4; W32(esp, 0x4216edu); SPILL(); f_422441(); if (g_unwind) return; RELOAD();
/* 4216ed: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4216f0: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4216f3: jne 0x4216f9 */
  if (!zf) goto L_4216f9;
L_4216f5: /* 4216f5: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4216f7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4216f8: ret  */
  esp += 4; SPILL(); return;
L_4216f9: /* 4216f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4216fa: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 4216fd: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 421700: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 421703: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 421705: call 0x42225b */
  esp -= 4; W32(esp, 0x42170au); SPILL(); f_42225b(); if (g_unwind) return; RELOAD();
/* 42170a: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 42170d: mov esi, eax */
  esi = eax;
/* 42170f: call 0x401156 */
  esp -= 4; W32(esp, 0x421714u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 421714: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 421717: call 0x401156 */
  esp -= 4; W32(esp, 0x42171cu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42171c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42171f: mov eax, esi */
  eax = esi;
/* 421721: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 421722: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 421723: ret  */
  esp += 4; SPILL(); return;
}

void f_421724(void) {
  LOAD_REGS();
L_421724: /* 421724: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 421725: mov ebp, esp */
  ebp = esp;
/* 421727: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 421728: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 421729: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42172a: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 42172d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42172e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42172f: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 421731: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421732: mov edi, ebx */
  edi = ebx;
/* 421734: call 0x401a22 */
  esp -= 4; W32(esp, 0x421739u); SPILL(); f_401a22(); if (g_unwind) return; RELOAD();
/* 421739: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* 42173b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42173c: mov esi, eax */
  esi = eax;
/* 42173e: call 0x401a22 */
  esp -= 4; W32(esp, 0x421743u); SPILL(); f_401a22(); if (g_unwind) return; RELOAD();
/* 421743: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421746: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421748: jne 0x421790 */
  if (!zf) goto L_421790;
L_42174a: /* 42174a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42174c: jne 0x42179a */
  if (!zf) goto L_42179a;
L_42174e: /* 42174e: push 0x3a */
  { uint32_t v = 0x3au; esp -= 4; W32(esp, v); }
/* 421750: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421751: call 0x401195 */
  esp -= 4; W32(esp, 0x421756u); SPILL(); f_401195(); if (g_unwind) return; RELOAD();
/* 421756: mov esi, eax */
  esi = eax;
/* 421758: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 42175a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42175b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 42175c: jne 0x42179a */
  if (!zf) goto L_42179a;
L_42175e: /* 42175e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 42175f: call 0x4013b8 */
  esp -= 4; W32(esp, 0x421764u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 421764: lea eax, [eax + eax + 6] */
  eax = (uint32_t)(eax + eax + 0x6u);
/* 421768: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421769: call 0x4010eb */
  esp -= 4; W32(esp, 0x42176eu); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 42176e: mov edi, eax */
  edi = eax;
/* 421770: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421772: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421773: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421774: je 0x4217eb */
  if (zf) goto L_4217eb;
L_421776: /* 421776: push 0x44081c */
  { uint32_t v = 0x44081cu; esp -= 4; W32(esp, v); }
/* 42177b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42177c: call 0x4013ce */
  esp -= 4; W32(esp, 0x421781u); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 421781: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421782: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421783: call 0x4013ea */
  esp -= 4; W32(esp, 0x421788u); SPILL(); f_4013ea(); if (g_unwind) return; RELOAD();
/* 421788: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42178b: lea esi, [edi + 4] */
  esi = (uint32_t)(edi + 0x4u);
/* 42178e: jmp 0x42179a */
  goto L_42179a;
L_421790: /* 421790: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421792: je 0x421798 */
  if (zf) goto L_421798;
L_421794: /* 421794: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 421796: jbe 0x42179a */
  if ((cf | zf)) goto L_42179a;
L_421798: /* 421798: mov esi, eax */
  esi = eax;
L_42179a: /* 42179a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 42179e: push 0x2e */
  { uint32_t v = 0x2eu; esp -= 4; W32(esp, v); }
/* 4217a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4217a1: call 0x401a22 */
  esp -= 4; W32(esp, 0x4217a6u); SPILL(); f_401a22(); if (g_unwind) return; RELOAD();
/* 4217a6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4217a8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4217a9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4217aa: je 0x4217d3 */
  if (zf) goto L_4217d3;
L_4217ac: /* 4217ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4217ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4217af: call 0x419ae9 */
  esp -= 4; W32(esp, 0x4217b4u); SPILL(); f_419ae9(); if (g_unwind) return; RELOAD();
/* 4217b4: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4217b7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4217b8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4217b9: je 0x42184e */
  if (zf) goto L_42184e;
L_4217bf: /* 4217bf: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4217c2: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4217c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4217c6: call 0x4216d2 */
  esp -= 4; W32(esp, 0x4217cbu); SPILL(); f_4216d2(); if (g_unwind) return; RELOAD();
/* 4217cb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4217ce: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4217d1: jmp 0x42184e */
  goto L_42184e;
L_4217d3: /* 4217d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4217d4: call 0x4013b8 */
  esp -= 4; W32(esp, 0x4217d9u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 4217d9: lea eax, [eax + eax + 0xa] */
  eax = (uint32_t)(eax + eax + 0xau);
/* 4217dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4217de: call 0x4010eb */
  esp -= 4; W32(esp, 0x4217e3u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4217e3: mov esi, eax */
  esi = eax;
/* 4217e5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4217e7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4217e8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4217e9: jne 0x4217f0 */
  if (!zf) goto L_4217f0;
L_4217eb: /* 4217eb: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4217ee: jmp 0x42185c */
  goto L_42185c;
L_4217f0: /* 4217f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4217f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4217f2: call 0x4013ce */
  esp -= 4; W32(esp, 0x4217f7u); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 4217f7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4217f8: call 0x4013b8 */
  esp -= 4; W32(esp, 0x4217fdu); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 4217fd: lea eax, [esi + eax*2] */
  eax = (uint32_t)(esi + eax*2);
/* 421800: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421803: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 421806: mov ebx, 0x44dd40 */
  ebx = 0x44dd40u;
L_42180b: /* 42180b: push dword ptr [ebx] */
  { uint32_t v = R32((uint32_t)(ebx)); esp -= 4; W32(esp, v); }
/* 42180d: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 421810: call 0x4013ce */
  esp -= 4; W32(esp, 0x421815u); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 421815: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 421817: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421818: call 0x419ae9 */
  esp -= 4; W32(esp, 0x42181du); SPILL(); f_419ae9(); if (g_unwind) return; RELOAD();
/* 42181d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421820: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421823: jne 0x421832 */
  if (!zf) goto L_421832;
L_421825: /* 421825: sub ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 421828: cmp ebx, 0x44dd34 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x44dd34u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 42182e: jge 0x42180b */
  if ((sf == of)) goto L_42180b;
L_421830: /* 421830: jmp 0x421844 */
  goto L_421844;
L_421832: /* 421832: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 421835: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 421838: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421839: call 0x4216d2 */
  esp -= 4; W32(esp, 0x42183eu); SPILL(); f_4216d2(); if (g_unwind) return; RELOAD();
/* 42183e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421841: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_421844: /* 421844: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421845: call 0x401156 */
  esp -= 4; W32(esp, 0x42184au); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 42184a: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 42184d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_42184e: /* 42184e: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421850: je 0x421859 */
  if (zf) goto L_421859;
L_421852: /* 421852: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421853: call 0x401156 */
  esp -= 4; W32(esp, 0x421858u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 421858: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_421859: /* 421859: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
L_42185c: /* 42185c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 42185d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 42185e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 42185f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 421860: ret  */
  esp += 4; SPILL(); return;
}

void f_421861(void) {
  LOAD_REGS();
L_421861: /* 421861: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 421863: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 421867: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 42186b: call 0x421874 */
  esp -= 4; W32(esp, 0x421870u); SPILL(); f_421874(); if (g_unwind) return; RELOAD();
/* 421870: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421873: ret  */
  esp += 4; SPILL(); return;
}

void f_421874(void) {
  LOAD_REGS();
L_421874: /* 421874: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 421875: mov ebp, esp */
  ebp = esp;
/* 421877: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 421878: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421879: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 42187c: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 42187f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 421882: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421883: call 0x421724 */
  esp -= 4; W32(esp, 0x421888u); SPILL(); f_421724(); if (g_unwind) return; RELOAD();
/* 421888: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42188b: call 0x4102a5 */
  esp -= 4; W32(esp, 0x421890u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 421890: cmp dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421893: jne 0x4219bf */
  if (!zf) goto L_4219bf;
L_421899: /* 421899: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 42189b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 42189c: call 0x401195 */
  esp -= 4; W32(esp, 0x4218a1u); SPILL(); f_401195(); if (g_unwind) return; RELOAD();
/* 4218a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4218a3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4218a4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4218a5: jne 0x4219bf */
  if (!zf) goto L_4219bf;
L_4218ab: /* 4218ab: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* 4218ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4218ae: call 0x401195 */
  esp -= 4; W32(esp, 0x4218b3u); SPILL(); f_401195(); if (g_unwind) return; RELOAD();
/* 4218b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4218b5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4218b6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4218b7: jne 0x4219bf */
  if (!zf) goto L_4219bf;
L_4218bd: /* 4218bd: cmp word ptr [esi], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4218c0: je 0x4218cd */
  if (zf) goto L_4218cd;
L_4218c2: /* 4218c2: cmp word ptr [esi + 2], 0x3a */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi + 0x2u))); uint16_t b = (uint16_t)(0x3au);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4218c7: je 0x4219bf */
  if (zf) goto L_4219bf;
L_4218cd: /* 4218cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4218ce: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4218cf: push 0x440828 */
  { uint32_t v = 0x440828u; esp -= 4; W32(esp, v); }
/* 4218d4: call 0x427ba8 */
  esp -= 4; W32(esp, 0x4218d9u); SPILL(); f_427ba8(); if (g_unwind) return; RELOAD();
/* 4218d9: mov ebx, eax */
  ebx = eax;
/* 4218db: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4218dd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4218de: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4218e1: je 0x4219bd */
  if (zf) goto L_4219bd;
L_4218e7: /* 4218e7: push 0x208 */
  { uint32_t v = 0x208u; esp -= 4; W32(esp, v); }
/* 4218ec: call 0x4010eb */
  esp -= 4; W32(esp, 0x4218f1u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 4218f1: mov edi, eax */
  edi = eax;
/* 4218f3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4218f5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4218f6: mov esi, edi */
  esi = edi;
/* 4218f8: je 0x4219bd */
  if (zf) goto L_4219bd;
L_4218fe: /* 4218fe: jmp 0x42191c */
  goto L_42191c;
L_421900: /* 421900: cmp ax, 0x3b */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x3bu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 421904: je 0x421924 */
  if (zf) goto L_421924;
L_421906: /* 421906: lea ecx, [edi + 0x408] */
  ecx = (uint32_t)(edi + 0x408u);
/* 42190c: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 42190e: jae 0x421924 */
  if (!cf) goto L_421924;
L_421910: /* 421910: mov word ptr [esi], ax */
  W16((uint32_t)(esi), (eax & 0xffffu));
/* 421913: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 421914: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 421915: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 421916: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 421917: xor eax, eax */
  eax = 0;
L_421919: /* 421919: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
L_42191c: /* 42191c: mov ax, word ptr [ebx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 42191f: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 421922: jne 0x421900 */
  if (!zf) goto L_421900;
L_421924: /* 421924: and word ptr [esi], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(esi))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(esi), r);
  }
/* 421928: lea eax, [esi - 2] */
  eax = (uint32_t)(esi + 0xfffffffeu);
/* 42192b: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 42192e: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 421932: mov esi, edi */
  esi = edi;
/* 421934: je 0x421949 */
  if (zf) goto L_421949;
L_421936: /* 421936: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42193a: je 0x421949 */
  if (zf) goto L_421949;
L_42193c: /* 42193c: push 0x440824 */
  { uint32_t v = 0x440824u; esp -= 4; W32(esp, v); }
/* 421941: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421942: call 0x4013ea */
  esp -= 4; W32(esp, 0x421947u); SPILL(); f_4013ea(); if (g_unwind) return; RELOAD();
/* 421947: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421948: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_421949: /* 421949: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 42194a: call 0x4013b8 */
  esp -= 4; W32(esp, 0x42194fu); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 42194f: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 421952: mov ebx, eax */
  ebx = eax;
/* 421954: call 0x4013b8 */
  esp -= 4; W32(esp, 0x421959u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 421959: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 42195b: cmp ebx, 0x104 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x104u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 421961: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421962: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421963: jae 0x4219b6 */
  if (!cf) goto L_4219b6;
L_421965: /* 421965: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 421968: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421969: call 0x4013ea */
  esp -= 4; W32(esp, 0x42196eu); SPILL(); f_4013ea(); if (g_unwind) return; RELOAD();
/* 42196e: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 421971: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 421974: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421975: call 0x421724 */
  esp -= 4; W32(esp, 0x42197au); SPILL(); f_421724(); if (g_unwind) return; RELOAD();
/* 42197a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 42197d: call 0x4102a5 */
  esp -= 4; W32(esp, 0x421982u); SPILL(); f_4102a5(); if (g_unwind) return; RELOAD();
/* 421982: cmp dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421985: je 0x4219a6 */
  if (zf) goto L_4219a6;
L_421987: /* 421987: mov ax, word ptr [edi] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi))) & 0xffffu);
/* 42198a: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42198e: je 0x421996 */
  if (zf) goto L_421996;
L_421990: /* 421990: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 421994: jne 0x4219b6 */
  if (!zf) goto L_4219b6;
L_421996: /* 421996: mov ax, word ptr [edi + 2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edi + 0x2u))) & 0xffffu);
/* 42199a: cmp ax, 0x5c */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x5cu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 42199e: je 0x4219a6 */
  if (zf) goto L_4219a6;
L_4219a0: /* 4219a0: cmp ax, 0x2f */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2fu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4219a4: jne 0x4219b6 */
  if (!zf) goto L_4219b6;
L_4219a6: /* 4219a6: mov ebx, dword ptr [ebp - 4] */
  ebx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4219a9: cmp word ptr [ebx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4219ad: je 0x4219b6 */
  if (zf) goto L_4219b6;
L_4219af: /* 4219af: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4219b0: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4219b1: jmp 0x421919 */
  goto L_421919;
L_4219b6: /* 4219b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4219b7: call 0x401156 */
  esp -= 4; W32(esp, 0x4219bcu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 4219bc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4219bd: /* 4219bd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4219be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4219bf: /* 4219bf: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4219c2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4219c3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4219c4: ret  */
  esp += 4; SPILL(); return;
}

void f_4219c5(void) {
  LOAD_REGS();
L_4219c5: /* 4219c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4219c7: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 4219cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4219cc: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4219d0: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4219d4: call 0x421aa7 */
  esp -= 4; W32(esp, 0x4219d9u); SPILL(); f_421aa7(); if (g_unwind) return; RELOAD();
/* 4219d9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4219dc: ret  */
  esp += 4; SPILL(); return;
}

void f_4219dd(void) {
  LOAD_REGS();
L_4219dd: /* 4219dd: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
L_4219e1: /* 4219e1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4219e3: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4219e6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4219e8: jne 0x4219e1 */
  if (!zf) goto L_4219e1;
L_4219ea: /* 4219ea: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 4219ec: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 4219f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4219f1: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4219f5: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4219f9: call 0x421aa7 */
  esp -= 4; W32(esp, 0x4219feu); SPILL(); f_421aa7(); if (g_unwind) return; RELOAD();
/* 4219fe: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421a01: ret  */
  esp += 4; SPILL(); return;
}

void f_421a02(void) {
  LOAD_REGS();
L_421a02: /* 421a02: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 421a06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421a07: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 421a0b: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 421a0f: call 0x421bea */
  esp -= 4; W32(esp, 0x421a14u); SPILL(); f_421bea(); if (g_unwind) return; RELOAD();
/* 421a14: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421a17: ret  */
  esp += 4; SPILL(); return;
}

void f_421a18(void) {
  LOAD_REGS();
L_421a18: /* 421a18: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
L_421a1c: /* 421a1c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 421a1e: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 421a21: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421a23: jne 0x421a1c */
  if (!zf) goto L_421a1c;
L_421a25: /* 421a25: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 421a27: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 421a2b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421a2c: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 421a30: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 421a34: call 0x421c01 */
  esp -= 4; W32(esp, 0x421a39u); SPILL(); f_421c01(); if (g_unwind) return; RELOAD();
/* 421a39: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421a3c: ret  */
  esp += 4; SPILL(); return;
}

void f_421a3d(void) {
  LOAD_REGS();
L_421a3d: /* 421a3d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 421a3f: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 421a43: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 421a47: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 421a4b: call 0x421aa7 */
  esp -= 4; W32(esp, 0x421a50u); SPILL(); f_421aa7(); if (g_unwind) return; RELOAD();
/* 421a50: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421a53: ret  */
  esp += 4; SPILL(); return;
}

void f_421a54(void) {
  LOAD_REGS();
L_421a54: /* 421a54: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 421a55: mov ebp, esp */
  ebp = esp;
/* 421a57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 421a58: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 421a59: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 421a5c: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 421a5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421a60: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 421a63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421a64: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 421a67: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 421a6a: call 0x422441 */
  esp -= 4; W32(esp, 0x421a6fu); SPILL(); f_422441(); if (g_unwind) return; RELOAD();
/* 421a6f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421a72: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421a75: jne 0x421a7b */
  if (!zf) goto L_421a7b;
L_421a77: /* 421a77: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 421a79: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 421a7a: ret  */
  esp += 4; SPILL(); return;
L_421a7b: /* 421a7b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421a7c: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 421a7f: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 421a82: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 421a85: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 421a88: call 0x42225b */
  esp -= 4; W32(esp, 0x421a8du); SPILL(); f_42225b(); if (g_unwind) return; RELOAD();
/* 421a8d: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 421a90: mov esi, eax */
  esi = eax;
/* 421a92: call 0x401156 */
  esp -= 4; W32(esp, 0x421a97u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 421a97: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 421a9a: call 0x401156 */
  esp -= 4; W32(esp, 0x421a9fu); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 421a9f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421aa2: mov eax, esi */
  eax = esi;
/* 421aa4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 421aa5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 421aa6: ret  */
  esp += 4; SPILL(); return;
}

void f_421aa7(void) {
  LOAD_REGS();
L_421aa7: /* 421aa7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 421aa8: mov ebp, esp */
  ebp = esp;
/* 421aaa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 421aab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 421aac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421aad: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 421ab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421ab1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421ab2: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 421ab4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421ab5: mov edi, ebx */
  edi = ebx;
/* 421ab7: call 0x401a22 */
  esp -= 4; W32(esp, 0x421abcu); SPILL(); f_401a22(); if (g_unwind) return; RELOAD();
/* 421abc: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* 421abe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421abf: mov esi, eax */
  esi = eax;
/* 421ac1: call 0x401a22 */
  esp -= 4; W32(esp, 0x421ac6u); SPILL(); f_401a22(); if (g_unwind) return; RELOAD();
/* 421ac6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421ac9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421acb: jne 0x421b13 */
  if (!zf) goto L_421b13;
L_421acd: /* 421acd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421acf: jne 0x421b1d */
  if (!zf) goto L_421b1d;
L_421ad1: /* 421ad1: push 0x3a */
  { uint32_t v = 0x3au; esp -= 4; W32(esp, v); }
/* 421ad3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421ad4: call 0x401195 */
  esp -= 4; W32(esp, 0x421ad9u); SPILL(); f_401195(); if (g_unwind) return; RELOAD();
/* 421ad9: mov esi, eax */
  esi = eax;
/* 421adb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421add: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421ade: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421adf: jne 0x421b1d */
  if (!zf) goto L_421b1d;
L_421ae1: /* 421ae1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421ae2: call 0x4013b8 */
  esp -= 4; W32(esp, 0x421ae7u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 421ae7: lea eax, [eax + eax + 6] */
  eax = (uint32_t)(eax + eax + 0x6u);
/* 421aeb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421aec: call 0x4010eb */
  esp -= 4; W32(esp, 0x421af1u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 421af1: mov edi, eax */
  edi = eax;
/* 421af3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421af5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421af6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421af7: je 0x421b71 */
  if (zf) goto L_421b71;
L_421af9: /* 421af9: push 0x44081c */
  { uint32_t v = 0x44081cu; esp -= 4; W32(esp, v); }
/* 421afe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421aff: call 0x4013ce */
  esp -= 4; W32(esp, 0x421b04u); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 421b04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 421b05: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421b06: call 0x4013ea */
  esp -= 4; W32(esp, 0x421b0bu); SPILL(); f_4013ea(); if (g_unwind) return; RELOAD();
/* 421b0b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421b0e: lea esi, [edi + 4] */
  esi = (uint32_t)(edi + 0x4u);
/* 421b11: jmp 0x421b1d */
  goto L_421b1d;
L_421b13: /* 421b13: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421b15: je 0x421b1b */
  if (zf) goto L_421b1b;
L_421b17: /* 421b17: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 421b19: jbe 0x421b1d */
  if ((cf | zf)) goto L_421b1d;
L_421b1b: /* 421b1b: mov esi, eax */
  esi = eax;
L_421b1d: /* 421b1d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 421b21: push 0x2e */
  { uint32_t v = 0x2eu; esp -= 4; W32(esp, v); }
/* 421b23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421b24: call 0x401a22 */
  esp -= 4; W32(esp, 0x421b29u); SPILL(); f_401a22(); if (g_unwind) return; RELOAD();
/* 421b29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421b2b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421b2c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421b2d: je 0x421b59 */
  if (zf) goto L_421b59;
L_421b2f: /* 421b2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 421b31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421b32: call 0x419ae9 */
  esp -= 4; W32(esp, 0x421b37u); SPILL(); f_419ae9(); if (g_unwind) return; RELOAD();
/* 421b37: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421b3a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421b3b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421b3c: je 0x421bd7 */
  if (zf) goto L_421bd7;
L_421b42: /* 421b42: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 421b45: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 421b48: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421b49: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 421b4c: call 0x421a54 */
  esp -= 4; W32(esp, 0x421b51u); SPILL(); f_421a54(); if (g_unwind) return; RELOAD();
/* 421b51: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421b54: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 421b57: jmp 0x421bd7 */
  goto L_421bd7;
L_421b59: /* 421b59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421b5a: call 0x4013b8 */
  esp -= 4; W32(esp, 0x421b5fu); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 421b5f: lea eax, [eax + eax + 0xa] */
  eax = (uint32_t)(eax + eax + 0xau);
/* 421b63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 421b64: call 0x4010eb */
  esp -= 4; W32(esp, 0x421b69u); SPILL(); f_4010eb(); if (g_unwind) return; RELOAD();
/* 421b69: mov esi, eax */
  esi = eax;
/* 421b6b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 421b6d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421b6e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 421b6f: jne 0x421b76 */
  if (!zf) goto L_421b76;
L_421b71: /* 421b71: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 421b74: jmp 0x421be5 */
  goto L_421be5;
L_421b76: /* 421b76: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421b77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421b78: call 0x4013ce */
  esp -= 4; W32(esp, 0x421b7du); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 421b7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421b7e: call 0x4013b8 */
  esp -= 4; W32(esp, 0x421b83u); SPILL(); f_4013b8(); if (g_unwind) return; RELOAD();
/* 421b83: lea eax, [esi + eax*2] */
  eax = (uint32_t)(esi + eax*2);
/* 421b86: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421b89: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 421b8c: mov ebx, 0x44dd50 */
  ebx = 0x44dd50u;
L_421b91: /* 421b91: push dword ptr [ebx] */
  { uint32_t v = R32((uint32_t)(ebx)); esp -= 4; W32(esp, v); }
/* 421b93: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 421b96: call 0x4013ce */
  esp -= 4; W32(esp, 0x421b9bu); SPILL(); f_4013ce(); if (g_unwind) return; RELOAD();
/* 421b9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 421b9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421b9e: call 0x419ae9 */
  esp -= 4; W32(esp, 0x421ba3u); SPILL(); f_419ae9(); if (g_unwind) return; RELOAD();
/* 421ba3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421ba6: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421ba9: jne 0x421bb8 */
  if (!zf) goto L_421bb8;
L_421bab: /* 421bab: sub ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 421bae: cmp ebx, 0x44dd44 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x44dd44u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 421bb4: jge 0x421b91 */
  if ((sf == of)) goto L_421b91;
L_421bb6: /* 421bb6: jmp 0x421bcd */
  goto L_421bcd;
L_421bb8: /* 421bb8: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 421bbb: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 421bbe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421bbf: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 421bc2: call 0x421a54 */
  esp -= 4; W32(esp, 0x421bc7u); SPILL(); f_421a54(); if (g_unwind) return; RELOAD();
/* 421bc7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 421bca: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_421bcd: /* 421bcd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 421bce: call 0x401156 */
  esp -= 4; W32(esp, 0x421bd3u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 421bd3: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 421bd6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_421bd7: /* 421bd7: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 421bd9: je 0x421be2 */
  if (zf) goto L_421be2;
L_421bdb: /* 421bdb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 421bdc: call 0x401156 */
  esp -= 4; W32(esp, 0x421be1u); SPILL(); f_401156(); if (g_unwind) return; RELOAD();
/* 421be1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_421be2: /* 421be2: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
L_421be5: /* 421be5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 421be6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 421be7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 421be8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 421be9: ret  */
  esp += 4; SPILL(); return;
}
