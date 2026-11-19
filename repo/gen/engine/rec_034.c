#include "recomp.h"
#include "rec_mod.h"

void f_797443(void) {
  LOAD_REGS();
L_797443: /* 797443: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 797446: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79744b: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 79744e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79744f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 797452: call 0x99caf8 */
  esp -= 4; W32(esp, 0x797457u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_797457(); return;
}

void f_797457(void) {
  LOAD_REGS();
L_797457: /* 797457: push 0xa0a8d4 */
  { uint32_t v = 0xa0a8d4u; esp -= 4; W32(esp, v); }
/* 79745c: push 0xacbbec */
  { uint32_t v = 0xacbbecu; esp -= 4; W32(esp, v); }
/* 797461: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x797467u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 797467: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79746a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79746c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79746e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x797473u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 797473: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 797476: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 797479: mov eax, edi */
  eax = edi;
/* 79747b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79747c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79747d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 797484: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 797485: mov esp, ebp */
  esp = ebp;
/* 797487: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 797488: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_797af0(void) {
  LOAD_REGS();
L_797af0: /* 797af0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 797af1: mov ebp, esp */
  ebp = esp;
/* 797af3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 797af5: push 0x9cd78a */
  { uint32_t v = 0x9cd78au; esp -= 4; W32(esp, v); }
/* 797afa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 797b00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 797b01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 797b08: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 797b0b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 797b0c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 797b0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 797b0e: mov edi, ecx */
  edi = ecx;
/* 797b10: mov edx, dword ptr [edi + 0x84] */
  edx = R32((uint32_t)(edi + 0x84u));
/* 797b16: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 797b1c: and edx, 0xfffffdff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffffdffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 797b22: test eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 797b27: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 797b2a: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 797b2d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 797b34: mov dword ptr [edi + 0x84], edx */
  W32((uint32_t)(edi + 0x84u), edx);
/* 797b3a: je 0x797b47 */
  if (zf) goto L_797b47;
L_797b3c: /* 797b3c: test eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 797b41: je 0x797d59 */
  if (zf) goto L_797d59;
L_797b47: /* 797b47: test dword ptr [edi + 0x394], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x394u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 797b51: je 0x797ca6 */
  if (zf) goto L_797ca6;
L_797b57: /* 797b57: mov eax, dword ptr [edi + 0x5c] */
  eax = R32((uint32_t)(edi + 0x5cu));
/* 797b5a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 797b5c: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 797b5f: je 0x797b6f */
  if (zf) goto L_797b6f;
L_797b61: /* 797b61: mov eax, dword ptr [eax + 0x80] */
  eax = R32((uint32_t)(eax + 0x80u));
/* 797b67: shr eax, 0x15 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 797b6a: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 797b6d: jmp 0x797b79 */
  goto L_797b79;
L_797b6f: /* 797b6f: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 797b72: xor eax, eax */
  eax = 0;
/* 797b74: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 797b76: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
L_797b79: /* 797b79: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 797b7b: je 0x797ca6 */
  if (zf) goto L_797ca6;
L_797b81: /* 797b81: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 797b87: lea ebx, [edi + 0x170] */
  ebx = (uint32_t)(edi + 0x170u);
/* 797b8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 797b8e: mov ecx, ebx */
  ecx = ebx;
/* 797b90: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x797b96u); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 797b96: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 797b98: jne 0x797bb5 */
  if (!zf) goto L_797bb5;
L_797b9a: /* 797b9a: add esi, 0x188 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 797ba0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 797ba1: lea ecx, [edi + 0x188] */
  ecx = (uint32_t)(edi + 0x188u);
/* 797ba7: call dword ptr [0xcfa1d8] */
  esp -= 4; W32(esp, 0x797badu); SPILL(); f_4e119f(); if (g_unwind) return; /* Core!??9FVector@@QBEHABV0@@Z */ RELOAD();
/* 797bad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 797baf: je 0x797ca6 */
  if (zf) goto L_797ca6;
L_797bb5: /* 797bb5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 797bb8: or dword ptr [eax + 0x84], 0x200 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x84u))); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x84u), r);
  }
/* 797bc2: lea ecx, [eax + 0x574] */
  ecx = (uint32_t)(eax + 0x574u);
/* 797bc8: mov edx, ebx */
  edx = ebx;
/* 797bca: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 797bcc: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 797bce: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 797bd1: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 797bd4: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 797bd7: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 797bda: lea esi, [eax + 0x17c] */
  esi = (uint32_t)(eax + 0x17cu);
/* 797be0: lea ecx, [eax + 0x580] */
  ecx = (uint32_t)(eax + 0x580u);
/* 797be6: mov edx, esi */
  edx = esi;
/* 797be8: mov edi, dword ptr [edx] */
  edi = R32((uint32_t)(edx));
/* 797bea: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 797bec: mov edi, dword ptr [edx + 4] */
  edi = R32((uint32_t)(edx + 0x4u));
/* 797bef: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 797bf2: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 797bf5: lea edi, [eax + 0x188] */
  edi = (uint32_t)(eax + 0x188u);
/* 797bfb: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 797bfe: add eax, 0x58c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x58cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 797c03: mov ecx, edi */
  ecx = edi;
/* 797c05: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 797c07: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 797c09: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 797c0c: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 797c0f: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 797c12: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 797c15: test byte ptr [0xb5bd4c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bd4cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 797c1c: jne 0x797c46 */
  if (!zf) goto L_797c46;
L_797c1e: /* 797c1e: or dword ptr [0xb5bd4c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bd4cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bd4cu), r);
  }
/* 797c25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 797c27: push 0xacbbf4 */
  { uint32_t v = 0xacbbf4u; esp -= 4; W32(esp, v); }
/* 797c2c: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 797c31: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 797c35: call 0x6cad67 */
  esp -= 4; W32(esp, 0x797c3au); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 797c3a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 797c3d: mov dword ptr [0xb5bd48], eax */
  W32((uint32_t)(0xb5bd48u), eax);
/* 797c42: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_797c46: /* 797c46: mov edx, dword ptr [0xb5bd48] */
  edx = R32((uint32_t)(0xb5bd48u));
/* 797c4c: movzx ecx, word ptr [edx + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 797c50: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 797c53: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 797c55: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 797c57: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 797c5a: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 797c5d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 797c60: mov dword ptr [eax + 0x170], edx */
  W32((uint32_t)(eax + 0x170u), edx);
/* 797c66: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 797c69: mov dword ptr [eax + 0x174], ecx */
  W32((uint32_t)(eax + 0x174u), ecx);
/* 797c6f: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* 797c72: mov dword ptr [eax + 0x178], edx */
  W32((uint32_t)(eax + 0x178u), edx);
/* 797c78: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 797c7a: lea ecx, [eax + 0x17c] */
  ecx = (uint32_t)(eax + 0x17cu);
/* 797c80: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 797c82: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 797c85: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 797c88: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 797c8b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 797c8e: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 797c90: add eax, 0x188 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 797c95: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 797c97: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 797c9a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 797c9d: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 797ca0: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 797ca3: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_797ca6: /* 797ca6: test byte ptr [edi + 0x84], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x84u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 797cad: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 797cb0: jne 0x797d5c */
  if (!zf) goto L_797d5c;
L_797cb6: /* 797cb6: mov edx, dword ptr [edi + 0xb0] */
  edx = R32((uint32_t)(edi + 0xb0u));
/* 797cbc: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 797cbf: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 797cc5: fsub qword ptr [eax + 0x80] */
  ST0 = ST0 - (F64((uint32_t)(eax + 0x80u)));
/* 797ccb: fcomp qword ptr [0xa0a958] */
  fpu_com(ST0, F64((uint32_t)(0xa0a958u)));
  FPOP();
/* 797cd1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 797cd3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 797cd6: jp 0x797d5c */
  if (pf) goto L_797d5c;
L_797cdc: /* 797cdc: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 797cdf: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 797ce2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 797ce5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 797ce6: mov ecx, dword ptr [eax + 0x4f8] */
  ecx = R32((uint32_t)(eax + 0x4f8u));
/* 797cec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 797ced: mov edx, dword ptr [edi + 0x4f8] */
  edx = R32((uint32_t)(edi + 0x4f8u));
/* 797cf3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 797cf4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 797cf5: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x797cfau); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 797cfa: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 797cfd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 797cff: je 0x797d44 */
  if (zf) goto L_797d44;
L_797d01: /* 797d01: test byte ptr [0xb5bd4c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bd4cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 797d08: jne 0x797d36 */
  if (!zf) goto L_797d36;
L_797d0a: /* 797d0a: or dword ptr [0xb5bd4c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bd4cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bd4cu), r);
  }
/* 797d11: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 797d15: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x797d1bu); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 797d1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 797d1d: push 0xacbc10 */
  { uint32_t v = 0xacbc10u; esp -= 4; W32(esp, v); }
/* 797d22: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 797d27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 797d28: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x797d2eu); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 797d2e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 797d31: mov dword ptr [0xb5bd44], eax */
  W32((uint32_t)(0xb5bd44u), eax);
L_797d36: /* 797d36: mov eax, dword ptr [0xb5bd44] */
  eax = R32((uint32_t)(0xb5bd44u));
/* 797d3b: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 797d3f: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
L_797d41: /* 797d41: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_797d44: /* 797d44: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 797d47: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 797d48: mov eax, esi */
  eax = esi;
/* 797d4a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 797d4b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 797d52: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 797d53: mov esp, ebp */
  esp = ebp;
/* 797d55: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 797d56: ret 0x14 */
  esp += 24; SPILL(); return;
L_797d59: /* 797d59: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
L_797d5c: /* 797d5c: mov edx, dword ptr [edi + 0xb0] */
  edx = R32((uint32_t)(edi + 0xb0u));
/* 797d62: fld dword ptr [edx + 0x3ac] */
  { double v = F32((uint32_t)(edx + 0x3acu)); FPUSH(v); }
/* 797d68: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 797d6b: fstp qword ptr [ebx + 0x80] */
  WF64((uint32_t)(ebx + 0x80u), ST0); FPOP();
/* 797d71: mov al, byte ptr [edi + 0x84] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x84u))) & 0xffu);
/* 797d77: test al, 0x20 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 797d79: je 0x797df9 */
  if (zf) goto L_797df9;
L_797d7b: /* 797d7b: mov eax, dword ptr [0xcc7958] */
  eax = R32((uint32_t)(0xcc7958u));
/* 797d80: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 797d83: je 0x797df9 */
  if (zf) goto L_797df9;
L_797d85: /* 797d85: cmp byte ptr [edi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 797d8c: jne 0x797df9 */
  if (!zf) goto L_797df9;
L_797d8e: /* 797d8e: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 797d94: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 797d96: jns 0x797df9 */
  if (!sf) goto L_797df9;
L_797d98: /* 797d98: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 797d9b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 797d9e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 797d9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 797da0: add ecx, 0x524 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x524u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 797da6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 797da7: lea edx, [edi + 0x524] */
  edx = (uint32_t)(edi + 0x524u);
/* 797dad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 797dae: call 0x6cc21b */
  esp -= 4; W32(esp, 0x797db3u); SPILL(); f_6cc21b(); if (g_unwind) return; RELOAD();
/* 797db3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 797db6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 797db8: je 0x797df9 */
  if (zf) goto L_797df9;
L_797dba: /* 797dba: test byte ptr [0xb5bd4c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bd4cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 797dc1: jne 0x797deb */
  if (!zf) goto L_797deb;
L_797dc3: /* 797dc3: or dword ptr [0xb5bd4c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bd4cu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bd4cu), r);
  }
/* 797dca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 797dcc: push 0xacbc3c */
  { uint32_t v = 0xacbc3cu; esp -= 4; W32(esp, v); }
/* 797dd1: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 797dd6: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 797dda: call 0x6cad67 */
  esp -= 4; W32(esp, 0x797ddfu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 797ddf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 797de2: mov dword ptr [0xb5bd40], eax */
  W32((uint32_t)(0xb5bd40u), eax);
/* 797de7: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_797deb: /* 797deb: mov eax, dword ptr [0xb5bd40] */
  eax = R32((uint32_t)(0xb5bd40u));
/* 797df0: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 797df4: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 797df6: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_797df9: /* 797df9: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 797dfc: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 797dff: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 797e02: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 797e03: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 797e04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 797e05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 797e06: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 797e07: mov ecx, edi */
  ecx = edi;
/* 797e09: call 0x6c1aaa */
  esp -= 4; W32(esp, 0x797e0eu); SPILL(); f_6c1aaa(); if (g_unwind) return; RELOAD();
/* 797e0e: mov esi, eax */
  esi = eax;
/* 797e10: mov eax, dword ptr [0xcc7958] */
  eax = R32((uint32_t)(0xcc7958u));
/* 797e15: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 797e18: je 0x797d44 */
  if (zf) goto L_797d44;
L_797e1e: /* 797e1e: cmp byte ptr [edi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 797e25: jne 0x797d44 */
  if (!zf) goto L_797d44;
L_797e2b: /* 797e2b: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 797e31: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 797e33: jns 0x797d44 */
  if (!sf) goto L_797d44;
L_797e39: /* 797e39: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 797e3c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 797e3f: mov ecx, dword ptr [eax + 0x4f8] */
  ecx = R32((uint32_t)(eax + 0x4f8u));
/* 797e45: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 797e46: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 797e47: mov edx, dword ptr [edi + 0x4f8] */
  edx = R32((uint32_t)(edi + 0x4f8u));
/* 797e4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 797e4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 797e4f: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x797e54u); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 797e54: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 797e57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 797e59: je 0x797e9a */
  if (zf) goto L_797e9a;
L_797e5b: /* 797e5b: test byte ptr [0xb5bd4c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bd4cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 797e62: jne 0x797e8c */
  if (!zf) goto L_797e8c;
L_797e64: /* 797e64: or dword ptr [0xb5bd4c], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bd4cu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bd4cu), r);
  }
/* 797e6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 797e6d: push 0xacbc5c */
  { uint32_t v = 0xacbc5cu; esp -= 4; W32(esp, v); }
/* 797e72: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 797e77: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 797e7b: call 0x6cad67 */
  esp -= 4; W32(esp, 0x797e80u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 797e80: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 797e83: mov dword ptr [0xb5bd3c], eax */
  W32((uint32_t)(0xb5bd3cu), eax);
/* 797e88: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_797e8c: /* 797e8c: mov eax, dword ptr [0xb5bd3c] */
  eax = R32((uint32_t)(0xb5bd3cu));
/* 797e91: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 797e95: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 797e97: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_797e9a: /* 797e9a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 797e9d: mov edx, dword ptr [edi + 0x46c] */
  edx = R32((uint32_t)(edi + 0x46cu));
/* 797ea3: cmp edx, dword ptr [eax + 0x46c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x46cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 797ea9: je 0x797eeb */
  if (zf) goto L_797eeb;
L_797eab: /* 797eab: test byte ptr [0xb5bd4c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bd4cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 797eb2: jne 0x797edc */
  if (!zf) goto L_797edc;
L_797eb4: /* 797eb4: or dword ptr [0xb5bd4c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bd4cu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bd4cu), r);
  }
/* 797ebb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 797ebd: push 0xacbc88 */
  { uint32_t v = 0xacbc88u; esp -= 4; W32(esp, v); }
/* 797ec2: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 797ec7: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 797ecb: call 0x6cad67 */
  esp -= 4; W32(esp, 0x797ed0u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 797ed0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 797ed3: mov dword ptr [0xb5bd38], eax */
  W32((uint32_t)(0xb5bd38u), eax);
/* 797ed8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_797edc: /* 797edc: mov ecx, dword ptr [0xb5bd38] */
  ecx = R32((uint32_t)(0xb5bd38u));
/* 797ee2: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 797ee6: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 797ee8: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_797eeb: /* 797eeb: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 797ef1: mov ebx, 0x80000 */
  ebx = 0x80000u;
/* 797ef6: test ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 797ef8: jne 0x797f07 */
  if (!zf) goto L_797f07;
L_797efa: /* 797efa: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 797efd: mov ecx, dword ptr [eax + 0x33c] */
  ecx = R32((uint32_t)(eax + 0x33cu));
/* 797f03: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 797f05: je 0x797f83 */
  if (zf) goto L_797f83;
L_797f07: /* 797f07: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 797f0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 797f0f: je 0x797f1e */
  if (zf) goto L_797f1e;
L_797f11: /* 797f11: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 797f14: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 797f16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 797f17: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x797f1au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 797f1a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 797f1c: je 0x797f83 */
  if (zf) goto L_797f83;
L_797f1e: /* 797f1e: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 797f21: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 797f24: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 797f27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 797f28: mov eax, dword ptr [edx + 0x33c] */
  eax = R32((uint32_t)(edx + 0x33cu));
/* 797f2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 797f2f: mov ecx, dword ptr [edi + 0x33c] */
  ecx = R32((uint32_t)(edi + 0x33cu));
/* 797f35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 797f36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 797f37: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x797f3cu); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 797f3c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 797f3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 797f41: je 0x797f83 */
  if (zf) goto L_797f83;
L_797f43: /* 797f43: test byte ptr [0xb5bd4c], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bd4cu))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 797f4a: jne 0x797f74 */
  if (!zf) goto L_797f74;
L_797f4c: /* 797f4c: or dword ptr [0xb5bd4c], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bd4cu))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bd4cu), r);
  }
/* 797f53: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 797f55: push 0xacbc98 */
  { uint32_t v = 0xacbc98u; esp -= 4; W32(esp, v); }
/* 797f5a: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 797f5f: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 797f63: call 0x6cad67 */
  esp -= 4; W32(esp, 0x797f68u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 797f68: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 797f6b: mov dword ptr [0xb5bd34], eax */
  W32((uint32_t)(0xb5bd34u), eax);
/* 797f70: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_797f74: /* 797f74: mov edx, dword ptr [0xb5bd34] */
  edx = R32((uint32_t)(0xb5bd34u));
/* 797f7a: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 797f7e: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 797f80: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_797f83: /* 797f83: test dword ptr [edi + 0x88], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x88u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 797f89: je 0x79820f */
  if (zf) goto L_79820f;
L_797f8f: /* 797f8f: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 797f92: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 797f95: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 797f98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 797f99: mov ecx, dword ptr [eax + 0x440] */
  ecx = R32((uint32_t)(eax + 0x440u));
/* 797f9f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 797fa0: mov edx, dword ptr [edi + 0x440] */
  edx = R32((uint32_t)(edi + 0x440u));
/* 797fa6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 797fa7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 797fa8: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x797fadu); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 797fad: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 797fb0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 797fb2: je 0x797ff8 */
  if (zf) goto L_797ff8;
L_797fb4: /* 797fb4: mov cl, byte ptr [0xb5bd4c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bd4cu))) & 0xffu);
/* 797fba: mov eax, 0x40 */
  eax = 0x40u;
/* 797fbf: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 797fc1: jne 0x797fea */
  if (!zf) goto L_797fea;
L_797fc3: /* 797fc3: or dword ptr [0xb5bd4c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bd4cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bd4cu), r);
  }
/* 797fc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 797fcb: push 0xacbcb0 */
  { uint32_t v = 0xacbcb0u; esp -= 4; W32(esp, v); }
/* 797fd0: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 797fd5: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 797fd9: call 0x6cad67 */
  esp -= 4; W32(esp, 0x797fdeu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 797fde: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 797fe1: mov dword ptr [0xb5bd30], eax */
  W32((uint32_t)(0xb5bd30u), eax);
/* 797fe6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_797fea: /* 797fea: mov eax, dword ptr [0xb5bd30] */
  eax = R32((uint32_t)(0xb5bd30u));
/* 797fef: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 797ff3: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 797ff5: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_797ff8: /* 797ff8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 797ffb: mov edx, dword ptr [edi + 0x3f8] */
  edx = R32((uint32_t)(edi + 0x3f8u));
/* 798001: cmp edx, dword ptr [eax + 0x3f8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x3f8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 798007: je 0x79804e */
  if (zf) goto L_79804e;
L_798009: /* 798009: mov cl, byte ptr [0xb5bd4c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bd4cu))) & 0xffu);
/* 79800f: mov eax, 0x80 */
  eax = 0x80u;
/* 798014: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 798016: jne 0x79803f */
  if (!zf) goto L_79803f;
L_798018: /* 798018: or dword ptr [0xb5bd4c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bd4cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bd4cu), r);
  }
/* 79801e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 798020: push 0xacbccc */
  { uint32_t v = 0xacbcccu; esp -= 4; W32(esp, v); }
/* 798025: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 79802a: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 79802e: call 0x6cad67 */
  esp -= 4; W32(esp, 0x798033u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 798033: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 798036: mov dword ptr [0xb5bd2c], eax */
  W32((uint32_t)(0xb5bd2cu), eax);
/* 79803b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79803f: /* 79803f: mov ecx, dword ptr [0xb5bd2c] */
  ecx = R32((uint32_t)(0xb5bd2cu));
/* 798045: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 798049: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 79804b: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79804e: /* 79804e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 798051: mov eax, dword ptr [edi + 0x3fc] */
  eax = R32((uint32_t)(edi + 0x3fcu));
/* 798057: cmp eax, dword ptr [ecx + 0x3fc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3fcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79805d: je 0x7980a8 */
  if (zf) goto L_7980a8;
L_79805f: /* 79805f: mov ecx, dword ptr [0xb5bd4c] */
  ecx = R32((uint32_t)(0xb5bd4cu));
/* 798065: mov eax, 0x100 */
  eax = 0x100u;
/* 79806a: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79806c: jne 0x798099 */
  if (!zf) goto L_798099;
L_79806e: /* 79806e: mov edx, ecx */
  edx = ecx;
/* 798070: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 798072: mov dword ptr [0xb5bd4c], edx */
  W32((uint32_t)(0xb5bd4cu), edx);
/* 798078: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79807a: push 0xacbce4 */
  { uint32_t v = 0xacbce4u; esp -= 4; W32(esp, v); }
/* 79807f: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 798084: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 798088: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79808du); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79808d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 798090: mov dword ptr [0xb5bd28], eax */
  W32((uint32_t)(0xb5bd28u), eax);
/* 798095: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_798099: /* 798099: mov edx, dword ptr [0xb5bd28] */
  edx = R32((uint32_t)(0xb5bd28u));
/* 79809f: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 7980a3: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7980a5: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_7980a8: /* 7980a8: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7980ab: mov ecx, dword ptr [edi + 0x400] */
  ecx = R32((uint32_t)(edi + 0x400u));
/* 7980b1: cmp ecx, dword ptr [edx + 0x400] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x400u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7980b7: je 0x798100 */
  if (zf) goto L_798100;
L_7980b9: /* 7980b9: mov eax, dword ptr [0xb5bd4c] */
  eax = R32((uint32_t)(0xb5bd4cu));
/* 7980be: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7980c1: jne 0x7980f2 */
  if (!zf) goto L_7980f2;
L_7980c3: /* 7980c3: mov edx, eax */
  edx = eax;
/* 7980c5: or edx, 0x200 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7980cb: mov dword ptr [0xb5bd4c], edx */
  W32((uint32_t)(0xb5bd4cu), edx);
/* 7980d1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7980d3: push 0xacbcfc */
  { uint32_t v = 0xacbcfcu; esp -= 4; W32(esp, v); }
/* 7980d8: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7980dd: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 7980e1: call 0x6cad67 */
  esp -= 4; W32(esp, 0x7980e6u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 7980e6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7980e9: mov dword ptr [0xb5bd24], eax */
  W32((uint32_t)(0xb5bd24u), eax);
/* 7980ee: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7980f2: /* 7980f2: mov eax, dword ptr [0xb5bd24] */
  eax = R32((uint32_t)(0xb5bd24u));
/* 7980f7: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 7980fb: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 7980fd: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_798100: /* 798100: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 798103: mov edx, dword ptr [edi + 0x408] */
  edx = R32((uint32_t)(edi + 0x408u));
/* 798109: cmp edx, dword ptr [eax + 0x408] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x408u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79810f: je 0x79815a */
  if (zf) goto L_79815a;
L_798111: /* 798111: mov ecx, dword ptr [0xb5bd4c] */
  ecx = R32((uint32_t)(0xb5bd4cu));
/* 798117: mov eax, 0x400 */
  eax = 0x400u;
/* 79811c: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79811e: jne 0x79814b */
  if (!zf) goto L_79814b;
L_798120: /* 798120: mov edx, ecx */
  edx = ecx;
/* 798122: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 798124: mov dword ptr [0xb5bd4c], edx */
  W32((uint32_t)(0xb5bd4cu), edx);
/* 79812a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79812c: push 0xacbd10 */
  { uint32_t v = 0xacbd10u; esp -= 4; W32(esp, v); }
/* 798131: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 798136: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 79813a: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79813fu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79813f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 798142: mov dword ptr [0xb5bd20], eax */
  W32((uint32_t)(0xb5bd20u), eax);
/* 798147: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79814b: /* 79814b: mov ecx, dword ptr [0xb5bd20] */
  ecx = R32((uint32_t)(0xb5bd20u));
/* 798151: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 798155: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 798157: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79815a: /* 79815a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79815d: mov eax, dword ptr [edi + 0x40c] */
  eax = R32((uint32_t)(edi + 0x40cu));
/* 798163: cmp eax, dword ptr [ecx + 0x40c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x40cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 798169: je 0x7981b3 */
  if (zf) goto L_7981b3;
L_79816b: /* 79816b: mov eax, dword ptr [0xb5bd4c] */
  eax = R32((uint32_t)(0xb5bd4cu));
/* 798170: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 798173: jne 0x7981a4 */
  if (!zf) goto L_7981a4;
L_798175: /* 798175: mov edx, eax */
  edx = eax;
/* 798177: or edx, 0x800 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79817d: mov dword ptr [0xb5bd4c], edx */
  W32((uint32_t)(0xb5bd4cu), edx);
/* 798183: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 798185: push 0xacbd24 */
  { uint32_t v = 0xacbd24u; esp -= 4; W32(esp, v); }
/* 79818a: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 79818f: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 798193: call 0x6cad67 */
  esp -= 4; W32(esp, 0x798198u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 798198: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79819b: mov dword ptr [0xb5bd1c], eax */
  W32((uint32_t)(0xb5bd1cu), eax);
/* 7981a0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7981a4: /* 7981a4: mov edx, dword ptr [0xb5bd1c] */
  edx = R32((uint32_t)(0xb5bd1cu));
/* 7981aa: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 7981ae: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7981b0: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_7981b3: /* 7981b3: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7981b6: mov ecx, dword ptr [edi + 0x410] */
  ecx = R32((uint32_t)(edi + 0x410u));
/* 7981bc: cmp ecx, dword ptr [edx + 0x410] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x410u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7981c2: je 0x79826e */
  if (zf) goto L_79826e;
L_7981c8: /* 7981c8: mov ecx, dword ptr [0xb5bd4c] */
  ecx = R32((uint32_t)(0xb5bd4cu));
/* 7981ce: mov eax, 0x1000 */
  eax = 0x1000u;
/* 7981d3: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7981d5: jne 0x798202 */
  if (!zf) goto L_798202;
L_7981d7: /* 7981d7: mov edx, ecx */
  edx = ecx;
/* 7981d9: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7981db: mov dword ptr [0xb5bd4c], edx */
  W32((uint32_t)(0xb5bd4cu), edx);
/* 7981e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7981e3: push 0xacbd30 */
  { uint32_t v = 0xacbd30u; esp -= 4; W32(esp, v); }
/* 7981e8: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7981ed: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 7981f1: call 0x6cad67 */
  esp -= 4; W32(esp, 0x7981f6u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 7981f6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7981f9: mov dword ptr [0xb5bd18], eax */
  W32((uint32_t)(0xb5bd18u), eax);
/* 7981fe: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_798202: /* 798202: mov eax, dword ptr [0xb5bd18] */
  eax = R32((uint32_t)(0xb5bd18u));
/* 798207: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79820b: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 79820d: jmp 0x79826b */
  goto L_79826b;
L_79820f: /* 79820f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 798212: mov eax, dword ptr [edx + 0x390] */
  eax = R32((uint32_t)(edx + 0x390u));
/* 798218: xor eax, dword ptr [edi + 0x390] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x390u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 79821e: test eax, 0x8000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 798223: je 0x79826e */
  if (zf) goto L_79826e;
L_798225: /* 798225: mov ecx, dword ptr [0xb5bd4c] */
  ecx = R32((uint32_t)(0xb5bd4cu));
/* 79822b: mov eax, 0x2000 */
  eax = 0x2000u;
/* 798230: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 798232: jne 0x79825f */
  if (!zf) goto L_79825f;
L_798234: /* 798234: mov edx, ecx */
  edx = ecx;
/* 798236: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 798238: mov dword ptr [0xb5bd4c], edx */
  W32((uint32_t)(0xb5bd4cu), edx);
/* 79823e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 798240: push 0xacbd48 */
  { uint32_t v = 0xacbd48u; esp -= 4; W32(esp, v); }
/* 798245: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 79824a: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 79824e: call 0x6cad67 */
  esp -= 4; W32(esp, 0x798253u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 798253: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 798256: mov dword ptr [0xb5bd14], eax */
  W32((uint32_t)(0xb5bd14u), eax);
/* 79825b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79825f: /* 79825f: mov ecx, dword ptr [0xb5bd14] */
  ecx = R32((uint32_t)(0xb5bd14u));
/* 798265: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 798269: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
L_79826b: /* 79826b: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79826e: /* 79826e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 798271: mov eax, dword ptr [edi + 0x38c] */
  eax = R32((uint32_t)(edi + 0x38cu));
/* 798277: cmp eax, dword ptr [ecx + 0x38c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x38cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79827d: je 0x7982c8 */
  if (zf) goto L_7982c8;
L_79827f: /* 79827f: mov ecx, dword ptr [0xb5bd4c] */
  ecx = R32((uint32_t)(0xb5bd4cu));
/* 798285: mov eax, 0x4000 */
  eax = 0x4000u;
/* 79828a: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79828c: jne 0x7982b9 */
  if (!zf) goto L_7982b9;
L_79828e: /* 79828e: mov edx, ecx */
  edx = ecx;
/* 798290: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 798292: mov dword ptr [0xb5bd4c], edx */
  W32((uint32_t)(0xb5bd4cu), edx);
/* 798298: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79829a: push 0xacbd64 */
  { uint32_t v = 0xacbd64u; esp -= 4; W32(esp, v); }
/* 79829f: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7982a4: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 7982a8: call 0x6cad67 */
  esp -= 4; W32(esp, 0x7982adu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 7982ad: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7982b0: mov dword ptr [0xb5bd10], eax */
  W32((uint32_t)(0xb5bd10u), eax);
/* 7982b5: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7982b9: /* 7982b9: mov edx, dword ptr [0xb5bd10] */
  edx = R32((uint32_t)(0xb5bd10u));
/* 7982bf: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 7982c3: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 7982c5: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_7982c8: /* 7982c8: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7982cb: mov ecx, dword ptr [edi + 0x388] */
  ecx = R32((uint32_t)(edi + 0x388u));
/* 7982d1: cmp ecx, dword ptr [edx + 0x388] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x388u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7982d7: je 0x798321 */
  if (zf) goto L_798321;
L_7982d9: /* 7982d9: mov ecx, dword ptr [0xb5bd4c] */
  ecx = R32((uint32_t)(0xb5bd4cu));
/* 7982df: mov eax, 0x8000 */
  eax = 0x8000u;
/* 7982e4: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7982e6: jne 0x798313 */
  if (!zf) goto L_798313;
L_7982e8: /* 7982e8: mov edx, ecx */
  edx = ecx;
/* 7982ea: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7982ec: mov dword ptr [0xb5bd4c], edx */
  W32((uint32_t)(0xb5bd4cu), edx);
/* 7982f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7982f4: push 0xacbd84 */
  { uint32_t v = 0xacbd84u; esp -= 4; W32(esp, v); }
/* 7982f9: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7982fe: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 798302: call 0x6cad67 */
  esp -= 4; W32(esp, 0x798307u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 798307: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79830a: mov dword ptr [0xb5bd0c], eax */
  W32((uint32_t)(0xb5bd0cu), eax);
/* 79830f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_798313: /* 798313: mov eax, dword ptr [0xb5bd0c] */
  eax = R32((uint32_t)(0xb5bd0cu));
/* 798318: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79831c: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 79831e: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_798321: /* 798321: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 798324: mov edx, dword ptr [edi + 0x360] */
  edx = R32((uint32_t)(edi + 0x360u));
/* 79832a: cmp edx, dword ptr [eax + 0x360] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 798330: je 0x79837b */
  if (zf) goto L_79837b;
L_798332: /* 798332: mov ecx, dword ptr [0xb5bd4c] */
  ecx = R32((uint32_t)(0xb5bd4cu));
/* 798338: mov eax, 0x10000 */
  eax = 0x10000u;
/* 79833d: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79833f: jne 0x79836c */
  if (!zf) goto L_79836c;
L_798341: /* 798341: mov edx, ecx */
  edx = ecx;
/* 798343: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 798345: mov dword ptr [0xb5bd4c], edx */
  W32((uint32_t)(0xb5bd4cu), edx);
/* 79834b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79834d: push 0xacbda4 */
  { uint32_t v = 0xacbda4u; esp -= 4; W32(esp, v); }
/* 798352: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 798357: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 79835b: call 0x6cad67 */
  esp -= 4; W32(esp, 0x798360u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 798360: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 798363: mov dword ptr [0xb5bd08], eax */
  W32((uint32_t)(0xb5bd08u), eax);
/* 798368: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79836c: /* 79836c: mov ecx, dword ptr [0xb5bd08] */
  ecx = R32((uint32_t)(0xb5bd08u));
/* 798372: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 798376: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 798378: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79837b: /* 79837b: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 79837e: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 798381: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 798384: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 798385: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 798386: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 798389: add edx, 0x370 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x370u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 79838f: mov ecx, esp */
  ecx = esp;
/* 798391: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 798394: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 798395: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79839bu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79839b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79839e: lea eax, [edi + 0x370] */
  eax = (uint32_t)(edi + 0x370u);
/* 7983a4: mov ecx, esp */
  ecx = esp;
/* 7983a6: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 7983a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7983aa: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 7983ae: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7983b4u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7983b4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7983b8: call 0x6cc865 */
  esp -= 4; W32(esp, 0x7983bdu); SPILL(); f_6cc865(); if (g_unwind) return; RELOAD();
/* 7983bd: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7983c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7983c2: je 0x79840d */
  if (zf) goto L_79840d;
L_7983c4: /* 7983c4: mov ecx, dword ptr [0xb5bd4c] */
  ecx = R32((uint32_t)(0xb5bd4cu));
/* 7983ca: mov eax, 0x20000 */
  eax = 0x20000u;
/* 7983cf: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7983d1: jne 0x7983fe */
  if (!zf) goto L_7983fe;
L_7983d3: /* 7983d3: mov edx, ecx */
  edx = ecx;
/* 7983d5: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7983d7: mov dword ptr [0xb5bd4c], edx */
  W32((uint32_t)(0xb5bd4cu), edx);
/* 7983dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7983df: push 0xacbdc0 */
  { uint32_t v = 0xacbdc0u; esp -= 4; W32(esp, v); }
/* 7983e4: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7983e9: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 7983ed: call 0x6cad67 */
  esp -= 4; W32(esp, 0x7983f2u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 7983f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7983f5: mov dword ptr [0xb5bd04], eax */
  W32((uint32_t)(0xb5bd04u), eax);
/* 7983fa: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7983fe: /* 7983fe: mov ecx, dword ptr [0xb5bd04] */
  ecx = R32((uint32_t)(0xb5bd04u));
/* 798404: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 798408: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 79840a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79840d: /* 79840d: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 798410: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 798413: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 798416: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 798417: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 798418: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79841b: add edx, 0x364 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x364u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 798421: mov ecx, esp */
  ecx = esp;
/* 798423: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 798426: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 798427: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79842du); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79842d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 798430: lea eax, [edi + 0x364] */
  eax = (uint32_t)(edi + 0x364u);
/* 798436: mov ecx, esp */
  ecx = esp;
/* 798438: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 79843b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79843c: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 798440: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x798446u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 798446: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79844a: call 0x6cc865 */
  esp -= 4; W32(esp, 0x79844fu); SPILL(); f_6cc865(); if (g_unwind) return; RELOAD();
/* 79844f: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 798452: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 798454: je 0x79849f */
  if (zf) goto L_79849f;
L_798456: /* 798456: mov ecx, dword ptr [0xb5bd4c] */
  ecx = R32((uint32_t)(0xb5bd4cu));
/* 79845c: mov eax, 0x40000 */
  eax = 0x40000u;
/* 798461: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 798463: jne 0x798490 */
  if (!zf) goto L_798490;
L_798465: /* 798465: mov edx, ecx */
  edx = ecx;
/* 798467: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 798469: mov dword ptr [0xb5bd4c], edx */
  W32((uint32_t)(0xb5bd4cu), edx);
/* 79846f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 798471: push 0xacbde4 */
  { uint32_t v = 0xacbde4u; esp -= 4; W32(esp, v); }
/* 798476: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 79847b: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 79847f: call 0x6cad67 */
  esp -= 4; W32(esp, 0x798484u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 798484: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 798487: mov dword ptr [0xb5bd00], eax */
  W32((uint32_t)(0xb5bd00u), eax);
/* 79848c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_798490: /* 798490: mov ecx, dword ptr [0xb5bd00] */
  ecx = R32((uint32_t)(0xb5bd00u));
/* 798496: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79849a: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 79849c: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79849f: /* 79849f: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7984a2: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7984a5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7984a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7984a9: mov eax, dword ptr [edx + 0x37c] */
  eax = R32((uint32_t)(edx + 0x37cu));
/* 7984af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7984b0: mov ecx, dword ptr [edi + 0x37c] */
  ecx = R32((uint32_t)(edi + 0x37cu));
/* 7984b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7984b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7984b8: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x7984bdu); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 7984bd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7984c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7984c2: je 0x798507 */
  if (zf) goto L_798507;
L_7984c4: /* 7984c4: mov eax, dword ptr [0xb5bd4c] */
  eax = R32((uint32_t)(0xb5bd4cu));
/* 7984c9: test ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7984cb: jne 0x7984f8 */
  if (!zf) goto L_7984f8;
L_7984cd: /* 7984cd: mov ecx, eax */
  ecx = eax;
/* 7984cf: or ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 7984d1: mov dword ptr [0xb5bd4c], ecx */
  W32((uint32_t)(0xb5bd4cu), ecx);
/* 7984d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7984d9: push 0xacbe00 */
  { uint32_t v = 0xacbe00u; esp -= 4; W32(esp, v); }
/* 7984de: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7984e3: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 7984e7: call 0x6cad67 */
  esp -= 4; W32(esp, 0x7984ecu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 7984ec: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7984ef: mov dword ptr [0xb5bcfc], eax */
  W32((uint32_t)(0xb5bcfcu), eax);
/* 7984f4: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7984f8: /* 7984f8: mov edx, dword ptr [0xb5bcfc] */
  edx = R32((uint32_t)(0xb5bcfcu));
/* 7984fe: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 798502: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 798504: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_798507: /* 798507: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79850a: mov edx, dword ptr [ecx + 0x380] */
  edx = R32((uint32_t)(ecx + 0x380u));
/* 798510: xor edx, dword ptr [edi + 0x380] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x380u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 798516: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 798519: je 0x798561 */
  if (zf) goto L_798561;
L_79851b: /* 79851b: mov ecx, dword ptr [0xb5bd4c] */
  ecx = R32((uint32_t)(0xb5bd4cu));
/* 798521: mov eax, 0x100000 */
  eax = 0x100000u;
/* 798526: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 798528: jne 0x798553 */
  if (!zf) goto L_798553;
L_79852a: /* 79852a: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 79852c: mov dword ptr [0xb5bd4c], ecx */
  W32((uint32_t)(0xb5bd4cu), ecx);
/* 798532: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 798534: push 0xacbe10 */
  { uint32_t v = 0xacbe10u; esp -= 4; W32(esp, v); }
/* 798539: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 79853e: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 798542: call 0x6cad67 */
  esp -= 4; W32(esp, 0x798547u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 798547: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79854a: mov dword ptr [0xb5bcf8], eax */
  W32((uint32_t)(0xb5bcf8u), eax);
/* 79854f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_798553: /* 798553: mov eax, dword ptr [0xb5bcf8] */
  eax = R32((uint32_t)(0xb5bcf8u));
/* 798558: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79855c: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 79855e: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_798561: /* 798561: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 798564: mov edx, dword ptr [edi + 0x384] */
  edx = R32((uint32_t)(edi + 0x384u));
/* 79856a: cmp edx, dword ptr [eax + 0x384] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x384u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 798570: je 0x7985b9 */
  if (zf) goto L_7985b9;
L_798572: /* 798572: mov ecx, dword ptr [0xb5bd4c] */
  ecx = R32((uint32_t)(0xb5bd4cu));
/* 798578: mov eax, 0x200000 */
  eax = 0x200000u;
/* 79857d: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79857f: jne 0x7985aa */
  if (!zf) goto L_7985aa;
L_798581: /* 798581: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 798583: mov dword ptr [0xb5bd4c], ecx */
  W32((uint32_t)(0xb5bd4cu), ecx);
/* 798589: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79858b: push 0xacbe28 */
  { uint32_t v = 0xacbe28u; esp -= 4; W32(esp, v); }
/* 798590: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 798595: mov byte ptr [ebp - 4], 0x18 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x18u);
/* 798599: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79859eu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79859e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7985a1: mov dword ptr [0xb5bcf4], eax */
  W32((uint32_t)(0xb5bcf4u), eax);
/* 7985a6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7985aa: /* 7985aa: mov ecx, dword ptr [0xb5bcf4] */
  ecx = R32((uint32_t)(0xb5bcf4u));
/* 7985b0: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 7985b4: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 7985b6: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_7985b9: /* 7985b9: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7985bc: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7985bf: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 7985c2: mov edx, dword ptr [ebx + 0x520] */
  edx = R32((uint32_t)(ebx + 0x520u));
/* 7985c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7985c9: mov eax, dword ptr [edi + 0x520] */
  eax = R32((uint32_t)(edi + 0x520u));
/* 7985cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7985d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7985d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7985d2: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x7985d7u); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 7985d7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7985da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7985dc: je 0x798628 */
  if (zf) goto L_798628;
L_7985de: /* 7985de: mov eax, dword ptr [0xb5bd4c] */
  eax = R32((uint32_t)(0xb5bd4cu));
/* 7985e3: test eax, 0x400000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7985e8: jne 0x798619 */
  if (!zf) goto L_798619;
L_7985ea: /* 7985ea: mov edx, eax */
  edx = eax;
/* 7985ec: or edx, 0x400000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7985f2: mov dword ptr [0xb5bd4c], edx */
  W32((uint32_t)(0xb5bd4cu), edx);
/* 7985f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7985fa: push 0xacbe40 */
  { uint32_t v = 0xacbe40u; esp -= 4; W32(esp, v); }
/* 7985ff: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 798604: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 798608: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79860du); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79860d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 798610: mov dword ptr [0xb5bcf0], eax */
  W32((uint32_t)(0xb5bcf0u), eax);
/* 798615: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_798619: /* 798619: mov ecx, dword ptr [0xb5bcf0] */
  ecx = R32((uint32_t)(0xb5bcf0u));
/* 79861f: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 798623: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 798625: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_798628: /* 798628: mov eax, dword ptr [edi + 0x514] */
  eax = R32((uint32_t)(edi + 0x514u));
/* 79862e: cmp eax, dword ptr [ebx + 0x514] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x514u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 798634: jne 0x798652 */
  if (!zf) goto L_798652;
L_798636: /* 798636: mov ecx, dword ptr [edi + 0x518] */
  ecx = R32((uint32_t)(edi + 0x518u));
/* 79863c: cmp ecx, dword ptr [ebx + 0x518] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x518u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 798642: jne 0x798652 */
  if (!zf) goto L_798652;
L_798644: /* 798644: mov edx, dword ptr [edi + 0x51c] */
  edx = R32((uint32_t)(edi + 0x51cu));
/* 79864a: cmp edx, dword ptr [ebx + 0x51c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x51cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 798650: je 0x79869b */
  if (zf) goto L_79869b;
L_798652: /* 798652: mov eax, dword ptr [0xb5bd4c] */
  eax = R32((uint32_t)(0xb5bd4cu));
/* 798657: test eax, 0x800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79865c: jne 0x79868d */
  if (!zf) goto L_79868d;
L_79865e: /* 79865e: mov edx, eax */
  edx = eax;
/* 798660: or edx, 0x800000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 798666: mov dword ptr [0xb5bd4c], edx */
  W32((uint32_t)(0xb5bd4cu), edx);
/* 79866c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79866e: push 0xacbe5c */
  { uint32_t v = 0xacbe5cu; esp -= 4; W32(esp, v); }
/* 798673: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 798678: mov byte ptr [ebp - 4], 0x1a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1au);
/* 79867c: call 0x6cad67 */
  esp -= 4; W32(esp, 0x798681u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 798681: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 798684: mov dword ptr [0xb5bcec], eax */
  W32((uint32_t)(0xb5bcecu), eax);
/* 798689: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79868d: /* 79868d: mov eax, dword ptr [0xb5bcec] */
  eax = R32((uint32_t)(0xb5bcecu));
/* 798692: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 798696: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 798698: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79869b: /* 79869b: mov dl, byte ptr [edi + 0x358] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x358u))) & 0xffu);
/* 7986a1: cmp dl, byte ptr [ebx + 0x358] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebx + 0x358u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7986a7: je 0x7986f1 */
  if (zf) goto L_7986f1;
L_7986a9: /* 7986a9: mov ecx, dword ptr [0xb5bd4c] */
  ecx = R32((uint32_t)(0xb5bd4cu));
/* 7986af: mov eax, 0x1000000 */
  eax = 0x1000000u;
/* 7986b4: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7986b6: jne 0x7986e3 */
  if (!zf) goto L_7986e3;
L_7986b8: /* 7986b8: mov edx, ecx */
  edx = ecx;
/* 7986ba: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7986bc: mov dword ptr [0xb5bd4c], edx */
  W32((uint32_t)(0xb5bd4cu), edx);
/* 7986c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7986c4: push 0xacbe7c */
  { uint32_t v = 0xacbe7cu; esp -= 4; W32(esp, v); }
/* 7986c9: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7986ce: mov byte ptr [ebp - 4], 0x1b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1bu);
/* 7986d2: call 0x6cad67 */
  esp -= 4; W32(esp, 0x7986d7u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 7986d7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7986da: mov dword ptr [0xb5bce8], eax */
  W32((uint32_t)(0xb5bce8u), eax);
/* 7986df: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7986e3: /* 7986e3: mov eax, dword ptr [0xb5bce8] */
  eax = R32((uint32_t)(0xb5bce8u));
/* 7986e8: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 7986ec: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 7986ee: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_7986f1: /* 7986f1: mov edx, dword ptr [edi + 0x354] */
  edx = R32((uint32_t)(edi + 0x354u));
/* 7986f7: xor edx, dword ptr [ebx + 0x354] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x354u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7986fd: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 798700: je 0x79874a */
  if (zf) goto L_79874a;
L_798702: /* 798702: mov ecx, dword ptr [0xb5bd4c] */
  ecx = R32((uint32_t)(0xb5bd4cu));
/* 798708: mov eax, 0x2000000 */
  eax = 0x2000000u;
/* 79870d: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79870f: jne 0x79873c */
  if (!zf) goto L_79873c;
L_798711: /* 798711: mov edx, ecx */
  edx = ecx;
/* 798713: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 798715: mov dword ptr [0xb5bd4c], edx */
  W32((uint32_t)(0xb5bd4cu), edx);
/* 79871b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79871d: push 0xacbe98 */
  { uint32_t v = 0xacbe98u; esp -= 4; W32(esp, v); }
/* 798722: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 798727: mov byte ptr [ebp - 4], 0x1c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1cu);
/* 79872b: call 0x6cad67 */
  esp -= 4; W32(esp, 0x798730u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 798730: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 798733: mov dword ptr [0xb5bce4], eax */
  W32((uint32_t)(0xb5bce4u), eax);
/* 798738: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79873c: /* 79873c: mov eax, dword ptr [0xb5bce4] */
  eax = R32((uint32_t)(0xb5bce4u));
/* 798741: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 798745: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 798747: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79874a: /* 79874a: mov edx, dword ptr [ebx + 0x35c] */
  edx = R32((uint32_t)(ebx + 0x35cu));
/* 798750: xor edx, dword ptr [edi + 0x35c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x35cu)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 798756: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 798759: je 0x7987a3 */
  if (zf) goto L_7987a3;
L_79875b: /* 79875b: mov ecx, dword ptr [0xb5bd4c] */
  ecx = R32((uint32_t)(0xb5bd4cu));
/* 798761: mov eax, 0x4000000 */
  eax = 0x4000000u;
/* 798766: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 798768: jne 0x798795 */
  if (!zf) goto L_798795;
L_79876a: /* 79876a: mov edx, ecx */
  edx = ecx;
/* 79876c: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79876e: mov dword ptr [0xb5bd4c], edx */
  W32((uint32_t)(0xb5bd4cu), edx);
/* 798774: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 798776: push 0xacbeb4 */
  { uint32_t v = 0xacbeb4u; esp -= 4; W32(esp, v); }
/* 79877b: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 798780: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 798784: call 0x6cad67 */
  esp -= 4; W32(esp, 0x798789u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 798789: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79878c: mov dword ptr [0xb5bce0], eax */
  W32((uint32_t)(0xb5bce0u), eax);
/* 798791: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_798795: /* 798795: mov eax, dword ptr [0xb5bce0] */
  eax = R32((uint32_t)(0xb5bce0u));
/* 79879a: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79879e: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 7987a0: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_7987a3: /* 7987a3: mov edx, dword ptr [edi + 0x354] */
  edx = R32((uint32_t)(edi + 0x354u));
/* 7987a9: xor edx, dword ptr [ebx + 0x354] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x354u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7987af: test dl, 2 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7987b2: je 0x7987fc */
  if (zf) goto L_7987fc;
L_7987b4: /* 7987b4: mov ecx, dword ptr [0xb5bd4c] */
  ecx = R32((uint32_t)(0xb5bd4cu));
/* 7987ba: mov eax, 0x8000000 */
  eax = 0x8000000u;
/* 7987bf: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7987c1: jne 0x7987ee */
  if (!zf) goto L_7987ee;
L_7987c3: /* 7987c3: mov edx, ecx */
  edx = ecx;
/* 7987c5: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7987c7: mov dword ptr [0xb5bd4c], edx */
  W32((uint32_t)(0xb5bd4cu), edx);
/* 7987cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7987cf: push 0xacbec8 */
  { uint32_t v = 0xacbec8u; esp -= 4; W32(esp, v); }
/* 7987d4: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7987d9: mov byte ptr [ebp - 4], 0x1e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1eu);
/* 7987dd: call 0x6cad67 */
  esp -= 4; W32(esp, 0x7987e2u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 7987e2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7987e5: mov dword ptr [0xb5bcdc], eax */
  W32((uint32_t)(0xb5bcdcu), eax);
/* 7987ea: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7987ee: /* 7987ee: mov eax, dword ptr [0xb5bcdc] */
  eax = R32((uint32_t)(0xb5bcdcu));
/* 7987f3: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 7987f7: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 7987f9: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_7987fc: /* 7987fc: mov edx, dword ptr [edi + 0x510] */
  edx = R32((uint32_t)(edi + 0x510u));
/* 798802: cmp edx, dword ptr [ebx + 0x510] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x510u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 798808: je 0x798852 */
  if (zf) goto L_798852;
L_79880a: /* 79880a: mov ecx, dword ptr [0xb5bd4c] */
  ecx = R32((uint32_t)(0xb5bd4cu));
/* 798810: mov eax, 0x10000000 */
  eax = 0x10000000u;
/* 798815: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 798817: jne 0x798844 */
  if (!zf) goto L_798844;
L_798819: /* 798819: mov edx, ecx */
  edx = ecx;
/* 79881b: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79881d: mov dword ptr [0xb5bd4c], edx */
  W32((uint32_t)(0xb5bd4cu), edx);
/* 798823: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 798825: push 0xacbeec */
  { uint32_t v = 0xacbeecu; esp -= 4; W32(esp, v); }
/* 79882a: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 79882f: mov byte ptr [ebp - 4], 0x1f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1fu);
/* 798833: call 0x6cad67 */
  esp -= 4; W32(esp, 0x798838u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 798838: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79883b: mov dword ptr [0xb5bcd8], eax */
  W32((uint32_t)(0xb5bcd8u), eax);
/* 798840: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_798844: /* 798844: mov eax, dword ptr [0xb5bcd8] */
  eax = R32((uint32_t)(0xb5bcd8u));
/* 798849: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79884d: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 79884f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_798852: /* 798852: mov edx, dword ptr [edi + 0x390] */
  edx = R32((uint32_t)(edi + 0x390u));
/* 798858: xor edx, dword ptr [ebx + 0x390] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x390u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 79885e: test edx, 0x400000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 798864: je 0x7988ae */
  if (zf) goto L_7988ae;
L_798866: /* 798866: mov ecx, dword ptr [0xb5bd4c] */
  ecx = R32((uint32_t)(0xb5bd4cu));
/* 79886c: mov eax, 0x20000000 */
  eax = 0x20000000u;
/* 798871: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 798873: jne 0x7988a0 */
  if (!zf) goto L_7988a0;
L_798875: /* 798875: mov edx, ecx */
  edx = ecx;
/* 798877: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 798879: mov dword ptr [0xb5bd4c], edx */
  W32((uint32_t)(0xb5bd4cu), edx);
/* 79887f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 798881: push 0xacbf04 */
  { uint32_t v = 0xacbf04u; esp -= 4; W32(esp, v); }
/* 798886: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 79888b: mov byte ptr [ebp - 4], 0x20 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x20u);
/* 79888f: call 0x6cad67 */
  esp -= 4; W32(esp, 0x798894u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 798894: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 798897: mov dword ptr [0xb5bcd4], eax */
  W32((uint32_t)(0xb5bcd4u), eax);
/* 79889c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7988a0: /* 7988a0: mov eax, dword ptr [0xb5bcd4] */
  eax = R32((uint32_t)(0xb5bcd4u));
/* 7988a5: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 7988a9: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 7988ab: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_7988ae: /* 7988ae: mov edx, dword ptr [edi + 0x390] */
  edx = R32((uint32_t)(edi + 0x390u));
/* 7988b4: xor edx, dword ptr [ebx + 0x390] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x390u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7988ba: test dl, 0x20 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7988bd: je 0x798907 */
  if (zf) goto L_798907;
L_7988bf: /* 7988bf: mov ecx, dword ptr [0xb5bd4c] */
  ecx = R32((uint32_t)(0xb5bd4cu));
/* 7988c5: mov eax, 0x40000000 */
  eax = 0x40000000u;
/* 7988ca: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7988cc: jne 0x7988f9 */
  if (!zf) goto L_7988f9;
L_7988ce: /* 7988ce: mov edx, ecx */
  edx = ecx;
/* 7988d0: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 7988d2: mov dword ptr [0xb5bd4c], edx */
  W32((uint32_t)(0xb5bd4cu), edx);
/* 7988d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7988da: push 0xacbf28 */
  { uint32_t v = 0xacbf28u; esp -= 4; W32(esp, v); }
/* 7988df: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7988e4: mov byte ptr [ebp - 4], 0x21 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 7988e8: call 0x6cad67 */
  esp -= 4; W32(esp, 0x7988edu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 7988ed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7988f0: mov dword ptr [0xb5bcd0], eax */
  W32((uint32_t)(0xb5bcd0u), eax);
/* 7988f5: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7988f9: /* 7988f9: mov eax, dword ptr [0xb5bcd0] */
  eax = R32((uint32_t)(0xb5bcd0u));
/* 7988fe: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 798902: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 798904: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_798907: /* 798907: mov edx, dword ptr [edi + 0x390] */
  edx = R32((uint32_t)(edi + 0x390u));
/* 79890d: xor edx, dword ptr [ebx + 0x390] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x390u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 798913: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 798916: je 0x798960 */
  if (zf) goto L_798960;
L_798918: /* 798918: mov ecx, dword ptr [0xb5bd4c] */
  ecx = R32((uint32_t)(0xb5bd4cu));
/* 79891e: mov eax, 0x80000000 */
  eax = 0x80000000u;
/* 798923: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 798925: jne 0x798952 */
  if (!zf) goto L_798952;
L_798927: /* 798927: mov edx, ecx */
  edx = ecx;
/* 798929: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79892b: mov dword ptr [0xb5bd4c], edx */
  W32((uint32_t)(0xb5bd4cu), edx);
/* 798931: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 798933: push 0xacbf40 */
  { uint32_t v = 0xacbf40u; esp -= 4; W32(esp, v); }
/* 798938: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 79893d: mov byte ptr [ebp - 4], 0x22 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x22u);
/* 798941: call 0x6cad67 */
  esp -= 4; W32(esp, 0x798946u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 798946: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 798949: mov dword ptr [0xb5bccc], eax */
  W32((uint32_t)(0xb5bcccu), eax);
/* 79894e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_798952: /* 798952: mov eax, dword ptr [0xb5bccc] */
  eax = R32((uint32_t)(0xb5bcccu));
/* 798957: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79895b: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 79895d: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_798960: /* 798960: mov edx, dword ptr [ebx + 0x34c] */
  edx = R32((uint32_t)(ebx + 0x34cu));
/* 798966: xor edx, dword ptr [edi + 0x34c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x34cu)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 79896c: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79896f: je 0x7989b0 */
  if (zf) goto L_7989b0;
L_798971: /* 798971: test byte ptr [0xb5bcc8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bcc8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 798978: jne 0x7989a2 */
  if (!zf) goto L_7989a2;
L_79897a: /* 79897a: or dword ptr [0xb5bcc8], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bcc8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bcc8u), r);
  }
/* 798981: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 798983: push 0xacbf58 */
  { uint32_t v = 0xacbf58u; esp -= 4; W32(esp, v); }
/* 798988: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 79898d: mov byte ptr [ebp - 4], 0x23 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x23u);
/* 798991: call 0x6cad67 */
  esp -= 4; W32(esp, 0x798996u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 798996: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 798999: mov dword ptr [0xb5bcc4], eax */
  W32((uint32_t)(0xb5bcc4u), eax);
/* 79899e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7989a2: /* 7989a2: mov eax, dword ptr [0xb5bcc4] */
  eax = R32((uint32_t)(0xb5bcc4u));
/* 7989a7: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 7989ab: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 7989ad: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_7989b0: /* 7989b0: mov edx, dword ptr [ebx + 0x394] */
  edx = R32((uint32_t)(ebx + 0x394u));
/* 7989b6: xor edx, dword ptr [edi + 0x394] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x394u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 7989bc: test edx, 0x800000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7989c2: je 0x798a03 */
  if (zf) goto L_798a03;
L_7989c4: /* 7989c4: test byte ptr [0xb5bcc8], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bcc8u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7989cb: jne 0x7989f5 */
  if (!zf) goto L_7989f5;
L_7989cd: /* 7989cd: or dword ptr [0xb5bcc8], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bcc8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bcc8u), r);
  }
/* 7989d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7989d6: push 0xacbf70 */
  { uint32_t v = 0xacbf70u; esp -= 4; W32(esp, v); }
/* 7989db: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 7989e0: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 7989e4: call 0x6cad67 */
  esp -= 4; W32(esp, 0x7989e9u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 7989e9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7989ec: mov dword ptr [0xb5bcc0], eax */
  W32((uint32_t)(0xb5bcc0u), eax);
/* 7989f1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7989f5: /* 7989f5: mov eax, dword ptr [0xb5bcc0] */
  eax = R32((uint32_t)(0xb5bcc0u));
/* 7989fa: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 7989fe: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 798a00: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_798a03: /* 798a03: mov edx, dword ptr [edi + 0x480] */
  edx = R32((uint32_t)(edi + 0x480u));
/* 798a09: cmp edx, dword ptr [ebx + 0x480] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x480u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 798a0f: je 0x798a50 */
  if (zf) goto L_798a50;
L_798a11: /* 798a11: test byte ptr [0xb5bcc8], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bcc8u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 798a18: jne 0x798a42 */
  if (!zf) goto L_798a42;
L_798a1a: /* 798a1a: or dword ptr [0xb5bcc8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bcc8u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bcc8u), r);
  }
/* 798a21: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 798a23: push 0xacbf84 */
  { uint32_t v = 0xacbf84u; esp -= 4; W32(esp, v); }
/* 798a28: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 798a2d: mov byte ptr [ebp - 4], 0x25 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x25u);
/* 798a31: call 0x6cad67 */
  esp -= 4; W32(esp, 0x798a36u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 798a36: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 798a39: mov dword ptr [0xb5bcbc], eax */
  W32((uint32_t)(0xb5bcbcu), eax);
/* 798a3e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_798a42: /* 798a42: mov eax, dword ptr [0xb5bcbc] */
  eax = R32((uint32_t)(0xb5bcbcu));
/* 798a47: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 798a4b: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 798a4d: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_798a50: /* 798a50: mov dl, byte ptr [edi + 0x350] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x350u))) & 0xffu);
/* 798a56: cmp dl, byte ptr [ebx + 0x350] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebx + 0x350u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 798a5c: je 0x798a9d */
  if (zf) goto L_798a9d;
L_798a5e: /* 798a5e: test byte ptr [0xb5bcc8], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bcc8u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 798a65: jne 0x798a8f */
  if (!zf) goto L_798a8f;
L_798a67: /* 798a67: or dword ptr [0xb5bcc8], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bcc8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bcc8u), r);
  }
/* 798a6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 798a70: push 0xacbf98 */
  { uint32_t v = 0xacbf98u; esp -= 4; W32(esp, v); }
/* 798a75: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 798a7a: mov byte ptr [ebp - 4], 0x26 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x26u);
/* 798a7e: call 0x6cad67 */
  esp -= 4; W32(esp, 0x798a83u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 798a83: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 798a86: mov dword ptr [0xb5bcb8], eax */
  W32((uint32_t)(0xb5bcb8u), eax);
/* 798a8b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_798a8f: /* 798a8f: mov eax, dword ptr [0xb5bcb8] */
  eax = R32((uint32_t)(0xb5bcb8u));
/* 798a94: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 798a98: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 798a9a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_798a9d: /* 798a9d: test byte ptr [edi + 0x84], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x84u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 798aa4: jne 0x797d44 */
  if (!zf) goto L_797d44;
L_798aaa: /* 798aaa: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 798aad: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 798ab0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 798ab1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 798ab2: add ebx, 0x524 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x524u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 798ab8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 798ab9: add edi, 0x524 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x524u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 798abf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 798ac0: call 0x6cc21b */
  esp -= 4; W32(esp, 0x798ac5u); SPILL(); f_6cc21b(); if (g_unwind) return; RELOAD();
/* 798ac5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 798ac8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 798aca: je 0x797d44 */
  if (zf) goto L_797d44;
L_798ad0: /* 798ad0: test byte ptr [0xb5bcc8], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bcc8u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 798ad7: jne 0x798afd */
  if (!zf) goto L_798afd;
L_798ad9: /* 798ad9: or dword ptr [0xb5bcc8], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bcc8u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bcc8u), r);
  }
/* 798ae0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 798ae2: push 0xacbfbc */
  { uint32_t v = 0xacbfbcu; esp -= 4; W32(esp, v); }
/* 798ae7: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 798aec: mov byte ptr [ebp - 4], 0x27 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x27u);
/* 798af0: call 0x6cad67 */
  esp -= 4; W32(esp, 0x798af5u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 798af5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 798af8: mov dword ptr [0xb5bcb4], eax */
  W32((uint32_t)(0xb5bcb4u), eax);
L_798afd: /* 798afd: mov ecx, dword ptr [0xb5bcb4] */
  ecx = R32((uint32_t)(0xb5bcb4u));
/* 798b03: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 798b07: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 798b09: jmp 0x797d41 */
  goto L_797d41;
}

void f_798b0e(void) {
  LOAD_REGS();
L_798b0e: /* 798b0e: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 798b11: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 798b16: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 798b19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 798b1a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 798b1d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x798b22u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_798b22(); return;
}

void f_798b22(void) {
  LOAD_REGS();
L_798b22: /* 798b22: push 0xa0a918 */
  { uint32_t v = 0xa0a918u; esp -= 4; W32(esp, v); }
/* 798b27: push 0xacbfdc */
  { uint32_t v = 0xacbfdcu; esp -= 4; W32(esp, v); }
/* 798b2c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x798b32u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 798b32: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 798b35: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 798b37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 798b39: call 0x99caf8 */
  esp -= 4; W32(esp, 0x798b3eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_798b3e: guest_badaddr(0x798b3e); return;
}

void f_798f60(void) {
  LOAD_REGS();
L_798f60: /* 798f60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 798f61: mov ebp, esp */
  ebp = esp;
/* 798f63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 798f65: push 0x9cd884 */
  { uint32_t v = 0x9cd884u; esp -= 4; W32(esp, v); }
/* 798f6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 798f70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 798f71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 798f78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 798f7b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 798f7e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 798f81: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 798f82: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 798f83: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 798f86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 798f87: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 798f8a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 798f8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 798f8e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 798f8f: mov ebx, ecx */
  ebx = ecx;
/* 798f91: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 798f94: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 798f95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 798f96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 798f97: mov ecx, ebx */
  ecx = ebx;
/* 798f99: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 798fa0: call 0x6c1aaa */
  esp -= 4; W32(esp, 0x798fa5u); SPILL(); f_6c1aaa(); if (g_unwind) return; RELOAD();
/* 798fa5: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 798fa8: mov eax, dword ptr [0xb6a310] */
  eax = R32((uint32_t)(0xb6a310u));
/* 798fad: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 798fb0: je 0x7992a7 */
  if (zf) goto L_7992a7;
L_798fb6: /* 798fb6: mov eax, dword ptr [ebx + 0x80] */
  eax = R32((uint32_t)(ebx + 0x80u));
/* 798fbc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 798fbe: jns 0x799111 */
  if (!sf) goto L_799111;
L_798fc4: /* 798fc4: cmp byte ptr [ebx + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 798fcb: jne 0x799111 */
  if (!zf) goto L_799111;
L_798fd1: /* 798fd1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 798fd4: mov ecx, dword ptr [eax + 0x448] */
  ecx = R32((uint32_t)(eax + 0x448u));
/* 798fda: mov edx, dword ptr [ebx + 0x448] */
  edx = R32((uint32_t)(ebx + 0x448u));
/* 798fe0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 798fe1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 798fe2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 798fe3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 798fe4: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x798fe9u); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 798fe9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 798fec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 798fee: je 0x799035 */
  if (zf) goto L_799035;
L_798ff0: /* 798ff0: test byte ptr [0xb5bd68], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bd68u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 798ff7: jne 0x799021 */
  if (!zf) goto L_799021;
L_798ff9: /* 798ff9: or dword ptr [0xb5bd68], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bd68u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bd68u), r);
  }
/* 799000: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 799002: push 0xacbfe4 */
  { uint32_t v = 0xacbfe4u; esp -= 4; W32(esp, v); }
/* 799007: push 0xb69e78 */
  { uint32_t v = 0xb69e78u; esp -= 4; W32(esp, v); }
/* 79900c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 799010: call 0x6cad67 */
  esp -= 4; W32(esp, 0x799015u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 799015: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799018: mov dword ptr [0xb5bd64], eax */
  W32((uint32_t)(0xb5bd64u), eax);
/* 79901d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_799021: /* 799021: mov eax, dword ptr [0xb5bd64] */
  eax = R32((uint32_t)(0xb5bd64u));
/* 799026: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79902a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79902d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79902f: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 799032: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_799035: /* 799035: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 799038: mov eax, dword ptr [edx + 0x33c] */
  eax = R32((uint32_t)(edx + 0x33cu));
/* 79903e: mov ecx, dword ptr [ebx + 0x33c] */
  ecx = R32((uint32_t)(ebx + 0x33cu));
/* 799044: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 799045: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 799046: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 799047: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 799048: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x79904du); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 79904d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799050: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 799052: je 0x79909e */
  if (zf) goto L_79909e;
L_799054: /* 799054: mov cl, byte ptr [0xb5bd68] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bd68u))) & 0xffu);
/* 79905a: mov eax, 2 */
  eax = 0x2u;
/* 79905f: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 799061: jne 0x799089 */
  if (!zf) goto L_799089;
L_799063: /* 799063: or dword ptr [0xb5bd68], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bd68u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bd68u), r);
  }
/* 799069: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79906b: push 0xacc010 */
  { uint32_t v = 0xacc010u; esp -= 4; W32(esp, v); }
/* 799070: push 0xb69e78 */
  { uint32_t v = 0xb69e78u; esp -= 4; W32(esp, v); }
/* 799075: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 799078: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79907du); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79907d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799080: mov dword ptr [0xb5bd60], eax */
  W32((uint32_t)(0xb5bd60u), eax);
/* 799085: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_799089: /* 799089: mov edx, dword ptr [0xb5bd60] */
  edx = R32((uint32_t)(0xb5bd60u));
/* 79908f: movzx ecx, word ptr [edx + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 799093: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 799096: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 799098: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79909b: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_79909e: /* 79909e: test dword ptr [ebx + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7990a8: je 0x799111 */
  if (zf) goto L_799111;
L_7990aa: /* 7990aa: mov eax, dword ptr [ebx + 0x44c] */
  eax = R32((uint32_t)(ebx + 0x44cu));
/* 7990b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7990b1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7990b4: mov edx, dword ptr [esi + 0x44c] */
  edx = R32((uint32_t)(esi + 0x44cu));
/* 7990ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7990bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7990bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7990bd: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x7990c2u); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 7990c2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7990c5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7990c7: je 0x799114 */
  if (zf) goto L_799114;
L_7990c9: /* 7990c9: test byte ptr [0xb5bd68], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bd68u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7990d0: jne 0x7990fa */
  if (!zf) goto L_7990fa;
L_7990d2: /* 7990d2: or dword ptr [0xb5bd68], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bd68u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bd68u), r);
  }
/* 7990d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7990db: push 0xacc01c */
  { uint32_t v = 0xacc01cu; esp -= 4; W32(esp, v); }
/* 7990e0: push 0xb69e78 */
  { uint32_t v = 0xb69e78u; esp -= 4; W32(esp, v); }
/* 7990e5: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 7990e9: call 0x6cad67 */
  esp -= 4; W32(esp, 0x7990eeu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 7990ee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7990f1: mov dword ptr [0xb5bd5c], eax */
  W32((uint32_t)(0xb5bd5cu), eax);
/* 7990f6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7990fa: /* 7990fa: mov ecx, dword ptr [0xb5bd5c] */
  ecx = R32((uint32_t)(0xb5bd5cu));
/* 799100: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 799104: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 799107: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 799109: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79910c: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 79910f: jmp 0x799114 */
  goto L_799114;
L_799111: /* 799111: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_799114: /* 799114: test dword ptr [ebx + 0x88], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x88u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79911e: je 0x7992a7 */
  if (zf) goto L_7992a7;
L_799124: /* 799124: mov eax, dword ptr [ebx + 0x17c] */
  eax = R32((uint32_t)(ebx + 0x17cu));
/* 79912a: cmp eax, dword ptr [esi + 0x17c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x17cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 799130: jne 0x79914e */
  if (!zf) goto L_79914e;
L_799132: /* 799132: mov ecx, dword ptr [ebx + 0x180] */
  ecx = R32((uint32_t)(ebx + 0x180u));
/* 799138: cmp ecx, dword ptr [esi + 0x180] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x180u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79913e: jne 0x79914e */
  if (!zf) goto L_79914e;
L_799140: /* 799140: mov edx, dword ptr [ebx + 0x184] */
  edx = R32((uint32_t)(ebx + 0x184u));
/* 799146: cmp edx, dword ptr [esi + 0x184] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x184u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79914c: je 0x7991a0 */
  if (zf) goto L_7991a0;
L_79914e: /* 79914e: mov cl, byte ptr [0xb5bd68] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bd68u))) & 0xffu);
/* 799154: mov eax, 8 */
  eax = 0x8u;
/* 799159: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79915b: jne 0x79918c */
  if (!zf) goto L_79918c;
L_79915d: /* 79915d: or dword ptr [0xb5bd68], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bd68u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bd68u), r);
  }
/* 799163: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 799167: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79916du); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79916d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79916f: push 0xacc030 */
  { uint32_t v = 0xacc030u; esp -= 4; W32(esp, v); }
/* 799174: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 799179: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79917a: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x799180u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 799180: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799183: mov dword ptr [0xb5bd58], eax */
  W32((uint32_t)(0xb5bd58u), eax);
/* 799188: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79918c: /* 79918c: mov eax, dword ptr [0xb5bd58] */
  eax = R32((uint32_t)(0xb5bd58u));
/* 799191: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 799195: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 799198: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79919a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79919d: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_7991a0: /* 7991a0: mov edi, dword ptr [esi + 0x33c] */
  edi = R32((uint32_t)(esi + 0x33cu));
/* 7991a6: mov esi, dword ptr [ebx + 0x33c] */
  esi = R32((uint32_t)(ebx + 0x33cu));
/* 7991ac: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7991af: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7991b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7991b2: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x7991b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7991b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7991b7: je 0x7991bf */
  if (zf) goto L_7991bf;
L_7991b9: /* 7991b9: xor eax, eax */
  eax = 0;
/* 7991bb: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7991bd: jmp 0x7991d0 */
  goto L_7991d0;
L_7991bf: /* 7991bf: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7991c2: mov dword ptr [eax + 0x90], 1 */
  W32((uint32_t)(eax + 0x90u), 0x1u);
/* 7991cc: xor eax, eax */
  eax = 0;
/* 7991ce: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_7991d0: /* 7991d0: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 7991d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7991d5: je 0x79922a */
  if (zf) goto L_79922a;
L_7991d7: /* 7991d7: mov cl, byte ptr [0xb5bd68] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bd68u))) & 0xffu);
/* 7991dd: mov eax, 0x10 */
  eax = 0x10u;
/* 7991e2: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7991e4: jne 0x799215 */
  if (!zf) goto L_799215;
L_7991e6: /* 7991e6: or dword ptr [0xb5bd68], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bd68u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bd68u), r);
  }
/* 7991ec: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7991f0: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x7991f6u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 7991f6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7991f8: push 0xacc044 */
  { uint32_t v = 0xacc044u; esp -= 4; W32(esp, v); }
/* 7991fd: push 0xb69e78 */
  { uint32_t v = 0xb69e78u; esp -= 4; W32(esp, v); }
/* 799202: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 799203: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x799209u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 799209: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79920c: mov dword ptr [0xb5bd54], eax */
  W32((uint32_t)(0xb5bd54u), eax);
/* 799211: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_799215: /* 799215: mov ecx, dword ptr [0xb5bd54] */
  ecx = R32((uint32_t)(0xb5bd54u));
/* 79921b: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79921f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 799222: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 799224: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 799227: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_79922a: /* 79922a: cmp byte ptr [ebx + 0x90], 3 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x90u))); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 799231: jne 0x7992a7 */
  if (!zf) goto L_7992a7;
L_799233: /* 799233: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 799236: mov ecx, dword ptr [ebx + 0x170] */
  ecx = R32((uint32_t)(ebx + 0x170u));
/* 79923c: cmp ecx, dword ptr [eax + 0x170] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x170u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 799242: jne 0x799260 */
  if (!zf) goto L_799260;
L_799244: /* 799244: mov edx, dword ptr [ebx + 0x174] */
  edx = R32((uint32_t)(ebx + 0x174u));
/* 79924a: cmp edx, dword ptr [eax + 0x174] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x174u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 799250: jne 0x799260 */
  if (!zf) goto L_799260;
L_799252: /* 799252: mov ecx, dword ptr [ebx + 0x178] */
  ecx = R32((uint32_t)(ebx + 0x178u));
/* 799258: cmp ecx, dword ptr [eax + 0x178] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x178u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79925e: je 0x7992a7 */
  if (zf) goto L_7992a7;
L_799260: /* 799260: mov cl, byte ptr [0xb5bd68] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bd68u))) & 0xffu);
/* 799266: mov eax, 0x20 */
  eax = 0x20u;
/* 79926b: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79926d: jne 0x799292 */
  if (!zf) goto L_799292;
L_79926f: /* 79926f: or dword ptr [0xb5bd68], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bd68u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bd68u), r);
  }
/* 799275: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 799277: push 0xacc050 */
  { uint32_t v = 0xacc050u; esp -= 4; W32(esp, v); }
/* 79927c: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 799281: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 799285: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79928au); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79928a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79928d: mov dword ptr [0xb5bd50], eax */
  W32((uint32_t)(0xb5bd50u), eax);
L_799292: /* 799292: mov edx, dword ptr [0xb5bd50] */
  edx = R32((uint32_t)(0xb5bd50u));
/* 799298: movzx ecx, word ptr [edx + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79929c: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79929f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 7992a1: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7992a4: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_7992a7: /* 7992a7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7992aa: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 7992ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7992ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7992af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7992b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7992b7: mov esp, ebp */
  esp = ebp;
/* 7992b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7992ba: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7992bd(void) {
  LOAD_REGS();
L_7992bd: /* 7992bd: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7992c0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7992c5: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7992c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7992c9: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7992cc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7992d1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7992d1(); return;
}

void f_7992d1(void) {
  LOAD_REGS();
L_7992d1: /* 7992d1: push 0xa0a968 */
  { uint32_t v = 0xa0a968u; esp -= 4; W32(esp, v); }
/* 7992d6: push 0xacc064 */
  { uint32_t v = 0xacc064u; esp -= 4; W32(esp, v); }
/* 7992db: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7992e1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7992e1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7992e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7992e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7992e8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7992edu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7992ed: guest_badaddr(0x7992ed); return;
}

void f_7993e0(void) {
  LOAD_REGS();
L_7993e0: /* 7993e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7993e1: mov ebp, esp */
  ebp = esp;
/* 7993e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7993e5: push 0x9cd8ff */
  { uint32_t v = 0x9cd8ffu; esp -= 4; W32(esp, v); }
/* 7993ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7993f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7993f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7993f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7993fb: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7993fe: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 799401: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 799402: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 799405: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 799406: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 799407: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79940a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79940b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 79940e: mov esi, ecx */
  esi = ecx;
/* 799410: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 799413: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 799414: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 799415: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 799416: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 799417: mov ecx, esi */
  ecx = esi;
/* 799419: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 799420: call 0x6c1d2a */
  esp -= 4; W32(esp, 0x799425u); SPILL(); f_6c1d2a(); if (g_unwind) return; RELOAD();
/* 799425: mov edi, eax */
  edi = eax;
/* 799427: mov eax, dword ptr [0xb6ad70] */
  eax = R32((uint32_t)(0xb6ad70u));
/* 79942c: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79942f: je 0x799692 */
  if (zf) goto L_799692;
L_799435: /* 799435: test dword ptr [esi + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79943f: je 0x799692 */
  if (zf) goto L_799692;
L_799445: /* 799445: cmp byte ptr [esi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79944c: jne 0x799692 */
  if (!zf) goto L_799692;
L_799452: /* 799452: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 799458: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 79945a: jns 0x79954b */
  if (!sf) goto L_79954b;
L_799460: /* 799460: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 799463: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 799466: mov eax, dword ptr [ebx + 0x704] */
  eax = R32((uint32_t)(ebx + 0x704u));
/* 79946c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79946d: mov ecx, dword ptr [esi + 0x704] */
  ecx = R32((uint32_t)(esi + 0x704u));
/* 799473: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 799474: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 799475: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 799476: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x79947bu); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 79947b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79947e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 799480: je 0x7994c6 */
  if (zf) goto L_7994c6;
L_799482: /* 799482: mov cl, byte ptr [0xb5bd80] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bd80u))) & 0xffu);
/* 799488: mov eax, 1 */
  eax = 0x1u;
/* 79948d: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79948f: jne 0x7994b7 */
  if (!zf) goto L_7994b7;
L_799491: /* 799491: or dword ptr [0xb5bd80], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bd80u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bd80u), r);
  }
/* 799497: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 799499: push 0xacc06c */
  { uint32_t v = 0xacc06cu; esp -= 4; W32(esp, v); }
/* 79949e: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 7994a3: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 7994a6: call 0x6cad67 */
  esp -= 4; W32(esp, 0x7994abu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 7994ab: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7994ae: mov dword ptr [0xb5bd7c], eax */
  W32((uint32_t)(0xb5bd7cu), eax);
/* 7994b3: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7994b7: /* 7994b7: mov edx, dword ptr [0xb5bd7c] */
  edx = R32((uint32_t)(0xb5bd7cu));
/* 7994bd: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 7994c1: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 7994c3: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7994c6: /* 7994c6: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 7994c9: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 7994cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7994cd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7994ce: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7994d1: lea eax, [ebx + 0x4b4] */
  eax = (uint32_t)(ebx + 0x4b4u);
/* 7994d7: mov ecx, esp */
  ecx = esp;
/* 7994d9: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 7994dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7994dd: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7994e3u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7994e3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7994e6: lea edx, [esi + 0x4b4] */
  edx = (uint32_t)(esi + 0x4b4u);
/* 7994ec: mov ecx, esp */
  ecx = esp;
/* 7994ee: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 7994f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7994f2: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 7994f6: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x7994fcu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 7994fc: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 799500: call 0x6cc865 */
  esp -= 4; W32(esp, 0x799505u); SPILL(); f_6cc865(); if (g_unwind) return; RELOAD();
/* 799505: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799508: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79950a: je 0x79954b */
  if (zf) goto L_79954b;
L_79950c: /* 79950c: test byte ptr [0xb5bd80], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bd80u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 799513: jne 0x79953d */
  if (!zf) goto L_79953d;
L_799515: /* 799515: or dword ptr [0xb5bd80], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bd80u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bd80u), r);
  }
/* 79951c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79951e: push 0xacc094 */
  { uint32_t v = 0xacc094u; esp -= 4; W32(esp, v); }
/* 799523: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 799528: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 79952c: call 0x6cad67 */
  esp -= 4; W32(esp, 0x799531u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 799531: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799534: mov dword ptr [0xb5bd78], eax */
  W32((uint32_t)(0xb5bd78u), eax);
/* 799539: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79953d: /* 79953d: mov eax, dword ptr [0xb5bd78] */
  eax = R32((uint32_t)(0xb5bd78u));
/* 799542: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 799546: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 799548: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_79954b: /* 79954b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 79954d: mov ecx, esi */
  ecx = esi;
/* 79954f: call dword ptr [edx + 0x194] */
  { uint32_t t = R32((uint32_t)(edx + 0x194u)); esp -= 4; W32(esp, 0x799555u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 799555: cmp eax, dword ptr [esi + 0x33c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x33cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79955b: je 0x799692 */
  if (zf) goto L_799692;
L_799561: /* 799561: mov ecx, dword ptr [esi + 0x548] */
  ecx = R32((uint32_t)(esi + 0x548u));
/* 799567: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 79956c: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x799572u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 799572: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 799574: je 0x799692 */
  if (zf) goto L_799692;
L_79957a: /* 79957a: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 79957d: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 799580: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 799581: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 799582: lea edx, [ebx + 0x620] */
  edx = (uint32_t)(ebx + 0x620u);
/* 799588: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 799589: lea eax, [esi + 0x620] */
  eax = (uint32_t)(esi + 0x620u);
/* 79958f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 799590: call 0x6c6aff */
  esp -= 4; W32(esp, 0x799595u); SPILL(); f_6c6aff(); if (g_unwind) return; RELOAD();
/* 799595: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799598: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79959a: je 0x7995dc */
  if (zf) goto L_7995dc;
L_79959c: /* 79959c: test byte ptr [0xb5bd80], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bd80u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7995a3: jne 0x7995cd */
  if (!zf) goto L_7995cd;
L_7995a5: /* 7995a5: or dword ptr [0xb5bd80], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bd80u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bd80u), r);
  }
/* 7995ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7995ae: push 0xacc0b8 */
  { uint32_t v = 0xacc0b8u; esp -= 4; W32(esp, v); }
/* 7995b3: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 7995b8: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 7995bc: call 0x6cad67 */
  esp -= 4; W32(esp, 0x7995c1u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 7995c1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7995c4: mov dword ptr [0xb5bd74], eax */
  W32((uint32_t)(0xb5bd74u), eax);
/* 7995c9: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7995cd: /* 7995cd: mov ecx, dword ptr [0xb5bd74] */
  ecx = R32((uint32_t)(0xb5bd74u));
/* 7995d3: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 7995d7: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 7995d9: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7995dc: /* 7995dc: mov eax, dword ptr [esi + 0x638] */
  eax = R32((uint32_t)(esi + 0x638u));
/* 7995e2: cmp eax, dword ptr [ebx + 0x638] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x638u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7995e8: je 0x79962f */
  if (zf) goto L_79962f;
L_7995ea: /* 7995ea: mov cl, byte ptr [0xb5bd80] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bd80u))) & 0xffu);
/* 7995f0: mov eax, 8 */
  eax = 0x8u;
/* 7995f5: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7995f7: jne 0x799620 */
  if (!zf) goto L_799620;
L_7995f9: /* 7995f9: or dword ptr [0xb5bd80], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bd80u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bd80u), r);
  }
/* 7995ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 799601: push 0xacc0e0 */
  { uint32_t v = 0xacc0e0u; esp -= 4; W32(esp, v); }
/* 799606: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 79960b: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 79960f: call 0x6cad67 */
  esp -= 4; W32(esp, 0x799614u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 799614: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799617: mov dword ptr [0xb5bd70], eax */
  W32((uint32_t)(0xb5bd70u), eax);
/* 79961c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_799620: /* 799620: mov ecx, dword ptr [0xb5bd70] */
  ecx = R32((uint32_t)(0xb5bd70u));
/* 799626: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79962a: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 79962c: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_79962f: /* 79962f: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 799632: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 799635: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 799636: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 799637: add ebx, 0x63c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x63cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 79963d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79963e: add esi, 0x63c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x63cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 799644: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 799645: call 0x6cc21b */
  esp -= 4; W32(esp, 0x79964au); SPILL(); f_6cc21b(); if (g_unwind) return; RELOAD();
/* 79964a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79964d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79964f: je 0x799692 */
  if (zf) goto L_799692;
L_799651: /* 799651: mov cl, byte ptr [0xb5bd80] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bd80u))) & 0xffu);
/* 799657: mov eax, 0x10 */
  eax = 0x10u;
/* 79965c: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79965e: jne 0x799683 */
  if (!zf) goto L_799683;
L_799660: /* 799660: or dword ptr [0xb5bd80], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bd80u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bd80u), r);
  }
/* 799666: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 799668: push 0xacc100 */
  { uint32_t v = 0xacc100u; esp -= 4; W32(esp, v); }
/* 79966d: push 0xb6a8d8 */
  { uint32_t v = 0xb6a8d8u; esp -= 4; W32(esp, v); }
/* 799672: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 799676: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79967bu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79967b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79967e: mov dword ptr [0xb5bd6c], eax */
  W32((uint32_t)(0xb5bd6cu), eax);
L_799683: /* 799683: mov edx, dword ptr [0xb5bd6c] */
  edx = R32((uint32_t)(0xb5bd6cu));
/* 799689: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79968d: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 79968f: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_799692: /* 799692: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 799695: mov eax, edi */
  eax = edi;
/* 799697: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 799698: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 799699: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7996a0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7996a1: mov esp, ebp */
  esp = ebp;
/* 7996a3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7996a4: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_7996a7(void) {
  LOAD_REGS();
L_7996a7: /* 7996a7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7996aa: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7996af: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 7996b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7996b3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 7996b6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7996bbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7996bb(); return;
}

void f_7996bb(void) {
  LOAD_REGS();
L_7996bb: /* 7996bb: push 0xa0a9b8 */
  { uint32_t v = 0xa0a9b8u; esp -= 4; W32(esp, v); }
/* 7996c0: push 0xacc130 */
  { uint32_t v = 0xacc130u; esp -= 4; W32(esp, v); }
/* 7996c5: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7996cbu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7996cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7996ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7996d0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7996d2: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7996d7u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7996d7: guest_badaddr(0x7996d7); return;
}

void f_7997a0(void) {
  LOAD_REGS();
L_7997a0: /* 7997a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7997a1: mov ebp, esp */
  ebp = esp;
/* 7997a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7997a5: push 0x9cd9c2 */
  { uint32_t v = 0x9cd9c2u; esp -= 4; W32(esp, v); }
/* 7997aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7997b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7997b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7997b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 7997bb: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 7997be: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 7997c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7997c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7997c3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7997c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7997c7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7997ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7997cb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7997ce: mov ebx, ecx */
  ebx = ecx;
/* 7997d0: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 7997d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7997d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7997d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7997d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7997d7: mov ecx, ebx */
  ecx = ebx;
/* 7997d9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7997e0: call 0x6c1aaa */
  esp -= 4; W32(esp, 0x7997e5u); SPILL(); f_6c1aaa(); if (g_unwind) return; RELOAD();
/* 7997e5: mov edi, eax */
  edi = eax;
/* 7997e7: mov eax, dword ptr [0xcc5a20] */
  eax = R32((uint32_t)(0xcc5a20u));
/* 7997ec: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7997ef: je 0x799c89 */
  if (zf) goto L_799c89;
L_7997f5: /* 7997f5: cmp byte ptr [ebx + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 7997fc: jne 0x799c0f */
  if (!zf) goto L_799c0f;
L_799802: /* 799802: mov ecx, dword ptr [ebx + 0x658] */
  ecx = R32((uint32_t)(ebx + 0x658u));
/* 799808: cmp ecx, dword ptr [esi + 0x658] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x658u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79980e: jne 0x79982c */
  if (!zf) goto L_79982c;
L_799810: /* 799810: mov edx, dword ptr [ebx + 0x65c] */
  edx = R32((uint32_t)(ebx + 0x65cu));
/* 799816: cmp edx, dword ptr [esi + 0x65c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x65cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79981c: jne 0x79982c */
  if (!zf) goto L_79982c;
L_79981e: /* 79981e: mov eax, dword ptr [ebx + 0x660] */
  eax = R32((uint32_t)(ebx + 0x660u));
/* 799824: cmp eax, dword ptr [esi + 0x660] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x660u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79982a: je 0x79988f */
  if (zf) goto L_79988f;
L_79982c: /* 79982c: mov cl, byte ptr [0xb5bdb0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bdb0u))) & 0xffu);
/* 799832: mov eax, 1 */
  eax = 0x1u;
/* 799837: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 799839: jne 0x799878 */
  if (!zf) goto L_799878;
L_79983b: /* 79983b: or dword ptr [0xb5bdb0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bdb0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bdb0u), r);
  }
/* 799841: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 799844: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79984au); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79984a: mov esi, dword ptr [0xcfa5f8] */
  esi = R32((uint32_t)(0xcfa5f8u));
/* 799850: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 799852: push 0xacc138 */
  { uint32_t v = 0xacc138u; esp -= 4; W32(esp, v); }
/* 799857: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 79985c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79985d: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x79985fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79985f: mov ecx, eax */
  ecx = eax;
/* 799861: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 799865: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799868: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 79986a: mov dword ptr [0xb5bdac], eax */
  W32((uint32_t)(0xb5bdacu), eax);
/* 79986f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 799873: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 799876: jmp 0x799895 */
  goto L_799895;
L_799878: /* 799878: mov ecx, dword ptr [0xb5bdac] */
  ecx = R32((uint32_t)(0xb5bdacu));
/* 79987e: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 799882: mov esi, dword ptr [0xcfa5f8] */
  esi = R32((uint32_t)(0xcfa5f8u));
/* 799888: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 79988a: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 79988d: jmp 0x799895 */
  goto L_799895;
L_79988f: /* 79988f: mov esi, dword ptr [0xcfa5f8] */
  esi = R32((uint32_t)(0xcfa5f8u));
L_799895: /* 799895: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 799898: mov ecx, dword ptr [ebx + 0x664] */
  ecx = R32((uint32_t)(ebx + 0x664u));
/* 79989e: cmp ecx, dword ptr [eax + 0x664] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x664u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7998a4: je 0x7998f1 */
  if (zf) goto L_7998f1;
L_7998a6: /* 7998a6: mov dl, byte ptr [0xb5bdb0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bdb0u))) & 0xffu);
/* 7998ac: mov ecx, 2 */
  ecx = 0x2u;
/* 7998b1: test cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7998b3: jne 0x7998e2 */
  if (!zf) goto L_7998e2;
L_7998b5: /* 7998b5: or dword ptr [0xb5bdb0], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bdb0u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bdb0u), r);
  }
/* 7998bb: mov byte ptr [ebp - 4], cl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ecx & 0xffu));
/* 7998be: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x7998c4u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 7998c4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7998c6: push 0xacc14c */
  { uint32_t v = 0xacc14cu; esp -= 4; W32(esp, v); }
/* 7998cb: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7998d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7998d1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7998d3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7998d3: mov dword ptr [0xb5bda8], eax */
  W32((uint32_t)(0xb5bda8u), eax);
/* 7998d8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7998db: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7998de: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_7998e2: /* 7998e2: mov edx, dword ptr [0xb5bda8] */
  edx = R32((uint32_t)(0xb5bda8u));
/* 7998e8: movzx ecx, word ptr [edx + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 7998ec: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 7998ee: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_7998f1: /* 7998f1: mov edx, dword ptr [ebx + 0x668] */
  edx = R32((uint32_t)(ebx + 0x668u));
/* 7998f7: cmp edx, dword ptr [eax + 0x668] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x668u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7998fd: je 0x799946 */
  if (zf) goto L_799946;
L_7998ff: /* 7998ff: test byte ptr [0xb5bdb0], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bdb0u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 799906: jne 0x799937 */
  if (!zf) goto L_799937;
L_799908: /* 799908: or dword ptr [0xb5bdb0], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bdb0u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bdb0u), r);
  }
/* 79990f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 799913: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x799919u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 799919: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79991b: push 0xacc16c */
  { uint32_t v = 0xacc16cu; esp -= 4; W32(esp, v); }
/* 799920: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 799925: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 799926: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x799928u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 799928: mov dword ptr [0xb5bda4], eax */
  W32((uint32_t)(0xb5bda4u), eax);
/* 79992d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 799930: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799933: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_799937: /* 799937: mov ecx, dword ptr [0xb5bda4] */
  ecx = R32((uint32_t)(0xb5bda4u));
/* 79993d: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 799941: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 799943: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_799946: /* 799946: mov ecx, dword ptr [ebx + 0x66c] */
  ecx = R32((uint32_t)(ebx + 0x66cu));
/* 79994c: cmp ecx, dword ptr [eax + 0x66c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x66cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 799952: je 0x79999b */
  if (zf) goto L_79999b;
L_799954: /* 799954: test byte ptr [0xb5bdb0], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bdb0u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79995b: jne 0x79998c */
  if (!zf) goto L_79998c;
L_79995d: /* 79995d: or dword ptr [0xb5bdb0], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bdb0u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bdb0u), r);
  }
/* 799964: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 799968: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79996eu); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79996e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 799970: push 0xacc188 */
  { uint32_t v = 0xacc188u; esp -= 4; W32(esp, v); }
/* 799975: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 79997a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79997b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x79997du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79997d: mov dword ptr [0xb5bda0], eax */
  W32((uint32_t)(0xb5bda0u), eax);
/* 799982: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 799985: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799988: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79998c: /* 79998c: mov edx, dword ptr [0xb5bda0] */
  edx = R32((uint32_t)(0xb5bda0u));
/* 799992: movzx ecx, word ptr [edx + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 799996: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 799998: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_79999b: /* 79999b: mov edx, dword ptr [ebx + 0x670] */
  edx = R32((uint32_t)(ebx + 0x670u));
/* 7999a1: cmp edx, dword ptr [eax + 0x670] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x670u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7999a7: jne 0x7999c5 */
  if (!zf) goto L_7999c5;
L_7999a9: /* 7999a9: mov ecx, dword ptr [ebx + 0x674] */
  ecx = R32((uint32_t)(ebx + 0x674u));
/* 7999af: cmp ecx, dword ptr [eax + 0x674] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x674u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7999b5: jne 0x7999c5 */
  if (!zf) goto L_7999c5;
L_7999b7: /* 7999b7: mov edx, dword ptr [ebx + 0x678] */
  edx = R32((uint32_t)(ebx + 0x678u));
/* 7999bd: cmp edx, dword ptr [eax + 0x678] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x678u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 7999c3: je 0x799a11 */
  if (zf) goto L_799a11;
L_7999c5: /* 7999c5: mov dl, byte ptr [0xb5bdb0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bdb0u))) & 0xffu);
/* 7999cb: mov ecx, 0x10 */
  ecx = 0x10u;
/* 7999d0: test cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7999d2: jne 0x799a02 */
  if (!zf) goto L_799a02;
L_7999d4: /* 7999d4: or dword ptr [0xb5bdb0], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bdb0u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bdb0u), r);
  }
/* 7999da: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 7999de: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x7999e4u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 7999e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7999e6: push 0xacc1a4 */
  { uint32_t v = 0xacc1a4u; esp -= 4; W32(esp, v); }
/* 7999eb: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 7999f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7999f1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x7999f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7999f3: mov dword ptr [0xb5bd9c], eax */
  W32((uint32_t)(0xb5bd9cu), eax);
/* 7999f8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7999fb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7999fe: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_799a02: /* 799a02: mov ecx, dword ptr [0xb5bd9c] */
  ecx = R32((uint32_t)(0xb5bd9cu));
/* 799a08: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 799a0c: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 799a0e: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_799a11: /* 799a11: mov ecx, dword ptr [ebx + 0x67c] */
  ecx = R32((uint32_t)(ebx + 0x67cu));
/* 799a17: cmp ecx, dword ptr [eax + 0x67c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x67cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 799a1d: jne 0x799a3b */
  if (!zf) goto L_799a3b;
L_799a1f: /* 799a1f: mov edx, dword ptr [ebx + 0x680] */
  edx = R32((uint32_t)(ebx + 0x680u));
/* 799a25: cmp edx, dword ptr [eax + 0x680] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x680u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 799a2b: jne 0x799a3b */
  if (!zf) goto L_799a3b;
L_799a2d: /* 799a2d: mov ecx, dword ptr [ebx + 0x684] */
  ecx = R32((uint32_t)(ebx + 0x684u));
/* 799a33: cmp ecx, dword ptr [eax + 0x684] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x684u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 799a39: je 0x799a87 */
  if (zf) goto L_799a87;
L_799a3b: /* 799a3b: mov dl, byte ptr [0xb5bdb0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bdb0u))) & 0xffu);
/* 799a41: mov ecx, 0x20 */
  ecx = 0x20u;
/* 799a46: test cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 799a48: jne 0x799a78 */
  if (!zf) goto L_799a78;
L_799a4a: /* 799a4a: or dword ptr [0xb5bdb0], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bdb0u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bdb0u), r);
  }
/* 799a50: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 799a54: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x799a5au); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 799a5a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 799a5c: push 0xacc1c4 */
  { uint32_t v = 0xacc1c4u; esp -= 4; W32(esp, v); }
/* 799a61: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 799a66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 799a67: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x799a69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 799a69: mov dword ptr [0xb5bd98], eax */
  W32((uint32_t)(0xb5bd98u), eax);
/* 799a6e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 799a71: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799a74: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_799a78: /* 799a78: mov edx, dword ptr [0xb5bd98] */
  edx = R32((uint32_t)(0xb5bd98u));
/* 799a7e: movzx ecx, word ptr [edx + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 799a82: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 799a84: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_799a87: /* 799a87: mov edx, dword ptr [ebx + 0x688] */
  edx = R32((uint32_t)(ebx + 0x688u));
/* 799a8d: cmp edx, dword ptr [eax + 0x688] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x688u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 799a93: jne 0x799ab1 */
  if (!zf) goto L_799ab1;
L_799a95: /* 799a95: mov ecx, dword ptr [ebx + 0x68c] */
  ecx = R32((uint32_t)(ebx + 0x68cu));
/* 799a9b: cmp ecx, dword ptr [eax + 0x68c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x68cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 799aa1: jne 0x799ab1 */
  if (!zf) goto L_799ab1;
L_799aa3: /* 799aa3: mov edx, dword ptr [ebx + 0x690] */
  edx = R32((uint32_t)(ebx + 0x690u));
/* 799aa9: cmp edx, dword ptr [eax + 0x690] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x690u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 799aaf: je 0x799afd */
  if (zf) goto L_799afd;
L_799ab1: /* 799ab1: mov dl, byte ptr [0xb5bdb0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bdb0u))) & 0xffu);
/* 799ab7: mov ecx, 0x40 */
  ecx = 0x40u;
/* 799abc: test cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 799abe: jne 0x799aee */
  if (!zf) goto L_799aee;
L_799ac0: /* 799ac0: or dword ptr [0xb5bdb0], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bdb0u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bdb0u), r);
  }
/* 799ac6: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 799aca: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x799ad0u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 799ad0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 799ad2: push 0xacc1e0 */
  { uint32_t v = 0xacc1e0u; esp -= 4; W32(esp, v); }
/* 799ad7: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 799adc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 799add: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x799adfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 799adf: mov dword ptr [0xb5bd94], eax */
  W32((uint32_t)(0xb5bd94u), eax);
/* 799ae4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 799ae7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799aea: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_799aee: /* 799aee: mov ecx, dword ptr [0xb5bd94] */
  ecx = R32((uint32_t)(0xb5bd94u));
/* 799af4: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 799af8: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 799afa: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_799afd: /* 799afd: mov ecx, dword ptr [ebx + 0x3a8] */
  ecx = R32((uint32_t)(ebx + 0x3a8u));
/* 799b03: cmp ecx, dword ptr [eax + 0x3a8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x3a8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 799b09: je 0x799b57 */
  if (zf) goto L_799b57;
L_799b0b: /* 799b0b: mov dl, byte ptr [0xb5bdb0] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bdb0u))) & 0xffu);
/* 799b11: mov ecx, 0x80 */
  ecx = 0x80u;
/* 799b16: test cl, dl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 799b18: jne 0x799b48 */
  if (!zf) goto L_799b48;
L_799b1a: /* 799b1a: or dword ptr [0xb5bdb0], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bdb0u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bdb0u), r);
  }
/* 799b20: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 799b24: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x799b2au); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 799b2a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 799b2c: push 0xacc1fc */
  { uint32_t v = 0xacc1fcu; esp -= 4; W32(esp, v); }
/* 799b31: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 799b36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 799b37: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x799b39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 799b39: mov dword ptr [0xb5bd90], eax */
  W32((uint32_t)(0xb5bd90u), eax);
/* 799b3e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 799b41: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799b44: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_799b48: /* 799b48: mov edx, dword ptr [0xb5bd90] */
  edx = R32((uint32_t)(0xb5bd90u));
/* 799b4e: movzx ecx, word ptr [edx + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 799b52: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 799b54: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_799b57: /* 799b57: mov edx, dword ptr [ebx + 0x3ac] */
  edx = R32((uint32_t)(ebx + 0x3acu));
/* 799b5d: cmp edx, dword ptr [eax + 0x3ac] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x3acu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 799b63: je 0x799bb4 */
  if (zf) goto L_799bb4;
L_799b65: /* 799b65: mov edx, dword ptr [0xb5bdb0] */
  edx = R32((uint32_t)(0xb5bdb0u));
/* 799b6b: mov ecx, 0x100 */
  ecx = 0x100u;
/* 799b70: test ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 799b72: jne 0x799ba5 */
  if (!zf) goto L_799ba5;
L_799b74: /* 799b74: mov eax, edx */
  eax = edx;
/* 799b76: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 799b78: mov dword ptr [0xb5bdb0], eax */
  W32((uint32_t)(0xb5bdb0u), eax);
/* 799b7d: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 799b81: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x799b87u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 799b87: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 799b89: push 0xacc214 */
  { uint32_t v = 0xacc214u; esp -= 4; W32(esp, v); }
/* 799b8e: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 799b93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 799b94: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x799b96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 799b96: mov dword ptr [0xb5bd8c], eax */
  W32((uint32_t)(0xb5bd8cu), eax);
/* 799b9b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 799b9e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799ba1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_799ba5: /* 799ba5: mov ecx, dword ptr [0xb5bd8c] */
  ecx = R32((uint32_t)(0xb5bd8cu));
/* 799bab: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 799baf: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 799bb1: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_799bb4: /* 799bb4: mov ecx, dword ptr [ebx + 0x3b0] */
  ecx = R32((uint32_t)(ebx + 0x3b0u));
/* 799bba: cmp ecx, dword ptr [eax + 0x3b0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x3b0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 799bc0: je 0x799c15 */
  if (zf) goto L_799c15;
L_799bc2: /* 799bc2: mov ecx, dword ptr [0xb5bdb0] */
  ecx = R32((uint32_t)(0xb5bdb0u));
/* 799bc8: mov eax, 0x200 */
  eax = 0x200u;
/* 799bcd: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 799bcf: jne 0x799bfe */
  if (!zf) goto L_799bfe;
L_799bd1: /* 799bd1: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 799bd3: mov dword ptr [0xb5bdb0], ecx */
  W32((uint32_t)(0xb5bdb0u), ecx);
/* 799bd9: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 799bdd: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x799be3u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 799be3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 799be5: push 0xacc22c */
  { uint32_t v = 0xacc22cu; esp -= 4; W32(esp, v); }
/* 799bea: push 0xcc5588 */
  { uint32_t v = 0xcc5588u; esp -= 4; W32(esp, v); }
/* 799bef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 799bf0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x799bf2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 799bf2: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799bf5: mov dword ptr [0xb5bd88], eax */
  W32((uint32_t)(0xb5bd88u), eax);
/* 799bfa: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_799bfe: /* 799bfe: mov edx, dword ptr [0xb5bd88] */
  edx = R32((uint32_t)(0xb5bd88u));
/* 799c04: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 799c08: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 799c0a: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 799c0d: jmp 0x799c15 */
  goto L_799c15;
L_799c0f: /* 799c0f: mov esi, dword ptr [0xcfa5f8] */
  esi = R32((uint32_t)(0xcfa5f8u));
L_799c15: /* 799c15: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 799c18: mov ecx, dword ptr [ebx + 0x188] */
  ecx = R32((uint32_t)(ebx + 0x188u));
/* 799c1e: cmp ecx, dword ptr [eax + 0x188] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x188u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 799c24: jne 0x799c42 */
  if (!zf) goto L_799c42;
L_799c26: /* 799c26: mov edx, dword ptr [ebx + 0x18c] */
  edx = R32((uint32_t)(ebx + 0x18cu));
/* 799c2c: cmp edx, dword ptr [eax + 0x18c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x18cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 799c32: jne 0x799c42 */
  if (!zf) goto L_799c42;
L_799c34: /* 799c34: mov ecx, dword ptr [ebx + 0x190] */
  ecx = R32((uint32_t)(ebx + 0x190u));
/* 799c3a: cmp ecx, dword ptr [eax + 0x190] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x190u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 799c40: je 0x799c89 */
  if (zf) goto L_799c89;
L_799c42: /* 799c42: mov ecx, dword ptr [0xb5bdb0] */
  ecx = R32((uint32_t)(0xb5bdb0u));
/* 799c48: mov eax, 0x400 */
  eax = 0x400u;
/* 799c4d: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 799c4f: jne 0x799c7a */
  if (!zf) goto L_799c7a;
L_799c51: /* 799c51: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 799c53: mov dword ptr [0xb5bdb0], ecx */
  W32((uint32_t)(0xb5bdb0u), ecx);
/* 799c59: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 799c5d: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x799c63u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 799c63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 799c65: push 0xacc244 */
  { uint32_t v = 0xacc244u; esp -= 4; W32(esp, v); }
/* 799c6a: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 799c6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 799c70: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x799c72u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 799c72: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799c75: mov dword ptr [0xb5bd84], eax */
  W32((uint32_t)(0xb5bd84u), eax);
L_799c7a: /* 799c7a: mov edx, dword ptr [0xb5bd84] */
  edx = R32((uint32_t)(0xb5bd84u));
/* 799c80: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 799c84: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 799c86: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_799c89: /* 799c89: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 799c8c: mov eax, edi */
  eax = edi;
/* 799c8e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 799c8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 799c90: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 799c97: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 799c98: mov esp, ebp */
  esp = ebp;
/* 799c9a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 799c9b: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_799c9e(void) {
  LOAD_REGS();
L_799c9e: /* 799c9e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 799ca1: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 799ca6: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 799ca9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 799caa: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 799cad: call 0x99caf8 */
  esp -= 4; W32(esp, 0x799cb2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_799cb2(); return;
}

void f_799cb2(void) {
  LOAD_REGS();
L_799cb2: /* 799cb2: push 0xa0aa18 */
  { uint32_t v = 0xa0aa18u; esp -= 4; W32(esp, v); }
/* 799cb7: push 0xacc258 */
  { uint32_t v = 0xacc258u; esp -= 4; W32(esp, v); }
/* 799cbc: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x799cc2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 799cc2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799cc5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 799cc7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 799cc9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x799cceu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_799cce: guest_badaddr(0x799cce); return;
}

void f_799e20(void) {
  LOAD_REGS();
L_799e20: /* 799e20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 799e21: mov ebp, esp */
  ebp = esp;
/* 799e23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 799e25: push 0x9cda62 */
  { uint32_t v = 0x9cda62u; esp -= 4; W32(esp, v); }
/* 799e2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 799e30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 799e31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 799e38: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 799e3b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 799e3e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 799e41: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 799e42: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 799e45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 799e46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 799e47: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 799e4a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 799e4d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 799e4e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 799e4f: mov esi, ecx */
  esi = ecx;
/* 799e51: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 799e54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 799e55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 799e56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 799e57: mov ecx, esi */
  ecx = esi;
/* 799e59: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 799e60: call 0x6c1aaa */
  esp -= 4; W32(esp, 0x799e65u); SPILL(); f_6c1aaa(); if (g_unwind) return; RELOAD();
/* 799e65: mov ecx, dword ptr [0xb6e680] */
  ecx = R32((uint32_t)(0xb6e680u));
/* 799e6b: test ch, 8 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 799e6e: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 799e71: je 0x79a1a0 */
  if (zf) goto L_79a1a0;
L_799e77: /* 799e77: cmp byte ptr [esi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 799e7e: jne 0x79a114 */
  if (!zf) goto L_79a114;
L_799e84: /* 799e84: test byte ptr [esi + 0x84], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x84u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 799e8b: je 0x79a114 */
  if (zf) goto L_79a114;
L_799e91: /* 799e91: test dword ptr [esi + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 799e9b: jne 0x79a114 */
  if (!zf) goto L_79a114;
L_799ea1: /* 799ea1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 799ea4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 799ea5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 799ea6: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 799eab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 799eac: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 799eb2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 799eb3: call 0x6cc21b */
  esp -= 4; W32(esp, 0x799eb8u); SPILL(); f_6cc21b(); if (g_unwind) return; RELOAD();
/* 799eb8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799ebb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 799ebd: je 0x799f09 */
  if (zf) goto L_799f09;
L_799ebf: /* 799ebf: mov cl, byte ptr [0xb5bdd0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bdd0u))) & 0xffu);
/* 799ec5: mov eax, 1 */
  eax = 0x1u;
/* 799eca: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 799ecc: jne 0x799ef4 */
  if (!zf) goto L_799ef4;
L_799ece: /* 799ece: or dword ptr [0xb5bdd0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bdd0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bdd0u), r);
  }
/* 799ed4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 799ed6: push 0xacc260 */
  { uint32_t v = 0xacc260u; esp -= 4; W32(esp, v); }
/* 799edb: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 799ee0: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 799ee3: call 0x6cad67 */
  esp -= 4; W32(esp, 0x799ee8u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 799ee8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799eeb: mov dword ptr [0xb5bdcc], eax */
  W32((uint32_t)(0xb5bdccu), eax);
/* 799ef0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_799ef4: /* 799ef4: mov edx, dword ptr [0xb5bdcc] */
  edx = R32((uint32_t)(0xb5bdccu));
/* 799efa: movzx ecx, word ptr [edx + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 799efe: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 799f01: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 799f03: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 799f06: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_799f09: /* 799f09: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 799f0c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 799f0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 799f0e: add edx, 0x17c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 799f14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 799f15: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 799f1b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 799f1c: call 0x6c6aff */
  esp -= 4; W32(esp, 0x799f21u); SPILL(); f_6c6aff(); if (g_unwind) return; RELOAD();
/* 799f21: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799f24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 799f26: je 0x799f72 */
  if (zf) goto L_799f72;
L_799f28: /* 799f28: mov cl, byte ptr [0xb5bdd0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bdd0u))) & 0xffu);
/* 799f2e: mov eax, 2 */
  eax = 0x2u;
/* 799f33: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 799f35: jne 0x799f5d */
  if (!zf) goto L_799f5d;
L_799f37: /* 799f37: or dword ptr [0xb5bdd0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bdd0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bdd0u), r);
  }
/* 799f3d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 799f3f: push 0xacc274 */
  { uint32_t v = 0xacc274u; esp -= 4; W32(esp, v); }
/* 799f44: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 799f49: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 799f4c: call 0x6cad67 */
  esp -= 4; W32(esp, 0x799f51u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 799f51: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799f54: mov dword ptr [0xb5bdc8], eax */
  W32((uint32_t)(0xb5bdc8u), eax);
/* 799f59: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_799f5d: /* 799f5d: mov ecx, dword ptr [0xb5bdc8] */
  ecx = R32((uint32_t)(0xb5bdc8u));
/* 799f63: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 799f67: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 799f6a: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 799f6c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 799f6f: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_799f72: /* 799f72: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 799f75: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 799f78: mov edx, dword ptr [esi + 0x5c] */
  edx = R32((uint32_t)(esi + 0x5cu));
/* 799f7b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 799f7c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 799f7d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 799f7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 799f7f: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x799f84u); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 799f84: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799f87: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 799f89: je 0x799fd0 */
  if (zf) goto L_799fd0;
L_799f8b: /* 799f8b: test byte ptr [0xb5bdd0], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bdd0u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 799f92: jne 0x799fbc */
  if (!zf) goto L_799fbc;
L_799f94: /* 799f94: or dword ptr [0xb5bdd0], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bdd0u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bdd0u), r);
  }
/* 799f9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 799f9d: push 0xacc288 */
  { uint32_t v = 0xacc288u; esp -= 4; W32(esp, v); }
/* 799fa2: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 799fa7: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 799fab: call 0x6cad67 */
  esp -= 4; W32(esp, 0x799fb0u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 799fb0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 799fb3: mov dword ptr [0xb5bdc4], eax */
  W32((uint32_t)(0xb5bdc4u), eax);
/* 799fb8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_799fbc: /* 799fbc: mov eax, dword ptr [0xb5bdc4] */
  eax = R32((uint32_t)(0xb5bdc4u));
/* 799fc1: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 799fc5: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 799fc8: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 799fca: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 799fcd: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_799fd0: /* 799fd0: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 799fd3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 799fd5: je 0x79a114 */
  if (zf) goto L_79a114;
L_799fdb: /* 799fdb: test dword ptr [eax + 0x80], 0x200000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x80u))); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 799fe5: jne 0x79a114 */
  if (!zf) goto L_79a114;
L_799feb: /* 799feb: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 799fee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 799fef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 799ff0: add edx, 0x208 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x208u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 799ff6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 799ff7: lea eax, [esi + 0x208] */
  eax = (uint32_t)(esi + 0x208u);
/* 799ffd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 799ffe: call 0x6cc21b */
  esp -= 4; W32(esp, 0x79a003u); SPILL(); f_6cc21b(); if (g_unwind) return; RELOAD();
/* 79a003: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a006: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79a008: je 0x79a050 */
  if (zf) goto L_79a050;
L_79a00a: /* 79a00a: test byte ptr [0xb5bdd0], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bdd0u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79a011: jne 0x79a03b */
  if (!zf) goto L_79a03b;
L_79a013: /* 79a013: or dword ptr [0xb5bdd0], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bdd0u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bdd0u), r);
  }
/* 79a01a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79a01c: push 0xacc294 */
  { uint32_t v = 0xacc294u; esp -= 4; W32(esp, v); }
/* 79a021: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 79a026: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 79a02a: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79a02fu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79a02f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a032: mov dword ptr [0xb5bdc0], eax */
  W32((uint32_t)(0xb5bdc0u), eax);
/* 79a037: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79a03b: /* 79a03b: mov ecx, dword ptr [0xb5bdc0] */
  ecx = R32((uint32_t)(0xb5bdc0u));
/* 79a041: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79a045: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79a048: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 79a04a: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79a04d: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_79a050: /* 79a050: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79a051: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 79a054: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79a055: lea eax, [edi + 0x214] */
  eax = (uint32_t)(edi + 0x214u);
/* 79a05b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79a05c: lea ecx, [esi + 0x214] */
  ecx = (uint32_t)(esi + 0x214u);
/* 79a062: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79a063: call 0x6c6aff */
  esp -= 4; W32(esp, 0x79a068u); SPILL(); f_6c6aff(); if (g_unwind) return; RELOAD();
/* 79a068: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a06b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79a06d: je 0x79a0ba */
  if (zf) goto L_79a0ba;
L_79a06f: /* 79a06f: mov cl, byte ptr [0xb5bdd0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bdd0u))) & 0xffu);
/* 79a075: mov eax, 0x10 */
  eax = 0x10u;
/* 79a07a: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79a07c: jne 0x79a0a5 */
  if (!zf) goto L_79a0a5;
L_79a07e: /* 79a07e: or dword ptr [0xb5bdd0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bdd0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bdd0u), r);
  }
/* 79a084: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79a086: push 0xacc2b8 */
  { uint32_t v = 0xacc2b8u; esp -= 4; W32(esp, v); }
/* 79a08b: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 79a090: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 79a094: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79a099u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79a099: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a09c: mov dword ptr [0xb5bdbc], eax */
  W32((uint32_t)(0xb5bdbcu), eax);
/* 79a0a1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79a0a5: /* 79a0a5: mov edx, dword ptr [0xb5bdbc] */
  edx = R32((uint32_t)(0xb5bdbcu));
/* 79a0ab: movzx ecx, word ptr [edx + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79a0af: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79a0b2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79a0b4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79a0b7: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_79a0ba: /* 79a0ba: mov edx, dword ptr [esi + 0xac] */
  edx = R32((uint32_t)(esi + 0xacu));
/* 79a0c0: cmp edx, dword ptr [edi + 0xac] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xacu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79a0c6: je 0x79a117 */
  if (zf) goto L_79a117;
L_79a0c8: /* 79a0c8: mov cl, byte ptr [0xb5bdd0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bdd0u))) & 0xffu);
/* 79a0ce: mov eax, 0x20 */
  eax = 0x20u;
/* 79a0d3: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79a0d5: jne 0x79a0fe */
  if (!zf) goto L_79a0fe;
L_79a0d7: /* 79a0d7: or dword ptr [0xb5bdd0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bdd0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bdd0u), r);
  }
/* 79a0dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79a0df: push 0xacc2dc */
  { uint32_t v = 0xacc2dcu; esp -= 4; W32(esp, v); }
/* 79a0e4: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 79a0e9: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 79a0ed: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79a0f2u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79a0f2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a0f5: mov dword ptr [0xb5bdb8], eax */
  W32((uint32_t)(0xb5bdb8u), eax);
/* 79a0fa: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79a0fe: /* 79a0fe: mov eax, dword ptr [0xb5bdb8] */
  eax = R32((uint32_t)(0xb5bdb8u));
/* 79a103: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79a107: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79a10a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79a10c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79a10f: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 79a112: jmp 0x79a117 */
  goto L_79a117;
L_79a114: /* 79a114: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_79a117: /* 79a117: cmp byte ptr [esi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79a11e: jne 0x79a1b3 */
  if (!zf) goto L_79a1b3;
L_79a124: /* 79a124: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 79a12a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 79a12c: jns 0x79a1b3 */
  if (!sf) goto L_79a1b3;
L_79a132: /* 79a132: mov edx, dword ptr [esi + 0x3c4] */
  edx = R32((uint32_t)(esi + 0x3c4u));
/* 79a138: cmp edx, dword ptr [edi + 0x3c4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3c4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79a13e: jne 0x79a15c */
  if (!zf) goto L_79a15c;
L_79a140: /* 79a140: mov eax, dword ptr [esi + 0x3c8] */
  eax = R32((uint32_t)(esi + 0x3c8u));
/* 79a146: cmp eax, dword ptr [edi + 0x3c8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3c8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79a14c: jne 0x79a15c */
  if (!zf) goto L_79a15c;
L_79a14e: /* 79a14e: mov ecx, dword ptr [esi + 0x3cc] */
  ecx = R32((uint32_t)(esi + 0x3ccu));
/* 79a154: cmp ecx, dword ptr [edi + 0x3cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x3ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79a15a: je 0x79a1b3 */
  if (zf) goto L_79a1b3;
L_79a15c: /* 79a15c: mov cl, byte ptr [0xb5bdd0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bdd0u))) & 0xffu);
/* 79a162: mov eax, 0x40 */
  eax = 0x40u;
/* 79a167: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79a169: jne 0x79a18e */
  if (!zf) goto L_79a18e;
L_79a16b: /* 79a16b: or dword ptr [0xb5bdd0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bdd0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bdd0u), r);
  }
/* 79a171: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79a173: push 0xacc2fc */
  { uint32_t v = 0xacc2fcu; esp -= 4; W32(esp, v); }
/* 79a178: push 0xb6e1e8 */
  { uint32_t v = 0xb6e1e8u; esp -= 4; W32(esp, v); }
/* 79a17d: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 79a181: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79a186u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79a186: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a189: mov dword ptr [0xb5bdb4], eax */
  W32((uint32_t)(0xb5bdb4u), eax);
L_79a18e: /* 79a18e: mov edx, dword ptr [0xb5bdb4] */
  edx = R32((uint32_t)(0xb5bdb4u));
/* 79a194: movzx ecx, word ptr [edx + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79a198: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79a19b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79a19d: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_79a1a0: /* 79a1a0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79a1a3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79a1aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79a1ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79a1ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79a1ad: mov esp, ebp */
  esp = ebp;
/* 79a1af: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79a1b0: ret 0x14 */
  esp += 24; SPILL(); return;
L_79a1b3: /* 79a1b3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79a1b6: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79a1b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79a1ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79a1bb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79a1c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79a1c3: mov esp, ebp */
  esp = ebp;
/* 79a1c5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79a1c6: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_79a1c9(void) {
  LOAD_REGS();
L_79a1c9: /* 79a1c9: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79a1cc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79a1d1: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 79a1d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79a1d5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 79a1d8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79a1ddu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79a1dd(); return;
}

void f_79a1dd(void) {
  LOAD_REGS();
L_79a1dd: /* 79a1dd: push 0xa0aa60 */
  { uint32_t v = 0xa0aa60u; esp -= 4; W32(esp, v); }
/* 79a1e2: push 0xacc30c */
  { uint32_t v = 0xacc30cu; esp -= 4; W32(esp, v); }
/* 79a1e7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79a1edu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79a1ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a1f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79a1f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79a1f4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79a1f9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79a1f9: guest_badaddr(0x79a1f9); return;
}

void f_79a300(void) {
  LOAD_REGS();
L_79a300: /* 79a300: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79a301: mov ebp, esp */
  ebp = esp;
/* 79a303: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79a305: push 0x9cdae4 */
  { uint32_t v = 0x9cdae4u; esp -= 4; W32(esp, v); }
/* 79a30a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79a310: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79a311: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79a318: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79a31b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79a31e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 79a321: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79a322: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79a323: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 79a326: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79a327: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 79a32a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79a32d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79a32e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79a32f: mov ebx, ecx */
  ebx = ecx;
/* 79a331: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 79a334: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79a335: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79a336: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79a337: mov ecx, ebx */
  ecx = ebx;
/* 79a339: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79a340: call 0x6c1aaa */
  esp -= 4; W32(esp, 0x79a345u); SPILL(); f_6c1aaa(); if (g_unwind) return; RELOAD();
/* 79a345: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 79a348: mov eax, dword ptr [0xb5e320] */
  eax = R32((uint32_t)(0xb5e320u));
/* 79a34d: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79a350: je 0x79a5aa */
  if (zf) goto L_79a5aa;
L_79a356: /* 79a356: cmp byte ptr [ebx + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79a35d: jne 0x79a486 */
  if (!zf) goto L_79a486;
L_79a363: /* 79a363: mov eax, dword ptr [ebx + 0x80] */
  eax = R32((uint32_t)(ebx + 0x80u));
/* 79a369: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 79a36b: jns 0x79a486 */
  if (!sf) goto L_79a486;
L_79a371: /* 79a371: mov ecx, dword ptr [ebx + 0x424] */
  ecx = R32((uint32_t)(ebx + 0x424u));
/* 79a377: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79a378: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 79a37b: mov eax, dword ptr [esi + 0x424] */
  eax = R32((uint32_t)(esi + 0x424u));
/* 79a381: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79a382: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79a383: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79a384: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x79a389u); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 79a389: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a38c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79a38e: je 0x79a3da */
  if (zf) goto L_79a3da;
L_79a390: /* 79a390: mov cl, byte ptr [0xb5bdec] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bdecu))) & 0xffu);
/* 79a396: mov eax, 1 */
  eax = 0x1u;
/* 79a39b: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79a39d: jne 0x79a3c5 */
  if (!zf) goto L_79a3c5;
L_79a39f: /* 79a39f: or dword ptr [0xb5bdec], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bdecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bdecu), r);
  }
/* 79a3a5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79a3a7: push 0xacc314 */
  { uint32_t v = 0xacc314u; esp -= 4; W32(esp, v); }
/* 79a3ac: push 0xb5de88 */
  { uint32_t v = 0xb5de88u; esp -= 4; W32(esp, v); }
/* 79a3b1: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 79a3b4: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79a3b9u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79a3b9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a3bc: mov dword ptr [0xb5bde8], eax */
  W32((uint32_t)(0xb5bde8u), eax);
/* 79a3c1: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79a3c5: /* 79a3c5: mov edx, dword ptr [0xb5bde8] */
  edx = R32((uint32_t)(0xb5bde8u));
/* 79a3cb: movzx ecx, word ptr [edx + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79a3cf: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79a3d2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79a3d4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79a3d7: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_79a3da: /* 79a3da: mov edx, dword ptr [ebx + 0x3a8] */
  edx = R32((uint32_t)(ebx + 0x3a8u));
/* 79a3e0: cmp edx, dword ptr [esi + 0x3a8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x3a8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79a3e6: je 0x79a431 */
  if (zf) goto L_79a431;
L_79a3e8: /* 79a3e8: mov cl, byte ptr [0xb5bdec] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bdecu))) & 0xffu);
/* 79a3ee: mov eax, 2 */
  eax = 0x2u;
/* 79a3f3: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79a3f5: jne 0x79a41d */
  if (!zf) goto L_79a41d;
L_79a3f7: /* 79a3f7: or dword ptr [0xb5bdec], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bdecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bdecu), r);
  }
/* 79a3fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79a3ff: push 0xacc324 */
  { uint32_t v = 0xacc324u; esp -= 4; W32(esp, v); }
/* 79a404: push 0xb5de88 */
  { uint32_t v = 0xb5de88u; esp -= 4; W32(esp, v); }
/* 79a409: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 79a40c: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79a411u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79a411: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a414: mov dword ptr [0xb5bde4], eax */
  W32((uint32_t)(0xb5bde4u), eax);
/* 79a419: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79a41d: /* 79a41d: mov eax, dword ptr [0xb5bde4] */
  eax = R32((uint32_t)(0xb5bde4u));
/* 79a422: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79a426: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79a429: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79a42b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79a42e: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_79a431: /* 79a431: mov edx, dword ptr [ebx + 0x50c] */
  edx = R32((uint32_t)(ebx + 0x50cu));
/* 79a437: cmp edx, dword ptr [esi + 0x50c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x50cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79a43d: je 0x79a489 */
  if (zf) goto L_79a489;
L_79a43f: /* 79a43f: test byte ptr [0xb5bdec], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bdecu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79a446: jne 0x79a470 */
  if (!zf) goto L_79a470;
L_79a448: /* 79a448: or dword ptr [0xb5bdec], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bdecu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bdecu), r);
  }
/* 79a44f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79a451: push 0xacc340 */
  { uint32_t v = 0xacc340u; esp -= 4; W32(esp, v); }
/* 79a456: push 0xb5de88 */
  { uint32_t v = 0xb5de88u; esp -= 4; W32(esp, v); }
/* 79a45b: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 79a45f: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79a464u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79a464: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a467: mov dword ptr [0xb5bde0], eax */
  W32((uint32_t)(0xb5bde0u), eax);
/* 79a46c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79a470: /* 79a470: mov eax, dword ptr [0xb5bde0] */
  eax = R32((uint32_t)(0xb5bde0u));
/* 79a475: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79a479: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79a47c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79a47e: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79a481: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 79a484: jmp 0x79a489 */
  goto L_79a489;
L_79a486: /* 79a486: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_79a489: /* 79a489: cmp byte ptr [ebx + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79a490: jne 0x79a5aa */
  if (!zf) goto L_79a5aa;
L_79a496: /* 79a496: test dword ptr [ebx + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79a4a0: je 0x79a5aa */
  if (zf) goto L_79a5aa;
L_79a4a6: /* 79a4a6: mov edx, dword ptr [ebx + 0x3f4] */
  edx = R32((uint32_t)(ebx + 0x3f4u));
/* 79a4ac: cmp edx, dword ptr [esi + 0x3f4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x3f4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79a4b2: je 0x79a4fe */
  if (zf) goto L_79a4fe;
L_79a4b4: /* 79a4b4: mov cl, byte ptr [0xb5bdec] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bdecu))) & 0xffu);
/* 79a4ba: mov eax, 8 */
  eax = 0x8u;
/* 79a4bf: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79a4c1: jne 0x79a4ea */
  if (!zf) goto L_79a4ea;
L_79a4c3: /* 79a4c3: or dword ptr [0xb5bdec], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bdecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bdecu), r);
  }
/* 79a4c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79a4cb: push 0xacc360 */
  { uint32_t v = 0xacc360u; esp -= 4; W32(esp, v); }
/* 79a4d0: push 0xb5de88 */
  { uint32_t v = 0xb5de88u; esp -= 4; W32(esp, v); }
/* 79a4d5: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 79a4d9: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79a4deu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79a4de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a4e1: mov dword ptr [0xb5bddc], eax */
  W32((uint32_t)(0xb5bddcu), eax);
/* 79a4e6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79a4ea: /* 79a4ea: mov eax, dword ptr [0xb5bddc] */
  eax = R32((uint32_t)(0xb5bddcu));
/* 79a4ef: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79a4f3: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79a4f6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79a4f8: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79a4fb: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_79a4fe: /* 79a4fe: mov edx, dword ptr [ebx + 0x3f8] */
  edx = R32((uint32_t)(ebx + 0x3f8u));
/* 79a504: cmp edx, dword ptr [esi + 0x3f8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x3f8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79a50a: je 0x79a556 */
  if (zf) goto L_79a556;
L_79a50c: /* 79a50c: mov cl, byte ptr [0xb5bdec] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bdecu))) & 0xffu);
/* 79a512: mov eax, 0x10 */
  eax = 0x10u;
/* 79a517: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79a519: jne 0x79a542 */
  if (!zf) goto L_79a542;
L_79a51b: /* 79a51b: or dword ptr [0xb5bdec], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bdecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bdecu), r);
  }
/* 79a521: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79a523: push 0xacc380 */
  { uint32_t v = 0xacc380u; esp -= 4; W32(esp, v); }
/* 79a528: push 0xb5de88 */
  { uint32_t v = 0xb5de88u; esp -= 4; W32(esp, v); }
/* 79a52d: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 79a531: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79a536u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79a536: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a539: mov dword ptr [0xb5bdd8], eax */
  W32((uint32_t)(0xb5bdd8u), eax);
/* 79a53e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79a542: /* 79a542: mov eax, dword ptr [0xb5bdd8] */
  eax = R32((uint32_t)(0xb5bdd8u));
/* 79a547: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79a54b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79a54e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79a550: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79a553: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_79a556: /* 79a556: mov edx, dword ptr [ebx + 0x400] */
  edx = R32((uint32_t)(ebx + 0x400u));
/* 79a55c: cmp edx, dword ptr [esi + 0x400] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x400u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79a562: je 0x79a5aa */
  if (zf) goto L_79a5aa;
L_79a564: /* 79a564: mov cl, byte ptr [0xb5bdec] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bdecu))) & 0xffu);
/* 79a56a: mov eax, 0x20 */
  eax = 0x20u;
/* 79a56f: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79a571: jne 0x79a596 */
  if (!zf) goto L_79a596;
L_79a573: /* 79a573: or dword ptr [0xb5bdec], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bdecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bdecu), r);
  }
/* 79a579: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79a57b: push 0xacc3a4 */
  { uint32_t v = 0xacc3a4u; esp -= 4; W32(esp, v); }
/* 79a580: push 0xb5de88 */
  { uint32_t v = 0xb5de88u; esp -= 4; W32(esp, v); }
/* 79a585: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 79a589: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79a58eu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79a58e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a591: mov dword ptr [0xb5bdd4], eax */
  W32((uint32_t)(0xb5bdd4u), eax);
L_79a596: /* 79a596: mov eax, dword ptr [0xb5bdd4] */
  eax = R32((uint32_t)(0xb5bdd4u));
/* 79a59b: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79a59f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79a5a2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79a5a4: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79a5a7: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_79a5aa: /* 79a5aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79a5ad: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79a5b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79a5b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79a5b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79a5b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79a5ba: mov esp, ebp */
  esp = ebp;
/* 79a5bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79a5bd: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_79a5c0(void) {
  LOAD_REGS();
L_79a5c0: /* 79a5c0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79a5c3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79a5c8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 79a5cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79a5cc: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 79a5cf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79a5d4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79a5d4(); return;
}

void f_79a5d4(void) {
  LOAD_REGS();
L_79a5d4: /* 79a5d4: push 0xa0aab8 */
  { uint32_t v = 0xa0aab8u; esp -= 4; W32(esp, v); }
/* 79a5d9: push 0xacc3c4 */
  { uint32_t v = 0xacc3c4u; esp -= 4; W32(esp, v); }
/* 79a5de: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79a5e4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79a5e4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a5e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79a5e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79a5eb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79a5f0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79a5f0: guest_badaddr(0x79a5f0); return;
}

void f_79a6c0(void) {
  LOAD_REGS();
L_79a6c0: /* 79a6c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79a6c1: mov ebp, esp */
  ebp = esp;
/* 79a6c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79a6c5: push 0x9cdb10 */
  { uint32_t v = 0x9cdb10u; esp -= 4; W32(esp, v); }
/* 79a6ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79a6d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79a6d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79a6d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79a6db: test byte ptr [ecx + 0x84], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x84u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79a6e2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79a6e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79a6e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79a6e5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79a6e8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79a6ef: jne 0x79a74d */
  if (!zf) goto L_79a74d;
L_79a6f1: /* 79a6f1: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 79a6f4: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 79a6f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79a6f8: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79a6fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79a6fc: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 79a6ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79a700: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79a703: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79a704: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79a705: call 0x6c1aaa */
  esp -= 4; W32(esp, 0x79a70au); SPILL(); f_6c1aaa(); if (g_unwind) return; RELOAD();
/* 79a70a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79a70d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79a714: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79a715: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79a716: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79a717: mov esp, ebp */
  esp = ebp;
/* 79a719: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79a71a: ret 0x14 */
  esp += 24; SPILL(); return;
L_79a74d: /* 79a74d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79a750: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79a753: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79a754: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79a755: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79a75c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79a75d: mov esp, ebp */
  esp = ebp;
/* 79a75f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79a760: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_79a71d(void) {
  LOAD_REGS();
L_79a71d: /* 79a71d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79a720: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79a725: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 79a728: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79a729: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 79a72c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79a731u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79a731(); return;
}

void f_79a731(void) {
  LOAD_REGS();
L_79a731: /* 79a731: push 0xa0ab08 */
  { uint32_t v = 0xa0ab08u; esp -= 4; W32(esp, v); }
/* 79a736: push 0xacc3cc */
  { uint32_t v = 0xacc3ccu; esp -= 4; W32(esp, v); }
/* 79a73b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79a741u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79a741: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a744: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79a746: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79a748: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79a74du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 79a74d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79a750: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79a753: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79a754: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79a755: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79a75c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79a75d: mov esp, ebp */
  esp = ebp;
/* 79a75f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79a760: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_79a7a0(void) {
  LOAD_REGS();
L_79a7a0: /* 79a7a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79a7a1: mov ebp, esp */
  ebp = esp;
/* 79a7a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79a7a5: push 0x9cdcbf */
  { uint32_t v = 0x9cdcbfu; esp -= 4; W32(esp, v); }
/* 79a7aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79a7b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79a7b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79a7b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79a7bb: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 79a7be: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 79a7c1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79a7c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79a7c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79a7c4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79a7c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79a7c8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 79a7cb: mov edi, ecx */
  edi = ecx;
/* 79a7cd: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 79a7d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79a7d1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79a7d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79a7d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79a7d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79a7d7: xor ebx, ebx */
  ebx = 0;
/* 79a7d9: mov ecx, edi */
  ecx = edi;
/* 79a7db: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 79a7de: call 0x6c97fa */
  esp -= 4; W32(esp, 0x79a7e3u); SPILL(); f_6c97fa(); if (g_unwind) return; RELOAD();
/* 79a7e3: mov esi, eax */
  esi = eax;
/* 79a7e5: mov eax, dword ptr [0xb67990] */
  eax = R32((uint32_t)(0xb67990u));
/* 79a7ea: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79a7ed: je 0x79b198 */
  if (zf) goto L_79b198;
L_79a7f3: /* 79a7f3: cmp byte ptr [edi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79a7fa: jne 0x79b198 */
  if (!zf) goto L_79b198;
L_79a800: /* 79a800: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 79a806: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 79a808: jns 0x79b198 */
  if (!sf) goto L_79b198;
L_79a80e: /* 79a80e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79a811: mov edx, dword ptr [edi + 0x33c] */
  edx = R32((uint32_t)(edi + 0x33cu));
/* 79a817: cmp edx, dword ptr [eax + 0x33c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x33cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79a81d: je 0x79a85d */
  if (zf) goto L_79a85d;
L_79a81f: /* 79a81f: test byte ptr [0xb5be50], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5be50u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79a826: jne 0x79a84e */
  if (!zf) goto L_79a84e;
L_79a828: /* 79a828: or dword ptr [0xb5be50], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5be50u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5be50u), r);
  }
/* 79a82f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79a830: push 0xacc3d4 */
  { uint32_t v = 0xacc3d4u; esp -= 4; W32(esp, v); }
/* 79a835: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79a83a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 79a83e: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79a843u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79a843: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a846: mov dword ptr [0xb5be4c], eax */
  W32((uint32_t)(0xb5be4cu), eax);
/* 79a84b: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79a84e: /* 79a84e: mov ecx, dword ptr [0xb5be4c] */
  ecx = R32((uint32_t)(0xb5be4cu));
/* 79a854: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79a858: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 79a85a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79a85d: /* 79a85d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79a860: mov eax, dword ptr [edi + 0x340] */
  eax = R32((uint32_t)(edi + 0x340u));
/* 79a866: cmp eax, dword ptr [ecx + 0x340] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79a86c: je 0x79a8ac */
  if (zf) goto L_79a8ac;
L_79a86e: /* 79a86e: test byte ptr [0xb5be50], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5be50u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79a875: jne 0x79a89d */
  if (!zf) goto L_79a89d;
L_79a877: /* 79a877: or dword ptr [0xb5be50], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5be50u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5be50u), r);
  }
/* 79a87e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79a87f: push 0xacc3e0 */
  { uint32_t v = 0xacc3e0u; esp -= 4; W32(esp, v); }
/* 79a884: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79a889: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 79a88d: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79a892u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79a892: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a895: mov dword ptr [0xb5be48], eax */
  W32((uint32_t)(0xb5be48u), eax);
/* 79a89a: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79a89d: /* 79a89d: mov edx, dword ptr [0xb5be48] */
  edx = R32((uint32_t)(0xb5be48u));
/* 79a8a3: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79a8a7: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 79a8a9: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79a8ac: /* 79a8ac: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 79a8af: mov ecx, dword ptr [edi + 0x3a4] */
  ecx = R32((uint32_t)(edi + 0x3a4u));
/* 79a8b5: xor ecx, dword ptr [edx + 0x3a4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x3a4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 79a8bb: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79a8be: je 0x79a8fd */
  if (zf) goto L_79a8fd;
L_79a8c0: /* 79a8c0: test byte ptr [0xb5be50], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5be50u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79a8c7: jne 0x79a8ef */
  if (!zf) goto L_79a8ef;
L_79a8c9: /* 79a8c9: or dword ptr [0xb5be50], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5be50u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5be50u), r);
  }
/* 79a8d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79a8d1: push 0xacc3f0 */
  { uint32_t v = 0xacc3f0u; esp -= 4; W32(esp, v); }
/* 79a8d6: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79a8db: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 79a8df: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79a8e4u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79a8e4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a8e7: mov dword ptr [0xb5be44], eax */
  W32((uint32_t)(0xb5be44u), eax);
/* 79a8ec: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79a8ef: /* 79a8ef: mov eax, dword ptr [0xb5be44] */
  eax = R32((uint32_t)(0xb5be44u));
/* 79a8f4: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79a8f8: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 79a8fa: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79a8fd: /* 79a8fd: mov eax, dword ptr [edi + 0x88] */
  eax = R32((uint32_t)(edi + 0x88u));
/* 79a903: test eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79a908: je 0x79a911 */
  if (zf) goto L_79a911;
L_79a90a: /* 79a90a: test eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79a90f: je 0x79a960 */
  if (zf) goto L_79a960;
L_79a911: /* 79a911: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79a914: mov edx, dword ptr [edi + 0x348] */
  edx = R32((uint32_t)(edi + 0x348u));
/* 79a91a: cmp edx, dword ptr [eax + 0x348] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x348u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79a920: je 0x79a960 */
  if (zf) goto L_79a960;
L_79a922: /* 79a922: test byte ptr [0xb5be50], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5be50u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79a929: jne 0x79a951 */
  if (!zf) goto L_79a951;
L_79a92b: /* 79a92b: or dword ptr [0xb5be50], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5be50u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5be50u), r);
  }
/* 79a932: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79a933: push 0xacc404 */
  { uint32_t v = 0xacc404u; esp -= 4; W32(esp, v); }
/* 79a938: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79a93d: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 79a941: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79a946u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79a946: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a949: mov dword ptr [0xb5be40], eax */
  W32((uint32_t)(0xb5be40u), eax);
/* 79a94e: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79a951: /* 79a951: mov ecx, dword ptr [0xb5be40] */
  ecx = R32((uint32_t)(0xb5be40u));
/* 79a957: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79a95b: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 79a95d: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79a960: /* 79a960: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 79a963: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 79a966: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 79a969: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79a96a: mov eax, dword ptr [edx + 0x34c] */
  eax = R32((uint32_t)(edx + 0x34cu));
/* 79a970: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79a971: mov ecx, dword ptr [edi + 0x34c] */
  ecx = R32((uint32_t)(edi + 0x34cu));
/* 79a977: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79a978: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79a979: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x79a97eu); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 79a97e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a981: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79a983: je 0x79a9c3 */
  if (zf) goto L_79a9c3;
L_79a985: /* 79a985: test byte ptr [0xb5be50], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5be50u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79a98c: jne 0x79a9b4 */
  if (!zf) goto L_79a9b4;
L_79a98e: /* 79a98e: or dword ptr [0xb5be50], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5be50u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5be50u), r);
  }
/* 79a995: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79a996: push 0xacc410 */
  { uint32_t v = 0xacc410u; esp -= 4; W32(esp, v); }
/* 79a99b: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79a9a0: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 79a9a4: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79a9a9u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79a9a9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a9ac: mov dword ptr [0xb5be3c], eax */
  W32((uint32_t)(0xb5be3cu), eax);
/* 79a9b1: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79a9b4: /* 79a9b4: mov edx, dword ptr [0xb5be3c] */
  edx = R32((uint32_t)(0xb5be3cu));
/* 79a9ba: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79a9be: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 79a9c0: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79a9c3: /* 79a9c3: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 79a9c6: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 79a9c9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79a9cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79a9cd: mov ecx, dword ptr [eax + 0x350] */
  ecx = R32((uint32_t)(eax + 0x350u));
/* 79a9d3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79a9d4: mov edx, dword ptr [edi + 0x350] */
  edx = R32((uint32_t)(edi + 0x350u));
/* 79a9da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79a9db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79a9dc: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x79a9e1u); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 79a9e1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79a9e4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79a9e6: je 0x79aa25 */
  if (zf) goto L_79aa25;
L_79a9e8: /* 79a9e8: test byte ptr [0xb5be50], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5be50u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79a9ef: jne 0x79aa17 */
  if (!zf) goto L_79aa17;
L_79a9f1: /* 79a9f1: or dword ptr [0xb5be50], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5be50u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5be50u), r);
  }
/* 79a9f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79a9f9: push 0xacc42c */
  { uint32_t v = 0xacc42cu; esp -= 4; W32(esp, v); }
/* 79a9fe: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79aa03: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 79aa07: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79aa0cu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79aa0c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79aa0f: mov dword ptr [0xb5be38], eax */
  W32((uint32_t)(0xb5be38u), eax);
/* 79aa14: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79aa17: /* 79aa17: mov eax, dword ptr [0xb5be38] */
  eax = R32((uint32_t)(0xb5be38u));
/* 79aa1c: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79aa20: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 79aa22: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79aa25: /* 79aa25: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 79aa28: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 79aa2b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79aa2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79aa2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79aa30: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79aa33: lea edx, [ecx + 0x358] */
  edx = (uint32_t)(ecx + 0x358u);
/* 79aa39: mov ecx, esp */
  ecx = esp;
/* 79aa3b: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 79aa3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79aa3f: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79aa45u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79aa45: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79aa48: lea eax, [edi + 0x358] */
  eax = (uint32_t)(edi + 0x358u);
/* 79aa4e: mov ecx, esp */
  ecx = esp;
/* 79aa50: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 79aa53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79aa54: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 79aa58: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79aa5eu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79aa5e: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 79aa61: call 0x6cc865 */
  esp -= 4; W32(esp, 0x79aa66u); SPILL(); f_6cc865(); if (g_unwind) return; RELOAD();
/* 79aa66: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79aa69: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79aa6b: je 0x79aaab */
  if (zf) goto L_79aaab;
L_79aa6d: /* 79aa6d: test byte ptr [0xb5be50], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5be50u))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79aa74: jne 0x79aa9c */
  if (!zf) goto L_79aa9c;
L_79aa76: /* 79aa76: or dword ptr [0xb5be50], 0x40 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5be50u))); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5be50u), r);
  }
/* 79aa7d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79aa7e: push 0xacc444 */
  { uint32_t v = 0xacc444u; esp -= 4; W32(esp, v); }
/* 79aa83: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79aa88: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 79aa8c: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79aa91u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79aa91: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79aa94: mov dword ptr [0xb5be34], eax */
  W32((uint32_t)(0xb5be34u), eax);
/* 79aa99: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79aa9c: /* 79aa9c: mov ecx, dword ptr [0xb5be34] */
  ecx = R32((uint32_t)(0xb5be34u));
/* 79aaa2: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79aaa6: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 79aaa8: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79aaab: /* 79aaab: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 79aaae: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 79aab1: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 79aab4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79aab5: mov eax, dword ptr [edx + 0x398] */
  eax = R32((uint32_t)(edx + 0x398u));
/* 79aabb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79aabc: mov ecx, dword ptr [edi + 0x398] */
  ecx = R32((uint32_t)(edi + 0x398u));
/* 79aac2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79aac3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79aac4: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x79aac9u); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 79aac9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79aacc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79aace: je 0x79ab11 */
  if (zf) goto L_79ab11;
L_79aad0: /* 79aad0: mov al, byte ptr [0xb5be50] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5be50u))) & 0xffu);
/* 79aad5: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 79aad7: js 0x79ab02 */
  if (sf) goto L_79ab02;
L_79aad9: /* 79aad9: or dword ptr [0xb5be50], 0x80 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5be50u))); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5be50u), r);
  }
/* 79aae3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79aae4: push 0xacc45c */
  { uint32_t v = 0xacc45cu; esp -= 4; W32(esp, v); }
/* 79aae9: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79aaee: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 79aaf2: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79aaf7u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79aaf7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79aafa: mov dword ptr [0xb5be30], eax */
  W32((uint32_t)(0xb5be30u), eax);
/* 79aaff: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79ab02: /* 79ab02: mov edx, dword ptr [0xb5be30] */
  edx = R32((uint32_t)(0xb5be30u));
/* 79ab08: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79ab0c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 79ab0e: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79ab11: /* 79ab11: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 79ab14: mov ecx, dword ptr [edi + 0x39c] */
  ecx = R32((uint32_t)(edi + 0x39cu));
/* 79ab1a: cmp ecx, dword ptr [edx + 0x39c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x39cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79ab20: je 0x79ab68 */
  if (zf) goto L_79ab68;
L_79ab22: /* 79ab22: mov ecx, dword ptr [0xb5be50] */
  ecx = R32((uint32_t)(0xb5be50u));
/* 79ab28: mov eax, 0x100 */
  eax = 0x100u;
/* 79ab2d: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79ab2f: jne 0x79ab5a */
  if (!zf) goto L_79ab5a;
L_79ab31: /* 79ab31: mov edx, ecx */
  edx = ecx;
/* 79ab33: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79ab35: mov dword ptr [0xb5be50], edx */
  W32((uint32_t)(0xb5be50u), edx);
/* 79ab3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79ab3c: push 0xacc468 */
  { uint32_t v = 0xacc468u; esp -= 4; W32(esp, v); }
/* 79ab41: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79ab46: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 79ab4a: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79ab4fu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79ab4f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79ab52: mov dword ptr [0xb5be2c], eax */
  W32((uint32_t)(0xb5be2cu), eax);
/* 79ab57: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79ab5a: /* 79ab5a: mov eax, dword ptr [0xb5be2c] */
  eax = R32((uint32_t)(0xb5be2cu));
/* 79ab5f: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79ab63: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 79ab65: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79ab68: /* 79ab68: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 79ab6b: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 79ab6e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79ab71: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79ab72: mov edx, dword ptr [ecx + 0x3a0] */
  edx = R32((uint32_t)(ecx + 0x3a0u));
/* 79ab78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79ab79: mov eax, dword ptr [edi + 0x3a0] */
  eax = R32((uint32_t)(edi + 0x3a0u));
/* 79ab7f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79ab80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79ab81: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x79ab86u); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 79ab86: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79ab89: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79ab8b: je 0x79abd4 */
  if (zf) goto L_79abd4;
L_79ab8d: /* 79ab8d: mov ecx, dword ptr [0xb5be50] */
  ecx = R32((uint32_t)(0xb5be50u));
/* 79ab93: mov eax, 0x200 */
  eax = 0x200u;
/* 79ab98: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79ab9a: jne 0x79abc5 */
  if (!zf) goto L_79abc5;
L_79ab9c: /* 79ab9c: mov edx, ecx */
  edx = ecx;
/* 79ab9e: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79aba0: mov dword ptr [0xb5be50], edx */
  W32((uint32_t)(0xb5be50u), edx);
/* 79aba6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79aba7: push 0xacc478 */
  { uint32_t v = 0xacc478u; esp -= 4; W32(esp, v); }
/* 79abac: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79abb1: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 79abb5: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79abbau); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79abba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79abbd: mov dword ptr [0xb5be28], eax */
  W32((uint32_t)(0xb5be28u), eax);
/* 79abc2: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79abc5: /* 79abc5: mov ecx, dword ptr [0xb5be28] */
  ecx = R32((uint32_t)(0xb5be28u));
/* 79abcb: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79abcf: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 79abd1: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79abd4: /* 79abd4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79abd7: mov eax, dword ptr [edi + 0x3a4] */
  eax = R32((uint32_t)(edi + 0x3a4u));
/* 79abdd: xor eax, dword ptr [ecx + 0x3a4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3a4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 79abe3: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79abe5: je 0x79ac2d */
  if (zf) goto L_79ac2d;
L_79abe7: /* 79abe7: mov eax, dword ptr [0xb5be50] */
  eax = R32((uint32_t)(0xb5be50u));
/* 79abec: test ah, 4 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79abef: jne 0x79ac1e */
  if (!zf) goto L_79ac1e;
L_79abf1: /* 79abf1: mov edx, eax */
  edx = eax;
/* 79abf3: or edx, 0x400 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79abf9: mov dword ptr [0xb5be50], edx */
  W32((uint32_t)(0xb5be50u), edx);
/* 79abff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79ac00: push 0xacc48c */
  { uint32_t v = 0xacc48cu; esp -= 4; W32(esp, v); }
/* 79ac05: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79ac0a: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 79ac0e: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79ac13u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79ac13: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79ac16: mov dword ptr [0xb5be24], eax */
  W32((uint32_t)(0xb5be24u), eax);
/* 79ac1b: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79ac1e: /* 79ac1e: mov edx, dword ptr [0xb5be24] */
  edx = R32((uint32_t)(0xb5be24u));
/* 79ac24: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79ac28: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 79ac2a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79ac2d: /* 79ac2d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 79ac30: mov ecx, dword ptr [edi + 0x3a4] */
  ecx = R32((uint32_t)(edi + 0x3a4u));
/* 79ac36: xor ecx, dword ptr [edx + 0x3a4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x3a4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 79ac3c: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ac3f: je 0x79ac86 */
  if (zf) goto L_79ac86;
L_79ac41: /* 79ac41: mov eax, dword ptr [0xb5be50] */
  eax = R32((uint32_t)(0xb5be50u));
/* 79ac46: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ac49: jne 0x79ac78 */
  if (!zf) goto L_79ac78;
L_79ac4b: /* 79ac4b: mov edx, eax */
  edx = eax;
/* 79ac4d: or edx, 0x800 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79ac53: mov dword ptr [0xb5be50], edx */
  W32((uint32_t)(0xb5be50u), edx);
/* 79ac59: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79ac5a: push 0xacc49c */
  { uint32_t v = 0xacc49cu; esp -= 4; W32(esp, v); }
/* 79ac5f: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79ac64: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 79ac68: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79ac6du); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79ac6d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79ac70: mov dword ptr [0xb5be20], eax */
  W32((uint32_t)(0xb5be20u), eax);
/* 79ac75: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79ac78: /* 79ac78: mov eax, dword ptr [0xb5be20] */
  eax = R32((uint32_t)(0xb5be20u));
/* 79ac7d: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79ac81: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 79ac83: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79ac86: /* 79ac86: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79ac89: mov edx, dword ptr [edi + 0x3a4] */
  edx = R32((uint32_t)(edi + 0x3a4u));
/* 79ac8f: xor edx, dword ptr [eax + 0x3a4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x3a4u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 79ac95: test dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ac98: je 0x79ace1 */
  if (zf) goto L_79ace1;
L_79ac9a: /* 79ac9a: mov ecx, dword ptr [0xb5be50] */
  ecx = R32((uint32_t)(0xb5be50u));
/* 79aca0: mov eax, 0x1000 */
  eax = 0x1000u;
/* 79aca5: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79aca7: jne 0x79acd2 */
  if (!zf) goto L_79acd2;
L_79aca9: /* 79aca9: mov edx, ecx */
  edx = ecx;
/* 79acab: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79acad: mov dword ptr [0xb5be50], edx */
  W32((uint32_t)(0xb5be50u), edx);
/* 79acb3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79acb4: push 0xacc4b0 */
  { uint32_t v = 0xacc4b0u; esp -= 4; W32(esp, v); }
/* 79acb9: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79acbe: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 79acc2: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79acc7u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79acc7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79acca: mov dword ptr [0xb5be1c], eax */
  W32((uint32_t)(0xb5be1cu), eax);
/* 79accf: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79acd2: /* 79acd2: mov ecx, dword ptr [0xb5be1c] */
  ecx = R32((uint32_t)(0xb5be1cu));
/* 79acd8: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79acdc: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 79acde: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79ace1: /* 79ace1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79ace4: mov eax, dword ptr [edi + 0x3a4] */
  eax = R32((uint32_t)(edi + 0x3a4u));
/* 79acea: xor eax, dword ptr [ecx + 0x3a4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3a4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 79acf0: test al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79acf2: je 0x79ad3b */
  if (zf) goto L_79ad3b;
L_79acf4: /* 79acf4: mov ecx, dword ptr [0xb5be50] */
  ecx = R32((uint32_t)(0xb5be50u));
/* 79acfa: mov eax, 0x2000 */
  eax = 0x2000u;
/* 79acff: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79ad01: jne 0x79ad2c */
  if (!zf) goto L_79ad2c;
L_79ad03: /* 79ad03: mov edx, ecx */
  edx = ecx;
/* 79ad05: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79ad07: mov dword ptr [0xb5be50], edx */
  W32((uint32_t)(0xb5be50u), edx);
/* 79ad0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79ad0e: push 0xacc4cc */
  { uint32_t v = 0xacc4ccu; esp -= 4; W32(esp, v); }
/* 79ad13: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79ad18: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 79ad1c: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79ad21u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79ad21: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79ad24: mov dword ptr [0xb5be18], eax */
  W32((uint32_t)(0xb5be18u), eax);
/* 79ad29: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79ad2c: /* 79ad2c: mov edx, dword ptr [0xb5be18] */
  edx = R32((uint32_t)(0xb5be18u));
/* 79ad32: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79ad36: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 79ad38: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79ad3b: /* 79ad3b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 79ad3e: mov ecx, dword ptr [edi + 0x3a4] */
  ecx = R32((uint32_t)(edi + 0x3a4u));
/* 79ad44: xor ecx, dword ptr [edx + 0x3a4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x3a4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 79ad4a: test cl, 0x10 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ad4d: je 0x79ad95 */
  if (zf) goto L_79ad95;
L_79ad4f: /* 79ad4f: mov ecx, dword ptr [0xb5be50] */
  ecx = R32((uint32_t)(0xb5be50u));
/* 79ad55: mov eax, 0x4000 */
  eax = 0x4000u;
/* 79ad5a: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79ad5c: jne 0x79ad87 */
  if (!zf) goto L_79ad87;
L_79ad5e: /* 79ad5e: mov edx, ecx */
  edx = ecx;
/* 79ad60: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79ad62: mov dword ptr [0xb5be50], edx */
  W32((uint32_t)(0xb5be50u), edx);
/* 79ad68: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79ad69: push 0xacc4ec */
  { uint32_t v = 0xacc4ecu; esp -= 4; W32(esp, v); }
/* 79ad6e: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79ad73: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 79ad77: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79ad7cu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79ad7c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79ad7f: mov dword ptr [0xb5be14], eax */
  W32((uint32_t)(0xb5be14u), eax);
/* 79ad84: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79ad87: /* 79ad87: mov eax, dword ptr [0xb5be14] */
  eax = R32((uint32_t)(0xb5be14u));
/* 79ad8c: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79ad90: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 79ad92: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79ad95: /* 79ad95: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79ad98: mov edx, dword ptr [edi + 0x3a4] */
  edx = R32((uint32_t)(edi + 0x3a4u));
/* 79ad9e: xor edx, dword ptr [eax + 0x3a4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x3a4u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 79ada4: test dl, 0x20 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ada7: je 0x79adf0 */
  if (zf) goto L_79adf0;
L_79ada9: /* 79ada9: mov ecx, dword ptr [0xb5be50] */
  ecx = R32((uint32_t)(0xb5be50u));
/* 79adaf: mov eax, 0x8000 */
  eax = 0x8000u;
/* 79adb4: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79adb6: jne 0x79ade1 */
  if (!zf) goto L_79ade1;
L_79adb8: /* 79adb8: mov edx, ecx */
  edx = ecx;
/* 79adba: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79adbc: mov dword ptr [0xb5be50], edx */
  W32((uint32_t)(0xb5be50u), edx);
/* 79adc2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79adc3: push 0xacc50c */
  { uint32_t v = 0xacc50cu; esp -= 4; W32(esp, v); }
/* 79adc8: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79adcd: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 79add1: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79add6u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79add6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79add9: mov dword ptr [0xb5be10], eax */
  W32((uint32_t)(0xb5be10u), eax);
/* 79adde: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79ade1: /* 79ade1: mov ecx, dword ptr [0xb5be10] */
  ecx = R32((uint32_t)(0xb5be10u));
/* 79ade7: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79adeb: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 79aded: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79adf0: /* 79adf0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79adf3: mov eax, dword ptr [edi + 0x3a4] */
  eax = R32((uint32_t)(edi + 0x3a4u));
/* 79adf9: xor eax, dword ptr [ecx + 0x3a4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3a4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 79adff: test al, 0x40 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ae01: je 0x79ae4a */
  if (zf) goto L_79ae4a;
L_79ae03: /* 79ae03: mov ecx, dword ptr [0xb5be50] */
  ecx = R32((uint32_t)(0xb5be50u));
/* 79ae09: mov eax, 0x10000 */
  eax = 0x10000u;
/* 79ae0e: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79ae10: jne 0x79ae3b */
  if (!zf) goto L_79ae3b;
L_79ae12: /* 79ae12: mov edx, ecx */
  edx = ecx;
/* 79ae14: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79ae16: mov dword ptr [0xb5be50], edx */
  W32((uint32_t)(0xb5be50u), edx);
/* 79ae1c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79ae1d: push 0xacc528 */
  { uint32_t v = 0xacc528u; esp -= 4; W32(esp, v); }
/* 79ae22: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79ae27: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 79ae2b: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79ae30u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79ae30: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79ae33: mov dword ptr [0xb5be0c], eax */
  W32((uint32_t)(0xb5be0cu), eax);
/* 79ae38: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79ae3b: /* 79ae3b: mov edx, dword ptr [0xb5be0c] */
  edx = R32((uint32_t)(0xb5be0cu));
/* 79ae41: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79ae45: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 79ae47: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79ae4a: /* 79ae4a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 79ae4d: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 79ae50: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79ae53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79ae54: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79ae55: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79ae58: add eax, 0x364 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x364u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79ae5d: mov ecx, esp */
  ecx = esp;
/* 79ae5f: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 79ae62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79ae63: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79ae69u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79ae69: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79ae6c: lea edx, [edi + 0x364] */
  edx = (uint32_t)(edi + 0x364u);
/* 79ae72: mov ecx, esp */
  ecx = esp;
/* 79ae74: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 79ae77: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79ae78: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 79ae7c: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79ae82u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79ae82: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 79ae85: call 0x6cc865 */
  esp -= 4; W32(esp, 0x79ae8au); SPILL(); f_6cc865(); if (g_unwind) return; RELOAD();
/* 79ae8a: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79ae8d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79ae8f: je 0x79aed7 */
  if (zf) goto L_79aed7;
L_79ae91: /* 79ae91: mov ecx, dword ptr [0xb5be50] */
  ecx = R32((uint32_t)(0xb5be50u));
/* 79ae97: mov eax, 0x20000 */
  eax = 0x20000u;
/* 79ae9c: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79ae9e: jne 0x79aec9 */
  if (!zf) goto L_79aec9;
L_79aea0: /* 79aea0: mov edx, ecx */
  edx = ecx;
/* 79aea2: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79aea4: mov dword ptr [0xb5be50], edx */
  W32((uint32_t)(0xb5be50u), edx);
/* 79aeaa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79aeab: push 0xacc540 */
  { uint32_t v = 0xacc540u; esp -= 4; W32(esp, v); }
/* 79aeb0: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79aeb5: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 79aeb9: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79aebeu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79aebe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79aec1: mov dword ptr [0xb5be08], eax */
  W32((uint32_t)(0xb5be08u), eax);
/* 79aec6: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79aec9: /* 79aec9: mov eax, dword ptr [0xb5be08] */
  eax = R32((uint32_t)(0xb5be08u));
/* 79aece: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79aed2: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 79aed4: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79aed7: /* 79aed7: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 79aedd: mov eax, 0x40000 */
  eax = 0x40000u;
/* 79aee2: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79aee4: je 0x79af97 */
  if (zf) goto L_79af97;
L_79aeea: /* 79aeea: mov edx, dword ptr [edi + 0x3a4] */
  edx = R32((uint32_t)(edi + 0x3a4u));
/* 79aef0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79aef3: xor edx, dword ptr [ecx + 0x3a4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3a4u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 79aef9: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 79aefb: jns 0x79af3f */
  if (!sf) goto L_79af3f;
L_79aefd: /* 79aefd: mov ecx, dword ptr [0xb5be50] */
  ecx = R32((uint32_t)(0xb5be50u));
/* 79af03: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79af05: jne 0x79af30 */
  if (!zf) goto L_79af30;
L_79af07: /* 79af07: mov edx, ecx */
  edx = ecx;
/* 79af09: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79af0b: mov dword ptr [0xb5be50], edx */
  W32((uint32_t)(0xb5be50u), edx);
/* 79af11: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79af12: push 0xacc55c */
  { uint32_t v = 0xacc55cu; esp -= 4; W32(esp, v); }
/* 79af17: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79af1c: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 79af20: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79af25u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79af25: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79af28: mov dword ptr [0xb5be04], eax */
  W32((uint32_t)(0xb5be04u), eax);
/* 79af2d: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79af30: /* 79af30: mov edx, dword ptr [0xb5be04] */
  edx = R32((uint32_t)(0xb5be04u));
/* 79af36: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79af3a: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 79af3c: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79af3f: /* 79af3f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 79af42: mov ecx, dword ptr [edi + 0x3cc] */
  ecx = R32((uint32_t)(edi + 0x3ccu));
/* 79af48: cmp ecx, dword ptr [edx + 0x3cc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x3ccu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79af4e: je 0x79af97 */
  if (zf) goto L_79af97;
L_79af50: /* 79af50: mov eax, dword ptr [0xb5be50] */
  eax = R32((uint32_t)(0xb5be50u));
/* 79af55: test eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79af5a: jne 0x79af89 */
  if (!zf) goto L_79af89;
L_79af5c: /* 79af5c: mov edx, eax */
  edx = eax;
/* 79af5e: or edx, 0x80000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79af64: mov dword ptr [0xb5be50], edx */
  W32((uint32_t)(0xb5be50u), edx);
/* 79af6a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79af6b: push 0xacc568 */
  { uint32_t v = 0xacc568u; esp -= 4; W32(esp, v); }
/* 79af70: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79af75: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 79af79: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79af7eu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79af7e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79af81: mov dword ptr [0xb5be00], eax */
  W32((uint32_t)(0xb5be00u), eax);
/* 79af86: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79af89: /* 79af89: mov eax, dword ptr [0xb5be00] */
  eax = R32((uint32_t)(0xb5be00u));
/* 79af8e: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79af92: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 79af94: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79af97: /* 79af97: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 79af9a: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 79af9d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79afa0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79afa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79afa2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79afa5: lea edx, [ecx + 0x3a8] */
  edx = (uint32_t)(ecx + 0x3a8u);
/* 79afab: mov ecx, esp */
  ecx = esp;
/* 79afad: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 79afb0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79afb1: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79afb7u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79afb7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79afba: lea eax, [edi + 0x3a8] */
  eax = (uint32_t)(edi + 0x3a8u);
/* 79afc0: mov ecx, esp */
  ecx = esp;
/* 79afc2: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 79afc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79afc6: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 79afca: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79afd0u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79afd0: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 79afd3: call 0x6cc865 */
  esp -= 4; W32(esp, 0x79afd8u); SPILL(); f_6cc865(); if (g_unwind) return; RELOAD();
/* 79afd8: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79afdb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79afdd: je 0x79b026 */
  if (zf) goto L_79b026;
L_79afdf: /* 79afdf: mov ecx, dword ptr [0xb5be50] */
  ecx = R32((uint32_t)(0xb5be50u));
/* 79afe5: mov eax, 0x100000 */
  eax = 0x100000u;
/* 79afea: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79afec: jne 0x79b017 */
  if (!zf) goto L_79b017;
L_79afee: /* 79afee: mov edx, ecx */
  edx = ecx;
/* 79aff0: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79aff2: mov dword ptr [0xb5be50], edx */
  W32((uint32_t)(0xb5be50u), edx);
/* 79aff8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79aff9: push 0xacc57c */
  { uint32_t v = 0xacc57cu; esp -= 4; W32(esp, v); }
/* 79affe: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79b003: mov byte ptr [ebp - 4], 0x18 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x18u);
/* 79b007: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79b00cu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79b00c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79b00f: mov dword ptr [0xb5bdfc], eax */
  W32((uint32_t)(0xb5bdfcu), eax);
/* 79b014: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79b017: /* 79b017: mov ecx, dword ptr [0xb5bdfc] */
  ecx = R32((uint32_t)(0xb5bdfcu));
/* 79b01d: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79b021: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 79b023: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79b026: /* 79b026: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 79b029: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 79b02c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 79b02f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79b030: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79b031: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79b034: add edx, 0x3b4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3b4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 79b03a: mov ecx, esp */
  ecx = esp;
/* 79b03c: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 79b03f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79b040: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79b046u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79b046: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79b049: lea eax, [edi + 0x3b4] */
  eax = (uint32_t)(edi + 0x3b4u);
/* 79b04f: mov ecx, esp */
  ecx = esp;
/* 79b051: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* 79b054: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79b055: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 79b059: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79b05fu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79b05f: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 79b062: call 0x6cc865 */
  esp -= 4; W32(esp, 0x79b067u); SPILL(); f_6cc865(); if (g_unwind) return; RELOAD();
/* 79b067: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79b06a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79b06c: je 0x79b0b6 */
  if (zf) goto L_79b0b6;
L_79b06e: /* 79b06e: mov eax, dword ptr [0xb5be50] */
  eax = R32((uint32_t)(0xb5be50u));
/* 79b073: test eax, 0x200000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79b078: jne 0x79b0a7 */
  if (!zf) goto L_79b0a7;
L_79b07a: /* 79b07a: mov edx, eax */
  edx = eax;
/* 79b07c: or edx, 0x200000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79b082: mov dword ptr [0xb5be50], edx */
  W32((uint32_t)(0xb5be50u), edx);
/* 79b088: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79b089: push 0xacc588 */
  { uint32_t v = 0xacc588u; esp -= 4; W32(esp, v); }
/* 79b08e: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79b093: mov byte ptr [ebp - 4], 0x1a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1au);
/* 79b097: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79b09cu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79b09c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79b09f: mov dword ptr [0xb5bdf8], eax */
  W32((uint32_t)(0xb5bdf8u), eax);
/* 79b0a4: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79b0a7: /* 79b0a7: mov ecx, dword ptr [0xb5bdf8] */
  ecx = R32((uint32_t)(0xb5bdf8u));
/* 79b0ad: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79b0b1: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 79b0b3: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79b0b6: /* 79b0b6: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 79b0b9: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 79b0bc: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 79b0bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79b0c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79b0c1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79b0c4: add edx, 0x3c0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3c0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 79b0ca: mov ecx, esp */
  ecx = esp;
/* 79b0cc: mov dword ptr [ebp + 0x18], esp */
  W32((uint32_t)(ebp + 0x18u), esp);
/* 79b0cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79b0d0: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79b0d6u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79b0d6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79b0d9: lea eax, [edi + 0x3c0] */
  eax = (uint32_t)(edi + 0x3c0u);
/* 79b0df: mov ecx, esp */
  ecx = esp;
/* 79b0e1: mov dword ptr [ebp + 0x14], esp */
  W32((uint32_t)(ebp + 0x14u), esp);
/* 79b0e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79b0e5: mov byte ptr [ebp - 4], 0x1b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1bu);
/* 79b0e9: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79b0efu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79b0ef: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 79b0f2: call 0x6cc865 */
  esp -= 4; W32(esp, 0x79b0f7u); SPILL(); f_6cc865(); if (g_unwind) return; RELOAD();
/* 79b0f7: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79b0fa: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79b0fc: je 0x79b145 */
  if (zf) goto L_79b145;
L_79b0fe: /* 79b0fe: mov ecx, dword ptr [0xb5be50] */
  ecx = R32((uint32_t)(0xb5be50u));
/* 79b104: mov eax, 0x400000 */
  eax = 0x400000u;
/* 79b109: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79b10b: jne 0x79b136 */
  if (!zf) goto L_79b136;
L_79b10d: /* 79b10d: mov edx, ecx */
  edx = ecx;
/* 79b10f: or edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 79b111: mov dword ptr [0xb5be50], edx */
  W32((uint32_t)(0xb5be50u), edx);
/* 79b117: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79b118: push 0xacc598 */
  { uint32_t v = 0xacc598u; esp -= 4; W32(esp, v); }
/* 79b11d: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79b122: mov byte ptr [ebp - 4], 0x1c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1cu);
/* 79b126: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79b12bu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79b12b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79b12e: mov dword ptr [0xb5bdf4], eax */
  W32((uint32_t)(0xb5bdf4u), eax);
/* 79b133: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
L_79b136: /* 79b136: mov ecx, dword ptr [0xb5bdf4] */
  ecx = R32((uint32_t)(0xb5bdf4u));
/* 79b13c: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79b140: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 79b142: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79b145: /* 79b145: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79b148: mov eax, dword ptr [edi + 0x3f8] */
  eax = R32((uint32_t)(edi + 0x3f8u));
/* 79b14e: cmp eax, dword ptr [ecx + 0x3f8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x3f8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79b154: je 0x79b198 */
  if (zf) goto L_79b198;
L_79b156: /* 79b156: mov ecx, dword ptr [0xb5be50] */
  ecx = R32((uint32_t)(0xb5be50u));
/* 79b15c: mov eax, 0x800000 */
  eax = 0x800000u;
/* 79b161: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79b163: jne 0x79b189 */
  if (!zf) goto L_79b189;
L_79b165: /* 79b165: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 79b167: mov dword ptr [0xb5be50], ecx */
  W32((uint32_t)(0xb5be50u), ecx);
/* 79b16d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79b16e: push 0xacc5ac */
  { uint32_t v = 0xacc5acu; esp -= 4; W32(esp, v); }
/* 79b173: push 0xb674f8 */
  { uint32_t v = 0xb674f8u; esp -= 4; W32(esp, v); }
/* 79b178: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 79b17c: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79b181u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79b181: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79b184: mov dword ptr [0xb5bdf0], eax */
  W32((uint32_t)(0xb5bdf0u), eax);
L_79b189: /* 79b189: mov edx, dword ptr [0xb5bdf0] */
  edx = R32((uint32_t)(0xb5bdf0u));
/* 79b18f: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79b193: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 79b195: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79b198: /* 79b198: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79b19b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79b19c: mov eax, esi */
  eax = esi;
/* 79b19e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79b19f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79b1a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79b1a7: mov esp, ebp */
  esp = ebp;
/* 79b1a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79b1aa: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_79b1ad(void) {
  LOAD_REGS();
L_79b1ad: /* 79b1ad: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79b1b0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79b1b5: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 79b1b8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79b1b9: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 79b1bc: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79b1c1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79b1c1(); return;
}

void f_79b1c1(void) {
  LOAD_REGS();
L_79b1c1: /* 79b1c1: push 0xa0ab68 */
  { uint32_t v = 0xa0ab68u; esp -= 4; W32(esp, v); }
/* 79b1c6: push 0xacc5b8 */
  { uint32_t v = 0xacc5b8u; esp -= 4; W32(esp, v); }
/* 79b1cb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79b1d1u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79b1d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79b1d4: xor ebx, ebx */
  ebx = 0;
/* 79b1d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79b1d7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79b1d8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79b1ddu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79b1dd: guest_badaddr(0x79b1dd); return;
}

void f_79b470(void) {
  LOAD_REGS();
L_79b470: /* 79b470: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79b471: mov ebp, esp */
  ebp = esp;
/* 79b473: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79b475: push 0x9cdf3c */
  { uint32_t v = 0x9cdf3cu; esp -= 4; W32(esp, v); }
/* 79b47a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79b480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79b481: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79b488: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79b48b: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 79b48e: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 79b491: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79b492: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79b493: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79b494: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 79b497: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79b49a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79b49b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 79b49e: mov esi, ecx */
  esi = ecx;
/* 79b4a0: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 79b4a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79b4a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79b4a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79b4a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79b4a7: mov ecx, esi */
  ecx = esi;
/* 79b4a9: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 79b4ac: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79b4b3: call 0x6c97fa */
  esp -= 4; W32(esp, 0x79b4b8u); SPILL(); f_6c97fa(); if (g_unwind) return; RELOAD();
/* 79b4b8: mov ebx, eax */
  ebx = eax;
/* 79b4ba: mov eax, dword ptr [0xb683f0] */
  eax = R32((uint32_t)(0xb683f0u));
/* 79b4bf: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79b4c2: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
/* 79b4c5: je 0x79c143 */
  if (zf) goto L_79c143;
L_79b4cb: /* 79b4cb: cmp byte ptr [esi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79b4d2: jne 0x79c143 */
  if (!zf) goto L_79c143;
L_79b4d8: /* 79b4d8: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 79b4de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 79b4e0: jns 0x79c143 */
  if (!sf) goto L_79c143;
L_79b4e6: /* 79b4e6: mov ecx, dword ptr [esi + 0x360] */
  ecx = R32((uint32_t)(esi + 0x360u));
/* 79b4ec: cmp ecx, dword ptr [edi + 0x360] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79b4f2: je 0x79b537 */
  if (zf) goto L_79b537;
L_79b4f4: /* 79b4f4: test byte ptr [0xb5bec0], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bec0u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79b4fb: jne 0x79b525 */
  if (!zf) goto L_79b525;
L_79b4fd: /* 79b4fd: or dword ptr [0xb5bec0], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bec0u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bec0u), r);
  }
/* 79b504: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79b506: push 0xacc5c0 */
  { uint32_t v = 0xacc5c0u; esp -= 4; W32(esp, v); }
/* 79b50b: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79b510: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 79b514: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79b519u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79b519: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79b51c: mov dword ptr [0xb5bebc], eax */
  W32((uint32_t)(0xb5bebcu), eax);
/* 79b521: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79b525: /* 79b525: mov edx, dword ptr [0xb5bebc] */
  edx = R32((uint32_t)(0xb5bebcu));
/* 79b52b: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79b52f: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 79b531: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 79b534: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
L_79b537: /* 79b537: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 79b53d: xor ecx, dword ptr [esi + 0x354] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x354u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 79b543: test cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79b546: je 0x79b58b */
  if (zf) goto L_79b58b;
L_79b548: /* 79b548: test byte ptr [0xb5bec0], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bec0u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79b54f: jne 0x79b579 */
  if (!zf) goto L_79b579;
L_79b551: /* 79b551: or dword ptr [0xb5bec0], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bec0u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bec0u), r);
  }
/* 79b558: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79b55a: push 0xacc5e0 */
  { uint32_t v = 0xacc5e0u; esp -= 4; W32(esp, v); }
/* 79b55f: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79b564: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 79b568: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79b56du); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79b56d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79b570: mov dword ptr [0xb5beb8], eax */
  W32((uint32_t)(0xb5beb8u), eax);
/* 79b575: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79b579: /* 79b579: mov edx, dword ptr [0xb5beb8] */
  edx = R32((uint32_t)(0xb5beb8u));
/* 79b57f: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79b583: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 79b585: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 79b588: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
L_79b58b: /* 79b58b: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 79b591: xor ecx, dword ptr [esi + 0x354] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x354u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 79b597: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79b59a: je 0x79b5df */
  if (zf) goto L_79b5df;
L_79b59c: /* 79b59c: test byte ptr [0xb5bec0], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bec0u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79b5a3: jne 0x79b5cd */
  if (!zf) goto L_79b5cd;
L_79b5a5: /* 79b5a5: or dword ptr [0xb5bec0], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bec0u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bec0u), r);
  }
/* 79b5ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79b5ae: push 0xacc600 */
  { uint32_t v = 0xacc600u; esp -= 4; W32(esp, v); }
/* 79b5b3: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79b5b8: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 79b5bc: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79b5c1u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79b5c1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79b5c4: mov dword ptr [0xb5beb4], eax */
  W32((uint32_t)(0xb5beb4u), eax);
/* 79b5c9: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79b5cd: /* 79b5cd: mov edx, dword ptr [0xb5beb4] */
  edx = R32((uint32_t)(0xb5beb4u));
/* 79b5d3: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79b5d7: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 79b5d9: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 79b5dc: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
L_79b5df: /* 79b5df: mov ecx, dword ptr [edi + 0x354] */
  ecx = R32((uint32_t)(edi + 0x354u));
/* 79b5e5: xor ecx, dword ptr [esi + 0x354] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x354u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 79b5eb: test cl, 0x10 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79b5ee: je 0x79b633 */
  if (zf) goto L_79b633;
L_79b5f0: /* 79b5f0: test byte ptr [0xb5bec0], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bec0u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79b5f7: jne 0x79b621 */
  if (!zf) goto L_79b621;
L_79b5f9: /* 79b5f9: or dword ptr [0xb5bec0], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bec0u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bec0u), r);
  }
/* 79b600: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79b602: push 0xacc620 */
  { uint32_t v = 0xacc620u; esp -= 4; W32(esp, v); }
/* 79b607: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79b60c: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 79b610: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79b615u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79b615: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79b618: mov dword ptr [0xb5beb0], eax */
  W32((uint32_t)(0xb5beb0u), eax);
/* 79b61d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79b621: /* 79b621: mov edx, dword ptr [0xb5beb0] */
  edx = R32((uint32_t)(0xb5beb0u));
/* 79b627: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79b62b: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 79b62d: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 79b630: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
L_79b633: /* 79b633: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 79b636: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 79b639: mov eax, dword ptr [edi + 0x3ec] */
  eax = R32((uint32_t)(edi + 0x3ecu));
/* 79b63f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79b640: mov ecx, dword ptr [esi + 0x3ec] */
  ecx = R32((uint32_t)(esi + 0x3ecu));
/* 79b646: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79b647: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79b648: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79b649: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x79b64eu); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 79b64e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79b651: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79b653: je 0x79b698 */
  if (zf) goto L_79b698;
L_79b655: /* 79b655: test byte ptr [0xb5bec0], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bec0u))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79b65c: jne 0x79b686 */
  if (!zf) goto L_79b686;
L_79b65e: /* 79b65e: or dword ptr [0xb5bec0], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bec0u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bec0u), r);
  }
/* 79b665: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79b667: push 0xacc64c */
  { uint32_t v = 0xacc64cu; esp -= 4; W32(esp, v); }
/* 79b66c: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79b671: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 79b675: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79b67au); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79b67a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79b67d: mov dword ptr [0xb5beac], eax */
  W32((uint32_t)(0xb5beacu), eax);
/* 79b682: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79b686: /* 79b686: mov edx, dword ptr [0xb5beac] */
  edx = R32((uint32_t)(0xb5beacu));
/* 79b68c: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79b690: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 79b692: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 79b695: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
L_79b698: /* 79b698: mov ecx, dword ptr [esi + 0x408] */
  ecx = R32((uint32_t)(esi + 0x408u));
/* 79b69e: cmp ecx, dword ptr [edi + 0x408] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x408u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79b6a4: jne 0x79b6c2 */
  if (!zf) goto L_79b6c2;
L_79b6a6: /* 79b6a6: mov edx, dword ptr [esi + 0x40c] */
  edx = R32((uint32_t)(esi + 0x40cu));
/* 79b6ac: cmp edx, dword ptr [edi + 0x40c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x40cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79b6b2: jne 0x79b6c2 */
  if (!zf) goto L_79b6c2;
L_79b6b4: /* 79b6b4: mov eax, dword ptr [esi + 0x410] */
  eax = R32((uint32_t)(esi + 0x410u));
/* 79b6ba: cmp eax, dword ptr [edi + 0x410] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x410u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79b6c0: je 0x79b705 */
  if (zf) goto L_79b705;
L_79b6c2: /* 79b6c2: test byte ptr [0xb5bec0], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bec0u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79b6c9: jne 0x79b6f3 */
  if (!zf) goto L_79b6f3;
L_79b6cb: /* 79b6cb: or dword ptr [0xb5bec0], 0x20 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bec0u))); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bec0u), r);
  }
/* 79b6d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79b6d4: push 0xacc65c */
  { uint32_t v = 0xacc65cu; esp -= 4; W32(esp, v); }
/* 79b6d9: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79b6de: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 79b6e2: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79b6e7u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79b6e7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79b6ea: mov dword ptr [0xb5bea8], eax */
  W32((uint32_t)(0xb5bea8u), eax);
/* 79b6ef: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79b6f3: /* 79b6f3: mov ecx, dword ptr [0xb5bea8] */
  ecx = R32((uint32_t)(0xb5bea8u));
/* 79b6f9: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79b6fd: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 79b6ff: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 79b702: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
L_79b705: /* 79b705: mov eax, dword ptr [esi + 0x418] */
  eax = R32((uint32_t)(esi + 0x418u));
/* 79b70b: cmp eax, dword ptr [edi + 0x418] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x418u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79b711: je 0x79b75b */
  if (zf) goto L_79b75b;
L_79b713: /* 79b713: mov cl, byte ptr [0xb5bec0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bec0u))) & 0xffu);
/* 79b719: mov eax, 0x40 */
  eax = 0x40u;
/* 79b71e: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79b720: jne 0x79b749 */
  if (!zf) goto L_79b749;
L_79b722: /* 79b722: or dword ptr [0xb5bec0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bec0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bec0u), r);
  }
/* 79b728: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79b72a: push 0xacc66c */
  { uint32_t v = 0xacc66cu; esp -= 4; W32(esp, v); }
/* 79b72f: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79b734: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 79b738: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79b73du); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79b73d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79b740: mov dword ptr [0xb5bea4], eax */
  W32((uint32_t)(0xb5bea4u), eax);
/* 79b745: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79b749: /* 79b749: mov ecx, dword ptr [0xb5bea4] */
  ecx = R32((uint32_t)(0xb5bea4u));
/* 79b74f: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79b753: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 79b755: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 79b758: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
L_79b75b: /* 79b75b: mov cl, byte ptr [0xb5bec0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bec0u))) & 0xffu);
/* 79b761: mov eax, 0x80 */
  eax = 0x80u;
/* 79b766: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79b768: jne 0x79b7a0 */
  if (!zf) goto L_79b7a0;
L_79b76a: /* 79b76a: or dword ptr [0xb5bec0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bec0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bec0u), r);
  }
/* 79b770: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 79b774: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79b77au); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79b77a: mov edi, dword ptr [0xcfa5f8] */
  edi = R32((uint32_t)(0xcfa5f8u));
/* 79b780: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79b782: push 0xacc67c */
  { uint32_t v = 0xacc67cu; esp -= 4; W32(esp, v); }
/* 79b787: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79b78c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79b78d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79b78fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79b78f: mov ecx, eax */
  ecx = eax;
/* 79b791: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79b794: mov dword ptr [0xb5bea0], ecx */
  W32((uint32_t)(0xb5bea0u), ecx);
/* 79b79a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79b79e: jmp 0x79b7ac */
  goto L_79b7ac;
L_79b7a0: /* 79b7a0: mov ecx, dword ptr [0xb5bea0] */
  ecx = R32((uint32_t)(0xb5bea0u));
/* 79b7a6: mov edi, dword ptr [0xcfa5f8] */
  edi = R32((uint32_t)(0xcfa5f8u));
L_79b7ac: /* 79b7ac: xor eax, eax */
  eax = 0;
/* 79b7ae: mov edi, edi */
  edi = edi;
L_79b7b0: /* 79b7b0: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 79b7b3: jae 0x79b7dc */
  if (!cf) goto L_79b7dc;
L_79b7b5: /* 79b7b5: mov dl, byte ptr [eax + esi + 0x414] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + esi + 0x414u))) & 0xffu);
/* 79b7bc: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 79b7bf: cmp dl, byte ptr [eax + esi + 0x414] */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax + esi + 0x414u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79b7c6: je 0x79b7d6 */
  if (zf) goto L_79b7d6;
L_79b7c8: /* 79b7c8: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79b7cc: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 79b7ce: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 79b7d0: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 79b7d3: mov dword ptr [ebp + 0x10], ebx */
  W32((uint32_t)(ebp + 0x10u), ebx);
L_79b7d6: /* 79b7d6: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 79b7d9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 79b7da: jmp 0x79b7b0 */
  goto L_79b7b0;
L_79b7dc: /* 79b7dc: mov ecx, dword ptr [0xb5bec0] */
  ecx = R32((uint32_t)(0xb5bec0u));
/* 79b7e2: mov eax, 0x100 */
  eax = 0x100u;
/* 79b7e7: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79b7e9: jne 0x79b818 */
  if (!zf) goto L_79b818;
L_79b7eb: /* 79b7eb: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 79b7ed: mov dword ptr [0xb5bec0], ecx */
  W32((uint32_t)(0xb5bec0u), ecx);
/* 79b7f3: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 79b7f7: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79b7fdu); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79b7fd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79b7ff: push 0xacc6a4 */
  { uint32_t v = 0xacc6a4u; esp -= 4; W32(esp, v); }
/* 79b804: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79b809: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79b80a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79b80cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79b80c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79b80f: mov dword ptr [0xb5be9c], eax */
  W32((uint32_t)(0xb5be9cu), eax);
/* 79b814: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79b818: /* 79b818: xor esi, esi */
  esi = 0;
/* 79b81a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_79b820: /* 79b820: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 79b823: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79b826: jae 0x79b887 */
  if (!cf) goto L_79b887;
L_79b828: /* 79b828: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79b82b: mov edi, dword ptr [ecx + esi*4 + 0x380] */
  edi = R32((uint32_t)(ecx + esi*4 + 0x380u));
/* 79b832: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 79b835: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79b837: mov ebx, dword ptr [eax + esi*4 + 0x380] */
  ebx = R32((uint32_t)(eax + esi*4 + 0x380u));
/* 79b83e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79b83f: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x79b842u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79b842: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79b844: je 0x79b84c */
  if (zf) goto L_79b84c;
L_79b846: /* 79b846: xor eax, eax */
  eax = 0;
/* 79b848: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79b84a: jmp 0x79b85d */
  goto L_79b85d;
L_79b84c: /* 79b84c: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 79b84f: mov dword ptr [eax + 0x90], 1 */
  W32((uint32_t)(eax + 0x90u), 0x1u);
/* 79b859: xor eax, eax */
  eax = 0;
/* 79b85b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_79b85d: /* 79b85d: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 79b860: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79b862: je 0x79b87b */
  if (zf) goto L_79b87b;
L_79b864: /* 79b864: mov ecx, dword ptr [0xb5be9c] */
  ecx = R32((uint32_t)(0xb5be9cu));
/* 79b86a: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79b86e: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79b871: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 79b873: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 79b875: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79b878: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_79b87b: /* 79b87b: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 79b87e: mov edi, dword ptr [0xcfa5f8] */
  edi = R32((uint32_t)(0xcfa5f8u));
/* 79b884: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 79b885: jmp 0x79b820 */
  goto L_79b820;
L_79b887: /* 79b887: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79b88a: mov ecx, dword ptr [eax + 0x37c] */
  ecx = R32((uint32_t)(eax + 0x37cu));
/* 79b890: xor ecx, dword ptr [edx + 0x37c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x37cu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 79b896: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79b899: je 0x79b8e5 */
  if (zf) goto L_79b8e5;
L_79b89b: /* 79b89b: mov ecx, dword ptr [0xb5bec0] */
  ecx = R32((uint32_t)(0xb5bec0u));
/* 79b8a1: mov eax, 0x200 */
  eax = 0x200u;
/* 79b8a6: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79b8a8: jne 0x79b8d7 */
  if (!zf) goto L_79b8d7;
L_79b8aa: /* 79b8aa: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 79b8ac: mov dword ptr [0xb5bec0], ecx */
  W32((uint32_t)(0xb5bec0u), ecx);
/* 79b8b2: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 79b8b6: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79b8bcu); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79b8bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79b8be: push 0xacc6b0 */
  { uint32_t v = 0xacc6b0u; esp -= 4; W32(esp, v); }
/* 79b8c3: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79b8c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79b8c9: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79b8cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79b8cb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79b8ce: mov dword ptr [0xb5be98], eax */
  W32((uint32_t)(0xb5be98u), eax);
/* 79b8d3: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79b8d7: /* 79b8d7: mov eax, dword ptr [0xb5be98] */
  eax = R32((uint32_t)(0xb5be98u));
/* 79b8dc: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79b8e0: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 79b8e2: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_79b8e5: /* 79b8e5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79b8e8: test dword ptr [edx + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79b8f2: je 0x79c143 */
  if (zf) goto L_79c143;
L_79b8f8: /* 79b8f8: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 79b8fb: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 79b8fe: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79b901: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79b902: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79b903: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79b906: lea edx, [ecx + 0x33c] */
  edx = (uint32_t)(ecx + 0x33cu);
/* 79b90c: mov ecx, esp */
  ecx = esp;
/* 79b90e: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 79b911: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79b912: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79b918u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79b918: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 79b91b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79b91e: add eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79b923: mov ecx, esp */
  ecx = esp;
/* 79b925: mov dword ptr [ebp + 0x18], esp */
  W32((uint32_t)(ebp + 0x18u), esp);
/* 79b928: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79b929: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 79b92d: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79b933u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79b933: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79b937: call 0x6cc865 */
  esp -= 4; W32(esp, 0x79b93cu); SPILL(); f_6cc865(); if (g_unwind) return; RELOAD();
/* 79b93c: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79b93f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79b941: je 0x79b98e */
  if (zf) goto L_79b98e;
L_79b943: /* 79b943: mov ecx, dword ptr [0xb5bec0] */
  ecx = R32((uint32_t)(0xb5bec0u));
/* 79b949: mov eax, 0x400 */
  eax = 0x400u;
/* 79b94e: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79b950: jne 0x79b97f */
  if (!zf) goto L_79b97f;
L_79b952: /* 79b952: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 79b954: mov dword ptr [0xb5bec0], ecx */
  W32((uint32_t)(0xb5bec0u), ecx);
/* 79b95a: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 79b95e: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79b964u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79b964: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79b966: push 0xacc6c8 */
  { uint32_t v = 0xacc6c8u; esp -= 4; W32(esp, v); }
/* 79b96b: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79b970: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79b971: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79b973u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79b973: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79b976: mov dword ptr [0xb5be94], eax */
  W32((uint32_t)(0xb5be94u), eax);
/* 79b97b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79b97f: /* 79b97f: mov ecx, dword ptr [0xb5be94] */
  ecx = R32((uint32_t)(0xb5be94u));
/* 79b985: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79b989: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 79b98b: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_79b98e: /* 79b98e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 79b991: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79b994: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79b995: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79b996: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79b999: lea edx, [ecx + 0x348] */
  edx = (uint32_t)(ecx + 0x348u);
/* 79b99f: mov ecx, esp */
  ecx = esp;
/* 79b9a1: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 79b9a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79b9a5: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79b9abu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79b9ab: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 79b9ae: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79b9b1: add eax, 0x348 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x348u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79b9b6: mov ecx, esp */
  ecx = esp;
/* 79b9b8: mov dword ptr [ebp + 0x18], esp */
  W32((uint32_t)(ebp + 0x18u), esp);
/* 79b9bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79b9bc: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 79b9c0: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79b9c6u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79b9c6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79b9ca: call 0x6cc865 */
  esp -= 4; W32(esp, 0x79b9cfu); SPILL(); f_6cc865(); if (g_unwind) return; RELOAD();
/* 79b9cf: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79b9d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79b9d4: je 0x79ba21 */
  if (zf) goto L_79ba21;
L_79b9d6: /* 79b9d6: mov ecx, dword ptr [0xb5bec0] */
  ecx = R32((uint32_t)(0xb5bec0u));
/* 79b9dc: mov eax, 0x800 */
  eax = 0x800u;
/* 79b9e1: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79b9e3: jne 0x79ba12 */
  if (!zf) goto L_79ba12;
L_79b9e5: /* 79b9e5: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 79b9e7: mov dword ptr [0xb5bec0], ecx */
  W32((uint32_t)(0xb5bec0u), ecx);
/* 79b9ed: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 79b9f1: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79b9f7u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79b9f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79b9f9: push 0xacc6dc */
  { uint32_t v = 0xacc6dcu; esp -= 4; W32(esp, v); }
/* 79b9fe: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79ba03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79ba04: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79ba06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79ba06: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79ba09: mov dword ptr [0xb5be90], eax */
  W32((uint32_t)(0xb5be90u), eax);
/* 79ba0e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79ba12: /* 79ba12: mov ecx, dword ptr [0xb5be90] */
  ecx = R32((uint32_t)(0xb5be90u));
/* 79ba18: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79ba1c: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 79ba1e: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_79ba21: /* 79ba21: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79ba24: mov ecx, dword ptr [eax + 0x354] */
  ecx = R32((uint32_t)(eax + 0x354u));
/* 79ba2a: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79ba2d: xor ecx, dword ptr [edx + 0x354] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x354u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 79ba33: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ba36: je 0x79ba82 */
  if (zf) goto L_79ba82;
L_79ba38: /* 79ba38: mov ecx, dword ptr [0xb5bec0] */
  ecx = R32((uint32_t)(0xb5bec0u));
/* 79ba3e: mov eax, 0x1000 */
  eax = 0x1000u;
/* 79ba43: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79ba45: jne 0x79ba74 */
  if (!zf) goto L_79ba74;
L_79ba47: /* 79ba47: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 79ba49: mov dword ptr [0xb5bec0], ecx */
  W32((uint32_t)(0xb5bec0u), ecx);
/* 79ba4f: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 79ba53: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79ba59u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79ba59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79ba5b: push 0xacc6f0 */
  { uint32_t v = 0xacc6f0u; esp -= 4; W32(esp, v); }
/* 79ba60: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79ba65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79ba66: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79ba68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79ba68: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79ba6b: mov dword ptr [0xb5be8c], eax */
  W32((uint32_t)(0xb5be8cu), eax);
/* 79ba70: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79ba74: /* 79ba74: mov eax, dword ptr [0xb5be8c] */
  eax = R32((uint32_t)(0xb5be8cu));
/* 79ba79: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79ba7d: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 79ba7f: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_79ba82: /* 79ba82: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79ba85: mov eax, dword ptr [edx + 0x358] */
  eax = R32((uint32_t)(edx + 0x358u));
/* 79ba8b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79ba8e: cmp eax, dword ptr [ecx + 0x358] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x358u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79ba94: je 0x79bae1 */
  if (zf) goto L_79bae1;
L_79ba96: /* 79ba96: mov ecx, dword ptr [0xb5bec0] */
  ecx = R32((uint32_t)(0xb5bec0u));
/* 79ba9c: mov eax, 0x2000 */
  eax = 0x2000u;
/* 79baa1: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79baa3: jne 0x79bad2 */
  if (!zf) goto L_79bad2;
L_79baa5: /* 79baa5: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 79baa7: mov dword ptr [0xb5bec0], ecx */
  W32((uint32_t)(0xb5bec0u), ecx);
/* 79baad: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 79bab1: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79bab7u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79bab7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79bab9: push 0xacc704 */
  { uint32_t v = 0xacc704u; esp -= 4; W32(esp, v); }
/* 79babe: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79bac3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79bac4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79bac6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79bac6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79bac9: mov dword ptr [0xb5be88], eax */
  W32((uint32_t)(0xb5be88u), eax);
/* 79bace: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79bad2: /* 79bad2: mov edx, dword ptr [0xb5be88] */
  edx = R32((uint32_t)(0xb5be88u));
/* 79bad8: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79badc: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 79bade: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_79bae1: /* 79bae1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79bae4: mov edx, dword ptr [ecx + 0x35c] */
  edx = R32((uint32_t)(ecx + 0x35cu));
/* 79baea: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79baed: cmp edx, dword ptr [eax + 0x35c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x35cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79baf3: je 0x79bb40 */
  if (zf) goto L_79bb40;
L_79baf5: /* 79baf5: mov ecx, dword ptr [0xb5bec0] */
  ecx = R32((uint32_t)(0xb5bec0u));
/* 79bafb: mov eax, 0x4000 */
  eax = 0x4000u;
/* 79bb00: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79bb02: jne 0x79bb31 */
  if (!zf) goto L_79bb31;
L_79bb04: /* 79bb04: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 79bb06: mov dword ptr [0xb5bec0], ecx */
  W32((uint32_t)(0xb5bec0u), ecx);
/* 79bb0c: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 79bb10: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79bb16u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79bb16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79bb18: push 0xacc720 */
  { uint32_t v = 0xacc720u; esp -= 4; W32(esp, v); }
/* 79bb1d: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79bb22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79bb23: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79bb25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79bb25: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79bb28: mov dword ptr [0xb5be84], eax */
  W32((uint32_t)(0xb5be84u), eax);
/* 79bb2d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79bb31: /* 79bb31: mov ecx, dword ptr [0xb5be84] */
  ecx = R32((uint32_t)(0xb5be84u));
/* 79bb37: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79bb3b: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 79bb3d: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_79bb40: /* 79bb40: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 79bb43: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79bb46: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79bb47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79bb48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79bb4b: lea edx, [ecx + 0x388] */
  edx = (uint32_t)(ecx + 0x388u);
/* 79bb51: mov ecx, esp */
  ecx = esp;
/* 79bb53: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 79bb56: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79bb57: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79bb5du); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79bb5d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 79bb60: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79bb63: add eax, 0x388 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x388u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79bb68: mov ecx, esp */
  ecx = esp;
/* 79bb6a: mov dword ptr [ebp + 0x18], esp */
  W32((uint32_t)(ebp + 0x18u), esp);
/* 79bb6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79bb6e: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 79bb72: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79bb78u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79bb78: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79bb7c: call 0x6cc865 */
  esp -= 4; W32(esp, 0x79bb81u); SPILL(); f_6cc865(); if (g_unwind) return; RELOAD();
/* 79bb81: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79bb84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79bb86: je 0x79bbd3 */
  if (zf) goto L_79bbd3;
L_79bb88: /* 79bb88: mov ecx, dword ptr [0xb5bec0] */
  ecx = R32((uint32_t)(0xb5bec0u));
/* 79bb8e: mov eax, 0x8000 */
  eax = 0x8000u;
/* 79bb93: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79bb95: jne 0x79bbc4 */
  if (!zf) goto L_79bbc4;
L_79bb97: /* 79bb97: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 79bb99: mov dword ptr [0xb5bec0], ecx */
  W32((uint32_t)(0xb5bec0u), ecx);
/* 79bb9f: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 79bba3: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79bba9u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79bba9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79bbab: push 0xacc738 */
  { uint32_t v = 0xacc738u; esp -= 4; W32(esp, v); }
/* 79bbb0: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79bbb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79bbb6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79bbb8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79bbb8: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79bbbb: mov dword ptr [0xb5be80], eax */
  W32((uint32_t)(0xb5be80u), eax);
/* 79bbc0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79bbc4: /* 79bbc4: mov ecx, dword ptr [0xb5be80] */
  ecx = R32((uint32_t)(0xb5be80u));
/* 79bbca: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79bbce: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 79bbd0: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_79bbd3: /* 79bbd3: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 79bbd6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79bbd9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79bbda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79bbdb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79bbde: lea edx, [ecx + 0x394] */
  edx = (uint32_t)(ecx + 0x394u);
/* 79bbe4: mov ecx, esp */
  ecx = esp;
/* 79bbe6: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 79bbe9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79bbea: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79bbf0u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79bbf0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 79bbf3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79bbf6: add eax, 0x394 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x394u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79bbfb: mov ecx, esp */
  ecx = esp;
/* 79bbfd: mov dword ptr [ebp + 0x18], esp */
  W32((uint32_t)(ebp + 0x18u), esp);
/* 79bc00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79bc01: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 79bc05: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79bc0bu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79bc0b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79bc0f: call 0x6cc865 */
  esp -= 4; W32(esp, 0x79bc14u); SPILL(); f_6cc865(); if (g_unwind) return; RELOAD();
/* 79bc14: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79bc17: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79bc19: je 0x79bc66 */
  if (zf) goto L_79bc66;
L_79bc1b: /* 79bc1b: mov ecx, dword ptr [0xb5bec0] */
  ecx = R32((uint32_t)(0xb5bec0u));
/* 79bc21: mov eax, 0x10000 */
  eax = 0x10000u;
/* 79bc26: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79bc28: jne 0x79bc57 */
  if (!zf) goto L_79bc57;
L_79bc2a: /* 79bc2a: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 79bc2c: mov dword ptr [0xb5bec0], ecx */
  W32((uint32_t)(0xb5bec0u), ecx);
/* 79bc32: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 79bc36: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79bc3cu); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79bc3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79bc3e: push 0xacc750 */
  { uint32_t v = 0xacc750u; esp -= 4; W32(esp, v); }
/* 79bc43: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79bc48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79bc49: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79bc4bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79bc4b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79bc4e: mov dword ptr [0xb5be7c], eax */
  W32((uint32_t)(0xb5be7cu), eax);
/* 79bc53: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79bc57: /* 79bc57: mov ecx, dword ptr [0xb5be7c] */
  ecx = R32((uint32_t)(0xb5be7cu));
/* 79bc5d: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79bc61: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 79bc63: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_79bc66: /* 79bc66: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 79bc69: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79bc6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79bc6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79bc6e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79bc71: lea edx, [ecx + 0x3a0] */
  edx = (uint32_t)(ecx + 0x3a0u);
/* 79bc77: mov ecx, esp */
  ecx = esp;
/* 79bc79: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 79bc7c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79bc7d: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79bc83u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79bc83: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 79bc86: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79bc89: add eax, 0x3a0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3a0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79bc8e: mov ecx, esp */
  ecx = esp;
/* 79bc90: mov dword ptr [ebp + 0x18], esp */
  W32((uint32_t)(ebp + 0x18u), esp);
/* 79bc93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79bc94: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 79bc98: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79bc9eu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79bc9e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79bca2: call 0x6cc865 */
  esp -= 4; W32(esp, 0x79bca7u); SPILL(); f_6cc865(); if (g_unwind) return; RELOAD();
/* 79bca7: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79bcaa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79bcac: je 0x79bcf9 */
  if (zf) goto L_79bcf9;
L_79bcae: /* 79bcae: mov ecx, dword ptr [0xb5bec0] */
  ecx = R32((uint32_t)(0xb5bec0u));
/* 79bcb4: mov eax, 0x20000 */
  eax = 0x20000u;
/* 79bcb9: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79bcbb: jne 0x79bcea */
  if (!zf) goto L_79bcea;
L_79bcbd: /* 79bcbd: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 79bcbf: mov dword ptr [0xb5bec0], ecx */
  W32((uint32_t)(0xb5bec0u), ecx);
/* 79bcc5: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 79bcc9: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79bccfu); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79bccf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79bcd1: push 0xacc764 */
  { uint32_t v = 0xacc764u; esp -= 4; W32(esp, v); }
/* 79bcd6: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79bcdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79bcdc: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79bcdeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79bcde: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79bce1: mov dword ptr [0xb5be78], eax */
  W32((uint32_t)(0xb5be78u), eax);
/* 79bce6: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79bcea: /* 79bcea: mov ecx, dword ptr [0xb5be78] */
  ecx = R32((uint32_t)(0xb5be78u));
/* 79bcf0: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79bcf4: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 79bcf6: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_79bcf9: /* 79bcf9: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 79bcfc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79bcff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79bd00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79bd01: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79bd04: lea edx, [ecx + 0x3ac] */
  edx = (uint32_t)(ecx + 0x3acu);
/* 79bd0a: mov ecx, esp */
  ecx = esp;
/* 79bd0c: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 79bd0f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79bd10: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79bd16u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79bd16: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 79bd19: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79bd1c: add eax, 0x3ac */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3acu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79bd21: mov ecx, esp */
  ecx = esp;
/* 79bd23: mov dword ptr [ebp + 0x18], esp */
  W32((uint32_t)(ebp + 0x18u), esp);
/* 79bd26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79bd27: mov byte ptr [ebp - 4], 0x18 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x18u);
/* 79bd2b: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79bd31u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79bd31: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79bd35: call 0x6cc865 */
  esp -= 4; W32(esp, 0x79bd3au); SPILL(); f_6cc865(); if (g_unwind) return; RELOAD();
/* 79bd3a: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79bd3d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79bd3f: je 0x79bd8b */
  if (zf) goto L_79bd8b;
L_79bd41: /* 79bd41: mov eax, dword ptr [0xb5bec0] */
  eax = R32((uint32_t)(0xb5bec0u));
/* 79bd46: test eax, 0x40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79bd4b: jne 0x79bd7c */
  if (!zf) goto L_79bd7c;
L_79bd4d: /* 79bd4d: or eax, 0x40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 79bd52: mov dword ptr [0xb5bec0], eax */
  W32((uint32_t)(0xb5bec0u), eax);
/* 79bd57: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 79bd5b: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79bd61u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79bd61: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79bd63: push 0xacc778 */
  { uint32_t v = 0xacc778u; esp -= 4; W32(esp, v); }
/* 79bd68: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79bd6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79bd6e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79bd70u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79bd70: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79bd73: mov dword ptr [0xb5be74], eax */
  W32((uint32_t)(0xb5be74u), eax);
/* 79bd78: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79bd7c: /* 79bd7c: mov ecx, dword ptr [0xb5be74] */
  ecx = R32((uint32_t)(0xb5be74u));
/* 79bd82: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79bd86: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 79bd88: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_79bd8b: /* 79bd8b: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 79bd8e: mov ecx, dword ptr [eax + 0x3b8] */
  ecx = R32((uint32_t)(eax + 0x3b8u));
/* 79bd94: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 79bd97: cmp ecx, dword ptr [edx + 0x3b8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x3b8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79bd9d: je 0x79bde9 */
  if (zf) goto L_79bde9;
L_79bd9f: /* 79bd9f: mov ecx, dword ptr [0xb5bec0] */
  ecx = R32((uint32_t)(0xb5bec0u));
/* 79bda5: mov eax, 0x80000 */
  eax = 0x80000u;
/* 79bdaa: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79bdac: jne 0x79bddb */
  if (!zf) goto L_79bddb;
L_79bdae: /* 79bdae: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 79bdb0: mov dword ptr [0xb5bec0], ecx */
  W32((uint32_t)(0xb5bec0u), ecx);
/* 79bdb6: mov byte ptr [ebp - 4], 0x1a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1au);
/* 79bdba: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79bdc0u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79bdc0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79bdc2: push 0xacc790 */
  { uint32_t v = 0xacc790u; esp -= 4; W32(esp, v); }
/* 79bdc7: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79bdcc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79bdcd: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79bdcfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79bdcf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79bdd2: mov dword ptr [0xb5be70], eax */
  W32((uint32_t)(0xb5be70u), eax);
/* 79bdd7: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79bddb: /* 79bddb: mov eax, dword ptr [0xb5be70] */
  eax = R32((uint32_t)(0xb5be70u));
/* 79bde0: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79bde4: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 79bde6: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_79bde9: /* 79bde9: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 79bdec: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79bdef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79bdf0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79bdf1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79bdf4: add eax, 0x3bc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3bcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79bdf9: mov ecx, esp */
  ecx = esp;
/* 79bdfb: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 79bdfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79bdff: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79be05u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79be05: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79be08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79be0b: lea edx, [ecx + 0x3bc] */
  edx = (uint32_t)(ecx + 0x3bcu);
/* 79be11: mov ecx, esp */
  ecx = esp;
/* 79be13: mov dword ptr [ebp + 0x18], esp */
  W32((uint32_t)(ebp + 0x18u), esp);
/* 79be16: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79be17: mov byte ptr [ebp - 4], 0x1b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1bu);
/* 79be1b: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79be21u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79be21: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79be25: call 0x6cc865 */
  esp -= 4; W32(esp, 0x79be2au); SPILL(); f_6cc865(); if (g_unwind) return; RELOAD();
/* 79be2a: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79be2d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79be2f: je 0x79be7b */
  if (zf) goto L_79be7b;
L_79be31: /* 79be31: mov ecx, dword ptr [0xb5bec0] */
  ecx = R32((uint32_t)(0xb5bec0u));
/* 79be37: mov eax, 0x100000 */
  eax = 0x100000u;
/* 79be3c: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79be3e: jne 0x79be6d */
  if (!zf) goto L_79be6d;
L_79be40: /* 79be40: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 79be42: mov dword ptr [0xb5bec0], ecx */
  W32((uint32_t)(0xb5bec0u), ecx);
/* 79be48: mov byte ptr [ebp - 4], 0x1c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1cu);
/* 79be4c: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79be52u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79be52: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79be54: push 0xacc7ac */
  { uint32_t v = 0xacc7acu; esp -= 4; W32(esp, v); }
/* 79be59: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79be5e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79be5f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79be61u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79be61: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79be64: mov dword ptr [0xb5be6c], eax */
  W32((uint32_t)(0xb5be6cu), eax);
/* 79be69: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79be6d: /* 79be6d: mov eax, dword ptr [0xb5be6c] */
  eax = R32((uint32_t)(0xb5be6cu));
/* 79be72: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79be76: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 79be78: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_79be7b: /* 79be7b: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 79be7e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79be81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79be82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79be83: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79be86: add eax, 0x3c8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3c8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79be8b: mov ecx, esp */
  ecx = esp;
/* 79be8d: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 79be90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79be91: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79be97u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79be97: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79be9a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79be9d: lea edx, [ecx + 0x3c8] */
  edx = (uint32_t)(ecx + 0x3c8u);
/* 79bea3: mov ecx, esp */
  ecx = esp;
/* 79bea5: mov dword ptr [ebp + 0x18], esp */
  W32((uint32_t)(ebp + 0x18u), esp);
/* 79bea8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79bea9: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 79bead: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79beb3u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79beb3: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79beb7: call 0x6cc865 */
  esp -= 4; W32(esp, 0x79bebcu); SPILL(); f_6cc865(); if (g_unwind) return; RELOAD();
/* 79bebc: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79bebf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79bec1: je 0x79bf0d */
  if (zf) goto L_79bf0d;
L_79bec3: /* 79bec3: mov ecx, dword ptr [0xb5bec0] */
  ecx = R32((uint32_t)(0xb5bec0u));
/* 79bec9: mov eax, 0x200000 */
  eax = 0x200000u;
/* 79bece: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79bed0: jne 0x79beff */
  if (!zf) goto L_79beff;
L_79bed2: /* 79bed2: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 79bed4: mov dword ptr [0xb5bec0], ecx */
  W32((uint32_t)(0xb5bec0u), ecx);
/* 79beda: mov byte ptr [ebp - 4], 0x1e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1eu);
/* 79bede: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79bee4u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79bee4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79bee6: push 0xacc7c0 */
  { uint32_t v = 0xacc7c0u; esp -= 4; W32(esp, v); }
/* 79beeb: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79bef0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79bef1: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79bef3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79bef3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79bef6: mov dword ptr [0xb5be68], eax */
  W32((uint32_t)(0xb5be68u), eax);
/* 79befb: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79beff: /* 79beff: mov eax, dword ptr [0xb5be68] */
  eax = R32((uint32_t)(0xb5be68u));
/* 79bf04: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79bf08: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 79bf0a: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_79bf0d: /* 79bf0d: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 79bf10: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79bf13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79bf14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79bf15: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79bf18: add eax, 0x3d4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3d4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79bf1d: mov ecx, esp */
  ecx = esp;
/* 79bf1f: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 79bf22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79bf23: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79bf29u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79bf29: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79bf2c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79bf2f: lea edx, [ecx + 0x3d4] */
  edx = (uint32_t)(ecx + 0x3d4u);
/* 79bf35: mov ecx, esp */
  ecx = esp;
/* 79bf37: mov dword ptr [ebp + 0x18], esp */
  W32((uint32_t)(ebp + 0x18u), esp);
/* 79bf3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79bf3b: mov byte ptr [ebp - 4], 0x1f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1fu);
/* 79bf3f: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79bf45u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79bf45: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79bf49: call 0x6cc865 */
  esp -= 4; W32(esp, 0x79bf4eu); SPILL(); f_6cc865(); if (g_unwind) return; RELOAD();
/* 79bf4e: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79bf51: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79bf53: je 0x79bf9f */
  if (zf) goto L_79bf9f;
L_79bf55: /* 79bf55: mov ecx, dword ptr [0xb5bec0] */
  ecx = R32((uint32_t)(0xb5bec0u));
/* 79bf5b: mov eax, 0x400000 */
  eax = 0x400000u;
/* 79bf60: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79bf62: jne 0x79bf91 */
  if (!zf) goto L_79bf91;
L_79bf64: /* 79bf64: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 79bf66: mov dword ptr [0xb5bec0], ecx */
  W32((uint32_t)(0xb5bec0u), ecx);
/* 79bf6c: mov byte ptr [ebp - 4], 0x20 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x20u);
/* 79bf70: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79bf76u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79bf76: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79bf78: push 0xacc7d4 */
  { uint32_t v = 0xacc7d4u; esp -= 4; W32(esp, v); }
/* 79bf7d: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79bf82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79bf83: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79bf85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79bf85: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79bf88: mov dword ptr [0xb5be64], eax */
  W32((uint32_t)(0xb5be64u), eax);
/* 79bf8d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79bf91: /* 79bf91: mov eax, dword ptr [0xb5be64] */
  eax = R32((uint32_t)(0xb5be64u));
/* 79bf96: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79bf9a: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 79bf9c: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_79bf9f: /* 79bf9f: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 79bfa2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79bfa5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79bfa6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79bfa7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79bfaa: add eax, 0x3e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3e0u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79bfaf: mov ecx, esp */
  ecx = esp;
/* 79bfb1: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 79bfb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79bfb5: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79bfbbu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79bfbb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79bfbe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79bfc1: lea edx, [ecx + 0x3e0] */
  edx = (uint32_t)(ecx + 0x3e0u);
/* 79bfc7: mov ecx, esp */
  ecx = esp;
/* 79bfc9: mov dword ptr [ebp + 0x14], esp */
  W32((uint32_t)(ebp + 0x14u), esp);
/* 79bfcc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79bfcd: mov byte ptr [ebp - 4], 0x21 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 79bfd1: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79bfd7u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79bfd7: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79bfdb: call 0x6cc865 */
  esp -= 4; W32(esp, 0x79bfe0u); SPILL(); f_6cc865(); if (g_unwind) return; RELOAD();
/* 79bfe0: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79bfe3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79bfe5: je 0x79c031 */
  if (zf) goto L_79c031;
L_79bfe7: /* 79bfe7: mov ecx, dword ptr [0xb5bec0] */
  ecx = R32((uint32_t)(0xb5bec0u));
/* 79bfed: mov eax, 0x800000 */
  eax = 0x800000u;
/* 79bff2: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79bff4: jne 0x79c023 */
  if (!zf) goto L_79c023;
L_79bff6: /* 79bff6: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 79bff8: mov dword ptr [0xb5bec0], ecx */
  W32((uint32_t)(0xb5bec0u), ecx);
/* 79bffe: mov byte ptr [ebp - 4], 0x22 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x22u);
/* 79c002: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79c008u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79c008: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79c00a: push 0xacc7e8 */
  { uint32_t v = 0xacc7e8u; esp -= 4; W32(esp, v); }
/* 79c00f: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79c014: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79c015: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79c017u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79c017: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79c01a: mov dword ptr [0xb5be60], eax */
  W32((uint32_t)(0xb5be60u), eax);
/* 79c01f: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79c023: /* 79c023: mov eax, dword ptr [0xb5be60] */
  eax = R32((uint32_t)(0xb5be60u));
/* 79c028: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79c02c: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 79c02e: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_79c031: /* 79c031: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79c034: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 79c037: mov eax, dword ptr [edx + 0x370] */
  eax = R32((uint32_t)(edx + 0x370u));
/* 79c03d: cmp eax, dword ptr [esi + 0x370] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x370u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79c043: je 0x79c090 */
  if (zf) goto L_79c090;
L_79c045: /* 79c045: mov ecx, dword ptr [0xb5bec0] */
  ecx = R32((uint32_t)(0xb5bec0u));
/* 79c04b: mov eax, 0x1000000 */
  eax = 0x1000000u;
/* 79c050: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79c052: jne 0x79c081 */
  if (!zf) goto L_79c081;
L_79c054: /* 79c054: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 79c056: mov dword ptr [0xb5bec0], ecx */
  W32((uint32_t)(0xb5bec0u), ecx);
/* 79c05c: mov byte ptr [ebp - 4], 0x23 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x23u);
/* 79c060: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79c066u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79c066: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79c068: push 0xacc7fc */
  { uint32_t v = 0xacc7fcu; esp -= 4; W32(esp, v); }
/* 79c06d: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79c072: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79c073: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79c075u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79c075: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79c078: mov dword ptr [0xb5be5c], eax */
  W32((uint32_t)(0xb5be5cu), eax);
/* 79c07d: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79c081: /* 79c081: mov ecx, dword ptr [0xb5be5c] */
  ecx = R32((uint32_t)(0xb5be5cu));
/* 79c087: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79c08b: mov dword ptr [ebx], edx */
  W32((uint32_t)(ebx), edx);
/* 79c08d: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_79c090: /* 79c090: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 79c093: mov ecx, dword ptr [eax + 0x374] */
  ecx = R32((uint32_t)(eax + 0x374u));
/* 79c099: cmp ecx, dword ptr [esi + 0x374] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x374u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79c09f: je 0x79c0ec */
  if (zf) goto L_79c0ec;
L_79c0a1: /* 79c0a1: mov ecx, dword ptr [0xb5bec0] */
  ecx = R32((uint32_t)(0xb5bec0u));
/* 79c0a7: mov eax, 0x2000000 */
  eax = 0x2000000u;
/* 79c0ac: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79c0ae: jne 0x79c0dd */
  if (!zf) goto L_79c0dd;
L_79c0b0: /* 79c0b0: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 79c0b2: mov dword ptr [0xb5bec0], ecx */
  W32((uint32_t)(0xb5bec0u), ecx);
/* 79c0b8: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 79c0bc: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79c0c2u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79c0c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79c0c4: push 0xacc810 */
  { uint32_t v = 0xacc810u; esp -= 4; W32(esp, v); }
/* 79c0c9: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79c0ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79c0cf: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79c0d1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79c0d1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79c0d4: mov dword ptr [0xb5be58], eax */
  W32((uint32_t)(0xb5be58u), eax);
/* 79c0d9: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79c0dd: /* 79c0dd: mov edx, dword ptr [0xb5be58] */
  edx = R32((uint32_t)(0xb5be58u));
/* 79c0e3: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79c0e7: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 79c0e9: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_79c0ec: /* 79c0ec: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 79c0ef: mov edx, dword ptr [ecx + 0x378] */
  edx = R32((uint32_t)(ecx + 0x378u));
/* 79c0f5: cmp edx, dword ptr [esi + 0x378] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x378u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79c0fb: je 0x79c143 */
  if (zf) goto L_79c143;
L_79c0fd: /* 79c0fd: mov ecx, dword ptr [0xb5bec0] */
  ecx = R32((uint32_t)(0xb5bec0u));
/* 79c103: mov eax, 0x4000000 */
  eax = 0x4000000u;
/* 79c108: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79c10a: jne 0x79c135 */
  if (!zf) goto L_79c135;
L_79c10c: /* 79c10c: or ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 79c10e: mov dword ptr [0xb5bec0], ecx */
  W32((uint32_t)(0xb5bec0u), ecx);
/* 79c114: mov byte ptr [ebp - 4], 0x25 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x25u);
/* 79c118: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79c11eu); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79c11e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79c120: push 0xacc824 */
  { uint32_t v = 0xacc824u; esp -= 4; W32(esp, v); }
/* 79c125: push 0xb67f58 */
  { uint32_t v = 0xb67f58u; esp -= 4; W32(esp, v); }
/* 79c12a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79c12b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x79c12du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79c12d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79c130: mov dword ptr [0xb5be54], eax */
  W32((uint32_t)(0xb5be54u), eax);
L_79c135: /* 79c135: mov eax, dword ptr [0xb5be54] */
  eax = R32((uint32_t)(0xb5be54u));
/* 79c13a: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79c13e: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 79c140: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_79c143: /* 79c143: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79c146: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79c147: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79c148: mov eax, ebx */
  eax = ebx;
/* 79c14a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79c151: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79c152: mov esp, ebp */
  esp = ebp;
/* 79c154: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79c155: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_79c158(void) {
  LOAD_REGS();
L_79c158: /* 79c158: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 79c15b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79c160: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 79c163: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79c164: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 79c167: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79c16cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79c16c(); return;
}

void f_79c16c(void) {
  LOAD_REGS();
L_79c16c: /* 79c16c: push 0xa0abd8 */
  { uint32_t v = 0xa0abd8u; esp -= 4; W32(esp, v); }
/* 79c171: push 0xacc838 */
  { uint32_t v = 0xacc838u; esp -= 4; W32(esp, v); }
/* 79c176: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79c17cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79c17c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79c17f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79c181: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79c183: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79c188u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79c188: guest_badaddr(0x79c188); return;
}

void f_79c4e0(void) {
  LOAD_REGS();
L_79c4e0: /* 79c4e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79c4e1: mov ebp, esp */
  ebp = esp;
/* 79c4e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79c4e5: push 0x9ce03b */
  { uint32_t v = 0x9ce03bu; esp -= 4; W32(esp, v); }
/* 79c4ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79c4f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79c4f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79c4f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79c4fb: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 79c4fe: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 79c501: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79c502: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 79c505: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79c506: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79c507: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79c50a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79c50b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79c50c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79c50f: mov edi, ecx */
  edi = ecx;
/* 79c511: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 79c514: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79c515: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79c516: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79c517: mov ecx, edi */
  ecx = edi;
/* 79c519: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79c520: call 0x6c97fa */
  esp -= 4; W32(esp, 0x79c525u); SPILL(); f_6c97fa(); if (g_unwind) return; RELOAD();
/* 79c525: mov esi, eax */
  esi = eax;
/* 79c527: mov eax, dword ptr [0xb70ad0] */
  eax = R32((uint32_t)(0xb70ad0u));
/* 79c52c: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79c52f: je 0x79c7fa */
  if (zf) goto L_79c7fa;
L_79c535: /* 79c535: cmp byte ptr [edi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79c53c: jne 0x79c7fa */
  if (!zf) goto L_79c7fa;
L_79c542: /* 79c542: mov eax, dword ptr [edi + 0x80] */
  eax = R32((uint32_t)(edi + 0x80u));
/* 79c548: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 79c54a: jns 0x79c609 */
  if (!sf) goto L_79c609;
L_79c550: /* 79c550: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 79c553: mov ecx, dword ptr [edi + 0x34c] */
  ecx = R32((uint32_t)(edi + 0x34cu));
/* 79c559: cmp ecx, dword ptr [edx + 0x34c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x34cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79c55f: je 0x79c5a4 */
  if (zf) goto L_79c5a4;
L_79c561: /* 79c561: mov cl, byte ptr [0xb5bee0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bee0u))) & 0xffu);
/* 79c567: mov eax, 1 */
  eax = 0x1u;
/* 79c56c: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79c56e: jne 0x79c596 */
  if (!zf) goto L_79c596;
L_79c570: /* 79c570: or dword ptr [0xb5bee0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bee0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bee0u), r);
  }
/* 79c576: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79c578: push 0xacc840 */
  { uint32_t v = 0xacc840u; esp -= 4; W32(esp, v); }
/* 79c57d: push 0xb70638 */
  { uint32_t v = 0xb70638u; esp -= 4; W32(esp, v); }
/* 79c582: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 79c585: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79c58au); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79c58a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79c58d: mov dword ptr [0xb5bedc], eax */
  W32((uint32_t)(0xb5bedcu), eax);
/* 79c592: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79c596: /* 79c596: mov eax, dword ptr [0xb5bedc] */
  eax = R32((uint32_t)(0xb5bedcu));
/* 79c59b: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79c59f: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 79c5a1: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79c5a4: /* 79c5a4: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 79c5a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79c5aa: mov ecx, dword ptr [eax + 0x35c] */
  ecx = R32((uint32_t)(eax + 0x35cu));
/* 79c5b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79c5b1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79c5b2: mov edx, dword ptr [edi + 0x35c] */
  edx = R32((uint32_t)(edi + 0x35cu));
/* 79c5b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79c5b9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79c5ba: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x79c5bfu); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 79c5bf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79c5c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79c5c4: je 0x79c609 */
  if (zf) goto L_79c609;
L_79c5c6: /* 79c5c6: mov cl, byte ptr [0xb5bee0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bee0u))) & 0xffu);
/* 79c5cc: mov eax, 2 */
  eax = 0x2u;
/* 79c5d1: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79c5d3: jne 0x79c5fb */
  if (!zf) goto L_79c5fb;
L_79c5d5: /* 79c5d5: or dword ptr [0xb5bee0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bee0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bee0u), r);
  }
/* 79c5db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79c5dd: push 0xacc84c */
  { uint32_t v = 0xacc84cu; esp -= 4; W32(esp, v); }
/* 79c5e2: push 0xb70638 */
  { uint32_t v = 0xb70638u; esp -= 4; W32(esp, v); }
/* 79c5e7: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 79c5ea: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79c5efu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79c5ef: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79c5f2: mov dword ptr [0xb5bed8], eax */
  W32((uint32_t)(0xb5bed8u), eax);
/* 79c5f7: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79c5fb: /* 79c5fb: mov eax, dword ptr [0xb5bed8] */
  eax = R32((uint32_t)(0xb5bed8u));
/* 79c600: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79c604: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 79c606: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79c609: /* 79c609: test dword ptr [edi + 0x88], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x88u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79c613: je 0x79c7fa */
  if (zf) goto L_79c7fa;
L_79c619: /* 79c619: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 79c61c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79c61f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79c620: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79c621: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79c624: add eax, 0x33c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79c629: mov ecx, esp */
  ecx = esp;
/* 79c62b: mov dword ptr [ebp + 0x18], esp */
  W32((uint32_t)(ebp + 0x18u), esp);
/* 79c62e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79c62f: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79c635u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79c635: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79c638: lea edx, [edi + 0x33c] */
  edx = (uint32_t)(edi + 0x33cu);
/* 79c63e: mov ecx, esp */
  ecx = esp;
/* 79c640: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 79c643: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79c644: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 79c648: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x79c64eu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 79c64e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79c652: call 0x6cc865 */
  esp -= 4; W32(esp, 0x79c657u); SPILL(); f_6cc865(); if (g_unwind) return; RELOAD();
/* 79c657: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79c65a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79c65c: je 0x79c69d */
  if (zf) goto L_79c69d;
L_79c65e: /* 79c65e: test byte ptr [0xb5bee0], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bee0u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79c665: jne 0x79c68f */
  if (!zf) goto L_79c68f;
L_79c667: /* 79c667: or dword ptr [0xb5bee0], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bee0u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bee0u), r);
  }
/* 79c66e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79c670: push 0xacc860 */
  { uint32_t v = 0xacc860u; esp -= 4; W32(esp, v); }
/* 79c675: push 0xb70638 */
  { uint32_t v = 0xb70638u; esp -= 4; W32(esp, v); }
/* 79c67a: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 79c67e: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79c683u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79c683: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79c686: mov dword ptr [0xb5bed4], eax */
  W32((uint32_t)(0xb5bed4u), eax);
/* 79c68b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79c68f: /* 79c68f: mov eax, dword ptr [0xb5bed4] */
  eax = R32((uint32_t)(0xb5bed4u));
/* 79c694: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79c698: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 79c69a: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79c69d: /* 79c69d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79c6a0: mov edx, dword ptr [edi + 0x350] */
  edx = R32((uint32_t)(edi + 0x350u));
/* 79c6a6: cmp edx, dword ptr [eax + 0x350] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x350u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79c6ac: je 0x79c6ee */
  if (zf) goto L_79c6ee;
L_79c6ae: /* 79c6ae: test byte ptr [0xb5bee0], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bee0u))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79c6b5: jne 0x79c6df */
  if (!zf) goto L_79c6df;
L_79c6b7: /* 79c6b7: or dword ptr [0xb5bee0], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bee0u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bee0u), r);
  }
/* 79c6be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79c6c0: push 0xacc874 */
  { uint32_t v = 0xacc874u; esp -= 4; W32(esp, v); }
/* 79c6c5: push 0xb70638 */
  { uint32_t v = 0xb70638u; esp -= 4; W32(esp, v); }
/* 79c6ca: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 79c6ce: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79c6d3u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79c6d3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79c6d6: mov dword ptr [0xb5bed0], eax */
  W32((uint32_t)(0xb5bed0u), eax);
/* 79c6db: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79c6df: /* 79c6df: mov ecx, dword ptr [0xb5bed0] */
  ecx = R32((uint32_t)(0xb5bed0u));
/* 79c6e5: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79c6e9: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 79c6eb: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79c6ee: /* 79c6ee: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 79c6f1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79c6f4: mov edx, dword ptr [ecx + 0x394] */
  edx = R32((uint32_t)(ecx + 0x394u));
/* 79c6fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79c6fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79c6fc: mov eax, dword ptr [edi + 0x394] */
  eax = R32((uint32_t)(edi + 0x394u));
/* 79c702: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79c703: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79c704: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x79c709u); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 79c709: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79c70c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79c70e: je 0x79c755 */
  if (zf) goto L_79c755;
L_79c710: /* 79c710: mov cl, byte ptr [0xb5bee0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bee0u))) & 0xffu);
/* 79c716: mov eax, 0x10 */
  eax = 0x10u;
/* 79c71b: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79c71d: jne 0x79c746 */
  if (!zf) goto L_79c746;
L_79c71f: /* 79c71f: or dword ptr [0xb5bee0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bee0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bee0u), r);
  }
/* 79c725: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79c727: push 0xacc888 */
  { uint32_t v = 0xacc888u; esp -= 4; W32(esp, v); }
/* 79c72c: push 0xb70638 */
  { uint32_t v = 0xb70638u; esp -= 4; W32(esp, v); }
/* 79c731: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 79c735: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79c73au); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79c73a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79c73d: mov dword ptr [0xb5becc], eax */
  W32((uint32_t)(0xb5beccu), eax);
/* 79c742: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79c746: /* 79c746: mov ecx, dword ptr [0xb5becc] */
  ecx = R32((uint32_t)(0xb5beccu));
/* 79c74c: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79c750: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 79c752: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79c755: /* 79c755: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 79c758: mov eax, dword ptr [edi + 0x354] */
  eax = R32((uint32_t)(edi + 0x354u));
/* 79c75e: cmp eax, dword ptr [ebx + 0x354] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x354u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79c764: je 0x79c7ab */
  if (zf) goto L_79c7ab;
L_79c766: /* 79c766: mov cl, byte ptr [0xb5bee0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bee0u))) & 0xffu);
/* 79c76c: mov eax, 0x20 */
  eax = 0x20u;
/* 79c771: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79c773: jne 0x79c79c */
  if (!zf) goto L_79c79c;
L_79c775: /* 79c775: or dword ptr [0xb5bee0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bee0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bee0u), r);
  }
/* 79c77b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79c77d: push 0xacc89c */
  { uint32_t v = 0xacc89cu; esp -= 4; W32(esp, v); }
/* 79c782: push 0xb70638 */
  { uint32_t v = 0xb70638u; esp -= 4; W32(esp, v); }
/* 79c787: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 79c78b: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79c790u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79c790: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79c793: mov dword ptr [0xb5bec8], eax */
  W32((uint32_t)(0xb5bec8u), eax);
/* 79c798: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79c79c: /* 79c79c: mov ecx, dword ptr [0xb5bec8] */
  ecx = R32((uint32_t)(0xb5bec8u));
/* 79c7a2: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79c7a6: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 79c7a8: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79c7ab: /* 79c7ab: mov eax, dword ptr [edi + 0x358] */
  eax = R32((uint32_t)(edi + 0x358u));
/* 79c7b1: cmp eax, dword ptr [ebx + 0x358] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x358u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79c7b7: je 0x79c7fa */
  if (zf) goto L_79c7fa;
L_79c7b9: /* 79c7b9: mov cl, byte ptr [0xb5bee0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bee0u))) & 0xffu);
/* 79c7bf: mov eax, 0x40 */
  eax = 0x40u;
/* 79c7c4: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79c7c6: jne 0x79c7eb */
  if (!zf) goto L_79c7eb;
L_79c7c8: /* 79c7c8: or dword ptr [0xb5bee0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bee0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bee0u), r);
  }
/* 79c7ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79c7d0: push 0xacc8b0 */
  { uint32_t v = 0xacc8b0u; esp -= 4; W32(esp, v); }
/* 79c7d5: push 0xb70638 */
  { uint32_t v = 0xb70638u; esp -= 4; W32(esp, v); }
/* 79c7da: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 79c7de: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79c7e3u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79c7e3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79c7e6: mov dword ptr [0xb5bec4], eax */
  W32((uint32_t)(0xb5bec4u), eax);
L_79c7eb: /* 79c7eb: mov ecx, dword ptr [0xb5bec4] */
  ecx = R32((uint32_t)(0xb5bec4u));
/* 79c7f1: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79c7f5: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 79c7f7: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_79c7fa: /* 79c7fa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79c7fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79c7fe: mov eax, esi */
  eax = esi;
/* 79c800: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79c801: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79c808: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79c809: mov esp, ebp */
  esp = ebp;
/* 79c80b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79c80c: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_79c80f(void) {
  LOAD_REGS();
L_79c80f: /* 79c80f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79c812: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79c817: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 79c81a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79c81b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 79c81e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79c823u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79c823(); return;
}

void f_79c823(void) {
  LOAD_REGS();
L_79c823: /* 79c823: push 0xa0ac3c */
  { uint32_t v = 0xa0ac3cu; esp -= 4; W32(esp, v); }
/* 79c828: push 0xacc8cc */
  { uint32_t v = 0xacc8ccu; esp -= 4; W32(esp, v); }
/* 79c82d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79c833u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79c833: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79c836: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79c838: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79c83a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79c83fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79c83f: guest_badaddr(0x79c83f); return;
}

void f_79c920(void) {
  LOAD_REGS();
L_79c920: /* 79c920: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79c921: mov ebp, esp */
  ebp = esp;
/* 79c923: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79c925: push 0x9ce07e */
  { uint32_t v = 0x9ce07eu; esp -= 4; W32(esp, v); }
/* 79c92a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79c930: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79c931: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79c938: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79c93b: mov eax, dword ptr [0xb69380] */
  eax = R32((uint32_t)(0xb69380u));
/* 79c940: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79c943: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79c944: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79c945: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79c946: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79c949: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79c950: je 0x79ca2f */
  if (zf) goto L_79ca2f;
L_79c956: /* 79c956: test byte ptr [ecx + 0x34c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x34cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79c95d: je 0x79c9d3 */
  if (zf) goto L_79c9d3;
L_79c95f: /* 79c95f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79c962: mov edx, dword ptr [eax + 0x80] */
  edx = R32((uint32_t)(eax + 0x80u));
/* 79c968: xor edx, dword ptr [ecx + 0x80] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x80u)));
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 79c96e: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 79c970: jns 0x79ca2f */
  if (!sf) goto L_79ca2f;
L_79c976: /* 79c976: mov cl, byte ptr [0xb5bee8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bee8u))) & 0xffu);
/* 79c97c: mov eax, 1 */
  eax = 0x1u;
/* 79c981: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79c983: jne 0x79c9af */
  if (!zf) goto L_79c9af;
L_79c985: /* 79c985: or dword ptr [0xb5bee8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bee8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bee8u), r);
  }
/* 79c98b: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 79c98e: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79c994u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79c994: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79c996: push 0xacc8d4 */
  { uint32_t v = 0xacc8d4u; esp -= 4; W32(esp, v); }
/* 79c99b: push 0xb5bf68 */
  { uint32_t v = 0xb5bf68u; esp -= 4; W32(esp, v); }
/* 79c9a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79c9a1: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x79c9a7u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 79c9a7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79c9aa: mov dword ptr [0xb5bee4], eax */
  W32((uint32_t)(0xb5bee4u), eax);
L_79c9af: /* 79c9af: mov eax, dword ptr [0xb5bee4] */
  eax = R32((uint32_t)(0xb5bee4u));
/* 79c9b4: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79c9b8: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79c9bb: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79c9bd: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79c9c0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79c9c3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79c9ca: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79c9cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79c9cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79c9cd: mov esp, ebp */
  esp = ebp;
/* 79c9cf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79c9d0: ret 0x14 */
  esp += 24; SPILL(); return;
L_79c9d3: /* 79c9d3: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 79c9d6: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 79c9d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79c9da: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 79c9dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79c9de: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 79c9e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79c9e2: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 79c9e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79c9e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79c9e7: call 0x6c1aaa */
  esp -= 4; W32(esp, 0x79c9ecu); SPILL(); f_6c1aaa(); if (g_unwind) return; RELOAD();
/* 79c9ec: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79c9ef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79c9f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79c9f7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79c9f8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79c9f9: mov esp, ebp */
  esp = ebp;
/* 79c9fb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79c9fc: ret 0x14 */
  esp += 24; SPILL(); return;
L_79ca2f: /* 79ca2f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79ca32: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79ca35: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79ca36: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79ca37: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79ca3e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79ca3f: mov esp, ebp */
  esp = ebp;
/* 79ca41: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79ca42: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_79c9ff(void) {
  LOAD_REGS();
L_79c9ff: /* 79c9ff: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79ca02: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79ca07: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 79ca0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79ca0b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 79ca0e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79ca13u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79ca13(); return;
}

void f_79ca13(void) {
  LOAD_REGS();
L_79ca13: /* 79ca13: push 0xa0ac88 */
  { uint32_t v = 0xa0ac88u; esp -= 4; W32(esp, v); }
/* 79ca18: push 0xacc8e4 */
  { uint32_t v = 0xacc8e4u; esp -= 4; W32(esp, v); }
/* 79ca1d: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79ca23u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79ca23: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79ca26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79ca28: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79ca2a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79ca2fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 79ca2f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79ca32: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79ca35: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79ca36: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79ca37: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79ca3e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79ca3f: mov esp, ebp */
  esp = ebp;
/* 79ca41: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79ca42: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_79caa0(void) {
  LOAD_REGS();
L_79caa0: /* 79caa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79caa1: mov ebp, esp */
  ebp = esp;
/* 79caa3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79caa5: push 0x9ce0ac */
  { uint32_t v = 0x9ce0acu; esp -= 4; W32(esp, v); }
/* 79caaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79cab0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79cab1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79cab8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79cabb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79cabe: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 79cac1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79cac2: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 79cac5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79cac6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79cac7: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 79caca: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79cacd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79cace: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79cacf: mov esi, ecx */
  esi = ecx;
/* 79cad1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 79cad4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79cad5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79cad6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79cad7: mov ecx, esi */
  ecx = esi;
/* 79cad9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79cae0: call 0x6c1aaa */
  esp -= 4; W32(esp, 0x79cae5u); SPILL(); f_6c1aaa(); if (g_unwind) return; RELOAD();
/* 79cae5: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 79cae8: mov eax, dword ptr [0xb63b50] */
  eax = R32((uint32_t)(0xb63b50u));
/* 79caed: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79caf0: je 0x79cbdd */
  if (zf) goto L_79cbdd;
L_79caf6: /* 79caf6: test dword ptr [esi + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79cb00: je 0x79cbdd */
  if (zf) goto L_79cbdd;
L_79cb06: /* 79cb06: cmp byte ptr [esi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79cb0d: jne 0x79cbdd */
  if (!zf) goto L_79cbdd;
L_79cb13: /* 79cb13: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 79cb19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 79cb1b: jns 0x79cbdd */
  if (!sf) goto L_79cbdd;
L_79cb21: /* 79cb21: mov ecx, dword ptr [esi + 0x36c] */
  ecx = R32((uint32_t)(esi + 0x36cu));
/* 79cb27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79cb28: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 79cb2b: mov eax, dword ptr [edi + 0x36c] */
  eax = R32((uint32_t)(edi + 0x36cu));
/* 79cb31: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79cb32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79cb33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79cb34: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x79cb39u); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 79cb39: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79cb3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79cb3e: je 0x79cb8a */
  if (zf) goto L_79cb8a;
L_79cb40: /* 79cb40: mov cl, byte ptr [0xb5bef4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bef4u))) & 0xffu);
/* 79cb46: mov eax, 1 */
  eax = 0x1u;
/* 79cb4b: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79cb4d: jne 0x79cb75 */
  if (!zf) goto L_79cb75;
L_79cb4f: /* 79cb4f: or dword ptr [0xb5bef4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bef4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bef4u), r);
  }
/* 79cb55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79cb57: push 0xacc8ec */
  { uint32_t v = 0xacc8ecu; esp -= 4; W32(esp, v); }
/* 79cb5c: push 0xb636b8 */
  { uint32_t v = 0xb636b8u; esp -= 4; W32(esp, v); }
/* 79cb61: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 79cb64: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79cb69u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79cb69: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79cb6c: mov dword ptr [0xb5bef0], eax */
  W32((uint32_t)(0xb5bef0u), eax);
/* 79cb71: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79cb75: /* 79cb75: mov edx, dword ptr [0xb5bef0] */
  edx = R32((uint32_t)(0xb5bef0u));
/* 79cb7b: movzx ecx, word ptr [edx + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79cb7f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79cb82: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79cb84: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79cb87: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_79cb8a: /* 79cb8a: mov edx, dword ptr [esi + 0x348] */
  edx = R32((uint32_t)(esi + 0x348u));
/* 79cb90: cmp edx, dword ptr [edi + 0x348] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x348u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79cb96: je 0x79cbdd */
  if (zf) goto L_79cbdd;
L_79cb98: /* 79cb98: mov cl, byte ptr [0xb5bef4] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bef4u))) & 0xffu);
/* 79cb9e: mov eax, 2 */
  eax = 0x2u;
/* 79cba3: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79cba5: jne 0x79cbc9 */
  if (!zf) goto L_79cbc9;
L_79cba7: /* 79cba7: or dword ptr [0xb5bef4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bef4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bef4u), r);
  }
/* 79cbad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79cbaf: push 0xacc910 */
  { uint32_t v = 0xacc910u; esp -= 4; W32(esp, v); }
/* 79cbb4: push 0xb636b8 */
  { uint32_t v = 0xb636b8u; esp -= 4; W32(esp, v); }
/* 79cbb9: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 79cbbc: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79cbc1u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79cbc1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79cbc4: mov dword ptr [0xb5beec], eax */
  W32((uint32_t)(0xb5beecu), eax);
L_79cbc9: /* 79cbc9: mov eax, dword ptr [0xb5beec] */
  eax = R32((uint32_t)(0xb5beecu));
/* 79cbce: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79cbd2: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79cbd5: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79cbd7: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79cbda: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_79cbdd: /* 79cbdd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79cbe0: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79cbe3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79cbe4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79cbe5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79cbec: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79cbed: mov esp, ebp */
  esp = ebp;
/* 79cbef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79cbf0: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_79cbf3(void) {
  LOAD_REGS();
L_79cbf3: /* 79cbf3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79cbf6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79cbfb: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 79cbfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79cbff: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 79cc02: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79cc07u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79cc07(); return;
}

void f_79cc07(void) {
  LOAD_REGS();
L_79cc07: /* 79cc07: push 0xa0acd0 */
  { uint32_t v = 0xa0acd0u; esp -= 4; W32(esp, v); }
/* 79cc0c: push 0xacc920 */
  { uint32_t v = 0xacc920u; esp -= 4; W32(esp, v); }
/* 79cc11: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79cc17u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79cc17: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79cc1a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79cc1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79cc1e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79cc23u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79cc23: guest_badaddr(0x79cc23); return;
}

void f_79cca0(void) {
  LOAD_REGS();
L_79cca0: /* 79cca0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79cca1: mov ebp, esp */
  ebp = esp;
/* 79cca3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79cca5: push 0x9ce0ea */
  { uint32_t v = 0x9ce0eau; esp -= 4; W32(esp, v); }
/* 79ccaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79ccb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79ccb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79ccb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79ccbb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79ccbe: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 79ccc1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79ccc2: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 79ccc5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79ccc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79ccc7: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 79ccca: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79cccd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79ccce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79cccf: mov esi, ecx */
  esi = ecx;
/* 79ccd1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 79ccd4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79ccd5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79ccd6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79ccd7: mov ecx, esi */
  ecx = esi;
/* 79ccd9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79cce0: call 0x6c2c2f */
  esp -= 4; W32(esp, 0x79cce5u); SPILL(); f_6c2c2f(); if (g_unwind) return; RELOAD();
/* 79cce5: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 79cce8: mov eax, dword ptr [0xb5d8c0] */
  eax = R32((uint32_t)(0xb5d8c0u));
/* 79cced: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ccf0: je 0x79ce42 */
  if (zf) goto L_79ce42;
L_79ccf6: /* 79ccf6: test dword ptr [esi + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79cd00: je 0x79ce42 */
  if (zf) goto L_79ce42;
L_79cd06: /* 79cd06: cmp byte ptr [esi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79cd0d: jne 0x79ce42 */
  if (!zf) goto L_79ce42;
L_79cd13: /* 79cd13: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 79cd19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 79cd1b: jns 0x79ce42 */
  if (!sf) goto L_79ce42;
L_79cd21: /* 79cd21: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79cd24: mov ecx, dword ptr [eax + 0x390] */
  ecx = R32((uint32_t)(eax + 0x390u));
/* 79cd2a: mov edx, dword ptr [esi + 0x390] */
  edx = R32((uint32_t)(esi + 0x390u));
/* 79cd30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79cd31: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79cd32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79cd33: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79cd34: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x79cd39u); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 79cd39: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79cd3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79cd3e: je 0x79cd89 */
  if (zf) goto L_79cd89;
L_79cd40: /* 79cd40: mov cl, byte ptr [0xb5bf04] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bf04u))) & 0xffu);
/* 79cd46: mov eax, 1 */
  eax = 0x1u;
/* 79cd4b: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79cd4d: jne 0x79cd75 */
  if (!zf) goto L_79cd75;
L_79cd4f: /* 79cd4f: or dword ptr [0xb5bf04], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bf04u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bf04u), r);
  }
/* 79cd55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79cd57: push 0xacc928 */
  { uint32_t v = 0xacc928u; esp -= 4; W32(esp, v); }
/* 79cd5c: push 0xb5d428 */
  { uint32_t v = 0xb5d428u; esp -= 4; W32(esp, v); }
/* 79cd61: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 79cd64: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79cd69u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79cd69: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79cd6c: mov dword ptr [0xb5bf00], eax */
  W32((uint32_t)(0xb5bf00u), eax);
/* 79cd71: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79cd75: /* 79cd75: mov eax, dword ptr [0xb5bf00] */
  eax = R32((uint32_t)(0xb5bf00u));
/* 79cd7a: movzx ecx, word ptr [eax + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(eax + 0x46u)));
/* 79cd7e: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79cd81: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79cd83: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79cd86: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_79cd89: /* 79cd89: mov eax, dword ptr [esi + 0x3d8] */
  eax = R32((uint32_t)(esi + 0x3d8u));
/* 79cd8f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79cd90: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 79cd93: mov edx, dword ptr [edi + 0x3d8] */
  edx = R32((uint32_t)(edi + 0x3d8u));
/* 79cd99: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79cd9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79cd9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79cd9c: call 0x6cbf14 */
  esp -= 4; W32(esp, 0x79cda1u); SPILL(); f_6cbf14(); if (g_unwind) return; RELOAD();
/* 79cda1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79cda4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79cda6: je 0x79cdf2 */
  if (zf) goto L_79cdf2;
L_79cda8: /* 79cda8: mov cl, byte ptr [0xb5bf04] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bf04u))) & 0xffu);
/* 79cdae: mov eax, 2 */
  eax = 0x2u;
/* 79cdb3: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79cdb5: jne 0x79cddd */
  if (!zf) goto L_79cddd;
L_79cdb7: /* 79cdb7: or dword ptr [0xb5bf04], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bf04u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bf04u), r);
  }
/* 79cdbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79cdbf: push 0xacc93c */
  { uint32_t v = 0xacc93cu; esp -= 4; W32(esp, v); }
/* 79cdc4: push 0xb5d428 */
  { uint32_t v = 0xb5d428u; esp -= 4; W32(esp, v); }
/* 79cdc9: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 79cdcc: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79cdd1u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79cdd1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79cdd4: mov dword ptr [0xb5befc], eax */
  W32((uint32_t)(0xb5befcu), eax);
/* 79cdd9: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79cddd: /* 79cddd: mov ecx, dword ptr [0xb5befc] */
  ecx = R32((uint32_t)(0xb5befcu));
/* 79cde3: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79cde7: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79cdea: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 79cdec: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79cdef: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_79cdf2: /* 79cdf2: mov al, byte ptr [esi + 0x394] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x394u))) & 0xffu);
/* 79cdf8: cmp al, byte ptr [edi + 0x394] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edi + 0x394u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79cdfe: je 0x79ce42 */
  if (zf) goto L_79ce42;
L_79ce00: /* 79ce00: test byte ptr [0xb5bf04], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bf04u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79ce07: jne 0x79ce2d */
  if (!zf) goto L_79ce2d;
L_79ce09: /* 79ce09: or dword ptr [0xb5bf04], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bf04u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bf04u), r);
  }
/* 79ce10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79ce12: push 0xacc950 */
  { uint32_t v = 0xacc950u; esp -= 4; W32(esp, v); }
/* 79ce17: push 0xb5d428 */
  { uint32_t v = 0xb5d428u; esp -= 4; W32(esp, v); }
/* 79ce1c: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 79ce20: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79ce25u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79ce25: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79ce28: mov dword ptr [0xb5bef8], eax */
  W32((uint32_t)(0xb5bef8u), eax);
L_79ce2d: /* 79ce2d: mov ecx, dword ptr [0xb5bef8] */
  ecx = R32((uint32_t)(0xb5bef8u));
/* 79ce33: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79ce37: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79ce3a: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 79ce3c: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79ce3f: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_79ce42: /* 79ce42: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79ce45: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79ce48: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79ce49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79ce4a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79ce51: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79ce52: mov esp, ebp */
  esp = ebp;
/* 79ce54: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79ce55: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_79ce58(void) {
  LOAD_REGS();
L_79ce58: /* 79ce58: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79ce5b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79ce60: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 79ce63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79ce64: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 79ce67: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79ce6cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79ce6c(); return;
}

void f_79ce6c(void) {
  LOAD_REGS();
L_79ce6c: /* 79ce6c: push 0xa0ad1c */
  { uint32_t v = 0xa0ad1cu; esp -= 4; W32(esp, v); }
/* 79ce71: push 0xacc968 */
  { uint32_t v = 0xacc968u; esp -= 4; W32(esp, v); }
/* 79ce76: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79ce7cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79ce7c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79ce7f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79ce81: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79ce83: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79ce88u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79ce88: guest_badaddr(0x79ce88); return;
}

void f_79cf10(void) {
  LOAD_REGS();
L_79cf10: /* 79cf10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79cf11: mov ebp, esp */
  ebp = esp;
/* 79cf13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79cf15: push 0x9ce13a */
  { uint32_t v = 0x9ce13au; esp -= 4; W32(esp, v); }
/* 79cf1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79cf20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79cf21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79cf28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79cf2b: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 79cf2e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 79cf31: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79cf32: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 79cf35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79cf36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79cf37: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 79cf3a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79cf3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79cf3e: mov esi, ecx */
  esi = ecx;
/* 79cf40: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 79cf43: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79cf44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79cf45: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79cf46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79cf47: mov ecx, esi */
  ecx = esi;
/* 79cf49: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79cf50: call 0x6c1aaa */
  esp -= 4; W32(esp, 0x79cf55u); SPILL(); f_6c1aaa(); if (g_unwind) return; RELOAD();
/* 79cf55: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 79cf58: mov eax, dword ptr [0xb73450] */
  eax = R32((uint32_t)(0xb73450u));
/* 79cf5d: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79cf60: je 0x79d0b3 */
  if (zf) goto L_79d0b3;
L_79cf66: /* 79cf66: cmp byte ptr [esi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79cf6d: jne 0x79d0b3 */
  if (!zf) goto L_79d0b3;
L_79cf73: /* 79cf73: mov eax, dword ptr [esi + 0x33c] */
  eax = R32((uint32_t)(esi + 0x33cu));
/* 79cf79: xor eax, dword ptr [edi + 0x33c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x33cu)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 79cf7f: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79cf81: je 0x79cfd1 */
  if (zf) goto L_79cfd1;
L_79cf83: /* 79cf83: test byte ptr [0xb5bf14], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bf14u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79cf8a: jne 0x79cfbc */
  if (!zf) goto L_79cfbc;
L_79cf8c: /* 79cf8c: or dword ptr [0xb5bf14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bf14u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bf14u), r);
  }
/* 79cf93: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 79cf97: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79cf9du); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79cf9d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79cf9f: push 0xacc970 */
  { uint32_t v = 0xacc970u; esp -= 4; W32(esp, v); }
/* 79cfa4: push 0xb72fb8 */
  { uint32_t v = 0xb72fb8u; esp -= 4; W32(esp, v); }
/* 79cfa9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79cfaa: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x79cfb0u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 79cfb0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79cfb3: mov dword ptr [0xb5bf10], eax */
  W32((uint32_t)(0xb5bf10u), eax);
/* 79cfb8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79cfbc: /* 79cfbc: mov ecx, dword ptr [0xb5bf10] */
  ecx = R32((uint32_t)(0xb5bf10u));
/* 79cfc2: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79cfc6: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79cfc9: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 79cfcb: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79cfce: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_79cfd1: /* 79cfd1: mov eax, dword ptr [edi + 0x33c] */
  eax = R32((uint32_t)(edi + 0x33cu));
/* 79cfd7: mov ecx, dword ptr [esi + 0x33c] */
  ecx = R32((uint32_t)(esi + 0x33cu));
/* 79cfdd: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 79cfdf: mov eax, 2 */
  eax = 0x2u;
/* 79cfe4: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79cfe6: je 0x79d033 */
  if (zf) goto L_79d033;
L_79cfe8: /* 79cfe8: test byte ptr [0xb5bf14], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bf14u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79cfee: jne 0x79d01e */
  if (!zf) goto L_79d01e;
L_79cff0: /* 79cff0: or dword ptr [0xb5bf14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bf14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bf14u), r);
  }
/* 79cff6: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 79cff9: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79cfffu); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79cfff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79d001: push 0xacc97c */
  { uint32_t v = 0xacc97cu; esp -= 4; W32(esp, v); }
/* 79d006: push 0xb72fb8 */
  { uint32_t v = 0xb72fb8u; esp -= 4; W32(esp, v); }
/* 79d00b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79d00c: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x79d012u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 79d012: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79d015: mov dword ptr [0xb5bf0c], eax */
  W32((uint32_t)(0xb5bf0cu), eax);
/* 79d01a: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79d01e: /* 79d01e: mov edx, dword ptr [0xb5bf0c] */
  edx = R32((uint32_t)(0xb5bf0cu));
/* 79d024: movzx ecx, word ptr [edx + 0x46] */
  ecx = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79d028: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79d02b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 79d02d: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79d030: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_79d033: /* 79d033: mov esi, dword ptr [esi + 0x340] */
  esi = R32((uint32_t)(esi + 0x340u));
/* 79d039: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 79d03b: mov edi, dword ptr [edi + 0x340] */
  edi = R32((uint32_t)(edi + 0x340u));
/* 79d041: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79d042: mov ecx, ebx */
  ecx = ebx;
/* 79d044: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x79d047u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79d047: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79d049: je 0x79d051 */
  if (zf) goto L_79d051;
L_79d04b: /* 79d04b: xor eax, eax */
  eax = 0;
/* 79d04d: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79d04f: jmp 0x79d062 */
  goto L_79d062;
L_79d051: /* 79d051: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 79d054: mov dword ptr [eax + 0x90], 1 */
  W32((uint32_t)(eax + 0x90u), 0x1u);
/* 79d05e: xor eax, eax */
  eax = 0;
/* 79d060: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_79d062: /* 79d062: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 79d065: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79d067: je 0x79d0b3 */
  if (zf) goto L_79d0b3;
L_79d069: /* 79d069: test byte ptr [0xb5bf14], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bf14u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79d070: jne 0x79d09e */
  if (!zf) goto L_79d09e;
L_79d072: /* 79d072: or dword ptr [0xb5bf14], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bf14u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bf14u), r);
  }
/* 79d079: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 79d07d: call dword ptr [0xcfa5fc] */
  esp -= 4; W32(esp, 0x79d083u); SPILL(); f_4e374c(); if (g_unwind) return; /* Core!?StaticClass@UProperty@@SAPAVUClass@@XZ */ RELOAD();
/* 79d083: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79d085: push 0xacc988 */
  { uint32_t v = 0xacc988u; esp -= 4; W32(esp, v); }
/* 79d08a: push 0xb72fb8 */
  { uint32_t v = 0xb72fb8u; esp -= 4; W32(esp, v); }
/* 79d08f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79d090: call dword ptr [0xcfa5f8] */
  esp -= 4; W32(esp, 0x79d096u); SPILL(); f_4e2252(); if (g_unwind) return; /* Core!?StaticFindObjectChecked@UObject@@SAPAV1@PAVUClass@@PAV1@PBGH@Z */ RELOAD();
/* 79d096: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79d099: mov dword ptr [0xb5bf08], eax */
  W32((uint32_t)(0xb5bf08u), eax);
L_79d09e: /* 79d09e: mov ecx, dword ptr [0xb5bf08] */
  ecx = R32((uint32_t)(0xb5bf08u));
/* 79d0a4: movzx edx, word ptr [ecx + 0x46] */
  edx = (uint32_t)(R16((uint32_t)(ecx + 0x46u)));
/* 79d0a8: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79d0ab: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 79d0ad: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 79d0b0: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_79d0b3: /* 79d0b3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79d0b6: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 79d0b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79d0ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79d0bb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79d0c2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79d0c3: mov esp, ebp */
  esp = ebp;
/* 79d0c5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79d0c6: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_79d0c9(void) {
  LOAD_REGS();
L_79d0c9: /* 79d0c9: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79d0cc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79d0d1: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 79d0d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79d0d5: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 79d0d8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79d0ddu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79d0dd(); return;
}

void f_79d0dd(void) {
  LOAD_REGS();
L_79d0dd: /* 79d0dd: push 0xa0ad68 */
  { uint32_t v = 0xa0ad68u; esp -= 4; W32(esp, v); }
/* 79d0e2: push 0xacc99c */
  { uint32_t v = 0xacc99cu; esp -= 4; W32(esp, v); }
/* 79d0e7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79d0edu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79d0ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79d0f0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79d0f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79d0f4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79d0f9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79d0f9: guest_badaddr(0x79d0f9); return;
}

void f_79d180(void) {
  LOAD_REGS();
L_79d180: /* 79d180: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79d181: mov ebp, esp */
  ebp = esp;
/* 79d183: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79d185: push 0x9ce18a */
  { uint32_t v = 0x9ce18au; esp -= 4; W32(esp, v); }
/* 79d18a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79d190: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79d191: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79d198: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79d19b: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 79d19e: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 79d1a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79d1a2: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 79d1a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79d1a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79d1a7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79d1aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79d1ab: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 79d1ae: mov esi, ecx */
  esi = ecx;
/* 79d1b0: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 79d1b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79d1b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79d1b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79d1b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79d1b7: mov ecx, esi */
  ecx = esi;
/* 79d1b9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79d1c0: call 0x6c1aaa */
  esp -= 4; W32(esp, 0x79d1c5u); SPILL(); f_6c1aaa(); if (g_unwind) return; RELOAD();
/* 79d1c5: mov edi, eax */
  edi = eax;
/* 79d1c7: mov eax, dword ptr [0xb71530] */
  eax = R32((uint32_t)(0xb71530u));
/* 79d1cc: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79d1cf: je 0x79d2f5 */
  if (zf) goto L_79d2f5;
L_79d1d5: /* 79d1d5: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 79d1db: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 79d1dd: jns 0x79d2f5 */
  if (!sf) goto L_79d2f5;
L_79d1e3: /* 79d1e3: mov eax, dword ptr [esi + 0x88] */
  eax = R32((uint32_t)(esi + 0x88u));
/* 79d1e9: test eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79d1ee: je 0x79d1fb */
  if (zf) goto L_79d1fb;
L_79d1f0: /* 79d1f0: test eax, 0xa00000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa00000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79d1f5: je 0x79d2f5 */
  if (zf) goto L_79d2f5;
L_79d1fb: /* 79d1fb: cmp byte ptr [esi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79d202: jne 0x79d2f5 */
  if (!zf) goto L_79d2f5;
L_79d208: /* 79d208: mov cl, byte ptr [esi + 0x33c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x33cu))) & 0xffu);
/* 79d20e: cmp cl, byte ptr [ebx + 0x33c] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebx + 0x33cu)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79d214: je 0x79d256 */
  if (zf) goto L_79d256;
L_79d216: /* 79d216: test byte ptr [0xb5bf24], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bf24u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79d21d: jne 0x79d247 */
  if (!zf) goto L_79d247;
L_79d21f: /* 79d21f: or dword ptr [0xb5bf24], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bf24u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bf24u), r);
  }
/* 79d226: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79d228: push 0xacc9a4 */
  { uint32_t v = 0xacc9a4u; esp -= 4; W32(esp, v); }
/* 79d22d: push 0xb71098 */
  { uint32_t v = 0xb71098u; esp -= 4; W32(esp, v); }
/* 79d232: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 79d236: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79d23bu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79d23b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79d23e: mov dword ptr [0xb5bf20], eax */
  W32((uint32_t)(0xb5bf20u), eax);
/* 79d243: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79d247: /* 79d247: mov edx, dword ptr [0xb5bf20] */
  edx = R32((uint32_t)(0xb5bf20u));
/* 79d24d: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79d251: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 79d253: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_79d256: /* 79d256: mov ecx, dword ptr [esi + 0x344] */
  ecx = R32((uint32_t)(esi + 0x344u));
/* 79d25c: cmp ecx, dword ptr [ebx + 0x344] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x344u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79d262: je 0x79d2a8 */
  if (zf) goto L_79d2a8;
L_79d264: /* 79d264: mov cl, byte ptr [0xb5bf24] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bf24u))) & 0xffu);
/* 79d26a: mov eax, 2 */
  eax = 0x2u;
/* 79d26f: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79d271: jne 0x79d299 */
  if (!zf) goto L_79d299;
L_79d273: /* 79d273: or dword ptr [0xb5bf24], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bf24u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bf24u), r);
  }
/* 79d279: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79d27b: push 0xacc9bc */
  { uint32_t v = 0xacc9bcu; esp -= 4; W32(esp, v); }
/* 79d280: push 0xb71098 */
  { uint32_t v = 0xb71098u; esp -= 4; W32(esp, v); }
/* 79d285: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 79d288: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79d28du); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79d28d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79d290: mov dword ptr [0xb5bf1c], eax */
  W32((uint32_t)(0xb5bf1cu), eax);
/* 79d295: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79d299: /* 79d299: mov edx, dword ptr [0xb5bf1c] */
  edx = R32((uint32_t)(0xb5bf1cu));
/* 79d29f: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79d2a3: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 79d2a5: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_79d2a8: /* 79d2a8: mov ecx, dword ptr [ebx + 0x340] */
  ecx = R32((uint32_t)(ebx + 0x340u));
/* 79d2ae: xor ecx, dword ptr [esi + 0x340] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x340u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 79d2b4: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79d2b7: je 0x79d2f5 */
  if (zf) goto L_79d2f5;
L_79d2b9: /* 79d2b9: test byte ptr [0xb5bf24], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bf24u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79d2c0: jne 0x79d2e6 */
  if (!zf) goto L_79d2e6;
L_79d2c2: /* 79d2c2: or dword ptr [0xb5bf24], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bf24u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bf24u), r);
  }
/* 79d2c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79d2cb: push 0xacc9d4 */
  { uint32_t v = 0xacc9d4u; esp -= 4; W32(esp, v); }
/* 79d2d0: push 0xb71098 */
  { uint32_t v = 0xb71098u; esp -= 4; W32(esp, v); }
/* 79d2d5: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 79d2d9: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79d2deu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79d2de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79d2e1: mov dword ptr [0xb5bf18], eax */
  W32((uint32_t)(0xb5bf18u), eax);
L_79d2e6: /* 79d2e6: mov edx, dword ptr [0xb5bf18] */
  edx = R32((uint32_t)(0xb5bf18u));
/* 79d2ec: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79d2f0: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 79d2f2: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_79d2f5: /* 79d2f5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79d2f8: mov eax, edi */
  eax = edi;
/* 79d2fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79d2fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79d2fc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79d303: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79d304: mov esp, ebp */
  esp = ebp;
/* 79d306: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79d307: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_79d30a(void) {
  LOAD_REGS();
L_79d30a: /* 79d30a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79d30d: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79d312: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 79d315: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79d316: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 79d319: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79d31eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79d31e(); return;
}

void f_79d31e(void) {
  LOAD_REGS();
L_79d31e: /* 79d31e: push 0xa0adc0 */
  { uint32_t v = 0xa0adc0u; esp -= 4; W32(esp, v); }
/* 79d323: push 0xacc9e8 */
  { uint32_t v = 0xacc9e8u; esp -= 4; W32(esp, v); }
/* 79d328: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79d32eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79d32e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79d331: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79d333: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79d335: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79d33au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79d33a: guest_badaddr(0x79d33a); return;
}

void f_79d3b0(void) {
  LOAD_REGS();
L_79d3b0: /* 79d3b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79d3b1: mov ebp, esp */
  ebp = esp;
/* 79d3b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79d3b5: push 0x9ce1be */
  { uint32_t v = 0x9ce1beu; esp -= 4; W32(esp, v); }
/* 79d3ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79d3c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79d3c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79d3c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79d3cb: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 79d3ce: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 79d3d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79d3d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79d3d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79d3d4: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 79d3d7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79d3da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79d3db: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 79d3de: mov esi, ecx */
  esi = ecx;
/* 79d3e0: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 79d3e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79d3e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79d3e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79d3e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79d3e7: mov ecx, esi */
  ecx = esi;
/* 79d3e9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79d3f0: call 0x6c2c2f */
  esp -= 4; W32(esp, 0x79d3f5u); SPILL(); f_6c2c2f(); if (g_unwind) return; RELOAD();
/* 79d3f5: mov ebx, eax */
  ebx = eax;
/* 79d3f7: mov eax, dword ptr [0xb69de0] */
  eax = R32((uint32_t)(0xb69de0u));
/* 79d3fc: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79d3ff: je 0x79d46e */
  if (zf) goto L_79d46e;
L_79d401: /* 79d401: test dword ptr [esi + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79d40b: je 0x79d46e */
  if (zf) goto L_79d46e;
L_79d40d: /* 79d40d: cmp byte ptr [esi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79d414: jne 0x79d46e */
  if (!zf) goto L_79d46e;
L_79d416: /* 79d416: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 79d41c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 79d41e: jns 0x79d46e */
  if (!sf) goto L_79d46e;
L_79d420: /* 79d420: mov ecx, dword ptr [esi + 0x38c] */
  ecx = R32((uint32_t)(esi + 0x38cu));
/* 79d426: cmp ecx, dword ptr [edi + 0x38c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x38cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79d42c: je 0x79d46e */
  if (zf) goto L_79d46e;
L_79d42e: /* 79d42e: mov cl, byte ptr [0xb5bf2c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bf2cu))) & 0xffu);
/* 79d434: mov eax, 1 */
  eax = 0x1u;
/* 79d439: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79d43b: jne 0x79d45f */
  if (!zf) goto L_79d45f;
L_79d43d: /* 79d43d: or dword ptr [0xb5bf2c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bf2cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bf2cu), r);
  }
/* 79d443: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79d445: push 0xacc9f0 */
  { uint32_t v = 0xacc9f0u; esp -= 4; W32(esp, v); }
/* 79d44a: push 0xb69948 */
  { uint32_t v = 0xb69948u; esp -= 4; W32(esp, v); }
/* 79d44f: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 79d452: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79d457u); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79d457: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79d45a: mov dword ptr [0xb5bf28], eax */
  W32((uint32_t)(0xb5bf28u), eax);
L_79d45f: /* 79d45f: mov edx, dword ptr [0xb5bf28] */
  edx = R32((uint32_t)(0xb5bf28u));
/* 79d465: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79d469: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* 79d46b: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_79d46e: /* 79d46e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79d471: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79d472: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79d473: mov eax, ebx */
  eax = ebx;
/* 79d475: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79d47c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79d47d: mov esp, ebp */
  esp = ebp;
/* 79d47f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79d480: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_79d483(void) {
  LOAD_REGS();
L_79d483: /* 79d483: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79d486: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79d48b: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 79d48e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79d48f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 79d492: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79d497u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79d497(); return;
}

void f_79d497(void) {
  LOAD_REGS();
L_79d497: /* 79d497: push 0xa0ae20 */
  { uint32_t v = 0xa0ae20u; esp -= 4; W32(esp, v); }
/* 79d49c: push 0xacca08 */
  { uint32_t v = 0xacca08u; esp -= 4; W32(esp, v); }
/* 79d4a1: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79d4a7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79d4a7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79d4aa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79d4ac: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79d4ae: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79d4b3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79d4b3: guest_badaddr(0x79d4b3); return;
}

void f_79d510(void) {
  LOAD_REGS();
L_79d510: /* 79d510: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79d511: mov ebp, esp */
  ebp = esp;
/* 79d513: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79d515: push 0x9ce1fa */
  { uint32_t v = 0x9ce1fau; esp -= 4; W32(esp, v); }
/* 79d51a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79d520: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79d521: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79d528: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79d52b: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 79d52e: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 79d531: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79d532: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 79d535: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79d536: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79d537: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79d53a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79d53b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 79d53e: mov esi, ecx */
  esi = ecx;
/* 79d540: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 79d543: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79d544: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79d545: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79d546: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79d547: mov ecx, esi */
  ecx = esi;
/* 79d549: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79d550: call 0x6c2c2f */
  esp -= 4; W32(esp, 0x79d555u); SPILL(); f_6c2c2f(); if (g_unwind) return; RELOAD();
/* 79d555: mov edi, eax */
  edi = eax;
/* 79d557: mov eax, dword ptr [0xb698b0] */
  eax = R32((uint32_t)(0xb698b0u));
/* 79d55c: test ah, 8 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79d55f: je 0x79d684 */
  if (zf) goto L_79d684;
L_79d565: /* 79d565: test dword ptr [esi + 0x88], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79d56f: je 0x79d684 */
  if (zf) goto L_79d684;
L_79d575: /* 79d575: cmp byte ptr [esi + 0x91], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x91u))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 79d57c: jne 0x79d684 */
  if (!zf) goto L_79d684;
L_79d582: /* 79d582: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 79d588: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 79d58a: jns 0x79d684 */
  if (!sf) goto L_79d684;
L_79d590: /* 79d590: mov ecx, dword ptr [esi + 0x38c] */
  ecx = R32((uint32_t)(esi + 0x38cu));
/* 79d596: xor ecx, dword ptr [ebx + 0x38c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x38cu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 79d59c: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79d59f: je 0x79d5e5 */
  if (zf) goto L_79d5e5;
L_79d5a1: /* 79d5a1: mov cl, byte ptr [0xb5bf3c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bf3cu))) & 0xffu);
/* 79d5a7: mov eax, 1 */
  eax = 0x1u;
/* 79d5ac: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79d5ae: jne 0x79d5d6 */
  if (!zf) goto L_79d5d6;
L_79d5b0: /* 79d5b0: or dword ptr [0xb5bf3c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bf3cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bf3cu), r);
  }
/* 79d5b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79d5b8: push 0xacca10 */
  { uint32_t v = 0xacca10u; esp -= 4; W32(esp, v); }
/* 79d5bd: push 0xb69418 */
  { uint32_t v = 0xb69418u; esp -= 4; W32(esp, v); }
/* 79d5c2: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 79d5c5: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79d5cau); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79d5ca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79d5cd: mov dword ptr [0xb5bf38], eax */
  W32((uint32_t)(0xb5bf38u), eax);
/* 79d5d2: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79d5d6: /* 79d5d6: mov edx, dword ptr [0xb5bf38] */
  edx = R32((uint32_t)(0xb5bf38u));
/* 79d5dc: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79d5e0: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 79d5e2: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_79d5e5: /* 79d5e5: mov ecx, dword ptr [esi + 0x38c] */
  ecx = R32((uint32_t)(esi + 0x38cu));
/* 79d5eb: xor ecx, dword ptr [ebx + 0x38c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x38cu)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 79d5f1: test cl, 8 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79d5f4: je 0x79d63a */
  if (zf) goto L_79d63a;
L_79d5f6: /* 79d5f6: mov cl, byte ptr [0xb5bf3c] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0xb5bf3cu))) & 0xffu);
/* 79d5fc: mov eax, 2 */
  eax = 0x2u;
/* 79d601: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79d603: jne 0x79d62b */
  if (!zf) goto L_79d62b;
L_79d605: /* 79d605: or dword ptr [0xb5bf3c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bf3cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bf3cu), r);
  }
/* 79d60b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79d60d: push 0xacca2c */
  { uint32_t v = 0xacca2cu; esp -= 4; W32(esp, v); }
/* 79d612: push 0xb69418 */
  { uint32_t v = 0xb69418u; esp -= 4; W32(esp, v); }
/* 79d617: mov byte ptr [ebp - 4], al */
  W8((uint32_t)(ebp + 0xfffffffcu), (eax & 0xffu));
/* 79d61a: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79d61fu); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79d61f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79d622: mov dword ptr [0xb5bf34], eax */
  W32((uint32_t)(0xb5bf34u), eax);
/* 79d627: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_79d62b: /* 79d62b: mov edx, dword ptr [0xb5bf34] */
  edx = R32((uint32_t)(0xb5bf34u));
/* 79d631: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79d635: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 79d637: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_79d63a: /* 79d63a: mov ecx, dword ptr [esi + 0x388] */
  ecx = R32((uint32_t)(esi + 0x388u));
/* 79d640: cmp ecx, dword ptr [ebx + 0x388] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x388u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79d646: je 0x79d684 */
  if (zf) goto L_79d684;
L_79d648: /* 79d648: test byte ptr [0xb5bf3c], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0xb5bf3cu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79d64f: jne 0x79d675 */
  if (!zf) goto L_79d675;
L_79d651: /* 79d651: or dword ptr [0xb5bf3c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xb5bf3cu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(0xb5bf3cu), r);
  }
/* 79d658: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79d65a: push 0xacca3c */
  { uint32_t v = 0xacca3cu; esp -= 4; W32(esp, v); }
/* 79d65f: push 0xb69418 */
  { uint32_t v = 0xb69418u; esp -= 4; W32(esp, v); }
/* 79d664: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 79d668: call 0x6cad67 */
  esp -= 4; W32(esp, 0x79d66du); SPILL(); f_6cad67(); if (g_unwind) return; RELOAD();
/* 79d66d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79d670: mov dword ptr [0xb5bf30], eax */
  W32((uint32_t)(0xb5bf30u), eax);
L_79d675: /* 79d675: mov edx, dword ptr [0xb5bf30] */
  edx = R32((uint32_t)(0xb5bf30u));
/* 79d67b: movzx eax, word ptr [edx + 0x46] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x46u)));
/* 79d67f: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 79d681: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_79d684: /* 79d684: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79d687: mov eax, edi */
  eax = edi;
/* 79d689: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79d68a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79d68b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79d692: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79d693: mov esp, ebp */
  esp = ebp;
/* 79d695: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79d696: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_79d699(void) {
  LOAD_REGS();
L_79d699: /* 79d699: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79d69c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79d6a1: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 79d6a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79d6a5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 79d6a8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79d6adu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79d6ad(); return;
}

void f_79d6ad(void) {
  LOAD_REGS();
L_79d6ad: /* 79d6ad: push 0xa0ae70 */
  { uint32_t v = 0xa0ae70u; esp -= 4; W32(esp, v); }
/* 79d6b2: push 0xacca50 */
  { uint32_t v = 0xacca50u; esp -= 4; W32(esp, v); }
/* 79d6b7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79d6bdu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79d6bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79d6c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79d6c2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79d6c4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79d6c9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79d6c9: guest_badaddr(0x79d6c9); return;
}

void f_79d740(void) {
  LOAD_REGS();
L_79d740: /* 79d740: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79d741: mov ebp, esp */
  ebp = esp;
/* 79d743: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79d745: push 0x9ce220 */
  { uint32_t v = 0x9ce220u; esp -= 4; W32(esp, v); }
/* 79d74a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79d750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79d751: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79d758: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79d75b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79d75c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79d75d: mov esi, ecx */
  esi = ecx;
/* 79d75f: mov al, byte ptr [esi + 0x84] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x84u))) & 0xffu);
/* 79d765: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 79d767: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79d768: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79d76b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79d772: jns 0x79d8e5 */
  if (!sf) goto L_79d8e5;
L_79d778: /* 79d778: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79d77b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79d77d: jne 0x79d8e5 */
  if (!zf) goto L_79d8e5;
L_79d783: /* 79d783: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 79d786: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 79d78c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 79d78e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 79d791: jp 0x79d79c */
  if (pf) goto L_79d79c;
L_79d793: /* 79d793: mov dword ptr [ebp + 0x10], 0x42f80000 */
  W32((uint32_t)(ebp + 0x10u), 0x42f80000u);
/* 79d79a: jmp 0x79d7de */
  goto L_79d7de;
L_79d79c: /* 79d79c: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 79d79f: fcomp dword ptr [0xa0aef4] */
  fpu_com(ST0, F32((uint32_t)(0xa0aef4u)));
  FPOP();
/* 79d7a5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 79d7a7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 79d7aa: jp 0x79d7b4 */
  if (pf) goto L_79d7b4;
L_79d7ac: /* 79d7ac: fld dword ptr [0xa0aef4] */
  { double v = F32((uint32_t)(0xa0aef4u)); FPUSH(v); }
/* 79d7b2: jmp 0x79d7cf */
  goto L_79d7cf;
L_79d7b4: /* 79d7b4: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 79d7b7: fcomp dword ptr [0xa0a848] */
  fpu_com(ST0, F32((uint32_t)(0xa0a848u)));
  FPOP();
/* 79d7bd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 79d7bf: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 79d7c2: jp 0x79d7c9 */
  if (pf) goto L_79d7c9;
L_79d7c4: /* 79d7c4: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 79d7c7: jmp 0x79d7cf */
  goto L_79d7cf;
L_79d7c9: /* 79d7c9: fld dword ptr [0xa0a848] */
  { double v = F32((uint32_t)(0xa0a848u)); FPUSH(v); }
L_79d7cf: /* 79d7cf: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 79d7d5: fmul dword ptr [0xa0aef0] */
  ST0 = ST0 * (F32((uint32_t)(0xa0aef0u)));
/* 79d7db: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
L_79d7de: /* 79d7de: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 79d7e1: lea edi, [esi + 0x314] */
  edi = (uint32_t)(esi + 0x314u);
/* 79d7e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79d7e8: mov ecx, edi */
  ecx = edi;
/* 79d7ea: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x79d7f0u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 79d7f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79d7f2: jne 0x79d81e */
  if (!zf) goto L_79d81e;
L_79d7f4: /* 79d7f4: movzx ecx, byte ptr [esi + 0x31c] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x31cu)));
/* 79d7fb: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 79d7fe: fild dword ptr [ebp + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 79d801: fcomp dword ptr [ebp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x10u)));
  FPOP();
/* 79d804: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 79d806: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 79d809: jp 0x79d81e */
  if (pf) goto L_79d81e;
L_79d80b: /* 79d80b: mov edx, dword ptr [esi + 0x318] */
  edx = R32((uint32_t)(esi + 0x318u));
/* 79d811: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 79d814: shl edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 79d817: sar edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 79d81a: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79d81c: je 0x79d828 */
  if (zf) goto L_79d828;
L_79d81e: /* 79d81e: or dword ptr [esi + 0x80], 0x80000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x80u))); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x80u), r);
  }
L_79d828: /* 79d828: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 79d82b: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 79d82e: mov ecx, dword ptr [esi + 0x318] */
  ecx = R32((uint32_t)(esi + 0x318u));
/* 79d834: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 79d836: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 79d839: mov eax, dword ptr [esi + 0x318] */
  eax = R32((uint32_t)(esi + 0x318u));
/* 79d83f: xor ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 79d841: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 79d844: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 79d846: mov dword ptr [esi + 0x318], eax */
  W32((uint32_t)(esi + 0x318u), eax);
/* 79d84c: call 0x99c958 */
  esp -= 4; W32(esp, 0x79d851u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 79d851: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 79d854: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 79d85a: mov byte ptr [esi + 0x31c], al */
  W8((uint32_t)(esi + 0x31cu), (eax & 0xffu));
/* 79d860: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 79d862: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 79d865: jp 0x79d86f */
  if (pf) goto L_79d86f;
L_79d867: /* 79d867: fld dword ptr [0xa08220] */
  { double v = F32((uint32_t)(0xa08220u)); FPUSH(v); }
/* 79d86d: jmp 0x79d88a */
  goto L_79d88a;
L_79d86f: /* 79d86f: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 79d872: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 79d878: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 79d87a: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 79d87d: jp 0x79d884 */
  if (pf) goto L_79d884;
L_79d87f: /* 79d87f: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 79d882: jmp 0x79d88a */
  goto L_79d88a;
L_79d884: /* 79d884: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_79d88a: /* 79d88a: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 79d890: fmul dword ptr [0xa0a83c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a83cu)));
/* 79d896: call 0x99c958 */
  esp -= 4; W32(esp, 0x79d89bu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 79d89b: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 79d89e: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 79d8a4: mov byte ptr [esi + 0x31d], al */
  W8((uint32_t)(esi + 0x31du), (eax & 0xffu));
/* 79d8aa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 79d8ac: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 79d8af: jp 0x79d8b9 */
  if (pf) goto L_79d8b9;
L_79d8b1: /* 79d8b1: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 79d8b7: jmp 0x79d8d4 */
  goto L_79d8d4;
L_79d8b9: /* 79d8b9: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 79d8bc: fcomp dword ptr [0xa0aeec] */
  fpu_com(ST0, F32((uint32_t)(0xa0aeecu)));
  FPOP();
/* 79d8c2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 79d8c4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 79d8c7: jp 0x79d8ce */
  if (pf) goto L_79d8ce;
L_79d8c9: /* 79d8c9: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 79d8cc: jmp 0x79d8d4 */
  goto L_79d8d4;
L_79d8ce: /* 79d8ce: fld dword ptr [0xa0aeec] */
  { double v = F32((uint32_t)(0xa0aeecu)); FPUSH(v); }
L_79d8d4: /* 79d8d4: fmul dword ptr [0xa0a848] */
  ST0 = ST0 * (F32((uint32_t)(0xa0a848u)));
/* 79d8da: call 0x99c958 */
  esp -= 4; W32(esp, 0x79d8dfu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 79d8df: mov byte ptr [esi + 0x31e], al */
  W8((uint32_t)(esi + 0x31eu), (eax & 0xffu));
L_79d8e5: /* 79d8e5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79d8e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79d8e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79d8ea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79d8f1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79d8f2: mov esp, ebp */
  esp = ebp;
/* 79d8f4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79d8f5: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_79d8f8(void) {
  LOAD_REGS();
L_79d8f8: /* 79d8f8: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79d8fb: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79d900: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 79d903: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79d904: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 79d907: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79d90cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79d90c(); return;
}

void f_79d90c(void) {
  LOAD_REGS();
L_79d90c: /* 79d90c: push 0xa0aeb8 */
  { uint32_t v = 0xa0aeb8u; esp -= 4; W32(esp, v); }
/* 79d911: push 0xacca58 */
  { uint32_t v = 0xacca58u; esp -= 4; W32(esp, v); }
/* 79d916: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79d91cu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79d91c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79d91f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79d921: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79d923: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79d928u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79d928: guest_badaddr(0x79d928); return;
}

void f_79d9b0(void) {
  LOAD_REGS();
L_79d9b0: /* 79d9b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79d9b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79d9b2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79d9b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79d9b4: mov esi, ecx */
  esi = ecx;
/* 79d9b6: mov ecx, esp */
  ecx = esp;
/* 79d9b8: push 0x144 */
  { uint32_t v = 0x144u; esp -= 4; W32(esp, v); }
/* 79d9bd: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x79d9c3u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 79d9c3: mov ecx, esi */
  ecx = esi;
/* 79d9c5: call dword ptr [0xcfa2c4] */
  esp -= 4; W32(esp, 0x79d9cbu); SPILL(); f_4e29d2(); if (g_unwind) return; /* Core!?IsProbing@UObject@@QAEHVFName@@@Z */ RELOAD();
/* 79d9cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79d9cd: je 0x79d9f7 */
  if (zf) goto L_79d9f7;
L_79d9cf: /* 79d9cf: mov edx, dword ptr [0xb7e2d8] */
  edx = R32((uint32_t)(0xb7e2d8u));
/* 79d9d5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 79d9d9: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 79d9db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79d9dd: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 79d9e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79d9e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79d9e4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79d9e5: mov ecx, esi */
  ecx = esi;
/* 79d9e7: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 79d9eb: call dword ptr [0xcfa2c0] */
  esp -= 4; W32(esp, 0x79d9f1u); SPILL(); f_4e2aea(); if (g_unwind) return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */ RELOAD();
/* 79d9f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79d9f2: mov ecx, esi */
  ecx = esi;
/* 79d9f4: call dword ptr [edi + 0x10] */
  { uint32_t t = R32((uint32_t)(edi + 0x10u)); esp -= 4; W32(esp, 0x79d9f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_79d9f7: /* 79d9f7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79d9f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79d9f9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 79d9fa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_79da20(void) {
  LOAD_REGS();
L_79da20: /* 79da20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 79da24: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 79da26: jl 0x79da3c */
  if ((sf != of)) goto L_79da3c;
L_79da28: /* 79da28: cmp eax, dword ptr [ecx + 0x2a4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x2a4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 79da2e: jge 0x79da3c */
  if ((sf == of)) goto L_79da3c;
L_79da30: /* 79da30: mov ecx, dword ptr [ecx + 0x2a0] */
  ecx = R32((uint32_t)(ecx + 0x2a0u));
/* 79da36: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 79da39: ret 4 */
  esp += 8; SPILL(); return;
L_79da3c: /* 79da3c: xor eax, eax */
  eax = 0;
/* 79da3e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_79da60(void) {
  LOAD_REGS();
L_79da60: /* 79da60: test byte ptr [ecx + 0x84], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x84u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79da67: je 0x79da97 */
  if (zf) goto L_79da97;
L_79da69: /* 79da69: fld dword ptr [ecx + 0x9c] */
  { double v = F32((uint32_t)(ecx + 0x9cu)); FPUSH(v); }
/* 79da6f: fmul dword ptr [0xa0973c] */
  ST0 = ST0 * (F32((uint32_t)(0xa0973cu)));
/* 79da75: fcom dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
/* 79da7b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 79da7d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 79da80: jnp 0x79da8a */
  if (!pf) goto L_79da8a;
L_79da82: /* 79da82: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 79da84: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_79da8a: /* 79da8a: fmul dword ptr [ecx + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xa0u)));
/* 79da90: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 79da94: ret 0x14 */
  esp += 24; SPILL(); return;
L_79da97: /* 79da97: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 79da9b: fmul dword ptr [ecx + 0xa0] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xa0u)));
/* 79daa1: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_79dad0(void) {
  LOAD_REGS();
L_79dad0: /* 79dad0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79dad1: mov ebp, esp */
  ebp = esp;
/* 79dad3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79dad5: push 0x9ce230 */
  { uint32_t v = 0x9ce230u; esp -= 4; W32(esp, v); }
/* 79dada: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79dae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79dae1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79dae8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79daeb: mov eax, ecx */
  eax = ecx;
/* 79daed: lea ecx, [eax + 0x170] */
  ecx = (uint32_t)(eax + 0x170u);
/* 79daf3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79daf5: mov dword ptr [0xb734e8], edx */
  W32((uint32_t)(0xb734e8u), edx);
/* 79dafb: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 79dafe: mov dword ptr [0xb734ec], edx */
  W32((uint32_t)(0xb734ecu), edx);
/* 79db04: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 79db07: mov dword ptr [0xb734f0], ecx */
  W32((uint32_t)(0xb734f0u), ecx);
/* 79db0d: lea edx, [eax + 0x17c] */
  edx = (uint32_t)(eax + 0x17cu);
/* 79db13: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 79db15: mov dword ptr [0xb73500], ecx */
  W32((uint32_t)(0xb73500u), ecx);
/* 79db1b: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 79db1e: mov dword ptr [0xb73504], ecx */
  W32((uint32_t)(0xb73504u), ecx);
/* 79db24: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 79db27: mov dword ptr [0xb73508], edx */
  W32((uint32_t)(0xb73508u), edx);
/* 79db2d: lea ecx, [eax + 0x208] */
  ecx = (uint32_t)(eax + 0x208u);
/* 79db33: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79db35: mov dword ptr [0xb734f4], edx */
  W32((uint32_t)(0xb734f4u), edx);
/* 79db3b: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 79db3e: mov dword ptr [0xb734f8], edx */
  W32((uint32_t)(0xb734f8u), edx);
/* 79db44: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 79db47: mov dword ptr [0xb734fc], ecx */
  W32((uint32_t)(0xb734fcu), ecx);
/* 79db4d: lea edx, [eax + 0x214] */
  edx = (uint32_t)(eax + 0x214u);
/* 79db53: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 79db55: mov dword ptr [0xb7350c], ecx */
  W32((uint32_t)(0xb7350cu), ecx);
/* 79db5b: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 79db5e: mov dword ptr [0xb73510], ecx */
  W32((uint32_t)(0xb73510u), ecx);
/* 79db64: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 79db67: mov dword ptr [0xb73514], edx */
  W32((uint32_t)(0xb73514u), edx);
/* 79db6d: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 79db70: mov dword ptr [0xb5bf64], ecx */
  W32((uint32_t)(0xb5bf64u), ecx);
/* 79db76: mov edx, dword ptr [eax + 0x88] */
  edx = R32((uint32_t)(eax + 0x88u));
/* 79db7c: mov ecx, dword ptr [eax + 0x2d4] */
  ecx = R32((uint32_t)(eax + 0x2d4u));
/* 79db82: shr edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 79db84: mov dword ptr [0xb5bf5c], ecx */
  W32((uint32_t)(0xb5bf5cu), ecx);
/* 79db8a: and edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 79db8d: mov dword ptr [0xb5bf60], edx */
  W32((uint32_t)(0xb5bf60u), edx);
/* 79db93: mov edx, dword ptr [eax + 0x2d8] */
  edx = R32((uint32_t)(eax + 0x2d8u));
/* 79db99: mov dword ptr [0xb5bf58], edx */
  W32((uint32_t)(0xb5bf58u), edx);
/* 79db9f: lea ecx, [eax + 0x314] */
  ecx = (uint32_t)(eax + 0x314u);
/* 79dba5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79dba7: mov dword ptr [0xb73518], edx */
  W32((uint32_t)(0xb73518u), edx);
/* 79dbad: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 79dbb0: mov dword ptr [0xb7351c], edx */
  W32((uint32_t)(0xb7351cu), edx);
/* 79dbb6: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 79dbb9: mov dword ptr [0xb73520], ecx */
  W32((uint32_t)(0xb73520u), ecx);
/* 79dbbf: mov edx, dword ptr [eax + 0x284] */
  edx = R32((uint32_t)(eax + 0x284u));
/* 79dbc5: mov dword ptr [0xb5bf54], edx */
  W32((uint32_t)(0xb5bf54u), edx);
/* 79dbcb: lea ecx, [eax + 0x288] */
  ecx = (uint32_t)(eax + 0x288u);
/* 79dbd1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79dbd3: mov dword ptr [0xb73530], edx */
  W32((uint32_t)(0xb73530u), edx);
/* 79dbd9: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 79dbdc: mov dword ptr [0xb73534], edx */
  W32((uint32_t)(0xb73534u), edx);
/* 79dbe2: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 79dbe5: mov dword ptr [0xb73538], ecx */
  W32((uint32_t)(0xb73538u), ecx);
/* 79dbeb: mov dl, byte ptr [eax + 0x51] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x51u))) & 0xffu);
/* 79dbee: mov byte ptr [0xb5bf50], dl */
  W8((uint32_t)(0xb5bf50u), (edx & 0xffu));
/* 79dbf4: mov ecx, dword ptr [eax + 0x2ac] */
  ecx = R32((uint32_t)(eax + 0x2acu));
/* 79dbfa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79dbfb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79dbfc: mov dword ptr [0xb5bf48], ecx */
  W32((uint32_t)(0xb5bf48u), ecx);
/* 79dc02: test byte ptr [eax + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79dc09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79dc0a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79dc0d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79dc14: je 0x79dc28 */
  if (zf) goto L_79dc28;
L_79dc16: /* 79dc16: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 79dc1c: mov ecx, dword ptr [ecx + 0xec] */
  ecx = R32((uint32_t)(ecx + 0xecu));
/* 79dc22: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79dc24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79dc25: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x79dc28u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_79dc28: /* 79dc28: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79dc2b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79dc2c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79dc2d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79dc34: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79dc35: mov esp, ebp */
  esp = ebp;
/* 79dc37: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79dc38: ret  */
  esp += 4; SPILL(); return;
}

void f_79dc39(void) {
  LOAD_REGS();
L_79dc39: /* 79dc39: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79dc3c: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79dc41: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 79dc44: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79dc45: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 79dc48: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79dc4du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79dc4d(); return;
}

void f_79dc4d(void) {
  LOAD_REGS();
L_79dc4d: /* 79dc4d: push 0xa0aef8 */
  { uint32_t v = 0xa0aef8u; esp -= 4; W32(esp, v); }
/* 79dc52: push 0xacca68 */
  { uint32_t v = 0xacca68u; esp -= 4; W32(esp, v); }
/* 79dc57: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79dc5du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79dc5d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79dc60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79dc62: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79dc64: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79dc69u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79dc69: guest_badaddr(0x79dc69); return;
}

void f_79dce0(void) {
  LOAD_REGS();
L_79dce0: /* 79dce0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79dce1: mov ebp, esp */
  ebp = esp;
/* 79dce3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79dce5: push 0x9ce240 */
  { uint32_t v = 0x9ce240u; esp -= 4; W32(esp, v); }
/* 79dcea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79dcf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79dcf1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79dcf8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79dcfb: mov eax, ecx */
  eax = ecx;
/* 79dcfd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79dcfe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79dcff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79dd00: lea esi, [eax + 0x574] */
  esi = (uint32_t)(eax + 0x574u);
/* 79dd06: mov ecx, 9 */
  ecx = 0x9u;
/* 79dd0b: mov edi, 0xb73540 */
  edi = 0xb73540u;
/* 79dd10: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 79dd12: mov ecx, dword ptr [eax + 0x510] */
  ecx = R32((uint32_t)(eax + 0x510u));
/* 79dd18: mov dword ptr [0xb7353c], ecx */
  W32((uint32_t)(0xb7353cu), ecx);
/* 79dd1e: mov edx, dword ptr [eax + 0x480] */
  edx = R32((uint32_t)(eax + 0x480u));
/* 79dd24: mov ecx, eax */
  ecx = eax;
/* 79dd26: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79dd29: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79dd30: mov dword ptr [0xb5bf4c], edx */
  W32((uint32_t)(0xb5bf4cu), edx);
/* 79dd36: call 0x6c945d */
  esp -= 4; W32(esp, 0x79dd3bu); SPILL(); f_6c945d(); if (g_unwind) return; RELOAD();
/* 79dd3b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79dd3e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79dd3f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79dd40: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79dd47: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79dd48: mov esp, ebp */
  esp = ebp;
/* 79dd4a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79dd4b: ret  */
  esp += 4; SPILL(); return;
}

void f_79dd4c(void) {
  LOAD_REGS();
L_79dd4c: /* 79dd4c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79dd4f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79dd54: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 79dd57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79dd58: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 79dd5b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79dd60u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79dd60(); return;
}

void f_79dd60(void) {
  LOAD_REGS();
L_79dd60: /* 79dd60: push 0xa0af2c */
  { uint32_t v = 0xa0af2cu; esp -= 4; W32(esp, v); }
/* 79dd65: push 0xacca70 */
  { uint32_t v = 0xacca70u; esp -= 4; W32(esp, v); }
/* 79dd6a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79dd70u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79dd70: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79dd73: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79dd75: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79dd77: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79dd7cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79dd7c: guest_badaddr(0x79dd7c); return;
}

void f_79ddb0(void) {
  LOAD_REGS();
L_79ddb0: /* 79ddb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79ddb1: mov ebp, esp */
  ebp = esp;
/* 79ddb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79ddb5: push 0x9ce250 */
  { uint32_t v = 0x9ce250u; esp -= 4; W32(esp, v); }
/* 79ddba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79ddc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79ddc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79ddc8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79ddcb: lea eax, [ecx + 0x670] */
  eax = (uint32_t)(ecx + 0x670u);
/* 79ddd1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 79ddd3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79ddd4: mov dword ptr [0xb73524], edx */
  W32((uint32_t)(0xb73524u), edx);
/* 79ddda: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 79dddd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79ddde: mov dword ptr [0xb73528], edx */
  W32((uint32_t)(0xb73528u), edx);
/* 79dde4: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 79dde7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79dde8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79ddeb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79ddf2: mov dword ptr [0xb7352c], eax */
  W32((uint32_t)(0xb7352cu), eax);
/* 79ddf7: call 0x6c945d */
  esp -= 4; W32(esp, 0x79ddfcu); SPILL(); f_6c945d(); if (g_unwind) return; RELOAD();
/* 79ddfc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79ddff: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79de00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79de01: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79de08: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79de09: mov esp, ebp */
  esp = ebp;
/* 79de0b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79de0c: ret  */
  esp += 4; SPILL(); return;
}

void f_79de0d(void) {
  LOAD_REGS();
L_79de0d: /* 79de0d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79de10: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79de15: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 79de18: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79de19: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 79de1c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79de21u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79de21(); return;
}

void f_79de21(void) {
  LOAD_REGS();
L_79de21: /* 79de21: push 0xa0af60 */
  { uint32_t v = 0xa0af60u; esp -= 4; W32(esp, v); }
/* 79de26: push 0xacca78 */
  { uint32_t v = 0xacca78u; esp -= 4; W32(esp, v); }
/* 79de2b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79de31u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79de31: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79de34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79de36: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79de38: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79de3du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79de3d: guest_badaddr(0x79de3d); return;
}

void f_79de70(void) {
  LOAD_REGS();
L_79de70: /* 79de70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79de71: mov ebp, esp */
  ebp = esp;
/* 79de73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79de75: push 0x9ce260 */
  { uint32_t v = 0x9ce260u; esp -= 4; W32(esp, v); }
/* 79de7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79de80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79de81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79de88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79de8b: mov eax, dword ptr [ecx + 0x50c] */
  eax = R32((uint32_t)(ecx + 0x50cu));
/* 79de91: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79de92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79de93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79de94: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79de97: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79de9e: mov dword ptr [0xb5bf44], eax */
  W32((uint32_t)(0xb5bf44u), eax);
/* 79dea3: call 0x6c945d */
  esp -= 4; W32(esp, 0x79dea8u); SPILL(); f_6c945d(); if (g_unwind) return; RELOAD();
/* 79dea8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79deab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79deac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79dead: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79deb4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79deb5: mov esp, ebp */
  esp = ebp;
/* 79deb7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79deb8: ret  */
  esp += 4; SPILL(); return;
}

void f_79deb9(void) {
  LOAD_REGS();
L_79deb9: /* 79deb9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79debc: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79dec1: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 79dec4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 79dec5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 79dec8: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79decdu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79decd(); return;
}

void f_79decd(void) {
  LOAD_REGS();
L_79decd: /* 79decd: push 0xa0af94 */
  { uint32_t v = 0xa0af94u; esp -= 4; W32(esp, v); }
/* 79ded2: push 0xacca80 */
  { uint32_t v = 0xacca80u; esp -= 4; W32(esp, v); }
/* 79ded7: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79deddu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79dedd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79dee0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79dee2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79dee4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79dee9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79dee9: guest_badaddr(0x79dee9); return;
}

void f_79df10(void) {
  LOAD_REGS();
L_79df10: /* 79df10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79df11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79df12: mov edi, dword ptr [0xb734e8] */
  edi = R32((uint32_t)(0xb734e8u));
/* 79df18: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 79df1a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 79df1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79df1e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79df21: mov esi, esp */
  esi = esp;
/* 79df23: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 79df25: mov edi, dword ptr [0xb734ec] */
  edi = R32((uint32_t)(0xb734ecu));
/* 79df2b: mov eax, ecx */
  eax = ecx;
/* 79df2d: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 79df33: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79df35: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 79df38: mov edi, dword ptr [0xb734f0] */
  edi = R32((uint32_t)(0xb734f0u));
/* 79df3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79df3f: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 79df42: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x79df48u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79df48: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79df49: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79df4a: ret  */
  esp += 4; SPILL(); return;
}

void f_79df60(void) {
  LOAD_REGS();
L_79df60: /* 79df60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79df61: mov esi, ecx */
  esi = ecx;
/* 79df63: call 0x6c937c */
  esp -= 4; W32(esp, 0x79df68u); SPILL(); f_6c937c(); if (g_unwind) return; RELOAD();
/* 79df68: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79df6d: je 0x79df7c */
  if (zf) goto L_79df7c;
L_79df6f: /* 79df6f: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 79df74: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 79df76: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79df78: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79df79: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x79df7cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_79df7c: /* 79df7c: mov eax, esi */
  eax = esi;
/* 79df7e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79df7f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_79dfa0(void) {
  LOAD_REGS();
L_79dfa0: /* 79dfa0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79dfa1: mov ebp, esp */
  ebp = esp;
/* 79dfa3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79dfa5: push 0x9ce270 */
  { uint32_t v = 0x9ce270u; esp -= 4; W32(esp, v); }
/* 79dfaa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79dfb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79dfb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79dfb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79dfbb: test byte ptr [ecx + 0x88], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x88u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79dfc2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79dfc3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79dfc4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79dfc5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79dfc8: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79dfcf: je 0x79dfed */
  if (zf) goto L_79dfed;
L_79dfd1: /* 79dfd1: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 79dfd7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79dfd9: je 0x79dfed */
  if (zf) goto L_79dfed;
L_79dfdb: /* 79dfdb: mov eax, dword ptr [eax + 0xec] */
  eax = R32((uint32_t)(eax + 0xecu));
/* 79dfe1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79dfe3: je 0x79dfed */
  if (zf) goto L_79dfed;
L_79dfe5: /* 79dfe5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 79dfe7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79dfe8: mov ecx, eax */
  ecx = eax;
/* 79dfea: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x79dfedu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_79dfed: /* 79dfed: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79dff0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79dff1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79dff2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79dff9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79dffa: mov esp, ebp */
  esp = ebp;
/* 79dffc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79dffd: ret  */
  esp += 4; SPILL(); return;
}

void f_79dffe(void) {
  LOAD_REGS();
L_79dffe: /* 79dffe: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79e001: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79e006: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 79e009: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79e00a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 79e00d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79e012u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79e012(); return;
}

void f_79e012(void) {
  LOAD_REGS();
L_79e012: /* 79e012: push 0xa0afd4 */
  { uint32_t v = 0xa0afd4u; esp -= 4; W32(esp, v); }
/* 79e017: push 0xaccbc4 */
  { uint32_t v = 0xaccbc4u; esp -= 4; W32(esp, v); }
/* 79e01c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79e022u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79e022: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79e025: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79e027: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79e029: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79e02eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79e02e: guest_badaddr(0x79e02e); return;
}

void f_79e060(void) {
  LOAD_REGS();
L_79e060: /* 79e060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79e061: mov ebp, esp */
  ebp = esp;
/* 79e063: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79e065: push 0x9ce280 */
  { uint32_t v = 0x9ce280u; esp -= 4; W32(esp, v); }
/* 79e06a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79e070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79e071: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79e078: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79e07b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79e07c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79e07d: mov esi, ecx */
  esi = ecx;
/* 79e07f: mov al, byte ptr [esi + 0x88] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x88u))) & 0xffu);
/* 79e085: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
/* 79e087: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79e089: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79e08a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79e08d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79e094: je 0x79e0b2 */
  if (zf) goto L_79e0b2;
L_79e096: /* 79e096: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 79e09c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e09e: je 0x79e0b2 */
  if (zf) goto L_79e0b2;
L_79e0a0: /* 79e0a0: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 79e0a6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e0a8: je 0x79e0b2 */
  if (zf) goto L_79e0b2;
L_79e0aa: /* 79e0aa: mov eax, ecx */
  eax = ecx;
/* 79e0ac: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 79e0ae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79e0af: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x79e0b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_79e0b2: /* 79e0b2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 79e0b5: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 79e0b8: mov dword ptr [esi + 0x2d4], eax */
  W32((uint32_t)(esi + 0x2d4u), eax);
/* 79e0be: test byte ptr [esi + 0x88], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x88u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79e0c4: mov dword ptr [esi + 0x2d8], ecx */
  W32((uint32_t)(esi + 0x2d8u), ecx);
/* 79e0ca: je 0x79e0e8 */
  if (zf) goto L_79e0e8;
L_79e0cc: /* 79e0cc: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 79e0d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e0d4: je 0x79e0e8 */
  if (zf) goto L_79e0e8;
L_79e0d6: /* 79e0d6: mov ecx, dword ptr [eax + 0xec] */
  ecx = R32((uint32_t)(eax + 0xecu));
/* 79e0dc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e0de: je 0x79e0e8 */
  if (zf) goto L_79e0e8;
L_79e0e0: /* 79e0e0: mov eax, ecx */
  eax = ecx;
/* 79e0e2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 79e0e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79e0e5: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x79e0e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_79e0e8: /* 79e0e8: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 79e0ee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79e0f1: or eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 79e0f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79e0f7: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 79e0fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79e0fe: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79e105: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79e106: mov esp, ebp */
  esp = ebp;
/* 79e108: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79e109: ret 8 */
  esp += 12; SPILL(); return;
}

void f_79e10c(void) {
  LOAD_REGS();
L_79e10c: /* 79e10c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79e10f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79e114: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 79e117: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79e118: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 79e11b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79e120u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79e120(); return;
}

void f_79e120(void) {
  LOAD_REGS();
L_79e120: /* 79e120: push 0xa0b004 */
  { uint32_t v = 0xa0b004u; esp -= 4; W32(esp, v); }
/* 79e125: push 0xaccbe4 */
  { uint32_t v = 0xaccbe4u; esp -= 4; W32(esp, v); }
/* 79e12a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79e130u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79e130: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79e133: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79e135: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79e137: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79e13cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79e13c: guest_badaddr(0x79e13c); return;
}

void f_79e180(void) {
  LOAD_REGS();
L_79e180: /* 79e180: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79e183: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79e184: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79e185: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79e186: mov esi, ecx */
  esi = ecx;
/* 79e188: mov eax, dword ptr [esi + 0x280] */
  eax = R32((uint32_t)(esi + 0x280u));
/* 79e18e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e190: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79e191: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
/* 79e195: je 0x79e1bf */
  if (zf) goto L_79e1bf;
L_79e197: /* 79e197: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 79e199: call dword ptr [eax + 0x174] */
  { uint32_t t = R32((uint32_t)(eax + 0x174u)); esp -= 4; W32(esp, 0x79e19fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e19f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e1a1: je 0x79e1bf */
  if (zf) goto L_79e1bf;
L_79e1a3: /* 79e1a3: mov eax, dword ptr [edi + 0x280] */
  eax = R32((uint32_t)(edi + 0x280u));
/* 79e1a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e1ab: je 0x79e1bf */
  if (zf) goto L_79e1bf;
L_79e1ad: /* 79e1ad: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 79e1af: mov ecx, edi */
  ecx = edi;
/* 79e1b1: call dword ptr [edx + 0x174] */
  { uint32_t t = R32((uint32_t)(edx + 0x174u)); esp -= 4; W32(esp, 0x79e1b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e1b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e1b9: jne 0x79e429 */
  if (!zf) goto L_79e429;
L_79e1bf: /* 79e1bf: cmp edi, dword ptr [esi + 0xb0] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xb0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79e1c5: je 0x79e429 */
  if (zf) goto L_79e429;
L_79e1cb: /* 79e1cb: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 79e1cd: je 0x79e429 */
  if (zf) goto L_79e429;
L_79e1d3: /* 79e1d3: mov ecx, esi */
  ecx = esi;
/* 79e1d5: call 0x6c4773 */
  esp -= 4; W32(esp, 0x79e1dau); SPILL(); f_6c4773(); if (g_unwind) return; RELOAD();
/* 79e1da: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e1dc: je 0x79e1ed */
  if (zf) goto L_79e1ed;
L_79e1de: /* 79e1de: mov ecx, edi */
  ecx = edi;
/* 79e1e0: call 0x6c4773 */
  esp -= 4; W32(esp, 0x79e1e5u); SPILL(); f_6c4773(); if (g_unwind) return; RELOAD();
/* 79e1e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e1e7: jne 0x79e429 */
  if (!zf) goto L_79e429;
L_79e1ed: /* 79e1ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79e1ee: mov ecx, esi */
  ecx = esi;
/* 79e1f0: call 0x6c2626 */
  esp -= 4; W32(esp, 0x79e1f5u); SPILL(); f_6c2626(); if (g_unwind) return; RELOAD();
/* 79e1f5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e1f7: jne 0x79e429 */
  if (!zf) goto L_79e429;
L_79e1fd: /* 79e1fd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79e1fe: mov ecx, edi */
  ecx = edi;
/* 79e200: call 0x6c2626 */
  esp -= 4; W32(esp, 0x79e205u); SPILL(); f_6c2626(); if (g_unwind) return; RELOAD();
/* 79e205: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e207: jne 0x79e429 */
  if (!zf) goto L_79e429;
L_79e20d: /* 79e20d: mov al, byte ptr [esi + 0x83] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x83u))) & 0xffu);
/* 79e213: mov ebx, 1 */
  ebx = 0x1u;
/* 79e218: test bl, al */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79e21a: je 0x79e231 */
  if (zf) goto L_79e231;
L_79e21c: /* 79e21c: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 79e221: mov ecx, edi */
  ecx = edi;
/* 79e223: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x79e229u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 79e229: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e22b: je 0x79e429 */
  if (zf) goto L_79e429;
L_79e231: /* 79e231: test byte ptr [edi + 0x83], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x83u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79e237: je 0x79e24e */
  if (zf) goto L_79e24e;
L_79e239: /* 79e239: push 0xcc74c0 */
  { uint32_t v = 0xcc74c0u; esp -= 4; W32(esp, v); }
/* 79e23e: mov ecx, esi */
  ecx = esi;
/* 79e240: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x79e246u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 79e246: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e248: je 0x79e429 */
  if (zf) goto L_79e429;
L_79e24e: /* 79e24e: mov cl, byte ptr [esi + 0x88] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x88u))) & 0xffu);
/* 79e254: mov al, 0x80 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
/* 79e256: test al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79e258: je 0x79e429 */
  if (zf) goto L_79e429;
L_79e25e: /* 79e25e: test byte ptr [edi + 0x88], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x88u))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79e264: je 0x79e429 */
  if (zf) goto L_79e429;
L_79e26a: /* 79e26a: push 0xcc8cb8 */
  { uint32_t v = 0xcc8cb8u; esp -= 4; W32(esp, v); }
/* 79e26f: mov ecx, esi */
  ecx = esi;
/* 79e271: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x79e277u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 79e277: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e279: jne 0x79e37a */
  if (!zf) goto L_79e37a;
L_79e27f: /* 79e27f: push 0xcc8cb8 */
  { uint32_t v = 0xcc8cb8u; esp -= 4; W32(esp, v); }
/* 79e284: mov ecx, edi */
  ecx = edi;
/* 79e286: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x79e28cu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 79e28c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e28e: je 0x79e297 */
  if (zf) goto L_79e297;
L_79e290: /* 79e290: mov ebx, edi */
  ebx = edi;
/* 79e292: jmp 0x79e37e */
  goto L_79e37e;
L_79e297: /* 79e297: mov ecx, esi */
  ecx = esi;
/* 79e299: call 0x6c4a0c */
  esp -= 4; W32(esp, 0x79e29eu); SPILL(); f_6c4a0c(); if (g_unwind) return; RELOAD();
/* 79e29e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e2a0: jne 0x79e37a */
  if (!zf) goto L_79e37a;
L_79e2a6: /* 79e2a6: push 0xb80210 */
  { uint32_t v = 0xb80210u; esp -= 4; W32(esp, v); }
/* 79e2ab: mov ecx, esi */
  ecx = esi;
/* 79e2ad: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x79e2b3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 79e2b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e2b5: jne 0x79e37a */
  if (!zf) goto L_79e37a;
L_79e2bb: /* 79e2bb: mov ecx, edi */
  ecx = edi;
/* 79e2bd: call 0x6c4a0c */
  esp -= 4; W32(esp, 0x79e2c2u); SPILL(); f_6c4a0c(); if (g_unwind) return; RELOAD();
/* 79e2c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e2c4: jne 0x79e290 */
  if (!zf) goto L_79e290;
L_79e2c6: /* 79e2c6: push 0xb80210 */
  { uint32_t v = 0xb80210u; esp -= 4; W32(esp, v); }
/* 79e2cb: mov ecx, edi */
  ecx = edi;
/* 79e2cd: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x79e2d3u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 79e2d3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e2d5: jne 0x79e290 */
  if (!zf) goto L_79e290;
L_79e2d7: /* 79e2d7: mov ecx, esi */
  ecx = esi;
/* 79e2d9: call 0x6c4773 */
  esp -= 4; W32(esp, 0x79e2deu); SPILL(); f_6c4773(); if (g_unwind) return; RELOAD();
/* 79e2de: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e2e0: jne 0x79e37a */
  if (!zf) goto L_79e37a;
L_79e2e6: /* 79e2e6: mov ecx, edi */
  ecx = edi;
/* 79e2e8: call 0x6c4773 */
  esp -= 4; W32(esp, 0x79e2edu); SPILL(); f_6c4773(); if (g_unwind) return; RELOAD();
/* 79e2ed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e2ef: je 0x79e2f8 */
  if (zf) goto L_79e2f8;
L_79e2f1: /* 79e2f1: mov ebx, edi */
  ebx = edi;
/* 79e2f3: jmp 0x79e37e */
  goto L_79e37e;
L_79e2f8: /* 79e2f8: fld dword ptr [esi + 0x178] */
  { double v = F32((uint32_t)(esi + 0x178u)); FPUSH(v); }
/* 79e2fe: fsub dword ptr [edi + 0x178] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x178u)));
/* 79e304: fld dword ptr [edi + 0x2d8] */
  { double v = F32((uint32_t)(edi + 0x2d8u)); FPUSH(v); }
/* 79e30a: fadd dword ptr [esi + 0x2d8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x2d8u)));
/* 79e310: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 79e312: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 79e314: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 79e316: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 79e318: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 79e31a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 79e31c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 79e31e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79e321: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 79e323: jne 0x79e429 */
  if (!zf) goto L_79e429;
L_79e329: /* 79e329: fld dword ptr [esi + 0x170] */
  { double v = F32((uint32_t)(esi + 0x170u)); FPUSH(v); }
/* 79e32f: fsub dword ptr [edi + 0x170] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x170u)));
/* 79e335: fld dword ptr [esi + 0x174] */
  { double v = F32((uint32_t)(esi + 0x174u)); FPUSH(v); }
/* 79e33b: fsub dword ptr [edi + 0x174] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x174u)));
/* 79e341: fld dword ptr [edi + 0x2d4] */
  { double v = F32((uint32_t)(edi + 0x2d4u)); FPUSH(v); }
/* 79e347: fadd dword ptr [esi + 0x2d4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x2d4u)));
/* 79e34d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 79e34f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 79e351: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 79e353: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 79e355: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 79e357: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 79e359: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 79e35b: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 79e35d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 79e35f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 79e361: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 79e363: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 79e366: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 79e368: jne 0x79e429 */
  if (!zf) goto L_79e429;
L_79e36e: /* 79e36e: mov eax, ebx */
  eax = ebx;
/* 79e370: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79e371: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79e372: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79e373: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79e374: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79e377: ret 8 */
  esp += 12; SPILL(); return;
L_79e37a: /* 79e37a: mov ebx, esi */
  ebx = esi;
/* 79e37c: mov esi, edi */
  esi = edi;
L_79e37e: /* 79e37e: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 79e382: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e384: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* 79e38c: jne 0x79e396 */
  if (!zf) goto L_79e396;
L_79e38e: /* 79e38e: lea eax, [esp + 0x28] */
  eax = (uint32_t)(esp + 0x28u);
/* 79e392: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
L_79e396: /* 79e396: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 79e398: mov ecx, esi */
  ecx = esi;
/* 79e39a: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x79e3a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e3a0: mov edi, eax */
  edi = eax;
/* 79e3a2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 79e3a4: mov ecx, esi */
  ecx = esi;
/* 79e3a6: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x79e3acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e3ac: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 79e3ae: mov ecx, ebx */
  ecx = ebx;
/* 79e3b0: mov ebp, eax */
  ebp = eax;
/* 79e3b2: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x79e3b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e3b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79e3b9: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 79e3bd: mov dword ptr [esp + 0x60], eax */
  W32((uint32_t)(esp + 0x60u), eax);
/* 79e3c1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 79e3c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79e3c4: mov ecx, edi */
  ecx = edi;
/* 79e3c6: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x79e3ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e3cc: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* 79e3cf: mov edi, eax */
  edi = eax;
/* 79e3d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79e3d2: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* 79e3d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79e3d7: mov ecx, ebp */
  ecx = ebp;
/* 79e3d9: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x79e3dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e3df: mov ebp, dword ptr [edi] */
  ebp = R32((uint32_t)(edi));
/* 79e3e1: mov ecx, dword ptr [esp + 0x5c] */
  ecx = R32((uint32_t)(esp + 0x5cu));
/* 79e3e5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 79e3e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79e3e9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79e3ec: mov esi, esp */
  esi = esp;
/* 79e3ee: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 79e3f0: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* 79e3f3: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 79e3f6: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 79e3f9: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* 79e3fc: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 79e3fe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79e401: mov esi, esp */
  esi = esp;
/* 79e403: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 79e405: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 79e408: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 79e40b: mov dword ptr [esi + 4], edi */
  W32((uint32_t)(esi + 0x4u), edi);
/* 79e40e: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 79e411: mov eax, dword ptr [esp + 0x7c] */
  eax = R32((uint32_t)(esp + 0x7cu));
/* 79e415: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79e416: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79e417: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x79e41au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 79e41a: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 79e41c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 79e41e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 79e41f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79e420: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79e421: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79e422: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79e423: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79e426: ret 8 */
  esp += 12; SPILL(); return;
L_79e429: /* 79e429: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79e42a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79e42b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79e42c: xor eax, eax */
  eax = 0;
/* 79e42e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79e42f: add esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79e432: ret 8 */
  esp += 12; SPILL(); return;
}

void f_79e4f0(void) {
  LOAD_REGS();
L_79e4f0: /* 79e4f0: mov eax, dword ptr [ecx + 0xd0] */
  eax = R32((uint32_t)(ecx + 0xd0u));
/* 79e4f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e4f8: jne 0x79e51e */
  if (!zf) goto L_79e51e;
L_79e4fa: /* 79e4fa: mov eax, dword ptr [ecx + 0x54] */
  eax = R32((uint32_t)(ecx + 0x54u));
/* 79e4fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e4ff: jne 0x79e51e */
  if (!zf) goto L_79e51e;
L_79e501: /* 79e501: mov eax, dword ptr [ecx + 0x2b4] */
  eax = R32((uint32_t)(ecx + 0x2b4u));
/* 79e507: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e509: jne 0x79e51e */
  if (!zf) goto L_79e51e;
L_79e50b: /* 79e50b: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 79e511: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 79e514: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e516: je 0x79e51c */
  if (zf) goto L_79e51c;
L_79e518: /* 79e518: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 79e51b: ret  */
  esp += 4; SPILL(); return;
L_79e51c: /* 79e51c: xor eax, eax */
  eax = 0;
L_79e51e: /* 79e51e: ret  */
  esp += 4; SPILL(); return;
}

void f_79e530(void) {
  LOAD_REGS();
L_79e530: /* 79e530: mov eax, dword ptr [ecx + 0x280] */
  eax = R32((uint32_t)(ecx + 0x280u));
/* 79e536: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e538: jne 0x79e54d */
  if (!zf) goto L_79e54d;
L_79e53a: /* 79e53a: mov eax, dword ptr [ecx + 0xb4] */
  eax = R32((uint32_t)(ecx + 0xb4u));
/* 79e540: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 79e543: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e545: je 0x79e54b */
  if (zf) goto L_79e54b;
L_79e547: /* 79e547: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 79e54a: ret  */
  esp += 4; SPILL(); return;
L_79e54b: /* 79e54b: xor eax, eax */
  eax = 0;
L_79e54d: /* 79e54d: ret  */
  esp += 4; SPILL(); return;
}

void f_79e560(void) {
  LOAD_REGS();
L_79e560: /* 79e560: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 79e561: mov ebp, esp */
  ebp = esp;
/* 79e563: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 79e565: push 0x9ce290 */
  { uint32_t v = 0x9ce290u; esp -= 4; W32(esp, v); }
/* 79e56a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 79e570: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 79e571: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 79e578: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 79e57b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 79e57c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79e57d: mov esi, ecx */
  esi = ecx;
/* 79e57f: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 79e582: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e584: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 79e585: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 79e588: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 79e58f: je 0x79e597 */
  if (zf) goto L_79e597;
L_79e591: /* 79e591: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79e592: call 0x6c123a */
  esp -= 4; W32(esp, 0x79e597u); SPILL(); f_6c123a(); if (g_unwind) return; RELOAD();
L_79e597: /* 79e597: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 79e59a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 79e59c: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 79e59f: je 0x79e5a7 */
  if (zf) goto L_79e5a7;
L_79e5a1: /* 79e5a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 79e5a2: call 0x6cc81f */
  esp -= 4; W32(esp, 0x79e5a7u); SPILL(); f_6cc81f(); if (g_unwind) return; RELOAD();
L_79e5a7: /* 79e5a7: mov eax, dword ptr [esi + 0x80] */
  eax = R32((uint32_t)(esi + 0x80u));
/* 79e5ad: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 79e5b0: or eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 79e5b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 79e5b6: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 79e5bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 79e5bd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 79e5c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 79e5c5: mov esp, ebp */
  esp = ebp;
/* 79e5c7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 79e5c8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_79e5cb(void) {
  LOAD_REGS();
L_79e5cb: /* 79e5cb: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 79e5ce: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 79e5d3: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 79e5d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 79e5d7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 79e5da: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79e5dfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_79e5df(); return;
}

void f_79e5df(void) {
  LOAD_REGS();
L_79e5df: /* 79e5df: push 0xa0b040 */
  { uint32_t v = 0xa0b040u; esp -= 4; W32(esp, v); }
/* 79e5e4: push 0xacccbc */
  { uint32_t v = 0xacccbcu; esp -= 4; W32(esp, v); }
/* 79e5e9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x79e5efu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 79e5ef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 79e5f2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79e5f4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 79e5f6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x79e5fbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_79e5fb: guest_badaddr(0x79e5fb); return;
}
